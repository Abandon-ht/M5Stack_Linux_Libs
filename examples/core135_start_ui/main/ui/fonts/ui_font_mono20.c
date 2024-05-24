/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --font /home/nihao/SquareLine/assets/UbuntuMono-R.ttf -o /home/nihao/SquareLine/assets/ui_font_mono20.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_MONO20
#define UI_FONT_MONO20 1
#endif

#if UI_FONT_MONO20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xf, 0xc0,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xbd, 0x80,

    /* U+0023 "#" */
    0x11, 0x9, 0x84, 0xdf, 0xf3, 0x21, 0x10, 0x88,
    0x4c, 0xff, 0xb2, 0x19, 0x8, 0x84, 0xc0,

    /* U+0024 "$" */
    0x18, 0x18, 0x3e, 0xe0, 0xc0, 0xc0, 0xf0, 0x7c,
    0x3e, 0x7, 0x3, 0x3, 0x83, 0xfe, 0x18, 0x18,
    0x18,

    /* U+0025 "%" */
    0x61, 0xc8, 0xa4, 0x92, 0x49, 0x43, 0x60, 0x20,
    0x36, 0x14, 0x92, 0x49, 0x28, 0x9c, 0x30,

    /* U+0026 "&" */
    0x3c, 0x33, 0x19, 0x8c, 0xc6, 0xc1, 0xc0, 0xe4,
    0xf2, 0xcd, 0x63, 0xb1, 0xdd, 0xe3, 0x98,

    /* U+0027 "'" */
    0xff, 0xc0,

    /* U+0028 "(" */
    0x0, 0x73, 0x8c, 0x61, 0x8c, 0x30, 0xc3, 0xc,
    0x30, 0xc1, 0x86, 0xc, 0x18, 0x30, 0x0,

    /* U+0029 ")" */
    0x3, 0x86, 0xc, 0x18, 0x60, 0xc3, 0xc, 0x30,
    0xc3, 0xc, 0x61, 0x8c, 0x63, 0x0, 0x0,

    /* U+002A "*" */
    0x18, 0x18, 0xdb, 0xff, 0x18, 0x3c, 0x66, 0x24,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0x18, 0xff, 0x18, 0x18, 0x18,
    0x18,

    /* U+002C "," */
    0x77, 0x73, 0xec,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x2, 0x6, 0x6, 0x6, 0xc, 0xc, 0xc, 0x18,
    0x18, 0x18, 0x10, 0x30, 0x30, 0x20, 0x60, 0x60,
    0x40,

    /* U+0030 "0" */
    0x3c, 0x66, 0x42, 0xc3, 0xc3, 0xdb, 0xc3, 0xc3,
    0xc3, 0xc3, 0x42, 0x66, 0x3c,

    /* U+0031 "1" */
    0x18, 0x38, 0x78, 0x58, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18, 0x7f,

    /* U+0032 "2" */
    0x78, 0xcc, 0x6, 0x6, 0x6, 0xe, 0x1c, 0x38,
    0x30, 0x60, 0xc0, 0xc0, 0xff,

    /* U+0033 "3" */
    0xfd, 0x1c, 0x18, 0x30, 0xc7, 0x3, 0x3, 0x6,
    0xc, 0x1c, 0x6f, 0x80,

    /* U+0034 "4" */
    0x6, 0x7, 0x7, 0x86, 0xc2, 0x63, 0x31, 0x19,
    0x8c, 0xff, 0x83, 0x1, 0x80, 0xc0, 0x60,

    /* U+0035 "5" */
    0x7f, 0x60, 0x60, 0x60, 0x60, 0x7c, 0x1e, 0x7,
    0x3, 0x3, 0x3, 0x86, 0xfc,

    /* U+0036 "6" */
    0xe, 0x38, 0x60, 0x60, 0xc0, 0xfc, 0xc6, 0xc3,
    0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+0037 "7" */
    0xff, 0x3, 0x6, 0x4, 0xc, 0x8, 0x18, 0x18,
    0x10, 0x30, 0x30, 0x30, 0x30,

    /* U+0038 "8" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0x76, 0x3c, 0x66,
    0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0x63, 0x3f,
    0x3, 0x6, 0x6, 0x1c, 0x70,

    /* U+003A ":" */
    0xff, 0x80, 0x7, 0xfc,

    /* U+003B ";" */
    0x77, 0x70, 0x0, 0x27, 0x73, 0x2c,

    /* U+003C "<" */
    0x0, 0x7, 0x1e, 0x70, 0xc0, 0xf0, 0x3c, 0x7,
    0x1,

    /* U+003D "=" */
    0xff, 0x0, 0x0, 0x0, 0xff,

    /* U+003E ">" */
    0x0, 0xe0, 0x78, 0xe, 0x3, 0xf, 0x3c, 0xe0,
    0x80,

    /* U+003F "?" */
    0xf8, 0x30, 0xc3, 0x18, 0xe7, 0x18, 0x0, 0x6,
    0x18, 0x60,

    /* U+0040 "@" */
    0x1e, 0x19, 0x98, 0x6c, 0x3c, 0x7e, 0x6f, 0x67,
    0xb3, 0xd9, 0xec, 0xf3, 0x78, 0xf6, 0x3, 0x0,
    0xc0, 0x3e,

    /* U+0041 "A" */
    0xc, 0x7, 0x81, 0xe0, 0x48, 0x33, 0xc, 0xc2,
    0x10, 0x84, 0x7f, 0x90, 0x64, 0x9, 0x2, 0xc0,
    0xc0,

    /* U+0042 "B" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc, 0xc6,
    0xc3, 0xc3, 0xc3, 0xc6, 0xfc,

    /* U+0043 "C" */
    0x1f, 0x18, 0x98, 0x1c, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x18, 0x6, 0x1, 0xf0,

    /* U+0044 "D" */
    0xf8, 0xcc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc6, 0xcc, 0xf8,

    /* U+0045 "E" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0xff,

    /* U+0046 "F" */
    0xff, 0x83, 0x6, 0xc, 0x18, 0x3f, 0xe0, 0xc1,
    0x83, 0x6, 0xc, 0x0,

    /* U+0047 "G" */
    0x1f, 0x31, 0x60, 0xc0, 0xc0, 0xc0, 0xc0, 0xc3,
    0xc3, 0xc3, 0x63, 0x73, 0x1f,

    /* U+0048 "H" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3,

    /* U+0049 "I" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0xfc,

    /* U+004A "J" */
    0x3f, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
    0x3, 0x3, 0x3, 0x46, 0x7c,

    /* U+004B "K" */
    0xc3, 0x63, 0x31, 0x99, 0x8d, 0x87, 0x83, 0xc1,
    0xb0, 0xcc, 0x63, 0x30, 0xd8, 0x6c, 0x18,

    /* U+004C "L" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0xff,

    /* U+004D "M" */
    0x63, 0x31, 0xb8, 0xfe, 0xfd, 0x5e, 0xaf, 0x77,
    0x93, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x18,

    /* U+004E "N" */
    0xc3, 0xe3, 0xe3, 0xf3, 0xd3, 0xd3, 0xcb, 0xcb,
    0xcf, 0xc7, 0xc7, 0xc7, 0xc3,

    /* U+004F "O" */
    0x3c, 0x31, 0x98, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xd8, 0xcc, 0x63, 0xe0,

    /* U+0050 "P" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0051 "Q" */
    0x3c, 0x31, 0x98, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xd8, 0xcf, 0xe3, 0xc0, 0x40,
    0x38, 0x6,

    /* U+0052 "R" */
    0xfc, 0x63, 0x30, 0xd8, 0x6c, 0x36, 0x1b, 0x19,
    0xf8, 0xcc, 0x63, 0x30, 0x98, 0x6c, 0x30,

    /* U+0053 "S" */
    0x3e, 0x62, 0xc0, 0xc0, 0xe0, 0x78, 0x3e, 0xe,
    0x7, 0x3, 0x3, 0x86, 0xfc,

    /* U+0054 "T" */
    0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18, 0x18,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+0056 "V" */
    0xc0, 0xd0, 0x26, 0x19, 0x86, 0x61, 0x88, 0x43,
    0x30, 0xcc, 0x12, 0x4, 0x81, 0xe0, 0x78, 0xc,
    0x0,

    /* U+0057 "W" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0x4f, 0x77,
    0xab, 0xd5, 0xfb, 0xf8, 0xcc, 0x66, 0x30,

    /* U+0058 "X" */
    0x61, 0x98, 0x63, 0x30, 0x48, 0x1e, 0x3, 0x0,
    0xc0, 0x78, 0x12, 0xc, 0xc2, 0x11, 0x86, 0x41,
    0x80,

    /* U+0059 "Y" */
    0xc0, 0xd0, 0x26, 0x19, 0x84, 0x33, 0xc, 0x81,
    0xe0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x0,

    /* U+005A "Z" */
    0xff, 0x3, 0x6, 0xc, 0xc, 0x18, 0x18, 0x30,
    0x20, 0x60, 0x40, 0xc0, 0xff,

    /* U+005B "[" */
    0xfe, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0x18, 0xf8,

    /* U+005C "\\" */
    0x40, 0x60, 0x60, 0x20, 0x30, 0x30, 0x10, 0x10,
    0x18, 0x18, 0x8, 0xc, 0xc, 0x4, 0x6, 0x6,
    0x2,

    /* U+005D "]" */
    0xf8, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0x63, 0xf8,

    /* U+005E "^" */
    0x18, 0x3c, 0x3c, 0x66, 0x66, 0xc3, 0x81,

    /* U+005F "_" */
    0xff, 0xc0,

    /* U+0060 "`" */
    0xc, 0x62,

    /* U+0061 "a" */
    0x7c, 0x7, 0x3, 0x3, 0x3f, 0xe3, 0xc3, 0xc3,
    0xe3, 0x7f,

    /* U+0062 "b" */
    0x40, 0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0xc6, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc,

    /* U+0063 "c" */
    0x1f, 0x70, 0x60, 0xc0, 0xc0, 0xc0, 0xc0, 0x60,
    0x70, 0x1f,

    /* U+0064 "d" */
    0x1, 0x3, 0x3, 0x3, 0x3, 0x3f, 0x63, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x63, 0x3f,

    /* U+0065 "e" */
    0x3c, 0x66, 0xc3, 0xc3, 0xff, 0xc0, 0xc0, 0xc0,
    0x60, 0x3e,

    /* U+0066 "f" */
    0x1f, 0x30, 0x30, 0x30, 0xfe, 0x30, 0x30, 0x30,
    0x30, 0x30, 0x30, 0x30, 0x30, 0x30,

    /* U+0067 "g" */
    0x3f, 0x63, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x63, 0x3f, 0x3, 0x6, 0x7c,

    /* U+0068 "h" */
    0x41, 0x83, 0x6, 0xc, 0x1f, 0xb3, 0x63, 0xc7,
    0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0x80,

    /* U+0069 "i" */
    0x38, 0x1c, 0xe, 0x0, 0xf, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x3, 0x1, 0x80, 0x7c,

    /* U+006A "j" */
    0x1c, 0x71, 0xc0, 0xfc, 0x30, 0xc3, 0xc, 0x30,
    0xc3, 0xc, 0x30, 0xc3, 0xf8,

    /* U+006B "k" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc3, 0xc6, 0xcc,
    0xd8, 0xf0, 0xf8, 0xcc, 0xc6, 0xc6, 0xc3,

    /* U+006C "l" */
    0xf8, 0xc, 0x6, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0xc, 0x6, 0x3, 0x1, 0x80, 0x7c,

    /* U+006D "m" */
    0xfe, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 0xc3, 0xc3,
    0xc3, 0xc3,

    /* U+006E "n" */
    0xf9, 0x9b, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8c,

    /* U+006F "o" */
    0x3e, 0x31, 0x90, 0x58, 0x3c, 0x1e, 0xf, 0x6,
    0x82, 0x63, 0x1f, 0x0,

    /* U+0070 "p" */
    0xfc, 0xc6, 0xc2, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc6, 0xfc, 0xc0, 0xc0, 0xc0,

    /* U+0071 "q" */
    0x3f, 0x63, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x63, 0x3f, 0x3, 0x3, 0x3,

    /* U+0072 "r" */
    0xff, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x80,

    /* U+0073 "s" */
    0x7d, 0x83, 0x7, 0x7, 0x87, 0x83, 0x83, 0x87,
    0xf8,

    /* U+0074 "t" */
    0x30, 0x30, 0x30, 0xff, 0x30, 0x30, 0x30, 0x30,
    0x30, 0x30, 0x30, 0x38, 0x1f,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0x66,
    0x7c,

    /* U+0076 "v" */
    0xc1, 0xc3, 0xc3, 0x42, 0x66, 0x66, 0x24, 0x3c,
    0x18, 0x18,

    /* U+0077 "w" */
    0xc0, 0xd0, 0x24, 0xc9, 0x32, 0x4c, 0x9f, 0xa7,
    0x39, 0xce, 0x33, 0x8, 0x40,

    /* U+0078 "x" */
    0xc3, 0x66, 0x66, 0x3c, 0x18, 0x3c, 0x3c, 0x66,
    0xc3, 0xc3,

    /* U+0079 "y" */
    0xc3, 0xc3, 0x43, 0x62, 0x66, 0x26, 0x34, 0x14,
    0x1c, 0x18, 0x18, 0x10, 0xe0,

    /* U+007A "z" */
    0xfe, 0x1c, 0x30, 0xc3, 0x6, 0x18, 0x30, 0xc1,
    0xfc,

    /* U+007B "{" */
    0x1e, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x60, 0x20,
    0x60, 0xc1, 0x83, 0x6, 0xc, 0x18, 0x1e,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xf0, 0x30, 0x60, 0xc1, 0x83, 0x6, 0x3, 0x18,
    0x30, 0x60, 0xc1, 0x83, 0x6, 0xc, 0xf0,

    /* U+007E "~" */
    0x71, 0x99, 0x8e
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 160, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 160, .box_w = 2, .box_h = 13, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 160, .box_w = 5, .box_h = 5, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 9, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 24, .adv_w = 160, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 41, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 160, .box_w = 2, .box_h = 5, .ofs_x = 4, .ofs_y = 9},
    {.bitmap_index = 73, .adv_w = 160, .box_w = 6, .box_h = 19, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 88, .adv_w = 160, .box_w = 6, .box_h = 19, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 103, .adv_w = 160, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 111, .adv_w = 160, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 120, .adv_w = 160, .box_w = 4, .box_h = 6, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 123, .adv_w = 160, .box_w = 4, .box_h = 1, .ofs_x = 3, .ofs_y = 5},
    {.bitmap_index = 124, .adv_w = 160, .box_w = 3, .box_h = 3, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 160, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 143, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 160, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 235, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 261, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 160, .box_w = 3, .box_h = 10, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 160, .box_w = 4, .box_h = 12, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 284, .adv_w = 160, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 293, .adv_w = 160, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 298, .adv_w = 160, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 307, .adv_w = 160, .box_w = 6, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 160, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 335, .adv_w = 160, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 365, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 406, .adv_w = 160, .box_w = 7, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 160, .box_w = 6, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 467, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 495, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 523, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 538, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 160, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 569, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 610, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 623, .adv_w = 160, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 640, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 655, .adv_w = 160, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 160, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 160, .box_w = 5, .box_h = 17, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 713, .adv_w = 160, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 730, .adv_w = 160, .box_w = 5, .box_h = 17, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 741, .adv_w = 160, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 748, .adv_w = 160, .box_w = 10, .box_h = 1, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 750, .adv_w = 160, .box_w = 4, .box_h = 4, .ofs_x = 3, .ofs_y = 11},
    {.bitmap_index = 752, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 160, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 787, .adv_w = 160, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 802, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 160, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 826, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 839, .adv_w = 160, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 853, .adv_w = 160, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 160, .box_w = 6, .box_h = 17, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 882, .adv_w = 160, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 897, .adv_w = 160, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 913, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 923, .adv_w = 160, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 932, .adv_w = 160, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 944, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 957, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 970, .adv_w = 160, .box_w = 7, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 979, .adv_w = 160, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 988, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1001, .adv_w = 160, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1010, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1020, .adv_w = 160, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1033, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1043, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1056, .adv_w = 160, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1065, .adv_w = 160, .box_w = 7, .box_h = 17, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1080, .adv_w = 160, .box_w = 2, .box_h = 17, .ofs_x = 4, .ofs_y = -3},
    {.bitmap_index = 1085, .adv_w = 160, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1100, .adv_w = 160, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 4}
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

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
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
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_mono20 = {
#else
const lv_font_t ui_font_mono20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_MONO20*/

