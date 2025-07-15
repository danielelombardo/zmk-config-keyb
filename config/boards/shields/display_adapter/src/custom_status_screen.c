#include <lvgl.h>

#include "widgets/modifiers.h"
#include "widgets/battery_layer.h"

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

static struct zmk_widget_battery_layer_status battery_layer_widget;
static struct zmk_widget_modifiers modifiers_widget;

#if IS_ENABLED(CONFIG_ZMK_HID_INDICATORS)
static struct zmk_widget_hid_indicators hid_indicators_widget;
#endif

lv_style_t global_style;

lv_obj_t *zmk_display_status_screen() {
    lv_obj_t *screen;

    screen = lv_obj_create(NULL);

    zmk_widget_battery_layer_status_init(&battery_layer_widget, screen);
    lv_obj_align(zmk_widget_battery_layer_status_obj(&battery_layer_widget), LV_ALIGN_TOP_LEFT, 0, 0);

    zmk_widget_modifiers_init(&modifiers_widget, screen);
    lv_obj_align(zmk_widget_modifiers_obj(&modifiers_widget), LV_ALIGN_BOTTOM_LEFT, 0, 0);

    return screen;
}