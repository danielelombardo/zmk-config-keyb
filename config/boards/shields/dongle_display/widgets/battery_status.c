/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <zephyr/kernel.h>
#include <zephyr/bluetooth/services/bas.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

#include <zmk/display.h>
#include <zmk/display/widgets/battery_status.h>
#include <zmk/usb.h>
#include <zmk/ble.h>
#include <zmk/events/usb_conn_state_changed.h>
#include <zmk/event_manager.h>
#include <zmk/events/battery_state_changed.h>

#include "battery_status.h"

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

struct peripheral_battery_state {
    uint8_t source;
    uint8_t level;
};
    
static lv_color_t battery_image_buffer[ZMK_SPLIT_BLE_PERIPHERAL_COUNT][8 * 12];

static void draw_battery(lv_obj_t *canvas, uint8_t level) {
    // inverted colors
    lv_canvas_fill_bg(canvas, lv_color_black(), LV_OPA_COVER);
    
    lv_draw_rect_dsc_t rect_fill_dsc;
    lv_draw_rect_dsc_init(&rect_fill_dsc);
    rect_fill_dsc.bg_color = lv_color_white();

    lv_canvas_draw_rect(canvas, 0, 0, 2, 2, &rect_fill_dsc); // lv_canvas_set_px(canvas, 0, 0, lv_color_white());
    lv_canvas_draw_rect(canvas, 6, 0, 8, 2, &rect_fill_dsc); // lv_canvas_set_px(canvas, 7, 0, lv_color_white());

    if (level > 90) {
        // full
    } else if (level > 75) {
        lv_canvas_draw_rect(canvas, 1, 3, 6, 2, &rect_fill_dsc);
    } else if (level > 50) {
        lv_canvas_draw_rect(canvas, 1, 3, 6, 4, &rect_fill_dsc);
    } else if (level > 25) {
        lv_canvas_draw_rect(canvas, 1, 3, 6, 6, &rect_fill_dsc);
    } else {
        lv_canvas_draw_rect(canvas, 1, 3, 6, 8, &rect_fill_dsc);
    }
}

static void set_battery_symbol(lv_obj_t *widget, struct peripheral_battery_state state) {
    lv_obj_t *symbol = lv_obj_get_child(widget, state.source * 2);
    lv_obj_t *label = lv_obj_get_child(widget, state.source * 2 + 1);

    draw_battery(symbol, state.level);
    lv_label_set_text_fmt(label, "%3u%%", state.level);
    
    if (state.level > 0) {
        lv_obj_clear_flag(symbol, LV_OBJ_FLAG_HIDDEN);
        lv_obj_clear_flag(label, LV_OBJ_FLAG_HIDDEN);
    } else {
        lv_obj_add_flag(symbol, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(label, LV_OBJ_FLAG_HIDDEN);
    }
}

void battery_status_update_cb(struct peripheral_battery_state state) {
    struct zmk_widget_battery_status *widget;
    SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) { set_battery_symbol(widget->obj, state); }
}

static struct peripheral_battery_state battery_status_get_state(const zmk_event_t *eh) {
    const struct zmk_peripheral_battery_state_changed *ev = as_zmk_peripheral_battery_state_changed(eh);
    return (struct peripheral_battery_state){
        .source = ev->source,
        .level = ev->state_of_charge,
    };
}

ZMK_DISPLAY_WIDGET_LISTENER(widget_battery_status, struct peripheral_battery_state,
                            battery_status_update_cb, battery_status_get_state)

ZMK_SUBSCRIPTION(widget_battery_status, zmk_peripheral_battery_state_changed);

int zmk_widget_peripheral_battery_status_init(struct zmk_widget_peripheral_battery_status *widget, lv_obj_t *parent) {
    widget->obj = lv_obj_create(parent);

    lv_obj_set_size(widget->obj, LV_SIZE_CONTENT * 2, LV_SIZE_CONTENT + 10);

    for (int i = 0; i < ZMK_SPLIT_BLE_PERIPHERAL_COUNT; i++) {
        lv_obj_t *image_canvas = lv_canvas_create(widget->obj);
        lv_obj_t *battery_label = lv_label_create(widget->obj);

        lv_canvas_set_buffer(image_canvas, battery_image_buffer[i], 8, 12, LV_IMG_CF_TRUE_COLOR);

        lv_obj_align(image_canvas, LV_ALIGN_TOP_RIGHT, 0, i * 16);
        lv_obj_align(battery_label, LV_ALIGN_TOP_RIGHT, -10, i * 14);
    }

    sys_slist_append(&widgets, &widget->node);

    widget_battery_status_init();

    return 0;
}

lv_obj_t *zmk_widget_peripheral_battery_status_obj(struct zmk_widget_peripheral_battery_status *widget) {
    return widget->obj;
}
