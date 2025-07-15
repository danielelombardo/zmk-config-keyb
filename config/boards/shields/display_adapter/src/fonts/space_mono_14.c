/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --no-compress --font SpaceMono-Regular.ttf --range 32-127 --format lvgl -o space_mono_14.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef SPACE_MONO_14
#define SPACE_MONO_14 1
#endif

#if SPACE_MONO_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xaa, 0xa8, 0xf0,

    /* U+0022 "\"" */
    0xdc, 0xa4,

    /* U+0023 "#" */
    0x24, 0x24, 0xff, 0x24, 0xff, 0x24, 0x24,

    /* U+0024 "$" */
    0x21, 0xea, 0xe8, 0x7a, 0x9a, 0x5e, 0x20,

    /* U+0025 "%" */
    0x61, 0x22, 0x43, 0x20, 0x86, 0x33, 0x9, 0x12,
    0x18,

    /* U+0026 "&" */
    0x78, 0xc0, 0x80, 0x84, 0xc4, 0x3f, 0xc4, 0x84,
    0x84, 0x7c,

    /* U+0027 "'" */
    0xe8,

    /* U+0028 "(" */
    0x1d, 0x84, 0x20, 0x82, 0x8, 0x20, 0x82, 0x8,
    0x10, 0x60, 0x70,

    /* U+0029 ")" */
    0xe0, 0x60, 0x81, 0x4, 0x10, 0x41, 0x4, 0x10,
    0x42, 0x1b, 0x80,

    /* U+002A "*" */
    0x10, 0xa8, 0xe7, 0xf3, 0x8a, 0x84, 0x0,

    /* U+002B "+" */
    0x21, 0x3e, 0x42, 0x0,

    /* U+002C "," */
    0xf7,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x8, 0x84, 0x22, 0x10, 0x88, 0x42, 0x21, 0x0,

    /* U+0030 "0" */
    0x38, 0x8a, 0xc, 0x1b, 0x36, 0x60, 0xc1, 0x44,
    0x70,

    /* U+0031 "1" */
    0x30, 0xe1, 0x46, 0x89, 0x2, 0x4, 0x8, 0x11,
    0xfc,

    /* U+0032 "2" */
    0x3c, 0x8e, 0xc, 0x10, 0x67, 0x98, 0x40, 0x81,
    0xfc,

    /* U+0033 "3" */
    0xfe, 0xc, 0x71, 0x83, 0xc0, 0xe0, 0xc1, 0xc6,
    0x78,

    /* U+0034 "4" */
    0x1c, 0x14, 0x34, 0x24, 0x64, 0x44, 0x84, 0xff,
    0x4, 0x4,

    /* U+0035 "5" */
    0xfd, 0x2, 0x5, 0xee, 0x60, 0x60, 0xc1, 0x44,
    0x70,

    /* U+0036 "6" */
    0x3c, 0x8e, 0xd, 0xec, 0x70, 0x60, 0xc1, 0xc4,
    0x70,

    /* U+0037 "7" */
    0xfe, 0x4, 0x10, 0x60, 0x82, 0xc, 0x10, 0x40,
    0x80,

    /* U+0038 "8" */
    0x79, 0xa, 0x16, 0x67, 0x98, 0xa0, 0xc1, 0xc6,
    0xf8,

    /* U+0039 "9" */
    0x38, 0x8a, 0xc, 0x18, 0x38, 0xde, 0xc1, 0xc6,
    0xf0,

    /* U+003A ":" */
    0xf0, 0x3c,

    /* U+003B ";" */
    0xf0, 0x3d, 0xc0,

    /* U+003C "<" */
    0x4, 0xfe, 0x30, 0x70, 0x30,

    /* U+003D "=" */
    0xfc, 0xf, 0xc0,

    /* U+003E ">" */
    0xc0, 0xf0, 0x38, 0x33, 0xdc, 0x0,

    /* U+003F "?" */
    0x7b, 0x38, 0x61, 0x4, 0xe2, 0x0, 0x30, 0xc0,

    /* U+0040 "@" */
    0x7c, 0x5, 0xac, 0xd8, 0xb1, 0x62, 0xbf,

    /* U+0041 "A" */
    0x1c, 0x14, 0x34, 0x34, 0x26, 0x22, 0x62, 0x7f,
    0x41, 0xc1,

    /* U+0042 "B" */
    0xfc, 0x8d, 0xa, 0x14, 0x6f, 0x11, 0xa1, 0x43,
    0xf8,

    /* U+0043 "C" */
    0x38, 0x8a, 0xc, 0x18, 0x10, 0x20, 0xc1, 0x44,
    0x70,

    /* U+0044 "D" */
    0xfc, 0x8d, 0xa, 0x14, 0x28, 0x50, 0xa1, 0x47,
    0xf8,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0x83, 0xf8, 0x20, 0x83, 0xf0,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0x83, 0xf8, 0x20, 0x82, 0x0,

    /* U+0047 "G" */
    0x3c, 0x8a, 0xc, 0x18, 0x17, 0xe0, 0xc1, 0x46,
    0x74,

    /* U+0048 "H" */
    0x86, 0x18, 0x61, 0x87, 0xf8, 0x61, 0x86, 0x10,

    /* U+0049 "I" */
    0xfc, 0x41, 0x4, 0x10, 0x41, 0x4, 0x13, 0xf0,

    /* U+004A "J" */
    0xe, 0x8, 0x10, 0x20, 0x40, 0xa1, 0x42, 0xcc,
    0xf0,

    /* U+004B "K" */
    0x85, 0x1a, 0x65, 0x8a, 0x1c, 0x28, 0x48, 0x89,
    0x8,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x83, 0xf0,

    /* U+004D "M" */
    0xc7, 0x8f, 0x1d, 0x5a, 0xb5, 0x6a, 0xd5, 0xab,
    0x74,

    /* U+004E "N" */
    0xc7, 0x9a, 0x69, 0xa6, 0x59, 0x65, 0x9e, 0x30,

    /* U+004F "O" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x44,
    0x70,

    /* U+0050 "P" */
    0xfa, 0x38, 0x61, 0x87, 0xe8, 0x20, 0x82, 0x0,

    /* U+0051 "Q" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x44,
    0xf8, 0x40, 0xe0,

    /* U+0052 "R" */
    0xfa, 0x38, 0x61, 0x87, 0xe8, 0x61, 0x86, 0x10,

    /* U+0053 "S" */
    0x3c, 0x8d, 0xa, 0x3, 0x81, 0xe0, 0xc1, 0x46,
    0x78,

    /* U+0054 "T" */
    0xfe, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x10,
    0x20,

    /* U+0055 "U" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0xc6,
    0xf8,

    /* U+0056 "V" */
    0x41, 0x43, 0x43, 0x62, 0x22, 0x26, 0x24, 0x34,
    0x14, 0x1c,

    /* U+0057 "W" */
    0x99, 0x9d, 0x95, 0x55, 0x55, 0x55, 0x55, 0x75,
    0x67, 0x66,

    /* U+0058 "X" */
    0x86, 0x14, 0x92, 0x30, 0xc7, 0x92, 0xce, 0x10,

    /* U+0059 "Y" */
    0x83, 0x8d, 0x12, 0x22, 0x85, 0x4, 0x8, 0x10,
    0x20,

    /* U+005A "Z" */
    0xfe, 0x4, 0x10, 0x61, 0x86, 0x18, 0x20, 0x81,
    0xfc,

    /* U+005B "[" */
    0xea, 0xaa, 0xaa, 0xb0,

    /* U+005C "\\" */
    0x84, 0x10, 0x84, 0x10, 0x84, 0x10, 0x84, 0x10,

    /* U+005D "]" */
    0xd5, 0x55, 0x55, 0x70,

    /* U+005E "^" */
    0x38, 0xd1, 0x36, 0x28, 0x60,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0x40,

    /* U+0061 "a" */
    0x3a, 0xc6, 0x82, 0x82, 0x82, 0xc6, 0x3b,

    /* U+0062 "b" */
    0x81, 0x2, 0x5, 0xcc, 0x70, 0x60, 0xc1, 0xc7,
    0x78,

    /* U+0063 "c" */
    0x38, 0x8a, 0xc, 0x8, 0x28, 0x8e, 0x0,

    /* U+0064 "d" */
    0x2, 0x4, 0x9, 0xdc, 0x70, 0x60, 0xc1, 0xc6,
    0x74,

    /* U+0065 "e" */
    0x38, 0x8a, 0xf, 0xf8, 0x8, 0xcf, 0x0,

    /* U+0066 "f" */
    0x3c, 0x82, 0x3f, 0x20, 0x82, 0x8, 0x20, 0x80,

    /* U+0067 "g" */
    0x3a, 0x8e, 0xc, 0x18, 0x28, 0xce, 0x81, 0x2,
    0xfc,

    /* U+0068 "h" */
    0x82, 0x8, 0x2e, 0xce, 0x18, 0x61, 0x86, 0x10,

    /* U+0069 "i" */
    0x30, 0xc0, 0x38, 0x20, 0x82, 0x8, 0x23, 0xf0,

    /* U+006A "j" */
    0x18, 0xc0, 0xf0, 0x84, 0x21, 0x8, 0x42, 0x1f,
    0x80,

    /* U+006B "k" */
    0x82, 0x8, 0x22, 0x92, 0x8e, 0x28, 0x92, 0x20,

    /* U+006C "l" */
    0x70, 0x20, 0x40, 0x81, 0x2, 0x4, 0x8, 0x11,
    0xfc,

    /* U+006D "m" */
    0xef, 0x26, 0x4c, 0x99, 0x32, 0x64, 0x80,

    /* U+006E "n" */
    0xbb, 0x38, 0x61, 0x86, 0x18, 0x40,

    /* U+006F "o" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x0,

    /* U+0070 "p" */
    0xb9, 0x8e, 0xc, 0x18, 0x38, 0xef, 0x40, 0x81,
    0x0,

    /* U+0071 "q" */
    0x3a, 0x8e, 0xc, 0x18, 0x38, 0xce, 0x81, 0x2,
    0x4,

    /* U+0072 "r" */
    0x7c, 0x44, 0x89, 0x2, 0x4, 0x3e, 0x0,

    /* U+0073 "s" */
    0x7a, 0x38, 0x1e, 0x86, 0x17, 0x80,

    /* U+0074 "t" */
    0x20, 0x82, 0x3f, 0x20, 0x82, 0x8, 0x20, 0xe0,

    /* U+0075 "u" */
    0x86, 0x18, 0x61, 0x86, 0x37, 0x40,

    /* U+0076 "v" */
    0x87, 0x89, 0x12, 0x66, 0x85, 0xe, 0x0,

    /* U+0077 "w" */
    0x99, 0xdd, 0x55, 0x55, 0x57, 0x56, 0x66,

    /* U+0078 "x" */
    0x85, 0x27, 0x8c, 0x79, 0x28, 0x40,

    /* U+0079 "y" */
    0x86, 0x18, 0x61, 0x86, 0x37, 0x41, 0x5, 0xf0,

    /* U+007A "z" */
    0xfc, 0x11, 0x8c, 0x62, 0xf, 0xc0,

    /* U+007B "{" */
    0x69, 0x24, 0x94, 0x49, 0x24, 0xc0,

    /* U+007C "|" */
    0xff, 0xfc,

    /* U+007D "}" */
    0xc9, 0x24, 0x91, 0x49, 0x25, 0x80,

    /* U+007E "~" */
    0x77, 0x30
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 137, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 137, .box_w = 2, .box_h = 10, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 137, .box_w = 5, .box_h = 3, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 6, .adv_w = 137, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 13, .adv_w = 137, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 137, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 137, .box_w = 2, .box_h = 3, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 40, .adv_w = 137, .box_w = 6, .box_h = 14, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 51, .adv_w = 137, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 62, .adv_w = 137, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 69, .adv_w = 137, .box_w = 5, .box_h = 5, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 73, .adv_w = 137, .box_w = 2, .box_h = 4, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 74, .adv_w = 137, .box_w = 4, .box_h = 1, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 75, .adv_w = 137, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 137, .box_w = 5, .box_h = 12, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 84, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 137, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 137, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 177, .adv_w = 137, .box_w = 2, .box_h = 9, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 180, .adv_w = 137, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 185, .adv_w = 137, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 188, .adv_w = 137, .box_w = 7, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 194, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 137, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 137, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 137, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 358, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 384, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 137, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 137, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 421, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 137, .box_w = 2, .box_h = 14, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 443, .adv_w = 137, .box_w = 5, .box_h = 12, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 451, .adv_w = 137, .box_w = 2, .box_h = 14, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 455, .adv_w = 137, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 460, .adv_w = 137, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 461, .adv_w = 137, .box_w = 2, .box_h = 1, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 462, .adv_w = 137, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 478, .adv_w = 137, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 137, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 501, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 518, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 137, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 543, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 560, .adv_w = 137, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 567, .adv_w = 137, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 137, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 589, .adv_w = 137, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 598, .adv_w = 137, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 137, .box_w = 6, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 137, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 137, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 632, .adv_w = 137, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 639, .adv_w = 137, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 137, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 653, .adv_w = 137, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 137, .box_w = 3, .box_h = 14, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 665, .adv_w = 137, .box_w = 1, .box_h = 14, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 667, .adv_w = 137, .box_w = 3, .box_h = 14, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 673, .adv_w = 137, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t space_mono_14 = {
#else
lv_font_t space_mono_14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 15,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if SPACE_MONO_14*/

