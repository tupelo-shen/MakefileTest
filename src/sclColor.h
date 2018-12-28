#ifndef __SCL_COLOR_H__
#define __SCL_COLOR_H__

#define HMI_TRANSPARENT_COLOR       (2)     // 透明色

//暫定
enum
{
    COLOR_BLACK,                 //   0,  0,  0  0
    COLOR_WHITE,                 // 255,255,255  1
    COLOR_TRANSPARENT,           // 254,255,255  3
    COLOR_GRAY_11,               //  17, 17, 17
    COLOR_GRAY_22,               //  34, 34, 34
    COLOR_GRAY_33,               //  51, 51, 51  8
    COLOR_GRAY_44,               //  68, 68, 68
    COLOR_GRAY_55,               //  85, 85, 85
    COLOR_GRAY_66,               // 102,102,102  9
    COLOR_GRAY_77,               // 119,119,119
    COLOR_GRAY_88,               // 136,136,136
    COLOR_GRAY_99,               // 153,153,153  10
    COLOR_GRAY_AA,               // 170,170,170
    COLOR_GRAY_BB,               // 187,187,187
    COLOR_GRAY_CC,               // 204,204,204  11
    COLOR_GRAY_DD,               // 221,221,221
    COLOR_GRAY_EE,               // 238,238,238  4
    COLOR_LIGHT_SKY_BLUE,        // 153,204,255  5
    COLOR_SKY_BLUE,              //   0,153,255
    COLOR_YELLOW,                // 255,238,102
    COLOR_DARK_YELLOW,           // 221,170,  0  7
    COLOR_CHECK_BLUE,            //   0,204,204
    COLOR_FMCS_RED,              // 255,  0,  0
    COLOR_FMCS_BLUE,             //   0,153,255
    COLOR_FMCS_ORANGE,           // 255,136,  0
    COLOR_FMCS_YELLOW,           // 255,221,  0  6
    COLOR_RSV1,                  // 基色备用1
    COLOR_RSV2,                  // 基色备用2
    COLOR_RSV3,                  // 基色备用3
    COLOR_RSV4,                  // 基色备用4
    COLOR_RSV5,                  // 基色备用5
    COLOR_RSV6,                  // 基色备用6
    COLOR_RSV7,                  // 基色备用7
    COLOR_RSV8,                  // 基色备用8
    COLOR_RSV9,                  // 基色备用9
    COLOR_RSV10,                 // 基色备用10
    COLOR_RSV11,                 // 基色备用11
    COLOR_RSV12,                 // 基色备用12
    COLOR_RSV13,                 // 基色备用13
    COLOR_RSV14,                 // 基色备用14
    COLOR_S_NAVY,                //   0,  0,128
    COLOR_S_DARKBLUE,            //   0,  0,139
    COLOR_S_MEDIUMBLUE,          //   0,  0,205
    COLOR_S_BLUE,                //   0,  0,255
    COLOR_S_DARKGREEN,           //   0,100,  0
    COLOR_S_GREEN,               //   0,128,  0
    COLOR_S_TEAL,                //   0,128,128
    COLOR_S_DARKCYAN,            //   0,139,139
    COLOR_S_DEEPSKYBLUE,         //   0,191,255
    COLOR_S_DARKTURQUOISE,       //   0,206,209
    COLOR_S_MEDIUMSPRINGGREEN,   //   0,250,154
    COLOR_S_LIME,                //   0,255,  0     2 GREEN -> LIME
    COLOR_S_SPRINGGREEN,         //   0,255,127
    COLOR_S_CYAN,                //   0,255,255
    COLOR_S_MIDNIGHTBLUE,        //  25, 25,112
    COLOR_S_DODGERBLUE,          //  30,144,255
    COLOR_S_FORESTGREEN,         //  34,139, 34
    COLOR_S_LIGHTSEQGREEN,       //  32,178,170
    COLOR_S_DARKSLATEGRAY,       //  47, 79, 79
    COLOR_S_SEAGREEN,            //  46,139, 87
    COLOR_S_LIMEGREEN,           //  50,205, 50
    COLOR_S_MEDIUMSEAGREEN,      //  60,179,113
    COLOR_S_ROYALBLUE,           //  65,105,225
    COLOR_S_STEELBLUE,           //  70,130,180
    COLOR_S_DARKSLATEBLUE,       //  72, 61,139
    COLOR_S_MEDIUMTURQUOISE,     //  72,209,204
    COLOR_S_INDIGO,              //  75,  0,130
    COLOR_S_DARKOLIVEGREEN,      //  85,107, 47
    COLOR_S_CADETBLUE,           //  95,158,160
    COLOR_S_CORNFLOWERBLUE,      // 100,149,237
    COLOR_S_MEDIUMAQUAMARINE,    // 102,205,170
    COLOR_S_SLATEBLUE,           // 106, 90,205
    COLOR_S_OLIVEDRAB,           // 107,142, 35
    COLOR_S_SLATEGRAY,           // 112,128,144
    COLOR_S_LIGHTSLATEGRAY,      // 119,136,153
    COLOR_S_MEDIUMSLATEBLUE,     // 123,104,238
    COLOR_S_LAWNGREEN,           // 124,252,  0
    COLOR_S_CHARTREUSE,          // 127,255,  0
    COLOR_S_AQUAMARINE,          // 127,255,212
    COLOR_S_MAROON,              // 128,  0,  0
    COLOR_S_PURPLE,              // 128,  0,128
    COLOR_S_OLIVE,               // 128,128,  0
    COLOR_S_SKYBLUE,             // 135,206,235
    COLOR_S_LIGHTSKYBLUE,        // 135,206,250
    COLOR_S_BLUEVIOLET,          // 138, 43,226
    COLOR_S_DARKRED,             // 139,  0,  0
    COLOR_S_DARKMAGENTA,         // 139,  0,139
    COLOR_S_SADDLEBROWN,         // 139, 69, 19
    COLOR_S_DARKSEAGREEN,        // 143,188,143
    COLOR_S_LIGHTGREEN,          // 144,238,144
    COLOR_S_MEDIUMPURPLE,        // 147,112,219
    COLOR_S_DARKVIOLET,          // 148,  0,211
    COLOR_S_PALEGREEN,           // 152,251,152
    COLOR_S_DARKORCHID,          // 153, 50,204
    COLOR_S_YELLOWGREEN,         // 154,205, 50
    COLOR_S_SIENNA,              // 160, 82, 45
    COLOR_S_BROWN,               // 165, 42, 42
    COLOR_S_LIGHTBLUE,           // 173,216,230
    COLOR_S_GREENYELLOW,         // 173,255, 47
    COLOR_S_PALETURUOISE,        // 175,238,238
    COLOR_S_LIGHTSTEELBLUE,      // 176,196,222
    COLOR_S_POWDERBLUE,          // 176,224,230
    COLOR_S_FIREBRICK,           // 178, 34, 34
    COLOR_S_THISTLE,             // 216,191,216
    COLOR_S_TURQUOISE,           //  64,224,208
    COLOR_S_DARKGOLDENROD,       // 184,134, 11
    COLOR_S_MEDIUMORCHID,        // 186, 85,211
    COLOR_S_ROSYBROWN,           // 188,143,143
    COLOR_S_DARKKHAKI,           // 189,183,107
    COLOR_S_MEDIUMVIOLETRED,     // 199, 21,133
    COLOR_S_INDIANRED,           // 205, 92, 92
    COLOR_S_PERU,                // 205,133, 63
    COLOR_S_CHOCOLATE,           // 210,105, 30
    COLOR_S_TAN,                 // 210,180,140
    COLOR_S_ORCHID,              // 218,112,214
    COLOR_S_GOLDENROD,           // 218,165, 32
    COLOR_S_PALEVIOLETRED,       // 219,112,147
    COLOR_S_CRIMSON,             // 220, 20, 60
    COLOR_S_PLUM,                // 221,160,221
    COLOR_S_BURLYWOOD,           // 222,184,135
    COLOR_S_LIGHTCYAN,           // 224,255,255
    COLOR_S_LAVENDER,            // 230,230,250
    COLOR_S_DARKSALMON,          // 233,150,122
    COLOR_S_VIOLET,              // 238,130,238
    COLOR_S_PALEGOLDENROD,       // 238,232,170
    COLOR_S_LIGHTCORAL,          // 240,128,128
    COLOR_S_KHAKI,               // 240,230,140
    COLOR_S_ALICEBLUE,           // 240,248,255
    COLOR_S_HONEYDEW,            // 240,255,240
    COLOR_S_AZURE,               // 240,255,255
    COLOR_S_SANDYBROWN,          // 244,164, 96
    COLOR_S_WHEAT,               // 245,222,179
    COLOR_S_BEIGE,               // 245,245,220
    COLOR_S_WHITESMOKE,          // 245,245,245
    COLOR_S_MINTCREAM,           // 245,255,250
    COLOR_S_GHOSTWHITE,          // 248,248,255
    COLOR_S_SALMON,              // 250,128,114
    COLOR_S_ANTIQUEWHITE,        // 250,235,215
    COLOR_S_LINEN,               // 250,240,230
    COLOR_S_LIGHTGOLDENRODYELLOW,// 250,250,210
    COLOR_S_OLDLACE,             // 253,245,230
    COLOR_S_RED,                 // 255,  0,  0
    COLOR_S_FUCHSIA,             // 255,  0,255
    COLOR_S_MAGENTA,             // 255,  0,255
    COLOR_S_DEEPPINK,            // 255, 20,147
    COLOR_S_ORANGERED,           // 255, 69,  0
    COLOR_S_TOMATO,              // 255, 99, 71
    COLOR_S_HOTPINK,             // 255,105,180
    COLOR_S_CORAL,               // 255,127, 80
    COLOR_S_DARKORANGE,          // 255,140,  0
    COLOR_S_LIGHTSALMON,         // 255,160,122
    COLOR_S_SEASHELL,            // 255,245,238
    COLOR_S_ORANGE,              // 255,165,  0
    COLOR_S_LIGHTPINK,           // 255,182,193
    COLOR_S_PINK,                // 255,192,203
    COLOR_S_GOLD,                // 255,215,  0
    COLOR_S_PEACHPUFF,           // 255,218,185
    COLOR_S_NAVAJOWHITE,         // 255,222,173
    COLOR_S_MOCCASIN,            // 255,228,181
    COLOR_S_BISQUE,              // 255,228,196
    COLOR_S_MISTYROSE,           // 255,228,225
    COLOR_S_BLANCHEDALMOND,      // 255,235,205
    COLOR_S_PAPAYAWHIP,          // 255,239,213
    COLOR_S_LAVENDERBLUSH,       // 255,240,245
    COLOR_S_CORNSILK,            // 255,248,220
    COLOR_S_LEMONCHIFFON,        // 255,250,205
    COLOR_S_FLORALWHITE,         // 255,250,240
    COLOR_S_SNOW,                // 255,250,250
    COLOR_S_YELLOW,              // 255,255,  0
    COLOR_S_LIGHTYELLOW,         // 255,255,224
    COLOR_S_IVORY,               // 255,255,240
    COLOR_S_RSV172,              // 备用172
    COLOR_S_RSV173,              // 备用173
    COLOR_S_RSV174,              // 备用174
    COLOR_S_RSV175,              // 备用175
    COLOR_S_RSV176,              // 备用176
    COLOR_S_RSV177,              // 备用177
    COLOR_S_RSV178,              // 备用178
    COLOR_S_RSV179,              // 备用179
    COLOR_S_RSV180,              // 备用180
    COLOR_S_RSV181,              // 备用181
    COLOR_S_RSV182,              // 备用182
    COLOR_S_RSV183,              // 备用183
    COLOR_S_RSV184,              // 备用184
    COLOR_S_RSV185,              // 备用185
    COLOR_S_RSV186,              // 备用186
    COLOR_S_RSV187,              // 备用187
    COLOR_S_RSV188,              // 备用188
    COLOR_S_RSV189,              // 备用189
    COLOR_S_RSV190,              // 备用190
    COLOR_S_RSV191,              // 备用191
    COLOR_S_RSV192,              // 备用192
    COLOR_S_RSV193,              // 备用193
    COLOR_S_RSV194,              // 备用194
    COLOR_S_RSV195,              // 备用195
    COLOR_S_RSV196,              // 备用196
    COLOR_S_RSV197,              // 备用197
    COLOR_S_RSV198,              // 备用198
    COLOR_S_RSV199,              // 备用199
    COLOR_S_RSV200,              // 备用200
    COLOR_B_BLACK_GRAY_EE,       //   0,  0,  0 闪烁用
    COLOR_B_WHITE_GRAY_EE,       // 255,255,255 闪烁用
    COLOR_B_GRAY_11_GRAY_EE,     //  17, 17, 17 闪烁用
    COLOR_B_GRAY_22_GRAY_EE,     //  34, 34, 34 闪烁用
    COLOR_B_GRAY_33_GRAY_EE,     //  51, 51, 51 闪烁用
    COLOR_B_GRAY_44_GRAY_EE,     //  68, 68, 68 闪烁用
    COLOR_B_GRAY_55_GRAY_EE,     //  85, 85, 85 闪烁用
    COLOR_B_GRAY_66_GRAY_EE,     // 102,102,102 闪烁用
    COLOR_B_GRAY_77_GRAY_EE,     // 119,119,119 闪烁用
    COLOR_B_GRAY_88_GRAY_EE,     // 136,136,136 闪烁用
    COLOR_B_GRAY_99_GRAY_EE,     // 153,153,153 闪烁用
    COLOR_B_GRAY_AA_GRAY_EE,     // 170,170,170 闪烁用
    COLOR_B_GRAY_BB_GRAY_EE,     // 187,187,187 闪烁用
    COLOR_B_GRAY_CC_GRAY_EE,     // 204,204,204 闪烁用
    COLOR_B_GRAY_DD_GRAY_EE,     // 221,221,221 闪烁用
    COLOR_B_FMCS_YELLOW_GRAY_EE, // 255,221,  0 闪烁用
    COLOR_B_DARK_YELLOW_GRAY_EE, // 221,170,  0 闪烁用
    COLOR_B_OLIVE_GRAY_EE,       // 128,128,  0 闪烁用
    COLOR_B_FMCS_RED_GRAY_EE,    // 255,  0,  0 闪烁用
    COLOR_B_DARKRED_GRAY_EE,     // 139,  0,  0 闪烁用
    COLOR_B_BLACK_WHITE,         //   0,  0,  0 Dialog闪烁用
    COLOR_BLINK_RSV21,           // 闪烁用备用21
    COLOR_BLINK_RSV22,           // 闪烁用备用22
    COLOR_BLINK_RSV23,           // 闪烁用备用23
    COLOR_BLINK_RSV24,           // 闪烁用备用24
    COLOR_BLINK_RSV25,           // 闪烁用备用25
    COLOR_BLINK_RSV26,           // 闪烁用备用26
    COLOR_BLINK_RSV27,           // 闪烁用备用27
    COLOR_BLINK_RSV28,           // 闪烁用备用28
    COLOR_BLINK_RSV29,           // 闪烁用备用29
    COLOR_BLINK_RSV30,           // 闪烁用备用30
    COLOR_BLINK_RSV31,           // 闪烁用备用31
    COLOR_BLINK_RSV32,           // 闪烁用备用32
    COLOR_BLINK_RSV33,           // 闪烁用备用33
    COLOR_BLINK_RSV34,           // 闪烁用备用34
    COLOR_BLINK_RSV35,           // 闪烁用备用35
    COLOR_BLINK_RSV36,           // 闪烁用备用36
    COLOR_BLINK_RSV37,           // 闪烁用备用37
    COLOR_BLINK_RSV38,           // 闪烁用备用38
    COLOR_BLINK_RSV39,           // 闪烁用备用39
    COLOR_BLINK_RSV40,           // 闪烁用备用40
    COLOR_BLINK_RSV41,           // 闪烁用备用41
    COLOR_BLINK_RSV42,           // 闪烁用备用42
    COLOR_BLINK_RSV43,           // 闪烁用备用43
    COLOR_BLINK_RSV44,           // 闪烁用备用44
    COLOR_BLINK_RSV45,           // 闪烁用备用45
    COLOR_BLINK_RSV46,           // 闪烁用备用46
    COLOR_BLINK_RSV47,           // 闪烁用备用47
    COLOR_BLINK_RSV48,           // 闪烁用备用48
    COLOR_BLINK_RSV49,           // 闪烁用备用49
    COLOR_BLINK_RSV50,           // 闪烁用备用50
    COLOR_BLINK_RSV51,           // 闪烁用备用51
    COLOR_BLINK_RSV52,           // 闪烁用备用52
    COLOR_BLINK_RSV53,           // 闪烁用备用53
    COLOR_BLINK_RSV54,           // 闪烁用备用54
    COLOR_BLINK_RSV55,           // 闪烁用备用55
    COLOR_NUM                    // 色数
};
#endif /* __SCL_COLOR_H__ */
