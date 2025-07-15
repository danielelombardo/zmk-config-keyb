#include <zephyr/kernel.h>
#include <zephyr/bluetooth/services/bas.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/display.h>
#include <zmk/event_manager.h>
#include <zmk/events/keycode_state_changed.h>
#include <zmk/hid.h>
#include <dt-bindings/zmk/modifiers.h>

#include "modifiers.h"

struct modifiers_state {    
    uint8_t modifiers;
};

struct modifier_symbol {    
    uint8_t modifier;
    char symbol_dsc[10];
};

struct modifier_symbol ms_control = {
    .modifier = MOD_LCTL | MOD_RCTL,
    .symbol_dsc = "CTRL ",
};

struct modifier_symbol ms_shift = {
    .modifier = MOD_LSFT | MOD_RSFT,
    .symbol_dsc = "SHIFT ",
};

struct modifier_symbol ms_opt = {
    .modifier = MOD_LALT | MOD_RALT,
    .symbol_dsc = "ALT ",
};

struct modifier_symbol ms_cmd = {
    .modifier = MOD_LGUI | MOD_RGUI,
    .symbol_dsc = "GUI ",
};

struct modifier_symbol *modifier_symbols[] = {
    // this order determines the order of the symbols
    &ms_control,
    &ms_cmd,
    &ms_opt,
    &ms_shift
};


static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

static void set_modifiers(lv_obj_t *widget, struct modifiers_state state) {
    char label_out[44] = "\0";
    for (int i = 0; i < 4; i++) {
        if (state.modifiers & modifier_symbols[i]->modifier) {
            strcat(label_out, modifier_symbols[i]->symbol_dsc);
        }
    }
    lv_label_set_text(widget, label_out);
}

void modifiers_update_cb(struct modifiers_state state) {
    struct zmk_widget_modifiers *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_modifiers(widget->obj, state); }
}

static struct modifiers_state modifiers_get_state(const zmk_event_t *eh) {
    return (struct modifiers_state) {
        .modifiers = zmk_hid_get_explicit_mods()
    };
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_modifiers, struct modifiers_state,
                            modifiers_update_cb, modifiers_get_state)

ZMK_SUBSCRIPTION(widget_modifiers, zmk_keycode_state_changed);

int zmk_widget_modifiers_init(struct zmk_widget_modifiers *widget, lv_obj_t *parent) {
    widget->obj = lv_label_create(widget->obj);
    lv_style_set_text_font(widget->obj, &space_mono_14);

    sys_slist_append(&widgets, &widget->node);

    widget_modifiers_init();
    return 0;
}

lv_obj_t *zmk_widget_modifiers_obj(struct zmk_widget_modifiers *widget) {
    return widget->obj;
}