#include "elements_view.h"
#include "elements_data.h"

void elements_view_init(void)
{
    elements_data_itempost_init();
    //创建背景
    lv_obj_t * background = lv_obj_create(lv_screen_active());
    lv_obj_set_size(background, LV_HOR_RES, LV_VER_RES - (20 * 2));
    lv_obj_align(background, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_bg_color(background, lv_color_hex(0x180e14), LV_PART_MAIN);
    lv_obj_set_style_bg_opa(background, LV_OPA_COVER, LV_PART_MAIN);

    lv_obj_set_scrollbar_mode(background, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(background, LV_DIR_NONE);
    lv_obj_set_scroll_snap_x(background, LV_SCROLL_SNAP_NONE);
    lv_obj_set_scroll_snap_y(background, LV_SCROLL_SNAP_NONE);
    lv_obj_set_style_radius(background, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(background, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(background, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(background, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(background, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(background, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(background, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(background, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    //创建元素
    {
        #if 0
        lv_obj_t *obj = lv_label_create(background);
        lv_obj_set_pos(obj, 0, 0);
        lv_obj_set_size(obj, 16, 16);
        lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_border_width(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_border_side(obj, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_border_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_border_color(obj, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);

        lv_label_set_text_static(obj, "Li");
        #endif

        #if 1
        int num = 0;
        for (int i = 0; i < ELEMENTS_ITEM_COUNT; i++)
        { 
            lv_obj_t *obj = lv_label_create(background);
            lv_obj_set_pos(obj, element_data[i].x, element_data[i].y);
            lv_obj_set_size(obj, 16, 16);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xFFFFFF), LV_PART_MAIN);
            lv_obj_set_style_bg_opa(obj, LV_OPA_COVER, LV_PART_MAIN);

            lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_width(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_side(obj, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(obj, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_8, LV_PART_MAIN | LV_STATE_DEFAULT);

            /* 使文字在标签内垂直居中：根据当前字体高度计算上下 padding */
            {
                const lv_font_t * f = lv_obj_get_style_text_font(obj, LV_PART_MAIN);
                int32_t font_h = lv_font_get_line_height(f);
                int32_t cell_h = 16; /* 与 lv_obj_set_size 中的高度一致 */
                int32_t pad_v = (cell_h - font_h) / 2;
                if(pad_v < 0) pad_v = 0;
                lv_obj_set_style_pad_top(obj, pad_v, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_pad_bottom(obj, pad_v, LV_PART_MAIN | LV_STATE_DEFAULT);
            }

            if(i == 56 || i == 90)
            {
                lv_label_set_text_static(obj, "*");
            }
            else if(i == 74 || i == 106)
            {
                lv_label_set_text_static(obj, "**");
            }
            else
            {
                lv_label_set_text(obj, elementData[num].symbol);
                num ++;
            }
        }
        #endif
    }

    {
        lv_obj_t *obj = lv_obj_create(background);
        lv_obj_set_pos(obj, 60, 15);
        lv_obj_set_size(obj, ELEMENTS_ITEM_W*3, ELEMENTS_ITEM_H * 3);
        lv_obj_set_scrollbar_mode(obj, LV_SCROLLBAR_MODE_OFF);
        lv_obj_set_scroll_dir(obj, LV_DIR_NONE);
        lv_obj_set_scroll_snap_x(obj, LV_SCROLL_SNAP_NONE);
        lv_obj_set_scroll_snap_y(obj, LV_SCROLL_SNAP_NONE);
        lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_top(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_bottom(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_left(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_right(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_row(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_column(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_refr_now(NULL); /* 立即更新布局并计算 coords */
        {
            lv_obj_t *parent_obj = obj;
            {//右边
                //lv_obj_get_width(parent_obj);
                printf("%d %d\r\n", lv_obj_get_width(parent_obj), lv_obj_get_height(parent_obj));
                lv_obj_t *obj = lv_label_create(parent_obj);
                lv_obj_set_pos(obj, lv_obj_get_width(parent_obj)/2, 0);
                lv_obj_set_size(obj, lv_obj_get_width(parent_obj)/2, lv_obj_get_height(parent_obj));
                lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW);
                lv_obj_set_scrollbar_mode(obj, LV_SCROLLBAR_MODE_OFF);
                lv_obj_set_scroll_dir(obj, LV_DIR_NONE);
                lv_obj_set_scroll_snap_x(obj, LV_SCROLL_SNAP_NONE);
                lv_obj_set_scroll_snap_y(obj, LV_SCROLL_SNAP_NONE);
                lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_label_set_text_static(obj, "H");
                lv_refr_now(NULL); /* 立即更新布局并计算 coords */
                #if 1
                /* 垂直居中 */
                {
                    const lv_font_t * f = lv_obj_get_style_text_font(obj, LV_PART_MAIN);
                    int32_t font_h = lv_font_get_line_height(f);
                    int32_t cell_h = lv_obj_get_height(parent_obj);
                    int32_t pad_v = (cell_h - font_h) / 2;
                    if(pad_v < 0) pad_v = 0;
                    lv_obj_set_style_pad_top(obj, pad_v, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, pad_v, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                    #endif
            }
            {//左上
                lv_obj_t *obj = lv_label_create(parent_obj);
                lv_obj_set_pos(obj, 0, 0);
                lv_obj_set_size(obj, lv_obj_get_width(parent_obj)/2, lv_obj_get_height(parent_obj)/2);
                lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW);
                lv_obj_set_scrollbar_mode(obj, LV_SCROLLBAR_MODE_OFF);
                lv_obj_set_scroll_dir(obj, LV_DIR_NONE);
                lv_obj_set_scroll_snap_x(obj, LV_SCROLL_SNAP_NONE);
                lv_obj_set_scroll_snap_y(obj, LV_SCROLL_SNAP_NONE);
                lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_label_set_text_static(obj, "1");
                #if 1
                {
                    const lv_font_t * f = lv_obj_get_style_text_font(obj, LV_PART_MAIN);
                    int32_t font_h = lv_font_get_line_height(f);
                    int32_t cell_h = 28;
                    int32_t pad_v = (cell_h - font_h) / 2;
                    if(pad_v < 0) pad_v = 0;
                    lv_obj_set_style_pad_top(obj, pad_v, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, pad_v, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                #endif
            }
            {//左下
                lv_obj_t *obj = lv_label_create(parent_obj);
                lv_obj_set_pos(obj, 0, lv_obj_get_height(parent_obj)/2);
                lv_obj_set_size(obj, lv_obj_get_width(parent_obj)/2, lv_obj_get_height(parent_obj)/2);
                lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE|LV_OBJ_FLAG_SCROLL_CHAIN_HOR|LV_OBJ_FLAG_SCROLL_CHAIN_VER|LV_OBJ_FLAG_SCROLL_ELASTIC|LV_OBJ_FLAG_SCROLL_MOMENTUM|LV_OBJ_FLAG_SCROLL_WITH_ARROW);
                lv_obj_set_scrollbar_mode(obj, LV_SCROLLBAR_MODE_OFF);
                lv_obj_set_scroll_dir(obj, LV_DIR_NONE);
                lv_obj_set_scroll_snap_x(obj, LV_SCROLL_SNAP_NONE);
                lv_obj_set_scroll_snap_y(obj, LV_SCROLL_SNAP_NONE);
                lv_obj_set_style_text_align(obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_label_set_text_static(obj, "1");
                #if 1
                {
                    const lv_font_t * f = lv_obj_get_style_text_font(obj, LV_PART_MAIN);
                    int32_t font_h = lv_font_get_line_height(f);
                    int32_t cell_h = 27;
                    int32_t pad_v = (cell_h - font_h) / 2;
                    if(pad_v < 0) pad_v = 0;
                    lv_obj_set_style_pad_top(obj, pad_v, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_pad_bottom(obj, pad_v, LV_PART_MAIN | LV_STATE_DEFAULT);
                }
                    #endif
            }
        }
    }

    return;
    
}