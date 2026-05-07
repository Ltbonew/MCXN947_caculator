#include "elements_view.h"

void elements_view_init(void)
{
    lv_obj_t * label = lv_label_create(lv_screen_active());
    lv_label_set_text(label, "Elements");
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_bg_color(label, lv_color_hex(0x121314), LV_PART_MAIN);
    //lv_obj_set_style_bg_grad(label, lv_color_hex(0x121314), LV_PART_MAIN);
    lv_obj_set_style_bg_opa(label, LV_OPA_COVER, LV_PART_MAIN);
    return;
    
}