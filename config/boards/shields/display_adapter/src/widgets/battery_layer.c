#include <zephyr/kernel.h>
#include <zephyr/bluetooth/services/bas.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/battery.h>
#include <zmk/ble.h>
#include <zmk/display.h>
#include <zmk/endpoints.h>
#include <zmk/events/battery_state_changed.h>
#include <zmk/events/layer_state_changed.h>
#include <zmk/event_manager.h>
#include <zmk/keymap.h>

#include <battery_layer.h>

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

struct battery_state {
    uint8_t source;
    char level[6];
};

struct battery_state battery_objects[ZMK_SPLIT_BLE_PERIPHERAL_COUNT];


static void set_battery_symbol(lv_obj_t *label, struct battery_state bat_state) {
    if (bat_state.source >= ZMK_SPLIT_BLE_PERIPHERAL_COUNT) {
        return;
    }
    char label_out[ZMK_SPLIT_BLE_PERIPHERAL_COUNT * 4 + 2] = "\0"
    // update battery level
    sprintf(battery_objects[bat_state.source]->level, "%4u %% ", bat_state.level)
    
    for (int i = 0; i < ZMK_SPLIT_BLE_PERIPHERAL_COUNT; i++) {
        strcat(label_out, battery_objects[i]->level)
    }
    
    lv_label_set_text_fmt(label, "%s > %s", label_out, top_layer.label);
}

void battery_status_update_cb(struct battery_state state) {
    struct zmk_widget_battery_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_battery_symbol(widget->obj, state); }
}

static struct battery_state battery_status_get_state(const zmk_event_t *eh) {
    const struct zmk_peripheral_battery_state_changed *ev = as_zmk_peripheral_battery_state_changed(eh);
    return (struct battery_state){
        .source = ev->source,
        .level = ev->state_of_charge,
    };
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_battery_status, struct battery_state, battery_status_update_cb, battery_status_get_state)
ZMK_SUBSCRIPTION(widget_battery_status, zmk_peripheral_battery_state_changed);
    
    
// layer
struct layer_status_state {
    uint8_t index;
    const char *label;
};

char top_layer[12] = "\0"
    
static void set_layer_symbol(lv_obj_t *label, struct layer_status_state state) {

    // update top layer
    if (state.label == NULL) {
        sprintf(top_layer, "%i", state.index);
    } else {
        sprintf(top_layer, "%s", state.label);
    }
    
    char label_out[ZMK_SPLIT_BLE_PERIPHERAL_COUNT * 4 + 2] = "\0"
    for (int i = 0; i < ZMK_SPLIT_BLE_PERIPHERAL_COUNT; i++) {
        strcat(label_out, battery_objects[i]->level)
    }
    
    lv_label_set_text_fmt(label, "%s > %s", label_out, top_layer);
}

static void layer_status_update_cb(struct layer_status_state state) {
    struct zmk_widget_layer_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_layer_symbol(widget->obj, state); }
}

static struct layer_status_state layer_status_get_state(const zmk_event_t *eh) {
    uint8_t index = zmk_keymap_highest_layer_active();
    return (struct layer_status_state) {
        .index = index,
        .label = zmk_keymap_layer_name(index)
    };
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_layer_status, struct layer_status_state, layer_status_update_cb, layer_status_get_state)
ZMK_SUBSCRIPTION(widget_layer_status, zmk_layer_state_changed);


// widget init

int zmk_widget_battery_layer_status_init(struct zmk_widget_battery_layer_status *widget, lv_obj_t *parent) {
    widget->obj = lv_obj_create(parent);
    lv_obj_t *batlayer_label = lv_label_create(widget->obj);

    sys_slist_append(&widgets, &widget->node);
    widget_battery_layer_status_init();
    return 0;
}

lv_obj_t *zmk_widget_battery_layer_status_obj(struct zmk_widget_battery_layer_status *widget) {
    return widget->obj;
}