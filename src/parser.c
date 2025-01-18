#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 43
#define SYMBOL_COUNT 212
#define ALIAS_COUNT 0
#define TOKEN_COUNT 181
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 23

enum ts_symbol_identifiers {
  sym__css_number = 1,
  sym__css_percentage = 2,
  sym__css_angle = 3,
  aux_sym__css_function_rgb_legacy_token1 = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  aux_sym__css_function_rgba_legacy_token1 = 8,
  anon_sym_SLASH = 9,
  aux_sym__css_function_hsl_legacy_token1 = 10,
  aux_sym__css_function_hsla_legacy_token1 = 11,
  aux_sym_css_function_hwb_token1 = 12,
  aux_sym_css_function_lab_token1 = 13,
  aux_sym_css_function_oklab_token1 = 14,
  aux_sym_css_function_lch_token1 = 15,
  aux_sym_css_function_oklch_token1 = 16,
  aux_sym_css_function_color_token1 = 17,
  aux_sym_css_predefined_rgb_token1 = 18,
  aux_sym_css_predefined_rgb_token2 = 19,
  aux_sym_css_predefined_rgb_token3 = 20,
  aux_sym_css_predefined_rgb_token4 = 21,
  aux_sym_css_predefined_rgb_token5 = 22,
  aux_sym_css_predefined_rgb_token6 = 23,
  aux_sym_css_xyz_space_token1 = 24,
  aux_sym_css_xyz_space_token2 = 25,
  aux_sym_css_xyz_space_token3 = 26,
  sym_css_hex_color_6_digits = 27,
  sym_css_hex_color_8_digits = 28,
  sym_css_hex_color_3_digits = 29,
  sym_css_hex_color_4_digits = 30,
  aux_sym_css_named_color_token1 = 31,
  aux_sym_css_named_color_token2 = 32,
  aux_sym_css_named_color_token3 = 33,
  aux_sym_css_named_color_token4 = 34,
  aux_sym_css_named_color_token5 = 35,
  aux_sym_css_named_color_token6 = 36,
  aux_sym_css_named_color_token7 = 37,
  aux_sym_css_named_color_token8 = 38,
  aux_sym_css_named_color_token9 = 39,
  aux_sym_css_named_color_token10 = 40,
  aux_sym_css_named_color_token11 = 41,
  aux_sym_css_named_color_token12 = 42,
  aux_sym_css_named_color_token13 = 43,
  aux_sym_css_named_color_token14 = 44,
  aux_sym_css_named_color_token15 = 45,
  aux_sym_css_named_color_token16 = 46,
  aux_sym_css_named_color_token17 = 47,
  aux_sym_css_named_color_token18 = 48,
  aux_sym_css_named_color_token19 = 49,
  aux_sym_css_named_color_token20 = 50,
  aux_sym_css_named_color_token21 = 51,
  aux_sym_css_named_color_token22 = 52,
  aux_sym_css_named_color_token23 = 53,
  aux_sym_css_named_color_token24 = 54,
  aux_sym_css_named_color_token25 = 55,
  aux_sym_css_named_color_token26 = 56,
  aux_sym_css_named_color_token27 = 57,
  aux_sym_css_named_color_token28 = 58,
  aux_sym_css_named_color_token29 = 59,
  aux_sym_css_named_color_token30 = 60,
  aux_sym_css_named_color_token31 = 61,
  aux_sym_css_named_color_token32 = 62,
  aux_sym_css_named_color_token33 = 63,
  aux_sym_css_named_color_token34 = 64,
  aux_sym_css_named_color_token35 = 65,
  aux_sym_css_named_color_token36 = 66,
  aux_sym_css_named_color_token37 = 67,
  aux_sym_css_named_color_token38 = 68,
  aux_sym_css_named_color_token39 = 69,
  aux_sym_css_named_color_token40 = 70,
  aux_sym_css_named_color_token41 = 71,
  aux_sym_css_named_color_token42 = 72,
  aux_sym_css_named_color_token43 = 73,
  aux_sym_css_named_color_token44 = 74,
  aux_sym_css_named_color_token45 = 75,
  aux_sym_css_named_color_token46 = 76,
  aux_sym_css_named_color_token47 = 77,
  aux_sym_css_named_color_token48 = 78,
  aux_sym_css_named_color_token49 = 79,
  aux_sym_css_named_color_token50 = 80,
  aux_sym_css_named_color_token51 = 81,
  aux_sym_css_named_color_token52 = 82,
  aux_sym_css_named_color_token53 = 83,
  aux_sym_css_named_color_token54 = 84,
  aux_sym_css_named_color_token55 = 85,
  aux_sym_css_named_color_token56 = 86,
  aux_sym_css_named_color_token57 = 87,
  aux_sym_css_named_color_token58 = 88,
  aux_sym_css_named_color_token59 = 89,
  aux_sym_css_named_color_token60 = 90,
  aux_sym_css_named_color_token61 = 91,
  aux_sym_css_named_color_token62 = 92,
  aux_sym_css_named_color_token63 = 93,
  aux_sym_css_named_color_token64 = 94,
  aux_sym_css_named_color_token65 = 95,
  aux_sym_css_named_color_token66 = 96,
  aux_sym_css_named_color_token67 = 97,
  aux_sym_css_named_color_token68 = 98,
  aux_sym_css_named_color_token69 = 99,
  aux_sym_css_named_color_token70 = 100,
  aux_sym_css_named_color_token71 = 101,
  aux_sym_css_named_color_token72 = 102,
  aux_sym_css_named_color_token73 = 103,
  aux_sym_css_named_color_token74 = 104,
  aux_sym_css_named_color_token75 = 105,
  aux_sym_css_named_color_token76 = 106,
  aux_sym_css_named_color_token77 = 107,
  aux_sym_css_named_color_token78 = 108,
  aux_sym_css_named_color_token79 = 109,
  aux_sym_css_named_color_token80 = 110,
  aux_sym_css_named_color_token81 = 111,
  aux_sym_css_named_color_token82 = 112,
  aux_sym_css_named_color_token83 = 113,
  aux_sym_css_named_color_token84 = 114,
  aux_sym_css_named_color_token85 = 115,
  aux_sym_css_named_color_token86 = 116,
  aux_sym_css_named_color_token87 = 117,
  aux_sym_css_named_color_token88 = 118,
  aux_sym_css_named_color_token89 = 119,
  aux_sym_css_named_color_token90 = 120,
  aux_sym_css_named_color_token91 = 121,
  aux_sym_css_named_color_token92 = 122,
  aux_sym_css_named_color_token93 = 123,
  aux_sym_css_named_color_token94 = 124,
  aux_sym_css_named_color_token95 = 125,
  aux_sym_css_named_color_token96 = 126,
  aux_sym_css_named_color_token97 = 127,
  aux_sym_css_named_color_token98 = 128,
  aux_sym_css_named_color_token99 = 129,
  aux_sym_css_named_color_token100 = 130,
  aux_sym_css_named_color_token101 = 131,
  aux_sym_css_named_color_token102 = 132,
  aux_sym_css_named_color_token103 = 133,
  aux_sym_css_named_color_token104 = 134,
  aux_sym_css_named_color_token105 = 135,
  aux_sym_css_named_color_token106 = 136,
  aux_sym_css_named_color_token107 = 137,
  aux_sym_css_named_color_token108 = 138,
  aux_sym_css_named_color_token109 = 139,
  aux_sym_css_named_color_token110 = 140,
  aux_sym_css_named_color_token111 = 141,
  aux_sym_css_named_color_token112 = 142,
  aux_sym_css_named_color_token113 = 143,
  aux_sym_css_named_color_token114 = 144,
  aux_sym_css_named_color_token115 = 145,
  aux_sym_css_named_color_token116 = 146,
  aux_sym_css_named_color_token117 = 147,
  aux_sym_css_named_color_token118 = 148,
  aux_sym_css_named_color_token119 = 149,
  aux_sym_css_named_color_token120 = 150,
  aux_sym_css_named_color_token121 = 151,
  aux_sym_css_named_color_token122 = 152,
  aux_sym_css_named_color_token123 = 153,
  aux_sym_css_named_color_token124 = 154,
  aux_sym_css_named_color_token125 = 155,
  aux_sym_css_named_color_token126 = 156,
  aux_sym_css_named_color_token127 = 157,
  aux_sym_css_named_color_token128 = 158,
  aux_sym_css_named_color_token129 = 159,
  aux_sym_css_named_color_token130 = 160,
  aux_sym_css_named_color_token131 = 161,
  aux_sym_css_named_color_token132 = 162,
  aux_sym_css_named_color_token133 = 163,
  aux_sym_css_named_color_token134 = 164,
  aux_sym_css_named_color_token135 = 165,
  aux_sym_css_named_color_token136 = 166,
  aux_sym_css_named_color_token137 = 167,
  aux_sym_css_named_color_token138 = 168,
  aux_sym_css_named_color_token139 = 169,
  aux_sym_css_named_color_token140 = 170,
  aux_sym_css_named_color_token141 = 171,
  aux_sym_css_named_color_token142 = 172,
  aux_sym_css_named_color_token143 = 173,
  aux_sym_css_named_color_token144 = 174,
  aux_sym_css_named_color_token145 = 175,
  aux_sym_css_named_color_token146 = 176,
  aux_sym_css_named_color_token147 = 177,
  aux_sym_css_named_color_token148 = 178,
  sym_css_keyword_transparent = 179,
  sym_css_keyword_none = 180,
  sym_source_file = 181,
  sym_css_number = 182,
  sym_css_percentage = 183,
  sym_css_alpha_value = 184,
  sym_css_hue = 185,
  sym_css_function_rgb = 186,
  sym_css_function_rgba = 187,
  sym__css_function_rgb_legacy = 188,
  sym__css_function_rgba_legacy = 189,
  sym__css_function_rgb_modern = 190,
  sym__css_function_rgba_modern = 191,
  sym_css_function_hsl = 192,
  sym__css_function_hsl_legacy = 193,
  sym__css_function_hsl_modern = 194,
  sym_css_function_hsla = 195,
  sym__css_function_hsla_legacy = 196,
  sym__css_function_hsla_modern = 197,
  sym_css_function_hwb = 198,
  sym_css_function_lab = 199,
  sym_css_function_oklab = 200,
  sym_css_function_lch = 201,
  sym_css_function_oklch = 202,
  sym_css_function_color = 203,
  sym__css_colorspace_params = 204,
  sym__css_predefined_rgb_params = 205,
  sym_css_predefined_rgb = 206,
  sym__css_xyz_params = 207,
  sym_css_xyz_space = 208,
  sym_css_hex_color = 209,
  sym_css_named_color = 210,
  aux_sym_source_file_repeat1 = 211,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__css_number] = "_css_number",
  [sym__css_percentage] = "_css_percentage",
  [sym__css_angle] = "_css_angle",
  [aux_sym__css_function_rgb_legacy_token1] = "_css_function_rgb_legacy_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym__css_function_rgba_legacy_token1] = "_css_function_rgba_legacy_token1",
  [anon_sym_SLASH] = "/",
  [aux_sym__css_function_hsl_legacy_token1] = "_css_function_hsl_legacy_token1",
  [aux_sym__css_function_hsla_legacy_token1] = "_css_function_hsla_legacy_token1",
  [aux_sym_css_function_hwb_token1] = "css_function_hwb_token1",
  [aux_sym_css_function_lab_token1] = "css_function_lab_token1",
  [aux_sym_css_function_oklab_token1] = "css_function_oklab_token1",
  [aux_sym_css_function_lch_token1] = "css_function_lch_token1",
  [aux_sym_css_function_oklch_token1] = "css_function_oklch_token1",
  [aux_sym_css_function_color_token1] = "css_function_color_token1",
  [aux_sym_css_predefined_rgb_token1] = "css_predefined_rgb_token1",
  [aux_sym_css_predefined_rgb_token2] = "css_predefined_rgb_token2",
  [aux_sym_css_predefined_rgb_token3] = "css_predefined_rgb_token3",
  [aux_sym_css_predefined_rgb_token4] = "css_predefined_rgb_token4",
  [aux_sym_css_predefined_rgb_token5] = "css_predefined_rgb_token5",
  [aux_sym_css_predefined_rgb_token6] = "css_predefined_rgb_token6",
  [aux_sym_css_xyz_space_token1] = "css_xyz_space_token1",
  [aux_sym_css_xyz_space_token2] = "css_xyz_space_token2",
  [aux_sym_css_xyz_space_token3] = "css_xyz_space_token3",
  [sym_css_hex_color_6_digits] = "css_hex_color_6_digits",
  [sym_css_hex_color_8_digits] = "css_hex_color_8_digits",
  [sym_css_hex_color_3_digits] = "css_hex_color_3_digits",
  [sym_css_hex_color_4_digits] = "css_hex_color_4_digits",
  [aux_sym_css_named_color_token1] = "css_named_color_token1",
  [aux_sym_css_named_color_token2] = "css_named_color_token2",
  [aux_sym_css_named_color_token3] = "css_named_color_token3",
  [aux_sym_css_named_color_token4] = "css_named_color_token4",
  [aux_sym_css_named_color_token5] = "css_named_color_token5",
  [aux_sym_css_named_color_token6] = "css_named_color_token6",
  [aux_sym_css_named_color_token7] = "css_named_color_token7",
  [aux_sym_css_named_color_token8] = "css_named_color_token8",
  [aux_sym_css_named_color_token9] = "css_named_color_token9",
  [aux_sym_css_named_color_token10] = "css_named_color_token10",
  [aux_sym_css_named_color_token11] = "css_named_color_token11",
  [aux_sym_css_named_color_token12] = "css_named_color_token12",
  [aux_sym_css_named_color_token13] = "css_named_color_token13",
  [aux_sym_css_named_color_token14] = "css_named_color_token14",
  [aux_sym_css_named_color_token15] = "css_named_color_token15",
  [aux_sym_css_named_color_token16] = "css_named_color_token16",
  [aux_sym_css_named_color_token17] = "css_named_color_token17",
  [aux_sym_css_named_color_token18] = "css_named_color_token18",
  [aux_sym_css_named_color_token19] = "css_named_color_token19",
  [aux_sym_css_named_color_token20] = "css_named_color_token20",
  [aux_sym_css_named_color_token21] = "css_named_color_token21",
  [aux_sym_css_named_color_token22] = "css_named_color_token22",
  [aux_sym_css_named_color_token23] = "css_named_color_token23",
  [aux_sym_css_named_color_token24] = "css_named_color_token24",
  [aux_sym_css_named_color_token25] = "css_named_color_token25",
  [aux_sym_css_named_color_token26] = "css_named_color_token26",
  [aux_sym_css_named_color_token27] = "css_named_color_token27",
  [aux_sym_css_named_color_token28] = "css_named_color_token28",
  [aux_sym_css_named_color_token29] = "css_named_color_token29",
  [aux_sym_css_named_color_token30] = "css_named_color_token30",
  [aux_sym_css_named_color_token31] = "css_named_color_token31",
  [aux_sym_css_named_color_token32] = "css_named_color_token32",
  [aux_sym_css_named_color_token33] = "css_named_color_token33",
  [aux_sym_css_named_color_token34] = "css_named_color_token34",
  [aux_sym_css_named_color_token35] = "css_named_color_token35",
  [aux_sym_css_named_color_token36] = "css_named_color_token36",
  [aux_sym_css_named_color_token37] = "css_named_color_token37",
  [aux_sym_css_named_color_token38] = "css_named_color_token38",
  [aux_sym_css_named_color_token39] = "css_named_color_token39",
  [aux_sym_css_named_color_token40] = "css_named_color_token40",
  [aux_sym_css_named_color_token41] = "css_named_color_token41",
  [aux_sym_css_named_color_token42] = "css_named_color_token42",
  [aux_sym_css_named_color_token43] = "css_named_color_token43",
  [aux_sym_css_named_color_token44] = "css_named_color_token44",
  [aux_sym_css_named_color_token45] = "css_named_color_token45",
  [aux_sym_css_named_color_token46] = "css_named_color_token46",
  [aux_sym_css_named_color_token47] = "css_named_color_token47",
  [aux_sym_css_named_color_token48] = "css_named_color_token48",
  [aux_sym_css_named_color_token49] = "css_named_color_token49",
  [aux_sym_css_named_color_token50] = "css_named_color_token50",
  [aux_sym_css_named_color_token51] = "css_named_color_token51",
  [aux_sym_css_named_color_token52] = "css_named_color_token52",
  [aux_sym_css_named_color_token53] = "css_named_color_token53",
  [aux_sym_css_named_color_token54] = "css_named_color_token54",
  [aux_sym_css_named_color_token55] = "css_named_color_token55",
  [aux_sym_css_named_color_token56] = "css_named_color_token56",
  [aux_sym_css_named_color_token57] = "css_named_color_token57",
  [aux_sym_css_named_color_token58] = "css_named_color_token58",
  [aux_sym_css_named_color_token59] = "css_named_color_token59",
  [aux_sym_css_named_color_token60] = "css_named_color_token60",
  [aux_sym_css_named_color_token61] = "css_named_color_token61",
  [aux_sym_css_named_color_token62] = "css_named_color_token62",
  [aux_sym_css_named_color_token63] = "css_named_color_token63",
  [aux_sym_css_named_color_token64] = "css_named_color_token64",
  [aux_sym_css_named_color_token65] = "css_named_color_token65",
  [aux_sym_css_named_color_token66] = "css_named_color_token66",
  [aux_sym_css_named_color_token67] = "css_named_color_token67",
  [aux_sym_css_named_color_token68] = "css_named_color_token68",
  [aux_sym_css_named_color_token69] = "css_named_color_token69",
  [aux_sym_css_named_color_token70] = "css_named_color_token70",
  [aux_sym_css_named_color_token71] = "css_named_color_token71",
  [aux_sym_css_named_color_token72] = "css_named_color_token72",
  [aux_sym_css_named_color_token73] = "css_named_color_token73",
  [aux_sym_css_named_color_token74] = "css_named_color_token74",
  [aux_sym_css_named_color_token75] = "css_named_color_token75",
  [aux_sym_css_named_color_token76] = "css_named_color_token76",
  [aux_sym_css_named_color_token77] = "css_named_color_token77",
  [aux_sym_css_named_color_token78] = "css_named_color_token78",
  [aux_sym_css_named_color_token79] = "css_named_color_token79",
  [aux_sym_css_named_color_token80] = "css_named_color_token80",
  [aux_sym_css_named_color_token81] = "css_named_color_token81",
  [aux_sym_css_named_color_token82] = "css_named_color_token82",
  [aux_sym_css_named_color_token83] = "css_named_color_token83",
  [aux_sym_css_named_color_token84] = "css_named_color_token84",
  [aux_sym_css_named_color_token85] = "css_named_color_token85",
  [aux_sym_css_named_color_token86] = "css_named_color_token86",
  [aux_sym_css_named_color_token87] = "css_named_color_token87",
  [aux_sym_css_named_color_token88] = "css_named_color_token88",
  [aux_sym_css_named_color_token89] = "css_named_color_token89",
  [aux_sym_css_named_color_token90] = "css_named_color_token90",
  [aux_sym_css_named_color_token91] = "css_named_color_token91",
  [aux_sym_css_named_color_token92] = "css_named_color_token92",
  [aux_sym_css_named_color_token93] = "css_named_color_token93",
  [aux_sym_css_named_color_token94] = "css_named_color_token94",
  [aux_sym_css_named_color_token95] = "css_named_color_token95",
  [aux_sym_css_named_color_token96] = "css_named_color_token96",
  [aux_sym_css_named_color_token97] = "css_named_color_token97",
  [aux_sym_css_named_color_token98] = "css_named_color_token98",
  [aux_sym_css_named_color_token99] = "css_named_color_token99",
  [aux_sym_css_named_color_token100] = "css_named_color_token100",
  [aux_sym_css_named_color_token101] = "css_named_color_token101",
  [aux_sym_css_named_color_token102] = "css_named_color_token102",
  [aux_sym_css_named_color_token103] = "css_named_color_token103",
  [aux_sym_css_named_color_token104] = "css_named_color_token104",
  [aux_sym_css_named_color_token105] = "css_named_color_token105",
  [aux_sym_css_named_color_token106] = "css_named_color_token106",
  [aux_sym_css_named_color_token107] = "css_named_color_token107",
  [aux_sym_css_named_color_token108] = "css_named_color_token108",
  [aux_sym_css_named_color_token109] = "css_named_color_token109",
  [aux_sym_css_named_color_token110] = "css_named_color_token110",
  [aux_sym_css_named_color_token111] = "css_named_color_token111",
  [aux_sym_css_named_color_token112] = "css_named_color_token112",
  [aux_sym_css_named_color_token113] = "css_named_color_token113",
  [aux_sym_css_named_color_token114] = "css_named_color_token114",
  [aux_sym_css_named_color_token115] = "css_named_color_token115",
  [aux_sym_css_named_color_token116] = "css_named_color_token116",
  [aux_sym_css_named_color_token117] = "css_named_color_token117",
  [aux_sym_css_named_color_token118] = "css_named_color_token118",
  [aux_sym_css_named_color_token119] = "css_named_color_token119",
  [aux_sym_css_named_color_token120] = "css_named_color_token120",
  [aux_sym_css_named_color_token121] = "css_named_color_token121",
  [aux_sym_css_named_color_token122] = "css_named_color_token122",
  [aux_sym_css_named_color_token123] = "css_named_color_token123",
  [aux_sym_css_named_color_token124] = "css_named_color_token124",
  [aux_sym_css_named_color_token125] = "css_named_color_token125",
  [aux_sym_css_named_color_token126] = "css_named_color_token126",
  [aux_sym_css_named_color_token127] = "css_named_color_token127",
  [aux_sym_css_named_color_token128] = "css_named_color_token128",
  [aux_sym_css_named_color_token129] = "css_named_color_token129",
  [aux_sym_css_named_color_token130] = "css_named_color_token130",
  [aux_sym_css_named_color_token131] = "css_named_color_token131",
  [aux_sym_css_named_color_token132] = "css_named_color_token132",
  [aux_sym_css_named_color_token133] = "css_named_color_token133",
  [aux_sym_css_named_color_token134] = "css_named_color_token134",
  [aux_sym_css_named_color_token135] = "css_named_color_token135",
  [aux_sym_css_named_color_token136] = "css_named_color_token136",
  [aux_sym_css_named_color_token137] = "css_named_color_token137",
  [aux_sym_css_named_color_token138] = "css_named_color_token138",
  [aux_sym_css_named_color_token139] = "css_named_color_token139",
  [aux_sym_css_named_color_token140] = "css_named_color_token140",
  [aux_sym_css_named_color_token141] = "css_named_color_token141",
  [aux_sym_css_named_color_token142] = "css_named_color_token142",
  [aux_sym_css_named_color_token143] = "css_named_color_token143",
  [aux_sym_css_named_color_token144] = "css_named_color_token144",
  [aux_sym_css_named_color_token145] = "css_named_color_token145",
  [aux_sym_css_named_color_token146] = "css_named_color_token146",
  [aux_sym_css_named_color_token147] = "css_named_color_token147",
  [aux_sym_css_named_color_token148] = "css_named_color_token148",
  [sym_css_keyword_transparent] = "css_keyword_transparent",
  [sym_css_keyword_none] = "css_keyword_none",
  [sym_source_file] = "source_file",
  [sym_css_number] = "css_number",
  [sym_css_percentage] = "css_percentage",
  [sym_css_alpha_value] = "css_alpha_value",
  [sym_css_hue] = "css_hue",
  [sym_css_function_rgb] = "css_function_rgb",
  [sym_css_function_rgba] = "css_function_rgba",
  [sym__css_function_rgb_legacy] = "_css_function_rgb_legacy",
  [sym__css_function_rgba_legacy] = "_css_function_rgba_legacy",
  [sym__css_function_rgb_modern] = "_css_function_rgb_modern",
  [sym__css_function_rgba_modern] = "_css_function_rgba_modern",
  [sym_css_function_hsl] = "css_function_hsl",
  [sym__css_function_hsl_legacy] = "_css_function_hsl_legacy",
  [sym__css_function_hsl_modern] = "_css_function_hsl_modern",
  [sym_css_function_hsla] = "css_function_hsla",
  [sym__css_function_hsla_legacy] = "_css_function_hsla_legacy",
  [sym__css_function_hsla_modern] = "_css_function_hsla_modern",
  [sym_css_function_hwb] = "css_function_hwb",
  [sym_css_function_lab] = "css_function_lab",
  [sym_css_function_oklab] = "css_function_oklab",
  [sym_css_function_lch] = "css_function_lch",
  [sym_css_function_oklch] = "css_function_oklch",
  [sym_css_function_color] = "css_function_color",
  [sym__css_colorspace_params] = "_css_colorspace_params",
  [sym__css_predefined_rgb_params] = "_css_predefined_rgb_params",
  [sym_css_predefined_rgb] = "css_predefined_rgb",
  [sym__css_xyz_params] = "_css_xyz_params",
  [sym_css_xyz_space] = "css_xyz_space",
  [sym_css_hex_color] = "css_hex_color",
  [sym_css_named_color] = "css_named_color",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__css_number] = sym__css_number,
  [sym__css_percentage] = sym__css_percentage,
  [sym__css_angle] = sym__css_angle,
  [aux_sym__css_function_rgb_legacy_token1] = aux_sym__css_function_rgb_legacy_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym__css_function_rgba_legacy_token1] = aux_sym__css_function_rgba_legacy_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym__css_function_hsl_legacy_token1] = aux_sym__css_function_hsl_legacy_token1,
  [aux_sym__css_function_hsla_legacy_token1] = aux_sym__css_function_hsla_legacy_token1,
  [aux_sym_css_function_hwb_token1] = aux_sym_css_function_hwb_token1,
  [aux_sym_css_function_lab_token1] = aux_sym_css_function_lab_token1,
  [aux_sym_css_function_oklab_token1] = aux_sym_css_function_oklab_token1,
  [aux_sym_css_function_lch_token1] = aux_sym_css_function_lch_token1,
  [aux_sym_css_function_oklch_token1] = aux_sym_css_function_oklch_token1,
  [aux_sym_css_function_color_token1] = aux_sym_css_function_color_token1,
  [aux_sym_css_predefined_rgb_token1] = aux_sym_css_predefined_rgb_token1,
  [aux_sym_css_predefined_rgb_token2] = aux_sym_css_predefined_rgb_token2,
  [aux_sym_css_predefined_rgb_token3] = aux_sym_css_predefined_rgb_token3,
  [aux_sym_css_predefined_rgb_token4] = aux_sym_css_predefined_rgb_token4,
  [aux_sym_css_predefined_rgb_token5] = aux_sym_css_predefined_rgb_token5,
  [aux_sym_css_predefined_rgb_token6] = aux_sym_css_predefined_rgb_token6,
  [aux_sym_css_xyz_space_token1] = aux_sym_css_xyz_space_token1,
  [aux_sym_css_xyz_space_token2] = aux_sym_css_xyz_space_token2,
  [aux_sym_css_xyz_space_token3] = aux_sym_css_xyz_space_token3,
  [sym_css_hex_color_6_digits] = sym_css_hex_color_6_digits,
  [sym_css_hex_color_8_digits] = sym_css_hex_color_8_digits,
  [sym_css_hex_color_3_digits] = sym_css_hex_color_3_digits,
  [sym_css_hex_color_4_digits] = sym_css_hex_color_4_digits,
  [aux_sym_css_named_color_token1] = aux_sym_css_named_color_token1,
  [aux_sym_css_named_color_token2] = aux_sym_css_named_color_token2,
  [aux_sym_css_named_color_token3] = aux_sym_css_named_color_token3,
  [aux_sym_css_named_color_token4] = aux_sym_css_named_color_token4,
  [aux_sym_css_named_color_token5] = aux_sym_css_named_color_token5,
  [aux_sym_css_named_color_token6] = aux_sym_css_named_color_token6,
  [aux_sym_css_named_color_token7] = aux_sym_css_named_color_token7,
  [aux_sym_css_named_color_token8] = aux_sym_css_named_color_token8,
  [aux_sym_css_named_color_token9] = aux_sym_css_named_color_token9,
  [aux_sym_css_named_color_token10] = aux_sym_css_named_color_token10,
  [aux_sym_css_named_color_token11] = aux_sym_css_named_color_token11,
  [aux_sym_css_named_color_token12] = aux_sym_css_named_color_token12,
  [aux_sym_css_named_color_token13] = aux_sym_css_named_color_token13,
  [aux_sym_css_named_color_token14] = aux_sym_css_named_color_token14,
  [aux_sym_css_named_color_token15] = aux_sym_css_named_color_token15,
  [aux_sym_css_named_color_token16] = aux_sym_css_named_color_token16,
  [aux_sym_css_named_color_token17] = aux_sym_css_named_color_token17,
  [aux_sym_css_named_color_token18] = aux_sym_css_named_color_token18,
  [aux_sym_css_named_color_token19] = aux_sym_css_named_color_token19,
  [aux_sym_css_named_color_token20] = aux_sym_css_named_color_token20,
  [aux_sym_css_named_color_token21] = aux_sym_css_named_color_token21,
  [aux_sym_css_named_color_token22] = aux_sym_css_named_color_token22,
  [aux_sym_css_named_color_token23] = aux_sym_css_named_color_token23,
  [aux_sym_css_named_color_token24] = aux_sym_css_named_color_token24,
  [aux_sym_css_named_color_token25] = aux_sym_css_named_color_token25,
  [aux_sym_css_named_color_token26] = aux_sym_css_named_color_token26,
  [aux_sym_css_named_color_token27] = aux_sym_css_named_color_token27,
  [aux_sym_css_named_color_token28] = aux_sym_css_named_color_token28,
  [aux_sym_css_named_color_token29] = aux_sym_css_named_color_token29,
  [aux_sym_css_named_color_token30] = aux_sym_css_named_color_token30,
  [aux_sym_css_named_color_token31] = aux_sym_css_named_color_token31,
  [aux_sym_css_named_color_token32] = aux_sym_css_named_color_token32,
  [aux_sym_css_named_color_token33] = aux_sym_css_named_color_token33,
  [aux_sym_css_named_color_token34] = aux_sym_css_named_color_token34,
  [aux_sym_css_named_color_token35] = aux_sym_css_named_color_token35,
  [aux_sym_css_named_color_token36] = aux_sym_css_named_color_token36,
  [aux_sym_css_named_color_token37] = aux_sym_css_named_color_token37,
  [aux_sym_css_named_color_token38] = aux_sym_css_named_color_token38,
  [aux_sym_css_named_color_token39] = aux_sym_css_named_color_token39,
  [aux_sym_css_named_color_token40] = aux_sym_css_named_color_token40,
  [aux_sym_css_named_color_token41] = aux_sym_css_named_color_token41,
  [aux_sym_css_named_color_token42] = aux_sym_css_named_color_token42,
  [aux_sym_css_named_color_token43] = aux_sym_css_named_color_token43,
  [aux_sym_css_named_color_token44] = aux_sym_css_named_color_token44,
  [aux_sym_css_named_color_token45] = aux_sym_css_named_color_token45,
  [aux_sym_css_named_color_token46] = aux_sym_css_named_color_token46,
  [aux_sym_css_named_color_token47] = aux_sym_css_named_color_token47,
  [aux_sym_css_named_color_token48] = aux_sym_css_named_color_token48,
  [aux_sym_css_named_color_token49] = aux_sym_css_named_color_token49,
  [aux_sym_css_named_color_token50] = aux_sym_css_named_color_token50,
  [aux_sym_css_named_color_token51] = aux_sym_css_named_color_token51,
  [aux_sym_css_named_color_token52] = aux_sym_css_named_color_token52,
  [aux_sym_css_named_color_token53] = aux_sym_css_named_color_token53,
  [aux_sym_css_named_color_token54] = aux_sym_css_named_color_token54,
  [aux_sym_css_named_color_token55] = aux_sym_css_named_color_token55,
  [aux_sym_css_named_color_token56] = aux_sym_css_named_color_token56,
  [aux_sym_css_named_color_token57] = aux_sym_css_named_color_token57,
  [aux_sym_css_named_color_token58] = aux_sym_css_named_color_token58,
  [aux_sym_css_named_color_token59] = aux_sym_css_named_color_token59,
  [aux_sym_css_named_color_token60] = aux_sym_css_named_color_token60,
  [aux_sym_css_named_color_token61] = aux_sym_css_named_color_token61,
  [aux_sym_css_named_color_token62] = aux_sym_css_named_color_token62,
  [aux_sym_css_named_color_token63] = aux_sym_css_named_color_token63,
  [aux_sym_css_named_color_token64] = aux_sym_css_named_color_token64,
  [aux_sym_css_named_color_token65] = aux_sym_css_named_color_token65,
  [aux_sym_css_named_color_token66] = aux_sym_css_named_color_token66,
  [aux_sym_css_named_color_token67] = aux_sym_css_named_color_token67,
  [aux_sym_css_named_color_token68] = aux_sym_css_named_color_token68,
  [aux_sym_css_named_color_token69] = aux_sym_css_named_color_token69,
  [aux_sym_css_named_color_token70] = aux_sym_css_named_color_token70,
  [aux_sym_css_named_color_token71] = aux_sym_css_named_color_token71,
  [aux_sym_css_named_color_token72] = aux_sym_css_named_color_token72,
  [aux_sym_css_named_color_token73] = aux_sym_css_named_color_token73,
  [aux_sym_css_named_color_token74] = aux_sym_css_named_color_token74,
  [aux_sym_css_named_color_token75] = aux_sym_css_named_color_token75,
  [aux_sym_css_named_color_token76] = aux_sym_css_named_color_token76,
  [aux_sym_css_named_color_token77] = aux_sym_css_named_color_token77,
  [aux_sym_css_named_color_token78] = aux_sym_css_named_color_token78,
  [aux_sym_css_named_color_token79] = aux_sym_css_named_color_token79,
  [aux_sym_css_named_color_token80] = aux_sym_css_named_color_token80,
  [aux_sym_css_named_color_token81] = aux_sym_css_named_color_token81,
  [aux_sym_css_named_color_token82] = aux_sym_css_named_color_token82,
  [aux_sym_css_named_color_token83] = aux_sym_css_named_color_token83,
  [aux_sym_css_named_color_token84] = aux_sym_css_named_color_token84,
  [aux_sym_css_named_color_token85] = aux_sym_css_named_color_token85,
  [aux_sym_css_named_color_token86] = aux_sym_css_named_color_token86,
  [aux_sym_css_named_color_token87] = aux_sym_css_named_color_token87,
  [aux_sym_css_named_color_token88] = aux_sym_css_named_color_token88,
  [aux_sym_css_named_color_token89] = aux_sym_css_named_color_token89,
  [aux_sym_css_named_color_token90] = aux_sym_css_named_color_token90,
  [aux_sym_css_named_color_token91] = aux_sym_css_named_color_token91,
  [aux_sym_css_named_color_token92] = aux_sym_css_named_color_token92,
  [aux_sym_css_named_color_token93] = aux_sym_css_named_color_token93,
  [aux_sym_css_named_color_token94] = aux_sym_css_named_color_token94,
  [aux_sym_css_named_color_token95] = aux_sym_css_named_color_token95,
  [aux_sym_css_named_color_token96] = aux_sym_css_named_color_token96,
  [aux_sym_css_named_color_token97] = aux_sym_css_named_color_token97,
  [aux_sym_css_named_color_token98] = aux_sym_css_named_color_token98,
  [aux_sym_css_named_color_token99] = aux_sym_css_named_color_token99,
  [aux_sym_css_named_color_token100] = aux_sym_css_named_color_token100,
  [aux_sym_css_named_color_token101] = aux_sym_css_named_color_token101,
  [aux_sym_css_named_color_token102] = aux_sym_css_named_color_token102,
  [aux_sym_css_named_color_token103] = aux_sym_css_named_color_token103,
  [aux_sym_css_named_color_token104] = aux_sym_css_named_color_token104,
  [aux_sym_css_named_color_token105] = aux_sym_css_named_color_token105,
  [aux_sym_css_named_color_token106] = aux_sym_css_named_color_token106,
  [aux_sym_css_named_color_token107] = aux_sym_css_named_color_token107,
  [aux_sym_css_named_color_token108] = aux_sym_css_named_color_token108,
  [aux_sym_css_named_color_token109] = aux_sym_css_named_color_token109,
  [aux_sym_css_named_color_token110] = aux_sym_css_named_color_token110,
  [aux_sym_css_named_color_token111] = aux_sym_css_named_color_token111,
  [aux_sym_css_named_color_token112] = aux_sym_css_named_color_token112,
  [aux_sym_css_named_color_token113] = aux_sym_css_named_color_token113,
  [aux_sym_css_named_color_token114] = aux_sym_css_named_color_token114,
  [aux_sym_css_named_color_token115] = aux_sym_css_named_color_token115,
  [aux_sym_css_named_color_token116] = aux_sym_css_named_color_token116,
  [aux_sym_css_named_color_token117] = aux_sym_css_named_color_token117,
  [aux_sym_css_named_color_token118] = aux_sym_css_named_color_token118,
  [aux_sym_css_named_color_token119] = aux_sym_css_named_color_token119,
  [aux_sym_css_named_color_token120] = aux_sym_css_named_color_token120,
  [aux_sym_css_named_color_token121] = aux_sym_css_named_color_token121,
  [aux_sym_css_named_color_token122] = aux_sym_css_named_color_token122,
  [aux_sym_css_named_color_token123] = aux_sym_css_named_color_token123,
  [aux_sym_css_named_color_token124] = aux_sym_css_named_color_token124,
  [aux_sym_css_named_color_token125] = aux_sym_css_named_color_token125,
  [aux_sym_css_named_color_token126] = aux_sym_css_named_color_token126,
  [aux_sym_css_named_color_token127] = aux_sym_css_named_color_token127,
  [aux_sym_css_named_color_token128] = aux_sym_css_named_color_token128,
  [aux_sym_css_named_color_token129] = aux_sym_css_named_color_token129,
  [aux_sym_css_named_color_token130] = aux_sym_css_named_color_token130,
  [aux_sym_css_named_color_token131] = aux_sym_css_named_color_token131,
  [aux_sym_css_named_color_token132] = aux_sym_css_named_color_token132,
  [aux_sym_css_named_color_token133] = aux_sym_css_named_color_token133,
  [aux_sym_css_named_color_token134] = aux_sym_css_named_color_token134,
  [aux_sym_css_named_color_token135] = aux_sym_css_named_color_token135,
  [aux_sym_css_named_color_token136] = aux_sym_css_named_color_token136,
  [aux_sym_css_named_color_token137] = aux_sym_css_named_color_token137,
  [aux_sym_css_named_color_token138] = aux_sym_css_named_color_token138,
  [aux_sym_css_named_color_token139] = aux_sym_css_named_color_token139,
  [aux_sym_css_named_color_token140] = aux_sym_css_named_color_token140,
  [aux_sym_css_named_color_token141] = aux_sym_css_named_color_token141,
  [aux_sym_css_named_color_token142] = aux_sym_css_named_color_token142,
  [aux_sym_css_named_color_token143] = aux_sym_css_named_color_token143,
  [aux_sym_css_named_color_token144] = aux_sym_css_named_color_token144,
  [aux_sym_css_named_color_token145] = aux_sym_css_named_color_token145,
  [aux_sym_css_named_color_token146] = aux_sym_css_named_color_token146,
  [aux_sym_css_named_color_token147] = aux_sym_css_named_color_token147,
  [aux_sym_css_named_color_token148] = aux_sym_css_named_color_token148,
  [sym_css_keyword_transparent] = sym_css_keyword_transparent,
  [sym_css_keyword_none] = sym_css_keyword_none,
  [sym_source_file] = sym_source_file,
  [sym_css_number] = sym_css_number,
  [sym_css_percentage] = sym_css_percentage,
  [sym_css_alpha_value] = sym_css_alpha_value,
  [sym_css_hue] = sym_css_hue,
  [sym_css_function_rgb] = sym_css_function_rgb,
  [sym_css_function_rgba] = sym_css_function_rgba,
  [sym__css_function_rgb_legacy] = sym__css_function_rgb_legacy,
  [sym__css_function_rgba_legacy] = sym__css_function_rgba_legacy,
  [sym__css_function_rgb_modern] = sym__css_function_rgb_modern,
  [sym__css_function_rgba_modern] = sym__css_function_rgba_modern,
  [sym_css_function_hsl] = sym_css_function_hsl,
  [sym__css_function_hsl_legacy] = sym__css_function_hsl_legacy,
  [sym__css_function_hsl_modern] = sym__css_function_hsl_modern,
  [sym_css_function_hsla] = sym_css_function_hsla,
  [sym__css_function_hsla_legacy] = sym__css_function_hsla_legacy,
  [sym__css_function_hsla_modern] = sym__css_function_hsla_modern,
  [sym_css_function_hwb] = sym_css_function_hwb,
  [sym_css_function_lab] = sym_css_function_lab,
  [sym_css_function_oklab] = sym_css_function_oklab,
  [sym_css_function_lch] = sym_css_function_lch,
  [sym_css_function_oklch] = sym_css_function_oklch,
  [sym_css_function_color] = sym_css_function_color,
  [sym__css_colorspace_params] = sym__css_colorspace_params,
  [sym__css_predefined_rgb_params] = sym__css_predefined_rgb_params,
  [sym_css_predefined_rgb] = sym_css_predefined_rgb,
  [sym__css_xyz_params] = sym__css_xyz_params,
  [sym_css_xyz_space] = sym_css_xyz_space,
  [sym_css_hex_color] = sym_css_hex_color,
  [sym_css_named_color] = sym_css_named_color,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__css_number] = {
    .visible = false,
    .named = true,
  },
  [sym__css_percentage] = {
    .visible = false,
    .named = true,
  },
  [sym__css_angle] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__css_function_rgb_legacy_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__css_function_rgba_legacy_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__css_function_hsl_legacy_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__css_function_hsla_legacy_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_function_hwb_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_function_lab_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_function_oklab_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_function_lch_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_function_oklch_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_function_color_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_predefined_rgb_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_predefined_rgb_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_predefined_rgb_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_predefined_rgb_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_predefined_rgb_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_predefined_rgb_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_xyz_space_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_xyz_space_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_xyz_space_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_css_hex_color_6_digits] = {
    .visible = true,
    .named = true,
  },
  [sym_css_hex_color_8_digits] = {
    .visible = true,
    .named = true,
  },
  [sym_css_hex_color_3_digits] = {
    .visible = true,
    .named = true,
  },
  [sym_css_hex_color_4_digits] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_css_named_color_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token26] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token27] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token28] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token29] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token30] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token31] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token32] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token33] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token34] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token35] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token36] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token37] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token38] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token39] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token40] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token41] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token42] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token43] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token44] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token45] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token46] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token47] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token48] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token49] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token50] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token51] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token52] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token53] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token54] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token55] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token56] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token57] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token58] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token59] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token60] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token61] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token62] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token63] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token64] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token65] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token66] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token67] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token68] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token69] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token70] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token71] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token72] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token73] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token74] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token75] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token76] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token77] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token78] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token79] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token80] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token81] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token82] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token83] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token84] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token85] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token86] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token87] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token88] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token89] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token90] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token91] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token92] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token93] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token94] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token95] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token96] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token97] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token98] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token99] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token100] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token101] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token102] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token103] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token104] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token105] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token106] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token107] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token108] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token109] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token110] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token111] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token112] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token113] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token114] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token115] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token116] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token117] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token118] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token119] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token120] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token121] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token122] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token123] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token124] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token125] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token126] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token127] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token128] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token129] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token130] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token131] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token132] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token133] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token134] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token135] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token136] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token137] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token138] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token139] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token140] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token141] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token142] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token143] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token144] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token145] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token146] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token147] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_named_color_token148] = {
    .visible = false,
    .named = false,
  },
  [sym_css_keyword_transparent] = {
    .visible = true,
    .named = true,
  },
  [sym_css_keyword_none] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_css_number] = {
    .visible = true,
    .named = true,
  },
  [sym_css_percentage] = {
    .visible = true,
    .named = true,
  },
  [sym_css_alpha_value] = {
    .visible = true,
    .named = true,
  },
  [sym_css_hue] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_rgb] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_rgba] = {
    .visible = true,
    .named = true,
  },
  [sym__css_function_rgb_legacy] = {
    .visible = false,
    .named = true,
  },
  [sym__css_function_rgba_legacy] = {
    .visible = false,
    .named = true,
  },
  [sym__css_function_rgb_modern] = {
    .visible = false,
    .named = true,
  },
  [sym__css_function_rgba_modern] = {
    .visible = false,
    .named = true,
  },
  [sym_css_function_hsl] = {
    .visible = true,
    .named = true,
  },
  [sym__css_function_hsl_legacy] = {
    .visible = false,
    .named = true,
  },
  [sym__css_function_hsl_modern] = {
    .visible = false,
    .named = true,
  },
  [sym_css_function_hsla] = {
    .visible = true,
    .named = true,
  },
  [sym__css_function_hsla_legacy] = {
    .visible = false,
    .named = true,
  },
  [sym__css_function_hsla_modern] = {
    .visible = false,
    .named = true,
  },
  [sym_css_function_hwb] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_lab] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_oklab] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_lch] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_oklch] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_color] = {
    .visible = true,
    .named = true,
  },
  [sym__css_colorspace_params] = {
    .visible = false,
    .named = true,
  },
  [sym__css_predefined_rgb_params] = {
    .visible = false,
    .named = true,
  },
  [sym_css_predefined_rgb] = {
    .visible = true,
    .named = true,
  },
  [sym__css_xyz_params] = {
    .visible = false,
    .named = true,
  },
  [sym_css_xyz_space] = {
    .visible = true,
    .named = true,
  },
  [sym_css_hex_color] = {
    .visible = true,
    .named = true,
  },
  [sym_css_named_color] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_C = 1,
  field_L = 2,
  field_a = 3,
  field_alpha = 4,
  field_b = 5,
  field_g = 6,
  field_h = 7,
  field_l = 8,
  field_r = 9,
  field_s = 10,
  field_w = 11,
  field_x = 12,
  field_y = 13,
  field_z = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_C] = "C",
  [field_L] = "L",
  [field_a] = "a",
  [field_alpha] = "alpha",
  [field_b] = "b",
  [field_g] = "g",
  [field_h] = "h",
  [field_l] = "l",
  [field_r] = "r",
  [field_s] = "s",
  [field_w] = "w",
  [field_x] = "x",
  [field_y] = "y",
  [field_z] = "z",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 4},
  [2] = {.index = 4, .length = 4},
  [3] = {.index = 8, .length = 3},
  [4] = {.index = 11, .length = 3},
  [5] = {.index = 14, .length = 6},
  [6] = {.index = 20, .length = 3},
  [7] = {.index = 23, .length = 3},
  [8] = {.index = 26, .length = 3},
  [9] = {.index = 29, .length = 3},
  [10] = {.index = 32, .length = 3},
  [11] = {.index = 35, .length = 7},
  [12] = {.index = 42, .length = 3},
  [13] = {.index = 45, .length = 3},
  [14] = {.index = 48, .length = 4},
  [15] = {.index = 52, .length = 3},
  [16] = {.index = 55, .length = 4},
  [17] = {.index = 59, .length = 3},
  [18] = {.index = 62, .length = 4},
  [19] = {.index = 66, .length = 4},
  [20] = {.index = 70, .length = 4},
  [21] = {.index = 74, .length = 4},
  [22] = {.index = 78, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alpha, 0, .inherited = true},
    {field_b, 0, .inherited = true},
    {field_g, 0, .inherited = true},
    {field_r, 0, .inherited = true},
  [4] =
    {field_alpha, 0, .inherited = true},
    {field_h, 0, .inherited = true},
    {field_l, 0, .inherited = true},
    {field_s, 0, .inherited = true},
  [8] =
    {field_b, 0, .inherited = true},
    {field_g, 0, .inherited = true},
    {field_r, 0, .inherited = true},
  [11] =
    {field_x, 0, .inherited = true},
    {field_y, 0, .inherited = true},
    {field_z, 0, .inherited = true},
  [14] =
    {field_b, 2, .inherited = true},
    {field_g, 2, .inherited = true},
    {field_r, 2, .inherited = true},
    {field_x, 2, .inherited = true},
    {field_y, 2, .inherited = true},
    {field_z, 2, .inherited = true},
  [20] =
    {field_b, 4},
    {field_g, 3},
    {field_r, 2},
  [23] =
    {field_h, 2},
    {field_l, 4},
    {field_s, 3},
  [26] =
    {field_b, 4},
    {field_h, 2},
    {field_w, 3},
  [29] =
    {field_L, 2},
    {field_a, 3},
    {field_b, 4},
  [32] =
    {field_C, 3},
    {field_L, 2},
    {field_h, 4},
  [35] =
    {field_alpha, 4},
    {field_b, 2, .inherited = true},
    {field_g, 2, .inherited = true},
    {field_r, 2, .inherited = true},
    {field_x, 2, .inherited = true},
    {field_y, 2, .inherited = true},
    {field_z, 2, .inherited = true},
  [42] =
    {field_b, 3},
    {field_g, 2},
    {field_r, 1},
  [45] =
    {field_x, 1},
    {field_y, 2},
    {field_z, 3},
  [48] =
    {field_alpha, 6},
    {field_b, 4},
    {field_g, 3},
    {field_r, 2},
  [52] =
    {field_b, 6},
    {field_g, 4},
    {field_r, 2},
  [55] =
    {field_alpha, 6},
    {field_h, 2},
    {field_l, 4},
    {field_s, 3},
  [59] =
    {field_h, 2},
    {field_l, 6},
    {field_s, 4},
  [62] =
    {field_alpha, 6},
    {field_b, 4},
    {field_h, 2},
    {field_w, 3},
  [66] =
    {field_L, 2},
    {field_a, 3},
    {field_alpha, 6},
    {field_b, 4},
  [70] =
    {field_C, 3},
    {field_L, 2},
    {field_alpha, 6},
    {field_h, 4},
  [74] =
    {field_alpha, 8},
    {field_b, 6},
    {field_g, 4},
    {field_r, 2},
  [78] =
    {field_alpha, 8},
    {field_h, 2},
    {field_l, 6},
    {field_s, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(828);
      ADVANCE_MAP(
        '#', 827,
        '(', 835,
        ')', 837,
        ',', 836,
        '.', 821,
        '/', 839,
        '+', 4,
        '-', 4,
        'A', 14,
        'a', 14,
        'B', 216,
        'b', 216,
        'C', 16,
        'c', 16,
        'D', 30,
        'd', 30,
        'F', 354,
        'f', 354,
        'G', 37,
        'g', 37,
        'H', 548,
        'h', 548,
        'I', 517,
        'i', 517,
        'K', 332,
        'k', 332,
        'L', 17,
        'l', 17,
        'M', 18,
        'm', 18,
        'N', 19,
        'n', 19,
        'O', 402,
        'o', 402,
        'P', 20,
        'p', 20,
        'R', 165,
        'r', 165,
        'S', 21,
        's', 21,
        'T', 34,
        't', 34,
        'V', 357,
        'v', 357,
        'W', 328,
        'w', 328,
        'X', 795,
        'x', 795,
        'Y', 217,
        'y', 217,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(603);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(649);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(655);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(853);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(855);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == '3') ADVANCE(850);
      END_STATE();
    case 11:
      if (lookahead == '5') ADVANCE(856);
      END_STATE();
    case 12:
      if (lookahead == '5') ADVANCE(6);
      if (lookahead == '6') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '8') ADVANCE(2);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '9', 13,
        'L', 355,
        'l', 355,
        'N', 711,
        'n', 711,
        'Q', 738,
        'q', 738,
        'Z', 763,
        'z', 763,
      );
      END_STATE();
    case 15:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(831);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        'A', 149,
        'a', 149,
        'H', 44,
        'h', 44,
        'O', 435,
        'o', 435,
        'R', 356,
        'r', 356,
        'Y', 36,
        'y', 36,
      );
      END_STATE();
    case 17:
      ADVANCE_MAP(
        'A', 87,
        'a', 87,
        'C', 329,
        'c', 329,
        'E', 477,
        'e', 477,
        'I', 305,
        'i', 305,
      );
      END_STATE();
    case 18:
      ADVANCE_MAP(
        'A', 314,
        'a', 314,
        'E', 153,
        'e', 153,
        'I', 151,
        'i', 151,
        'O', 119,
        'o', 119,
      );
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(773);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        'A', 419,
        'a', 419,
        'E', 67,
        'e', 67,
        'I', 518,
        'i', 518,
        'L', 736,
        'l', 736,
        'O', 788,
        'o', 788,
        'R', 555,
        'r', 555,
        'U', 653,
        'u', 653,
      );
      END_STATE();
    case 21:
      ADVANCE_MAP(
        'A', 148,
        'a', 148,
        'E', 23,
        'e', 23,
        'I', 224,
        'i', 224,
        'K', 809,
        'k', 809,
        'L', 35,
        'l', 35,
        'N', 554,
        'n', 554,
        'P', 654,
        'p', 654,
        'R', 304,
        'r', 304,
        'T', 257,
        't', 257,
      );
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(863);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(393);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(962);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(989);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(909);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(946);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(889);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        'A', 622,
        'a', 622,
        'E', 166,
        'e', 166,
        'I', 476,
        'i', 476,
        'O', 158,
        'o', 158,
      );
      END_STATE();
    case 31:
      ADVANCE_MAP(
        'A', 617,
        'a', 617,
        'B', 450,
        'b', 450,
        'O', 659,
        'o', 659,
        'P', 765,
        'p', 765,
        'S', 296,
        's', 296,
        'T', 772,
        't', 772,
        'V', 391,
        'v', 391,
      );
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(796);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        'A', 485,
        'a', 485,
        'E', 41,
        'e', 41,
        'H', 371,
        'h', 371,
        'O', 478,
        'o', 478,
        'R', 50,
        'r', 50,
        'U', 650,
        'u', 650,
      );
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(716);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(486);
      END_STATE();
    case 37:
      ADVANCE_MAP(
        'A', 358,
        'a', 358,
        'H', 552,
        'h', 552,
        'O', 414,
        'o', 414,
        'R', 33,
        'r', 33,
      );
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(330);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(408);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(614);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(811);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(542);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(798);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(713);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(409);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(521);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(704);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(808);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(800);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(801);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(802);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(804);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(806);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(460);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(546);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(549);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(626);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(120);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(734);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(484);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(701);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(719);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(317);
      END_STATE();
    case 74:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(721);
      END_STATE();
    case 75:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(733);
      END_STATE();
    case 76:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 77:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(790);
      END_STATE();
    case 78:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(545);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 79:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(729);
      END_STATE();
    case 80:
      ADVANCE_MAP(
        'A', 463,
        'a', 463,
        'E', 84,
        'e', 84,
        'K', 818,
        'k', 818,
        'L', 74,
        'l', 74,
        'T', 295,
        't', 295,
      );
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(667);
      END_STATE();
    case 82:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 83:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 84:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 86:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(842);
      END_STATE();
    case 87:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(843);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(228);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(520);
      END_STATE();
    case 88:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(834);
      END_STATE();
    case 89:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(848);
      END_STATE();
    case 90:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(844);
      END_STATE();
    case 91:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(851);
      END_STATE();
    case 92:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(965);
      END_STATE();
    case 93:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(852);
      END_STATE();
    case 94:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(436);
      END_STATE();
    case 95:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(279);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(8);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(981);
      END_STATE();
    case 96:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(651);
      END_STATE();
    case 97:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(662);
      END_STATE();
    case 98:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(578);
      END_STATE();
    case 99:
      ADVANCE_MAP(
        'B', 437,
        'b', 437,
        'C', 815,
        'c', 815,
        'G', 574,
        'g', 574,
        'K', 345,
        'k', 345,
        'M', 73,
        'm', 73,
        'O', 421,
        'o', 421,
        'R', 225,
        'r', 225,
        'S', 60,
        's', 60,
        'T', 770,
        't', 770,
        'V', 389,
        'v', 389,
      );
      END_STATE();
    case 100:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(440);
      END_STATE();
    case 101:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(442);
      END_STATE();
    case 102:
      ADVANCE_MAP(
        'B', 444,
        'b', 444,
        'C', 593,
        'c', 593,
        'G', 601,
        'g', 601,
        'P', 379,
        'p', 379,
        'S', 80,
        's', 80,
        'Y', 285,
        'y', 285,
      );
      END_STATE();
    case 103:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(446);
      END_STATE();
    case 104:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(447);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(652);
      END_STATE();
    case 105:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(448);
      END_STATE();
    case 106:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(449);
      END_STATE();
    case 107:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(451);
      END_STATE();
    case 108:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(452);
      END_STATE();
    case 109:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(453);
      END_STATE();
    case 110:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(454);
      END_STATE();
    case 111:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(455);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(656);
      END_STATE();
    case 112:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(456);
      END_STATE();
    case 113:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(457);
      END_STATE();
    case 114:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(458);
      END_STATE();
    case 115:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(666);
      END_STATE();
    case 116:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(670);
      END_STATE();
    case 117:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(333);
      END_STATE();
    case 118:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(396);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 119:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 120:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 121:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 122:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 123:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(343);
      END_STATE();
    case 124:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 125:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 126:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      END_STATE();
    case 127:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(570);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 129:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 130:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(645);
      END_STATE();
    case 131:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(912);
      END_STATE();
    case 133:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(833);
      END_STATE();
    case 134:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(968);
      END_STATE();
    case 136:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(893);
      END_STATE();
    case 137:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(873);
      END_STATE();
    case 138:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(913);
      END_STATE();
    case 139:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(920);
      END_STATE();
    case 140:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(967);
      END_STATE();
    case 141:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(892);
      END_STATE();
    case 142:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(950);
      END_STATE();
    case 143:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(884);
      END_STATE();
    case 144:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(969);
      END_STATE();
    case 145:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(972);
      END_STATE();
    case 146:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(869);
      END_STATE();
    case 147:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(956);
      END_STATE();
    case 148:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(154);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 149:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 150:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(418);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(774);
      END_STATE();
    case 151:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(527);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(710);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(712);
      END_STATE();
    case 152:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 153:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 154:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(433);
      END_STATE();
    case 155:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(819);
      END_STATE();
    case 156:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 157:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 158:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(310);
      END_STATE();
    case 159:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 160:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 161:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 162:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 163:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 164:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(816);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(88);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(700);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(943);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1010);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(865);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1005);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(966);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(979);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(963);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(991);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1000);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(959);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(983);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(992);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(997);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1002);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(911);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(949);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(978);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1006);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(961);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(862);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(938);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(951);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(957);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(971);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(980);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(941);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(953);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(955);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(948);
      END_STATE();
    case 216:
      ADVANCE_MAP(
        'E', 353,
        'e', 353,
        'I', 686,
        'i', 686,
        'L', 22,
        'l', 22,
        'R', 553,
        'r', 553,
        'U', 628,
        'u', 628,
      );
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(775);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(917);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(706);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(679);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(887);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(934);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(717);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 278:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 280:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 282:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(728);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 285:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 287:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 288:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(793);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 290:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 291:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(683);
      END_STATE();
    case 297:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(974);
      END_STATE();
    case 298:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(297);
      END_STATE();
    case 299:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(583);
      END_STATE();
    case 301:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(438);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(365);
      END_STATE();
    case 302:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(833);
      END_STATE();
    case 303:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(598);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(771);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(390);
      END_STATE();
    case 304:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 305:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(335);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 306:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 307:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 308:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(627);
      END_STATE();
    case 309:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 310:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 311:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 312:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(194);
      END_STATE();
    case 313:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(349);
      END_STATE();
    case 314:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(236);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(586);
      END_STATE();
    case 315:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(643);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(344);
      END_STATE();
    case 316:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(658);
      END_STATE();
    case 317:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(261);
      END_STATE();
    case 318:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(664);
      END_STATE();
    case 319:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(671);
      END_STATE();
    case 320:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(672);
      END_STATE();
    case 321:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(320);
      END_STATE();
    case 322:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(674);
      END_STATE();
    case 323:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(675);
      END_STATE();
    case 324:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(676);
      END_STATE();
    case 325:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(677);
      END_STATE();
    case 326:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(678);
      END_STATE();
    case 327:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(326);
      END_STATE();
    case 328:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(259);
      END_STATE();
    case 329:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(845);
      END_STATE();
    case 330:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(846);
      END_STATE();
    case 331:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(925);
      END_STATE();
    case 332:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 333:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(693);
      END_STATE();
    case 334:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(605);
      END_STATE();
    case 335:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(703);
      END_STATE();
    case 336:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(587);
      END_STATE();
    case 337:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(361);
      END_STATE();
    case 338:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(380);
      END_STATE();
    case 339:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(370);
      END_STATE();
    case 340:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(363);
      END_STATE();
    case 341:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(362);
      END_STATE();
    case 342:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(364);
      END_STATE();
    case 343:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(226);
      END_STATE();
    case 344:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(258);
      END_STATE();
    case 345:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 346:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(383);
      END_STATE();
    case 347:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(385);
      END_STATE();
    case 348:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(386);
      END_STATE();
    case 349:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(732);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(923);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(888);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(309);
      END_STATE();
    case 354:
      ADVANCE_MAP(
        'I', 632,
        'i', 632,
        'L', 560,
        'l', 560,
        'O', 633,
        'o', 633,
        'U', 117,
        'u', 117,
      );
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 365:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(415);
      END_STATE();
    case 366:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 367:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 368:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(495);
      END_STATE();
    case 369:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(538);
      END_STATE();
    case 370:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 371:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(690);
      END_STATE();
    case 372:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 373:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(737);
      END_STATE();
    case 374:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      END_STATE();
    case 375:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(539);
      END_STATE();
    case 376:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(776);
      END_STATE();
    case 377:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 378:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 379:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(526);
      END_STATE();
    case 380:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(720);
      END_STATE();
    case 381:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(697);
      END_STATE();
    case 382:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(698);
      END_STATE();
    case 383:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      END_STATE();
    case 384:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 385:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(723);
      END_STATE();
    case 386:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(724);
      END_STATE();
    case 387:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(618);
      END_STATE();
    case 388:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(590);
      END_STATE();
    case 389:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(591);
      END_STATE();
    case 390:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 391:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      END_STATE();
    case 392:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 393:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(600);
      END_STATE();
    case 394:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(99);
      END_STATE();
    case 395:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(976);
      END_STATE();
    case 396:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(868);
      END_STATE();
    case 397:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(919);
      END_STATE();
    case 398:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(879);
      END_STATE();
    case 399:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(901);
      END_STATE();
    case 400:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(906);
      END_STATE();
    case 401:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(935);
      END_STATE();
    case 402:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(412);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(150);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 403:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(351);
      END_STATE();
    case 404:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(352);
      END_STATE();
    case 405:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(199);
      END_STATE();
    case 406:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(817);
      END_STATE();
    case 407:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(840);
      END_STATE();
    case 408:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(999);
      END_STATE();
    case 409:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(877);
      END_STATE();
    case 410:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(988);
      END_STATE();
    case 411:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(929);
      END_STATE();
    case 412:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 413:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(810);
      END_STATE();
    case 414:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 415:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 416:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(739);
      END_STATE();
    case 417:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(434);
      END_STATE();
    case 418:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 419:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(170);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 420:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 421:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(376);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 422:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 423:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 424:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 425:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 426:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 427:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 428:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 429:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 430:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 431:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 432:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 433:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 434:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(556);
      END_STATE();
    case 435:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(567);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 436:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(745);
      END_STATE();
    case 437:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(746);
      END_STATE();
    case 438:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(558);
      END_STATE();
    case 439:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 440:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(747);
      END_STATE();
    case 441:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(561);
      END_STATE();
    case 442:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(748);
      END_STATE();
    case 443:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(563);
      END_STATE();
    case 444:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(749);
      END_STATE();
    case 445:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(564);
      END_STATE();
    case 446:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(750);
      END_STATE();
    case 447:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(751);
      END_STATE();
    case 448:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(752);
      END_STATE();
    case 449:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(753);
      END_STATE();
    case 450:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(754);
      END_STATE();
    case 451:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(755);
      END_STATE();
    case 452:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(756);
      END_STATE();
    case 453:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(757);
      END_STATE();
    case 454:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(758);
      END_STATE();
    case 455:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(759);
      END_STATE();
    case 456:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(760);
      END_STATE();
    case 457:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(761);
      END_STATE();
    case 458:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(762);
      END_STATE();
    case 459:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 460:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 461:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(441);
      END_STATE();
    case 462:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 463:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(482);
      END_STATE();
    case 464:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 465:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 466:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 467:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(791);
      END_STATE();
    case 468:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 469:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 470:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 471:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 472:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(977);
      END_STATE();
    case 473:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 474:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(958);
      END_STATE();
    case 475:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(702);
      END_STATE();
    case 476:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(308);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(609);
      END_STATE();
    case 477:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(571);
      END_STATE();
    case 478:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 479:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(565);
      END_STATE();
    case 480:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(579);
      END_STATE();
    case 481:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(581);
      END_STATE();
    case 482:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(582);
      END_STATE();
    case 483:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(584);
      END_STATE();
    case 484:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 485:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(998);
      END_STATE();
    case 486:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(881);
      END_STATE();
    case 487:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(833);
      END_STATE();
    case 488:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(872);
      END_STATE();
    case 489:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(915);
      END_STATE();
    case 490:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(945);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(947);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(985);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(880);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(883);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(960);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(987);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(886);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(926);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(930);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(944);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(970);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(982);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(894);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(933);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(986);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(908);
      END_STATE();
    case 507:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(936);
      END_STATE();
    case 508:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(984);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(996);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1008);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(895);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(927);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(937);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(890);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(952);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(954);
      END_STATE();
    case 517:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(562);
      END_STATE();
    case 518:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 519:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(689);
      END_STATE();
    case 520:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 521:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 522:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 523:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 524:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 525:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(219);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(607);
      END_STATE();
    case 526:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 527:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 528:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 529:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 530:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 531:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(708);
      END_STATE();
    case 532:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(530);
      END_STATE();
    case 533:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(635);
      END_STATE();
    case 534:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 535:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(638);
      END_STATE();
    case 536:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(640);
      END_STATE();
    case 537:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(641);
      END_STATE();
    case 538:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 539:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 540:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 541:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(718);
      END_STATE();
    case 542:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 543:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 544:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 545:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 546:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(646);
      END_STATE();
    case 547:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(525);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(407);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(86);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(921);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1001);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(910);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(777);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(606);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(778);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(694);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(794);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(780);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(629);
      END_STATE();
    case 563:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(781);
      END_STATE();
    case 564:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(782);
      END_STATE();
    case 565:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 566:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 567:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(623);
      END_STATE();
    case 568:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 569:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 570:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 571:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 572:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 573:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 574:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(439);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 575:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 576:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 577:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 578:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(637);
      END_STATE();
    case 579:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 580:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 581:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(503);
      END_STATE();
    case 582:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(507);
      END_STATE();
    case 583:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(512);
      END_STATE();
    case 584:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 585:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(785);
      END_STATE();
    case 586:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 587:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(714);
      END_STATE();
    case 588:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(786);
      END_STATE();
    case 589:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(787);
      END_STATE();
    case 590:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 591:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 592:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 593:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(660);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(66);
      END_STATE();
    case 594:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 595:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 596:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 597:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 598:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(459);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 599:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 600:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(792);
      END_STATE();
    case 601:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(462);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 602:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(613);
      END_STATE();
    case 603:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 604:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(973);
      END_STATE();
    case 605:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(735);
      END_STATE();
    case 606:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(336);
      END_STATE();
    case 607:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(372);
      END_STATE();
    case 608:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 609:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(420);
      END_STATE();
    case 610:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(425);
      END_STATE();
    case 611:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(430);
      END_STATE();
    case 612:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(431);
      END_STATE();
    case 613:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(377);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(406);
      END_STATE();
    case 614:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(767);
      END_STATE();
    case 615:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(742);
      END_STATE();
    case 616:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(740);
      END_STATE();
    case 617:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(743);
      END_STATE();
    case 618:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(744);
      END_STATE();
    case 619:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(766);
      END_STATE();
    case 620:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(768);
      END_STATE();
    case 621:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(769);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(847);
      END_STATE();
    case 624:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(990);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(924);
      END_STATE();
    case 626:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(849);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 628:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 629:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(797);
      END_STATE();
    case 630:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(726);
      END_STATE();
    case 631:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 632:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 634:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 635:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 636:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 637:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 638:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 639:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(487);
      END_STATE();
    case 640:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 641:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(576);
      END_STATE();
    case 642:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 643:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 644:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 645:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 646:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 647:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 648:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 649:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 650:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(616);
      END_STATE();
    case 651:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 652:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 653:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(610);
      END_STATE();
    case 654:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 655:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 656:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 657:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 658:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 659:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 660:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 661:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 662:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 663:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 664:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 665:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(611);
      END_STATE();
    case 666:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(588);
      END_STATE();
    case 667:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 668:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 669:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 670:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(589);
      END_STATE();
    case 671:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 672:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 673:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 674:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 675:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 676:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 677:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 678:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 679:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 680:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 681:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 682:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 683:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 684:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 685:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 686:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(615);
      END_STATE();
    case 687:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(608);
      END_STATE();
    case 688:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(709);
      END_STATE();
    case 689:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 690:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(725);
      END_STATE();
    case 691:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(331);
      END_STATE();
    case 692:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(730);
      END_STATE();
    case 693:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 694:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      END_STATE();
    case 695:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(191);
      END_STATE();
    case 696:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 697:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      END_STATE();
    case 698:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      END_STATE();
    case 699:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(214);
      END_STATE();
    case 700:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(813);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 701:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(368);
      END_STATE();
    case 702:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(580);
      END_STATE();
    case 703:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(102);
      END_STATE();
    case 704:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1004);
      END_STATE();
    case 705:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1003);
      END_STATE();
    case 706:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(871);
      END_STATE();
    case 707:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(900);
      END_STATE();
    case 708:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1009);
      END_STATE();
    case 709:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(789);
      END_STATE();
    case 710:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 711:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(387);
      END_STATE();
    case 712:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      END_STATE();
    case 713:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(550);
      END_STATE();
    case 714:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      END_STATE();
    case 715:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 716:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 717:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
      END_STATE();
    case 718:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 719:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 720:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      END_STATE();
    case 721:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(280);
      END_STATE();
    case 722:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 723:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(202);
      END_STATE();
    case 724:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(203);
      END_STATE();
    case 725:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      END_STATE();
    case 726:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(644);
      END_STATE();
    case 727:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(647);
      END_STATE();
    case 728:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(648);
      END_STATE();
    case 729:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(278);
      END_STATE();
    case 730:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 731:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(101);
      END_STATE();
    case 732:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 733:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      END_STATE();
    case 734:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(975);
      END_STATE();
    case 735:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(298);
      END_STATE();
    case 736:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(472);
      END_STATE();
    case 737:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(473);
      END_STATE();
    case 738:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 739:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(691);
      END_STATE();
    case 740:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(572);
      END_STATE();
    case 741:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(639);
      END_STATE();
    case 742:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 743:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 744:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 745:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 746:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 747:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 748:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 749:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 750:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 751:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 752:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 753:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 754:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 755:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 756:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 757:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 758:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 759:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 760:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 761:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 762:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 763:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(636);
      END_STATE();
    case 764:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(696);
      END_STATE();
    case 765:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(665);
      END_STATE();
    case 766:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(594);
      END_STATE();
    case 767:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(669);
      END_STATE();
    case 768:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(595);
      END_STATE();
    case 769:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(596);
      END_STATE();
    case 770:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(682);
      END_STATE();
    case 771:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(684);
      END_STATE();
    case 772:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(685);
      END_STATE();
    case 773:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 774:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(173);
      END_STATE();
    case 775:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(237);
      END_STATE();
    case 776:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(294);
      END_STATE();
    case 777:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(995);
      END_STATE();
    case 778:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1007);
      END_STATE();
    case 779:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(918);
      END_STATE();
    case 780:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(916);
      END_STATE();
    case 781:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(942);
      END_STATE();
    case 782:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(931);
      END_STATE();
    case 783:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(488);
      END_STATE();
    case 784:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(569);
      END_STATE();
    case 785:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(502);
      END_STATE();
    case 786:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(505);
      END_STATE();
    case 787:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(508);
      END_STATE();
    case 788:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(163);
      END_STATE();
    case 789:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(338);
      END_STATE();
    case 790:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(341);
      END_STATE();
    case 791:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(346);
      END_STATE();
    case 792:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(347);
      END_STATE();
    case 793:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(348);
      END_STATE();
    case 794:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(293);
      END_STATE();
    case 795:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(820);
      END_STATE();
    case 796:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(914);
      END_STATE();
    case 797:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(922);
      END_STATE();
    case 798:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(903);
      END_STATE();
    case 799:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(904);
      END_STATE();
    case 800:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(885);
      END_STATE();
    case 801:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(932);
      END_STATE();
    case 802:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(993);
      END_STATE();
    case 803:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(994);
      END_STATE();
    case 804:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(897);
      END_STATE();
    case 805:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(898);
      END_STATE();
    case 806:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(939);
      END_STATE();
    case 807:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(940);
      END_STATE();
    case 808:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1);
      END_STATE();
    case 809:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 810:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(784);
      END_STATE();
    case 811:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 812:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(634);
      END_STATE();
    case 813:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 814:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(156);
      END_STATE();
    case 815:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(64);
      END_STATE();
    case 816:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 817:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 818:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 819:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(287);
      END_STATE();
    case 820:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(854);
      END_STATE();
    case 821:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(830);
      END_STATE();
    case 822:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(831);
      END_STATE();
    case 823:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(859);
      END_STATE();
    case 824:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      END_STATE();
    case 825:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(858);
      END_STATE();
    case 826:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(823);
      END_STATE();
    case 827:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(826);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 832,
        '.', 821,
        'D', 218,
        'd', 218,
        'E', 15,
        'e', 15,
        'G', 631,
        'g', 631,
        'R', 40,
        'r', 40,
        'T', 741,
        't', 741,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 832,
        'D', 218,
        'd', 218,
        'E', 15,
        'e', 15,
        'G', 631,
        'g', 631,
        'R', 40,
        'r', 40,
        'T', 741,
        't', 741,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(830);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 832,
        'D', 218,
        'd', 218,
        'G', 631,
        'g', 631,
        'R', 40,
        'r', 40,
        'T', 741,
        't', 741,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(831);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__css_percentage);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__css_angle);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym__css_function_rgb_legacy_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym__css_function_rgba_legacy_token1);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym__css_function_hsl_legacy_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym__css_function_hsla_legacy_token1);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_css_function_hwb_token1);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_css_function_lab_token1);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_css_function_oklab_token1);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_css_function_lch_token1);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_css_function_oklch_token1);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_css_function_color_token1);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_css_predefined_rgb_token1);
      if (lookahead == '-') ADVANCE(422);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_css_predefined_rgb_token2);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_css_predefined_rgb_token3);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_css_predefined_rgb_token4);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_css_predefined_rgb_token5);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_css_predefined_rgb_token6);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_css_xyz_space_token1);
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_css_xyz_space_token2);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_css_xyz_space_token3);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_css_hex_color_6_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(825);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_css_hex_color_8_digits);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_css_hex_color_3_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(860);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_css_hex_color_4_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(824);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_css_named_color_token1);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_css_named_color_token2);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_css_named_color_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_css_named_color_token4);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_css_named_color_token5);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_css_named_color_token6);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_css_named_color_token7);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_css_named_color_token8);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_css_named_color_token9);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_css_named_color_token10);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(388);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_css_named_color_token11);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_css_named_color_token12);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_css_named_color_token13);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_css_named_color_token14);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_css_named_color_token15);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_css_named_color_token16);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_css_named_color_token17);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_css_named_color_token18);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_css_named_color_token19);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_css_named_color_token20);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_css_named_color_token21);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_css_named_color_token22);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_css_named_color_token23);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_css_named_color_token24);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_css_named_color_token25);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_css_named_color_token26);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_css_named_color_token27);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_css_named_color_token28);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_css_named_color_token29);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_css_named_color_token30);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_css_named_color_token31);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_css_named_color_token32);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_css_named_color_token33);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_css_named_color_token34);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_css_named_color_token35);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_css_named_color_token36);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_css_named_color_token37);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_css_named_color_token38);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_css_named_color_token39);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_css_named_color_token40);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_css_named_color_token41);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_css_named_color_token42);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_css_named_color_token43);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_css_named_color_token44);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_css_named_color_token45);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_css_named_color_token46);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_css_named_color_token47);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_css_named_color_token48);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_css_named_color_token49);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_css_named_color_token50);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_css_named_color_token51);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_css_named_color_token52);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_css_named_color_token53);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_css_named_color_token54);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_css_named_color_token55);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(284);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_css_named_color_token56);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_css_named_color_token57);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_css_named_color_token58);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_css_named_color_token59);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_css_named_color_token60);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_css_named_color_token61);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_css_named_color_token62);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_css_named_color_token63);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_css_named_color_token64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(416);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_css_named_color_token65);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_css_named_color_token66);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_css_named_color_token67);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_css_named_color_token68);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_css_named_color_token69);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_css_named_color_token70);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_css_named_color_token71);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_css_named_color_token72);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_css_named_color_token73);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_css_named_color_token74);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_css_named_color_token75);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_css_named_color_token76);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_css_named_color_token77);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_css_named_color_token78);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_css_named_color_token79);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_css_named_color_token80);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_css_named_color_token81);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_css_named_color_token82);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_css_named_color_token83);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(668);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_css_named_color_token84);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_css_named_color_token85);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_css_named_color_token86);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_css_named_color_token87);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_css_named_color_token88);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_css_named_color_token89);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_css_named_color_token90);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_css_named_color_token91);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_css_named_color_token92);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_css_named_color_token93);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_css_named_color_token94);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_css_named_color_token95);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_css_named_color_token96);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_css_named_color_token97);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_css_named_color_token98);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_css_named_color_token99);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_css_named_color_token100);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_css_named_color_token101);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_css_named_color_token102);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_css_named_color_token103);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_css_named_color_token104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(642);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_css_named_color_token105);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_css_named_color_token106);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_css_named_color_token107);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_css_named_color_token108);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_css_named_color_token109);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_css_named_color_token110);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_css_named_color_token111);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_css_named_color_token112);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_css_named_color_token113);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_css_named_color_token114);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_css_named_color_token115);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_css_named_color_token116);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_css_named_color_token117);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_css_named_color_token118);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_css_named_color_token119);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_css_named_color_token120);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_css_named_color_token121);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_css_named_color_token122);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_css_named_color_token123);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_css_named_color_token124);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_css_named_color_token125);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_css_named_color_token126);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_css_named_color_token127);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_css_named_color_token128);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_css_named_color_token129);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_css_named_color_token130);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_css_named_color_token131);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_css_named_color_token132);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_css_named_color_token133);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_css_named_color_token134);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_css_named_color_token135);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_css_named_color_token136);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_css_named_color_token137);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_css_named_color_token138);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_css_named_color_token139);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_css_named_color_token140);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_css_named_color_token141);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_css_named_color_token142);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_css_named_color_token143);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_css_named_color_token144);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_css_named_color_token145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(479);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_css_named_color_token146);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_css_named_color_token147);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(673);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_css_named_color_token148);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_css_keyword_transparent);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_css_keyword_none);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__css_number] = ACTIONS(1),
    [sym__css_percentage] = ACTIONS(1),
    [sym__css_angle] = ACTIONS(1),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(1),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(1),
    [aux_sym_css_function_hwb_token1] = ACTIONS(1),
    [aux_sym_css_function_lab_token1] = ACTIONS(1),
    [aux_sym_css_function_oklab_token1] = ACTIONS(1),
    [aux_sym_css_function_lch_token1] = ACTIONS(1),
    [aux_sym_css_function_oklch_token1] = ACTIONS(1),
    [aux_sym_css_function_color_token1] = ACTIONS(1),
    [aux_sym_css_predefined_rgb_token1] = ACTIONS(1),
    [aux_sym_css_predefined_rgb_token2] = ACTIONS(1),
    [aux_sym_css_predefined_rgb_token3] = ACTIONS(1),
    [aux_sym_css_predefined_rgb_token4] = ACTIONS(1),
    [aux_sym_css_predefined_rgb_token5] = ACTIONS(1),
    [aux_sym_css_predefined_rgb_token6] = ACTIONS(1),
    [aux_sym_css_xyz_space_token1] = ACTIONS(1),
    [aux_sym_css_xyz_space_token2] = ACTIONS(1),
    [aux_sym_css_xyz_space_token3] = ACTIONS(1),
    [sym_css_hex_color_6_digits] = ACTIONS(1),
    [sym_css_hex_color_8_digits] = ACTIONS(1),
    [sym_css_hex_color_3_digits] = ACTIONS(1),
    [sym_css_hex_color_4_digits] = ACTIONS(1),
    [aux_sym_css_named_color_token1] = ACTIONS(1),
    [aux_sym_css_named_color_token2] = ACTIONS(1),
    [aux_sym_css_named_color_token3] = ACTIONS(1),
    [aux_sym_css_named_color_token4] = ACTIONS(1),
    [aux_sym_css_named_color_token5] = ACTIONS(1),
    [aux_sym_css_named_color_token6] = ACTIONS(1),
    [aux_sym_css_named_color_token7] = ACTIONS(1),
    [aux_sym_css_named_color_token8] = ACTIONS(1),
    [aux_sym_css_named_color_token9] = ACTIONS(1),
    [aux_sym_css_named_color_token10] = ACTIONS(1),
    [aux_sym_css_named_color_token11] = ACTIONS(1),
    [aux_sym_css_named_color_token12] = ACTIONS(1),
    [aux_sym_css_named_color_token13] = ACTIONS(1),
    [aux_sym_css_named_color_token14] = ACTIONS(1),
    [aux_sym_css_named_color_token15] = ACTIONS(1),
    [aux_sym_css_named_color_token16] = ACTIONS(1),
    [aux_sym_css_named_color_token17] = ACTIONS(1),
    [aux_sym_css_named_color_token18] = ACTIONS(1),
    [aux_sym_css_named_color_token19] = ACTIONS(1),
    [aux_sym_css_named_color_token20] = ACTIONS(1),
    [aux_sym_css_named_color_token21] = ACTIONS(1),
    [aux_sym_css_named_color_token22] = ACTIONS(1),
    [aux_sym_css_named_color_token23] = ACTIONS(1),
    [aux_sym_css_named_color_token24] = ACTIONS(1),
    [aux_sym_css_named_color_token25] = ACTIONS(1),
    [aux_sym_css_named_color_token26] = ACTIONS(1),
    [aux_sym_css_named_color_token27] = ACTIONS(1),
    [aux_sym_css_named_color_token28] = ACTIONS(1),
    [aux_sym_css_named_color_token29] = ACTIONS(1),
    [aux_sym_css_named_color_token30] = ACTIONS(1),
    [aux_sym_css_named_color_token31] = ACTIONS(1),
    [aux_sym_css_named_color_token32] = ACTIONS(1),
    [aux_sym_css_named_color_token33] = ACTIONS(1),
    [aux_sym_css_named_color_token34] = ACTIONS(1),
    [aux_sym_css_named_color_token35] = ACTIONS(1),
    [aux_sym_css_named_color_token36] = ACTIONS(1),
    [aux_sym_css_named_color_token37] = ACTIONS(1),
    [aux_sym_css_named_color_token38] = ACTIONS(1),
    [aux_sym_css_named_color_token39] = ACTIONS(1),
    [aux_sym_css_named_color_token40] = ACTIONS(1),
    [aux_sym_css_named_color_token41] = ACTIONS(1),
    [aux_sym_css_named_color_token42] = ACTIONS(1),
    [aux_sym_css_named_color_token43] = ACTIONS(1),
    [aux_sym_css_named_color_token44] = ACTIONS(1),
    [aux_sym_css_named_color_token45] = ACTIONS(1),
    [aux_sym_css_named_color_token46] = ACTIONS(1),
    [aux_sym_css_named_color_token47] = ACTIONS(1),
    [aux_sym_css_named_color_token48] = ACTIONS(1),
    [aux_sym_css_named_color_token49] = ACTIONS(1),
    [aux_sym_css_named_color_token50] = ACTIONS(1),
    [aux_sym_css_named_color_token51] = ACTIONS(1),
    [aux_sym_css_named_color_token52] = ACTIONS(1),
    [aux_sym_css_named_color_token53] = ACTIONS(1),
    [aux_sym_css_named_color_token54] = ACTIONS(1),
    [aux_sym_css_named_color_token55] = ACTIONS(1),
    [aux_sym_css_named_color_token56] = ACTIONS(1),
    [aux_sym_css_named_color_token57] = ACTIONS(1),
    [aux_sym_css_named_color_token58] = ACTIONS(1),
    [aux_sym_css_named_color_token59] = ACTIONS(1),
    [aux_sym_css_named_color_token60] = ACTIONS(1),
    [aux_sym_css_named_color_token61] = ACTIONS(1),
    [aux_sym_css_named_color_token62] = ACTIONS(1),
    [aux_sym_css_named_color_token63] = ACTIONS(1),
    [aux_sym_css_named_color_token64] = ACTIONS(1),
    [aux_sym_css_named_color_token65] = ACTIONS(1),
    [aux_sym_css_named_color_token66] = ACTIONS(1),
    [aux_sym_css_named_color_token67] = ACTIONS(1),
    [aux_sym_css_named_color_token68] = ACTIONS(1),
    [aux_sym_css_named_color_token69] = ACTIONS(1),
    [aux_sym_css_named_color_token70] = ACTIONS(1),
    [aux_sym_css_named_color_token71] = ACTIONS(1),
    [aux_sym_css_named_color_token72] = ACTIONS(1),
    [aux_sym_css_named_color_token73] = ACTIONS(1),
    [aux_sym_css_named_color_token74] = ACTIONS(1),
    [aux_sym_css_named_color_token75] = ACTIONS(1),
    [aux_sym_css_named_color_token76] = ACTIONS(1),
    [aux_sym_css_named_color_token77] = ACTIONS(1),
    [aux_sym_css_named_color_token78] = ACTIONS(1),
    [aux_sym_css_named_color_token79] = ACTIONS(1),
    [aux_sym_css_named_color_token80] = ACTIONS(1),
    [aux_sym_css_named_color_token81] = ACTIONS(1),
    [aux_sym_css_named_color_token82] = ACTIONS(1),
    [aux_sym_css_named_color_token83] = ACTIONS(1),
    [aux_sym_css_named_color_token84] = ACTIONS(1),
    [aux_sym_css_named_color_token85] = ACTIONS(1),
    [aux_sym_css_named_color_token86] = ACTIONS(1),
    [aux_sym_css_named_color_token87] = ACTIONS(1),
    [aux_sym_css_named_color_token88] = ACTIONS(1),
    [aux_sym_css_named_color_token89] = ACTIONS(1),
    [aux_sym_css_named_color_token90] = ACTIONS(1),
    [aux_sym_css_named_color_token91] = ACTIONS(1),
    [aux_sym_css_named_color_token92] = ACTIONS(1),
    [aux_sym_css_named_color_token93] = ACTIONS(1),
    [aux_sym_css_named_color_token94] = ACTIONS(1),
    [aux_sym_css_named_color_token95] = ACTIONS(1),
    [aux_sym_css_named_color_token96] = ACTIONS(1),
    [aux_sym_css_named_color_token97] = ACTIONS(1),
    [aux_sym_css_named_color_token98] = ACTIONS(1),
    [aux_sym_css_named_color_token99] = ACTIONS(1),
    [aux_sym_css_named_color_token100] = ACTIONS(1),
    [aux_sym_css_named_color_token101] = ACTIONS(1),
    [aux_sym_css_named_color_token102] = ACTIONS(1),
    [aux_sym_css_named_color_token103] = ACTIONS(1),
    [aux_sym_css_named_color_token104] = ACTIONS(1),
    [aux_sym_css_named_color_token105] = ACTIONS(1),
    [aux_sym_css_named_color_token106] = ACTIONS(1),
    [aux_sym_css_named_color_token107] = ACTIONS(1),
    [aux_sym_css_named_color_token108] = ACTIONS(1),
    [aux_sym_css_named_color_token109] = ACTIONS(1),
    [aux_sym_css_named_color_token110] = ACTIONS(1),
    [aux_sym_css_named_color_token111] = ACTIONS(1),
    [aux_sym_css_named_color_token112] = ACTIONS(1),
    [aux_sym_css_named_color_token113] = ACTIONS(1),
    [aux_sym_css_named_color_token114] = ACTIONS(1),
    [aux_sym_css_named_color_token115] = ACTIONS(1),
    [aux_sym_css_named_color_token116] = ACTIONS(1),
    [aux_sym_css_named_color_token117] = ACTIONS(1),
    [aux_sym_css_named_color_token118] = ACTIONS(1),
    [aux_sym_css_named_color_token119] = ACTIONS(1),
    [aux_sym_css_named_color_token120] = ACTIONS(1),
    [aux_sym_css_named_color_token121] = ACTIONS(1),
    [aux_sym_css_named_color_token122] = ACTIONS(1),
    [aux_sym_css_named_color_token123] = ACTIONS(1),
    [aux_sym_css_named_color_token124] = ACTIONS(1),
    [aux_sym_css_named_color_token125] = ACTIONS(1),
    [aux_sym_css_named_color_token126] = ACTIONS(1),
    [aux_sym_css_named_color_token127] = ACTIONS(1),
    [aux_sym_css_named_color_token128] = ACTIONS(1),
    [aux_sym_css_named_color_token129] = ACTIONS(1),
    [aux_sym_css_named_color_token130] = ACTIONS(1),
    [aux_sym_css_named_color_token131] = ACTIONS(1),
    [aux_sym_css_named_color_token132] = ACTIONS(1),
    [aux_sym_css_named_color_token133] = ACTIONS(1),
    [aux_sym_css_named_color_token134] = ACTIONS(1),
    [aux_sym_css_named_color_token135] = ACTIONS(1),
    [aux_sym_css_named_color_token136] = ACTIONS(1),
    [aux_sym_css_named_color_token137] = ACTIONS(1),
    [aux_sym_css_named_color_token138] = ACTIONS(1),
    [aux_sym_css_named_color_token139] = ACTIONS(1),
    [aux_sym_css_named_color_token140] = ACTIONS(1),
    [aux_sym_css_named_color_token141] = ACTIONS(1),
    [aux_sym_css_named_color_token142] = ACTIONS(1),
    [aux_sym_css_named_color_token143] = ACTIONS(1),
    [aux_sym_css_named_color_token144] = ACTIONS(1),
    [aux_sym_css_named_color_token145] = ACTIONS(1),
    [aux_sym_css_named_color_token146] = ACTIONS(1),
    [aux_sym_css_named_color_token147] = ACTIONS(1),
    [aux_sym_css_named_color_token148] = ACTIONS(1),
    [sym_css_keyword_transparent] = ACTIONS(1),
    [sym_css_keyword_none] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(148),
    [sym_css_function_rgb] = STATE(2),
    [sym_css_function_rgba] = STATE(2),
    [sym__css_function_rgb_legacy] = STATE(10),
    [sym__css_function_rgba_legacy] = STATE(11),
    [sym__css_function_rgb_modern] = STATE(13),
    [sym__css_function_rgba_modern] = STATE(5),
    [sym_css_function_hsl] = STATE(2),
    [sym__css_function_hsl_legacy] = STATE(6),
    [sym__css_function_hsl_modern] = STATE(4),
    [sym_css_function_hsla] = STATE(2),
    [sym__css_function_hsla_legacy] = STATE(8),
    [sym__css_function_hsla_modern] = STATE(9),
    [sym_css_function_hwb] = STATE(2),
    [sym_css_function_lab] = STATE(2),
    [sym_css_function_oklab] = STATE(2),
    [sym_css_function_lch] = STATE(2),
    [sym_css_function_oklch] = STATE(2),
    [sym_css_function_color] = STATE(2),
    [sym_css_hex_color] = STATE(2),
    [sym_css_named_color] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(5),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(7),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(9),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(11),
    [aux_sym_css_function_hwb_token1] = ACTIONS(13),
    [aux_sym_css_function_lab_token1] = ACTIONS(15),
    [aux_sym_css_function_oklab_token1] = ACTIONS(17),
    [aux_sym_css_function_lch_token1] = ACTIONS(19),
    [aux_sym_css_function_oklch_token1] = ACTIONS(21),
    [aux_sym_css_function_color_token1] = ACTIONS(23),
    [sym_css_hex_color_6_digits] = ACTIONS(25),
    [sym_css_hex_color_8_digits] = ACTIONS(27),
    [sym_css_hex_color_3_digits] = ACTIONS(25),
    [sym_css_hex_color_4_digits] = ACTIONS(25),
    [aux_sym_css_named_color_token1] = ACTIONS(29),
    [aux_sym_css_named_color_token2] = ACTIONS(29),
    [aux_sym_css_named_color_token3] = ACTIONS(31),
    [aux_sym_css_named_color_token4] = ACTIONS(29),
    [aux_sym_css_named_color_token5] = ACTIONS(29),
    [aux_sym_css_named_color_token6] = ACTIONS(29),
    [aux_sym_css_named_color_token7] = ACTIONS(29),
    [aux_sym_css_named_color_token8] = ACTIONS(29),
    [aux_sym_css_named_color_token9] = ACTIONS(29),
    [aux_sym_css_named_color_token10] = ACTIONS(31),
    [aux_sym_css_named_color_token11] = ACTIONS(29),
    [aux_sym_css_named_color_token12] = ACTIONS(29),
    [aux_sym_css_named_color_token13] = ACTIONS(29),
    [aux_sym_css_named_color_token14] = ACTIONS(29),
    [aux_sym_css_named_color_token15] = ACTIONS(29),
    [aux_sym_css_named_color_token16] = ACTIONS(29),
    [aux_sym_css_named_color_token17] = ACTIONS(29),
    [aux_sym_css_named_color_token18] = ACTIONS(29),
    [aux_sym_css_named_color_token19] = ACTIONS(29),
    [aux_sym_css_named_color_token20] = ACTIONS(29),
    [aux_sym_css_named_color_token21] = ACTIONS(29),
    [aux_sym_css_named_color_token22] = ACTIONS(29),
    [aux_sym_css_named_color_token23] = ACTIONS(29),
    [aux_sym_css_named_color_token24] = ACTIONS(29),
    [aux_sym_css_named_color_token25] = ACTIONS(29),
    [aux_sym_css_named_color_token26] = ACTIONS(29),
    [aux_sym_css_named_color_token27] = ACTIONS(29),
    [aux_sym_css_named_color_token28] = ACTIONS(29),
    [aux_sym_css_named_color_token29] = ACTIONS(29),
    [aux_sym_css_named_color_token30] = ACTIONS(29),
    [aux_sym_css_named_color_token31] = ACTIONS(29),
    [aux_sym_css_named_color_token32] = ACTIONS(29),
    [aux_sym_css_named_color_token33] = ACTIONS(29),
    [aux_sym_css_named_color_token34] = ACTIONS(29),
    [aux_sym_css_named_color_token35] = ACTIONS(29),
    [aux_sym_css_named_color_token36] = ACTIONS(29),
    [aux_sym_css_named_color_token37] = ACTIONS(29),
    [aux_sym_css_named_color_token38] = ACTIONS(29),
    [aux_sym_css_named_color_token39] = ACTIONS(29),
    [aux_sym_css_named_color_token40] = ACTIONS(29),
    [aux_sym_css_named_color_token41] = ACTIONS(29),
    [aux_sym_css_named_color_token42] = ACTIONS(29),
    [aux_sym_css_named_color_token43] = ACTIONS(29),
    [aux_sym_css_named_color_token44] = ACTIONS(29),
    [aux_sym_css_named_color_token45] = ACTIONS(29),
    [aux_sym_css_named_color_token46] = ACTIONS(29),
    [aux_sym_css_named_color_token47] = ACTIONS(29),
    [aux_sym_css_named_color_token48] = ACTIONS(29),
    [aux_sym_css_named_color_token49] = ACTIONS(29),
    [aux_sym_css_named_color_token50] = ACTIONS(29),
    [aux_sym_css_named_color_token51] = ACTIONS(29),
    [aux_sym_css_named_color_token52] = ACTIONS(31),
    [aux_sym_css_named_color_token53] = ACTIONS(29),
    [aux_sym_css_named_color_token54] = ACTIONS(29),
    [aux_sym_css_named_color_token55] = ACTIONS(31),
    [aux_sym_css_named_color_token56] = ACTIONS(29),
    [aux_sym_css_named_color_token57] = ACTIONS(29),
    [aux_sym_css_named_color_token58] = ACTIONS(29),
    [aux_sym_css_named_color_token59] = ACTIONS(29),
    [aux_sym_css_named_color_token60] = ACTIONS(29),
    [aux_sym_css_named_color_token61] = ACTIONS(29),
    [aux_sym_css_named_color_token62] = ACTIONS(29),
    [aux_sym_css_named_color_token63] = ACTIONS(29),
    [aux_sym_css_named_color_token64] = ACTIONS(31),
    [aux_sym_css_named_color_token65] = ACTIONS(29),
    [aux_sym_css_named_color_token66] = ACTIONS(29),
    [aux_sym_css_named_color_token67] = ACTIONS(29),
    [aux_sym_css_named_color_token68] = ACTIONS(29),
    [aux_sym_css_named_color_token69] = ACTIONS(29),
    [aux_sym_css_named_color_token70] = ACTIONS(29),
    [aux_sym_css_named_color_token71] = ACTIONS(29),
    [aux_sym_css_named_color_token72] = ACTIONS(29),
    [aux_sym_css_named_color_token73] = ACTIONS(29),
    [aux_sym_css_named_color_token74] = ACTIONS(29),
    [aux_sym_css_named_color_token75] = ACTIONS(29),
    [aux_sym_css_named_color_token76] = ACTIONS(29),
    [aux_sym_css_named_color_token77] = ACTIONS(29),
    [aux_sym_css_named_color_token78] = ACTIONS(29),
    [aux_sym_css_named_color_token79] = ACTIONS(29),
    [aux_sym_css_named_color_token80] = ACTIONS(29),
    [aux_sym_css_named_color_token81] = ACTIONS(29),
    [aux_sym_css_named_color_token82] = ACTIONS(29),
    [aux_sym_css_named_color_token83] = ACTIONS(31),
    [aux_sym_css_named_color_token84] = ACTIONS(29),
    [aux_sym_css_named_color_token85] = ACTIONS(29),
    [aux_sym_css_named_color_token86] = ACTIONS(29),
    [aux_sym_css_named_color_token87] = ACTIONS(29),
    [aux_sym_css_named_color_token88] = ACTIONS(29),
    [aux_sym_css_named_color_token89] = ACTIONS(29),
    [aux_sym_css_named_color_token90] = ACTIONS(29),
    [aux_sym_css_named_color_token91] = ACTIONS(29),
    [aux_sym_css_named_color_token92] = ACTIONS(29),
    [aux_sym_css_named_color_token93] = ACTIONS(29),
    [aux_sym_css_named_color_token94] = ACTIONS(29),
    [aux_sym_css_named_color_token95] = ACTIONS(29),
    [aux_sym_css_named_color_token96] = ACTIONS(29),
    [aux_sym_css_named_color_token97] = ACTIONS(29),
    [aux_sym_css_named_color_token98] = ACTIONS(29),
    [aux_sym_css_named_color_token99] = ACTIONS(29),
    [aux_sym_css_named_color_token100] = ACTIONS(29),
    [aux_sym_css_named_color_token101] = ACTIONS(29),
    [aux_sym_css_named_color_token102] = ACTIONS(29),
    [aux_sym_css_named_color_token103] = ACTIONS(29),
    [aux_sym_css_named_color_token104] = ACTIONS(31),
    [aux_sym_css_named_color_token105] = ACTIONS(29),
    [aux_sym_css_named_color_token106] = ACTIONS(31),
    [aux_sym_css_named_color_token107] = ACTIONS(29),
    [aux_sym_css_named_color_token108] = ACTIONS(29),
    [aux_sym_css_named_color_token109] = ACTIONS(29),
    [aux_sym_css_named_color_token110] = ACTIONS(29),
    [aux_sym_css_named_color_token111] = ACTIONS(29),
    [aux_sym_css_named_color_token112] = ACTIONS(29),
    [aux_sym_css_named_color_token113] = ACTIONS(29),
    [aux_sym_css_named_color_token114] = ACTIONS(29),
    [aux_sym_css_named_color_token115] = ACTIONS(29),
    [aux_sym_css_named_color_token116] = ACTIONS(29),
    [aux_sym_css_named_color_token117] = ACTIONS(29),
    [aux_sym_css_named_color_token118] = ACTIONS(29),
    [aux_sym_css_named_color_token119] = ACTIONS(29),
    [aux_sym_css_named_color_token120] = ACTIONS(29),
    [aux_sym_css_named_color_token121] = ACTIONS(29),
    [aux_sym_css_named_color_token122] = ACTIONS(29),
    [aux_sym_css_named_color_token123] = ACTIONS(29),
    [aux_sym_css_named_color_token124] = ACTIONS(29),
    [aux_sym_css_named_color_token125] = ACTIONS(29),
    [aux_sym_css_named_color_token126] = ACTIONS(29),
    [aux_sym_css_named_color_token127] = ACTIONS(29),
    [aux_sym_css_named_color_token128] = ACTIONS(29),
    [aux_sym_css_named_color_token129] = ACTIONS(29),
    [aux_sym_css_named_color_token130] = ACTIONS(29),
    [aux_sym_css_named_color_token131] = ACTIONS(29),
    [aux_sym_css_named_color_token132] = ACTIONS(29),
    [aux_sym_css_named_color_token133] = ACTIONS(29),
    [aux_sym_css_named_color_token134] = ACTIONS(29),
    [aux_sym_css_named_color_token135] = ACTIONS(29),
    [aux_sym_css_named_color_token136] = ACTIONS(29),
    [aux_sym_css_named_color_token137] = ACTIONS(29),
    [aux_sym_css_named_color_token138] = ACTIONS(29),
    [aux_sym_css_named_color_token139] = ACTIONS(29),
    [aux_sym_css_named_color_token140] = ACTIONS(29),
    [aux_sym_css_named_color_token141] = ACTIONS(29),
    [aux_sym_css_named_color_token142] = ACTIONS(29),
    [aux_sym_css_named_color_token143] = ACTIONS(29),
    [aux_sym_css_named_color_token144] = ACTIONS(29),
    [aux_sym_css_named_color_token145] = ACTIONS(31),
    [aux_sym_css_named_color_token146] = ACTIONS(29),
    [aux_sym_css_named_color_token147] = ACTIONS(31),
    [aux_sym_css_named_color_token148] = ACTIONS(29),
    [sym_css_keyword_transparent] = ACTIONS(33),
  },
  [2] = {
    [sym_css_function_rgb] = STATE(3),
    [sym_css_function_rgba] = STATE(3),
    [sym__css_function_rgb_legacy] = STATE(10),
    [sym__css_function_rgba_legacy] = STATE(11),
    [sym__css_function_rgb_modern] = STATE(13),
    [sym__css_function_rgba_modern] = STATE(5),
    [sym_css_function_hsl] = STATE(3),
    [sym__css_function_hsl_legacy] = STATE(6),
    [sym__css_function_hsl_modern] = STATE(4),
    [sym_css_function_hsla] = STATE(3),
    [sym__css_function_hsla_legacy] = STATE(8),
    [sym__css_function_hsla_modern] = STATE(9),
    [sym_css_function_hwb] = STATE(3),
    [sym_css_function_lab] = STATE(3),
    [sym_css_function_oklab] = STATE(3),
    [sym_css_function_lch] = STATE(3),
    [sym_css_function_oklch] = STATE(3),
    [sym_css_function_color] = STATE(3),
    [sym_css_hex_color] = STATE(3),
    [sym_css_named_color] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(5),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(7),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(9),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(11),
    [aux_sym_css_function_hwb_token1] = ACTIONS(13),
    [aux_sym_css_function_lab_token1] = ACTIONS(15),
    [aux_sym_css_function_oklab_token1] = ACTIONS(17),
    [aux_sym_css_function_lch_token1] = ACTIONS(19),
    [aux_sym_css_function_oklch_token1] = ACTIONS(21),
    [aux_sym_css_function_color_token1] = ACTIONS(23),
    [sym_css_hex_color_6_digits] = ACTIONS(25),
    [sym_css_hex_color_8_digits] = ACTIONS(27),
    [sym_css_hex_color_3_digits] = ACTIONS(25),
    [sym_css_hex_color_4_digits] = ACTIONS(25),
    [aux_sym_css_named_color_token1] = ACTIONS(29),
    [aux_sym_css_named_color_token2] = ACTIONS(29),
    [aux_sym_css_named_color_token3] = ACTIONS(31),
    [aux_sym_css_named_color_token4] = ACTIONS(29),
    [aux_sym_css_named_color_token5] = ACTIONS(29),
    [aux_sym_css_named_color_token6] = ACTIONS(29),
    [aux_sym_css_named_color_token7] = ACTIONS(29),
    [aux_sym_css_named_color_token8] = ACTIONS(29),
    [aux_sym_css_named_color_token9] = ACTIONS(29),
    [aux_sym_css_named_color_token10] = ACTIONS(31),
    [aux_sym_css_named_color_token11] = ACTIONS(29),
    [aux_sym_css_named_color_token12] = ACTIONS(29),
    [aux_sym_css_named_color_token13] = ACTIONS(29),
    [aux_sym_css_named_color_token14] = ACTIONS(29),
    [aux_sym_css_named_color_token15] = ACTIONS(29),
    [aux_sym_css_named_color_token16] = ACTIONS(29),
    [aux_sym_css_named_color_token17] = ACTIONS(29),
    [aux_sym_css_named_color_token18] = ACTIONS(29),
    [aux_sym_css_named_color_token19] = ACTIONS(29),
    [aux_sym_css_named_color_token20] = ACTIONS(29),
    [aux_sym_css_named_color_token21] = ACTIONS(29),
    [aux_sym_css_named_color_token22] = ACTIONS(29),
    [aux_sym_css_named_color_token23] = ACTIONS(29),
    [aux_sym_css_named_color_token24] = ACTIONS(29),
    [aux_sym_css_named_color_token25] = ACTIONS(29),
    [aux_sym_css_named_color_token26] = ACTIONS(29),
    [aux_sym_css_named_color_token27] = ACTIONS(29),
    [aux_sym_css_named_color_token28] = ACTIONS(29),
    [aux_sym_css_named_color_token29] = ACTIONS(29),
    [aux_sym_css_named_color_token30] = ACTIONS(29),
    [aux_sym_css_named_color_token31] = ACTIONS(29),
    [aux_sym_css_named_color_token32] = ACTIONS(29),
    [aux_sym_css_named_color_token33] = ACTIONS(29),
    [aux_sym_css_named_color_token34] = ACTIONS(29),
    [aux_sym_css_named_color_token35] = ACTIONS(29),
    [aux_sym_css_named_color_token36] = ACTIONS(29),
    [aux_sym_css_named_color_token37] = ACTIONS(29),
    [aux_sym_css_named_color_token38] = ACTIONS(29),
    [aux_sym_css_named_color_token39] = ACTIONS(29),
    [aux_sym_css_named_color_token40] = ACTIONS(29),
    [aux_sym_css_named_color_token41] = ACTIONS(29),
    [aux_sym_css_named_color_token42] = ACTIONS(29),
    [aux_sym_css_named_color_token43] = ACTIONS(29),
    [aux_sym_css_named_color_token44] = ACTIONS(29),
    [aux_sym_css_named_color_token45] = ACTIONS(29),
    [aux_sym_css_named_color_token46] = ACTIONS(29),
    [aux_sym_css_named_color_token47] = ACTIONS(29),
    [aux_sym_css_named_color_token48] = ACTIONS(29),
    [aux_sym_css_named_color_token49] = ACTIONS(29),
    [aux_sym_css_named_color_token50] = ACTIONS(29),
    [aux_sym_css_named_color_token51] = ACTIONS(29),
    [aux_sym_css_named_color_token52] = ACTIONS(31),
    [aux_sym_css_named_color_token53] = ACTIONS(29),
    [aux_sym_css_named_color_token54] = ACTIONS(29),
    [aux_sym_css_named_color_token55] = ACTIONS(31),
    [aux_sym_css_named_color_token56] = ACTIONS(29),
    [aux_sym_css_named_color_token57] = ACTIONS(29),
    [aux_sym_css_named_color_token58] = ACTIONS(29),
    [aux_sym_css_named_color_token59] = ACTIONS(29),
    [aux_sym_css_named_color_token60] = ACTIONS(29),
    [aux_sym_css_named_color_token61] = ACTIONS(29),
    [aux_sym_css_named_color_token62] = ACTIONS(29),
    [aux_sym_css_named_color_token63] = ACTIONS(29),
    [aux_sym_css_named_color_token64] = ACTIONS(31),
    [aux_sym_css_named_color_token65] = ACTIONS(29),
    [aux_sym_css_named_color_token66] = ACTIONS(29),
    [aux_sym_css_named_color_token67] = ACTIONS(29),
    [aux_sym_css_named_color_token68] = ACTIONS(29),
    [aux_sym_css_named_color_token69] = ACTIONS(29),
    [aux_sym_css_named_color_token70] = ACTIONS(29),
    [aux_sym_css_named_color_token71] = ACTIONS(29),
    [aux_sym_css_named_color_token72] = ACTIONS(29),
    [aux_sym_css_named_color_token73] = ACTIONS(29),
    [aux_sym_css_named_color_token74] = ACTIONS(29),
    [aux_sym_css_named_color_token75] = ACTIONS(29),
    [aux_sym_css_named_color_token76] = ACTIONS(29),
    [aux_sym_css_named_color_token77] = ACTIONS(29),
    [aux_sym_css_named_color_token78] = ACTIONS(29),
    [aux_sym_css_named_color_token79] = ACTIONS(29),
    [aux_sym_css_named_color_token80] = ACTIONS(29),
    [aux_sym_css_named_color_token81] = ACTIONS(29),
    [aux_sym_css_named_color_token82] = ACTIONS(29),
    [aux_sym_css_named_color_token83] = ACTIONS(31),
    [aux_sym_css_named_color_token84] = ACTIONS(29),
    [aux_sym_css_named_color_token85] = ACTIONS(29),
    [aux_sym_css_named_color_token86] = ACTIONS(29),
    [aux_sym_css_named_color_token87] = ACTIONS(29),
    [aux_sym_css_named_color_token88] = ACTIONS(29),
    [aux_sym_css_named_color_token89] = ACTIONS(29),
    [aux_sym_css_named_color_token90] = ACTIONS(29),
    [aux_sym_css_named_color_token91] = ACTIONS(29),
    [aux_sym_css_named_color_token92] = ACTIONS(29),
    [aux_sym_css_named_color_token93] = ACTIONS(29),
    [aux_sym_css_named_color_token94] = ACTIONS(29),
    [aux_sym_css_named_color_token95] = ACTIONS(29),
    [aux_sym_css_named_color_token96] = ACTIONS(29),
    [aux_sym_css_named_color_token97] = ACTIONS(29),
    [aux_sym_css_named_color_token98] = ACTIONS(29),
    [aux_sym_css_named_color_token99] = ACTIONS(29),
    [aux_sym_css_named_color_token100] = ACTIONS(29),
    [aux_sym_css_named_color_token101] = ACTIONS(29),
    [aux_sym_css_named_color_token102] = ACTIONS(29),
    [aux_sym_css_named_color_token103] = ACTIONS(29),
    [aux_sym_css_named_color_token104] = ACTIONS(31),
    [aux_sym_css_named_color_token105] = ACTIONS(29),
    [aux_sym_css_named_color_token106] = ACTIONS(31),
    [aux_sym_css_named_color_token107] = ACTIONS(29),
    [aux_sym_css_named_color_token108] = ACTIONS(29),
    [aux_sym_css_named_color_token109] = ACTIONS(29),
    [aux_sym_css_named_color_token110] = ACTIONS(29),
    [aux_sym_css_named_color_token111] = ACTIONS(29),
    [aux_sym_css_named_color_token112] = ACTIONS(29),
    [aux_sym_css_named_color_token113] = ACTIONS(29),
    [aux_sym_css_named_color_token114] = ACTIONS(29),
    [aux_sym_css_named_color_token115] = ACTIONS(29),
    [aux_sym_css_named_color_token116] = ACTIONS(29),
    [aux_sym_css_named_color_token117] = ACTIONS(29),
    [aux_sym_css_named_color_token118] = ACTIONS(29),
    [aux_sym_css_named_color_token119] = ACTIONS(29),
    [aux_sym_css_named_color_token120] = ACTIONS(29),
    [aux_sym_css_named_color_token121] = ACTIONS(29),
    [aux_sym_css_named_color_token122] = ACTIONS(29),
    [aux_sym_css_named_color_token123] = ACTIONS(29),
    [aux_sym_css_named_color_token124] = ACTIONS(29),
    [aux_sym_css_named_color_token125] = ACTIONS(29),
    [aux_sym_css_named_color_token126] = ACTIONS(29),
    [aux_sym_css_named_color_token127] = ACTIONS(29),
    [aux_sym_css_named_color_token128] = ACTIONS(29),
    [aux_sym_css_named_color_token129] = ACTIONS(29),
    [aux_sym_css_named_color_token130] = ACTIONS(29),
    [aux_sym_css_named_color_token131] = ACTIONS(29),
    [aux_sym_css_named_color_token132] = ACTIONS(29),
    [aux_sym_css_named_color_token133] = ACTIONS(29),
    [aux_sym_css_named_color_token134] = ACTIONS(29),
    [aux_sym_css_named_color_token135] = ACTIONS(29),
    [aux_sym_css_named_color_token136] = ACTIONS(29),
    [aux_sym_css_named_color_token137] = ACTIONS(29),
    [aux_sym_css_named_color_token138] = ACTIONS(29),
    [aux_sym_css_named_color_token139] = ACTIONS(29),
    [aux_sym_css_named_color_token140] = ACTIONS(29),
    [aux_sym_css_named_color_token141] = ACTIONS(29),
    [aux_sym_css_named_color_token142] = ACTIONS(29),
    [aux_sym_css_named_color_token143] = ACTIONS(29),
    [aux_sym_css_named_color_token144] = ACTIONS(29),
    [aux_sym_css_named_color_token145] = ACTIONS(31),
    [aux_sym_css_named_color_token146] = ACTIONS(29),
    [aux_sym_css_named_color_token147] = ACTIONS(31),
    [aux_sym_css_named_color_token148] = ACTIONS(29),
    [sym_css_keyword_transparent] = ACTIONS(37),
  },
  [3] = {
    [sym_css_function_rgb] = STATE(3),
    [sym_css_function_rgba] = STATE(3),
    [sym__css_function_rgb_legacy] = STATE(10),
    [sym__css_function_rgba_legacy] = STATE(11),
    [sym__css_function_rgb_modern] = STATE(13),
    [sym__css_function_rgba_modern] = STATE(5),
    [sym_css_function_hsl] = STATE(3),
    [sym__css_function_hsl_legacy] = STATE(6),
    [sym__css_function_hsl_modern] = STATE(4),
    [sym_css_function_hsla] = STATE(3),
    [sym__css_function_hsla_legacy] = STATE(8),
    [sym__css_function_hsla_modern] = STATE(9),
    [sym_css_function_hwb] = STATE(3),
    [sym_css_function_lab] = STATE(3),
    [sym_css_function_oklab] = STATE(3),
    [sym_css_function_lch] = STATE(3),
    [sym_css_function_oklch] = STATE(3),
    [sym_css_function_color] = STATE(3),
    [sym_css_hex_color] = STATE(3),
    [sym_css_named_color] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(41),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(44),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(47),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(50),
    [aux_sym_css_function_hwb_token1] = ACTIONS(53),
    [aux_sym_css_function_lab_token1] = ACTIONS(56),
    [aux_sym_css_function_oklab_token1] = ACTIONS(59),
    [aux_sym_css_function_lch_token1] = ACTIONS(62),
    [aux_sym_css_function_oklch_token1] = ACTIONS(65),
    [aux_sym_css_function_color_token1] = ACTIONS(68),
    [sym_css_hex_color_6_digits] = ACTIONS(71),
    [sym_css_hex_color_8_digits] = ACTIONS(74),
    [sym_css_hex_color_3_digits] = ACTIONS(71),
    [sym_css_hex_color_4_digits] = ACTIONS(71),
    [aux_sym_css_named_color_token1] = ACTIONS(77),
    [aux_sym_css_named_color_token2] = ACTIONS(77),
    [aux_sym_css_named_color_token3] = ACTIONS(80),
    [aux_sym_css_named_color_token4] = ACTIONS(77),
    [aux_sym_css_named_color_token5] = ACTIONS(77),
    [aux_sym_css_named_color_token6] = ACTIONS(77),
    [aux_sym_css_named_color_token7] = ACTIONS(77),
    [aux_sym_css_named_color_token8] = ACTIONS(77),
    [aux_sym_css_named_color_token9] = ACTIONS(77),
    [aux_sym_css_named_color_token10] = ACTIONS(80),
    [aux_sym_css_named_color_token11] = ACTIONS(77),
    [aux_sym_css_named_color_token12] = ACTIONS(77),
    [aux_sym_css_named_color_token13] = ACTIONS(77),
    [aux_sym_css_named_color_token14] = ACTIONS(77),
    [aux_sym_css_named_color_token15] = ACTIONS(77),
    [aux_sym_css_named_color_token16] = ACTIONS(77),
    [aux_sym_css_named_color_token17] = ACTIONS(77),
    [aux_sym_css_named_color_token18] = ACTIONS(77),
    [aux_sym_css_named_color_token19] = ACTIONS(77),
    [aux_sym_css_named_color_token20] = ACTIONS(77),
    [aux_sym_css_named_color_token21] = ACTIONS(77),
    [aux_sym_css_named_color_token22] = ACTIONS(77),
    [aux_sym_css_named_color_token23] = ACTIONS(77),
    [aux_sym_css_named_color_token24] = ACTIONS(77),
    [aux_sym_css_named_color_token25] = ACTIONS(77),
    [aux_sym_css_named_color_token26] = ACTIONS(77),
    [aux_sym_css_named_color_token27] = ACTIONS(77),
    [aux_sym_css_named_color_token28] = ACTIONS(77),
    [aux_sym_css_named_color_token29] = ACTIONS(77),
    [aux_sym_css_named_color_token30] = ACTIONS(77),
    [aux_sym_css_named_color_token31] = ACTIONS(77),
    [aux_sym_css_named_color_token32] = ACTIONS(77),
    [aux_sym_css_named_color_token33] = ACTIONS(77),
    [aux_sym_css_named_color_token34] = ACTIONS(77),
    [aux_sym_css_named_color_token35] = ACTIONS(77),
    [aux_sym_css_named_color_token36] = ACTIONS(77),
    [aux_sym_css_named_color_token37] = ACTIONS(77),
    [aux_sym_css_named_color_token38] = ACTIONS(77),
    [aux_sym_css_named_color_token39] = ACTIONS(77),
    [aux_sym_css_named_color_token40] = ACTIONS(77),
    [aux_sym_css_named_color_token41] = ACTIONS(77),
    [aux_sym_css_named_color_token42] = ACTIONS(77),
    [aux_sym_css_named_color_token43] = ACTIONS(77),
    [aux_sym_css_named_color_token44] = ACTIONS(77),
    [aux_sym_css_named_color_token45] = ACTIONS(77),
    [aux_sym_css_named_color_token46] = ACTIONS(77),
    [aux_sym_css_named_color_token47] = ACTIONS(77),
    [aux_sym_css_named_color_token48] = ACTIONS(77),
    [aux_sym_css_named_color_token49] = ACTIONS(77),
    [aux_sym_css_named_color_token50] = ACTIONS(77),
    [aux_sym_css_named_color_token51] = ACTIONS(77),
    [aux_sym_css_named_color_token52] = ACTIONS(80),
    [aux_sym_css_named_color_token53] = ACTIONS(77),
    [aux_sym_css_named_color_token54] = ACTIONS(77),
    [aux_sym_css_named_color_token55] = ACTIONS(80),
    [aux_sym_css_named_color_token56] = ACTIONS(77),
    [aux_sym_css_named_color_token57] = ACTIONS(77),
    [aux_sym_css_named_color_token58] = ACTIONS(77),
    [aux_sym_css_named_color_token59] = ACTIONS(77),
    [aux_sym_css_named_color_token60] = ACTIONS(77),
    [aux_sym_css_named_color_token61] = ACTIONS(77),
    [aux_sym_css_named_color_token62] = ACTIONS(77),
    [aux_sym_css_named_color_token63] = ACTIONS(77),
    [aux_sym_css_named_color_token64] = ACTIONS(80),
    [aux_sym_css_named_color_token65] = ACTIONS(77),
    [aux_sym_css_named_color_token66] = ACTIONS(77),
    [aux_sym_css_named_color_token67] = ACTIONS(77),
    [aux_sym_css_named_color_token68] = ACTIONS(77),
    [aux_sym_css_named_color_token69] = ACTIONS(77),
    [aux_sym_css_named_color_token70] = ACTIONS(77),
    [aux_sym_css_named_color_token71] = ACTIONS(77),
    [aux_sym_css_named_color_token72] = ACTIONS(77),
    [aux_sym_css_named_color_token73] = ACTIONS(77),
    [aux_sym_css_named_color_token74] = ACTIONS(77),
    [aux_sym_css_named_color_token75] = ACTIONS(77),
    [aux_sym_css_named_color_token76] = ACTIONS(77),
    [aux_sym_css_named_color_token77] = ACTIONS(77),
    [aux_sym_css_named_color_token78] = ACTIONS(77),
    [aux_sym_css_named_color_token79] = ACTIONS(77),
    [aux_sym_css_named_color_token80] = ACTIONS(77),
    [aux_sym_css_named_color_token81] = ACTIONS(77),
    [aux_sym_css_named_color_token82] = ACTIONS(77),
    [aux_sym_css_named_color_token83] = ACTIONS(80),
    [aux_sym_css_named_color_token84] = ACTIONS(77),
    [aux_sym_css_named_color_token85] = ACTIONS(77),
    [aux_sym_css_named_color_token86] = ACTIONS(77),
    [aux_sym_css_named_color_token87] = ACTIONS(77),
    [aux_sym_css_named_color_token88] = ACTIONS(77),
    [aux_sym_css_named_color_token89] = ACTIONS(77),
    [aux_sym_css_named_color_token90] = ACTIONS(77),
    [aux_sym_css_named_color_token91] = ACTIONS(77),
    [aux_sym_css_named_color_token92] = ACTIONS(77),
    [aux_sym_css_named_color_token93] = ACTIONS(77),
    [aux_sym_css_named_color_token94] = ACTIONS(77),
    [aux_sym_css_named_color_token95] = ACTIONS(77),
    [aux_sym_css_named_color_token96] = ACTIONS(77),
    [aux_sym_css_named_color_token97] = ACTIONS(77),
    [aux_sym_css_named_color_token98] = ACTIONS(77),
    [aux_sym_css_named_color_token99] = ACTIONS(77),
    [aux_sym_css_named_color_token100] = ACTIONS(77),
    [aux_sym_css_named_color_token101] = ACTIONS(77),
    [aux_sym_css_named_color_token102] = ACTIONS(77),
    [aux_sym_css_named_color_token103] = ACTIONS(77),
    [aux_sym_css_named_color_token104] = ACTIONS(80),
    [aux_sym_css_named_color_token105] = ACTIONS(77),
    [aux_sym_css_named_color_token106] = ACTIONS(80),
    [aux_sym_css_named_color_token107] = ACTIONS(77),
    [aux_sym_css_named_color_token108] = ACTIONS(77),
    [aux_sym_css_named_color_token109] = ACTIONS(77),
    [aux_sym_css_named_color_token110] = ACTIONS(77),
    [aux_sym_css_named_color_token111] = ACTIONS(77),
    [aux_sym_css_named_color_token112] = ACTIONS(77),
    [aux_sym_css_named_color_token113] = ACTIONS(77),
    [aux_sym_css_named_color_token114] = ACTIONS(77),
    [aux_sym_css_named_color_token115] = ACTIONS(77),
    [aux_sym_css_named_color_token116] = ACTIONS(77),
    [aux_sym_css_named_color_token117] = ACTIONS(77),
    [aux_sym_css_named_color_token118] = ACTIONS(77),
    [aux_sym_css_named_color_token119] = ACTIONS(77),
    [aux_sym_css_named_color_token120] = ACTIONS(77),
    [aux_sym_css_named_color_token121] = ACTIONS(77),
    [aux_sym_css_named_color_token122] = ACTIONS(77),
    [aux_sym_css_named_color_token123] = ACTIONS(77),
    [aux_sym_css_named_color_token124] = ACTIONS(77),
    [aux_sym_css_named_color_token125] = ACTIONS(77),
    [aux_sym_css_named_color_token126] = ACTIONS(77),
    [aux_sym_css_named_color_token127] = ACTIONS(77),
    [aux_sym_css_named_color_token128] = ACTIONS(77),
    [aux_sym_css_named_color_token129] = ACTIONS(77),
    [aux_sym_css_named_color_token130] = ACTIONS(77),
    [aux_sym_css_named_color_token131] = ACTIONS(77),
    [aux_sym_css_named_color_token132] = ACTIONS(77),
    [aux_sym_css_named_color_token133] = ACTIONS(77),
    [aux_sym_css_named_color_token134] = ACTIONS(77),
    [aux_sym_css_named_color_token135] = ACTIONS(77),
    [aux_sym_css_named_color_token136] = ACTIONS(77),
    [aux_sym_css_named_color_token137] = ACTIONS(77),
    [aux_sym_css_named_color_token138] = ACTIONS(77),
    [aux_sym_css_named_color_token139] = ACTIONS(77),
    [aux_sym_css_named_color_token140] = ACTIONS(77),
    [aux_sym_css_named_color_token141] = ACTIONS(77),
    [aux_sym_css_named_color_token142] = ACTIONS(77),
    [aux_sym_css_named_color_token143] = ACTIONS(77),
    [aux_sym_css_named_color_token144] = ACTIONS(77),
    [aux_sym_css_named_color_token145] = ACTIONS(80),
    [aux_sym_css_named_color_token146] = ACTIONS(77),
    [aux_sym_css_named_color_token147] = ACTIONS(80),
    [aux_sym_css_named_color_token148] = ACTIONS(77),
    [sym_css_keyword_transparent] = ACTIONS(83),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(88),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(86),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(88),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(86),
    [aux_sym_css_function_hwb_token1] = ACTIONS(86),
    [aux_sym_css_function_lab_token1] = ACTIONS(86),
    [aux_sym_css_function_oklab_token1] = ACTIONS(86),
    [aux_sym_css_function_lch_token1] = ACTIONS(86),
    [aux_sym_css_function_oklch_token1] = ACTIONS(86),
    [aux_sym_css_function_color_token1] = ACTIONS(86),
    [sym_css_hex_color_6_digits] = ACTIONS(88),
    [sym_css_hex_color_8_digits] = ACTIONS(86),
    [sym_css_hex_color_3_digits] = ACTIONS(88),
    [sym_css_hex_color_4_digits] = ACTIONS(88),
    [aux_sym_css_named_color_token1] = ACTIONS(86),
    [aux_sym_css_named_color_token2] = ACTIONS(86),
    [aux_sym_css_named_color_token3] = ACTIONS(88),
    [aux_sym_css_named_color_token4] = ACTIONS(86),
    [aux_sym_css_named_color_token5] = ACTIONS(86),
    [aux_sym_css_named_color_token6] = ACTIONS(86),
    [aux_sym_css_named_color_token7] = ACTIONS(86),
    [aux_sym_css_named_color_token8] = ACTIONS(86),
    [aux_sym_css_named_color_token9] = ACTIONS(86),
    [aux_sym_css_named_color_token10] = ACTIONS(88),
    [aux_sym_css_named_color_token11] = ACTIONS(86),
    [aux_sym_css_named_color_token12] = ACTIONS(86),
    [aux_sym_css_named_color_token13] = ACTIONS(86),
    [aux_sym_css_named_color_token14] = ACTIONS(86),
    [aux_sym_css_named_color_token15] = ACTIONS(86),
    [aux_sym_css_named_color_token16] = ACTIONS(86),
    [aux_sym_css_named_color_token17] = ACTIONS(86),
    [aux_sym_css_named_color_token18] = ACTIONS(86),
    [aux_sym_css_named_color_token19] = ACTIONS(86),
    [aux_sym_css_named_color_token20] = ACTIONS(86),
    [aux_sym_css_named_color_token21] = ACTIONS(86),
    [aux_sym_css_named_color_token22] = ACTIONS(86),
    [aux_sym_css_named_color_token23] = ACTIONS(86),
    [aux_sym_css_named_color_token24] = ACTIONS(86),
    [aux_sym_css_named_color_token25] = ACTIONS(86),
    [aux_sym_css_named_color_token26] = ACTIONS(86),
    [aux_sym_css_named_color_token27] = ACTIONS(86),
    [aux_sym_css_named_color_token28] = ACTIONS(86),
    [aux_sym_css_named_color_token29] = ACTIONS(86),
    [aux_sym_css_named_color_token30] = ACTIONS(86),
    [aux_sym_css_named_color_token31] = ACTIONS(86),
    [aux_sym_css_named_color_token32] = ACTIONS(86),
    [aux_sym_css_named_color_token33] = ACTIONS(86),
    [aux_sym_css_named_color_token34] = ACTIONS(86),
    [aux_sym_css_named_color_token35] = ACTIONS(86),
    [aux_sym_css_named_color_token36] = ACTIONS(86),
    [aux_sym_css_named_color_token37] = ACTIONS(86),
    [aux_sym_css_named_color_token38] = ACTIONS(86),
    [aux_sym_css_named_color_token39] = ACTIONS(86),
    [aux_sym_css_named_color_token40] = ACTIONS(86),
    [aux_sym_css_named_color_token41] = ACTIONS(86),
    [aux_sym_css_named_color_token42] = ACTIONS(86),
    [aux_sym_css_named_color_token43] = ACTIONS(86),
    [aux_sym_css_named_color_token44] = ACTIONS(86),
    [aux_sym_css_named_color_token45] = ACTIONS(86),
    [aux_sym_css_named_color_token46] = ACTIONS(86),
    [aux_sym_css_named_color_token47] = ACTIONS(86),
    [aux_sym_css_named_color_token48] = ACTIONS(86),
    [aux_sym_css_named_color_token49] = ACTIONS(86),
    [aux_sym_css_named_color_token50] = ACTIONS(86),
    [aux_sym_css_named_color_token51] = ACTIONS(86),
    [aux_sym_css_named_color_token52] = ACTIONS(88),
    [aux_sym_css_named_color_token53] = ACTIONS(86),
    [aux_sym_css_named_color_token54] = ACTIONS(86),
    [aux_sym_css_named_color_token55] = ACTIONS(88),
    [aux_sym_css_named_color_token56] = ACTIONS(86),
    [aux_sym_css_named_color_token57] = ACTIONS(86),
    [aux_sym_css_named_color_token58] = ACTIONS(86),
    [aux_sym_css_named_color_token59] = ACTIONS(86),
    [aux_sym_css_named_color_token60] = ACTIONS(86),
    [aux_sym_css_named_color_token61] = ACTIONS(86),
    [aux_sym_css_named_color_token62] = ACTIONS(86),
    [aux_sym_css_named_color_token63] = ACTIONS(86),
    [aux_sym_css_named_color_token64] = ACTIONS(88),
    [aux_sym_css_named_color_token65] = ACTIONS(86),
    [aux_sym_css_named_color_token66] = ACTIONS(86),
    [aux_sym_css_named_color_token67] = ACTIONS(86),
    [aux_sym_css_named_color_token68] = ACTIONS(86),
    [aux_sym_css_named_color_token69] = ACTIONS(86),
    [aux_sym_css_named_color_token70] = ACTIONS(86),
    [aux_sym_css_named_color_token71] = ACTIONS(86),
    [aux_sym_css_named_color_token72] = ACTIONS(86),
    [aux_sym_css_named_color_token73] = ACTIONS(86),
    [aux_sym_css_named_color_token74] = ACTIONS(86),
    [aux_sym_css_named_color_token75] = ACTIONS(86),
    [aux_sym_css_named_color_token76] = ACTIONS(86),
    [aux_sym_css_named_color_token77] = ACTIONS(86),
    [aux_sym_css_named_color_token78] = ACTIONS(86),
    [aux_sym_css_named_color_token79] = ACTIONS(86),
    [aux_sym_css_named_color_token80] = ACTIONS(86),
    [aux_sym_css_named_color_token81] = ACTIONS(86),
    [aux_sym_css_named_color_token82] = ACTIONS(86),
    [aux_sym_css_named_color_token83] = ACTIONS(88),
    [aux_sym_css_named_color_token84] = ACTIONS(86),
    [aux_sym_css_named_color_token85] = ACTIONS(86),
    [aux_sym_css_named_color_token86] = ACTIONS(86),
    [aux_sym_css_named_color_token87] = ACTIONS(86),
    [aux_sym_css_named_color_token88] = ACTIONS(86),
    [aux_sym_css_named_color_token89] = ACTIONS(86),
    [aux_sym_css_named_color_token90] = ACTIONS(86),
    [aux_sym_css_named_color_token91] = ACTIONS(86),
    [aux_sym_css_named_color_token92] = ACTIONS(86),
    [aux_sym_css_named_color_token93] = ACTIONS(86),
    [aux_sym_css_named_color_token94] = ACTIONS(86),
    [aux_sym_css_named_color_token95] = ACTIONS(86),
    [aux_sym_css_named_color_token96] = ACTIONS(86),
    [aux_sym_css_named_color_token97] = ACTIONS(86),
    [aux_sym_css_named_color_token98] = ACTIONS(86),
    [aux_sym_css_named_color_token99] = ACTIONS(86),
    [aux_sym_css_named_color_token100] = ACTIONS(86),
    [aux_sym_css_named_color_token101] = ACTIONS(86),
    [aux_sym_css_named_color_token102] = ACTIONS(86),
    [aux_sym_css_named_color_token103] = ACTIONS(86),
    [aux_sym_css_named_color_token104] = ACTIONS(88),
    [aux_sym_css_named_color_token105] = ACTIONS(86),
    [aux_sym_css_named_color_token106] = ACTIONS(88),
    [aux_sym_css_named_color_token107] = ACTIONS(86),
    [aux_sym_css_named_color_token108] = ACTIONS(86),
    [aux_sym_css_named_color_token109] = ACTIONS(86),
    [aux_sym_css_named_color_token110] = ACTIONS(86),
    [aux_sym_css_named_color_token111] = ACTIONS(86),
    [aux_sym_css_named_color_token112] = ACTIONS(86),
    [aux_sym_css_named_color_token113] = ACTIONS(86),
    [aux_sym_css_named_color_token114] = ACTIONS(86),
    [aux_sym_css_named_color_token115] = ACTIONS(86),
    [aux_sym_css_named_color_token116] = ACTIONS(86),
    [aux_sym_css_named_color_token117] = ACTIONS(86),
    [aux_sym_css_named_color_token118] = ACTIONS(86),
    [aux_sym_css_named_color_token119] = ACTIONS(86),
    [aux_sym_css_named_color_token120] = ACTIONS(86),
    [aux_sym_css_named_color_token121] = ACTIONS(86),
    [aux_sym_css_named_color_token122] = ACTIONS(86),
    [aux_sym_css_named_color_token123] = ACTIONS(86),
    [aux_sym_css_named_color_token124] = ACTIONS(86),
    [aux_sym_css_named_color_token125] = ACTIONS(86),
    [aux_sym_css_named_color_token126] = ACTIONS(86),
    [aux_sym_css_named_color_token127] = ACTIONS(86),
    [aux_sym_css_named_color_token128] = ACTIONS(86),
    [aux_sym_css_named_color_token129] = ACTIONS(86),
    [aux_sym_css_named_color_token130] = ACTIONS(86),
    [aux_sym_css_named_color_token131] = ACTIONS(86),
    [aux_sym_css_named_color_token132] = ACTIONS(86),
    [aux_sym_css_named_color_token133] = ACTIONS(86),
    [aux_sym_css_named_color_token134] = ACTIONS(86),
    [aux_sym_css_named_color_token135] = ACTIONS(86),
    [aux_sym_css_named_color_token136] = ACTIONS(86),
    [aux_sym_css_named_color_token137] = ACTIONS(86),
    [aux_sym_css_named_color_token138] = ACTIONS(86),
    [aux_sym_css_named_color_token139] = ACTIONS(86),
    [aux_sym_css_named_color_token140] = ACTIONS(86),
    [aux_sym_css_named_color_token141] = ACTIONS(86),
    [aux_sym_css_named_color_token142] = ACTIONS(86),
    [aux_sym_css_named_color_token143] = ACTIONS(86),
    [aux_sym_css_named_color_token144] = ACTIONS(86),
    [aux_sym_css_named_color_token145] = ACTIONS(88),
    [aux_sym_css_named_color_token146] = ACTIONS(86),
    [aux_sym_css_named_color_token147] = ACTIONS(88),
    [aux_sym_css_named_color_token148] = ACTIONS(86),
    [sym_css_keyword_transparent] = ACTIONS(86),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(92),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(90),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(92),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(90),
    [aux_sym_css_function_hwb_token1] = ACTIONS(90),
    [aux_sym_css_function_lab_token1] = ACTIONS(90),
    [aux_sym_css_function_oklab_token1] = ACTIONS(90),
    [aux_sym_css_function_lch_token1] = ACTIONS(90),
    [aux_sym_css_function_oklch_token1] = ACTIONS(90),
    [aux_sym_css_function_color_token1] = ACTIONS(90),
    [sym_css_hex_color_6_digits] = ACTIONS(92),
    [sym_css_hex_color_8_digits] = ACTIONS(90),
    [sym_css_hex_color_3_digits] = ACTIONS(92),
    [sym_css_hex_color_4_digits] = ACTIONS(92),
    [aux_sym_css_named_color_token1] = ACTIONS(90),
    [aux_sym_css_named_color_token2] = ACTIONS(90),
    [aux_sym_css_named_color_token3] = ACTIONS(92),
    [aux_sym_css_named_color_token4] = ACTIONS(90),
    [aux_sym_css_named_color_token5] = ACTIONS(90),
    [aux_sym_css_named_color_token6] = ACTIONS(90),
    [aux_sym_css_named_color_token7] = ACTIONS(90),
    [aux_sym_css_named_color_token8] = ACTIONS(90),
    [aux_sym_css_named_color_token9] = ACTIONS(90),
    [aux_sym_css_named_color_token10] = ACTIONS(92),
    [aux_sym_css_named_color_token11] = ACTIONS(90),
    [aux_sym_css_named_color_token12] = ACTIONS(90),
    [aux_sym_css_named_color_token13] = ACTIONS(90),
    [aux_sym_css_named_color_token14] = ACTIONS(90),
    [aux_sym_css_named_color_token15] = ACTIONS(90),
    [aux_sym_css_named_color_token16] = ACTIONS(90),
    [aux_sym_css_named_color_token17] = ACTIONS(90),
    [aux_sym_css_named_color_token18] = ACTIONS(90),
    [aux_sym_css_named_color_token19] = ACTIONS(90),
    [aux_sym_css_named_color_token20] = ACTIONS(90),
    [aux_sym_css_named_color_token21] = ACTIONS(90),
    [aux_sym_css_named_color_token22] = ACTIONS(90),
    [aux_sym_css_named_color_token23] = ACTIONS(90),
    [aux_sym_css_named_color_token24] = ACTIONS(90),
    [aux_sym_css_named_color_token25] = ACTIONS(90),
    [aux_sym_css_named_color_token26] = ACTIONS(90),
    [aux_sym_css_named_color_token27] = ACTIONS(90),
    [aux_sym_css_named_color_token28] = ACTIONS(90),
    [aux_sym_css_named_color_token29] = ACTIONS(90),
    [aux_sym_css_named_color_token30] = ACTIONS(90),
    [aux_sym_css_named_color_token31] = ACTIONS(90),
    [aux_sym_css_named_color_token32] = ACTIONS(90),
    [aux_sym_css_named_color_token33] = ACTIONS(90),
    [aux_sym_css_named_color_token34] = ACTIONS(90),
    [aux_sym_css_named_color_token35] = ACTIONS(90),
    [aux_sym_css_named_color_token36] = ACTIONS(90),
    [aux_sym_css_named_color_token37] = ACTIONS(90),
    [aux_sym_css_named_color_token38] = ACTIONS(90),
    [aux_sym_css_named_color_token39] = ACTIONS(90),
    [aux_sym_css_named_color_token40] = ACTIONS(90),
    [aux_sym_css_named_color_token41] = ACTIONS(90),
    [aux_sym_css_named_color_token42] = ACTIONS(90),
    [aux_sym_css_named_color_token43] = ACTIONS(90),
    [aux_sym_css_named_color_token44] = ACTIONS(90),
    [aux_sym_css_named_color_token45] = ACTIONS(90),
    [aux_sym_css_named_color_token46] = ACTIONS(90),
    [aux_sym_css_named_color_token47] = ACTIONS(90),
    [aux_sym_css_named_color_token48] = ACTIONS(90),
    [aux_sym_css_named_color_token49] = ACTIONS(90),
    [aux_sym_css_named_color_token50] = ACTIONS(90),
    [aux_sym_css_named_color_token51] = ACTIONS(90),
    [aux_sym_css_named_color_token52] = ACTIONS(92),
    [aux_sym_css_named_color_token53] = ACTIONS(90),
    [aux_sym_css_named_color_token54] = ACTIONS(90),
    [aux_sym_css_named_color_token55] = ACTIONS(92),
    [aux_sym_css_named_color_token56] = ACTIONS(90),
    [aux_sym_css_named_color_token57] = ACTIONS(90),
    [aux_sym_css_named_color_token58] = ACTIONS(90),
    [aux_sym_css_named_color_token59] = ACTIONS(90),
    [aux_sym_css_named_color_token60] = ACTIONS(90),
    [aux_sym_css_named_color_token61] = ACTIONS(90),
    [aux_sym_css_named_color_token62] = ACTIONS(90),
    [aux_sym_css_named_color_token63] = ACTIONS(90),
    [aux_sym_css_named_color_token64] = ACTIONS(92),
    [aux_sym_css_named_color_token65] = ACTIONS(90),
    [aux_sym_css_named_color_token66] = ACTIONS(90),
    [aux_sym_css_named_color_token67] = ACTIONS(90),
    [aux_sym_css_named_color_token68] = ACTIONS(90),
    [aux_sym_css_named_color_token69] = ACTIONS(90),
    [aux_sym_css_named_color_token70] = ACTIONS(90),
    [aux_sym_css_named_color_token71] = ACTIONS(90),
    [aux_sym_css_named_color_token72] = ACTIONS(90),
    [aux_sym_css_named_color_token73] = ACTIONS(90),
    [aux_sym_css_named_color_token74] = ACTIONS(90),
    [aux_sym_css_named_color_token75] = ACTIONS(90),
    [aux_sym_css_named_color_token76] = ACTIONS(90),
    [aux_sym_css_named_color_token77] = ACTIONS(90),
    [aux_sym_css_named_color_token78] = ACTIONS(90),
    [aux_sym_css_named_color_token79] = ACTIONS(90),
    [aux_sym_css_named_color_token80] = ACTIONS(90),
    [aux_sym_css_named_color_token81] = ACTIONS(90),
    [aux_sym_css_named_color_token82] = ACTIONS(90),
    [aux_sym_css_named_color_token83] = ACTIONS(92),
    [aux_sym_css_named_color_token84] = ACTIONS(90),
    [aux_sym_css_named_color_token85] = ACTIONS(90),
    [aux_sym_css_named_color_token86] = ACTIONS(90),
    [aux_sym_css_named_color_token87] = ACTIONS(90),
    [aux_sym_css_named_color_token88] = ACTIONS(90),
    [aux_sym_css_named_color_token89] = ACTIONS(90),
    [aux_sym_css_named_color_token90] = ACTIONS(90),
    [aux_sym_css_named_color_token91] = ACTIONS(90),
    [aux_sym_css_named_color_token92] = ACTIONS(90),
    [aux_sym_css_named_color_token93] = ACTIONS(90),
    [aux_sym_css_named_color_token94] = ACTIONS(90),
    [aux_sym_css_named_color_token95] = ACTIONS(90),
    [aux_sym_css_named_color_token96] = ACTIONS(90),
    [aux_sym_css_named_color_token97] = ACTIONS(90),
    [aux_sym_css_named_color_token98] = ACTIONS(90),
    [aux_sym_css_named_color_token99] = ACTIONS(90),
    [aux_sym_css_named_color_token100] = ACTIONS(90),
    [aux_sym_css_named_color_token101] = ACTIONS(90),
    [aux_sym_css_named_color_token102] = ACTIONS(90),
    [aux_sym_css_named_color_token103] = ACTIONS(90),
    [aux_sym_css_named_color_token104] = ACTIONS(92),
    [aux_sym_css_named_color_token105] = ACTIONS(90),
    [aux_sym_css_named_color_token106] = ACTIONS(92),
    [aux_sym_css_named_color_token107] = ACTIONS(90),
    [aux_sym_css_named_color_token108] = ACTIONS(90),
    [aux_sym_css_named_color_token109] = ACTIONS(90),
    [aux_sym_css_named_color_token110] = ACTIONS(90),
    [aux_sym_css_named_color_token111] = ACTIONS(90),
    [aux_sym_css_named_color_token112] = ACTIONS(90),
    [aux_sym_css_named_color_token113] = ACTIONS(90),
    [aux_sym_css_named_color_token114] = ACTIONS(90),
    [aux_sym_css_named_color_token115] = ACTIONS(90),
    [aux_sym_css_named_color_token116] = ACTIONS(90),
    [aux_sym_css_named_color_token117] = ACTIONS(90),
    [aux_sym_css_named_color_token118] = ACTIONS(90),
    [aux_sym_css_named_color_token119] = ACTIONS(90),
    [aux_sym_css_named_color_token120] = ACTIONS(90),
    [aux_sym_css_named_color_token121] = ACTIONS(90),
    [aux_sym_css_named_color_token122] = ACTIONS(90),
    [aux_sym_css_named_color_token123] = ACTIONS(90),
    [aux_sym_css_named_color_token124] = ACTIONS(90),
    [aux_sym_css_named_color_token125] = ACTIONS(90),
    [aux_sym_css_named_color_token126] = ACTIONS(90),
    [aux_sym_css_named_color_token127] = ACTIONS(90),
    [aux_sym_css_named_color_token128] = ACTIONS(90),
    [aux_sym_css_named_color_token129] = ACTIONS(90),
    [aux_sym_css_named_color_token130] = ACTIONS(90),
    [aux_sym_css_named_color_token131] = ACTIONS(90),
    [aux_sym_css_named_color_token132] = ACTIONS(90),
    [aux_sym_css_named_color_token133] = ACTIONS(90),
    [aux_sym_css_named_color_token134] = ACTIONS(90),
    [aux_sym_css_named_color_token135] = ACTIONS(90),
    [aux_sym_css_named_color_token136] = ACTIONS(90),
    [aux_sym_css_named_color_token137] = ACTIONS(90),
    [aux_sym_css_named_color_token138] = ACTIONS(90),
    [aux_sym_css_named_color_token139] = ACTIONS(90),
    [aux_sym_css_named_color_token140] = ACTIONS(90),
    [aux_sym_css_named_color_token141] = ACTIONS(90),
    [aux_sym_css_named_color_token142] = ACTIONS(90),
    [aux_sym_css_named_color_token143] = ACTIONS(90),
    [aux_sym_css_named_color_token144] = ACTIONS(90),
    [aux_sym_css_named_color_token145] = ACTIONS(92),
    [aux_sym_css_named_color_token146] = ACTIONS(90),
    [aux_sym_css_named_color_token147] = ACTIONS(92),
    [aux_sym_css_named_color_token148] = ACTIONS(90),
    [sym_css_keyword_transparent] = ACTIONS(90),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(88),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(86),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(88),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(86),
    [aux_sym_css_function_hwb_token1] = ACTIONS(86),
    [aux_sym_css_function_lab_token1] = ACTIONS(86),
    [aux_sym_css_function_oklab_token1] = ACTIONS(86),
    [aux_sym_css_function_lch_token1] = ACTIONS(86),
    [aux_sym_css_function_oklch_token1] = ACTIONS(86),
    [aux_sym_css_function_color_token1] = ACTIONS(86),
    [sym_css_hex_color_6_digits] = ACTIONS(88),
    [sym_css_hex_color_8_digits] = ACTIONS(86),
    [sym_css_hex_color_3_digits] = ACTIONS(88),
    [sym_css_hex_color_4_digits] = ACTIONS(88),
    [aux_sym_css_named_color_token1] = ACTIONS(86),
    [aux_sym_css_named_color_token2] = ACTIONS(86),
    [aux_sym_css_named_color_token3] = ACTIONS(88),
    [aux_sym_css_named_color_token4] = ACTIONS(86),
    [aux_sym_css_named_color_token5] = ACTIONS(86),
    [aux_sym_css_named_color_token6] = ACTIONS(86),
    [aux_sym_css_named_color_token7] = ACTIONS(86),
    [aux_sym_css_named_color_token8] = ACTIONS(86),
    [aux_sym_css_named_color_token9] = ACTIONS(86),
    [aux_sym_css_named_color_token10] = ACTIONS(88),
    [aux_sym_css_named_color_token11] = ACTIONS(86),
    [aux_sym_css_named_color_token12] = ACTIONS(86),
    [aux_sym_css_named_color_token13] = ACTIONS(86),
    [aux_sym_css_named_color_token14] = ACTIONS(86),
    [aux_sym_css_named_color_token15] = ACTIONS(86),
    [aux_sym_css_named_color_token16] = ACTIONS(86),
    [aux_sym_css_named_color_token17] = ACTIONS(86),
    [aux_sym_css_named_color_token18] = ACTIONS(86),
    [aux_sym_css_named_color_token19] = ACTIONS(86),
    [aux_sym_css_named_color_token20] = ACTIONS(86),
    [aux_sym_css_named_color_token21] = ACTIONS(86),
    [aux_sym_css_named_color_token22] = ACTIONS(86),
    [aux_sym_css_named_color_token23] = ACTIONS(86),
    [aux_sym_css_named_color_token24] = ACTIONS(86),
    [aux_sym_css_named_color_token25] = ACTIONS(86),
    [aux_sym_css_named_color_token26] = ACTIONS(86),
    [aux_sym_css_named_color_token27] = ACTIONS(86),
    [aux_sym_css_named_color_token28] = ACTIONS(86),
    [aux_sym_css_named_color_token29] = ACTIONS(86),
    [aux_sym_css_named_color_token30] = ACTIONS(86),
    [aux_sym_css_named_color_token31] = ACTIONS(86),
    [aux_sym_css_named_color_token32] = ACTIONS(86),
    [aux_sym_css_named_color_token33] = ACTIONS(86),
    [aux_sym_css_named_color_token34] = ACTIONS(86),
    [aux_sym_css_named_color_token35] = ACTIONS(86),
    [aux_sym_css_named_color_token36] = ACTIONS(86),
    [aux_sym_css_named_color_token37] = ACTIONS(86),
    [aux_sym_css_named_color_token38] = ACTIONS(86),
    [aux_sym_css_named_color_token39] = ACTIONS(86),
    [aux_sym_css_named_color_token40] = ACTIONS(86),
    [aux_sym_css_named_color_token41] = ACTIONS(86),
    [aux_sym_css_named_color_token42] = ACTIONS(86),
    [aux_sym_css_named_color_token43] = ACTIONS(86),
    [aux_sym_css_named_color_token44] = ACTIONS(86),
    [aux_sym_css_named_color_token45] = ACTIONS(86),
    [aux_sym_css_named_color_token46] = ACTIONS(86),
    [aux_sym_css_named_color_token47] = ACTIONS(86),
    [aux_sym_css_named_color_token48] = ACTIONS(86),
    [aux_sym_css_named_color_token49] = ACTIONS(86),
    [aux_sym_css_named_color_token50] = ACTIONS(86),
    [aux_sym_css_named_color_token51] = ACTIONS(86),
    [aux_sym_css_named_color_token52] = ACTIONS(88),
    [aux_sym_css_named_color_token53] = ACTIONS(86),
    [aux_sym_css_named_color_token54] = ACTIONS(86),
    [aux_sym_css_named_color_token55] = ACTIONS(88),
    [aux_sym_css_named_color_token56] = ACTIONS(86),
    [aux_sym_css_named_color_token57] = ACTIONS(86),
    [aux_sym_css_named_color_token58] = ACTIONS(86),
    [aux_sym_css_named_color_token59] = ACTIONS(86),
    [aux_sym_css_named_color_token60] = ACTIONS(86),
    [aux_sym_css_named_color_token61] = ACTIONS(86),
    [aux_sym_css_named_color_token62] = ACTIONS(86),
    [aux_sym_css_named_color_token63] = ACTIONS(86),
    [aux_sym_css_named_color_token64] = ACTIONS(88),
    [aux_sym_css_named_color_token65] = ACTIONS(86),
    [aux_sym_css_named_color_token66] = ACTIONS(86),
    [aux_sym_css_named_color_token67] = ACTIONS(86),
    [aux_sym_css_named_color_token68] = ACTIONS(86),
    [aux_sym_css_named_color_token69] = ACTIONS(86),
    [aux_sym_css_named_color_token70] = ACTIONS(86),
    [aux_sym_css_named_color_token71] = ACTIONS(86),
    [aux_sym_css_named_color_token72] = ACTIONS(86),
    [aux_sym_css_named_color_token73] = ACTIONS(86),
    [aux_sym_css_named_color_token74] = ACTIONS(86),
    [aux_sym_css_named_color_token75] = ACTIONS(86),
    [aux_sym_css_named_color_token76] = ACTIONS(86),
    [aux_sym_css_named_color_token77] = ACTIONS(86),
    [aux_sym_css_named_color_token78] = ACTIONS(86),
    [aux_sym_css_named_color_token79] = ACTIONS(86),
    [aux_sym_css_named_color_token80] = ACTIONS(86),
    [aux_sym_css_named_color_token81] = ACTIONS(86),
    [aux_sym_css_named_color_token82] = ACTIONS(86),
    [aux_sym_css_named_color_token83] = ACTIONS(88),
    [aux_sym_css_named_color_token84] = ACTIONS(86),
    [aux_sym_css_named_color_token85] = ACTIONS(86),
    [aux_sym_css_named_color_token86] = ACTIONS(86),
    [aux_sym_css_named_color_token87] = ACTIONS(86),
    [aux_sym_css_named_color_token88] = ACTIONS(86),
    [aux_sym_css_named_color_token89] = ACTIONS(86),
    [aux_sym_css_named_color_token90] = ACTIONS(86),
    [aux_sym_css_named_color_token91] = ACTIONS(86),
    [aux_sym_css_named_color_token92] = ACTIONS(86),
    [aux_sym_css_named_color_token93] = ACTIONS(86),
    [aux_sym_css_named_color_token94] = ACTIONS(86),
    [aux_sym_css_named_color_token95] = ACTIONS(86),
    [aux_sym_css_named_color_token96] = ACTIONS(86),
    [aux_sym_css_named_color_token97] = ACTIONS(86),
    [aux_sym_css_named_color_token98] = ACTIONS(86),
    [aux_sym_css_named_color_token99] = ACTIONS(86),
    [aux_sym_css_named_color_token100] = ACTIONS(86),
    [aux_sym_css_named_color_token101] = ACTIONS(86),
    [aux_sym_css_named_color_token102] = ACTIONS(86),
    [aux_sym_css_named_color_token103] = ACTIONS(86),
    [aux_sym_css_named_color_token104] = ACTIONS(88),
    [aux_sym_css_named_color_token105] = ACTIONS(86),
    [aux_sym_css_named_color_token106] = ACTIONS(88),
    [aux_sym_css_named_color_token107] = ACTIONS(86),
    [aux_sym_css_named_color_token108] = ACTIONS(86),
    [aux_sym_css_named_color_token109] = ACTIONS(86),
    [aux_sym_css_named_color_token110] = ACTIONS(86),
    [aux_sym_css_named_color_token111] = ACTIONS(86),
    [aux_sym_css_named_color_token112] = ACTIONS(86),
    [aux_sym_css_named_color_token113] = ACTIONS(86),
    [aux_sym_css_named_color_token114] = ACTIONS(86),
    [aux_sym_css_named_color_token115] = ACTIONS(86),
    [aux_sym_css_named_color_token116] = ACTIONS(86),
    [aux_sym_css_named_color_token117] = ACTIONS(86),
    [aux_sym_css_named_color_token118] = ACTIONS(86),
    [aux_sym_css_named_color_token119] = ACTIONS(86),
    [aux_sym_css_named_color_token120] = ACTIONS(86),
    [aux_sym_css_named_color_token121] = ACTIONS(86),
    [aux_sym_css_named_color_token122] = ACTIONS(86),
    [aux_sym_css_named_color_token123] = ACTIONS(86),
    [aux_sym_css_named_color_token124] = ACTIONS(86),
    [aux_sym_css_named_color_token125] = ACTIONS(86),
    [aux_sym_css_named_color_token126] = ACTIONS(86),
    [aux_sym_css_named_color_token127] = ACTIONS(86),
    [aux_sym_css_named_color_token128] = ACTIONS(86),
    [aux_sym_css_named_color_token129] = ACTIONS(86),
    [aux_sym_css_named_color_token130] = ACTIONS(86),
    [aux_sym_css_named_color_token131] = ACTIONS(86),
    [aux_sym_css_named_color_token132] = ACTIONS(86),
    [aux_sym_css_named_color_token133] = ACTIONS(86),
    [aux_sym_css_named_color_token134] = ACTIONS(86),
    [aux_sym_css_named_color_token135] = ACTIONS(86),
    [aux_sym_css_named_color_token136] = ACTIONS(86),
    [aux_sym_css_named_color_token137] = ACTIONS(86),
    [aux_sym_css_named_color_token138] = ACTIONS(86),
    [aux_sym_css_named_color_token139] = ACTIONS(86),
    [aux_sym_css_named_color_token140] = ACTIONS(86),
    [aux_sym_css_named_color_token141] = ACTIONS(86),
    [aux_sym_css_named_color_token142] = ACTIONS(86),
    [aux_sym_css_named_color_token143] = ACTIONS(86),
    [aux_sym_css_named_color_token144] = ACTIONS(86),
    [aux_sym_css_named_color_token145] = ACTIONS(88),
    [aux_sym_css_named_color_token146] = ACTIONS(86),
    [aux_sym_css_named_color_token147] = ACTIONS(88),
    [aux_sym_css_named_color_token148] = ACTIONS(86),
    [sym_css_keyword_transparent] = ACTIONS(86),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(96),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(94),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(96),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(94),
    [aux_sym_css_function_hwb_token1] = ACTIONS(94),
    [aux_sym_css_function_lab_token1] = ACTIONS(94),
    [aux_sym_css_function_oklab_token1] = ACTIONS(94),
    [aux_sym_css_function_lch_token1] = ACTIONS(94),
    [aux_sym_css_function_oklch_token1] = ACTIONS(94),
    [aux_sym_css_function_color_token1] = ACTIONS(94),
    [sym_css_hex_color_6_digits] = ACTIONS(96),
    [sym_css_hex_color_8_digits] = ACTIONS(94),
    [sym_css_hex_color_3_digits] = ACTIONS(96),
    [sym_css_hex_color_4_digits] = ACTIONS(96),
    [aux_sym_css_named_color_token1] = ACTIONS(94),
    [aux_sym_css_named_color_token2] = ACTIONS(94),
    [aux_sym_css_named_color_token3] = ACTIONS(96),
    [aux_sym_css_named_color_token4] = ACTIONS(94),
    [aux_sym_css_named_color_token5] = ACTIONS(94),
    [aux_sym_css_named_color_token6] = ACTIONS(94),
    [aux_sym_css_named_color_token7] = ACTIONS(94),
    [aux_sym_css_named_color_token8] = ACTIONS(94),
    [aux_sym_css_named_color_token9] = ACTIONS(94),
    [aux_sym_css_named_color_token10] = ACTIONS(96),
    [aux_sym_css_named_color_token11] = ACTIONS(94),
    [aux_sym_css_named_color_token12] = ACTIONS(94),
    [aux_sym_css_named_color_token13] = ACTIONS(94),
    [aux_sym_css_named_color_token14] = ACTIONS(94),
    [aux_sym_css_named_color_token15] = ACTIONS(94),
    [aux_sym_css_named_color_token16] = ACTIONS(94),
    [aux_sym_css_named_color_token17] = ACTIONS(94),
    [aux_sym_css_named_color_token18] = ACTIONS(94),
    [aux_sym_css_named_color_token19] = ACTIONS(94),
    [aux_sym_css_named_color_token20] = ACTIONS(94),
    [aux_sym_css_named_color_token21] = ACTIONS(94),
    [aux_sym_css_named_color_token22] = ACTIONS(94),
    [aux_sym_css_named_color_token23] = ACTIONS(94),
    [aux_sym_css_named_color_token24] = ACTIONS(94),
    [aux_sym_css_named_color_token25] = ACTIONS(94),
    [aux_sym_css_named_color_token26] = ACTIONS(94),
    [aux_sym_css_named_color_token27] = ACTIONS(94),
    [aux_sym_css_named_color_token28] = ACTIONS(94),
    [aux_sym_css_named_color_token29] = ACTIONS(94),
    [aux_sym_css_named_color_token30] = ACTIONS(94),
    [aux_sym_css_named_color_token31] = ACTIONS(94),
    [aux_sym_css_named_color_token32] = ACTIONS(94),
    [aux_sym_css_named_color_token33] = ACTIONS(94),
    [aux_sym_css_named_color_token34] = ACTIONS(94),
    [aux_sym_css_named_color_token35] = ACTIONS(94),
    [aux_sym_css_named_color_token36] = ACTIONS(94),
    [aux_sym_css_named_color_token37] = ACTIONS(94),
    [aux_sym_css_named_color_token38] = ACTIONS(94),
    [aux_sym_css_named_color_token39] = ACTIONS(94),
    [aux_sym_css_named_color_token40] = ACTIONS(94),
    [aux_sym_css_named_color_token41] = ACTIONS(94),
    [aux_sym_css_named_color_token42] = ACTIONS(94),
    [aux_sym_css_named_color_token43] = ACTIONS(94),
    [aux_sym_css_named_color_token44] = ACTIONS(94),
    [aux_sym_css_named_color_token45] = ACTIONS(94),
    [aux_sym_css_named_color_token46] = ACTIONS(94),
    [aux_sym_css_named_color_token47] = ACTIONS(94),
    [aux_sym_css_named_color_token48] = ACTIONS(94),
    [aux_sym_css_named_color_token49] = ACTIONS(94),
    [aux_sym_css_named_color_token50] = ACTIONS(94),
    [aux_sym_css_named_color_token51] = ACTIONS(94),
    [aux_sym_css_named_color_token52] = ACTIONS(96),
    [aux_sym_css_named_color_token53] = ACTIONS(94),
    [aux_sym_css_named_color_token54] = ACTIONS(94),
    [aux_sym_css_named_color_token55] = ACTIONS(96),
    [aux_sym_css_named_color_token56] = ACTIONS(94),
    [aux_sym_css_named_color_token57] = ACTIONS(94),
    [aux_sym_css_named_color_token58] = ACTIONS(94),
    [aux_sym_css_named_color_token59] = ACTIONS(94),
    [aux_sym_css_named_color_token60] = ACTIONS(94),
    [aux_sym_css_named_color_token61] = ACTIONS(94),
    [aux_sym_css_named_color_token62] = ACTIONS(94),
    [aux_sym_css_named_color_token63] = ACTIONS(94),
    [aux_sym_css_named_color_token64] = ACTIONS(96),
    [aux_sym_css_named_color_token65] = ACTIONS(94),
    [aux_sym_css_named_color_token66] = ACTIONS(94),
    [aux_sym_css_named_color_token67] = ACTIONS(94),
    [aux_sym_css_named_color_token68] = ACTIONS(94),
    [aux_sym_css_named_color_token69] = ACTIONS(94),
    [aux_sym_css_named_color_token70] = ACTIONS(94),
    [aux_sym_css_named_color_token71] = ACTIONS(94),
    [aux_sym_css_named_color_token72] = ACTIONS(94),
    [aux_sym_css_named_color_token73] = ACTIONS(94),
    [aux_sym_css_named_color_token74] = ACTIONS(94),
    [aux_sym_css_named_color_token75] = ACTIONS(94),
    [aux_sym_css_named_color_token76] = ACTIONS(94),
    [aux_sym_css_named_color_token77] = ACTIONS(94),
    [aux_sym_css_named_color_token78] = ACTIONS(94),
    [aux_sym_css_named_color_token79] = ACTIONS(94),
    [aux_sym_css_named_color_token80] = ACTIONS(94),
    [aux_sym_css_named_color_token81] = ACTIONS(94),
    [aux_sym_css_named_color_token82] = ACTIONS(94),
    [aux_sym_css_named_color_token83] = ACTIONS(96),
    [aux_sym_css_named_color_token84] = ACTIONS(94),
    [aux_sym_css_named_color_token85] = ACTIONS(94),
    [aux_sym_css_named_color_token86] = ACTIONS(94),
    [aux_sym_css_named_color_token87] = ACTIONS(94),
    [aux_sym_css_named_color_token88] = ACTIONS(94),
    [aux_sym_css_named_color_token89] = ACTIONS(94),
    [aux_sym_css_named_color_token90] = ACTIONS(94),
    [aux_sym_css_named_color_token91] = ACTIONS(94),
    [aux_sym_css_named_color_token92] = ACTIONS(94),
    [aux_sym_css_named_color_token93] = ACTIONS(94),
    [aux_sym_css_named_color_token94] = ACTIONS(94),
    [aux_sym_css_named_color_token95] = ACTIONS(94),
    [aux_sym_css_named_color_token96] = ACTIONS(94),
    [aux_sym_css_named_color_token97] = ACTIONS(94),
    [aux_sym_css_named_color_token98] = ACTIONS(94),
    [aux_sym_css_named_color_token99] = ACTIONS(94),
    [aux_sym_css_named_color_token100] = ACTIONS(94),
    [aux_sym_css_named_color_token101] = ACTIONS(94),
    [aux_sym_css_named_color_token102] = ACTIONS(94),
    [aux_sym_css_named_color_token103] = ACTIONS(94),
    [aux_sym_css_named_color_token104] = ACTIONS(96),
    [aux_sym_css_named_color_token105] = ACTIONS(94),
    [aux_sym_css_named_color_token106] = ACTIONS(96),
    [aux_sym_css_named_color_token107] = ACTIONS(94),
    [aux_sym_css_named_color_token108] = ACTIONS(94),
    [aux_sym_css_named_color_token109] = ACTIONS(94),
    [aux_sym_css_named_color_token110] = ACTIONS(94),
    [aux_sym_css_named_color_token111] = ACTIONS(94),
    [aux_sym_css_named_color_token112] = ACTIONS(94),
    [aux_sym_css_named_color_token113] = ACTIONS(94),
    [aux_sym_css_named_color_token114] = ACTIONS(94),
    [aux_sym_css_named_color_token115] = ACTIONS(94),
    [aux_sym_css_named_color_token116] = ACTIONS(94),
    [aux_sym_css_named_color_token117] = ACTIONS(94),
    [aux_sym_css_named_color_token118] = ACTIONS(94),
    [aux_sym_css_named_color_token119] = ACTIONS(94),
    [aux_sym_css_named_color_token120] = ACTIONS(94),
    [aux_sym_css_named_color_token121] = ACTIONS(94),
    [aux_sym_css_named_color_token122] = ACTIONS(94),
    [aux_sym_css_named_color_token123] = ACTIONS(94),
    [aux_sym_css_named_color_token124] = ACTIONS(94),
    [aux_sym_css_named_color_token125] = ACTIONS(94),
    [aux_sym_css_named_color_token126] = ACTIONS(94),
    [aux_sym_css_named_color_token127] = ACTIONS(94),
    [aux_sym_css_named_color_token128] = ACTIONS(94),
    [aux_sym_css_named_color_token129] = ACTIONS(94),
    [aux_sym_css_named_color_token130] = ACTIONS(94),
    [aux_sym_css_named_color_token131] = ACTIONS(94),
    [aux_sym_css_named_color_token132] = ACTIONS(94),
    [aux_sym_css_named_color_token133] = ACTIONS(94),
    [aux_sym_css_named_color_token134] = ACTIONS(94),
    [aux_sym_css_named_color_token135] = ACTIONS(94),
    [aux_sym_css_named_color_token136] = ACTIONS(94),
    [aux_sym_css_named_color_token137] = ACTIONS(94),
    [aux_sym_css_named_color_token138] = ACTIONS(94),
    [aux_sym_css_named_color_token139] = ACTIONS(94),
    [aux_sym_css_named_color_token140] = ACTIONS(94),
    [aux_sym_css_named_color_token141] = ACTIONS(94),
    [aux_sym_css_named_color_token142] = ACTIONS(94),
    [aux_sym_css_named_color_token143] = ACTIONS(94),
    [aux_sym_css_named_color_token144] = ACTIONS(94),
    [aux_sym_css_named_color_token145] = ACTIONS(96),
    [aux_sym_css_named_color_token146] = ACTIONS(94),
    [aux_sym_css_named_color_token147] = ACTIONS(96),
    [aux_sym_css_named_color_token148] = ACTIONS(94),
    [sym_css_keyword_transparent] = ACTIONS(94),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(100),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(98),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(100),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(98),
    [aux_sym_css_function_hwb_token1] = ACTIONS(98),
    [aux_sym_css_function_lab_token1] = ACTIONS(98),
    [aux_sym_css_function_oklab_token1] = ACTIONS(98),
    [aux_sym_css_function_lch_token1] = ACTIONS(98),
    [aux_sym_css_function_oklch_token1] = ACTIONS(98),
    [aux_sym_css_function_color_token1] = ACTIONS(98),
    [sym_css_hex_color_6_digits] = ACTIONS(100),
    [sym_css_hex_color_8_digits] = ACTIONS(98),
    [sym_css_hex_color_3_digits] = ACTIONS(100),
    [sym_css_hex_color_4_digits] = ACTIONS(100),
    [aux_sym_css_named_color_token1] = ACTIONS(98),
    [aux_sym_css_named_color_token2] = ACTIONS(98),
    [aux_sym_css_named_color_token3] = ACTIONS(100),
    [aux_sym_css_named_color_token4] = ACTIONS(98),
    [aux_sym_css_named_color_token5] = ACTIONS(98),
    [aux_sym_css_named_color_token6] = ACTIONS(98),
    [aux_sym_css_named_color_token7] = ACTIONS(98),
    [aux_sym_css_named_color_token8] = ACTIONS(98),
    [aux_sym_css_named_color_token9] = ACTIONS(98),
    [aux_sym_css_named_color_token10] = ACTIONS(100),
    [aux_sym_css_named_color_token11] = ACTIONS(98),
    [aux_sym_css_named_color_token12] = ACTIONS(98),
    [aux_sym_css_named_color_token13] = ACTIONS(98),
    [aux_sym_css_named_color_token14] = ACTIONS(98),
    [aux_sym_css_named_color_token15] = ACTIONS(98),
    [aux_sym_css_named_color_token16] = ACTIONS(98),
    [aux_sym_css_named_color_token17] = ACTIONS(98),
    [aux_sym_css_named_color_token18] = ACTIONS(98),
    [aux_sym_css_named_color_token19] = ACTIONS(98),
    [aux_sym_css_named_color_token20] = ACTIONS(98),
    [aux_sym_css_named_color_token21] = ACTIONS(98),
    [aux_sym_css_named_color_token22] = ACTIONS(98),
    [aux_sym_css_named_color_token23] = ACTIONS(98),
    [aux_sym_css_named_color_token24] = ACTIONS(98),
    [aux_sym_css_named_color_token25] = ACTIONS(98),
    [aux_sym_css_named_color_token26] = ACTIONS(98),
    [aux_sym_css_named_color_token27] = ACTIONS(98),
    [aux_sym_css_named_color_token28] = ACTIONS(98),
    [aux_sym_css_named_color_token29] = ACTIONS(98),
    [aux_sym_css_named_color_token30] = ACTIONS(98),
    [aux_sym_css_named_color_token31] = ACTIONS(98),
    [aux_sym_css_named_color_token32] = ACTIONS(98),
    [aux_sym_css_named_color_token33] = ACTIONS(98),
    [aux_sym_css_named_color_token34] = ACTIONS(98),
    [aux_sym_css_named_color_token35] = ACTIONS(98),
    [aux_sym_css_named_color_token36] = ACTIONS(98),
    [aux_sym_css_named_color_token37] = ACTIONS(98),
    [aux_sym_css_named_color_token38] = ACTIONS(98),
    [aux_sym_css_named_color_token39] = ACTIONS(98),
    [aux_sym_css_named_color_token40] = ACTIONS(98),
    [aux_sym_css_named_color_token41] = ACTIONS(98),
    [aux_sym_css_named_color_token42] = ACTIONS(98),
    [aux_sym_css_named_color_token43] = ACTIONS(98),
    [aux_sym_css_named_color_token44] = ACTIONS(98),
    [aux_sym_css_named_color_token45] = ACTIONS(98),
    [aux_sym_css_named_color_token46] = ACTIONS(98),
    [aux_sym_css_named_color_token47] = ACTIONS(98),
    [aux_sym_css_named_color_token48] = ACTIONS(98),
    [aux_sym_css_named_color_token49] = ACTIONS(98),
    [aux_sym_css_named_color_token50] = ACTIONS(98),
    [aux_sym_css_named_color_token51] = ACTIONS(98),
    [aux_sym_css_named_color_token52] = ACTIONS(100),
    [aux_sym_css_named_color_token53] = ACTIONS(98),
    [aux_sym_css_named_color_token54] = ACTIONS(98),
    [aux_sym_css_named_color_token55] = ACTIONS(100),
    [aux_sym_css_named_color_token56] = ACTIONS(98),
    [aux_sym_css_named_color_token57] = ACTIONS(98),
    [aux_sym_css_named_color_token58] = ACTIONS(98),
    [aux_sym_css_named_color_token59] = ACTIONS(98),
    [aux_sym_css_named_color_token60] = ACTIONS(98),
    [aux_sym_css_named_color_token61] = ACTIONS(98),
    [aux_sym_css_named_color_token62] = ACTIONS(98),
    [aux_sym_css_named_color_token63] = ACTIONS(98),
    [aux_sym_css_named_color_token64] = ACTIONS(100),
    [aux_sym_css_named_color_token65] = ACTIONS(98),
    [aux_sym_css_named_color_token66] = ACTIONS(98),
    [aux_sym_css_named_color_token67] = ACTIONS(98),
    [aux_sym_css_named_color_token68] = ACTIONS(98),
    [aux_sym_css_named_color_token69] = ACTIONS(98),
    [aux_sym_css_named_color_token70] = ACTIONS(98),
    [aux_sym_css_named_color_token71] = ACTIONS(98),
    [aux_sym_css_named_color_token72] = ACTIONS(98),
    [aux_sym_css_named_color_token73] = ACTIONS(98),
    [aux_sym_css_named_color_token74] = ACTIONS(98),
    [aux_sym_css_named_color_token75] = ACTIONS(98),
    [aux_sym_css_named_color_token76] = ACTIONS(98),
    [aux_sym_css_named_color_token77] = ACTIONS(98),
    [aux_sym_css_named_color_token78] = ACTIONS(98),
    [aux_sym_css_named_color_token79] = ACTIONS(98),
    [aux_sym_css_named_color_token80] = ACTIONS(98),
    [aux_sym_css_named_color_token81] = ACTIONS(98),
    [aux_sym_css_named_color_token82] = ACTIONS(98),
    [aux_sym_css_named_color_token83] = ACTIONS(100),
    [aux_sym_css_named_color_token84] = ACTIONS(98),
    [aux_sym_css_named_color_token85] = ACTIONS(98),
    [aux_sym_css_named_color_token86] = ACTIONS(98),
    [aux_sym_css_named_color_token87] = ACTIONS(98),
    [aux_sym_css_named_color_token88] = ACTIONS(98),
    [aux_sym_css_named_color_token89] = ACTIONS(98),
    [aux_sym_css_named_color_token90] = ACTIONS(98),
    [aux_sym_css_named_color_token91] = ACTIONS(98),
    [aux_sym_css_named_color_token92] = ACTIONS(98),
    [aux_sym_css_named_color_token93] = ACTIONS(98),
    [aux_sym_css_named_color_token94] = ACTIONS(98),
    [aux_sym_css_named_color_token95] = ACTIONS(98),
    [aux_sym_css_named_color_token96] = ACTIONS(98),
    [aux_sym_css_named_color_token97] = ACTIONS(98),
    [aux_sym_css_named_color_token98] = ACTIONS(98),
    [aux_sym_css_named_color_token99] = ACTIONS(98),
    [aux_sym_css_named_color_token100] = ACTIONS(98),
    [aux_sym_css_named_color_token101] = ACTIONS(98),
    [aux_sym_css_named_color_token102] = ACTIONS(98),
    [aux_sym_css_named_color_token103] = ACTIONS(98),
    [aux_sym_css_named_color_token104] = ACTIONS(100),
    [aux_sym_css_named_color_token105] = ACTIONS(98),
    [aux_sym_css_named_color_token106] = ACTIONS(100),
    [aux_sym_css_named_color_token107] = ACTIONS(98),
    [aux_sym_css_named_color_token108] = ACTIONS(98),
    [aux_sym_css_named_color_token109] = ACTIONS(98),
    [aux_sym_css_named_color_token110] = ACTIONS(98),
    [aux_sym_css_named_color_token111] = ACTIONS(98),
    [aux_sym_css_named_color_token112] = ACTIONS(98),
    [aux_sym_css_named_color_token113] = ACTIONS(98),
    [aux_sym_css_named_color_token114] = ACTIONS(98),
    [aux_sym_css_named_color_token115] = ACTIONS(98),
    [aux_sym_css_named_color_token116] = ACTIONS(98),
    [aux_sym_css_named_color_token117] = ACTIONS(98),
    [aux_sym_css_named_color_token118] = ACTIONS(98),
    [aux_sym_css_named_color_token119] = ACTIONS(98),
    [aux_sym_css_named_color_token120] = ACTIONS(98),
    [aux_sym_css_named_color_token121] = ACTIONS(98),
    [aux_sym_css_named_color_token122] = ACTIONS(98),
    [aux_sym_css_named_color_token123] = ACTIONS(98),
    [aux_sym_css_named_color_token124] = ACTIONS(98),
    [aux_sym_css_named_color_token125] = ACTIONS(98),
    [aux_sym_css_named_color_token126] = ACTIONS(98),
    [aux_sym_css_named_color_token127] = ACTIONS(98),
    [aux_sym_css_named_color_token128] = ACTIONS(98),
    [aux_sym_css_named_color_token129] = ACTIONS(98),
    [aux_sym_css_named_color_token130] = ACTIONS(98),
    [aux_sym_css_named_color_token131] = ACTIONS(98),
    [aux_sym_css_named_color_token132] = ACTIONS(98),
    [aux_sym_css_named_color_token133] = ACTIONS(98),
    [aux_sym_css_named_color_token134] = ACTIONS(98),
    [aux_sym_css_named_color_token135] = ACTIONS(98),
    [aux_sym_css_named_color_token136] = ACTIONS(98),
    [aux_sym_css_named_color_token137] = ACTIONS(98),
    [aux_sym_css_named_color_token138] = ACTIONS(98),
    [aux_sym_css_named_color_token139] = ACTIONS(98),
    [aux_sym_css_named_color_token140] = ACTIONS(98),
    [aux_sym_css_named_color_token141] = ACTIONS(98),
    [aux_sym_css_named_color_token142] = ACTIONS(98),
    [aux_sym_css_named_color_token143] = ACTIONS(98),
    [aux_sym_css_named_color_token144] = ACTIONS(98),
    [aux_sym_css_named_color_token145] = ACTIONS(100),
    [aux_sym_css_named_color_token146] = ACTIONS(98),
    [aux_sym_css_named_color_token147] = ACTIONS(100),
    [aux_sym_css_named_color_token148] = ACTIONS(98),
    [sym_css_keyword_transparent] = ACTIONS(98),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(100),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(98),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(100),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(98),
    [aux_sym_css_function_hwb_token1] = ACTIONS(98),
    [aux_sym_css_function_lab_token1] = ACTIONS(98),
    [aux_sym_css_function_oklab_token1] = ACTIONS(98),
    [aux_sym_css_function_lch_token1] = ACTIONS(98),
    [aux_sym_css_function_oklch_token1] = ACTIONS(98),
    [aux_sym_css_function_color_token1] = ACTIONS(98),
    [sym_css_hex_color_6_digits] = ACTIONS(100),
    [sym_css_hex_color_8_digits] = ACTIONS(98),
    [sym_css_hex_color_3_digits] = ACTIONS(100),
    [sym_css_hex_color_4_digits] = ACTIONS(100),
    [aux_sym_css_named_color_token1] = ACTIONS(98),
    [aux_sym_css_named_color_token2] = ACTIONS(98),
    [aux_sym_css_named_color_token3] = ACTIONS(100),
    [aux_sym_css_named_color_token4] = ACTIONS(98),
    [aux_sym_css_named_color_token5] = ACTIONS(98),
    [aux_sym_css_named_color_token6] = ACTIONS(98),
    [aux_sym_css_named_color_token7] = ACTIONS(98),
    [aux_sym_css_named_color_token8] = ACTIONS(98),
    [aux_sym_css_named_color_token9] = ACTIONS(98),
    [aux_sym_css_named_color_token10] = ACTIONS(100),
    [aux_sym_css_named_color_token11] = ACTIONS(98),
    [aux_sym_css_named_color_token12] = ACTIONS(98),
    [aux_sym_css_named_color_token13] = ACTIONS(98),
    [aux_sym_css_named_color_token14] = ACTIONS(98),
    [aux_sym_css_named_color_token15] = ACTIONS(98),
    [aux_sym_css_named_color_token16] = ACTIONS(98),
    [aux_sym_css_named_color_token17] = ACTIONS(98),
    [aux_sym_css_named_color_token18] = ACTIONS(98),
    [aux_sym_css_named_color_token19] = ACTIONS(98),
    [aux_sym_css_named_color_token20] = ACTIONS(98),
    [aux_sym_css_named_color_token21] = ACTIONS(98),
    [aux_sym_css_named_color_token22] = ACTIONS(98),
    [aux_sym_css_named_color_token23] = ACTIONS(98),
    [aux_sym_css_named_color_token24] = ACTIONS(98),
    [aux_sym_css_named_color_token25] = ACTIONS(98),
    [aux_sym_css_named_color_token26] = ACTIONS(98),
    [aux_sym_css_named_color_token27] = ACTIONS(98),
    [aux_sym_css_named_color_token28] = ACTIONS(98),
    [aux_sym_css_named_color_token29] = ACTIONS(98),
    [aux_sym_css_named_color_token30] = ACTIONS(98),
    [aux_sym_css_named_color_token31] = ACTIONS(98),
    [aux_sym_css_named_color_token32] = ACTIONS(98),
    [aux_sym_css_named_color_token33] = ACTIONS(98),
    [aux_sym_css_named_color_token34] = ACTIONS(98),
    [aux_sym_css_named_color_token35] = ACTIONS(98),
    [aux_sym_css_named_color_token36] = ACTIONS(98),
    [aux_sym_css_named_color_token37] = ACTIONS(98),
    [aux_sym_css_named_color_token38] = ACTIONS(98),
    [aux_sym_css_named_color_token39] = ACTIONS(98),
    [aux_sym_css_named_color_token40] = ACTIONS(98),
    [aux_sym_css_named_color_token41] = ACTIONS(98),
    [aux_sym_css_named_color_token42] = ACTIONS(98),
    [aux_sym_css_named_color_token43] = ACTIONS(98),
    [aux_sym_css_named_color_token44] = ACTIONS(98),
    [aux_sym_css_named_color_token45] = ACTIONS(98),
    [aux_sym_css_named_color_token46] = ACTIONS(98),
    [aux_sym_css_named_color_token47] = ACTIONS(98),
    [aux_sym_css_named_color_token48] = ACTIONS(98),
    [aux_sym_css_named_color_token49] = ACTIONS(98),
    [aux_sym_css_named_color_token50] = ACTIONS(98),
    [aux_sym_css_named_color_token51] = ACTIONS(98),
    [aux_sym_css_named_color_token52] = ACTIONS(100),
    [aux_sym_css_named_color_token53] = ACTIONS(98),
    [aux_sym_css_named_color_token54] = ACTIONS(98),
    [aux_sym_css_named_color_token55] = ACTIONS(100),
    [aux_sym_css_named_color_token56] = ACTIONS(98),
    [aux_sym_css_named_color_token57] = ACTIONS(98),
    [aux_sym_css_named_color_token58] = ACTIONS(98),
    [aux_sym_css_named_color_token59] = ACTIONS(98),
    [aux_sym_css_named_color_token60] = ACTIONS(98),
    [aux_sym_css_named_color_token61] = ACTIONS(98),
    [aux_sym_css_named_color_token62] = ACTIONS(98),
    [aux_sym_css_named_color_token63] = ACTIONS(98),
    [aux_sym_css_named_color_token64] = ACTIONS(100),
    [aux_sym_css_named_color_token65] = ACTIONS(98),
    [aux_sym_css_named_color_token66] = ACTIONS(98),
    [aux_sym_css_named_color_token67] = ACTIONS(98),
    [aux_sym_css_named_color_token68] = ACTIONS(98),
    [aux_sym_css_named_color_token69] = ACTIONS(98),
    [aux_sym_css_named_color_token70] = ACTIONS(98),
    [aux_sym_css_named_color_token71] = ACTIONS(98),
    [aux_sym_css_named_color_token72] = ACTIONS(98),
    [aux_sym_css_named_color_token73] = ACTIONS(98),
    [aux_sym_css_named_color_token74] = ACTIONS(98),
    [aux_sym_css_named_color_token75] = ACTIONS(98),
    [aux_sym_css_named_color_token76] = ACTIONS(98),
    [aux_sym_css_named_color_token77] = ACTIONS(98),
    [aux_sym_css_named_color_token78] = ACTIONS(98),
    [aux_sym_css_named_color_token79] = ACTIONS(98),
    [aux_sym_css_named_color_token80] = ACTIONS(98),
    [aux_sym_css_named_color_token81] = ACTIONS(98),
    [aux_sym_css_named_color_token82] = ACTIONS(98),
    [aux_sym_css_named_color_token83] = ACTIONS(100),
    [aux_sym_css_named_color_token84] = ACTIONS(98),
    [aux_sym_css_named_color_token85] = ACTIONS(98),
    [aux_sym_css_named_color_token86] = ACTIONS(98),
    [aux_sym_css_named_color_token87] = ACTIONS(98),
    [aux_sym_css_named_color_token88] = ACTIONS(98),
    [aux_sym_css_named_color_token89] = ACTIONS(98),
    [aux_sym_css_named_color_token90] = ACTIONS(98),
    [aux_sym_css_named_color_token91] = ACTIONS(98),
    [aux_sym_css_named_color_token92] = ACTIONS(98),
    [aux_sym_css_named_color_token93] = ACTIONS(98),
    [aux_sym_css_named_color_token94] = ACTIONS(98),
    [aux_sym_css_named_color_token95] = ACTIONS(98),
    [aux_sym_css_named_color_token96] = ACTIONS(98),
    [aux_sym_css_named_color_token97] = ACTIONS(98),
    [aux_sym_css_named_color_token98] = ACTIONS(98),
    [aux_sym_css_named_color_token99] = ACTIONS(98),
    [aux_sym_css_named_color_token100] = ACTIONS(98),
    [aux_sym_css_named_color_token101] = ACTIONS(98),
    [aux_sym_css_named_color_token102] = ACTIONS(98),
    [aux_sym_css_named_color_token103] = ACTIONS(98),
    [aux_sym_css_named_color_token104] = ACTIONS(100),
    [aux_sym_css_named_color_token105] = ACTIONS(98),
    [aux_sym_css_named_color_token106] = ACTIONS(100),
    [aux_sym_css_named_color_token107] = ACTIONS(98),
    [aux_sym_css_named_color_token108] = ACTIONS(98),
    [aux_sym_css_named_color_token109] = ACTIONS(98),
    [aux_sym_css_named_color_token110] = ACTIONS(98),
    [aux_sym_css_named_color_token111] = ACTIONS(98),
    [aux_sym_css_named_color_token112] = ACTIONS(98),
    [aux_sym_css_named_color_token113] = ACTIONS(98),
    [aux_sym_css_named_color_token114] = ACTIONS(98),
    [aux_sym_css_named_color_token115] = ACTIONS(98),
    [aux_sym_css_named_color_token116] = ACTIONS(98),
    [aux_sym_css_named_color_token117] = ACTIONS(98),
    [aux_sym_css_named_color_token118] = ACTIONS(98),
    [aux_sym_css_named_color_token119] = ACTIONS(98),
    [aux_sym_css_named_color_token120] = ACTIONS(98),
    [aux_sym_css_named_color_token121] = ACTIONS(98),
    [aux_sym_css_named_color_token122] = ACTIONS(98),
    [aux_sym_css_named_color_token123] = ACTIONS(98),
    [aux_sym_css_named_color_token124] = ACTIONS(98),
    [aux_sym_css_named_color_token125] = ACTIONS(98),
    [aux_sym_css_named_color_token126] = ACTIONS(98),
    [aux_sym_css_named_color_token127] = ACTIONS(98),
    [aux_sym_css_named_color_token128] = ACTIONS(98),
    [aux_sym_css_named_color_token129] = ACTIONS(98),
    [aux_sym_css_named_color_token130] = ACTIONS(98),
    [aux_sym_css_named_color_token131] = ACTIONS(98),
    [aux_sym_css_named_color_token132] = ACTIONS(98),
    [aux_sym_css_named_color_token133] = ACTIONS(98),
    [aux_sym_css_named_color_token134] = ACTIONS(98),
    [aux_sym_css_named_color_token135] = ACTIONS(98),
    [aux_sym_css_named_color_token136] = ACTIONS(98),
    [aux_sym_css_named_color_token137] = ACTIONS(98),
    [aux_sym_css_named_color_token138] = ACTIONS(98),
    [aux_sym_css_named_color_token139] = ACTIONS(98),
    [aux_sym_css_named_color_token140] = ACTIONS(98),
    [aux_sym_css_named_color_token141] = ACTIONS(98),
    [aux_sym_css_named_color_token142] = ACTIONS(98),
    [aux_sym_css_named_color_token143] = ACTIONS(98),
    [aux_sym_css_named_color_token144] = ACTIONS(98),
    [aux_sym_css_named_color_token145] = ACTIONS(100),
    [aux_sym_css_named_color_token146] = ACTIONS(98),
    [aux_sym_css_named_color_token147] = ACTIONS(100),
    [aux_sym_css_named_color_token148] = ACTIONS(98),
    [sym_css_keyword_transparent] = ACTIONS(98),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(104),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(102),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(104),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(102),
    [aux_sym_css_function_hwb_token1] = ACTIONS(102),
    [aux_sym_css_function_lab_token1] = ACTIONS(102),
    [aux_sym_css_function_oklab_token1] = ACTIONS(102),
    [aux_sym_css_function_lch_token1] = ACTIONS(102),
    [aux_sym_css_function_oklch_token1] = ACTIONS(102),
    [aux_sym_css_function_color_token1] = ACTIONS(102),
    [sym_css_hex_color_6_digits] = ACTIONS(104),
    [sym_css_hex_color_8_digits] = ACTIONS(102),
    [sym_css_hex_color_3_digits] = ACTIONS(104),
    [sym_css_hex_color_4_digits] = ACTIONS(104),
    [aux_sym_css_named_color_token1] = ACTIONS(102),
    [aux_sym_css_named_color_token2] = ACTIONS(102),
    [aux_sym_css_named_color_token3] = ACTIONS(104),
    [aux_sym_css_named_color_token4] = ACTIONS(102),
    [aux_sym_css_named_color_token5] = ACTIONS(102),
    [aux_sym_css_named_color_token6] = ACTIONS(102),
    [aux_sym_css_named_color_token7] = ACTIONS(102),
    [aux_sym_css_named_color_token8] = ACTIONS(102),
    [aux_sym_css_named_color_token9] = ACTIONS(102),
    [aux_sym_css_named_color_token10] = ACTIONS(104),
    [aux_sym_css_named_color_token11] = ACTIONS(102),
    [aux_sym_css_named_color_token12] = ACTIONS(102),
    [aux_sym_css_named_color_token13] = ACTIONS(102),
    [aux_sym_css_named_color_token14] = ACTIONS(102),
    [aux_sym_css_named_color_token15] = ACTIONS(102),
    [aux_sym_css_named_color_token16] = ACTIONS(102),
    [aux_sym_css_named_color_token17] = ACTIONS(102),
    [aux_sym_css_named_color_token18] = ACTIONS(102),
    [aux_sym_css_named_color_token19] = ACTIONS(102),
    [aux_sym_css_named_color_token20] = ACTIONS(102),
    [aux_sym_css_named_color_token21] = ACTIONS(102),
    [aux_sym_css_named_color_token22] = ACTIONS(102),
    [aux_sym_css_named_color_token23] = ACTIONS(102),
    [aux_sym_css_named_color_token24] = ACTIONS(102),
    [aux_sym_css_named_color_token25] = ACTIONS(102),
    [aux_sym_css_named_color_token26] = ACTIONS(102),
    [aux_sym_css_named_color_token27] = ACTIONS(102),
    [aux_sym_css_named_color_token28] = ACTIONS(102),
    [aux_sym_css_named_color_token29] = ACTIONS(102),
    [aux_sym_css_named_color_token30] = ACTIONS(102),
    [aux_sym_css_named_color_token31] = ACTIONS(102),
    [aux_sym_css_named_color_token32] = ACTIONS(102),
    [aux_sym_css_named_color_token33] = ACTIONS(102),
    [aux_sym_css_named_color_token34] = ACTIONS(102),
    [aux_sym_css_named_color_token35] = ACTIONS(102),
    [aux_sym_css_named_color_token36] = ACTIONS(102),
    [aux_sym_css_named_color_token37] = ACTIONS(102),
    [aux_sym_css_named_color_token38] = ACTIONS(102),
    [aux_sym_css_named_color_token39] = ACTIONS(102),
    [aux_sym_css_named_color_token40] = ACTIONS(102),
    [aux_sym_css_named_color_token41] = ACTIONS(102),
    [aux_sym_css_named_color_token42] = ACTIONS(102),
    [aux_sym_css_named_color_token43] = ACTIONS(102),
    [aux_sym_css_named_color_token44] = ACTIONS(102),
    [aux_sym_css_named_color_token45] = ACTIONS(102),
    [aux_sym_css_named_color_token46] = ACTIONS(102),
    [aux_sym_css_named_color_token47] = ACTIONS(102),
    [aux_sym_css_named_color_token48] = ACTIONS(102),
    [aux_sym_css_named_color_token49] = ACTIONS(102),
    [aux_sym_css_named_color_token50] = ACTIONS(102),
    [aux_sym_css_named_color_token51] = ACTIONS(102),
    [aux_sym_css_named_color_token52] = ACTIONS(104),
    [aux_sym_css_named_color_token53] = ACTIONS(102),
    [aux_sym_css_named_color_token54] = ACTIONS(102),
    [aux_sym_css_named_color_token55] = ACTIONS(104),
    [aux_sym_css_named_color_token56] = ACTIONS(102),
    [aux_sym_css_named_color_token57] = ACTIONS(102),
    [aux_sym_css_named_color_token58] = ACTIONS(102),
    [aux_sym_css_named_color_token59] = ACTIONS(102),
    [aux_sym_css_named_color_token60] = ACTIONS(102),
    [aux_sym_css_named_color_token61] = ACTIONS(102),
    [aux_sym_css_named_color_token62] = ACTIONS(102),
    [aux_sym_css_named_color_token63] = ACTIONS(102),
    [aux_sym_css_named_color_token64] = ACTIONS(104),
    [aux_sym_css_named_color_token65] = ACTIONS(102),
    [aux_sym_css_named_color_token66] = ACTIONS(102),
    [aux_sym_css_named_color_token67] = ACTIONS(102),
    [aux_sym_css_named_color_token68] = ACTIONS(102),
    [aux_sym_css_named_color_token69] = ACTIONS(102),
    [aux_sym_css_named_color_token70] = ACTIONS(102),
    [aux_sym_css_named_color_token71] = ACTIONS(102),
    [aux_sym_css_named_color_token72] = ACTIONS(102),
    [aux_sym_css_named_color_token73] = ACTIONS(102),
    [aux_sym_css_named_color_token74] = ACTIONS(102),
    [aux_sym_css_named_color_token75] = ACTIONS(102),
    [aux_sym_css_named_color_token76] = ACTIONS(102),
    [aux_sym_css_named_color_token77] = ACTIONS(102),
    [aux_sym_css_named_color_token78] = ACTIONS(102),
    [aux_sym_css_named_color_token79] = ACTIONS(102),
    [aux_sym_css_named_color_token80] = ACTIONS(102),
    [aux_sym_css_named_color_token81] = ACTIONS(102),
    [aux_sym_css_named_color_token82] = ACTIONS(102),
    [aux_sym_css_named_color_token83] = ACTIONS(104),
    [aux_sym_css_named_color_token84] = ACTIONS(102),
    [aux_sym_css_named_color_token85] = ACTIONS(102),
    [aux_sym_css_named_color_token86] = ACTIONS(102),
    [aux_sym_css_named_color_token87] = ACTIONS(102),
    [aux_sym_css_named_color_token88] = ACTIONS(102),
    [aux_sym_css_named_color_token89] = ACTIONS(102),
    [aux_sym_css_named_color_token90] = ACTIONS(102),
    [aux_sym_css_named_color_token91] = ACTIONS(102),
    [aux_sym_css_named_color_token92] = ACTIONS(102),
    [aux_sym_css_named_color_token93] = ACTIONS(102),
    [aux_sym_css_named_color_token94] = ACTIONS(102),
    [aux_sym_css_named_color_token95] = ACTIONS(102),
    [aux_sym_css_named_color_token96] = ACTIONS(102),
    [aux_sym_css_named_color_token97] = ACTIONS(102),
    [aux_sym_css_named_color_token98] = ACTIONS(102),
    [aux_sym_css_named_color_token99] = ACTIONS(102),
    [aux_sym_css_named_color_token100] = ACTIONS(102),
    [aux_sym_css_named_color_token101] = ACTIONS(102),
    [aux_sym_css_named_color_token102] = ACTIONS(102),
    [aux_sym_css_named_color_token103] = ACTIONS(102),
    [aux_sym_css_named_color_token104] = ACTIONS(104),
    [aux_sym_css_named_color_token105] = ACTIONS(102),
    [aux_sym_css_named_color_token106] = ACTIONS(104),
    [aux_sym_css_named_color_token107] = ACTIONS(102),
    [aux_sym_css_named_color_token108] = ACTIONS(102),
    [aux_sym_css_named_color_token109] = ACTIONS(102),
    [aux_sym_css_named_color_token110] = ACTIONS(102),
    [aux_sym_css_named_color_token111] = ACTIONS(102),
    [aux_sym_css_named_color_token112] = ACTIONS(102),
    [aux_sym_css_named_color_token113] = ACTIONS(102),
    [aux_sym_css_named_color_token114] = ACTIONS(102),
    [aux_sym_css_named_color_token115] = ACTIONS(102),
    [aux_sym_css_named_color_token116] = ACTIONS(102),
    [aux_sym_css_named_color_token117] = ACTIONS(102),
    [aux_sym_css_named_color_token118] = ACTIONS(102),
    [aux_sym_css_named_color_token119] = ACTIONS(102),
    [aux_sym_css_named_color_token120] = ACTIONS(102),
    [aux_sym_css_named_color_token121] = ACTIONS(102),
    [aux_sym_css_named_color_token122] = ACTIONS(102),
    [aux_sym_css_named_color_token123] = ACTIONS(102),
    [aux_sym_css_named_color_token124] = ACTIONS(102),
    [aux_sym_css_named_color_token125] = ACTIONS(102),
    [aux_sym_css_named_color_token126] = ACTIONS(102),
    [aux_sym_css_named_color_token127] = ACTIONS(102),
    [aux_sym_css_named_color_token128] = ACTIONS(102),
    [aux_sym_css_named_color_token129] = ACTIONS(102),
    [aux_sym_css_named_color_token130] = ACTIONS(102),
    [aux_sym_css_named_color_token131] = ACTIONS(102),
    [aux_sym_css_named_color_token132] = ACTIONS(102),
    [aux_sym_css_named_color_token133] = ACTIONS(102),
    [aux_sym_css_named_color_token134] = ACTIONS(102),
    [aux_sym_css_named_color_token135] = ACTIONS(102),
    [aux_sym_css_named_color_token136] = ACTIONS(102),
    [aux_sym_css_named_color_token137] = ACTIONS(102),
    [aux_sym_css_named_color_token138] = ACTIONS(102),
    [aux_sym_css_named_color_token139] = ACTIONS(102),
    [aux_sym_css_named_color_token140] = ACTIONS(102),
    [aux_sym_css_named_color_token141] = ACTIONS(102),
    [aux_sym_css_named_color_token142] = ACTIONS(102),
    [aux_sym_css_named_color_token143] = ACTIONS(102),
    [aux_sym_css_named_color_token144] = ACTIONS(102),
    [aux_sym_css_named_color_token145] = ACTIONS(104),
    [aux_sym_css_named_color_token146] = ACTIONS(102),
    [aux_sym_css_named_color_token147] = ACTIONS(104),
    [aux_sym_css_named_color_token148] = ACTIONS(102),
    [sym_css_keyword_transparent] = ACTIONS(102),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(92),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(90),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(92),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(90),
    [aux_sym_css_function_hwb_token1] = ACTIONS(90),
    [aux_sym_css_function_lab_token1] = ACTIONS(90),
    [aux_sym_css_function_oklab_token1] = ACTIONS(90),
    [aux_sym_css_function_lch_token1] = ACTIONS(90),
    [aux_sym_css_function_oklch_token1] = ACTIONS(90),
    [aux_sym_css_function_color_token1] = ACTIONS(90),
    [sym_css_hex_color_6_digits] = ACTIONS(92),
    [sym_css_hex_color_8_digits] = ACTIONS(90),
    [sym_css_hex_color_3_digits] = ACTIONS(92),
    [sym_css_hex_color_4_digits] = ACTIONS(92),
    [aux_sym_css_named_color_token1] = ACTIONS(90),
    [aux_sym_css_named_color_token2] = ACTIONS(90),
    [aux_sym_css_named_color_token3] = ACTIONS(92),
    [aux_sym_css_named_color_token4] = ACTIONS(90),
    [aux_sym_css_named_color_token5] = ACTIONS(90),
    [aux_sym_css_named_color_token6] = ACTIONS(90),
    [aux_sym_css_named_color_token7] = ACTIONS(90),
    [aux_sym_css_named_color_token8] = ACTIONS(90),
    [aux_sym_css_named_color_token9] = ACTIONS(90),
    [aux_sym_css_named_color_token10] = ACTIONS(92),
    [aux_sym_css_named_color_token11] = ACTIONS(90),
    [aux_sym_css_named_color_token12] = ACTIONS(90),
    [aux_sym_css_named_color_token13] = ACTIONS(90),
    [aux_sym_css_named_color_token14] = ACTIONS(90),
    [aux_sym_css_named_color_token15] = ACTIONS(90),
    [aux_sym_css_named_color_token16] = ACTIONS(90),
    [aux_sym_css_named_color_token17] = ACTIONS(90),
    [aux_sym_css_named_color_token18] = ACTIONS(90),
    [aux_sym_css_named_color_token19] = ACTIONS(90),
    [aux_sym_css_named_color_token20] = ACTIONS(90),
    [aux_sym_css_named_color_token21] = ACTIONS(90),
    [aux_sym_css_named_color_token22] = ACTIONS(90),
    [aux_sym_css_named_color_token23] = ACTIONS(90),
    [aux_sym_css_named_color_token24] = ACTIONS(90),
    [aux_sym_css_named_color_token25] = ACTIONS(90),
    [aux_sym_css_named_color_token26] = ACTIONS(90),
    [aux_sym_css_named_color_token27] = ACTIONS(90),
    [aux_sym_css_named_color_token28] = ACTIONS(90),
    [aux_sym_css_named_color_token29] = ACTIONS(90),
    [aux_sym_css_named_color_token30] = ACTIONS(90),
    [aux_sym_css_named_color_token31] = ACTIONS(90),
    [aux_sym_css_named_color_token32] = ACTIONS(90),
    [aux_sym_css_named_color_token33] = ACTIONS(90),
    [aux_sym_css_named_color_token34] = ACTIONS(90),
    [aux_sym_css_named_color_token35] = ACTIONS(90),
    [aux_sym_css_named_color_token36] = ACTIONS(90),
    [aux_sym_css_named_color_token37] = ACTIONS(90),
    [aux_sym_css_named_color_token38] = ACTIONS(90),
    [aux_sym_css_named_color_token39] = ACTIONS(90),
    [aux_sym_css_named_color_token40] = ACTIONS(90),
    [aux_sym_css_named_color_token41] = ACTIONS(90),
    [aux_sym_css_named_color_token42] = ACTIONS(90),
    [aux_sym_css_named_color_token43] = ACTIONS(90),
    [aux_sym_css_named_color_token44] = ACTIONS(90),
    [aux_sym_css_named_color_token45] = ACTIONS(90),
    [aux_sym_css_named_color_token46] = ACTIONS(90),
    [aux_sym_css_named_color_token47] = ACTIONS(90),
    [aux_sym_css_named_color_token48] = ACTIONS(90),
    [aux_sym_css_named_color_token49] = ACTIONS(90),
    [aux_sym_css_named_color_token50] = ACTIONS(90),
    [aux_sym_css_named_color_token51] = ACTIONS(90),
    [aux_sym_css_named_color_token52] = ACTIONS(92),
    [aux_sym_css_named_color_token53] = ACTIONS(90),
    [aux_sym_css_named_color_token54] = ACTIONS(90),
    [aux_sym_css_named_color_token55] = ACTIONS(92),
    [aux_sym_css_named_color_token56] = ACTIONS(90),
    [aux_sym_css_named_color_token57] = ACTIONS(90),
    [aux_sym_css_named_color_token58] = ACTIONS(90),
    [aux_sym_css_named_color_token59] = ACTIONS(90),
    [aux_sym_css_named_color_token60] = ACTIONS(90),
    [aux_sym_css_named_color_token61] = ACTIONS(90),
    [aux_sym_css_named_color_token62] = ACTIONS(90),
    [aux_sym_css_named_color_token63] = ACTIONS(90),
    [aux_sym_css_named_color_token64] = ACTIONS(92),
    [aux_sym_css_named_color_token65] = ACTIONS(90),
    [aux_sym_css_named_color_token66] = ACTIONS(90),
    [aux_sym_css_named_color_token67] = ACTIONS(90),
    [aux_sym_css_named_color_token68] = ACTIONS(90),
    [aux_sym_css_named_color_token69] = ACTIONS(90),
    [aux_sym_css_named_color_token70] = ACTIONS(90),
    [aux_sym_css_named_color_token71] = ACTIONS(90),
    [aux_sym_css_named_color_token72] = ACTIONS(90),
    [aux_sym_css_named_color_token73] = ACTIONS(90),
    [aux_sym_css_named_color_token74] = ACTIONS(90),
    [aux_sym_css_named_color_token75] = ACTIONS(90),
    [aux_sym_css_named_color_token76] = ACTIONS(90),
    [aux_sym_css_named_color_token77] = ACTIONS(90),
    [aux_sym_css_named_color_token78] = ACTIONS(90),
    [aux_sym_css_named_color_token79] = ACTIONS(90),
    [aux_sym_css_named_color_token80] = ACTIONS(90),
    [aux_sym_css_named_color_token81] = ACTIONS(90),
    [aux_sym_css_named_color_token82] = ACTIONS(90),
    [aux_sym_css_named_color_token83] = ACTIONS(92),
    [aux_sym_css_named_color_token84] = ACTIONS(90),
    [aux_sym_css_named_color_token85] = ACTIONS(90),
    [aux_sym_css_named_color_token86] = ACTIONS(90),
    [aux_sym_css_named_color_token87] = ACTIONS(90),
    [aux_sym_css_named_color_token88] = ACTIONS(90),
    [aux_sym_css_named_color_token89] = ACTIONS(90),
    [aux_sym_css_named_color_token90] = ACTIONS(90),
    [aux_sym_css_named_color_token91] = ACTIONS(90),
    [aux_sym_css_named_color_token92] = ACTIONS(90),
    [aux_sym_css_named_color_token93] = ACTIONS(90),
    [aux_sym_css_named_color_token94] = ACTIONS(90),
    [aux_sym_css_named_color_token95] = ACTIONS(90),
    [aux_sym_css_named_color_token96] = ACTIONS(90),
    [aux_sym_css_named_color_token97] = ACTIONS(90),
    [aux_sym_css_named_color_token98] = ACTIONS(90),
    [aux_sym_css_named_color_token99] = ACTIONS(90),
    [aux_sym_css_named_color_token100] = ACTIONS(90),
    [aux_sym_css_named_color_token101] = ACTIONS(90),
    [aux_sym_css_named_color_token102] = ACTIONS(90),
    [aux_sym_css_named_color_token103] = ACTIONS(90),
    [aux_sym_css_named_color_token104] = ACTIONS(92),
    [aux_sym_css_named_color_token105] = ACTIONS(90),
    [aux_sym_css_named_color_token106] = ACTIONS(92),
    [aux_sym_css_named_color_token107] = ACTIONS(90),
    [aux_sym_css_named_color_token108] = ACTIONS(90),
    [aux_sym_css_named_color_token109] = ACTIONS(90),
    [aux_sym_css_named_color_token110] = ACTIONS(90),
    [aux_sym_css_named_color_token111] = ACTIONS(90),
    [aux_sym_css_named_color_token112] = ACTIONS(90),
    [aux_sym_css_named_color_token113] = ACTIONS(90),
    [aux_sym_css_named_color_token114] = ACTIONS(90),
    [aux_sym_css_named_color_token115] = ACTIONS(90),
    [aux_sym_css_named_color_token116] = ACTIONS(90),
    [aux_sym_css_named_color_token117] = ACTIONS(90),
    [aux_sym_css_named_color_token118] = ACTIONS(90),
    [aux_sym_css_named_color_token119] = ACTIONS(90),
    [aux_sym_css_named_color_token120] = ACTIONS(90),
    [aux_sym_css_named_color_token121] = ACTIONS(90),
    [aux_sym_css_named_color_token122] = ACTIONS(90),
    [aux_sym_css_named_color_token123] = ACTIONS(90),
    [aux_sym_css_named_color_token124] = ACTIONS(90),
    [aux_sym_css_named_color_token125] = ACTIONS(90),
    [aux_sym_css_named_color_token126] = ACTIONS(90),
    [aux_sym_css_named_color_token127] = ACTIONS(90),
    [aux_sym_css_named_color_token128] = ACTIONS(90),
    [aux_sym_css_named_color_token129] = ACTIONS(90),
    [aux_sym_css_named_color_token130] = ACTIONS(90),
    [aux_sym_css_named_color_token131] = ACTIONS(90),
    [aux_sym_css_named_color_token132] = ACTIONS(90),
    [aux_sym_css_named_color_token133] = ACTIONS(90),
    [aux_sym_css_named_color_token134] = ACTIONS(90),
    [aux_sym_css_named_color_token135] = ACTIONS(90),
    [aux_sym_css_named_color_token136] = ACTIONS(90),
    [aux_sym_css_named_color_token137] = ACTIONS(90),
    [aux_sym_css_named_color_token138] = ACTIONS(90),
    [aux_sym_css_named_color_token139] = ACTIONS(90),
    [aux_sym_css_named_color_token140] = ACTIONS(90),
    [aux_sym_css_named_color_token141] = ACTIONS(90),
    [aux_sym_css_named_color_token142] = ACTIONS(90),
    [aux_sym_css_named_color_token143] = ACTIONS(90),
    [aux_sym_css_named_color_token144] = ACTIONS(90),
    [aux_sym_css_named_color_token145] = ACTIONS(92),
    [aux_sym_css_named_color_token146] = ACTIONS(90),
    [aux_sym_css_named_color_token147] = ACTIONS(92),
    [aux_sym_css_named_color_token148] = ACTIONS(90),
    [sym_css_keyword_transparent] = ACTIONS(90),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(108),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(106),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(108),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(106),
    [aux_sym_css_function_hwb_token1] = ACTIONS(106),
    [aux_sym_css_function_lab_token1] = ACTIONS(106),
    [aux_sym_css_function_oklab_token1] = ACTIONS(106),
    [aux_sym_css_function_lch_token1] = ACTIONS(106),
    [aux_sym_css_function_oklch_token1] = ACTIONS(106),
    [aux_sym_css_function_color_token1] = ACTIONS(106),
    [sym_css_hex_color_6_digits] = ACTIONS(108),
    [sym_css_hex_color_8_digits] = ACTIONS(106),
    [sym_css_hex_color_3_digits] = ACTIONS(108),
    [sym_css_hex_color_4_digits] = ACTIONS(108),
    [aux_sym_css_named_color_token1] = ACTIONS(106),
    [aux_sym_css_named_color_token2] = ACTIONS(106),
    [aux_sym_css_named_color_token3] = ACTIONS(108),
    [aux_sym_css_named_color_token4] = ACTIONS(106),
    [aux_sym_css_named_color_token5] = ACTIONS(106),
    [aux_sym_css_named_color_token6] = ACTIONS(106),
    [aux_sym_css_named_color_token7] = ACTIONS(106),
    [aux_sym_css_named_color_token8] = ACTIONS(106),
    [aux_sym_css_named_color_token9] = ACTIONS(106),
    [aux_sym_css_named_color_token10] = ACTIONS(108),
    [aux_sym_css_named_color_token11] = ACTIONS(106),
    [aux_sym_css_named_color_token12] = ACTIONS(106),
    [aux_sym_css_named_color_token13] = ACTIONS(106),
    [aux_sym_css_named_color_token14] = ACTIONS(106),
    [aux_sym_css_named_color_token15] = ACTIONS(106),
    [aux_sym_css_named_color_token16] = ACTIONS(106),
    [aux_sym_css_named_color_token17] = ACTIONS(106),
    [aux_sym_css_named_color_token18] = ACTIONS(106),
    [aux_sym_css_named_color_token19] = ACTIONS(106),
    [aux_sym_css_named_color_token20] = ACTIONS(106),
    [aux_sym_css_named_color_token21] = ACTIONS(106),
    [aux_sym_css_named_color_token22] = ACTIONS(106),
    [aux_sym_css_named_color_token23] = ACTIONS(106),
    [aux_sym_css_named_color_token24] = ACTIONS(106),
    [aux_sym_css_named_color_token25] = ACTIONS(106),
    [aux_sym_css_named_color_token26] = ACTIONS(106),
    [aux_sym_css_named_color_token27] = ACTIONS(106),
    [aux_sym_css_named_color_token28] = ACTIONS(106),
    [aux_sym_css_named_color_token29] = ACTIONS(106),
    [aux_sym_css_named_color_token30] = ACTIONS(106),
    [aux_sym_css_named_color_token31] = ACTIONS(106),
    [aux_sym_css_named_color_token32] = ACTIONS(106),
    [aux_sym_css_named_color_token33] = ACTIONS(106),
    [aux_sym_css_named_color_token34] = ACTIONS(106),
    [aux_sym_css_named_color_token35] = ACTIONS(106),
    [aux_sym_css_named_color_token36] = ACTIONS(106),
    [aux_sym_css_named_color_token37] = ACTIONS(106),
    [aux_sym_css_named_color_token38] = ACTIONS(106),
    [aux_sym_css_named_color_token39] = ACTIONS(106),
    [aux_sym_css_named_color_token40] = ACTIONS(106),
    [aux_sym_css_named_color_token41] = ACTIONS(106),
    [aux_sym_css_named_color_token42] = ACTIONS(106),
    [aux_sym_css_named_color_token43] = ACTIONS(106),
    [aux_sym_css_named_color_token44] = ACTIONS(106),
    [aux_sym_css_named_color_token45] = ACTIONS(106),
    [aux_sym_css_named_color_token46] = ACTIONS(106),
    [aux_sym_css_named_color_token47] = ACTIONS(106),
    [aux_sym_css_named_color_token48] = ACTIONS(106),
    [aux_sym_css_named_color_token49] = ACTIONS(106),
    [aux_sym_css_named_color_token50] = ACTIONS(106),
    [aux_sym_css_named_color_token51] = ACTIONS(106),
    [aux_sym_css_named_color_token52] = ACTIONS(108),
    [aux_sym_css_named_color_token53] = ACTIONS(106),
    [aux_sym_css_named_color_token54] = ACTIONS(106),
    [aux_sym_css_named_color_token55] = ACTIONS(108),
    [aux_sym_css_named_color_token56] = ACTIONS(106),
    [aux_sym_css_named_color_token57] = ACTIONS(106),
    [aux_sym_css_named_color_token58] = ACTIONS(106),
    [aux_sym_css_named_color_token59] = ACTIONS(106),
    [aux_sym_css_named_color_token60] = ACTIONS(106),
    [aux_sym_css_named_color_token61] = ACTIONS(106),
    [aux_sym_css_named_color_token62] = ACTIONS(106),
    [aux_sym_css_named_color_token63] = ACTIONS(106),
    [aux_sym_css_named_color_token64] = ACTIONS(108),
    [aux_sym_css_named_color_token65] = ACTIONS(106),
    [aux_sym_css_named_color_token66] = ACTIONS(106),
    [aux_sym_css_named_color_token67] = ACTIONS(106),
    [aux_sym_css_named_color_token68] = ACTIONS(106),
    [aux_sym_css_named_color_token69] = ACTIONS(106),
    [aux_sym_css_named_color_token70] = ACTIONS(106),
    [aux_sym_css_named_color_token71] = ACTIONS(106),
    [aux_sym_css_named_color_token72] = ACTIONS(106),
    [aux_sym_css_named_color_token73] = ACTIONS(106),
    [aux_sym_css_named_color_token74] = ACTIONS(106),
    [aux_sym_css_named_color_token75] = ACTIONS(106),
    [aux_sym_css_named_color_token76] = ACTIONS(106),
    [aux_sym_css_named_color_token77] = ACTIONS(106),
    [aux_sym_css_named_color_token78] = ACTIONS(106),
    [aux_sym_css_named_color_token79] = ACTIONS(106),
    [aux_sym_css_named_color_token80] = ACTIONS(106),
    [aux_sym_css_named_color_token81] = ACTIONS(106),
    [aux_sym_css_named_color_token82] = ACTIONS(106),
    [aux_sym_css_named_color_token83] = ACTIONS(108),
    [aux_sym_css_named_color_token84] = ACTIONS(106),
    [aux_sym_css_named_color_token85] = ACTIONS(106),
    [aux_sym_css_named_color_token86] = ACTIONS(106),
    [aux_sym_css_named_color_token87] = ACTIONS(106),
    [aux_sym_css_named_color_token88] = ACTIONS(106),
    [aux_sym_css_named_color_token89] = ACTIONS(106),
    [aux_sym_css_named_color_token90] = ACTIONS(106),
    [aux_sym_css_named_color_token91] = ACTIONS(106),
    [aux_sym_css_named_color_token92] = ACTIONS(106),
    [aux_sym_css_named_color_token93] = ACTIONS(106),
    [aux_sym_css_named_color_token94] = ACTIONS(106),
    [aux_sym_css_named_color_token95] = ACTIONS(106),
    [aux_sym_css_named_color_token96] = ACTIONS(106),
    [aux_sym_css_named_color_token97] = ACTIONS(106),
    [aux_sym_css_named_color_token98] = ACTIONS(106),
    [aux_sym_css_named_color_token99] = ACTIONS(106),
    [aux_sym_css_named_color_token100] = ACTIONS(106),
    [aux_sym_css_named_color_token101] = ACTIONS(106),
    [aux_sym_css_named_color_token102] = ACTIONS(106),
    [aux_sym_css_named_color_token103] = ACTIONS(106),
    [aux_sym_css_named_color_token104] = ACTIONS(108),
    [aux_sym_css_named_color_token105] = ACTIONS(106),
    [aux_sym_css_named_color_token106] = ACTIONS(108),
    [aux_sym_css_named_color_token107] = ACTIONS(106),
    [aux_sym_css_named_color_token108] = ACTIONS(106),
    [aux_sym_css_named_color_token109] = ACTIONS(106),
    [aux_sym_css_named_color_token110] = ACTIONS(106),
    [aux_sym_css_named_color_token111] = ACTIONS(106),
    [aux_sym_css_named_color_token112] = ACTIONS(106),
    [aux_sym_css_named_color_token113] = ACTIONS(106),
    [aux_sym_css_named_color_token114] = ACTIONS(106),
    [aux_sym_css_named_color_token115] = ACTIONS(106),
    [aux_sym_css_named_color_token116] = ACTIONS(106),
    [aux_sym_css_named_color_token117] = ACTIONS(106),
    [aux_sym_css_named_color_token118] = ACTIONS(106),
    [aux_sym_css_named_color_token119] = ACTIONS(106),
    [aux_sym_css_named_color_token120] = ACTIONS(106),
    [aux_sym_css_named_color_token121] = ACTIONS(106),
    [aux_sym_css_named_color_token122] = ACTIONS(106),
    [aux_sym_css_named_color_token123] = ACTIONS(106),
    [aux_sym_css_named_color_token124] = ACTIONS(106),
    [aux_sym_css_named_color_token125] = ACTIONS(106),
    [aux_sym_css_named_color_token126] = ACTIONS(106),
    [aux_sym_css_named_color_token127] = ACTIONS(106),
    [aux_sym_css_named_color_token128] = ACTIONS(106),
    [aux_sym_css_named_color_token129] = ACTIONS(106),
    [aux_sym_css_named_color_token130] = ACTIONS(106),
    [aux_sym_css_named_color_token131] = ACTIONS(106),
    [aux_sym_css_named_color_token132] = ACTIONS(106),
    [aux_sym_css_named_color_token133] = ACTIONS(106),
    [aux_sym_css_named_color_token134] = ACTIONS(106),
    [aux_sym_css_named_color_token135] = ACTIONS(106),
    [aux_sym_css_named_color_token136] = ACTIONS(106),
    [aux_sym_css_named_color_token137] = ACTIONS(106),
    [aux_sym_css_named_color_token138] = ACTIONS(106),
    [aux_sym_css_named_color_token139] = ACTIONS(106),
    [aux_sym_css_named_color_token140] = ACTIONS(106),
    [aux_sym_css_named_color_token141] = ACTIONS(106),
    [aux_sym_css_named_color_token142] = ACTIONS(106),
    [aux_sym_css_named_color_token143] = ACTIONS(106),
    [aux_sym_css_named_color_token144] = ACTIONS(106),
    [aux_sym_css_named_color_token145] = ACTIONS(108),
    [aux_sym_css_named_color_token146] = ACTIONS(106),
    [aux_sym_css_named_color_token147] = ACTIONS(108),
    [aux_sym_css_named_color_token148] = ACTIONS(106),
    [sym_css_keyword_transparent] = ACTIONS(106),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(104),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(102),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(104),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(102),
    [aux_sym_css_function_hwb_token1] = ACTIONS(102),
    [aux_sym_css_function_lab_token1] = ACTIONS(102),
    [aux_sym_css_function_oklab_token1] = ACTIONS(102),
    [aux_sym_css_function_lch_token1] = ACTIONS(102),
    [aux_sym_css_function_oklch_token1] = ACTIONS(102),
    [aux_sym_css_function_color_token1] = ACTIONS(102),
    [sym_css_hex_color_6_digits] = ACTIONS(104),
    [sym_css_hex_color_8_digits] = ACTIONS(102),
    [sym_css_hex_color_3_digits] = ACTIONS(104),
    [sym_css_hex_color_4_digits] = ACTIONS(104),
    [aux_sym_css_named_color_token1] = ACTIONS(102),
    [aux_sym_css_named_color_token2] = ACTIONS(102),
    [aux_sym_css_named_color_token3] = ACTIONS(104),
    [aux_sym_css_named_color_token4] = ACTIONS(102),
    [aux_sym_css_named_color_token5] = ACTIONS(102),
    [aux_sym_css_named_color_token6] = ACTIONS(102),
    [aux_sym_css_named_color_token7] = ACTIONS(102),
    [aux_sym_css_named_color_token8] = ACTIONS(102),
    [aux_sym_css_named_color_token9] = ACTIONS(102),
    [aux_sym_css_named_color_token10] = ACTIONS(104),
    [aux_sym_css_named_color_token11] = ACTIONS(102),
    [aux_sym_css_named_color_token12] = ACTIONS(102),
    [aux_sym_css_named_color_token13] = ACTIONS(102),
    [aux_sym_css_named_color_token14] = ACTIONS(102),
    [aux_sym_css_named_color_token15] = ACTIONS(102),
    [aux_sym_css_named_color_token16] = ACTIONS(102),
    [aux_sym_css_named_color_token17] = ACTIONS(102),
    [aux_sym_css_named_color_token18] = ACTIONS(102),
    [aux_sym_css_named_color_token19] = ACTIONS(102),
    [aux_sym_css_named_color_token20] = ACTIONS(102),
    [aux_sym_css_named_color_token21] = ACTIONS(102),
    [aux_sym_css_named_color_token22] = ACTIONS(102),
    [aux_sym_css_named_color_token23] = ACTIONS(102),
    [aux_sym_css_named_color_token24] = ACTIONS(102),
    [aux_sym_css_named_color_token25] = ACTIONS(102),
    [aux_sym_css_named_color_token26] = ACTIONS(102),
    [aux_sym_css_named_color_token27] = ACTIONS(102),
    [aux_sym_css_named_color_token28] = ACTIONS(102),
    [aux_sym_css_named_color_token29] = ACTIONS(102),
    [aux_sym_css_named_color_token30] = ACTIONS(102),
    [aux_sym_css_named_color_token31] = ACTIONS(102),
    [aux_sym_css_named_color_token32] = ACTIONS(102),
    [aux_sym_css_named_color_token33] = ACTIONS(102),
    [aux_sym_css_named_color_token34] = ACTIONS(102),
    [aux_sym_css_named_color_token35] = ACTIONS(102),
    [aux_sym_css_named_color_token36] = ACTIONS(102),
    [aux_sym_css_named_color_token37] = ACTIONS(102),
    [aux_sym_css_named_color_token38] = ACTIONS(102),
    [aux_sym_css_named_color_token39] = ACTIONS(102),
    [aux_sym_css_named_color_token40] = ACTIONS(102),
    [aux_sym_css_named_color_token41] = ACTIONS(102),
    [aux_sym_css_named_color_token42] = ACTIONS(102),
    [aux_sym_css_named_color_token43] = ACTIONS(102),
    [aux_sym_css_named_color_token44] = ACTIONS(102),
    [aux_sym_css_named_color_token45] = ACTIONS(102),
    [aux_sym_css_named_color_token46] = ACTIONS(102),
    [aux_sym_css_named_color_token47] = ACTIONS(102),
    [aux_sym_css_named_color_token48] = ACTIONS(102),
    [aux_sym_css_named_color_token49] = ACTIONS(102),
    [aux_sym_css_named_color_token50] = ACTIONS(102),
    [aux_sym_css_named_color_token51] = ACTIONS(102),
    [aux_sym_css_named_color_token52] = ACTIONS(104),
    [aux_sym_css_named_color_token53] = ACTIONS(102),
    [aux_sym_css_named_color_token54] = ACTIONS(102),
    [aux_sym_css_named_color_token55] = ACTIONS(104),
    [aux_sym_css_named_color_token56] = ACTIONS(102),
    [aux_sym_css_named_color_token57] = ACTIONS(102),
    [aux_sym_css_named_color_token58] = ACTIONS(102),
    [aux_sym_css_named_color_token59] = ACTIONS(102),
    [aux_sym_css_named_color_token60] = ACTIONS(102),
    [aux_sym_css_named_color_token61] = ACTIONS(102),
    [aux_sym_css_named_color_token62] = ACTIONS(102),
    [aux_sym_css_named_color_token63] = ACTIONS(102),
    [aux_sym_css_named_color_token64] = ACTIONS(104),
    [aux_sym_css_named_color_token65] = ACTIONS(102),
    [aux_sym_css_named_color_token66] = ACTIONS(102),
    [aux_sym_css_named_color_token67] = ACTIONS(102),
    [aux_sym_css_named_color_token68] = ACTIONS(102),
    [aux_sym_css_named_color_token69] = ACTIONS(102),
    [aux_sym_css_named_color_token70] = ACTIONS(102),
    [aux_sym_css_named_color_token71] = ACTIONS(102),
    [aux_sym_css_named_color_token72] = ACTIONS(102),
    [aux_sym_css_named_color_token73] = ACTIONS(102),
    [aux_sym_css_named_color_token74] = ACTIONS(102),
    [aux_sym_css_named_color_token75] = ACTIONS(102),
    [aux_sym_css_named_color_token76] = ACTIONS(102),
    [aux_sym_css_named_color_token77] = ACTIONS(102),
    [aux_sym_css_named_color_token78] = ACTIONS(102),
    [aux_sym_css_named_color_token79] = ACTIONS(102),
    [aux_sym_css_named_color_token80] = ACTIONS(102),
    [aux_sym_css_named_color_token81] = ACTIONS(102),
    [aux_sym_css_named_color_token82] = ACTIONS(102),
    [aux_sym_css_named_color_token83] = ACTIONS(104),
    [aux_sym_css_named_color_token84] = ACTIONS(102),
    [aux_sym_css_named_color_token85] = ACTIONS(102),
    [aux_sym_css_named_color_token86] = ACTIONS(102),
    [aux_sym_css_named_color_token87] = ACTIONS(102),
    [aux_sym_css_named_color_token88] = ACTIONS(102),
    [aux_sym_css_named_color_token89] = ACTIONS(102),
    [aux_sym_css_named_color_token90] = ACTIONS(102),
    [aux_sym_css_named_color_token91] = ACTIONS(102),
    [aux_sym_css_named_color_token92] = ACTIONS(102),
    [aux_sym_css_named_color_token93] = ACTIONS(102),
    [aux_sym_css_named_color_token94] = ACTIONS(102),
    [aux_sym_css_named_color_token95] = ACTIONS(102),
    [aux_sym_css_named_color_token96] = ACTIONS(102),
    [aux_sym_css_named_color_token97] = ACTIONS(102),
    [aux_sym_css_named_color_token98] = ACTIONS(102),
    [aux_sym_css_named_color_token99] = ACTIONS(102),
    [aux_sym_css_named_color_token100] = ACTIONS(102),
    [aux_sym_css_named_color_token101] = ACTIONS(102),
    [aux_sym_css_named_color_token102] = ACTIONS(102),
    [aux_sym_css_named_color_token103] = ACTIONS(102),
    [aux_sym_css_named_color_token104] = ACTIONS(104),
    [aux_sym_css_named_color_token105] = ACTIONS(102),
    [aux_sym_css_named_color_token106] = ACTIONS(104),
    [aux_sym_css_named_color_token107] = ACTIONS(102),
    [aux_sym_css_named_color_token108] = ACTIONS(102),
    [aux_sym_css_named_color_token109] = ACTIONS(102),
    [aux_sym_css_named_color_token110] = ACTIONS(102),
    [aux_sym_css_named_color_token111] = ACTIONS(102),
    [aux_sym_css_named_color_token112] = ACTIONS(102),
    [aux_sym_css_named_color_token113] = ACTIONS(102),
    [aux_sym_css_named_color_token114] = ACTIONS(102),
    [aux_sym_css_named_color_token115] = ACTIONS(102),
    [aux_sym_css_named_color_token116] = ACTIONS(102),
    [aux_sym_css_named_color_token117] = ACTIONS(102),
    [aux_sym_css_named_color_token118] = ACTIONS(102),
    [aux_sym_css_named_color_token119] = ACTIONS(102),
    [aux_sym_css_named_color_token120] = ACTIONS(102),
    [aux_sym_css_named_color_token121] = ACTIONS(102),
    [aux_sym_css_named_color_token122] = ACTIONS(102),
    [aux_sym_css_named_color_token123] = ACTIONS(102),
    [aux_sym_css_named_color_token124] = ACTIONS(102),
    [aux_sym_css_named_color_token125] = ACTIONS(102),
    [aux_sym_css_named_color_token126] = ACTIONS(102),
    [aux_sym_css_named_color_token127] = ACTIONS(102),
    [aux_sym_css_named_color_token128] = ACTIONS(102),
    [aux_sym_css_named_color_token129] = ACTIONS(102),
    [aux_sym_css_named_color_token130] = ACTIONS(102),
    [aux_sym_css_named_color_token131] = ACTIONS(102),
    [aux_sym_css_named_color_token132] = ACTIONS(102),
    [aux_sym_css_named_color_token133] = ACTIONS(102),
    [aux_sym_css_named_color_token134] = ACTIONS(102),
    [aux_sym_css_named_color_token135] = ACTIONS(102),
    [aux_sym_css_named_color_token136] = ACTIONS(102),
    [aux_sym_css_named_color_token137] = ACTIONS(102),
    [aux_sym_css_named_color_token138] = ACTIONS(102),
    [aux_sym_css_named_color_token139] = ACTIONS(102),
    [aux_sym_css_named_color_token140] = ACTIONS(102),
    [aux_sym_css_named_color_token141] = ACTIONS(102),
    [aux_sym_css_named_color_token142] = ACTIONS(102),
    [aux_sym_css_named_color_token143] = ACTIONS(102),
    [aux_sym_css_named_color_token144] = ACTIONS(102),
    [aux_sym_css_named_color_token145] = ACTIONS(104),
    [aux_sym_css_named_color_token146] = ACTIONS(102),
    [aux_sym_css_named_color_token147] = ACTIONS(104),
    [aux_sym_css_named_color_token148] = ACTIONS(102),
    [sym_css_keyword_transparent] = ACTIONS(102),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(112),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(110),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(112),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(110),
    [aux_sym_css_function_hwb_token1] = ACTIONS(110),
    [aux_sym_css_function_lab_token1] = ACTIONS(110),
    [aux_sym_css_function_oklab_token1] = ACTIONS(110),
    [aux_sym_css_function_lch_token1] = ACTIONS(110),
    [aux_sym_css_function_oklch_token1] = ACTIONS(110),
    [aux_sym_css_function_color_token1] = ACTIONS(110),
    [sym_css_hex_color_6_digits] = ACTIONS(112),
    [sym_css_hex_color_8_digits] = ACTIONS(110),
    [sym_css_hex_color_3_digits] = ACTIONS(112),
    [sym_css_hex_color_4_digits] = ACTIONS(112),
    [aux_sym_css_named_color_token1] = ACTIONS(110),
    [aux_sym_css_named_color_token2] = ACTIONS(110),
    [aux_sym_css_named_color_token3] = ACTIONS(112),
    [aux_sym_css_named_color_token4] = ACTIONS(110),
    [aux_sym_css_named_color_token5] = ACTIONS(110),
    [aux_sym_css_named_color_token6] = ACTIONS(110),
    [aux_sym_css_named_color_token7] = ACTIONS(110),
    [aux_sym_css_named_color_token8] = ACTIONS(110),
    [aux_sym_css_named_color_token9] = ACTIONS(110),
    [aux_sym_css_named_color_token10] = ACTIONS(112),
    [aux_sym_css_named_color_token11] = ACTIONS(110),
    [aux_sym_css_named_color_token12] = ACTIONS(110),
    [aux_sym_css_named_color_token13] = ACTIONS(110),
    [aux_sym_css_named_color_token14] = ACTIONS(110),
    [aux_sym_css_named_color_token15] = ACTIONS(110),
    [aux_sym_css_named_color_token16] = ACTIONS(110),
    [aux_sym_css_named_color_token17] = ACTIONS(110),
    [aux_sym_css_named_color_token18] = ACTIONS(110),
    [aux_sym_css_named_color_token19] = ACTIONS(110),
    [aux_sym_css_named_color_token20] = ACTIONS(110),
    [aux_sym_css_named_color_token21] = ACTIONS(110),
    [aux_sym_css_named_color_token22] = ACTIONS(110),
    [aux_sym_css_named_color_token23] = ACTIONS(110),
    [aux_sym_css_named_color_token24] = ACTIONS(110),
    [aux_sym_css_named_color_token25] = ACTIONS(110),
    [aux_sym_css_named_color_token26] = ACTIONS(110),
    [aux_sym_css_named_color_token27] = ACTIONS(110),
    [aux_sym_css_named_color_token28] = ACTIONS(110),
    [aux_sym_css_named_color_token29] = ACTIONS(110),
    [aux_sym_css_named_color_token30] = ACTIONS(110),
    [aux_sym_css_named_color_token31] = ACTIONS(110),
    [aux_sym_css_named_color_token32] = ACTIONS(110),
    [aux_sym_css_named_color_token33] = ACTIONS(110),
    [aux_sym_css_named_color_token34] = ACTIONS(110),
    [aux_sym_css_named_color_token35] = ACTIONS(110),
    [aux_sym_css_named_color_token36] = ACTIONS(110),
    [aux_sym_css_named_color_token37] = ACTIONS(110),
    [aux_sym_css_named_color_token38] = ACTIONS(110),
    [aux_sym_css_named_color_token39] = ACTIONS(110),
    [aux_sym_css_named_color_token40] = ACTIONS(110),
    [aux_sym_css_named_color_token41] = ACTIONS(110),
    [aux_sym_css_named_color_token42] = ACTIONS(110),
    [aux_sym_css_named_color_token43] = ACTIONS(110),
    [aux_sym_css_named_color_token44] = ACTIONS(110),
    [aux_sym_css_named_color_token45] = ACTIONS(110),
    [aux_sym_css_named_color_token46] = ACTIONS(110),
    [aux_sym_css_named_color_token47] = ACTIONS(110),
    [aux_sym_css_named_color_token48] = ACTIONS(110),
    [aux_sym_css_named_color_token49] = ACTIONS(110),
    [aux_sym_css_named_color_token50] = ACTIONS(110),
    [aux_sym_css_named_color_token51] = ACTIONS(110),
    [aux_sym_css_named_color_token52] = ACTIONS(112),
    [aux_sym_css_named_color_token53] = ACTIONS(110),
    [aux_sym_css_named_color_token54] = ACTIONS(110),
    [aux_sym_css_named_color_token55] = ACTIONS(112),
    [aux_sym_css_named_color_token56] = ACTIONS(110),
    [aux_sym_css_named_color_token57] = ACTIONS(110),
    [aux_sym_css_named_color_token58] = ACTIONS(110),
    [aux_sym_css_named_color_token59] = ACTIONS(110),
    [aux_sym_css_named_color_token60] = ACTIONS(110),
    [aux_sym_css_named_color_token61] = ACTIONS(110),
    [aux_sym_css_named_color_token62] = ACTIONS(110),
    [aux_sym_css_named_color_token63] = ACTIONS(110),
    [aux_sym_css_named_color_token64] = ACTIONS(112),
    [aux_sym_css_named_color_token65] = ACTIONS(110),
    [aux_sym_css_named_color_token66] = ACTIONS(110),
    [aux_sym_css_named_color_token67] = ACTIONS(110),
    [aux_sym_css_named_color_token68] = ACTIONS(110),
    [aux_sym_css_named_color_token69] = ACTIONS(110),
    [aux_sym_css_named_color_token70] = ACTIONS(110),
    [aux_sym_css_named_color_token71] = ACTIONS(110),
    [aux_sym_css_named_color_token72] = ACTIONS(110),
    [aux_sym_css_named_color_token73] = ACTIONS(110),
    [aux_sym_css_named_color_token74] = ACTIONS(110),
    [aux_sym_css_named_color_token75] = ACTIONS(110),
    [aux_sym_css_named_color_token76] = ACTIONS(110),
    [aux_sym_css_named_color_token77] = ACTIONS(110),
    [aux_sym_css_named_color_token78] = ACTIONS(110),
    [aux_sym_css_named_color_token79] = ACTIONS(110),
    [aux_sym_css_named_color_token80] = ACTIONS(110),
    [aux_sym_css_named_color_token81] = ACTIONS(110),
    [aux_sym_css_named_color_token82] = ACTIONS(110),
    [aux_sym_css_named_color_token83] = ACTIONS(112),
    [aux_sym_css_named_color_token84] = ACTIONS(110),
    [aux_sym_css_named_color_token85] = ACTIONS(110),
    [aux_sym_css_named_color_token86] = ACTIONS(110),
    [aux_sym_css_named_color_token87] = ACTIONS(110),
    [aux_sym_css_named_color_token88] = ACTIONS(110),
    [aux_sym_css_named_color_token89] = ACTIONS(110),
    [aux_sym_css_named_color_token90] = ACTIONS(110),
    [aux_sym_css_named_color_token91] = ACTIONS(110),
    [aux_sym_css_named_color_token92] = ACTIONS(110),
    [aux_sym_css_named_color_token93] = ACTIONS(110),
    [aux_sym_css_named_color_token94] = ACTIONS(110),
    [aux_sym_css_named_color_token95] = ACTIONS(110),
    [aux_sym_css_named_color_token96] = ACTIONS(110),
    [aux_sym_css_named_color_token97] = ACTIONS(110),
    [aux_sym_css_named_color_token98] = ACTIONS(110),
    [aux_sym_css_named_color_token99] = ACTIONS(110),
    [aux_sym_css_named_color_token100] = ACTIONS(110),
    [aux_sym_css_named_color_token101] = ACTIONS(110),
    [aux_sym_css_named_color_token102] = ACTIONS(110),
    [aux_sym_css_named_color_token103] = ACTIONS(110),
    [aux_sym_css_named_color_token104] = ACTIONS(112),
    [aux_sym_css_named_color_token105] = ACTIONS(110),
    [aux_sym_css_named_color_token106] = ACTIONS(112),
    [aux_sym_css_named_color_token107] = ACTIONS(110),
    [aux_sym_css_named_color_token108] = ACTIONS(110),
    [aux_sym_css_named_color_token109] = ACTIONS(110),
    [aux_sym_css_named_color_token110] = ACTIONS(110),
    [aux_sym_css_named_color_token111] = ACTIONS(110),
    [aux_sym_css_named_color_token112] = ACTIONS(110),
    [aux_sym_css_named_color_token113] = ACTIONS(110),
    [aux_sym_css_named_color_token114] = ACTIONS(110),
    [aux_sym_css_named_color_token115] = ACTIONS(110),
    [aux_sym_css_named_color_token116] = ACTIONS(110),
    [aux_sym_css_named_color_token117] = ACTIONS(110),
    [aux_sym_css_named_color_token118] = ACTIONS(110),
    [aux_sym_css_named_color_token119] = ACTIONS(110),
    [aux_sym_css_named_color_token120] = ACTIONS(110),
    [aux_sym_css_named_color_token121] = ACTIONS(110),
    [aux_sym_css_named_color_token122] = ACTIONS(110),
    [aux_sym_css_named_color_token123] = ACTIONS(110),
    [aux_sym_css_named_color_token124] = ACTIONS(110),
    [aux_sym_css_named_color_token125] = ACTIONS(110),
    [aux_sym_css_named_color_token126] = ACTIONS(110),
    [aux_sym_css_named_color_token127] = ACTIONS(110),
    [aux_sym_css_named_color_token128] = ACTIONS(110),
    [aux_sym_css_named_color_token129] = ACTIONS(110),
    [aux_sym_css_named_color_token130] = ACTIONS(110),
    [aux_sym_css_named_color_token131] = ACTIONS(110),
    [aux_sym_css_named_color_token132] = ACTIONS(110),
    [aux_sym_css_named_color_token133] = ACTIONS(110),
    [aux_sym_css_named_color_token134] = ACTIONS(110),
    [aux_sym_css_named_color_token135] = ACTIONS(110),
    [aux_sym_css_named_color_token136] = ACTIONS(110),
    [aux_sym_css_named_color_token137] = ACTIONS(110),
    [aux_sym_css_named_color_token138] = ACTIONS(110),
    [aux_sym_css_named_color_token139] = ACTIONS(110),
    [aux_sym_css_named_color_token140] = ACTIONS(110),
    [aux_sym_css_named_color_token141] = ACTIONS(110),
    [aux_sym_css_named_color_token142] = ACTIONS(110),
    [aux_sym_css_named_color_token143] = ACTIONS(110),
    [aux_sym_css_named_color_token144] = ACTIONS(110),
    [aux_sym_css_named_color_token145] = ACTIONS(112),
    [aux_sym_css_named_color_token146] = ACTIONS(110),
    [aux_sym_css_named_color_token147] = ACTIONS(112),
    [aux_sym_css_named_color_token148] = ACTIONS(110),
    [sym_css_keyword_transparent] = ACTIONS(110),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(116),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(114),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(116),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(114),
    [aux_sym_css_function_hwb_token1] = ACTIONS(114),
    [aux_sym_css_function_lab_token1] = ACTIONS(114),
    [aux_sym_css_function_oklab_token1] = ACTIONS(114),
    [aux_sym_css_function_lch_token1] = ACTIONS(114),
    [aux_sym_css_function_oklch_token1] = ACTIONS(114),
    [aux_sym_css_function_color_token1] = ACTIONS(114),
    [sym_css_hex_color_6_digits] = ACTIONS(116),
    [sym_css_hex_color_8_digits] = ACTIONS(114),
    [sym_css_hex_color_3_digits] = ACTIONS(116),
    [sym_css_hex_color_4_digits] = ACTIONS(116),
    [aux_sym_css_named_color_token1] = ACTIONS(114),
    [aux_sym_css_named_color_token2] = ACTIONS(114),
    [aux_sym_css_named_color_token3] = ACTIONS(116),
    [aux_sym_css_named_color_token4] = ACTIONS(114),
    [aux_sym_css_named_color_token5] = ACTIONS(114),
    [aux_sym_css_named_color_token6] = ACTIONS(114),
    [aux_sym_css_named_color_token7] = ACTIONS(114),
    [aux_sym_css_named_color_token8] = ACTIONS(114),
    [aux_sym_css_named_color_token9] = ACTIONS(114),
    [aux_sym_css_named_color_token10] = ACTIONS(116),
    [aux_sym_css_named_color_token11] = ACTIONS(114),
    [aux_sym_css_named_color_token12] = ACTIONS(114),
    [aux_sym_css_named_color_token13] = ACTIONS(114),
    [aux_sym_css_named_color_token14] = ACTIONS(114),
    [aux_sym_css_named_color_token15] = ACTIONS(114),
    [aux_sym_css_named_color_token16] = ACTIONS(114),
    [aux_sym_css_named_color_token17] = ACTIONS(114),
    [aux_sym_css_named_color_token18] = ACTIONS(114),
    [aux_sym_css_named_color_token19] = ACTIONS(114),
    [aux_sym_css_named_color_token20] = ACTIONS(114),
    [aux_sym_css_named_color_token21] = ACTIONS(114),
    [aux_sym_css_named_color_token22] = ACTIONS(114),
    [aux_sym_css_named_color_token23] = ACTIONS(114),
    [aux_sym_css_named_color_token24] = ACTIONS(114),
    [aux_sym_css_named_color_token25] = ACTIONS(114),
    [aux_sym_css_named_color_token26] = ACTIONS(114),
    [aux_sym_css_named_color_token27] = ACTIONS(114),
    [aux_sym_css_named_color_token28] = ACTIONS(114),
    [aux_sym_css_named_color_token29] = ACTIONS(114),
    [aux_sym_css_named_color_token30] = ACTIONS(114),
    [aux_sym_css_named_color_token31] = ACTIONS(114),
    [aux_sym_css_named_color_token32] = ACTIONS(114),
    [aux_sym_css_named_color_token33] = ACTIONS(114),
    [aux_sym_css_named_color_token34] = ACTIONS(114),
    [aux_sym_css_named_color_token35] = ACTIONS(114),
    [aux_sym_css_named_color_token36] = ACTIONS(114),
    [aux_sym_css_named_color_token37] = ACTIONS(114),
    [aux_sym_css_named_color_token38] = ACTIONS(114),
    [aux_sym_css_named_color_token39] = ACTIONS(114),
    [aux_sym_css_named_color_token40] = ACTIONS(114),
    [aux_sym_css_named_color_token41] = ACTIONS(114),
    [aux_sym_css_named_color_token42] = ACTIONS(114),
    [aux_sym_css_named_color_token43] = ACTIONS(114),
    [aux_sym_css_named_color_token44] = ACTIONS(114),
    [aux_sym_css_named_color_token45] = ACTIONS(114),
    [aux_sym_css_named_color_token46] = ACTIONS(114),
    [aux_sym_css_named_color_token47] = ACTIONS(114),
    [aux_sym_css_named_color_token48] = ACTIONS(114),
    [aux_sym_css_named_color_token49] = ACTIONS(114),
    [aux_sym_css_named_color_token50] = ACTIONS(114),
    [aux_sym_css_named_color_token51] = ACTIONS(114),
    [aux_sym_css_named_color_token52] = ACTIONS(116),
    [aux_sym_css_named_color_token53] = ACTIONS(114),
    [aux_sym_css_named_color_token54] = ACTIONS(114),
    [aux_sym_css_named_color_token55] = ACTIONS(116),
    [aux_sym_css_named_color_token56] = ACTIONS(114),
    [aux_sym_css_named_color_token57] = ACTIONS(114),
    [aux_sym_css_named_color_token58] = ACTIONS(114),
    [aux_sym_css_named_color_token59] = ACTIONS(114),
    [aux_sym_css_named_color_token60] = ACTIONS(114),
    [aux_sym_css_named_color_token61] = ACTIONS(114),
    [aux_sym_css_named_color_token62] = ACTIONS(114),
    [aux_sym_css_named_color_token63] = ACTIONS(114),
    [aux_sym_css_named_color_token64] = ACTIONS(116),
    [aux_sym_css_named_color_token65] = ACTIONS(114),
    [aux_sym_css_named_color_token66] = ACTIONS(114),
    [aux_sym_css_named_color_token67] = ACTIONS(114),
    [aux_sym_css_named_color_token68] = ACTIONS(114),
    [aux_sym_css_named_color_token69] = ACTIONS(114),
    [aux_sym_css_named_color_token70] = ACTIONS(114),
    [aux_sym_css_named_color_token71] = ACTIONS(114),
    [aux_sym_css_named_color_token72] = ACTIONS(114),
    [aux_sym_css_named_color_token73] = ACTIONS(114),
    [aux_sym_css_named_color_token74] = ACTIONS(114),
    [aux_sym_css_named_color_token75] = ACTIONS(114),
    [aux_sym_css_named_color_token76] = ACTIONS(114),
    [aux_sym_css_named_color_token77] = ACTIONS(114),
    [aux_sym_css_named_color_token78] = ACTIONS(114),
    [aux_sym_css_named_color_token79] = ACTIONS(114),
    [aux_sym_css_named_color_token80] = ACTIONS(114),
    [aux_sym_css_named_color_token81] = ACTIONS(114),
    [aux_sym_css_named_color_token82] = ACTIONS(114),
    [aux_sym_css_named_color_token83] = ACTIONS(116),
    [aux_sym_css_named_color_token84] = ACTIONS(114),
    [aux_sym_css_named_color_token85] = ACTIONS(114),
    [aux_sym_css_named_color_token86] = ACTIONS(114),
    [aux_sym_css_named_color_token87] = ACTIONS(114),
    [aux_sym_css_named_color_token88] = ACTIONS(114),
    [aux_sym_css_named_color_token89] = ACTIONS(114),
    [aux_sym_css_named_color_token90] = ACTIONS(114),
    [aux_sym_css_named_color_token91] = ACTIONS(114),
    [aux_sym_css_named_color_token92] = ACTIONS(114),
    [aux_sym_css_named_color_token93] = ACTIONS(114),
    [aux_sym_css_named_color_token94] = ACTIONS(114),
    [aux_sym_css_named_color_token95] = ACTIONS(114),
    [aux_sym_css_named_color_token96] = ACTIONS(114),
    [aux_sym_css_named_color_token97] = ACTIONS(114),
    [aux_sym_css_named_color_token98] = ACTIONS(114),
    [aux_sym_css_named_color_token99] = ACTIONS(114),
    [aux_sym_css_named_color_token100] = ACTIONS(114),
    [aux_sym_css_named_color_token101] = ACTIONS(114),
    [aux_sym_css_named_color_token102] = ACTIONS(114),
    [aux_sym_css_named_color_token103] = ACTIONS(114),
    [aux_sym_css_named_color_token104] = ACTIONS(116),
    [aux_sym_css_named_color_token105] = ACTIONS(114),
    [aux_sym_css_named_color_token106] = ACTIONS(116),
    [aux_sym_css_named_color_token107] = ACTIONS(114),
    [aux_sym_css_named_color_token108] = ACTIONS(114),
    [aux_sym_css_named_color_token109] = ACTIONS(114),
    [aux_sym_css_named_color_token110] = ACTIONS(114),
    [aux_sym_css_named_color_token111] = ACTIONS(114),
    [aux_sym_css_named_color_token112] = ACTIONS(114),
    [aux_sym_css_named_color_token113] = ACTIONS(114),
    [aux_sym_css_named_color_token114] = ACTIONS(114),
    [aux_sym_css_named_color_token115] = ACTIONS(114),
    [aux_sym_css_named_color_token116] = ACTIONS(114),
    [aux_sym_css_named_color_token117] = ACTIONS(114),
    [aux_sym_css_named_color_token118] = ACTIONS(114),
    [aux_sym_css_named_color_token119] = ACTIONS(114),
    [aux_sym_css_named_color_token120] = ACTIONS(114),
    [aux_sym_css_named_color_token121] = ACTIONS(114),
    [aux_sym_css_named_color_token122] = ACTIONS(114),
    [aux_sym_css_named_color_token123] = ACTIONS(114),
    [aux_sym_css_named_color_token124] = ACTIONS(114),
    [aux_sym_css_named_color_token125] = ACTIONS(114),
    [aux_sym_css_named_color_token126] = ACTIONS(114),
    [aux_sym_css_named_color_token127] = ACTIONS(114),
    [aux_sym_css_named_color_token128] = ACTIONS(114),
    [aux_sym_css_named_color_token129] = ACTIONS(114),
    [aux_sym_css_named_color_token130] = ACTIONS(114),
    [aux_sym_css_named_color_token131] = ACTIONS(114),
    [aux_sym_css_named_color_token132] = ACTIONS(114),
    [aux_sym_css_named_color_token133] = ACTIONS(114),
    [aux_sym_css_named_color_token134] = ACTIONS(114),
    [aux_sym_css_named_color_token135] = ACTIONS(114),
    [aux_sym_css_named_color_token136] = ACTIONS(114),
    [aux_sym_css_named_color_token137] = ACTIONS(114),
    [aux_sym_css_named_color_token138] = ACTIONS(114),
    [aux_sym_css_named_color_token139] = ACTIONS(114),
    [aux_sym_css_named_color_token140] = ACTIONS(114),
    [aux_sym_css_named_color_token141] = ACTIONS(114),
    [aux_sym_css_named_color_token142] = ACTIONS(114),
    [aux_sym_css_named_color_token143] = ACTIONS(114),
    [aux_sym_css_named_color_token144] = ACTIONS(114),
    [aux_sym_css_named_color_token145] = ACTIONS(116),
    [aux_sym_css_named_color_token146] = ACTIONS(114),
    [aux_sym_css_named_color_token147] = ACTIONS(116),
    [aux_sym_css_named_color_token148] = ACTIONS(114),
    [sym_css_keyword_transparent] = ACTIONS(114),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(120),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(118),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(120),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(118),
    [aux_sym_css_function_hwb_token1] = ACTIONS(118),
    [aux_sym_css_function_lab_token1] = ACTIONS(118),
    [aux_sym_css_function_oklab_token1] = ACTIONS(118),
    [aux_sym_css_function_lch_token1] = ACTIONS(118),
    [aux_sym_css_function_oklch_token1] = ACTIONS(118),
    [aux_sym_css_function_color_token1] = ACTIONS(118),
    [sym_css_hex_color_6_digits] = ACTIONS(120),
    [sym_css_hex_color_8_digits] = ACTIONS(118),
    [sym_css_hex_color_3_digits] = ACTIONS(120),
    [sym_css_hex_color_4_digits] = ACTIONS(120),
    [aux_sym_css_named_color_token1] = ACTIONS(118),
    [aux_sym_css_named_color_token2] = ACTIONS(118),
    [aux_sym_css_named_color_token3] = ACTIONS(120),
    [aux_sym_css_named_color_token4] = ACTIONS(118),
    [aux_sym_css_named_color_token5] = ACTIONS(118),
    [aux_sym_css_named_color_token6] = ACTIONS(118),
    [aux_sym_css_named_color_token7] = ACTIONS(118),
    [aux_sym_css_named_color_token8] = ACTIONS(118),
    [aux_sym_css_named_color_token9] = ACTIONS(118),
    [aux_sym_css_named_color_token10] = ACTIONS(120),
    [aux_sym_css_named_color_token11] = ACTIONS(118),
    [aux_sym_css_named_color_token12] = ACTIONS(118),
    [aux_sym_css_named_color_token13] = ACTIONS(118),
    [aux_sym_css_named_color_token14] = ACTIONS(118),
    [aux_sym_css_named_color_token15] = ACTIONS(118),
    [aux_sym_css_named_color_token16] = ACTIONS(118),
    [aux_sym_css_named_color_token17] = ACTIONS(118),
    [aux_sym_css_named_color_token18] = ACTIONS(118),
    [aux_sym_css_named_color_token19] = ACTIONS(118),
    [aux_sym_css_named_color_token20] = ACTIONS(118),
    [aux_sym_css_named_color_token21] = ACTIONS(118),
    [aux_sym_css_named_color_token22] = ACTIONS(118),
    [aux_sym_css_named_color_token23] = ACTIONS(118),
    [aux_sym_css_named_color_token24] = ACTIONS(118),
    [aux_sym_css_named_color_token25] = ACTIONS(118),
    [aux_sym_css_named_color_token26] = ACTIONS(118),
    [aux_sym_css_named_color_token27] = ACTIONS(118),
    [aux_sym_css_named_color_token28] = ACTIONS(118),
    [aux_sym_css_named_color_token29] = ACTIONS(118),
    [aux_sym_css_named_color_token30] = ACTIONS(118),
    [aux_sym_css_named_color_token31] = ACTIONS(118),
    [aux_sym_css_named_color_token32] = ACTIONS(118),
    [aux_sym_css_named_color_token33] = ACTIONS(118),
    [aux_sym_css_named_color_token34] = ACTIONS(118),
    [aux_sym_css_named_color_token35] = ACTIONS(118),
    [aux_sym_css_named_color_token36] = ACTIONS(118),
    [aux_sym_css_named_color_token37] = ACTIONS(118),
    [aux_sym_css_named_color_token38] = ACTIONS(118),
    [aux_sym_css_named_color_token39] = ACTIONS(118),
    [aux_sym_css_named_color_token40] = ACTIONS(118),
    [aux_sym_css_named_color_token41] = ACTIONS(118),
    [aux_sym_css_named_color_token42] = ACTIONS(118),
    [aux_sym_css_named_color_token43] = ACTIONS(118),
    [aux_sym_css_named_color_token44] = ACTIONS(118),
    [aux_sym_css_named_color_token45] = ACTIONS(118),
    [aux_sym_css_named_color_token46] = ACTIONS(118),
    [aux_sym_css_named_color_token47] = ACTIONS(118),
    [aux_sym_css_named_color_token48] = ACTIONS(118),
    [aux_sym_css_named_color_token49] = ACTIONS(118),
    [aux_sym_css_named_color_token50] = ACTIONS(118),
    [aux_sym_css_named_color_token51] = ACTIONS(118),
    [aux_sym_css_named_color_token52] = ACTIONS(120),
    [aux_sym_css_named_color_token53] = ACTIONS(118),
    [aux_sym_css_named_color_token54] = ACTIONS(118),
    [aux_sym_css_named_color_token55] = ACTIONS(120),
    [aux_sym_css_named_color_token56] = ACTIONS(118),
    [aux_sym_css_named_color_token57] = ACTIONS(118),
    [aux_sym_css_named_color_token58] = ACTIONS(118),
    [aux_sym_css_named_color_token59] = ACTIONS(118),
    [aux_sym_css_named_color_token60] = ACTIONS(118),
    [aux_sym_css_named_color_token61] = ACTIONS(118),
    [aux_sym_css_named_color_token62] = ACTIONS(118),
    [aux_sym_css_named_color_token63] = ACTIONS(118),
    [aux_sym_css_named_color_token64] = ACTIONS(120),
    [aux_sym_css_named_color_token65] = ACTIONS(118),
    [aux_sym_css_named_color_token66] = ACTIONS(118),
    [aux_sym_css_named_color_token67] = ACTIONS(118),
    [aux_sym_css_named_color_token68] = ACTIONS(118),
    [aux_sym_css_named_color_token69] = ACTIONS(118),
    [aux_sym_css_named_color_token70] = ACTIONS(118),
    [aux_sym_css_named_color_token71] = ACTIONS(118),
    [aux_sym_css_named_color_token72] = ACTIONS(118),
    [aux_sym_css_named_color_token73] = ACTIONS(118),
    [aux_sym_css_named_color_token74] = ACTIONS(118),
    [aux_sym_css_named_color_token75] = ACTIONS(118),
    [aux_sym_css_named_color_token76] = ACTIONS(118),
    [aux_sym_css_named_color_token77] = ACTIONS(118),
    [aux_sym_css_named_color_token78] = ACTIONS(118),
    [aux_sym_css_named_color_token79] = ACTIONS(118),
    [aux_sym_css_named_color_token80] = ACTIONS(118),
    [aux_sym_css_named_color_token81] = ACTIONS(118),
    [aux_sym_css_named_color_token82] = ACTIONS(118),
    [aux_sym_css_named_color_token83] = ACTIONS(120),
    [aux_sym_css_named_color_token84] = ACTIONS(118),
    [aux_sym_css_named_color_token85] = ACTIONS(118),
    [aux_sym_css_named_color_token86] = ACTIONS(118),
    [aux_sym_css_named_color_token87] = ACTIONS(118),
    [aux_sym_css_named_color_token88] = ACTIONS(118),
    [aux_sym_css_named_color_token89] = ACTIONS(118),
    [aux_sym_css_named_color_token90] = ACTIONS(118),
    [aux_sym_css_named_color_token91] = ACTIONS(118),
    [aux_sym_css_named_color_token92] = ACTIONS(118),
    [aux_sym_css_named_color_token93] = ACTIONS(118),
    [aux_sym_css_named_color_token94] = ACTIONS(118),
    [aux_sym_css_named_color_token95] = ACTIONS(118),
    [aux_sym_css_named_color_token96] = ACTIONS(118),
    [aux_sym_css_named_color_token97] = ACTIONS(118),
    [aux_sym_css_named_color_token98] = ACTIONS(118),
    [aux_sym_css_named_color_token99] = ACTIONS(118),
    [aux_sym_css_named_color_token100] = ACTIONS(118),
    [aux_sym_css_named_color_token101] = ACTIONS(118),
    [aux_sym_css_named_color_token102] = ACTIONS(118),
    [aux_sym_css_named_color_token103] = ACTIONS(118),
    [aux_sym_css_named_color_token104] = ACTIONS(120),
    [aux_sym_css_named_color_token105] = ACTIONS(118),
    [aux_sym_css_named_color_token106] = ACTIONS(120),
    [aux_sym_css_named_color_token107] = ACTIONS(118),
    [aux_sym_css_named_color_token108] = ACTIONS(118),
    [aux_sym_css_named_color_token109] = ACTIONS(118),
    [aux_sym_css_named_color_token110] = ACTIONS(118),
    [aux_sym_css_named_color_token111] = ACTIONS(118),
    [aux_sym_css_named_color_token112] = ACTIONS(118),
    [aux_sym_css_named_color_token113] = ACTIONS(118),
    [aux_sym_css_named_color_token114] = ACTIONS(118),
    [aux_sym_css_named_color_token115] = ACTIONS(118),
    [aux_sym_css_named_color_token116] = ACTIONS(118),
    [aux_sym_css_named_color_token117] = ACTIONS(118),
    [aux_sym_css_named_color_token118] = ACTIONS(118),
    [aux_sym_css_named_color_token119] = ACTIONS(118),
    [aux_sym_css_named_color_token120] = ACTIONS(118),
    [aux_sym_css_named_color_token121] = ACTIONS(118),
    [aux_sym_css_named_color_token122] = ACTIONS(118),
    [aux_sym_css_named_color_token123] = ACTIONS(118),
    [aux_sym_css_named_color_token124] = ACTIONS(118),
    [aux_sym_css_named_color_token125] = ACTIONS(118),
    [aux_sym_css_named_color_token126] = ACTIONS(118),
    [aux_sym_css_named_color_token127] = ACTIONS(118),
    [aux_sym_css_named_color_token128] = ACTIONS(118),
    [aux_sym_css_named_color_token129] = ACTIONS(118),
    [aux_sym_css_named_color_token130] = ACTIONS(118),
    [aux_sym_css_named_color_token131] = ACTIONS(118),
    [aux_sym_css_named_color_token132] = ACTIONS(118),
    [aux_sym_css_named_color_token133] = ACTIONS(118),
    [aux_sym_css_named_color_token134] = ACTIONS(118),
    [aux_sym_css_named_color_token135] = ACTIONS(118),
    [aux_sym_css_named_color_token136] = ACTIONS(118),
    [aux_sym_css_named_color_token137] = ACTIONS(118),
    [aux_sym_css_named_color_token138] = ACTIONS(118),
    [aux_sym_css_named_color_token139] = ACTIONS(118),
    [aux_sym_css_named_color_token140] = ACTIONS(118),
    [aux_sym_css_named_color_token141] = ACTIONS(118),
    [aux_sym_css_named_color_token142] = ACTIONS(118),
    [aux_sym_css_named_color_token143] = ACTIONS(118),
    [aux_sym_css_named_color_token144] = ACTIONS(118),
    [aux_sym_css_named_color_token145] = ACTIONS(120),
    [aux_sym_css_named_color_token146] = ACTIONS(118),
    [aux_sym_css_named_color_token147] = ACTIONS(120),
    [aux_sym_css_named_color_token148] = ACTIONS(118),
    [sym_css_keyword_transparent] = ACTIONS(118),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(124),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(122),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(124),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(122),
    [aux_sym_css_function_hwb_token1] = ACTIONS(122),
    [aux_sym_css_function_lab_token1] = ACTIONS(122),
    [aux_sym_css_function_oklab_token1] = ACTIONS(122),
    [aux_sym_css_function_lch_token1] = ACTIONS(122),
    [aux_sym_css_function_oklch_token1] = ACTIONS(122),
    [aux_sym_css_function_color_token1] = ACTIONS(122),
    [sym_css_hex_color_6_digits] = ACTIONS(124),
    [sym_css_hex_color_8_digits] = ACTIONS(122),
    [sym_css_hex_color_3_digits] = ACTIONS(124),
    [sym_css_hex_color_4_digits] = ACTIONS(124),
    [aux_sym_css_named_color_token1] = ACTIONS(122),
    [aux_sym_css_named_color_token2] = ACTIONS(122),
    [aux_sym_css_named_color_token3] = ACTIONS(124),
    [aux_sym_css_named_color_token4] = ACTIONS(122),
    [aux_sym_css_named_color_token5] = ACTIONS(122),
    [aux_sym_css_named_color_token6] = ACTIONS(122),
    [aux_sym_css_named_color_token7] = ACTIONS(122),
    [aux_sym_css_named_color_token8] = ACTIONS(122),
    [aux_sym_css_named_color_token9] = ACTIONS(122),
    [aux_sym_css_named_color_token10] = ACTIONS(124),
    [aux_sym_css_named_color_token11] = ACTIONS(122),
    [aux_sym_css_named_color_token12] = ACTIONS(122),
    [aux_sym_css_named_color_token13] = ACTIONS(122),
    [aux_sym_css_named_color_token14] = ACTIONS(122),
    [aux_sym_css_named_color_token15] = ACTIONS(122),
    [aux_sym_css_named_color_token16] = ACTIONS(122),
    [aux_sym_css_named_color_token17] = ACTIONS(122),
    [aux_sym_css_named_color_token18] = ACTIONS(122),
    [aux_sym_css_named_color_token19] = ACTIONS(122),
    [aux_sym_css_named_color_token20] = ACTIONS(122),
    [aux_sym_css_named_color_token21] = ACTIONS(122),
    [aux_sym_css_named_color_token22] = ACTIONS(122),
    [aux_sym_css_named_color_token23] = ACTIONS(122),
    [aux_sym_css_named_color_token24] = ACTIONS(122),
    [aux_sym_css_named_color_token25] = ACTIONS(122),
    [aux_sym_css_named_color_token26] = ACTIONS(122),
    [aux_sym_css_named_color_token27] = ACTIONS(122),
    [aux_sym_css_named_color_token28] = ACTIONS(122),
    [aux_sym_css_named_color_token29] = ACTIONS(122),
    [aux_sym_css_named_color_token30] = ACTIONS(122),
    [aux_sym_css_named_color_token31] = ACTIONS(122),
    [aux_sym_css_named_color_token32] = ACTIONS(122),
    [aux_sym_css_named_color_token33] = ACTIONS(122),
    [aux_sym_css_named_color_token34] = ACTIONS(122),
    [aux_sym_css_named_color_token35] = ACTIONS(122),
    [aux_sym_css_named_color_token36] = ACTIONS(122),
    [aux_sym_css_named_color_token37] = ACTIONS(122),
    [aux_sym_css_named_color_token38] = ACTIONS(122),
    [aux_sym_css_named_color_token39] = ACTIONS(122),
    [aux_sym_css_named_color_token40] = ACTIONS(122),
    [aux_sym_css_named_color_token41] = ACTIONS(122),
    [aux_sym_css_named_color_token42] = ACTIONS(122),
    [aux_sym_css_named_color_token43] = ACTIONS(122),
    [aux_sym_css_named_color_token44] = ACTIONS(122),
    [aux_sym_css_named_color_token45] = ACTIONS(122),
    [aux_sym_css_named_color_token46] = ACTIONS(122),
    [aux_sym_css_named_color_token47] = ACTIONS(122),
    [aux_sym_css_named_color_token48] = ACTIONS(122),
    [aux_sym_css_named_color_token49] = ACTIONS(122),
    [aux_sym_css_named_color_token50] = ACTIONS(122),
    [aux_sym_css_named_color_token51] = ACTIONS(122),
    [aux_sym_css_named_color_token52] = ACTIONS(124),
    [aux_sym_css_named_color_token53] = ACTIONS(122),
    [aux_sym_css_named_color_token54] = ACTIONS(122),
    [aux_sym_css_named_color_token55] = ACTIONS(124),
    [aux_sym_css_named_color_token56] = ACTIONS(122),
    [aux_sym_css_named_color_token57] = ACTIONS(122),
    [aux_sym_css_named_color_token58] = ACTIONS(122),
    [aux_sym_css_named_color_token59] = ACTIONS(122),
    [aux_sym_css_named_color_token60] = ACTIONS(122),
    [aux_sym_css_named_color_token61] = ACTIONS(122),
    [aux_sym_css_named_color_token62] = ACTIONS(122),
    [aux_sym_css_named_color_token63] = ACTIONS(122),
    [aux_sym_css_named_color_token64] = ACTIONS(124),
    [aux_sym_css_named_color_token65] = ACTIONS(122),
    [aux_sym_css_named_color_token66] = ACTIONS(122),
    [aux_sym_css_named_color_token67] = ACTIONS(122),
    [aux_sym_css_named_color_token68] = ACTIONS(122),
    [aux_sym_css_named_color_token69] = ACTIONS(122),
    [aux_sym_css_named_color_token70] = ACTIONS(122),
    [aux_sym_css_named_color_token71] = ACTIONS(122),
    [aux_sym_css_named_color_token72] = ACTIONS(122),
    [aux_sym_css_named_color_token73] = ACTIONS(122),
    [aux_sym_css_named_color_token74] = ACTIONS(122),
    [aux_sym_css_named_color_token75] = ACTIONS(122),
    [aux_sym_css_named_color_token76] = ACTIONS(122),
    [aux_sym_css_named_color_token77] = ACTIONS(122),
    [aux_sym_css_named_color_token78] = ACTIONS(122),
    [aux_sym_css_named_color_token79] = ACTIONS(122),
    [aux_sym_css_named_color_token80] = ACTIONS(122),
    [aux_sym_css_named_color_token81] = ACTIONS(122),
    [aux_sym_css_named_color_token82] = ACTIONS(122),
    [aux_sym_css_named_color_token83] = ACTIONS(124),
    [aux_sym_css_named_color_token84] = ACTIONS(122),
    [aux_sym_css_named_color_token85] = ACTIONS(122),
    [aux_sym_css_named_color_token86] = ACTIONS(122),
    [aux_sym_css_named_color_token87] = ACTIONS(122),
    [aux_sym_css_named_color_token88] = ACTIONS(122),
    [aux_sym_css_named_color_token89] = ACTIONS(122),
    [aux_sym_css_named_color_token90] = ACTIONS(122),
    [aux_sym_css_named_color_token91] = ACTIONS(122),
    [aux_sym_css_named_color_token92] = ACTIONS(122),
    [aux_sym_css_named_color_token93] = ACTIONS(122),
    [aux_sym_css_named_color_token94] = ACTIONS(122),
    [aux_sym_css_named_color_token95] = ACTIONS(122),
    [aux_sym_css_named_color_token96] = ACTIONS(122),
    [aux_sym_css_named_color_token97] = ACTIONS(122),
    [aux_sym_css_named_color_token98] = ACTIONS(122),
    [aux_sym_css_named_color_token99] = ACTIONS(122),
    [aux_sym_css_named_color_token100] = ACTIONS(122),
    [aux_sym_css_named_color_token101] = ACTIONS(122),
    [aux_sym_css_named_color_token102] = ACTIONS(122),
    [aux_sym_css_named_color_token103] = ACTIONS(122),
    [aux_sym_css_named_color_token104] = ACTIONS(124),
    [aux_sym_css_named_color_token105] = ACTIONS(122),
    [aux_sym_css_named_color_token106] = ACTIONS(124),
    [aux_sym_css_named_color_token107] = ACTIONS(122),
    [aux_sym_css_named_color_token108] = ACTIONS(122),
    [aux_sym_css_named_color_token109] = ACTIONS(122),
    [aux_sym_css_named_color_token110] = ACTIONS(122),
    [aux_sym_css_named_color_token111] = ACTIONS(122),
    [aux_sym_css_named_color_token112] = ACTIONS(122),
    [aux_sym_css_named_color_token113] = ACTIONS(122),
    [aux_sym_css_named_color_token114] = ACTIONS(122),
    [aux_sym_css_named_color_token115] = ACTIONS(122),
    [aux_sym_css_named_color_token116] = ACTIONS(122),
    [aux_sym_css_named_color_token117] = ACTIONS(122),
    [aux_sym_css_named_color_token118] = ACTIONS(122),
    [aux_sym_css_named_color_token119] = ACTIONS(122),
    [aux_sym_css_named_color_token120] = ACTIONS(122),
    [aux_sym_css_named_color_token121] = ACTIONS(122),
    [aux_sym_css_named_color_token122] = ACTIONS(122),
    [aux_sym_css_named_color_token123] = ACTIONS(122),
    [aux_sym_css_named_color_token124] = ACTIONS(122),
    [aux_sym_css_named_color_token125] = ACTIONS(122),
    [aux_sym_css_named_color_token126] = ACTIONS(122),
    [aux_sym_css_named_color_token127] = ACTIONS(122),
    [aux_sym_css_named_color_token128] = ACTIONS(122),
    [aux_sym_css_named_color_token129] = ACTIONS(122),
    [aux_sym_css_named_color_token130] = ACTIONS(122),
    [aux_sym_css_named_color_token131] = ACTIONS(122),
    [aux_sym_css_named_color_token132] = ACTIONS(122),
    [aux_sym_css_named_color_token133] = ACTIONS(122),
    [aux_sym_css_named_color_token134] = ACTIONS(122),
    [aux_sym_css_named_color_token135] = ACTIONS(122),
    [aux_sym_css_named_color_token136] = ACTIONS(122),
    [aux_sym_css_named_color_token137] = ACTIONS(122),
    [aux_sym_css_named_color_token138] = ACTIONS(122),
    [aux_sym_css_named_color_token139] = ACTIONS(122),
    [aux_sym_css_named_color_token140] = ACTIONS(122),
    [aux_sym_css_named_color_token141] = ACTIONS(122),
    [aux_sym_css_named_color_token142] = ACTIONS(122),
    [aux_sym_css_named_color_token143] = ACTIONS(122),
    [aux_sym_css_named_color_token144] = ACTIONS(122),
    [aux_sym_css_named_color_token145] = ACTIONS(124),
    [aux_sym_css_named_color_token146] = ACTIONS(122),
    [aux_sym_css_named_color_token147] = ACTIONS(124),
    [aux_sym_css_named_color_token148] = ACTIONS(122),
    [sym_css_keyword_transparent] = ACTIONS(122),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(128),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(126),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(128),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(126),
    [aux_sym_css_function_hwb_token1] = ACTIONS(126),
    [aux_sym_css_function_lab_token1] = ACTIONS(126),
    [aux_sym_css_function_oklab_token1] = ACTIONS(126),
    [aux_sym_css_function_lch_token1] = ACTIONS(126),
    [aux_sym_css_function_oklch_token1] = ACTIONS(126),
    [aux_sym_css_function_color_token1] = ACTIONS(126),
    [sym_css_hex_color_6_digits] = ACTIONS(128),
    [sym_css_hex_color_8_digits] = ACTIONS(126),
    [sym_css_hex_color_3_digits] = ACTIONS(128),
    [sym_css_hex_color_4_digits] = ACTIONS(128),
    [aux_sym_css_named_color_token1] = ACTIONS(126),
    [aux_sym_css_named_color_token2] = ACTIONS(126),
    [aux_sym_css_named_color_token3] = ACTIONS(128),
    [aux_sym_css_named_color_token4] = ACTIONS(126),
    [aux_sym_css_named_color_token5] = ACTIONS(126),
    [aux_sym_css_named_color_token6] = ACTIONS(126),
    [aux_sym_css_named_color_token7] = ACTIONS(126),
    [aux_sym_css_named_color_token8] = ACTIONS(126),
    [aux_sym_css_named_color_token9] = ACTIONS(126),
    [aux_sym_css_named_color_token10] = ACTIONS(128),
    [aux_sym_css_named_color_token11] = ACTIONS(126),
    [aux_sym_css_named_color_token12] = ACTIONS(126),
    [aux_sym_css_named_color_token13] = ACTIONS(126),
    [aux_sym_css_named_color_token14] = ACTIONS(126),
    [aux_sym_css_named_color_token15] = ACTIONS(126),
    [aux_sym_css_named_color_token16] = ACTIONS(126),
    [aux_sym_css_named_color_token17] = ACTIONS(126),
    [aux_sym_css_named_color_token18] = ACTIONS(126),
    [aux_sym_css_named_color_token19] = ACTIONS(126),
    [aux_sym_css_named_color_token20] = ACTIONS(126),
    [aux_sym_css_named_color_token21] = ACTIONS(126),
    [aux_sym_css_named_color_token22] = ACTIONS(126),
    [aux_sym_css_named_color_token23] = ACTIONS(126),
    [aux_sym_css_named_color_token24] = ACTIONS(126),
    [aux_sym_css_named_color_token25] = ACTIONS(126),
    [aux_sym_css_named_color_token26] = ACTIONS(126),
    [aux_sym_css_named_color_token27] = ACTIONS(126),
    [aux_sym_css_named_color_token28] = ACTIONS(126),
    [aux_sym_css_named_color_token29] = ACTIONS(126),
    [aux_sym_css_named_color_token30] = ACTIONS(126),
    [aux_sym_css_named_color_token31] = ACTIONS(126),
    [aux_sym_css_named_color_token32] = ACTIONS(126),
    [aux_sym_css_named_color_token33] = ACTIONS(126),
    [aux_sym_css_named_color_token34] = ACTIONS(126),
    [aux_sym_css_named_color_token35] = ACTIONS(126),
    [aux_sym_css_named_color_token36] = ACTIONS(126),
    [aux_sym_css_named_color_token37] = ACTIONS(126),
    [aux_sym_css_named_color_token38] = ACTIONS(126),
    [aux_sym_css_named_color_token39] = ACTIONS(126),
    [aux_sym_css_named_color_token40] = ACTIONS(126),
    [aux_sym_css_named_color_token41] = ACTIONS(126),
    [aux_sym_css_named_color_token42] = ACTIONS(126),
    [aux_sym_css_named_color_token43] = ACTIONS(126),
    [aux_sym_css_named_color_token44] = ACTIONS(126),
    [aux_sym_css_named_color_token45] = ACTIONS(126),
    [aux_sym_css_named_color_token46] = ACTIONS(126),
    [aux_sym_css_named_color_token47] = ACTIONS(126),
    [aux_sym_css_named_color_token48] = ACTIONS(126),
    [aux_sym_css_named_color_token49] = ACTIONS(126),
    [aux_sym_css_named_color_token50] = ACTIONS(126),
    [aux_sym_css_named_color_token51] = ACTIONS(126),
    [aux_sym_css_named_color_token52] = ACTIONS(128),
    [aux_sym_css_named_color_token53] = ACTIONS(126),
    [aux_sym_css_named_color_token54] = ACTIONS(126),
    [aux_sym_css_named_color_token55] = ACTIONS(128),
    [aux_sym_css_named_color_token56] = ACTIONS(126),
    [aux_sym_css_named_color_token57] = ACTIONS(126),
    [aux_sym_css_named_color_token58] = ACTIONS(126),
    [aux_sym_css_named_color_token59] = ACTIONS(126),
    [aux_sym_css_named_color_token60] = ACTIONS(126),
    [aux_sym_css_named_color_token61] = ACTIONS(126),
    [aux_sym_css_named_color_token62] = ACTIONS(126),
    [aux_sym_css_named_color_token63] = ACTIONS(126),
    [aux_sym_css_named_color_token64] = ACTIONS(128),
    [aux_sym_css_named_color_token65] = ACTIONS(126),
    [aux_sym_css_named_color_token66] = ACTIONS(126),
    [aux_sym_css_named_color_token67] = ACTIONS(126),
    [aux_sym_css_named_color_token68] = ACTIONS(126),
    [aux_sym_css_named_color_token69] = ACTIONS(126),
    [aux_sym_css_named_color_token70] = ACTIONS(126),
    [aux_sym_css_named_color_token71] = ACTIONS(126),
    [aux_sym_css_named_color_token72] = ACTIONS(126),
    [aux_sym_css_named_color_token73] = ACTIONS(126),
    [aux_sym_css_named_color_token74] = ACTIONS(126),
    [aux_sym_css_named_color_token75] = ACTIONS(126),
    [aux_sym_css_named_color_token76] = ACTIONS(126),
    [aux_sym_css_named_color_token77] = ACTIONS(126),
    [aux_sym_css_named_color_token78] = ACTIONS(126),
    [aux_sym_css_named_color_token79] = ACTIONS(126),
    [aux_sym_css_named_color_token80] = ACTIONS(126),
    [aux_sym_css_named_color_token81] = ACTIONS(126),
    [aux_sym_css_named_color_token82] = ACTIONS(126),
    [aux_sym_css_named_color_token83] = ACTIONS(128),
    [aux_sym_css_named_color_token84] = ACTIONS(126),
    [aux_sym_css_named_color_token85] = ACTIONS(126),
    [aux_sym_css_named_color_token86] = ACTIONS(126),
    [aux_sym_css_named_color_token87] = ACTIONS(126),
    [aux_sym_css_named_color_token88] = ACTIONS(126),
    [aux_sym_css_named_color_token89] = ACTIONS(126),
    [aux_sym_css_named_color_token90] = ACTIONS(126),
    [aux_sym_css_named_color_token91] = ACTIONS(126),
    [aux_sym_css_named_color_token92] = ACTIONS(126),
    [aux_sym_css_named_color_token93] = ACTIONS(126),
    [aux_sym_css_named_color_token94] = ACTIONS(126),
    [aux_sym_css_named_color_token95] = ACTIONS(126),
    [aux_sym_css_named_color_token96] = ACTIONS(126),
    [aux_sym_css_named_color_token97] = ACTIONS(126),
    [aux_sym_css_named_color_token98] = ACTIONS(126),
    [aux_sym_css_named_color_token99] = ACTIONS(126),
    [aux_sym_css_named_color_token100] = ACTIONS(126),
    [aux_sym_css_named_color_token101] = ACTIONS(126),
    [aux_sym_css_named_color_token102] = ACTIONS(126),
    [aux_sym_css_named_color_token103] = ACTIONS(126),
    [aux_sym_css_named_color_token104] = ACTIONS(128),
    [aux_sym_css_named_color_token105] = ACTIONS(126),
    [aux_sym_css_named_color_token106] = ACTIONS(128),
    [aux_sym_css_named_color_token107] = ACTIONS(126),
    [aux_sym_css_named_color_token108] = ACTIONS(126),
    [aux_sym_css_named_color_token109] = ACTIONS(126),
    [aux_sym_css_named_color_token110] = ACTIONS(126),
    [aux_sym_css_named_color_token111] = ACTIONS(126),
    [aux_sym_css_named_color_token112] = ACTIONS(126),
    [aux_sym_css_named_color_token113] = ACTIONS(126),
    [aux_sym_css_named_color_token114] = ACTIONS(126),
    [aux_sym_css_named_color_token115] = ACTIONS(126),
    [aux_sym_css_named_color_token116] = ACTIONS(126),
    [aux_sym_css_named_color_token117] = ACTIONS(126),
    [aux_sym_css_named_color_token118] = ACTIONS(126),
    [aux_sym_css_named_color_token119] = ACTIONS(126),
    [aux_sym_css_named_color_token120] = ACTIONS(126),
    [aux_sym_css_named_color_token121] = ACTIONS(126),
    [aux_sym_css_named_color_token122] = ACTIONS(126),
    [aux_sym_css_named_color_token123] = ACTIONS(126),
    [aux_sym_css_named_color_token124] = ACTIONS(126),
    [aux_sym_css_named_color_token125] = ACTIONS(126),
    [aux_sym_css_named_color_token126] = ACTIONS(126),
    [aux_sym_css_named_color_token127] = ACTIONS(126),
    [aux_sym_css_named_color_token128] = ACTIONS(126),
    [aux_sym_css_named_color_token129] = ACTIONS(126),
    [aux_sym_css_named_color_token130] = ACTIONS(126),
    [aux_sym_css_named_color_token131] = ACTIONS(126),
    [aux_sym_css_named_color_token132] = ACTIONS(126),
    [aux_sym_css_named_color_token133] = ACTIONS(126),
    [aux_sym_css_named_color_token134] = ACTIONS(126),
    [aux_sym_css_named_color_token135] = ACTIONS(126),
    [aux_sym_css_named_color_token136] = ACTIONS(126),
    [aux_sym_css_named_color_token137] = ACTIONS(126),
    [aux_sym_css_named_color_token138] = ACTIONS(126),
    [aux_sym_css_named_color_token139] = ACTIONS(126),
    [aux_sym_css_named_color_token140] = ACTIONS(126),
    [aux_sym_css_named_color_token141] = ACTIONS(126),
    [aux_sym_css_named_color_token142] = ACTIONS(126),
    [aux_sym_css_named_color_token143] = ACTIONS(126),
    [aux_sym_css_named_color_token144] = ACTIONS(126),
    [aux_sym_css_named_color_token145] = ACTIONS(128),
    [aux_sym_css_named_color_token146] = ACTIONS(126),
    [aux_sym_css_named_color_token147] = ACTIONS(128),
    [aux_sym_css_named_color_token148] = ACTIONS(126),
    [sym_css_keyword_transparent] = ACTIONS(126),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(132),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(130),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(132),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(130),
    [aux_sym_css_function_hwb_token1] = ACTIONS(130),
    [aux_sym_css_function_lab_token1] = ACTIONS(130),
    [aux_sym_css_function_oklab_token1] = ACTIONS(130),
    [aux_sym_css_function_lch_token1] = ACTIONS(130),
    [aux_sym_css_function_oklch_token1] = ACTIONS(130),
    [aux_sym_css_function_color_token1] = ACTIONS(130),
    [sym_css_hex_color_6_digits] = ACTIONS(132),
    [sym_css_hex_color_8_digits] = ACTIONS(130),
    [sym_css_hex_color_3_digits] = ACTIONS(132),
    [sym_css_hex_color_4_digits] = ACTIONS(132),
    [aux_sym_css_named_color_token1] = ACTIONS(130),
    [aux_sym_css_named_color_token2] = ACTIONS(130),
    [aux_sym_css_named_color_token3] = ACTIONS(132),
    [aux_sym_css_named_color_token4] = ACTIONS(130),
    [aux_sym_css_named_color_token5] = ACTIONS(130),
    [aux_sym_css_named_color_token6] = ACTIONS(130),
    [aux_sym_css_named_color_token7] = ACTIONS(130),
    [aux_sym_css_named_color_token8] = ACTIONS(130),
    [aux_sym_css_named_color_token9] = ACTIONS(130),
    [aux_sym_css_named_color_token10] = ACTIONS(132),
    [aux_sym_css_named_color_token11] = ACTIONS(130),
    [aux_sym_css_named_color_token12] = ACTIONS(130),
    [aux_sym_css_named_color_token13] = ACTIONS(130),
    [aux_sym_css_named_color_token14] = ACTIONS(130),
    [aux_sym_css_named_color_token15] = ACTIONS(130),
    [aux_sym_css_named_color_token16] = ACTIONS(130),
    [aux_sym_css_named_color_token17] = ACTIONS(130),
    [aux_sym_css_named_color_token18] = ACTIONS(130),
    [aux_sym_css_named_color_token19] = ACTIONS(130),
    [aux_sym_css_named_color_token20] = ACTIONS(130),
    [aux_sym_css_named_color_token21] = ACTIONS(130),
    [aux_sym_css_named_color_token22] = ACTIONS(130),
    [aux_sym_css_named_color_token23] = ACTIONS(130),
    [aux_sym_css_named_color_token24] = ACTIONS(130),
    [aux_sym_css_named_color_token25] = ACTIONS(130),
    [aux_sym_css_named_color_token26] = ACTIONS(130),
    [aux_sym_css_named_color_token27] = ACTIONS(130),
    [aux_sym_css_named_color_token28] = ACTIONS(130),
    [aux_sym_css_named_color_token29] = ACTIONS(130),
    [aux_sym_css_named_color_token30] = ACTIONS(130),
    [aux_sym_css_named_color_token31] = ACTIONS(130),
    [aux_sym_css_named_color_token32] = ACTIONS(130),
    [aux_sym_css_named_color_token33] = ACTIONS(130),
    [aux_sym_css_named_color_token34] = ACTIONS(130),
    [aux_sym_css_named_color_token35] = ACTIONS(130),
    [aux_sym_css_named_color_token36] = ACTIONS(130),
    [aux_sym_css_named_color_token37] = ACTIONS(130),
    [aux_sym_css_named_color_token38] = ACTIONS(130),
    [aux_sym_css_named_color_token39] = ACTIONS(130),
    [aux_sym_css_named_color_token40] = ACTIONS(130),
    [aux_sym_css_named_color_token41] = ACTIONS(130),
    [aux_sym_css_named_color_token42] = ACTIONS(130),
    [aux_sym_css_named_color_token43] = ACTIONS(130),
    [aux_sym_css_named_color_token44] = ACTIONS(130),
    [aux_sym_css_named_color_token45] = ACTIONS(130),
    [aux_sym_css_named_color_token46] = ACTIONS(130),
    [aux_sym_css_named_color_token47] = ACTIONS(130),
    [aux_sym_css_named_color_token48] = ACTIONS(130),
    [aux_sym_css_named_color_token49] = ACTIONS(130),
    [aux_sym_css_named_color_token50] = ACTIONS(130),
    [aux_sym_css_named_color_token51] = ACTIONS(130),
    [aux_sym_css_named_color_token52] = ACTIONS(132),
    [aux_sym_css_named_color_token53] = ACTIONS(130),
    [aux_sym_css_named_color_token54] = ACTIONS(130),
    [aux_sym_css_named_color_token55] = ACTIONS(132),
    [aux_sym_css_named_color_token56] = ACTIONS(130),
    [aux_sym_css_named_color_token57] = ACTIONS(130),
    [aux_sym_css_named_color_token58] = ACTIONS(130),
    [aux_sym_css_named_color_token59] = ACTIONS(130),
    [aux_sym_css_named_color_token60] = ACTIONS(130),
    [aux_sym_css_named_color_token61] = ACTIONS(130),
    [aux_sym_css_named_color_token62] = ACTIONS(130),
    [aux_sym_css_named_color_token63] = ACTIONS(130),
    [aux_sym_css_named_color_token64] = ACTIONS(132),
    [aux_sym_css_named_color_token65] = ACTIONS(130),
    [aux_sym_css_named_color_token66] = ACTIONS(130),
    [aux_sym_css_named_color_token67] = ACTIONS(130),
    [aux_sym_css_named_color_token68] = ACTIONS(130),
    [aux_sym_css_named_color_token69] = ACTIONS(130),
    [aux_sym_css_named_color_token70] = ACTIONS(130),
    [aux_sym_css_named_color_token71] = ACTIONS(130),
    [aux_sym_css_named_color_token72] = ACTIONS(130),
    [aux_sym_css_named_color_token73] = ACTIONS(130),
    [aux_sym_css_named_color_token74] = ACTIONS(130),
    [aux_sym_css_named_color_token75] = ACTIONS(130),
    [aux_sym_css_named_color_token76] = ACTIONS(130),
    [aux_sym_css_named_color_token77] = ACTIONS(130),
    [aux_sym_css_named_color_token78] = ACTIONS(130),
    [aux_sym_css_named_color_token79] = ACTIONS(130),
    [aux_sym_css_named_color_token80] = ACTIONS(130),
    [aux_sym_css_named_color_token81] = ACTIONS(130),
    [aux_sym_css_named_color_token82] = ACTIONS(130),
    [aux_sym_css_named_color_token83] = ACTIONS(132),
    [aux_sym_css_named_color_token84] = ACTIONS(130),
    [aux_sym_css_named_color_token85] = ACTIONS(130),
    [aux_sym_css_named_color_token86] = ACTIONS(130),
    [aux_sym_css_named_color_token87] = ACTIONS(130),
    [aux_sym_css_named_color_token88] = ACTIONS(130),
    [aux_sym_css_named_color_token89] = ACTIONS(130),
    [aux_sym_css_named_color_token90] = ACTIONS(130),
    [aux_sym_css_named_color_token91] = ACTIONS(130),
    [aux_sym_css_named_color_token92] = ACTIONS(130),
    [aux_sym_css_named_color_token93] = ACTIONS(130),
    [aux_sym_css_named_color_token94] = ACTIONS(130),
    [aux_sym_css_named_color_token95] = ACTIONS(130),
    [aux_sym_css_named_color_token96] = ACTIONS(130),
    [aux_sym_css_named_color_token97] = ACTIONS(130),
    [aux_sym_css_named_color_token98] = ACTIONS(130),
    [aux_sym_css_named_color_token99] = ACTIONS(130),
    [aux_sym_css_named_color_token100] = ACTIONS(130),
    [aux_sym_css_named_color_token101] = ACTIONS(130),
    [aux_sym_css_named_color_token102] = ACTIONS(130),
    [aux_sym_css_named_color_token103] = ACTIONS(130),
    [aux_sym_css_named_color_token104] = ACTIONS(132),
    [aux_sym_css_named_color_token105] = ACTIONS(130),
    [aux_sym_css_named_color_token106] = ACTIONS(132),
    [aux_sym_css_named_color_token107] = ACTIONS(130),
    [aux_sym_css_named_color_token108] = ACTIONS(130),
    [aux_sym_css_named_color_token109] = ACTIONS(130),
    [aux_sym_css_named_color_token110] = ACTIONS(130),
    [aux_sym_css_named_color_token111] = ACTIONS(130),
    [aux_sym_css_named_color_token112] = ACTIONS(130),
    [aux_sym_css_named_color_token113] = ACTIONS(130),
    [aux_sym_css_named_color_token114] = ACTIONS(130),
    [aux_sym_css_named_color_token115] = ACTIONS(130),
    [aux_sym_css_named_color_token116] = ACTIONS(130),
    [aux_sym_css_named_color_token117] = ACTIONS(130),
    [aux_sym_css_named_color_token118] = ACTIONS(130),
    [aux_sym_css_named_color_token119] = ACTIONS(130),
    [aux_sym_css_named_color_token120] = ACTIONS(130),
    [aux_sym_css_named_color_token121] = ACTIONS(130),
    [aux_sym_css_named_color_token122] = ACTIONS(130),
    [aux_sym_css_named_color_token123] = ACTIONS(130),
    [aux_sym_css_named_color_token124] = ACTIONS(130),
    [aux_sym_css_named_color_token125] = ACTIONS(130),
    [aux_sym_css_named_color_token126] = ACTIONS(130),
    [aux_sym_css_named_color_token127] = ACTIONS(130),
    [aux_sym_css_named_color_token128] = ACTIONS(130),
    [aux_sym_css_named_color_token129] = ACTIONS(130),
    [aux_sym_css_named_color_token130] = ACTIONS(130),
    [aux_sym_css_named_color_token131] = ACTIONS(130),
    [aux_sym_css_named_color_token132] = ACTIONS(130),
    [aux_sym_css_named_color_token133] = ACTIONS(130),
    [aux_sym_css_named_color_token134] = ACTIONS(130),
    [aux_sym_css_named_color_token135] = ACTIONS(130),
    [aux_sym_css_named_color_token136] = ACTIONS(130),
    [aux_sym_css_named_color_token137] = ACTIONS(130),
    [aux_sym_css_named_color_token138] = ACTIONS(130),
    [aux_sym_css_named_color_token139] = ACTIONS(130),
    [aux_sym_css_named_color_token140] = ACTIONS(130),
    [aux_sym_css_named_color_token141] = ACTIONS(130),
    [aux_sym_css_named_color_token142] = ACTIONS(130),
    [aux_sym_css_named_color_token143] = ACTIONS(130),
    [aux_sym_css_named_color_token144] = ACTIONS(130),
    [aux_sym_css_named_color_token145] = ACTIONS(132),
    [aux_sym_css_named_color_token146] = ACTIONS(130),
    [aux_sym_css_named_color_token147] = ACTIONS(132),
    [aux_sym_css_named_color_token148] = ACTIONS(130),
    [sym_css_keyword_transparent] = ACTIONS(130),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(136),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(134),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(136),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(134),
    [aux_sym_css_function_hwb_token1] = ACTIONS(134),
    [aux_sym_css_function_lab_token1] = ACTIONS(134),
    [aux_sym_css_function_oklab_token1] = ACTIONS(134),
    [aux_sym_css_function_lch_token1] = ACTIONS(134),
    [aux_sym_css_function_oklch_token1] = ACTIONS(134),
    [aux_sym_css_function_color_token1] = ACTIONS(134),
    [sym_css_hex_color_6_digits] = ACTIONS(136),
    [sym_css_hex_color_8_digits] = ACTIONS(134),
    [sym_css_hex_color_3_digits] = ACTIONS(136),
    [sym_css_hex_color_4_digits] = ACTIONS(136),
    [aux_sym_css_named_color_token1] = ACTIONS(134),
    [aux_sym_css_named_color_token2] = ACTIONS(134),
    [aux_sym_css_named_color_token3] = ACTIONS(136),
    [aux_sym_css_named_color_token4] = ACTIONS(134),
    [aux_sym_css_named_color_token5] = ACTIONS(134),
    [aux_sym_css_named_color_token6] = ACTIONS(134),
    [aux_sym_css_named_color_token7] = ACTIONS(134),
    [aux_sym_css_named_color_token8] = ACTIONS(134),
    [aux_sym_css_named_color_token9] = ACTIONS(134),
    [aux_sym_css_named_color_token10] = ACTIONS(136),
    [aux_sym_css_named_color_token11] = ACTIONS(134),
    [aux_sym_css_named_color_token12] = ACTIONS(134),
    [aux_sym_css_named_color_token13] = ACTIONS(134),
    [aux_sym_css_named_color_token14] = ACTIONS(134),
    [aux_sym_css_named_color_token15] = ACTIONS(134),
    [aux_sym_css_named_color_token16] = ACTIONS(134),
    [aux_sym_css_named_color_token17] = ACTIONS(134),
    [aux_sym_css_named_color_token18] = ACTIONS(134),
    [aux_sym_css_named_color_token19] = ACTIONS(134),
    [aux_sym_css_named_color_token20] = ACTIONS(134),
    [aux_sym_css_named_color_token21] = ACTIONS(134),
    [aux_sym_css_named_color_token22] = ACTIONS(134),
    [aux_sym_css_named_color_token23] = ACTIONS(134),
    [aux_sym_css_named_color_token24] = ACTIONS(134),
    [aux_sym_css_named_color_token25] = ACTIONS(134),
    [aux_sym_css_named_color_token26] = ACTIONS(134),
    [aux_sym_css_named_color_token27] = ACTIONS(134),
    [aux_sym_css_named_color_token28] = ACTIONS(134),
    [aux_sym_css_named_color_token29] = ACTIONS(134),
    [aux_sym_css_named_color_token30] = ACTIONS(134),
    [aux_sym_css_named_color_token31] = ACTIONS(134),
    [aux_sym_css_named_color_token32] = ACTIONS(134),
    [aux_sym_css_named_color_token33] = ACTIONS(134),
    [aux_sym_css_named_color_token34] = ACTIONS(134),
    [aux_sym_css_named_color_token35] = ACTIONS(134),
    [aux_sym_css_named_color_token36] = ACTIONS(134),
    [aux_sym_css_named_color_token37] = ACTIONS(134),
    [aux_sym_css_named_color_token38] = ACTIONS(134),
    [aux_sym_css_named_color_token39] = ACTIONS(134),
    [aux_sym_css_named_color_token40] = ACTIONS(134),
    [aux_sym_css_named_color_token41] = ACTIONS(134),
    [aux_sym_css_named_color_token42] = ACTIONS(134),
    [aux_sym_css_named_color_token43] = ACTIONS(134),
    [aux_sym_css_named_color_token44] = ACTIONS(134),
    [aux_sym_css_named_color_token45] = ACTIONS(134),
    [aux_sym_css_named_color_token46] = ACTIONS(134),
    [aux_sym_css_named_color_token47] = ACTIONS(134),
    [aux_sym_css_named_color_token48] = ACTIONS(134),
    [aux_sym_css_named_color_token49] = ACTIONS(134),
    [aux_sym_css_named_color_token50] = ACTIONS(134),
    [aux_sym_css_named_color_token51] = ACTIONS(134),
    [aux_sym_css_named_color_token52] = ACTIONS(136),
    [aux_sym_css_named_color_token53] = ACTIONS(134),
    [aux_sym_css_named_color_token54] = ACTIONS(134),
    [aux_sym_css_named_color_token55] = ACTIONS(136),
    [aux_sym_css_named_color_token56] = ACTIONS(134),
    [aux_sym_css_named_color_token57] = ACTIONS(134),
    [aux_sym_css_named_color_token58] = ACTIONS(134),
    [aux_sym_css_named_color_token59] = ACTIONS(134),
    [aux_sym_css_named_color_token60] = ACTIONS(134),
    [aux_sym_css_named_color_token61] = ACTIONS(134),
    [aux_sym_css_named_color_token62] = ACTIONS(134),
    [aux_sym_css_named_color_token63] = ACTIONS(134),
    [aux_sym_css_named_color_token64] = ACTIONS(136),
    [aux_sym_css_named_color_token65] = ACTIONS(134),
    [aux_sym_css_named_color_token66] = ACTIONS(134),
    [aux_sym_css_named_color_token67] = ACTIONS(134),
    [aux_sym_css_named_color_token68] = ACTIONS(134),
    [aux_sym_css_named_color_token69] = ACTIONS(134),
    [aux_sym_css_named_color_token70] = ACTIONS(134),
    [aux_sym_css_named_color_token71] = ACTIONS(134),
    [aux_sym_css_named_color_token72] = ACTIONS(134),
    [aux_sym_css_named_color_token73] = ACTIONS(134),
    [aux_sym_css_named_color_token74] = ACTIONS(134),
    [aux_sym_css_named_color_token75] = ACTIONS(134),
    [aux_sym_css_named_color_token76] = ACTIONS(134),
    [aux_sym_css_named_color_token77] = ACTIONS(134),
    [aux_sym_css_named_color_token78] = ACTIONS(134),
    [aux_sym_css_named_color_token79] = ACTIONS(134),
    [aux_sym_css_named_color_token80] = ACTIONS(134),
    [aux_sym_css_named_color_token81] = ACTIONS(134),
    [aux_sym_css_named_color_token82] = ACTIONS(134),
    [aux_sym_css_named_color_token83] = ACTIONS(136),
    [aux_sym_css_named_color_token84] = ACTIONS(134),
    [aux_sym_css_named_color_token85] = ACTIONS(134),
    [aux_sym_css_named_color_token86] = ACTIONS(134),
    [aux_sym_css_named_color_token87] = ACTIONS(134),
    [aux_sym_css_named_color_token88] = ACTIONS(134),
    [aux_sym_css_named_color_token89] = ACTIONS(134),
    [aux_sym_css_named_color_token90] = ACTIONS(134),
    [aux_sym_css_named_color_token91] = ACTIONS(134),
    [aux_sym_css_named_color_token92] = ACTIONS(134),
    [aux_sym_css_named_color_token93] = ACTIONS(134),
    [aux_sym_css_named_color_token94] = ACTIONS(134),
    [aux_sym_css_named_color_token95] = ACTIONS(134),
    [aux_sym_css_named_color_token96] = ACTIONS(134),
    [aux_sym_css_named_color_token97] = ACTIONS(134),
    [aux_sym_css_named_color_token98] = ACTIONS(134),
    [aux_sym_css_named_color_token99] = ACTIONS(134),
    [aux_sym_css_named_color_token100] = ACTIONS(134),
    [aux_sym_css_named_color_token101] = ACTIONS(134),
    [aux_sym_css_named_color_token102] = ACTIONS(134),
    [aux_sym_css_named_color_token103] = ACTIONS(134),
    [aux_sym_css_named_color_token104] = ACTIONS(136),
    [aux_sym_css_named_color_token105] = ACTIONS(134),
    [aux_sym_css_named_color_token106] = ACTIONS(136),
    [aux_sym_css_named_color_token107] = ACTIONS(134),
    [aux_sym_css_named_color_token108] = ACTIONS(134),
    [aux_sym_css_named_color_token109] = ACTIONS(134),
    [aux_sym_css_named_color_token110] = ACTIONS(134),
    [aux_sym_css_named_color_token111] = ACTIONS(134),
    [aux_sym_css_named_color_token112] = ACTIONS(134),
    [aux_sym_css_named_color_token113] = ACTIONS(134),
    [aux_sym_css_named_color_token114] = ACTIONS(134),
    [aux_sym_css_named_color_token115] = ACTIONS(134),
    [aux_sym_css_named_color_token116] = ACTIONS(134),
    [aux_sym_css_named_color_token117] = ACTIONS(134),
    [aux_sym_css_named_color_token118] = ACTIONS(134),
    [aux_sym_css_named_color_token119] = ACTIONS(134),
    [aux_sym_css_named_color_token120] = ACTIONS(134),
    [aux_sym_css_named_color_token121] = ACTIONS(134),
    [aux_sym_css_named_color_token122] = ACTIONS(134),
    [aux_sym_css_named_color_token123] = ACTIONS(134),
    [aux_sym_css_named_color_token124] = ACTIONS(134),
    [aux_sym_css_named_color_token125] = ACTIONS(134),
    [aux_sym_css_named_color_token126] = ACTIONS(134),
    [aux_sym_css_named_color_token127] = ACTIONS(134),
    [aux_sym_css_named_color_token128] = ACTIONS(134),
    [aux_sym_css_named_color_token129] = ACTIONS(134),
    [aux_sym_css_named_color_token130] = ACTIONS(134),
    [aux_sym_css_named_color_token131] = ACTIONS(134),
    [aux_sym_css_named_color_token132] = ACTIONS(134),
    [aux_sym_css_named_color_token133] = ACTIONS(134),
    [aux_sym_css_named_color_token134] = ACTIONS(134),
    [aux_sym_css_named_color_token135] = ACTIONS(134),
    [aux_sym_css_named_color_token136] = ACTIONS(134),
    [aux_sym_css_named_color_token137] = ACTIONS(134),
    [aux_sym_css_named_color_token138] = ACTIONS(134),
    [aux_sym_css_named_color_token139] = ACTIONS(134),
    [aux_sym_css_named_color_token140] = ACTIONS(134),
    [aux_sym_css_named_color_token141] = ACTIONS(134),
    [aux_sym_css_named_color_token142] = ACTIONS(134),
    [aux_sym_css_named_color_token143] = ACTIONS(134),
    [aux_sym_css_named_color_token144] = ACTIONS(134),
    [aux_sym_css_named_color_token145] = ACTIONS(136),
    [aux_sym_css_named_color_token146] = ACTIONS(134),
    [aux_sym_css_named_color_token147] = ACTIONS(136),
    [aux_sym_css_named_color_token148] = ACTIONS(134),
    [sym_css_keyword_transparent] = ACTIONS(134),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(140),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(138),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(140),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(138),
    [aux_sym_css_function_hwb_token1] = ACTIONS(138),
    [aux_sym_css_function_lab_token1] = ACTIONS(138),
    [aux_sym_css_function_oklab_token1] = ACTIONS(138),
    [aux_sym_css_function_lch_token1] = ACTIONS(138),
    [aux_sym_css_function_oklch_token1] = ACTIONS(138),
    [aux_sym_css_function_color_token1] = ACTIONS(138),
    [sym_css_hex_color_6_digits] = ACTIONS(140),
    [sym_css_hex_color_8_digits] = ACTIONS(138),
    [sym_css_hex_color_3_digits] = ACTIONS(140),
    [sym_css_hex_color_4_digits] = ACTIONS(140),
    [aux_sym_css_named_color_token1] = ACTIONS(138),
    [aux_sym_css_named_color_token2] = ACTIONS(138),
    [aux_sym_css_named_color_token3] = ACTIONS(140),
    [aux_sym_css_named_color_token4] = ACTIONS(138),
    [aux_sym_css_named_color_token5] = ACTIONS(138),
    [aux_sym_css_named_color_token6] = ACTIONS(138),
    [aux_sym_css_named_color_token7] = ACTIONS(138),
    [aux_sym_css_named_color_token8] = ACTIONS(138),
    [aux_sym_css_named_color_token9] = ACTIONS(138),
    [aux_sym_css_named_color_token10] = ACTIONS(140),
    [aux_sym_css_named_color_token11] = ACTIONS(138),
    [aux_sym_css_named_color_token12] = ACTIONS(138),
    [aux_sym_css_named_color_token13] = ACTIONS(138),
    [aux_sym_css_named_color_token14] = ACTIONS(138),
    [aux_sym_css_named_color_token15] = ACTIONS(138),
    [aux_sym_css_named_color_token16] = ACTIONS(138),
    [aux_sym_css_named_color_token17] = ACTIONS(138),
    [aux_sym_css_named_color_token18] = ACTIONS(138),
    [aux_sym_css_named_color_token19] = ACTIONS(138),
    [aux_sym_css_named_color_token20] = ACTIONS(138),
    [aux_sym_css_named_color_token21] = ACTIONS(138),
    [aux_sym_css_named_color_token22] = ACTIONS(138),
    [aux_sym_css_named_color_token23] = ACTIONS(138),
    [aux_sym_css_named_color_token24] = ACTIONS(138),
    [aux_sym_css_named_color_token25] = ACTIONS(138),
    [aux_sym_css_named_color_token26] = ACTIONS(138),
    [aux_sym_css_named_color_token27] = ACTIONS(138),
    [aux_sym_css_named_color_token28] = ACTIONS(138),
    [aux_sym_css_named_color_token29] = ACTIONS(138),
    [aux_sym_css_named_color_token30] = ACTIONS(138),
    [aux_sym_css_named_color_token31] = ACTIONS(138),
    [aux_sym_css_named_color_token32] = ACTIONS(138),
    [aux_sym_css_named_color_token33] = ACTIONS(138),
    [aux_sym_css_named_color_token34] = ACTIONS(138),
    [aux_sym_css_named_color_token35] = ACTIONS(138),
    [aux_sym_css_named_color_token36] = ACTIONS(138),
    [aux_sym_css_named_color_token37] = ACTIONS(138),
    [aux_sym_css_named_color_token38] = ACTIONS(138),
    [aux_sym_css_named_color_token39] = ACTIONS(138),
    [aux_sym_css_named_color_token40] = ACTIONS(138),
    [aux_sym_css_named_color_token41] = ACTIONS(138),
    [aux_sym_css_named_color_token42] = ACTIONS(138),
    [aux_sym_css_named_color_token43] = ACTIONS(138),
    [aux_sym_css_named_color_token44] = ACTIONS(138),
    [aux_sym_css_named_color_token45] = ACTIONS(138),
    [aux_sym_css_named_color_token46] = ACTIONS(138),
    [aux_sym_css_named_color_token47] = ACTIONS(138),
    [aux_sym_css_named_color_token48] = ACTIONS(138),
    [aux_sym_css_named_color_token49] = ACTIONS(138),
    [aux_sym_css_named_color_token50] = ACTIONS(138),
    [aux_sym_css_named_color_token51] = ACTIONS(138),
    [aux_sym_css_named_color_token52] = ACTIONS(140),
    [aux_sym_css_named_color_token53] = ACTIONS(138),
    [aux_sym_css_named_color_token54] = ACTIONS(138),
    [aux_sym_css_named_color_token55] = ACTIONS(140),
    [aux_sym_css_named_color_token56] = ACTIONS(138),
    [aux_sym_css_named_color_token57] = ACTIONS(138),
    [aux_sym_css_named_color_token58] = ACTIONS(138),
    [aux_sym_css_named_color_token59] = ACTIONS(138),
    [aux_sym_css_named_color_token60] = ACTIONS(138),
    [aux_sym_css_named_color_token61] = ACTIONS(138),
    [aux_sym_css_named_color_token62] = ACTIONS(138),
    [aux_sym_css_named_color_token63] = ACTIONS(138),
    [aux_sym_css_named_color_token64] = ACTIONS(140),
    [aux_sym_css_named_color_token65] = ACTIONS(138),
    [aux_sym_css_named_color_token66] = ACTIONS(138),
    [aux_sym_css_named_color_token67] = ACTIONS(138),
    [aux_sym_css_named_color_token68] = ACTIONS(138),
    [aux_sym_css_named_color_token69] = ACTIONS(138),
    [aux_sym_css_named_color_token70] = ACTIONS(138),
    [aux_sym_css_named_color_token71] = ACTIONS(138),
    [aux_sym_css_named_color_token72] = ACTIONS(138),
    [aux_sym_css_named_color_token73] = ACTIONS(138),
    [aux_sym_css_named_color_token74] = ACTIONS(138),
    [aux_sym_css_named_color_token75] = ACTIONS(138),
    [aux_sym_css_named_color_token76] = ACTIONS(138),
    [aux_sym_css_named_color_token77] = ACTIONS(138),
    [aux_sym_css_named_color_token78] = ACTIONS(138),
    [aux_sym_css_named_color_token79] = ACTIONS(138),
    [aux_sym_css_named_color_token80] = ACTIONS(138),
    [aux_sym_css_named_color_token81] = ACTIONS(138),
    [aux_sym_css_named_color_token82] = ACTIONS(138),
    [aux_sym_css_named_color_token83] = ACTIONS(140),
    [aux_sym_css_named_color_token84] = ACTIONS(138),
    [aux_sym_css_named_color_token85] = ACTIONS(138),
    [aux_sym_css_named_color_token86] = ACTIONS(138),
    [aux_sym_css_named_color_token87] = ACTIONS(138),
    [aux_sym_css_named_color_token88] = ACTIONS(138),
    [aux_sym_css_named_color_token89] = ACTIONS(138),
    [aux_sym_css_named_color_token90] = ACTIONS(138),
    [aux_sym_css_named_color_token91] = ACTIONS(138),
    [aux_sym_css_named_color_token92] = ACTIONS(138),
    [aux_sym_css_named_color_token93] = ACTIONS(138),
    [aux_sym_css_named_color_token94] = ACTIONS(138),
    [aux_sym_css_named_color_token95] = ACTIONS(138),
    [aux_sym_css_named_color_token96] = ACTIONS(138),
    [aux_sym_css_named_color_token97] = ACTIONS(138),
    [aux_sym_css_named_color_token98] = ACTIONS(138),
    [aux_sym_css_named_color_token99] = ACTIONS(138),
    [aux_sym_css_named_color_token100] = ACTIONS(138),
    [aux_sym_css_named_color_token101] = ACTIONS(138),
    [aux_sym_css_named_color_token102] = ACTIONS(138),
    [aux_sym_css_named_color_token103] = ACTIONS(138),
    [aux_sym_css_named_color_token104] = ACTIONS(140),
    [aux_sym_css_named_color_token105] = ACTIONS(138),
    [aux_sym_css_named_color_token106] = ACTIONS(140),
    [aux_sym_css_named_color_token107] = ACTIONS(138),
    [aux_sym_css_named_color_token108] = ACTIONS(138),
    [aux_sym_css_named_color_token109] = ACTIONS(138),
    [aux_sym_css_named_color_token110] = ACTIONS(138),
    [aux_sym_css_named_color_token111] = ACTIONS(138),
    [aux_sym_css_named_color_token112] = ACTIONS(138),
    [aux_sym_css_named_color_token113] = ACTIONS(138),
    [aux_sym_css_named_color_token114] = ACTIONS(138),
    [aux_sym_css_named_color_token115] = ACTIONS(138),
    [aux_sym_css_named_color_token116] = ACTIONS(138),
    [aux_sym_css_named_color_token117] = ACTIONS(138),
    [aux_sym_css_named_color_token118] = ACTIONS(138),
    [aux_sym_css_named_color_token119] = ACTIONS(138),
    [aux_sym_css_named_color_token120] = ACTIONS(138),
    [aux_sym_css_named_color_token121] = ACTIONS(138),
    [aux_sym_css_named_color_token122] = ACTIONS(138),
    [aux_sym_css_named_color_token123] = ACTIONS(138),
    [aux_sym_css_named_color_token124] = ACTIONS(138),
    [aux_sym_css_named_color_token125] = ACTIONS(138),
    [aux_sym_css_named_color_token126] = ACTIONS(138),
    [aux_sym_css_named_color_token127] = ACTIONS(138),
    [aux_sym_css_named_color_token128] = ACTIONS(138),
    [aux_sym_css_named_color_token129] = ACTIONS(138),
    [aux_sym_css_named_color_token130] = ACTIONS(138),
    [aux_sym_css_named_color_token131] = ACTIONS(138),
    [aux_sym_css_named_color_token132] = ACTIONS(138),
    [aux_sym_css_named_color_token133] = ACTIONS(138),
    [aux_sym_css_named_color_token134] = ACTIONS(138),
    [aux_sym_css_named_color_token135] = ACTIONS(138),
    [aux_sym_css_named_color_token136] = ACTIONS(138),
    [aux_sym_css_named_color_token137] = ACTIONS(138),
    [aux_sym_css_named_color_token138] = ACTIONS(138),
    [aux_sym_css_named_color_token139] = ACTIONS(138),
    [aux_sym_css_named_color_token140] = ACTIONS(138),
    [aux_sym_css_named_color_token141] = ACTIONS(138),
    [aux_sym_css_named_color_token142] = ACTIONS(138),
    [aux_sym_css_named_color_token143] = ACTIONS(138),
    [aux_sym_css_named_color_token144] = ACTIONS(138),
    [aux_sym_css_named_color_token145] = ACTIONS(140),
    [aux_sym_css_named_color_token146] = ACTIONS(138),
    [aux_sym_css_named_color_token147] = ACTIONS(140),
    [aux_sym_css_named_color_token148] = ACTIONS(138),
    [sym_css_keyword_transparent] = ACTIONS(138),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(142),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(144),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(142),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(144),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(142),
    [aux_sym_css_function_hwb_token1] = ACTIONS(142),
    [aux_sym_css_function_lab_token1] = ACTIONS(142),
    [aux_sym_css_function_oklab_token1] = ACTIONS(142),
    [aux_sym_css_function_lch_token1] = ACTIONS(142),
    [aux_sym_css_function_oklch_token1] = ACTIONS(142),
    [aux_sym_css_function_color_token1] = ACTIONS(142),
    [sym_css_hex_color_6_digits] = ACTIONS(144),
    [sym_css_hex_color_8_digits] = ACTIONS(142),
    [sym_css_hex_color_3_digits] = ACTIONS(144),
    [sym_css_hex_color_4_digits] = ACTIONS(144),
    [aux_sym_css_named_color_token1] = ACTIONS(142),
    [aux_sym_css_named_color_token2] = ACTIONS(142),
    [aux_sym_css_named_color_token3] = ACTIONS(144),
    [aux_sym_css_named_color_token4] = ACTIONS(142),
    [aux_sym_css_named_color_token5] = ACTIONS(142),
    [aux_sym_css_named_color_token6] = ACTIONS(142),
    [aux_sym_css_named_color_token7] = ACTIONS(142),
    [aux_sym_css_named_color_token8] = ACTIONS(142),
    [aux_sym_css_named_color_token9] = ACTIONS(142),
    [aux_sym_css_named_color_token10] = ACTIONS(144),
    [aux_sym_css_named_color_token11] = ACTIONS(142),
    [aux_sym_css_named_color_token12] = ACTIONS(142),
    [aux_sym_css_named_color_token13] = ACTIONS(142),
    [aux_sym_css_named_color_token14] = ACTIONS(142),
    [aux_sym_css_named_color_token15] = ACTIONS(142),
    [aux_sym_css_named_color_token16] = ACTIONS(142),
    [aux_sym_css_named_color_token17] = ACTIONS(142),
    [aux_sym_css_named_color_token18] = ACTIONS(142),
    [aux_sym_css_named_color_token19] = ACTIONS(142),
    [aux_sym_css_named_color_token20] = ACTIONS(142),
    [aux_sym_css_named_color_token21] = ACTIONS(142),
    [aux_sym_css_named_color_token22] = ACTIONS(142),
    [aux_sym_css_named_color_token23] = ACTIONS(142),
    [aux_sym_css_named_color_token24] = ACTIONS(142),
    [aux_sym_css_named_color_token25] = ACTIONS(142),
    [aux_sym_css_named_color_token26] = ACTIONS(142),
    [aux_sym_css_named_color_token27] = ACTIONS(142),
    [aux_sym_css_named_color_token28] = ACTIONS(142),
    [aux_sym_css_named_color_token29] = ACTIONS(142),
    [aux_sym_css_named_color_token30] = ACTIONS(142),
    [aux_sym_css_named_color_token31] = ACTIONS(142),
    [aux_sym_css_named_color_token32] = ACTIONS(142),
    [aux_sym_css_named_color_token33] = ACTIONS(142),
    [aux_sym_css_named_color_token34] = ACTIONS(142),
    [aux_sym_css_named_color_token35] = ACTIONS(142),
    [aux_sym_css_named_color_token36] = ACTIONS(142),
    [aux_sym_css_named_color_token37] = ACTIONS(142),
    [aux_sym_css_named_color_token38] = ACTIONS(142),
    [aux_sym_css_named_color_token39] = ACTIONS(142),
    [aux_sym_css_named_color_token40] = ACTIONS(142),
    [aux_sym_css_named_color_token41] = ACTIONS(142),
    [aux_sym_css_named_color_token42] = ACTIONS(142),
    [aux_sym_css_named_color_token43] = ACTIONS(142),
    [aux_sym_css_named_color_token44] = ACTIONS(142),
    [aux_sym_css_named_color_token45] = ACTIONS(142),
    [aux_sym_css_named_color_token46] = ACTIONS(142),
    [aux_sym_css_named_color_token47] = ACTIONS(142),
    [aux_sym_css_named_color_token48] = ACTIONS(142),
    [aux_sym_css_named_color_token49] = ACTIONS(142),
    [aux_sym_css_named_color_token50] = ACTIONS(142),
    [aux_sym_css_named_color_token51] = ACTIONS(142),
    [aux_sym_css_named_color_token52] = ACTIONS(144),
    [aux_sym_css_named_color_token53] = ACTIONS(142),
    [aux_sym_css_named_color_token54] = ACTIONS(142),
    [aux_sym_css_named_color_token55] = ACTIONS(144),
    [aux_sym_css_named_color_token56] = ACTIONS(142),
    [aux_sym_css_named_color_token57] = ACTIONS(142),
    [aux_sym_css_named_color_token58] = ACTIONS(142),
    [aux_sym_css_named_color_token59] = ACTIONS(142),
    [aux_sym_css_named_color_token60] = ACTIONS(142),
    [aux_sym_css_named_color_token61] = ACTIONS(142),
    [aux_sym_css_named_color_token62] = ACTIONS(142),
    [aux_sym_css_named_color_token63] = ACTIONS(142),
    [aux_sym_css_named_color_token64] = ACTIONS(144),
    [aux_sym_css_named_color_token65] = ACTIONS(142),
    [aux_sym_css_named_color_token66] = ACTIONS(142),
    [aux_sym_css_named_color_token67] = ACTIONS(142),
    [aux_sym_css_named_color_token68] = ACTIONS(142),
    [aux_sym_css_named_color_token69] = ACTIONS(142),
    [aux_sym_css_named_color_token70] = ACTIONS(142),
    [aux_sym_css_named_color_token71] = ACTIONS(142),
    [aux_sym_css_named_color_token72] = ACTIONS(142),
    [aux_sym_css_named_color_token73] = ACTIONS(142),
    [aux_sym_css_named_color_token74] = ACTIONS(142),
    [aux_sym_css_named_color_token75] = ACTIONS(142),
    [aux_sym_css_named_color_token76] = ACTIONS(142),
    [aux_sym_css_named_color_token77] = ACTIONS(142),
    [aux_sym_css_named_color_token78] = ACTIONS(142),
    [aux_sym_css_named_color_token79] = ACTIONS(142),
    [aux_sym_css_named_color_token80] = ACTIONS(142),
    [aux_sym_css_named_color_token81] = ACTIONS(142),
    [aux_sym_css_named_color_token82] = ACTIONS(142),
    [aux_sym_css_named_color_token83] = ACTIONS(144),
    [aux_sym_css_named_color_token84] = ACTIONS(142),
    [aux_sym_css_named_color_token85] = ACTIONS(142),
    [aux_sym_css_named_color_token86] = ACTIONS(142),
    [aux_sym_css_named_color_token87] = ACTIONS(142),
    [aux_sym_css_named_color_token88] = ACTIONS(142),
    [aux_sym_css_named_color_token89] = ACTIONS(142),
    [aux_sym_css_named_color_token90] = ACTIONS(142),
    [aux_sym_css_named_color_token91] = ACTIONS(142),
    [aux_sym_css_named_color_token92] = ACTIONS(142),
    [aux_sym_css_named_color_token93] = ACTIONS(142),
    [aux_sym_css_named_color_token94] = ACTIONS(142),
    [aux_sym_css_named_color_token95] = ACTIONS(142),
    [aux_sym_css_named_color_token96] = ACTIONS(142),
    [aux_sym_css_named_color_token97] = ACTIONS(142),
    [aux_sym_css_named_color_token98] = ACTIONS(142),
    [aux_sym_css_named_color_token99] = ACTIONS(142),
    [aux_sym_css_named_color_token100] = ACTIONS(142),
    [aux_sym_css_named_color_token101] = ACTIONS(142),
    [aux_sym_css_named_color_token102] = ACTIONS(142),
    [aux_sym_css_named_color_token103] = ACTIONS(142),
    [aux_sym_css_named_color_token104] = ACTIONS(144),
    [aux_sym_css_named_color_token105] = ACTIONS(142),
    [aux_sym_css_named_color_token106] = ACTIONS(144),
    [aux_sym_css_named_color_token107] = ACTIONS(142),
    [aux_sym_css_named_color_token108] = ACTIONS(142),
    [aux_sym_css_named_color_token109] = ACTIONS(142),
    [aux_sym_css_named_color_token110] = ACTIONS(142),
    [aux_sym_css_named_color_token111] = ACTIONS(142),
    [aux_sym_css_named_color_token112] = ACTIONS(142),
    [aux_sym_css_named_color_token113] = ACTIONS(142),
    [aux_sym_css_named_color_token114] = ACTIONS(142),
    [aux_sym_css_named_color_token115] = ACTIONS(142),
    [aux_sym_css_named_color_token116] = ACTIONS(142),
    [aux_sym_css_named_color_token117] = ACTIONS(142),
    [aux_sym_css_named_color_token118] = ACTIONS(142),
    [aux_sym_css_named_color_token119] = ACTIONS(142),
    [aux_sym_css_named_color_token120] = ACTIONS(142),
    [aux_sym_css_named_color_token121] = ACTIONS(142),
    [aux_sym_css_named_color_token122] = ACTIONS(142),
    [aux_sym_css_named_color_token123] = ACTIONS(142),
    [aux_sym_css_named_color_token124] = ACTIONS(142),
    [aux_sym_css_named_color_token125] = ACTIONS(142),
    [aux_sym_css_named_color_token126] = ACTIONS(142),
    [aux_sym_css_named_color_token127] = ACTIONS(142),
    [aux_sym_css_named_color_token128] = ACTIONS(142),
    [aux_sym_css_named_color_token129] = ACTIONS(142),
    [aux_sym_css_named_color_token130] = ACTIONS(142),
    [aux_sym_css_named_color_token131] = ACTIONS(142),
    [aux_sym_css_named_color_token132] = ACTIONS(142),
    [aux_sym_css_named_color_token133] = ACTIONS(142),
    [aux_sym_css_named_color_token134] = ACTIONS(142),
    [aux_sym_css_named_color_token135] = ACTIONS(142),
    [aux_sym_css_named_color_token136] = ACTIONS(142),
    [aux_sym_css_named_color_token137] = ACTIONS(142),
    [aux_sym_css_named_color_token138] = ACTIONS(142),
    [aux_sym_css_named_color_token139] = ACTIONS(142),
    [aux_sym_css_named_color_token140] = ACTIONS(142),
    [aux_sym_css_named_color_token141] = ACTIONS(142),
    [aux_sym_css_named_color_token142] = ACTIONS(142),
    [aux_sym_css_named_color_token143] = ACTIONS(142),
    [aux_sym_css_named_color_token144] = ACTIONS(142),
    [aux_sym_css_named_color_token145] = ACTIONS(144),
    [aux_sym_css_named_color_token146] = ACTIONS(142),
    [aux_sym_css_named_color_token147] = ACTIONS(144),
    [aux_sym_css_named_color_token148] = ACTIONS(142),
    [sym_css_keyword_transparent] = ACTIONS(142),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(148),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(146),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(148),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(146),
    [aux_sym_css_function_hwb_token1] = ACTIONS(146),
    [aux_sym_css_function_lab_token1] = ACTIONS(146),
    [aux_sym_css_function_oklab_token1] = ACTIONS(146),
    [aux_sym_css_function_lch_token1] = ACTIONS(146),
    [aux_sym_css_function_oklch_token1] = ACTIONS(146),
    [aux_sym_css_function_color_token1] = ACTIONS(146),
    [sym_css_hex_color_6_digits] = ACTIONS(148),
    [sym_css_hex_color_8_digits] = ACTIONS(146),
    [sym_css_hex_color_3_digits] = ACTIONS(148),
    [sym_css_hex_color_4_digits] = ACTIONS(148),
    [aux_sym_css_named_color_token1] = ACTIONS(146),
    [aux_sym_css_named_color_token2] = ACTIONS(146),
    [aux_sym_css_named_color_token3] = ACTIONS(148),
    [aux_sym_css_named_color_token4] = ACTIONS(146),
    [aux_sym_css_named_color_token5] = ACTIONS(146),
    [aux_sym_css_named_color_token6] = ACTIONS(146),
    [aux_sym_css_named_color_token7] = ACTIONS(146),
    [aux_sym_css_named_color_token8] = ACTIONS(146),
    [aux_sym_css_named_color_token9] = ACTIONS(146),
    [aux_sym_css_named_color_token10] = ACTIONS(148),
    [aux_sym_css_named_color_token11] = ACTIONS(146),
    [aux_sym_css_named_color_token12] = ACTIONS(146),
    [aux_sym_css_named_color_token13] = ACTIONS(146),
    [aux_sym_css_named_color_token14] = ACTIONS(146),
    [aux_sym_css_named_color_token15] = ACTIONS(146),
    [aux_sym_css_named_color_token16] = ACTIONS(146),
    [aux_sym_css_named_color_token17] = ACTIONS(146),
    [aux_sym_css_named_color_token18] = ACTIONS(146),
    [aux_sym_css_named_color_token19] = ACTIONS(146),
    [aux_sym_css_named_color_token20] = ACTIONS(146),
    [aux_sym_css_named_color_token21] = ACTIONS(146),
    [aux_sym_css_named_color_token22] = ACTIONS(146),
    [aux_sym_css_named_color_token23] = ACTIONS(146),
    [aux_sym_css_named_color_token24] = ACTIONS(146),
    [aux_sym_css_named_color_token25] = ACTIONS(146),
    [aux_sym_css_named_color_token26] = ACTIONS(146),
    [aux_sym_css_named_color_token27] = ACTIONS(146),
    [aux_sym_css_named_color_token28] = ACTIONS(146),
    [aux_sym_css_named_color_token29] = ACTIONS(146),
    [aux_sym_css_named_color_token30] = ACTIONS(146),
    [aux_sym_css_named_color_token31] = ACTIONS(146),
    [aux_sym_css_named_color_token32] = ACTIONS(146),
    [aux_sym_css_named_color_token33] = ACTIONS(146),
    [aux_sym_css_named_color_token34] = ACTIONS(146),
    [aux_sym_css_named_color_token35] = ACTIONS(146),
    [aux_sym_css_named_color_token36] = ACTIONS(146),
    [aux_sym_css_named_color_token37] = ACTIONS(146),
    [aux_sym_css_named_color_token38] = ACTIONS(146),
    [aux_sym_css_named_color_token39] = ACTIONS(146),
    [aux_sym_css_named_color_token40] = ACTIONS(146),
    [aux_sym_css_named_color_token41] = ACTIONS(146),
    [aux_sym_css_named_color_token42] = ACTIONS(146),
    [aux_sym_css_named_color_token43] = ACTIONS(146),
    [aux_sym_css_named_color_token44] = ACTIONS(146),
    [aux_sym_css_named_color_token45] = ACTIONS(146),
    [aux_sym_css_named_color_token46] = ACTIONS(146),
    [aux_sym_css_named_color_token47] = ACTIONS(146),
    [aux_sym_css_named_color_token48] = ACTIONS(146),
    [aux_sym_css_named_color_token49] = ACTIONS(146),
    [aux_sym_css_named_color_token50] = ACTIONS(146),
    [aux_sym_css_named_color_token51] = ACTIONS(146),
    [aux_sym_css_named_color_token52] = ACTIONS(148),
    [aux_sym_css_named_color_token53] = ACTIONS(146),
    [aux_sym_css_named_color_token54] = ACTIONS(146),
    [aux_sym_css_named_color_token55] = ACTIONS(148),
    [aux_sym_css_named_color_token56] = ACTIONS(146),
    [aux_sym_css_named_color_token57] = ACTIONS(146),
    [aux_sym_css_named_color_token58] = ACTIONS(146),
    [aux_sym_css_named_color_token59] = ACTIONS(146),
    [aux_sym_css_named_color_token60] = ACTIONS(146),
    [aux_sym_css_named_color_token61] = ACTIONS(146),
    [aux_sym_css_named_color_token62] = ACTIONS(146),
    [aux_sym_css_named_color_token63] = ACTIONS(146),
    [aux_sym_css_named_color_token64] = ACTIONS(148),
    [aux_sym_css_named_color_token65] = ACTIONS(146),
    [aux_sym_css_named_color_token66] = ACTIONS(146),
    [aux_sym_css_named_color_token67] = ACTIONS(146),
    [aux_sym_css_named_color_token68] = ACTIONS(146),
    [aux_sym_css_named_color_token69] = ACTIONS(146),
    [aux_sym_css_named_color_token70] = ACTIONS(146),
    [aux_sym_css_named_color_token71] = ACTIONS(146),
    [aux_sym_css_named_color_token72] = ACTIONS(146),
    [aux_sym_css_named_color_token73] = ACTIONS(146),
    [aux_sym_css_named_color_token74] = ACTIONS(146),
    [aux_sym_css_named_color_token75] = ACTIONS(146),
    [aux_sym_css_named_color_token76] = ACTIONS(146),
    [aux_sym_css_named_color_token77] = ACTIONS(146),
    [aux_sym_css_named_color_token78] = ACTIONS(146),
    [aux_sym_css_named_color_token79] = ACTIONS(146),
    [aux_sym_css_named_color_token80] = ACTIONS(146),
    [aux_sym_css_named_color_token81] = ACTIONS(146),
    [aux_sym_css_named_color_token82] = ACTIONS(146),
    [aux_sym_css_named_color_token83] = ACTIONS(148),
    [aux_sym_css_named_color_token84] = ACTIONS(146),
    [aux_sym_css_named_color_token85] = ACTIONS(146),
    [aux_sym_css_named_color_token86] = ACTIONS(146),
    [aux_sym_css_named_color_token87] = ACTIONS(146),
    [aux_sym_css_named_color_token88] = ACTIONS(146),
    [aux_sym_css_named_color_token89] = ACTIONS(146),
    [aux_sym_css_named_color_token90] = ACTIONS(146),
    [aux_sym_css_named_color_token91] = ACTIONS(146),
    [aux_sym_css_named_color_token92] = ACTIONS(146),
    [aux_sym_css_named_color_token93] = ACTIONS(146),
    [aux_sym_css_named_color_token94] = ACTIONS(146),
    [aux_sym_css_named_color_token95] = ACTIONS(146),
    [aux_sym_css_named_color_token96] = ACTIONS(146),
    [aux_sym_css_named_color_token97] = ACTIONS(146),
    [aux_sym_css_named_color_token98] = ACTIONS(146),
    [aux_sym_css_named_color_token99] = ACTIONS(146),
    [aux_sym_css_named_color_token100] = ACTIONS(146),
    [aux_sym_css_named_color_token101] = ACTIONS(146),
    [aux_sym_css_named_color_token102] = ACTIONS(146),
    [aux_sym_css_named_color_token103] = ACTIONS(146),
    [aux_sym_css_named_color_token104] = ACTIONS(148),
    [aux_sym_css_named_color_token105] = ACTIONS(146),
    [aux_sym_css_named_color_token106] = ACTIONS(148),
    [aux_sym_css_named_color_token107] = ACTIONS(146),
    [aux_sym_css_named_color_token108] = ACTIONS(146),
    [aux_sym_css_named_color_token109] = ACTIONS(146),
    [aux_sym_css_named_color_token110] = ACTIONS(146),
    [aux_sym_css_named_color_token111] = ACTIONS(146),
    [aux_sym_css_named_color_token112] = ACTIONS(146),
    [aux_sym_css_named_color_token113] = ACTIONS(146),
    [aux_sym_css_named_color_token114] = ACTIONS(146),
    [aux_sym_css_named_color_token115] = ACTIONS(146),
    [aux_sym_css_named_color_token116] = ACTIONS(146),
    [aux_sym_css_named_color_token117] = ACTIONS(146),
    [aux_sym_css_named_color_token118] = ACTIONS(146),
    [aux_sym_css_named_color_token119] = ACTIONS(146),
    [aux_sym_css_named_color_token120] = ACTIONS(146),
    [aux_sym_css_named_color_token121] = ACTIONS(146),
    [aux_sym_css_named_color_token122] = ACTIONS(146),
    [aux_sym_css_named_color_token123] = ACTIONS(146),
    [aux_sym_css_named_color_token124] = ACTIONS(146),
    [aux_sym_css_named_color_token125] = ACTIONS(146),
    [aux_sym_css_named_color_token126] = ACTIONS(146),
    [aux_sym_css_named_color_token127] = ACTIONS(146),
    [aux_sym_css_named_color_token128] = ACTIONS(146),
    [aux_sym_css_named_color_token129] = ACTIONS(146),
    [aux_sym_css_named_color_token130] = ACTIONS(146),
    [aux_sym_css_named_color_token131] = ACTIONS(146),
    [aux_sym_css_named_color_token132] = ACTIONS(146),
    [aux_sym_css_named_color_token133] = ACTIONS(146),
    [aux_sym_css_named_color_token134] = ACTIONS(146),
    [aux_sym_css_named_color_token135] = ACTIONS(146),
    [aux_sym_css_named_color_token136] = ACTIONS(146),
    [aux_sym_css_named_color_token137] = ACTIONS(146),
    [aux_sym_css_named_color_token138] = ACTIONS(146),
    [aux_sym_css_named_color_token139] = ACTIONS(146),
    [aux_sym_css_named_color_token140] = ACTIONS(146),
    [aux_sym_css_named_color_token141] = ACTIONS(146),
    [aux_sym_css_named_color_token142] = ACTIONS(146),
    [aux_sym_css_named_color_token143] = ACTIONS(146),
    [aux_sym_css_named_color_token144] = ACTIONS(146),
    [aux_sym_css_named_color_token145] = ACTIONS(148),
    [aux_sym_css_named_color_token146] = ACTIONS(146),
    [aux_sym_css_named_color_token147] = ACTIONS(148),
    [aux_sym_css_named_color_token148] = ACTIONS(146),
    [sym_css_keyword_transparent] = ACTIONS(146),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(146),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(148),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(146),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(148),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(146),
    [aux_sym_css_function_hwb_token1] = ACTIONS(146),
    [aux_sym_css_function_lab_token1] = ACTIONS(146),
    [aux_sym_css_function_oklab_token1] = ACTIONS(146),
    [aux_sym_css_function_lch_token1] = ACTIONS(146),
    [aux_sym_css_function_oklch_token1] = ACTIONS(146),
    [aux_sym_css_function_color_token1] = ACTIONS(146),
    [sym_css_hex_color_6_digits] = ACTIONS(148),
    [sym_css_hex_color_8_digits] = ACTIONS(146),
    [sym_css_hex_color_3_digits] = ACTIONS(148),
    [sym_css_hex_color_4_digits] = ACTIONS(148),
    [aux_sym_css_named_color_token1] = ACTIONS(146),
    [aux_sym_css_named_color_token2] = ACTIONS(146),
    [aux_sym_css_named_color_token3] = ACTIONS(148),
    [aux_sym_css_named_color_token4] = ACTIONS(146),
    [aux_sym_css_named_color_token5] = ACTIONS(146),
    [aux_sym_css_named_color_token6] = ACTIONS(146),
    [aux_sym_css_named_color_token7] = ACTIONS(146),
    [aux_sym_css_named_color_token8] = ACTIONS(146),
    [aux_sym_css_named_color_token9] = ACTIONS(146),
    [aux_sym_css_named_color_token10] = ACTIONS(148),
    [aux_sym_css_named_color_token11] = ACTIONS(146),
    [aux_sym_css_named_color_token12] = ACTIONS(146),
    [aux_sym_css_named_color_token13] = ACTIONS(146),
    [aux_sym_css_named_color_token14] = ACTIONS(146),
    [aux_sym_css_named_color_token15] = ACTIONS(146),
    [aux_sym_css_named_color_token16] = ACTIONS(146),
    [aux_sym_css_named_color_token17] = ACTIONS(146),
    [aux_sym_css_named_color_token18] = ACTIONS(146),
    [aux_sym_css_named_color_token19] = ACTIONS(146),
    [aux_sym_css_named_color_token20] = ACTIONS(146),
    [aux_sym_css_named_color_token21] = ACTIONS(146),
    [aux_sym_css_named_color_token22] = ACTIONS(146),
    [aux_sym_css_named_color_token23] = ACTIONS(146),
    [aux_sym_css_named_color_token24] = ACTIONS(146),
    [aux_sym_css_named_color_token25] = ACTIONS(146),
    [aux_sym_css_named_color_token26] = ACTIONS(146),
    [aux_sym_css_named_color_token27] = ACTIONS(146),
    [aux_sym_css_named_color_token28] = ACTIONS(146),
    [aux_sym_css_named_color_token29] = ACTIONS(146),
    [aux_sym_css_named_color_token30] = ACTIONS(146),
    [aux_sym_css_named_color_token31] = ACTIONS(146),
    [aux_sym_css_named_color_token32] = ACTIONS(146),
    [aux_sym_css_named_color_token33] = ACTIONS(146),
    [aux_sym_css_named_color_token34] = ACTIONS(146),
    [aux_sym_css_named_color_token35] = ACTIONS(146),
    [aux_sym_css_named_color_token36] = ACTIONS(146),
    [aux_sym_css_named_color_token37] = ACTIONS(146),
    [aux_sym_css_named_color_token38] = ACTIONS(146),
    [aux_sym_css_named_color_token39] = ACTIONS(146),
    [aux_sym_css_named_color_token40] = ACTIONS(146),
    [aux_sym_css_named_color_token41] = ACTIONS(146),
    [aux_sym_css_named_color_token42] = ACTIONS(146),
    [aux_sym_css_named_color_token43] = ACTIONS(146),
    [aux_sym_css_named_color_token44] = ACTIONS(146),
    [aux_sym_css_named_color_token45] = ACTIONS(146),
    [aux_sym_css_named_color_token46] = ACTIONS(146),
    [aux_sym_css_named_color_token47] = ACTIONS(146),
    [aux_sym_css_named_color_token48] = ACTIONS(146),
    [aux_sym_css_named_color_token49] = ACTIONS(146),
    [aux_sym_css_named_color_token50] = ACTIONS(146),
    [aux_sym_css_named_color_token51] = ACTIONS(146),
    [aux_sym_css_named_color_token52] = ACTIONS(148),
    [aux_sym_css_named_color_token53] = ACTIONS(146),
    [aux_sym_css_named_color_token54] = ACTIONS(146),
    [aux_sym_css_named_color_token55] = ACTIONS(148),
    [aux_sym_css_named_color_token56] = ACTIONS(146),
    [aux_sym_css_named_color_token57] = ACTIONS(146),
    [aux_sym_css_named_color_token58] = ACTIONS(146),
    [aux_sym_css_named_color_token59] = ACTIONS(146),
    [aux_sym_css_named_color_token60] = ACTIONS(146),
    [aux_sym_css_named_color_token61] = ACTIONS(146),
    [aux_sym_css_named_color_token62] = ACTIONS(146),
    [aux_sym_css_named_color_token63] = ACTIONS(146),
    [aux_sym_css_named_color_token64] = ACTIONS(148),
    [aux_sym_css_named_color_token65] = ACTIONS(146),
    [aux_sym_css_named_color_token66] = ACTIONS(146),
    [aux_sym_css_named_color_token67] = ACTIONS(146),
    [aux_sym_css_named_color_token68] = ACTIONS(146),
    [aux_sym_css_named_color_token69] = ACTIONS(146),
    [aux_sym_css_named_color_token70] = ACTIONS(146),
    [aux_sym_css_named_color_token71] = ACTIONS(146),
    [aux_sym_css_named_color_token72] = ACTIONS(146),
    [aux_sym_css_named_color_token73] = ACTIONS(146),
    [aux_sym_css_named_color_token74] = ACTIONS(146),
    [aux_sym_css_named_color_token75] = ACTIONS(146),
    [aux_sym_css_named_color_token76] = ACTIONS(146),
    [aux_sym_css_named_color_token77] = ACTIONS(146),
    [aux_sym_css_named_color_token78] = ACTIONS(146),
    [aux_sym_css_named_color_token79] = ACTIONS(146),
    [aux_sym_css_named_color_token80] = ACTIONS(146),
    [aux_sym_css_named_color_token81] = ACTIONS(146),
    [aux_sym_css_named_color_token82] = ACTIONS(146),
    [aux_sym_css_named_color_token83] = ACTIONS(148),
    [aux_sym_css_named_color_token84] = ACTIONS(146),
    [aux_sym_css_named_color_token85] = ACTIONS(146),
    [aux_sym_css_named_color_token86] = ACTIONS(146),
    [aux_sym_css_named_color_token87] = ACTIONS(146),
    [aux_sym_css_named_color_token88] = ACTIONS(146),
    [aux_sym_css_named_color_token89] = ACTIONS(146),
    [aux_sym_css_named_color_token90] = ACTIONS(146),
    [aux_sym_css_named_color_token91] = ACTIONS(146),
    [aux_sym_css_named_color_token92] = ACTIONS(146),
    [aux_sym_css_named_color_token93] = ACTIONS(146),
    [aux_sym_css_named_color_token94] = ACTIONS(146),
    [aux_sym_css_named_color_token95] = ACTIONS(146),
    [aux_sym_css_named_color_token96] = ACTIONS(146),
    [aux_sym_css_named_color_token97] = ACTIONS(146),
    [aux_sym_css_named_color_token98] = ACTIONS(146),
    [aux_sym_css_named_color_token99] = ACTIONS(146),
    [aux_sym_css_named_color_token100] = ACTIONS(146),
    [aux_sym_css_named_color_token101] = ACTIONS(146),
    [aux_sym_css_named_color_token102] = ACTIONS(146),
    [aux_sym_css_named_color_token103] = ACTIONS(146),
    [aux_sym_css_named_color_token104] = ACTIONS(148),
    [aux_sym_css_named_color_token105] = ACTIONS(146),
    [aux_sym_css_named_color_token106] = ACTIONS(148),
    [aux_sym_css_named_color_token107] = ACTIONS(146),
    [aux_sym_css_named_color_token108] = ACTIONS(146),
    [aux_sym_css_named_color_token109] = ACTIONS(146),
    [aux_sym_css_named_color_token110] = ACTIONS(146),
    [aux_sym_css_named_color_token111] = ACTIONS(146),
    [aux_sym_css_named_color_token112] = ACTIONS(146),
    [aux_sym_css_named_color_token113] = ACTIONS(146),
    [aux_sym_css_named_color_token114] = ACTIONS(146),
    [aux_sym_css_named_color_token115] = ACTIONS(146),
    [aux_sym_css_named_color_token116] = ACTIONS(146),
    [aux_sym_css_named_color_token117] = ACTIONS(146),
    [aux_sym_css_named_color_token118] = ACTIONS(146),
    [aux_sym_css_named_color_token119] = ACTIONS(146),
    [aux_sym_css_named_color_token120] = ACTIONS(146),
    [aux_sym_css_named_color_token121] = ACTIONS(146),
    [aux_sym_css_named_color_token122] = ACTIONS(146),
    [aux_sym_css_named_color_token123] = ACTIONS(146),
    [aux_sym_css_named_color_token124] = ACTIONS(146),
    [aux_sym_css_named_color_token125] = ACTIONS(146),
    [aux_sym_css_named_color_token126] = ACTIONS(146),
    [aux_sym_css_named_color_token127] = ACTIONS(146),
    [aux_sym_css_named_color_token128] = ACTIONS(146),
    [aux_sym_css_named_color_token129] = ACTIONS(146),
    [aux_sym_css_named_color_token130] = ACTIONS(146),
    [aux_sym_css_named_color_token131] = ACTIONS(146),
    [aux_sym_css_named_color_token132] = ACTIONS(146),
    [aux_sym_css_named_color_token133] = ACTIONS(146),
    [aux_sym_css_named_color_token134] = ACTIONS(146),
    [aux_sym_css_named_color_token135] = ACTIONS(146),
    [aux_sym_css_named_color_token136] = ACTIONS(146),
    [aux_sym_css_named_color_token137] = ACTIONS(146),
    [aux_sym_css_named_color_token138] = ACTIONS(146),
    [aux_sym_css_named_color_token139] = ACTIONS(146),
    [aux_sym_css_named_color_token140] = ACTIONS(146),
    [aux_sym_css_named_color_token141] = ACTIONS(146),
    [aux_sym_css_named_color_token142] = ACTIONS(146),
    [aux_sym_css_named_color_token143] = ACTIONS(146),
    [aux_sym_css_named_color_token144] = ACTIONS(146),
    [aux_sym_css_named_color_token145] = ACTIONS(148),
    [aux_sym_css_named_color_token146] = ACTIONS(146),
    [aux_sym_css_named_color_token147] = ACTIONS(148),
    [aux_sym_css_named_color_token148] = ACTIONS(146),
    [sym_css_keyword_transparent] = ACTIONS(146),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(152),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(150),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(152),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(150),
    [aux_sym_css_function_hwb_token1] = ACTIONS(150),
    [aux_sym_css_function_lab_token1] = ACTIONS(150),
    [aux_sym_css_function_oklab_token1] = ACTIONS(150),
    [aux_sym_css_function_lch_token1] = ACTIONS(150),
    [aux_sym_css_function_oklch_token1] = ACTIONS(150),
    [aux_sym_css_function_color_token1] = ACTIONS(150),
    [sym_css_hex_color_6_digits] = ACTIONS(152),
    [sym_css_hex_color_8_digits] = ACTIONS(150),
    [sym_css_hex_color_3_digits] = ACTIONS(152),
    [sym_css_hex_color_4_digits] = ACTIONS(152),
    [aux_sym_css_named_color_token1] = ACTIONS(150),
    [aux_sym_css_named_color_token2] = ACTIONS(150),
    [aux_sym_css_named_color_token3] = ACTIONS(152),
    [aux_sym_css_named_color_token4] = ACTIONS(150),
    [aux_sym_css_named_color_token5] = ACTIONS(150),
    [aux_sym_css_named_color_token6] = ACTIONS(150),
    [aux_sym_css_named_color_token7] = ACTIONS(150),
    [aux_sym_css_named_color_token8] = ACTIONS(150),
    [aux_sym_css_named_color_token9] = ACTIONS(150),
    [aux_sym_css_named_color_token10] = ACTIONS(152),
    [aux_sym_css_named_color_token11] = ACTIONS(150),
    [aux_sym_css_named_color_token12] = ACTIONS(150),
    [aux_sym_css_named_color_token13] = ACTIONS(150),
    [aux_sym_css_named_color_token14] = ACTIONS(150),
    [aux_sym_css_named_color_token15] = ACTIONS(150),
    [aux_sym_css_named_color_token16] = ACTIONS(150),
    [aux_sym_css_named_color_token17] = ACTIONS(150),
    [aux_sym_css_named_color_token18] = ACTIONS(150),
    [aux_sym_css_named_color_token19] = ACTIONS(150),
    [aux_sym_css_named_color_token20] = ACTIONS(150),
    [aux_sym_css_named_color_token21] = ACTIONS(150),
    [aux_sym_css_named_color_token22] = ACTIONS(150),
    [aux_sym_css_named_color_token23] = ACTIONS(150),
    [aux_sym_css_named_color_token24] = ACTIONS(150),
    [aux_sym_css_named_color_token25] = ACTIONS(150),
    [aux_sym_css_named_color_token26] = ACTIONS(150),
    [aux_sym_css_named_color_token27] = ACTIONS(150),
    [aux_sym_css_named_color_token28] = ACTIONS(150),
    [aux_sym_css_named_color_token29] = ACTIONS(150),
    [aux_sym_css_named_color_token30] = ACTIONS(150),
    [aux_sym_css_named_color_token31] = ACTIONS(150),
    [aux_sym_css_named_color_token32] = ACTIONS(150),
    [aux_sym_css_named_color_token33] = ACTIONS(150),
    [aux_sym_css_named_color_token34] = ACTIONS(150),
    [aux_sym_css_named_color_token35] = ACTIONS(150),
    [aux_sym_css_named_color_token36] = ACTIONS(150),
    [aux_sym_css_named_color_token37] = ACTIONS(150),
    [aux_sym_css_named_color_token38] = ACTIONS(150),
    [aux_sym_css_named_color_token39] = ACTIONS(150),
    [aux_sym_css_named_color_token40] = ACTIONS(150),
    [aux_sym_css_named_color_token41] = ACTIONS(150),
    [aux_sym_css_named_color_token42] = ACTIONS(150),
    [aux_sym_css_named_color_token43] = ACTIONS(150),
    [aux_sym_css_named_color_token44] = ACTIONS(150),
    [aux_sym_css_named_color_token45] = ACTIONS(150),
    [aux_sym_css_named_color_token46] = ACTIONS(150),
    [aux_sym_css_named_color_token47] = ACTIONS(150),
    [aux_sym_css_named_color_token48] = ACTIONS(150),
    [aux_sym_css_named_color_token49] = ACTIONS(150),
    [aux_sym_css_named_color_token50] = ACTIONS(150),
    [aux_sym_css_named_color_token51] = ACTIONS(150),
    [aux_sym_css_named_color_token52] = ACTIONS(152),
    [aux_sym_css_named_color_token53] = ACTIONS(150),
    [aux_sym_css_named_color_token54] = ACTIONS(150),
    [aux_sym_css_named_color_token55] = ACTIONS(152),
    [aux_sym_css_named_color_token56] = ACTIONS(150),
    [aux_sym_css_named_color_token57] = ACTIONS(150),
    [aux_sym_css_named_color_token58] = ACTIONS(150),
    [aux_sym_css_named_color_token59] = ACTIONS(150),
    [aux_sym_css_named_color_token60] = ACTIONS(150),
    [aux_sym_css_named_color_token61] = ACTIONS(150),
    [aux_sym_css_named_color_token62] = ACTIONS(150),
    [aux_sym_css_named_color_token63] = ACTIONS(150),
    [aux_sym_css_named_color_token64] = ACTIONS(152),
    [aux_sym_css_named_color_token65] = ACTIONS(150),
    [aux_sym_css_named_color_token66] = ACTIONS(150),
    [aux_sym_css_named_color_token67] = ACTIONS(150),
    [aux_sym_css_named_color_token68] = ACTIONS(150),
    [aux_sym_css_named_color_token69] = ACTIONS(150),
    [aux_sym_css_named_color_token70] = ACTIONS(150),
    [aux_sym_css_named_color_token71] = ACTIONS(150),
    [aux_sym_css_named_color_token72] = ACTIONS(150),
    [aux_sym_css_named_color_token73] = ACTIONS(150),
    [aux_sym_css_named_color_token74] = ACTIONS(150),
    [aux_sym_css_named_color_token75] = ACTIONS(150),
    [aux_sym_css_named_color_token76] = ACTIONS(150),
    [aux_sym_css_named_color_token77] = ACTIONS(150),
    [aux_sym_css_named_color_token78] = ACTIONS(150),
    [aux_sym_css_named_color_token79] = ACTIONS(150),
    [aux_sym_css_named_color_token80] = ACTIONS(150),
    [aux_sym_css_named_color_token81] = ACTIONS(150),
    [aux_sym_css_named_color_token82] = ACTIONS(150),
    [aux_sym_css_named_color_token83] = ACTIONS(152),
    [aux_sym_css_named_color_token84] = ACTIONS(150),
    [aux_sym_css_named_color_token85] = ACTIONS(150),
    [aux_sym_css_named_color_token86] = ACTIONS(150),
    [aux_sym_css_named_color_token87] = ACTIONS(150),
    [aux_sym_css_named_color_token88] = ACTIONS(150),
    [aux_sym_css_named_color_token89] = ACTIONS(150),
    [aux_sym_css_named_color_token90] = ACTIONS(150),
    [aux_sym_css_named_color_token91] = ACTIONS(150),
    [aux_sym_css_named_color_token92] = ACTIONS(150),
    [aux_sym_css_named_color_token93] = ACTIONS(150),
    [aux_sym_css_named_color_token94] = ACTIONS(150),
    [aux_sym_css_named_color_token95] = ACTIONS(150),
    [aux_sym_css_named_color_token96] = ACTIONS(150),
    [aux_sym_css_named_color_token97] = ACTIONS(150),
    [aux_sym_css_named_color_token98] = ACTIONS(150),
    [aux_sym_css_named_color_token99] = ACTIONS(150),
    [aux_sym_css_named_color_token100] = ACTIONS(150),
    [aux_sym_css_named_color_token101] = ACTIONS(150),
    [aux_sym_css_named_color_token102] = ACTIONS(150),
    [aux_sym_css_named_color_token103] = ACTIONS(150),
    [aux_sym_css_named_color_token104] = ACTIONS(152),
    [aux_sym_css_named_color_token105] = ACTIONS(150),
    [aux_sym_css_named_color_token106] = ACTIONS(152),
    [aux_sym_css_named_color_token107] = ACTIONS(150),
    [aux_sym_css_named_color_token108] = ACTIONS(150),
    [aux_sym_css_named_color_token109] = ACTIONS(150),
    [aux_sym_css_named_color_token110] = ACTIONS(150),
    [aux_sym_css_named_color_token111] = ACTIONS(150),
    [aux_sym_css_named_color_token112] = ACTIONS(150),
    [aux_sym_css_named_color_token113] = ACTIONS(150),
    [aux_sym_css_named_color_token114] = ACTIONS(150),
    [aux_sym_css_named_color_token115] = ACTIONS(150),
    [aux_sym_css_named_color_token116] = ACTIONS(150),
    [aux_sym_css_named_color_token117] = ACTIONS(150),
    [aux_sym_css_named_color_token118] = ACTIONS(150),
    [aux_sym_css_named_color_token119] = ACTIONS(150),
    [aux_sym_css_named_color_token120] = ACTIONS(150),
    [aux_sym_css_named_color_token121] = ACTIONS(150),
    [aux_sym_css_named_color_token122] = ACTIONS(150),
    [aux_sym_css_named_color_token123] = ACTIONS(150),
    [aux_sym_css_named_color_token124] = ACTIONS(150),
    [aux_sym_css_named_color_token125] = ACTIONS(150),
    [aux_sym_css_named_color_token126] = ACTIONS(150),
    [aux_sym_css_named_color_token127] = ACTIONS(150),
    [aux_sym_css_named_color_token128] = ACTIONS(150),
    [aux_sym_css_named_color_token129] = ACTIONS(150),
    [aux_sym_css_named_color_token130] = ACTIONS(150),
    [aux_sym_css_named_color_token131] = ACTIONS(150),
    [aux_sym_css_named_color_token132] = ACTIONS(150),
    [aux_sym_css_named_color_token133] = ACTIONS(150),
    [aux_sym_css_named_color_token134] = ACTIONS(150),
    [aux_sym_css_named_color_token135] = ACTIONS(150),
    [aux_sym_css_named_color_token136] = ACTIONS(150),
    [aux_sym_css_named_color_token137] = ACTIONS(150),
    [aux_sym_css_named_color_token138] = ACTIONS(150),
    [aux_sym_css_named_color_token139] = ACTIONS(150),
    [aux_sym_css_named_color_token140] = ACTIONS(150),
    [aux_sym_css_named_color_token141] = ACTIONS(150),
    [aux_sym_css_named_color_token142] = ACTIONS(150),
    [aux_sym_css_named_color_token143] = ACTIONS(150),
    [aux_sym_css_named_color_token144] = ACTIONS(150),
    [aux_sym_css_named_color_token145] = ACTIONS(152),
    [aux_sym_css_named_color_token146] = ACTIONS(150),
    [aux_sym_css_named_color_token147] = ACTIONS(152),
    [aux_sym_css_named_color_token148] = ACTIONS(150),
    [sym_css_keyword_transparent] = ACTIONS(150),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(156),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(154),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(156),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(154),
    [aux_sym_css_function_hwb_token1] = ACTIONS(154),
    [aux_sym_css_function_lab_token1] = ACTIONS(154),
    [aux_sym_css_function_oklab_token1] = ACTIONS(154),
    [aux_sym_css_function_lch_token1] = ACTIONS(154),
    [aux_sym_css_function_oklch_token1] = ACTIONS(154),
    [aux_sym_css_function_color_token1] = ACTIONS(154),
    [sym_css_hex_color_6_digits] = ACTIONS(156),
    [sym_css_hex_color_8_digits] = ACTIONS(154),
    [sym_css_hex_color_3_digits] = ACTIONS(156),
    [sym_css_hex_color_4_digits] = ACTIONS(156),
    [aux_sym_css_named_color_token1] = ACTIONS(154),
    [aux_sym_css_named_color_token2] = ACTIONS(154),
    [aux_sym_css_named_color_token3] = ACTIONS(156),
    [aux_sym_css_named_color_token4] = ACTIONS(154),
    [aux_sym_css_named_color_token5] = ACTIONS(154),
    [aux_sym_css_named_color_token6] = ACTIONS(154),
    [aux_sym_css_named_color_token7] = ACTIONS(154),
    [aux_sym_css_named_color_token8] = ACTIONS(154),
    [aux_sym_css_named_color_token9] = ACTIONS(154),
    [aux_sym_css_named_color_token10] = ACTIONS(156),
    [aux_sym_css_named_color_token11] = ACTIONS(154),
    [aux_sym_css_named_color_token12] = ACTIONS(154),
    [aux_sym_css_named_color_token13] = ACTIONS(154),
    [aux_sym_css_named_color_token14] = ACTIONS(154),
    [aux_sym_css_named_color_token15] = ACTIONS(154),
    [aux_sym_css_named_color_token16] = ACTIONS(154),
    [aux_sym_css_named_color_token17] = ACTIONS(154),
    [aux_sym_css_named_color_token18] = ACTIONS(154),
    [aux_sym_css_named_color_token19] = ACTIONS(154),
    [aux_sym_css_named_color_token20] = ACTIONS(154),
    [aux_sym_css_named_color_token21] = ACTIONS(154),
    [aux_sym_css_named_color_token22] = ACTIONS(154),
    [aux_sym_css_named_color_token23] = ACTIONS(154),
    [aux_sym_css_named_color_token24] = ACTIONS(154),
    [aux_sym_css_named_color_token25] = ACTIONS(154),
    [aux_sym_css_named_color_token26] = ACTIONS(154),
    [aux_sym_css_named_color_token27] = ACTIONS(154),
    [aux_sym_css_named_color_token28] = ACTIONS(154),
    [aux_sym_css_named_color_token29] = ACTIONS(154),
    [aux_sym_css_named_color_token30] = ACTIONS(154),
    [aux_sym_css_named_color_token31] = ACTIONS(154),
    [aux_sym_css_named_color_token32] = ACTIONS(154),
    [aux_sym_css_named_color_token33] = ACTIONS(154),
    [aux_sym_css_named_color_token34] = ACTIONS(154),
    [aux_sym_css_named_color_token35] = ACTIONS(154),
    [aux_sym_css_named_color_token36] = ACTIONS(154),
    [aux_sym_css_named_color_token37] = ACTIONS(154),
    [aux_sym_css_named_color_token38] = ACTIONS(154),
    [aux_sym_css_named_color_token39] = ACTIONS(154),
    [aux_sym_css_named_color_token40] = ACTIONS(154),
    [aux_sym_css_named_color_token41] = ACTIONS(154),
    [aux_sym_css_named_color_token42] = ACTIONS(154),
    [aux_sym_css_named_color_token43] = ACTIONS(154),
    [aux_sym_css_named_color_token44] = ACTIONS(154),
    [aux_sym_css_named_color_token45] = ACTIONS(154),
    [aux_sym_css_named_color_token46] = ACTIONS(154),
    [aux_sym_css_named_color_token47] = ACTIONS(154),
    [aux_sym_css_named_color_token48] = ACTIONS(154),
    [aux_sym_css_named_color_token49] = ACTIONS(154),
    [aux_sym_css_named_color_token50] = ACTIONS(154),
    [aux_sym_css_named_color_token51] = ACTIONS(154),
    [aux_sym_css_named_color_token52] = ACTIONS(156),
    [aux_sym_css_named_color_token53] = ACTIONS(154),
    [aux_sym_css_named_color_token54] = ACTIONS(154),
    [aux_sym_css_named_color_token55] = ACTIONS(156),
    [aux_sym_css_named_color_token56] = ACTIONS(154),
    [aux_sym_css_named_color_token57] = ACTIONS(154),
    [aux_sym_css_named_color_token58] = ACTIONS(154),
    [aux_sym_css_named_color_token59] = ACTIONS(154),
    [aux_sym_css_named_color_token60] = ACTIONS(154),
    [aux_sym_css_named_color_token61] = ACTIONS(154),
    [aux_sym_css_named_color_token62] = ACTIONS(154),
    [aux_sym_css_named_color_token63] = ACTIONS(154),
    [aux_sym_css_named_color_token64] = ACTIONS(156),
    [aux_sym_css_named_color_token65] = ACTIONS(154),
    [aux_sym_css_named_color_token66] = ACTIONS(154),
    [aux_sym_css_named_color_token67] = ACTIONS(154),
    [aux_sym_css_named_color_token68] = ACTIONS(154),
    [aux_sym_css_named_color_token69] = ACTIONS(154),
    [aux_sym_css_named_color_token70] = ACTIONS(154),
    [aux_sym_css_named_color_token71] = ACTIONS(154),
    [aux_sym_css_named_color_token72] = ACTIONS(154),
    [aux_sym_css_named_color_token73] = ACTIONS(154),
    [aux_sym_css_named_color_token74] = ACTIONS(154),
    [aux_sym_css_named_color_token75] = ACTIONS(154),
    [aux_sym_css_named_color_token76] = ACTIONS(154),
    [aux_sym_css_named_color_token77] = ACTIONS(154),
    [aux_sym_css_named_color_token78] = ACTIONS(154),
    [aux_sym_css_named_color_token79] = ACTIONS(154),
    [aux_sym_css_named_color_token80] = ACTIONS(154),
    [aux_sym_css_named_color_token81] = ACTIONS(154),
    [aux_sym_css_named_color_token82] = ACTIONS(154),
    [aux_sym_css_named_color_token83] = ACTIONS(156),
    [aux_sym_css_named_color_token84] = ACTIONS(154),
    [aux_sym_css_named_color_token85] = ACTIONS(154),
    [aux_sym_css_named_color_token86] = ACTIONS(154),
    [aux_sym_css_named_color_token87] = ACTIONS(154),
    [aux_sym_css_named_color_token88] = ACTIONS(154),
    [aux_sym_css_named_color_token89] = ACTIONS(154),
    [aux_sym_css_named_color_token90] = ACTIONS(154),
    [aux_sym_css_named_color_token91] = ACTIONS(154),
    [aux_sym_css_named_color_token92] = ACTIONS(154),
    [aux_sym_css_named_color_token93] = ACTIONS(154),
    [aux_sym_css_named_color_token94] = ACTIONS(154),
    [aux_sym_css_named_color_token95] = ACTIONS(154),
    [aux_sym_css_named_color_token96] = ACTIONS(154),
    [aux_sym_css_named_color_token97] = ACTIONS(154),
    [aux_sym_css_named_color_token98] = ACTIONS(154),
    [aux_sym_css_named_color_token99] = ACTIONS(154),
    [aux_sym_css_named_color_token100] = ACTIONS(154),
    [aux_sym_css_named_color_token101] = ACTIONS(154),
    [aux_sym_css_named_color_token102] = ACTIONS(154),
    [aux_sym_css_named_color_token103] = ACTIONS(154),
    [aux_sym_css_named_color_token104] = ACTIONS(156),
    [aux_sym_css_named_color_token105] = ACTIONS(154),
    [aux_sym_css_named_color_token106] = ACTIONS(156),
    [aux_sym_css_named_color_token107] = ACTIONS(154),
    [aux_sym_css_named_color_token108] = ACTIONS(154),
    [aux_sym_css_named_color_token109] = ACTIONS(154),
    [aux_sym_css_named_color_token110] = ACTIONS(154),
    [aux_sym_css_named_color_token111] = ACTIONS(154),
    [aux_sym_css_named_color_token112] = ACTIONS(154),
    [aux_sym_css_named_color_token113] = ACTIONS(154),
    [aux_sym_css_named_color_token114] = ACTIONS(154),
    [aux_sym_css_named_color_token115] = ACTIONS(154),
    [aux_sym_css_named_color_token116] = ACTIONS(154),
    [aux_sym_css_named_color_token117] = ACTIONS(154),
    [aux_sym_css_named_color_token118] = ACTIONS(154),
    [aux_sym_css_named_color_token119] = ACTIONS(154),
    [aux_sym_css_named_color_token120] = ACTIONS(154),
    [aux_sym_css_named_color_token121] = ACTIONS(154),
    [aux_sym_css_named_color_token122] = ACTIONS(154),
    [aux_sym_css_named_color_token123] = ACTIONS(154),
    [aux_sym_css_named_color_token124] = ACTIONS(154),
    [aux_sym_css_named_color_token125] = ACTIONS(154),
    [aux_sym_css_named_color_token126] = ACTIONS(154),
    [aux_sym_css_named_color_token127] = ACTIONS(154),
    [aux_sym_css_named_color_token128] = ACTIONS(154),
    [aux_sym_css_named_color_token129] = ACTIONS(154),
    [aux_sym_css_named_color_token130] = ACTIONS(154),
    [aux_sym_css_named_color_token131] = ACTIONS(154),
    [aux_sym_css_named_color_token132] = ACTIONS(154),
    [aux_sym_css_named_color_token133] = ACTIONS(154),
    [aux_sym_css_named_color_token134] = ACTIONS(154),
    [aux_sym_css_named_color_token135] = ACTIONS(154),
    [aux_sym_css_named_color_token136] = ACTIONS(154),
    [aux_sym_css_named_color_token137] = ACTIONS(154),
    [aux_sym_css_named_color_token138] = ACTIONS(154),
    [aux_sym_css_named_color_token139] = ACTIONS(154),
    [aux_sym_css_named_color_token140] = ACTIONS(154),
    [aux_sym_css_named_color_token141] = ACTIONS(154),
    [aux_sym_css_named_color_token142] = ACTIONS(154),
    [aux_sym_css_named_color_token143] = ACTIONS(154),
    [aux_sym_css_named_color_token144] = ACTIONS(154),
    [aux_sym_css_named_color_token145] = ACTIONS(156),
    [aux_sym_css_named_color_token146] = ACTIONS(154),
    [aux_sym_css_named_color_token147] = ACTIONS(156),
    [aux_sym_css_named_color_token148] = ACTIONS(154),
    [sym_css_keyword_transparent] = ACTIONS(154),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(160),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(158),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(160),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(158),
    [aux_sym_css_function_hwb_token1] = ACTIONS(158),
    [aux_sym_css_function_lab_token1] = ACTIONS(158),
    [aux_sym_css_function_oklab_token1] = ACTIONS(158),
    [aux_sym_css_function_lch_token1] = ACTIONS(158),
    [aux_sym_css_function_oklch_token1] = ACTIONS(158),
    [aux_sym_css_function_color_token1] = ACTIONS(158),
    [sym_css_hex_color_6_digits] = ACTIONS(160),
    [sym_css_hex_color_8_digits] = ACTIONS(158),
    [sym_css_hex_color_3_digits] = ACTIONS(160),
    [sym_css_hex_color_4_digits] = ACTIONS(160),
    [aux_sym_css_named_color_token1] = ACTIONS(158),
    [aux_sym_css_named_color_token2] = ACTIONS(158),
    [aux_sym_css_named_color_token3] = ACTIONS(160),
    [aux_sym_css_named_color_token4] = ACTIONS(158),
    [aux_sym_css_named_color_token5] = ACTIONS(158),
    [aux_sym_css_named_color_token6] = ACTIONS(158),
    [aux_sym_css_named_color_token7] = ACTIONS(158),
    [aux_sym_css_named_color_token8] = ACTIONS(158),
    [aux_sym_css_named_color_token9] = ACTIONS(158),
    [aux_sym_css_named_color_token10] = ACTIONS(160),
    [aux_sym_css_named_color_token11] = ACTIONS(158),
    [aux_sym_css_named_color_token12] = ACTIONS(158),
    [aux_sym_css_named_color_token13] = ACTIONS(158),
    [aux_sym_css_named_color_token14] = ACTIONS(158),
    [aux_sym_css_named_color_token15] = ACTIONS(158),
    [aux_sym_css_named_color_token16] = ACTIONS(158),
    [aux_sym_css_named_color_token17] = ACTIONS(158),
    [aux_sym_css_named_color_token18] = ACTIONS(158),
    [aux_sym_css_named_color_token19] = ACTIONS(158),
    [aux_sym_css_named_color_token20] = ACTIONS(158),
    [aux_sym_css_named_color_token21] = ACTIONS(158),
    [aux_sym_css_named_color_token22] = ACTIONS(158),
    [aux_sym_css_named_color_token23] = ACTIONS(158),
    [aux_sym_css_named_color_token24] = ACTIONS(158),
    [aux_sym_css_named_color_token25] = ACTIONS(158),
    [aux_sym_css_named_color_token26] = ACTIONS(158),
    [aux_sym_css_named_color_token27] = ACTIONS(158),
    [aux_sym_css_named_color_token28] = ACTIONS(158),
    [aux_sym_css_named_color_token29] = ACTIONS(158),
    [aux_sym_css_named_color_token30] = ACTIONS(158),
    [aux_sym_css_named_color_token31] = ACTIONS(158),
    [aux_sym_css_named_color_token32] = ACTIONS(158),
    [aux_sym_css_named_color_token33] = ACTIONS(158),
    [aux_sym_css_named_color_token34] = ACTIONS(158),
    [aux_sym_css_named_color_token35] = ACTIONS(158),
    [aux_sym_css_named_color_token36] = ACTIONS(158),
    [aux_sym_css_named_color_token37] = ACTIONS(158),
    [aux_sym_css_named_color_token38] = ACTIONS(158),
    [aux_sym_css_named_color_token39] = ACTIONS(158),
    [aux_sym_css_named_color_token40] = ACTIONS(158),
    [aux_sym_css_named_color_token41] = ACTIONS(158),
    [aux_sym_css_named_color_token42] = ACTIONS(158),
    [aux_sym_css_named_color_token43] = ACTIONS(158),
    [aux_sym_css_named_color_token44] = ACTIONS(158),
    [aux_sym_css_named_color_token45] = ACTIONS(158),
    [aux_sym_css_named_color_token46] = ACTIONS(158),
    [aux_sym_css_named_color_token47] = ACTIONS(158),
    [aux_sym_css_named_color_token48] = ACTIONS(158),
    [aux_sym_css_named_color_token49] = ACTIONS(158),
    [aux_sym_css_named_color_token50] = ACTIONS(158),
    [aux_sym_css_named_color_token51] = ACTIONS(158),
    [aux_sym_css_named_color_token52] = ACTIONS(160),
    [aux_sym_css_named_color_token53] = ACTIONS(158),
    [aux_sym_css_named_color_token54] = ACTIONS(158),
    [aux_sym_css_named_color_token55] = ACTIONS(160),
    [aux_sym_css_named_color_token56] = ACTIONS(158),
    [aux_sym_css_named_color_token57] = ACTIONS(158),
    [aux_sym_css_named_color_token58] = ACTIONS(158),
    [aux_sym_css_named_color_token59] = ACTIONS(158),
    [aux_sym_css_named_color_token60] = ACTIONS(158),
    [aux_sym_css_named_color_token61] = ACTIONS(158),
    [aux_sym_css_named_color_token62] = ACTIONS(158),
    [aux_sym_css_named_color_token63] = ACTIONS(158),
    [aux_sym_css_named_color_token64] = ACTIONS(160),
    [aux_sym_css_named_color_token65] = ACTIONS(158),
    [aux_sym_css_named_color_token66] = ACTIONS(158),
    [aux_sym_css_named_color_token67] = ACTIONS(158),
    [aux_sym_css_named_color_token68] = ACTIONS(158),
    [aux_sym_css_named_color_token69] = ACTIONS(158),
    [aux_sym_css_named_color_token70] = ACTIONS(158),
    [aux_sym_css_named_color_token71] = ACTIONS(158),
    [aux_sym_css_named_color_token72] = ACTIONS(158),
    [aux_sym_css_named_color_token73] = ACTIONS(158),
    [aux_sym_css_named_color_token74] = ACTIONS(158),
    [aux_sym_css_named_color_token75] = ACTIONS(158),
    [aux_sym_css_named_color_token76] = ACTIONS(158),
    [aux_sym_css_named_color_token77] = ACTIONS(158),
    [aux_sym_css_named_color_token78] = ACTIONS(158),
    [aux_sym_css_named_color_token79] = ACTIONS(158),
    [aux_sym_css_named_color_token80] = ACTIONS(158),
    [aux_sym_css_named_color_token81] = ACTIONS(158),
    [aux_sym_css_named_color_token82] = ACTIONS(158),
    [aux_sym_css_named_color_token83] = ACTIONS(160),
    [aux_sym_css_named_color_token84] = ACTIONS(158),
    [aux_sym_css_named_color_token85] = ACTIONS(158),
    [aux_sym_css_named_color_token86] = ACTIONS(158),
    [aux_sym_css_named_color_token87] = ACTIONS(158),
    [aux_sym_css_named_color_token88] = ACTIONS(158),
    [aux_sym_css_named_color_token89] = ACTIONS(158),
    [aux_sym_css_named_color_token90] = ACTIONS(158),
    [aux_sym_css_named_color_token91] = ACTIONS(158),
    [aux_sym_css_named_color_token92] = ACTIONS(158),
    [aux_sym_css_named_color_token93] = ACTIONS(158),
    [aux_sym_css_named_color_token94] = ACTIONS(158),
    [aux_sym_css_named_color_token95] = ACTIONS(158),
    [aux_sym_css_named_color_token96] = ACTIONS(158),
    [aux_sym_css_named_color_token97] = ACTIONS(158),
    [aux_sym_css_named_color_token98] = ACTIONS(158),
    [aux_sym_css_named_color_token99] = ACTIONS(158),
    [aux_sym_css_named_color_token100] = ACTIONS(158),
    [aux_sym_css_named_color_token101] = ACTIONS(158),
    [aux_sym_css_named_color_token102] = ACTIONS(158),
    [aux_sym_css_named_color_token103] = ACTIONS(158),
    [aux_sym_css_named_color_token104] = ACTIONS(160),
    [aux_sym_css_named_color_token105] = ACTIONS(158),
    [aux_sym_css_named_color_token106] = ACTIONS(160),
    [aux_sym_css_named_color_token107] = ACTIONS(158),
    [aux_sym_css_named_color_token108] = ACTIONS(158),
    [aux_sym_css_named_color_token109] = ACTIONS(158),
    [aux_sym_css_named_color_token110] = ACTIONS(158),
    [aux_sym_css_named_color_token111] = ACTIONS(158),
    [aux_sym_css_named_color_token112] = ACTIONS(158),
    [aux_sym_css_named_color_token113] = ACTIONS(158),
    [aux_sym_css_named_color_token114] = ACTIONS(158),
    [aux_sym_css_named_color_token115] = ACTIONS(158),
    [aux_sym_css_named_color_token116] = ACTIONS(158),
    [aux_sym_css_named_color_token117] = ACTIONS(158),
    [aux_sym_css_named_color_token118] = ACTIONS(158),
    [aux_sym_css_named_color_token119] = ACTIONS(158),
    [aux_sym_css_named_color_token120] = ACTIONS(158),
    [aux_sym_css_named_color_token121] = ACTIONS(158),
    [aux_sym_css_named_color_token122] = ACTIONS(158),
    [aux_sym_css_named_color_token123] = ACTIONS(158),
    [aux_sym_css_named_color_token124] = ACTIONS(158),
    [aux_sym_css_named_color_token125] = ACTIONS(158),
    [aux_sym_css_named_color_token126] = ACTIONS(158),
    [aux_sym_css_named_color_token127] = ACTIONS(158),
    [aux_sym_css_named_color_token128] = ACTIONS(158),
    [aux_sym_css_named_color_token129] = ACTIONS(158),
    [aux_sym_css_named_color_token130] = ACTIONS(158),
    [aux_sym_css_named_color_token131] = ACTIONS(158),
    [aux_sym_css_named_color_token132] = ACTIONS(158),
    [aux_sym_css_named_color_token133] = ACTIONS(158),
    [aux_sym_css_named_color_token134] = ACTIONS(158),
    [aux_sym_css_named_color_token135] = ACTIONS(158),
    [aux_sym_css_named_color_token136] = ACTIONS(158),
    [aux_sym_css_named_color_token137] = ACTIONS(158),
    [aux_sym_css_named_color_token138] = ACTIONS(158),
    [aux_sym_css_named_color_token139] = ACTIONS(158),
    [aux_sym_css_named_color_token140] = ACTIONS(158),
    [aux_sym_css_named_color_token141] = ACTIONS(158),
    [aux_sym_css_named_color_token142] = ACTIONS(158),
    [aux_sym_css_named_color_token143] = ACTIONS(158),
    [aux_sym_css_named_color_token144] = ACTIONS(158),
    [aux_sym_css_named_color_token145] = ACTIONS(160),
    [aux_sym_css_named_color_token146] = ACTIONS(158),
    [aux_sym_css_named_color_token147] = ACTIONS(160),
    [aux_sym_css_named_color_token148] = ACTIONS(158),
    [sym_css_keyword_transparent] = ACTIONS(158),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(164),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(162),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(164),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(162),
    [aux_sym_css_function_hwb_token1] = ACTIONS(162),
    [aux_sym_css_function_lab_token1] = ACTIONS(162),
    [aux_sym_css_function_oklab_token1] = ACTIONS(162),
    [aux_sym_css_function_lch_token1] = ACTIONS(162),
    [aux_sym_css_function_oklch_token1] = ACTIONS(162),
    [aux_sym_css_function_color_token1] = ACTIONS(162),
    [sym_css_hex_color_6_digits] = ACTIONS(164),
    [sym_css_hex_color_8_digits] = ACTIONS(162),
    [sym_css_hex_color_3_digits] = ACTIONS(164),
    [sym_css_hex_color_4_digits] = ACTIONS(164),
    [aux_sym_css_named_color_token1] = ACTIONS(162),
    [aux_sym_css_named_color_token2] = ACTIONS(162),
    [aux_sym_css_named_color_token3] = ACTIONS(164),
    [aux_sym_css_named_color_token4] = ACTIONS(162),
    [aux_sym_css_named_color_token5] = ACTIONS(162),
    [aux_sym_css_named_color_token6] = ACTIONS(162),
    [aux_sym_css_named_color_token7] = ACTIONS(162),
    [aux_sym_css_named_color_token8] = ACTIONS(162),
    [aux_sym_css_named_color_token9] = ACTIONS(162),
    [aux_sym_css_named_color_token10] = ACTIONS(164),
    [aux_sym_css_named_color_token11] = ACTIONS(162),
    [aux_sym_css_named_color_token12] = ACTIONS(162),
    [aux_sym_css_named_color_token13] = ACTIONS(162),
    [aux_sym_css_named_color_token14] = ACTIONS(162),
    [aux_sym_css_named_color_token15] = ACTIONS(162),
    [aux_sym_css_named_color_token16] = ACTIONS(162),
    [aux_sym_css_named_color_token17] = ACTIONS(162),
    [aux_sym_css_named_color_token18] = ACTIONS(162),
    [aux_sym_css_named_color_token19] = ACTIONS(162),
    [aux_sym_css_named_color_token20] = ACTIONS(162),
    [aux_sym_css_named_color_token21] = ACTIONS(162),
    [aux_sym_css_named_color_token22] = ACTIONS(162),
    [aux_sym_css_named_color_token23] = ACTIONS(162),
    [aux_sym_css_named_color_token24] = ACTIONS(162),
    [aux_sym_css_named_color_token25] = ACTIONS(162),
    [aux_sym_css_named_color_token26] = ACTIONS(162),
    [aux_sym_css_named_color_token27] = ACTIONS(162),
    [aux_sym_css_named_color_token28] = ACTIONS(162),
    [aux_sym_css_named_color_token29] = ACTIONS(162),
    [aux_sym_css_named_color_token30] = ACTIONS(162),
    [aux_sym_css_named_color_token31] = ACTIONS(162),
    [aux_sym_css_named_color_token32] = ACTIONS(162),
    [aux_sym_css_named_color_token33] = ACTIONS(162),
    [aux_sym_css_named_color_token34] = ACTIONS(162),
    [aux_sym_css_named_color_token35] = ACTIONS(162),
    [aux_sym_css_named_color_token36] = ACTIONS(162),
    [aux_sym_css_named_color_token37] = ACTIONS(162),
    [aux_sym_css_named_color_token38] = ACTIONS(162),
    [aux_sym_css_named_color_token39] = ACTIONS(162),
    [aux_sym_css_named_color_token40] = ACTIONS(162),
    [aux_sym_css_named_color_token41] = ACTIONS(162),
    [aux_sym_css_named_color_token42] = ACTIONS(162),
    [aux_sym_css_named_color_token43] = ACTIONS(162),
    [aux_sym_css_named_color_token44] = ACTIONS(162),
    [aux_sym_css_named_color_token45] = ACTIONS(162),
    [aux_sym_css_named_color_token46] = ACTIONS(162),
    [aux_sym_css_named_color_token47] = ACTIONS(162),
    [aux_sym_css_named_color_token48] = ACTIONS(162),
    [aux_sym_css_named_color_token49] = ACTIONS(162),
    [aux_sym_css_named_color_token50] = ACTIONS(162),
    [aux_sym_css_named_color_token51] = ACTIONS(162),
    [aux_sym_css_named_color_token52] = ACTIONS(164),
    [aux_sym_css_named_color_token53] = ACTIONS(162),
    [aux_sym_css_named_color_token54] = ACTIONS(162),
    [aux_sym_css_named_color_token55] = ACTIONS(164),
    [aux_sym_css_named_color_token56] = ACTIONS(162),
    [aux_sym_css_named_color_token57] = ACTIONS(162),
    [aux_sym_css_named_color_token58] = ACTIONS(162),
    [aux_sym_css_named_color_token59] = ACTIONS(162),
    [aux_sym_css_named_color_token60] = ACTIONS(162),
    [aux_sym_css_named_color_token61] = ACTIONS(162),
    [aux_sym_css_named_color_token62] = ACTIONS(162),
    [aux_sym_css_named_color_token63] = ACTIONS(162),
    [aux_sym_css_named_color_token64] = ACTIONS(164),
    [aux_sym_css_named_color_token65] = ACTIONS(162),
    [aux_sym_css_named_color_token66] = ACTIONS(162),
    [aux_sym_css_named_color_token67] = ACTIONS(162),
    [aux_sym_css_named_color_token68] = ACTIONS(162),
    [aux_sym_css_named_color_token69] = ACTIONS(162),
    [aux_sym_css_named_color_token70] = ACTIONS(162),
    [aux_sym_css_named_color_token71] = ACTIONS(162),
    [aux_sym_css_named_color_token72] = ACTIONS(162),
    [aux_sym_css_named_color_token73] = ACTIONS(162),
    [aux_sym_css_named_color_token74] = ACTIONS(162),
    [aux_sym_css_named_color_token75] = ACTIONS(162),
    [aux_sym_css_named_color_token76] = ACTIONS(162),
    [aux_sym_css_named_color_token77] = ACTIONS(162),
    [aux_sym_css_named_color_token78] = ACTIONS(162),
    [aux_sym_css_named_color_token79] = ACTIONS(162),
    [aux_sym_css_named_color_token80] = ACTIONS(162),
    [aux_sym_css_named_color_token81] = ACTIONS(162),
    [aux_sym_css_named_color_token82] = ACTIONS(162),
    [aux_sym_css_named_color_token83] = ACTIONS(164),
    [aux_sym_css_named_color_token84] = ACTIONS(162),
    [aux_sym_css_named_color_token85] = ACTIONS(162),
    [aux_sym_css_named_color_token86] = ACTIONS(162),
    [aux_sym_css_named_color_token87] = ACTIONS(162),
    [aux_sym_css_named_color_token88] = ACTIONS(162),
    [aux_sym_css_named_color_token89] = ACTIONS(162),
    [aux_sym_css_named_color_token90] = ACTIONS(162),
    [aux_sym_css_named_color_token91] = ACTIONS(162),
    [aux_sym_css_named_color_token92] = ACTIONS(162),
    [aux_sym_css_named_color_token93] = ACTIONS(162),
    [aux_sym_css_named_color_token94] = ACTIONS(162),
    [aux_sym_css_named_color_token95] = ACTIONS(162),
    [aux_sym_css_named_color_token96] = ACTIONS(162),
    [aux_sym_css_named_color_token97] = ACTIONS(162),
    [aux_sym_css_named_color_token98] = ACTIONS(162),
    [aux_sym_css_named_color_token99] = ACTIONS(162),
    [aux_sym_css_named_color_token100] = ACTIONS(162),
    [aux_sym_css_named_color_token101] = ACTIONS(162),
    [aux_sym_css_named_color_token102] = ACTIONS(162),
    [aux_sym_css_named_color_token103] = ACTIONS(162),
    [aux_sym_css_named_color_token104] = ACTIONS(164),
    [aux_sym_css_named_color_token105] = ACTIONS(162),
    [aux_sym_css_named_color_token106] = ACTIONS(164),
    [aux_sym_css_named_color_token107] = ACTIONS(162),
    [aux_sym_css_named_color_token108] = ACTIONS(162),
    [aux_sym_css_named_color_token109] = ACTIONS(162),
    [aux_sym_css_named_color_token110] = ACTIONS(162),
    [aux_sym_css_named_color_token111] = ACTIONS(162),
    [aux_sym_css_named_color_token112] = ACTIONS(162),
    [aux_sym_css_named_color_token113] = ACTIONS(162),
    [aux_sym_css_named_color_token114] = ACTIONS(162),
    [aux_sym_css_named_color_token115] = ACTIONS(162),
    [aux_sym_css_named_color_token116] = ACTIONS(162),
    [aux_sym_css_named_color_token117] = ACTIONS(162),
    [aux_sym_css_named_color_token118] = ACTIONS(162),
    [aux_sym_css_named_color_token119] = ACTIONS(162),
    [aux_sym_css_named_color_token120] = ACTIONS(162),
    [aux_sym_css_named_color_token121] = ACTIONS(162),
    [aux_sym_css_named_color_token122] = ACTIONS(162),
    [aux_sym_css_named_color_token123] = ACTIONS(162),
    [aux_sym_css_named_color_token124] = ACTIONS(162),
    [aux_sym_css_named_color_token125] = ACTIONS(162),
    [aux_sym_css_named_color_token126] = ACTIONS(162),
    [aux_sym_css_named_color_token127] = ACTIONS(162),
    [aux_sym_css_named_color_token128] = ACTIONS(162),
    [aux_sym_css_named_color_token129] = ACTIONS(162),
    [aux_sym_css_named_color_token130] = ACTIONS(162),
    [aux_sym_css_named_color_token131] = ACTIONS(162),
    [aux_sym_css_named_color_token132] = ACTIONS(162),
    [aux_sym_css_named_color_token133] = ACTIONS(162),
    [aux_sym_css_named_color_token134] = ACTIONS(162),
    [aux_sym_css_named_color_token135] = ACTIONS(162),
    [aux_sym_css_named_color_token136] = ACTIONS(162),
    [aux_sym_css_named_color_token137] = ACTIONS(162),
    [aux_sym_css_named_color_token138] = ACTIONS(162),
    [aux_sym_css_named_color_token139] = ACTIONS(162),
    [aux_sym_css_named_color_token140] = ACTIONS(162),
    [aux_sym_css_named_color_token141] = ACTIONS(162),
    [aux_sym_css_named_color_token142] = ACTIONS(162),
    [aux_sym_css_named_color_token143] = ACTIONS(162),
    [aux_sym_css_named_color_token144] = ACTIONS(162),
    [aux_sym_css_named_color_token145] = ACTIONS(164),
    [aux_sym_css_named_color_token146] = ACTIONS(162),
    [aux_sym_css_named_color_token147] = ACTIONS(164),
    [aux_sym_css_named_color_token148] = ACTIONS(162),
    [sym_css_keyword_transparent] = ACTIONS(162),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(168),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(166),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(168),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(166),
    [aux_sym_css_function_hwb_token1] = ACTIONS(166),
    [aux_sym_css_function_lab_token1] = ACTIONS(166),
    [aux_sym_css_function_oklab_token1] = ACTIONS(166),
    [aux_sym_css_function_lch_token1] = ACTIONS(166),
    [aux_sym_css_function_oklch_token1] = ACTIONS(166),
    [aux_sym_css_function_color_token1] = ACTIONS(166),
    [sym_css_hex_color_6_digits] = ACTIONS(168),
    [sym_css_hex_color_8_digits] = ACTIONS(166),
    [sym_css_hex_color_3_digits] = ACTIONS(168),
    [sym_css_hex_color_4_digits] = ACTIONS(168),
    [aux_sym_css_named_color_token1] = ACTIONS(166),
    [aux_sym_css_named_color_token2] = ACTIONS(166),
    [aux_sym_css_named_color_token3] = ACTIONS(168),
    [aux_sym_css_named_color_token4] = ACTIONS(166),
    [aux_sym_css_named_color_token5] = ACTIONS(166),
    [aux_sym_css_named_color_token6] = ACTIONS(166),
    [aux_sym_css_named_color_token7] = ACTIONS(166),
    [aux_sym_css_named_color_token8] = ACTIONS(166),
    [aux_sym_css_named_color_token9] = ACTIONS(166),
    [aux_sym_css_named_color_token10] = ACTIONS(168),
    [aux_sym_css_named_color_token11] = ACTIONS(166),
    [aux_sym_css_named_color_token12] = ACTIONS(166),
    [aux_sym_css_named_color_token13] = ACTIONS(166),
    [aux_sym_css_named_color_token14] = ACTIONS(166),
    [aux_sym_css_named_color_token15] = ACTIONS(166),
    [aux_sym_css_named_color_token16] = ACTIONS(166),
    [aux_sym_css_named_color_token17] = ACTIONS(166),
    [aux_sym_css_named_color_token18] = ACTIONS(166),
    [aux_sym_css_named_color_token19] = ACTIONS(166),
    [aux_sym_css_named_color_token20] = ACTIONS(166),
    [aux_sym_css_named_color_token21] = ACTIONS(166),
    [aux_sym_css_named_color_token22] = ACTIONS(166),
    [aux_sym_css_named_color_token23] = ACTIONS(166),
    [aux_sym_css_named_color_token24] = ACTIONS(166),
    [aux_sym_css_named_color_token25] = ACTIONS(166),
    [aux_sym_css_named_color_token26] = ACTIONS(166),
    [aux_sym_css_named_color_token27] = ACTIONS(166),
    [aux_sym_css_named_color_token28] = ACTIONS(166),
    [aux_sym_css_named_color_token29] = ACTIONS(166),
    [aux_sym_css_named_color_token30] = ACTIONS(166),
    [aux_sym_css_named_color_token31] = ACTIONS(166),
    [aux_sym_css_named_color_token32] = ACTIONS(166),
    [aux_sym_css_named_color_token33] = ACTIONS(166),
    [aux_sym_css_named_color_token34] = ACTIONS(166),
    [aux_sym_css_named_color_token35] = ACTIONS(166),
    [aux_sym_css_named_color_token36] = ACTIONS(166),
    [aux_sym_css_named_color_token37] = ACTIONS(166),
    [aux_sym_css_named_color_token38] = ACTIONS(166),
    [aux_sym_css_named_color_token39] = ACTIONS(166),
    [aux_sym_css_named_color_token40] = ACTIONS(166),
    [aux_sym_css_named_color_token41] = ACTIONS(166),
    [aux_sym_css_named_color_token42] = ACTIONS(166),
    [aux_sym_css_named_color_token43] = ACTIONS(166),
    [aux_sym_css_named_color_token44] = ACTIONS(166),
    [aux_sym_css_named_color_token45] = ACTIONS(166),
    [aux_sym_css_named_color_token46] = ACTIONS(166),
    [aux_sym_css_named_color_token47] = ACTIONS(166),
    [aux_sym_css_named_color_token48] = ACTIONS(166),
    [aux_sym_css_named_color_token49] = ACTIONS(166),
    [aux_sym_css_named_color_token50] = ACTIONS(166),
    [aux_sym_css_named_color_token51] = ACTIONS(166),
    [aux_sym_css_named_color_token52] = ACTIONS(168),
    [aux_sym_css_named_color_token53] = ACTIONS(166),
    [aux_sym_css_named_color_token54] = ACTIONS(166),
    [aux_sym_css_named_color_token55] = ACTIONS(168),
    [aux_sym_css_named_color_token56] = ACTIONS(166),
    [aux_sym_css_named_color_token57] = ACTIONS(166),
    [aux_sym_css_named_color_token58] = ACTIONS(166),
    [aux_sym_css_named_color_token59] = ACTIONS(166),
    [aux_sym_css_named_color_token60] = ACTIONS(166),
    [aux_sym_css_named_color_token61] = ACTIONS(166),
    [aux_sym_css_named_color_token62] = ACTIONS(166),
    [aux_sym_css_named_color_token63] = ACTIONS(166),
    [aux_sym_css_named_color_token64] = ACTIONS(168),
    [aux_sym_css_named_color_token65] = ACTIONS(166),
    [aux_sym_css_named_color_token66] = ACTIONS(166),
    [aux_sym_css_named_color_token67] = ACTIONS(166),
    [aux_sym_css_named_color_token68] = ACTIONS(166),
    [aux_sym_css_named_color_token69] = ACTIONS(166),
    [aux_sym_css_named_color_token70] = ACTIONS(166),
    [aux_sym_css_named_color_token71] = ACTIONS(166),
    [aux_sym_css_named_color_token72] = ACTIONS(166),
    [aux_sym_css_named_color_token73] = ACTIONS(166),
    [aux_sym_css_named_color_token74] = ACTIONS(166),
    [aux_sym_css_named_color_token75] = ACTIONS(166),
    [aux_sym_css_named_color_token76] = ACTIONS(166),
    [aux_sym_css_named_color_token77] = ACTIONS(166),
    [aux_sym_css_named_color_token78] = ACTIONS(166),
    [aux_sym_css_named_color_token79] = ACTIONS(166),
    [aux_sym_css_named_color_token80] = ACTIONS(166),
    [aux_sym_css_named_color_token81] = ACTIONS(166),
    [aux_sym_css_named_color_token82] = ACTIONS(166),
    [aux_sym_css_named_color_token83] = ACTIONS(168),
    [aux_sym_css_named_color_token84] = ACTIONS(166),
    [aux_sym_css_named_color_token85] = ACTIONS(166),
    [aux_sym_css_named_color_token86] = ACTIONS(166),
    [aux_sym_css_named_color_token87] = ACTIONS(166),
    [aux_sym_css_named_color_token88] = ACTIONS(166),
    [aux_sym_css_named_color_token89] = ACTIONS(166),
    [aux_sym_css_named_color_token90] = ACTIONS(166),
    [aux_sym_css_named_color_token91] = ACTIONS(166),
    [aux_sym_css_named_color_token92] = ACTIONS(166),
    [aux_sym_css_named_color_token93] = ACTIONS(166),
    [aux_sym_css_named_color_token94] = ACTIONS(166),
    [aux_sym_css_named_color_token95] = ACTIONS(166),
    [aux_sym_css_named_color_token96] = ACTIONS(166),
    [aux_sym_css_named_color_token97] = ACTIONS(166),
    [aux_sym_css_named_color_token98] = ACTIONS(166),
    [aux_sym_css_named_color_token99] = ACTIONS(166),
    [aux_sym_css_named_color_token100] = ACTIONS(166),
    [aux_sym_css_named_color_token101] = ACTIONS(166),
    [aux_sym_css_named_color_token102] = ACTIONS(166),
    [aux_sym_css_named_color_token103] = ACTIONS(166),
    [aux_sym_css_named_color_token104] = ACTIONS(168),
    [aux_sym_css_named_color_token105] = ACTIONS(166),
    [aux_sym_css_named_color_token106] = ACTIONS(168),
    [aux_sym_css_named_color_token107] = ACTIONS(166),
    [aux_sym_css_named_color_token108] = ACTIONS(166),
    [aux_sym_css_named_color_token109] = ACTIONS(166),
    [aux_sym_css_named_color_token110] = ACTIONS(166),
    [aux_sym_css_named_color_token111] = ACTIONS(166),
    [aux_sym_css_named_color_token112] = ACTIONS(166),
    [aux_sym_css_named_color_token113] = ACTIONS(166),
    [aux_sym_css_named_color_token114] = ACTIONS(166),
    [aux_sym_css_named_color_token115] = ACTIONS(166),
    [aux_sym_css_named_color_token116] = ACTIONS(166),
    [aux_sym_css_named_color_token117] = ACTIONS(166),
    [aux_sym_css_named_color_token118] = ACTIONS(166),
    [aux_sym_css_named_color_token119] = ACTIONS(166),
    [aux_sym_css_named_color_token120] = ACTIONS(166),
    [aux_sym_css_named_color_token121] = ACTIONS(166),
    [aux_sym_css_named_color_token122] = ACTIONS(166),
    [aux_sym_css_named_color_token123] = ACTIONS(166),
    [aux_sym_css_named_color_token124] = ACTIONS(166),
    [aux_sym_css_named_color_token125] = ACTIONS(166),
    [aux_sym_css_named_color_token126] = ACTIONS(166),
    [aux_sym_css_named_color_token127] = ACTIONS(166),
    [aux_sym_css_named_color_token128] = ACTIONS(166),
    [aux_sym_css_named_color_token129] = ACTIONS(166),
    [aux_sym_css_named_color_token130] = ACTIONS(166),
    [aux_sym_css_named_color_token131] = ACTIONS(166),
    [aux_sym_css_named_color_token132] = ACTIONS(166),
    [aux_sym_css_named_color_token133] = ACTIONS(166),
    [aux_sym_css_named_color_token134] = ACTIONS(166),
    [aux_sym_css_named_color_token135] = ACTIONS(166),
    [aux_sym_css_named_color_token136] = ACTIONS(166),
    [aux_sym_css_named_color_token137] = ACTIONS(166),
    [aux_sym_css_named_color_token138] = ACTIONS(166),
    [aux_sym_css_named_color_token139] = ACTIONS(166),
    [aux_sym_css_named_color_token140] = ACTIONS(166),
    [aux_sym_css_named_color_token141] = ACTIONS(166),
    [aux_sym_css_named_color_token142] = ACTIONS(166),
    [aux_sym_css_named_color_token143] = ACTIONS(166),
    [aux_sym_css_named_color_token144] = ACTIONS(166),
    [aux_sym_css_named_color_token145] = ACTIONS(168),
    [aux_sym_css_named_color_token146] = ACTIONS(166),
    [aux_sym_css_named_color_token147] = ACTIONS(168),
    [aux_sym_css_named_color_token148] = ACTIONS(166),
    [sym_css_keyword_transparent] = ACTIONS(166),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(172),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(170),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(172),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(170),
    [aux_sym_css_function_hwb_token1] = ACTIONS(170),
    [aux_sym_css_function_lab_token1] = ACTIONS(170),
    [aux_sym_css_function_oklab_token1] = ACTIONS(170),
    [aux_sym_css_function_lch_token1] = ACTIONS(170),
    [aux_sym_css_function_oklch_token1] = ACTIONS(170),
    [aux_sym_css_function_color_token1] = ACTIONS(170),
    [sym_css_hex_color_6_digits] = ACTIONS(172),
    [sym_css_hex_color_8_digits] = ACTIONS(170),
    [sym_css_hex_color_3_digits] = ACTIONS(172),
    [sym_css_hex_color_4_digits] = ACTIONS(172),
    [aux_sym_css_named_color_token1] = ACTIONS(170),
    [aux_sym_css_named_color_token2] = ACTIONS(170),
    [aux_sym_css_named_color_token3] = ACTIONS(172),
    [aux_sym_css_named_color_token4] = ACTIONS(170),
    [aux_sym_css_named_color_token5] = ACTIONS(170),
    [aux_sym_css_named_color_token6] = ACTIONS(170),
    [aux_sym_css_named_color_token7] = ACTIONS(170),
    [aux_sym_css_named_color_token8] = ACTIONS(170),
    [aux_sym_css_named_color_token9] = ACTIONS(170),
    [aux_sym_css_named_color_token10] = ACTIONS(172),
    [aux_sym_css_named_color_token11] = ACTIONS(170),
    [aux_sym_css_named_color_token12] = ACTIONS(170),
    [aux_sym_css_named_color_token13] = ACTIONS(170),
    [aux_sym_css_named_color_token14] = ACTIONS(170),
    [aux_sym_css_named_color_token15] = ACTIONS(170),
    [aux_sym_css_named_color_token16] = ACTIONS(170),
    [aux_sym_css_named_color_token17] = ACTIONS(170),
    [aux_sym_css_named_color_token18] = ACTIONS(170),
    [aux_sym_css_named_color_token19] = ACTIONS(170),
    [aux_sym_css_named_color_token20] = ACTIONS(170),
    [aux_sym_css_named_color_token21] = ACTIONS(170),
    [aux_sym_css_named_color_token22] = ACTIONS(170),
    [aux_sym_css_named_color_token23] = ACTIONS(170),
    [aux_sym_css_named_color_token24] = ACTIONS(170),
    [aux_sym_css_named_color_token25] = ACTIONS(170),
    [aux_sym_css_named_color_token26] = ACTIONS(170),
    [aux_sym_css_named_color_token27] = ACTIONS(170),
    [aux_sym_css_named_color_token28] = ACTIONS(170),
    [aux_sym_css_named_color_token29] = ACTIONS(170),
    [aux_sym_css_named_color_token30] = ACTIONS(170),
    [aux_sym_css_named_color_token31] = ACTIONS(170),
    [aux_sym_css_named_color_token32] = ACTIONS(170),
    [aux_sym_css_named_color_token33] = ACTIONS(170),
    [aux_sym_css_named_color_token34] = ACTIONS(170),
    [aux_sym_css_named_color_token35] = ACTIONS(170),
    [aux_sym_css_named_color_token36] = ACTIONS(170),
    [aux_sym_css_named_color_token37] = ACTIONS(170),
    [aux_sym_css_named_color_token38] = ACTIONS(170),
    [aux_sym_css_named_color_token39] = ACTIONS(170),
    [aux_sym_css_named_color_token40] = ACTIONS(170),
    [aux_sym_css_named_color_token41] = ACTIONS(170),
    [aux_sym_css_named_color_token42] = ACTIONS(170),
    [aux_sym_css_named_color_token43] = ACTIONS(170),
    [aux_sym_css_named_color_token44] = ACTIONS(170),
    [aux_sym_css_named_color_token45] = ACTIONS(170),
    [aux_sym_css_named_color_token46] = ACTIONS(170),
    [aux_sym_css_named_color_token47] = ACTIONS(170),
    [aux_sym_css_named_color_token48] = ACTIONS(170),
    [aux_sym_css_named_color_token49] = ACTIONS(170),
    [aux_sym_css_named_color_token50] = ACTIONS(170),
    [aux_sym_css_named_color_token51] = ACTIONS(170),
    [aux_sym_css_named_color_token52] = ACTIONS(172),
    [aux_sym_css_named_color_token53] = ACTIONS(170),
    [aux_sym_css_named_color_token54] = ACTIONS(170),
    [aux_sym_css_named_color_token55] = ACTIONS(172),
    [aux_sym_css_named_color_token56] = ACTIONS(170),
    [aux_sym_css_named_color_token57] = ACTIONS(170),
    [aux_sym_css_named_color_token58] = ACTIONS(170),
    [aux_sym_css_named_color_token59] = ACTIONS(170),
    [aux_sym_css_named_color_token60] = ACTIONS(170),
    [aux_sym_css_named_color_token61] = ACTIONS(170),
    [aux_sym_css_named_color_token62] = ACTIONS(170),
    [aux_sym_css_named_color_token63] = ACTIONS(170),
    [aux_sym_css_named_color_token64] = ACTIONS(172),
    [aux_sym_css_named_color_token65] = ACTIONS(170),
    [aux_sym_css_named_color_token66] = ACTIONS(170),
    [aux_sym_css_named_color_token67] = ACTIONS(170),
    [aux_sym_css_named_color_token68] = ACTIONS(170),
    [aux_sym_css_named_color_token69] = ACTIONS(170),
    [aux_sym_css_named_color_token70] = ACTIONS(170),
    [aux_sym_css_named_color_token71] = ACTIONS(170),
    [aux_sym_css_named_color_token72] = ACTIONS(170),
    [aux_sym_css_named_color_token73] = ACTIONS(170),
    [aux_sym_css_named_color_token74] = ACTIONS(170),
    [aux_sym_css_named_color_token75] = ACTIONS(170),
    [aux_sym_css_named_color_token76] = ACTIONS(170),
    [aux_sym_css_named_color_token77] = ACTIONS(170),
    [aux_sym_css_named_color_token78] = ACTIONS(170),
    [aux_sym_css_named_color_token79] = ACTIONS(170),
    [aux_sym_css_named_color_token80] = ACTIONS(170),
    [aux_sym_css_named_color_token81] = ACTIONS(170),
    [aux_sym_css_named_color_token82] = ACTIONS(170),
    [aux_sym_css_named_color_token83] = ACTIONS(172),
    [aux_sym_css_named_color_token84] = ACTIONS(170),
    [aux_sym_css_named_color_token85] = ACTIONS(170),
    [aux_sym_css_named_color_token86] = ACTIONS(170),
    [aux_sym_css_named_color_token87] = ACTIONS(170),
    [aux_sym_css_named_color_token88] = ACTIONS(170),
    [aux_sym_css_named_color_token89] = ACTIONS(170),
    [aux_sym_css_named_color_token90] = ACTIONS(170),
    [aux_sym_css_named_color_token91] = ACTIONS(170),
    [aux_sym_css_named_color_token92] = ACTIONS(170),
    [aux_sym_css_named_color_token93] = ACTIONS(170),
    [aux_sym_css_named_color_token94] = ACTIONS(170),
    [aux_sym_css_named_color_token95] = ACTIONS(170),
    [aux_sym_css_named_color_token96] = ACTIONS(170),
    [aux_sym_css_named_color_token97] = ACTIONS(170),
    [aux_sym_css_named_color_token98] = ACTIONS(170),
    [aux_sym_css_named_color_token99] = ACTIONS(170),
    [aux_sym_css_named_color_token100] = ACTIONS(170),
    [aux_sym_css_named_color_token101] = ACTIONS(170),
    [aux_sym_css_named_color_token102] = ACTIONS(170),
    [aux_sym_css_named_color_token103] = ACTIONS(170),
    [aux_sym_css_named_color_token104] = ACTIONS(172),
    [aux_sym_css_named_color_token105] = ACTIONS(170),
    [aux_sym_css_named_color_token106] = ACTIONS(172),
    [aux_sym_css_named_color_token107] = ACTIONS(170),
    [aux_sym_css_named_color_token108] = ACTIONS(170),
    [aux_sym_css_named_color_token109] = ACTIONS(170),
    [aux_sym_css_named_color_token110] = ACTIONS(170),
    [aux_sym_css_named_color_token111] = ACTIONS(170),
    [aux_sym_css_named_color_token112] = ACTIONS(170),
    [aux_sym_css_named_color_token113] = ACTIONS(170),
    [aux_sym_css_named_color_token114] = ACTIONS(170),
    [aux_sym_css_named_color_token115] = ACTIONS(170),
    [aux_sym_css_named_color_token116] = ACTIONS(170),
    [aux_sym_css_named_color_token117] = ACTIONS(170),
    [aux_sym_css_named_color_token118] = ACTIONS(170),
    [aux_sym_css_named_color_token119] = ACTIONS(170),
    [aux_sym_css_named_color_token120] = ACTIONS(170),
    [aux_sym_css_named_color_token121] = ACTIONS(170),
    [aux_sym_css_named_color_token122] = ACTIONS(170),
    [aux_sym_css_named_color_token123] = ACTIONS(170),
    [aux_sym_css_named_color_token124] = ACTIONS(170),
    [aux_sym_css_named_color_token125] = ACTIONS(170),
    [aux_sym_css_named_color_token126] = ACTIONS(170),
    [aux_sym_css_named_color_token127] = ACTIONS(170),
    [aux_sym_css_named_color_token128] = ACTIONS(170),
    [aux_sym_css_named_color_token129] = ACTIONS(170),
    [aux_sym_css_named_color_token130] = ACTIONS(170),
    [aux_sym_css_named_color_token131] = ACTIONS(170),
    [aux_sym_css_named_color_token132] = ACTIONS(170),
    [aux_sym_css_named_color_token133] = ACTIONS(170),
    [aux_sym_css_named_color_token134] = ACTIONS(170),
    [aux_sym_css_named_color_token135] = ACTIONS(170),
    [aux_sym_css_named_color_token136] = ACTIONS(170),
    [aux_sym_css_named_color_token137] = ACTIONS(170),
    [aux_sym_css_named_color_token138] = ACTIONS(170),
    [aux_sym_css_named_color_token139] = ACTIONS(170),
    [aux_sym_css_named_color_token140] = ACTIONS(170),
    [aux_sym_css_named_color_token141] = ACTIONS(170),
    [aux_sym_css_named_color_token142] = ACTIONS(170),
    [aux_sym_css_named_color_token143] = ACTIONS(170),
    [aux_sym_css_named_color_token144] = ACTIONS(170),
    [aux_sym_css_named_color_token145] = ACTIONS(172),
    [aux_sym_css_named_color_token146] = ACTIONS(170),
    [aux_sym_css_named_color_token147] = ACTIONS(172),
    [aux_sym_css_named_color_token148] = ACTIONS(170),
    [sym_css_keyword_transparent] = ACTIONS(170),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(176),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(174),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(176),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(174),
    [aux_sym_css_function_hwb_token1] = ACTIONS(174),
    [aux_sym_css_function_lab_token1] = ACTIONS(174),
    [aux_sym_css_function_oklab_token1] = ACTIONS(174),
    [aux_sym_css_function_lch_token1] = ACTIONS(174),
    [aux_sym_css_function_oklch_token1] = ACTIONS(174),
    [aux_sym_css_function_color_token1] = ACTIONS(174),
    [sym_css_hex_color_6_digits] = ACTIONS(176),
    [sym_css_hex_color_8_digits] = ACTIONS(174),
    [sym_css_hex_color_3_digits] = ACTIONS(176),
    [sym_css_hex_color_4_digits] = ACTIONS(176),
    [aux_sym_css_named_color_token1] = ACTIONS(174),
    [aux_sym_css_named_color_token2] = ACTIONS(174),
    [aux_sym_css_named_color_token3] = ACTIONS(176),
    [aux_sym_css_named_color_token4] = ACTIONS(174),
    [aux_sym_css_named_color_token5] = ACTIONS(174),
    [aux_sym_css_named_color_token6] = ACTIONS(174),
    [aux_sym_css_named_color_token7] = ACTIONS(174),
    [aux_sym_css_named_color_token8] = ACTIONS(174),
    [aux_sym_css_named_color_token9] = ACTIONS(174),
    [aux_sym_css_named_color_token10] = ACTIONS(176),
    [aux_sym_css_named_color_token11] = ACTIONS(174),
    [aux_sym_css_named_color_token12] = ACTIONS(174),
    [aux_sym_css_named_color_token13] = ACTIONS(174),
    [aux_sym_css_named_color_token14] = ACTIONS(174),
    [aux_sym_css_named_color_token15] = ACTIONS(174),
    [aux_sym_css_named_color_token16] = ACTIONS(174),
    [aux_sym_css_named_color_token17] = ACTIONS(174),
    [aux_sym_css_named_color_token18] = ACTIONS(174),
    [aux_sym_css_named_color_token19] = ACTIONS(174),
    [aux_sym_css_named_color_token20] = ACTIONS(174),
    [aux_sym_css_named_color_token21] = ACTIONS(174),
    [aux_sym_css_named_color_token22] = ACTIONS(174),
    [aux_sym_css_named_color_token23] = ACTIONS(174),
    [aux_sym_css_named_color_token24] = ACTIONS(174),
    [aux_sym_css_named_color_token25] = ACTIONS(174),
    [aux_sym_css_named_color_token26] = ACTIONS(174),
    [aux_sym_css_named_color_token27] = ACTIONS(174),
    [aux_sym_css_named_color_token28] = ACTIONS(174),
    [aux_sym_css_named_color_token29] = ACTIONS(174),
    [aux_sym_css_named_color_token30] = ACTIONS(174),
    [aux_sym_css_named_color_token31] = ACTIONS(174),
    [aux_sym_css_named_color_token32] = ACTIONS(174),
    [aux_sym_css_named_color_token33] = ACTIONS(174),
    [aux_sym_css_named_color_token34] = ACTIONS(174),
    [aux_sym_css_named_color_token35] = ACTIONS(174),
    [aux_sym_css_named_color_token36] = ACTIONS(174),
    [aux_sym_css_named_color_token37] = ACTIONS(174),
    [aux_sym_css_named_color_token38] = ACTIONS(174),
    [aux_sym_css_named_color_token39] = ACTIONS(174),
    [aux_sym_css_named_color_token40] = ACTIONS(174),
    [aux_sym_css_named_color_token41] = ACTIONS(174),
    [aux_sym_css_named_color_token42] = ACTIONS(174),
    [aux_sym_css_named_color_token43] = ACTIONS(174),
    [aux_sym_css_named_color_token44] = ACTIONS(174),
    [aux_sym_css_named_color_token45] = ACTIONS(174),
    [aux_sym_css_named_color_token46] = ACTIONS(174),
    [aux_sym_css_named_color_token47] = ACTIONS(174),
    [aux_sym_css_named_color_token48] = ACTIONS(174),
    [aux_sym_css_named_color_token49] = ACTIONS(174),
    [aux_sym_css_named_color_token50] = ACTIONS(174),
    [aux_sym_css_named_color_token51] = ACTIONS(174),
    [aux_sym_css_named_color_token52] = ACTIONS(176),
    [aux_sym_css_named_color_token53] = ACTIONS(174),
    [aux_sym_css_named_color_token54] = ACTIONS(174),
    [aux_sym_css_named_color_token55] = ACTIONS(176),
    [aux_sym_css_named_color_token56] = ACTIONS(174),
    [aux_sym_css_named_color_token57] = ACTIONS(174),
    [aux_sym_css_named_color_token58] = ACTIONS(174),
    [aux_sym_css_named_color_token59] = ACTIONS(174),
    [aux_sym_css_named_color_token60] = ACTIONS(174),
    [aux_sym_css_named_color_token61] = ACTIONS(174),
    [aux_sym_css_named_color_token62] = ACTIONS(174),
    [aux_sym_css_named_color_token63] = ACTIONS(174),
    [aux_sym_css_named_color_token64] = ACTIONS(176),
    [aux_sym_css_named_color_token65] = ACTIONS(174),
    [aux_sym_css_named_color_token66] = ACTIONS(174),
    [aux_sym_css_named_color_token67] = ACTIONS(174),
    [aux_sym_css_named_color_token68] = ACTIONS(174),
    [aux_sym_css_named_color_token69] = ACTIONS(174),
    [aux_sym_css_named_color_token70] = ACTIONS(174),
    [aux_sym_css_named_color_token71] = ACTIONS(174),
    [aux_sym_css_named_color_token72] = ACTIONS(174),
    [aux_sym_css_named_color_token73] = ACTIONS(174),
    [aux_sym_css_named_color_token74] = ACTIONS(174),
    [aux_sym_css_named_color_token75] = ACTIONS(174),
    [aux_sym_css_named_color_token76] = ACTIONS(174),
    [aux_sym_css_named_color_token77] = ACTIONS(174),
    [aux_sym_css_named_color_token78] = ACTIONS(174),
    [aux_sym_css_named_color_token79] = ACTIONS(174),
    [aux_sym_css_named_color_token80] = ACTIONS(174),
    [aux_sym_css_named_color_token81] = ACTIONS(174),
    [aux_sym_css_named_color_token82] = ACTIONS(174),
    [aux_sym_css_named_color_token83] = ACTIONS(176),
    [aux_sym_css_named_color_token84] = ACTIONS(174),
    [aux_sym_css_named_color_token85] = ACTIONS(174),
    [aux_sym_css_named_color_token86] = ACTIONS(174),
    [aux_sym_css_named_color_token87] = ACTIONS(174),
    [aux_sym_css_named_color_token88] = ACTIONS(174),
    [aux_sym_css_named_color_token89] = ACTIONS(174),
    [aux_sym_css_named_color_token90] = ACTIONS(174),
    [aux_sym_css_named_color_token91] = ACTIONS(174),
    [aux_sym_css_named_color_token92] = ACTIONS(174),
    [aux_sym_css_named_color_token93] = ACTIONS(174),
    [aux_sym_css_named_color_token94] = ACTIONS(174),
    [aux_sym_css_named_color_token95] = ACTIONS(174),
    [aux_sym_css_named_color_token96] = ACTIONS(174),
    [aux_sym_css_named_color_token97] = ACTIONS(174),
    [aux_sym_css_named_color_token98] = ACTIONS(174),
    [aux_sym_css_named_color_token99] = ACTIONS(174),
    [aux_sym_css_named_color_token100] = ACTIONS(174),
    [aux_sym_css_named_color_token101] = ACTIONS(174),
    [aux_sym_css_named_color_token102] = ACTIONS(174),
    [aux_sym_css_named_color_token103] = ACTIONS(174),
    [aux_sym_css_named_color_token104] = ACTIONS(176),
    [aux_sym_css_named_color_token105] = ACTIONS(174),
    [aux_sym_css_named_color_token106] = ACTIONS(176),
    [aux_sym_css_named_color_token107] = ACTIONS(174),
    [aux_sym_css_named_color_token108] = ACTIONS(174),
    [aux_sym_css_named_color_token109] = ACTIONS(174),
    [aux_sym_css_named_color_token110] = ACTIONS(174),
    [aux_sym_css_named_color_token111] = ACTIONS(174),
    [aux_sym_css_named_color_token112] = ACTIONS(174),
    [aux_sym_css_named_color_token113] = ACTIONS(174),
    [aux_sym_css_named_color_token114] = ACTIONS(174),
    [aux_sym_css_named_color_token115] = ACTIONS(174),
    [aux_sym_css_named_color_token116] = ACTIONS(174),
    [aux_sym_css_named_color_token117] = ACTIONS(174),
    [aux_sym_css_named_color_token118] = ACTIONS(174),
    [aux_sym_css_named_color_token119] = ACTIONS(174),
    [aux_sym_css_named_color_token120] = ACTIONS(174),
    [aux_sym_css_named_color_token121] = ACTIONS(174),
    [aux_sym_css_named_color_token122] = ACTIONS(174),
    [aux_sym_css_named_color_token123] = ACTIONS(174),
    [aux_sym_css_named_color_token124] = ACTIONS(174),
    [aux_sym_css_named_color_token125] = ACTIONS(174),
    [aux_sym_css_named_color_token126] = ACTIONS(174),
    [aux_sym_css_named_color_token127] = ACTIONS(174),
    [aux_sym_css_named_color_token128] = ACTIONS(174),
    [aux_sym_css_named_color_token129] = ACTIONS(174),
    [aux_sym_css_named_color_token130] = ACTIONS(174),
    [aux_sym_css_named_color_token131] = ACTIONS(174),
    [aux_sym_css_named_color_token132] = ACTIONS(174),
    [aux_sym_css_named_color_token133] = ACTIONS(174),
    [aux_sym_css_named_color_token134] = ACTIONS(174),
    [aux_sym_css_named_color_token135] = ACTIONS(174),
    [aux_sym_css_named_color_token136] = ACTIONS(174),
    [aux_sym_css_named_color_token137] = ACTIONS(174),
    [aux_sym_css_named_color_token138] = ACTIONS(174),
    [aux_sym_css_named_color_token139] = ACTIONS(174),
    [aux_sym_css_named_color_token140] = ACTIONS(174),
    [aux_sym_css_named_color_token141] = ACTIONS(174),
    [aux_sym_css_named_color_token142] = ACTIONS(174),
    [aux_sym_css_named_color_token143] = ACTIONS(174),
    [aux_sym_css_named_color_token144] = ACTIONS(174),
    [aux_sym_css_named_color_token145] = ACTIONS(176),
    [aux_sym_css_named_color_token146] = ACTIONS(174),
    [aux_sym_css_named_color_token147] = ACTIONS(176),
    [aux_sym_css_named_color_token148] = ACTIONS(174),
    [sym_css_keyword_transparent] = ACTIONS(174),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(180),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(178),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(180),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(178),
    [aux_sym_css_function_hwb_token1] = ACTIONS(178),
    [aux_sym_css_function_lab_token1] = ACTIONS(178),
    [aux_sym_css_function_oklab_token1] = ACTIONS(178),
    [aux_sym_css_function_lch_token1] = ACTIONS(178),
    [aux_sym_css_function_oklch_token1] = ACTIONS(178),
    [aux_sym_css_function_color_token1] = ACTIONS(178),
    [sym_css_hex_color_6_digits] = ACTIONS(180),
    [sym_css_hex_color_8_digits] = ACTIONS(178),
    [sym_css_hex_color_3_digits] = ACTIONS(180),
    [sym_css_hex_color_4_digits] = ACTIONS(180),
    [aux_sym_css_named_color_token1] = ACTIONS(178),
    [aux_sym_css_named_color_token2] = ACTIONS(178),
    [aux_sym_css_named_color_token3] = ACTIONS(180),
    [aux_sym_css_named_color_token4] = ACTIONS(178),
    [aux_sym_css_named_color_token5] = ACTIONS(178),
    [aux_sym_css_named_color_token6] = ACTIONS(178),
    [aux_sym_css_named_color_token7] = ACTIONS(178),
    [aux_sym_css_named_color_token8] = ACTIONS(178),
    [aux_sym_css_named_color_token9] = ACTIONS(178),
    [aux_sym_css_named_color_token10] = ACTIONS(180),
    [aux_sym_css_named_color_token11] = ACTIONS(178),
    [aux_sym_css_named_color_token12] = ACTIONS(178),
    [aux_sym_css_named_color_token13] = ACTIONS(178),
    [aux_sym_css_named_color_token14] = ACTIONS(178),
    [aux_sym_css_named_color_token15] = ACTIONS(178),
    [aux_sym_css_named_color_token16] = ACTIONS(178),
    [aux_sym_css_named_color_token17] = ACTIONS(178),
    [aux_sym_css_named_color_token18] = ACTIONS(178),
    [aux_sym_css_named_color_token19] = ACTIONS(178),
    [aux_sym_css_named_color_token20] = ACTIONS(178),
    [aux_sym_css_named_color_token21] = ACTIONS(178),
    [aux_sym_css_named_color_token22] = ACTIONS(178),
    [aux_sym_css_named_color_token23] = ACTIONS(178),
    [aux_sym_css_named_color_token24] = ACTIONS(178),
    [aux_sym_css_named_color_token25] = ACTIONS(178),
    [aux_sym_css_named_color_token26] = ACTIONS(178),
    [aux_sym_css_named_color_token27] = ACTIONS(178),
    [aux_sym_css_named_color_token28] = ACTIONS(178),
    [aux_sym_css_named_color_token29] = ACTIONS(178),
    [aux_sym_css_named_color_token30] = ACTIONS(178),
    [aux_sym_css_named_color_token31] = ACTIONS(178),
    [aux_sym_css_named_color_token32] = ACTIONS(178),
    [aux_sym_css_named_color_token33] = ACTIONS(178),
    [aux_sym_css_named_color_token34] = ACTIONS(178),
    [aux_sym_css_named_color_token35] = ACTIONS(178),
    [aux_sym_css_named_color_token36] = ACTIONS(178),
    [aux_sym_css_named_color_token37] = ACTIONS(178),
    [aux_sym_css_named_color_token38] = ACTIONS(178),
    [aux_sym_css_named_color_token39] = ACTIONS(178),
    [aux_sym_css_named_color_token40] = ACTIONS(178),
    [aux_sym_css_named_color_token41] = ACTIONS(178),
    [aux_sym_css_named_color_token42] = ACTIONS(178),
    [aux_sym_css_named_color_token43] = ACTIONS(178),
    [aux_sym_css_named_color_token44] = ACTIONS(178),
    [aux_sym_css_named_color_token45] = ACTIONS(178),
    [aux_sym_css_named_color_token46] = ACTIONS(178),
    [aux_sym_css_named_color_token47] = ACTIONS(178),
    [aux_sym_css_named_color_token48] = ACTIONS(178),
    [aux_sym_css_named_color_token49] = ACTIONS(178),
    [aux_sym_css_named_color_token50] = ACTIONS(178),
    [aux_sym_css_named_color_token51] = ACTIONS(178),
    [aux_sym_css_named_color_token52] = ACTIONS(180),
    [aux_sym_css_named_color_token53] = ACTIONS(178),
    [aux_sym_css_named_color_token54] = ACTIONS(178),
    [aux_sym_css_named_color_token55] = ACTIONS(180),
    [aux_sym_css_named_color_token56] = ACTIONS(178),
    [aux_sym_css_named_color_token57] = ACTIONS(178),
    [aux_sym_css_named_color_token58] = ACTIONS(178),
    [aux_sym_css_named_color_token59] = ACTIONS(178),
    [aux_sym_css_named_color_token60] = ACTIONS(178),
    [aux_sym_css_named_color_token61] = ACTIONS(178),
    [aux_sym_css_named_color_token62] = ACTIONS(178),
    [aux_sym_css_named_color_token63] = ACTIONS(178),
    [aux_sym_css_named_color_token64] = ACTIONS(180),
    [aux_sym_css_named_color_token65] = ACTIONS(178),
    [aux_sym_css_named_color_token66] = ACTIONS(178),
    [aux_sym_css_named_color_token67] = ACTIONS(178),
    [aux_sym_css_named_color_token68] = ACTIONS(178),
    [aux_sym_css_named_color_token69] = ACTIONS(178),
    [aux_sym_css_named_color_token70] = ACTIONS(178),
    [aux_sym_css_named_color_token71] = ACTIONS(178),
    [aux_sym_css_named_color_token72] = ACTIONS(178),
    [aux_sym_css_named_color_token73] = ACTIONS(178),
    [aux_sym_css_named_color_token74] = ACTIONS(178),
    [aux_sym_css_named_color_token75] = ACTIONS(178),
    [aux_sym_css_named_color_token76] = ACTIONS(178),
    [aux_sym_css_named_color_token77] = ACTIONS(178),
    [aux_sym_css_named_color_token78] = ACTIONS(178),
    [aux_sym_css_named_color_token79] = ACTIONS(178),
    [aux_sym_css_named_color_token80] = ACTIONS(178),
    [aux_sym_css_named_color_token81] = ACTIONS(178),
    [aux_sym_css_named_color_token82] = ACTIONS(178),
    [aux_sym_css_named_color_token83] = ACTIONS(180),
    [aux_sym_css_named_color_token84] = ACTIONS(178),
    [aux_sym_css_named_color_token85] = ACTIONS(178),
    [aux_sym_css_named_color_token86] = ACTIONS(178),
    [aux_sym_css_named_color_token87] = ACTIONS(178),
    [aux_sym_css_named_color_token88] = ACTIONS(178),
    [aux_sym_css_named_color_token89] = ACTIONS(178),
    [aux_sym_css_named_color_token90] = ACTIONS(178),
    [aux_sym_css_named_color_token91] = ACTIONS(178),
    [aux_sym_css_named_color_token92] = ACTIONS(178),
    [aux_sym_css_named_color_token93] = ACTIONS(178),
    [aux_sym_css_named_color_token94] = ACTIONS(178),
    [aux_sym_css_named_color_token95] = ACTIONS(178),
    [aux_sym_css_named_color_token96] = ACTIONS(178),
    [aux_sym_css_named_color_token97] = ACTIONS(178),
    [aux_sym_css_named_color_token98] = ACTIONS(178),
    [aux_sym_css_named_color_token99] = ACTIONS(178),
    [aux_sym_css_named_color_token100] = ACTIONS(178),
    [aux_sym_css_named_color_token101] = ACTIONS(178),
    [aux_sym_css_named_color_token102] = ACTIONS(178),
    [aux_sym_css_named_color_token103] = ACTIONS(178),
    [aux_sym_css_named_color_token104] = ACTIONS(180),
    [aux_sym_css_named_color_token105] = ACTIONS(178),
    [aux_sym_css_named_color_token106] = ACTIONS(180),
    [aux_sym_css_named_color_token107] = ACTIONS(178),
    [aux_sym_css_named_color_token108] = ACTIONS(178),
    [aux_sym_css_named_color_token109] = ACTIONS(178),
    [aux_sym_css_named_color_token110] = ACTIONS(178),
    [aux_sym_css_named_color_token111] = ACTIONS(178),
    [aux_sym_css_named_color_token112] = ACTIONS(178),
    [aux_sym_css_named_color_token113] = ACTIONS(178),
    [aux_sym_css_named_color_token114] = ACTIONS(178),
    [aux_sym_css_named_color_token115] = ACTIONS(178),
    [aux_sym_css_named_color_token116] = ACTIONS(178),
    [aux_sym_css_named_color_token117] = ACTIONS(178),
    [aux_sym_css_named_color_token118] = ACTIONS(178),
    [aux_sym_css_named_color_token119] = ACTIONS(178),
    [aux_sym_css_named_color_token120] = ACTIONS(178),
    [aux_sym_css_named_color_token121] = ACTIONS(178),
    [aux_sym_css_named_color_token122] = ACTIONS(178),
    [aux_sym_css_named_color_token123] = ACTIONS(178),
    [aux_sym_css_named_color_token124] = ACTIONS(178),
    [aux_sym_css_named_color_token125] = ACTIONS(178),
    [aux_sym_css_named_color_token126] = ACTIONS(178),
    [aux_sym_css_named_color_token127] = ACTIONS(178),
    [aux_sym_css_named_color_token128] = ACTIONS(178),
    [aux_sym_css_named_color_token129] = ACTIONS(178),
    [aux_sym_css_named_color_token130] = ACTIONS(178),
    [aux_sym_css_named_color_token131] = ACTIONS(178),
    [aux_sym_css_named_color_token132] = ACTIONS(178),
    [aux_sym_css_named_color_token133] = ACTIONS(178),
    [aux_sym_css_named_color_token134] = ACTIONS(178),
    [aux_sym_css_named_color_token135] = ACTIONS(178),
    [aux_sym_css_named_color_token136] = ACTIONS(178),
    [aux_sym_css_named_color_token137] = ACTIONS(178),
    [aux_sym_css_named_color_token138] = ACTIONS(178),
    [aux_sym_css_named_color_token139] = ACTIONS(178),
    [aux_sym_css_named_color_token140] = ACTIONS(178),
    [aux_sym_css_named_color_token141] = ACTIONS(178),
    [aux_sym_css_named_color_token142] = ACTIONS(178),
    [aux_sym_css_named_color_token143] = ACTIONS(178),
    [aux_sym_css_named_color_token144] = ACTIONS(178),
    [aux_sym_css_named_color_token145] = ACTIONS(180),
    [aux_sym_css_named_color_token146] = ACTIONS(178),
    [aux_sym_css_named_color_token147] = ACTIONS(180),
    [aux_sym_css_named_color_token148] = ACTIONS(178),
    [sym_css_keyword_transparent] = ACTIONS(178),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(184),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(182),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(184),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(182),
    [aux_sym_css_function_hwb_token1] = ACTIONS(182),
    [aux_sym_css_function_lab_token1] = ACTIONS(182),
    [aux_sym_css_function_oklab_token1] = ACTIONS(182),
    [aux_sym_css_function_lch_token1] = ACTIONS(182),
    [aux_sym_css_function_oklch_token1] = ACTIONS(182),
    [aux_sym_css_function_color_token1] = ACTIONS(182),
    [sym_css_hex_color_6_digits] = ACTIONS(184),
    [sym_css_hex_color_8_digits] = ACTIONS(182),
    [sym_css_hex_color_3_digits] = ACTIONS(184),
    [sym_css_hex_color_4_digits] = ACTIONS(184),
    [aux_sym_css_named_color_token1] = ACTIONS(182),
    [aux_sym_css_named_color_token2] = ACTIONS(182),
    [aux_sym_css_named_color_token3] = ACTIONS(184),
    [aux_sym_css_named_color_token4] = ACTIONS(182),
    [aux_sym_css_named_color_token5] = ACTIONS(182),
    [aux_sym_css_named_color_token6] = ACTIONS(182),
    [aux_sym_css_named_color_token7] = ACTIONS(182),
    [aux_sym_css_named_color_token8] = ACTIONS(182),
    [aux_sym_css_named_color_token9] = ACTIONS(182),
    [aux_sym_css_named_color_token10] = ACTIONS(184),
    [aux_sym_css_named_color_token11] = ACTIONS(182),
    [aux_sym_css_named_color_token12] = ACTIONS(182),
    [aux_sym_css_named_color_token13] = ACTIONS(182),
    [aux_sym_css_named_color_token14] = ACTIONS(182),
    [aux_sym_css_named_color_token15] = ACTIONS(182),
    [aux_sym_css_named_color_token16] = ACTIONS(182),
    [aux_sym_css_named_color_token17] = ACTIONS(182),
    [aux_sym_css_named_color_token18] = ACTIONS(182),
    [aux_sym_css_named_color_token19] = ACTIONS(182),
    [aux_sym_css_named_color_token20] = ACTIONS(182),
    [aux_sym_css_named_color_token21] = ACTIONS(182),
    [aux_sym_css_named_color_token22] = ACTIONS(182),
    [aux_sym_css_named_color_token23] = ACTIONS(182),
    [aux_sym_css_named_color_token24] = ACTIONS(182),
    [aux_sym_css_named_color_token25] = ACTIONS(182),
    [aux_sym_css_named_color_token26] = ACTIONS(182),
    [aux_sym_css_named_color_token27] = ACTIONS(182),
    [aux_sym_css_named_color_token28] = ACTIONS(182),
    [aux_sym_css_named_color_token29] = ACTIONS(182),
    [aux_sym_css_named_color_token30] = ACTIONS(182),
    [aux_sym_css_named_color_token31] = ACTIONS(182),
    [aux_sym_css_named_color_token32] = ACTIONS(182),
    [aux_sym_css_named_color_token33] = ACTIONS(182),
    [aux_sym_css_named_color_token34] = ACTIONS(182),
    [aux_sym_css_named_color_token35] = ACTIONS(182),
    [aux_sym_css_named_color_token36] = ACTIONS(182),
    [aux_sym_css_named_color_token37] = ACTIONS(182),
    [aux_sym_css_named_color_token38] = ACTIONS(182),
    [aux_sym_css_named_color_token39] = ACTIONS(182),
    [aux_sym_css_named_color_token40] = ACTIONS(182),
    [aux_sym_css_named_color_token41] = ACTIONS(182),
    [aux_sym_css_named_color_token42] = ACTIONS(182),
    [aux_sym_css_named_color_token43] = ACTIONS(182),
    [aux_sym_css_named_color_token44] = ACTIONS(182),
    [aux_sym_css_named_color_token45] = ACTIONS(182),
    [aux_sym_css_named_color_token46] = ACTIONS(182),
    [aux_sym_css_named_color_token47] = ACTIONS(182),
    [aux_sym_css_named_color_token48] = ACTIONS(182),
    [aux_sym_css_named_color_token49] = ACTIONS(182),
    [aux_sym_css_named_color_token50] = ACTIONS(182),
    [aux_sym_css_named_color_token51] = ACTIONS(182),
    [aux_sym_css_named_color_token52] = ACTIONS(184),
    [aux_sym_css_named_color_token53] = ACTIONS(182),
    [aux_sym_css_named_color_token54] = ACTIONS(182),
    [aux_sym_css_named_color_token55] = ACTIONS(184),
    [aux_sym_css_named_color_token56] = ACTIONS(182),
    [aux_sym_css_named_color_token57] = ACTIONS(182),
    [aux_sym_css_named_color_token58] = ACTIONS(182),
    [aux_sym_css_named_color_token59] = ACTIONS(182),
    [aux_sym_css_named_color_token60] = ACTIONS(182),
    [aux_sym_css_named_color_token61] = ACTIONS(182),
    [aux_sym_css_named_color_token62] = ACTIONS(182),
    [aux_sym_css_named_color_token63] = ACTIONS(182),
    [aux_sym_css_named_color_token64] = ACTIONS(184),
    [aux_sym_css_named_color_token65] = ACTIONS(182),
    [aux_sym_css_named_color_token66] = ACTIONS(182),
    [aux_sym_css_named_color_token67] = ACTIONS(182),
    [aux_sym_css_named_color_token68] = ACTIONS(182),
    [aux_sym_css_named_color_token69] = ACTIONS(182),
    [aux_sym_css_named_color_token70] = ACTIONS(182),
    [aux_sym_css_named_color_token71] = ACTIONS(182),
    [aux_sym_css_named_color_token72] = ACTIONS(182),
    [aux_sym_css_named_color_token73] = ACTIONS(182),
    [aux_sym_css_named_color_token74] = ACTIONS(182),
    [aux_sym_css_named_color_token75] = ACTIONS(182),
    [aux_sym_css_named_color_token76] = ACTIONS(182),
    [aux_sym_css_named_color_token77] = ACTIONS(182),
    [aux_sym_css_named_color_token78] = ACTIONS(182),
    [aux_sym_css_named_color_token79] = ACTIONS(182),
    [aux_sym_css_named_color_token80] = ACTIONS(182),
    [aux_sym_css_named_color_token81] = ACTIONS(182),
    [aux_sym_css_named_color_token82] = ACTIONS(182),
    [aux_sym_css_named_color_token83] = ACTIONS(184),
    [aux_sym_css_named_color_token84] = ACTIONS(182),
    [aux_sym_css_named_color_token85] = ACTIONS(182),
    [aux_sym_css_named_color_token86] = ACTIONS(182),
    [aux_sym_css_named_color_token87] = ACTIONS(182),
    [aux_sym_css_named_color_token88] = ACTIONS(182),
    [aux_sym_css_named_color_token89] = ACTIONS(182),
    [aux_sym_css_named_color_token90] = ACTIONS(182),
    [aux_sym_css_named_color_token91] = ACTIONS(182),
    [aux_sym_css_named_color_token92] = ACTIONS(182),
    [aux_sym_css_named_color_token93] = ACTIONS(182),
    [aux_sym_css_named_color_token94] = ACTIONS(182),
    [aux_sym_css_named_color_token95] = ACTIONS(182),
    [aux_sym_css_named_color_token96] = ACTIONS(182),
    [aux_sym_css_named_color_token97] = ACTIONS(182),
    [aux_sym_css_named_color_token98] = ACTIONS(182),
    [aux_sym_css_named_color_token99] = ACTIONS(182),
    [aux_sym_css_named_color_token100] = ACTIONS(182),
    [aux_sym_css_named_color_token101] = ACTIONS(182),
    [aux_sym_css_named_color_token102] = ACTIONS(182),
    [aux_sym_css_named_color_token103] = ACTIONS(182),
    [aux_sym_css_named_color_token104] = ACTIONS(184),
    [aux_sym_css_named_color_token105] = ACTIONS(182),
    [aux_sym_css_named_color_token106] = ACTIONS(184),
    [aux_sym_css_named_color_token107] = ACTIONS(182),
    [aux_sym_css_named_color_token108] = ACTIONS(182),
    [aux_sym_css_named_color_token109] = ACTIONS(182),
    [aux_sym_css_named_color_token110] = ACTIONS(182),
    [aux_sym_css_named_color_token111] = ACTIONS(182),
    [aux_sym_css_named_color_token112] = ACTIONS(182),
    [aux_sym_css_named_color_token113] = ACTIONS(182),
    [aux_sym_css_named_color_token114] = ACTIONS(182),
    [aux_sym_css_named_color_token115] = ACTIONS(182),
    [aux_sym_css_named_color_token116] = ACTIONS(182),
    [aux_sym_css_named_color_token117] = ACTIONS(182),
    [aux_sym_css_named_color_token118] = ACTIONS(182),
    [aux_sym_css_named_color_token119] = ACTIONS(182),
    [aux_sym_css_named_color_token120] = ACTIONS(182),
    [aux_sym_css_named_color_token121] = ACTIONS(182),
    [aux_sym_css_named_color_token122] = ACTIONS(182),
    [aux_sym_css_named_color_token123] = ACTIONS(182),
    [aux_sym_css_named_color_token124] = ACTIONS(182),
    [aux_sym_css_named_color_token125] = ACTIONS(182),
    [aux_sym_css_named_color_token126] = ACTIONS(182),
    [aux_sym_css_named_color_token127] = ACTIONS(182),
    [aux_sym_css_named_color_token128] = ACTIONS(182),
    [aux_sym_css_named_color_token129] = ACTIONS(182),
    [aux_sym_css_named_color_token130] = ACTIONS(182),
    [aux_sym_css_named_color_token131] = ACTIONS(182),
    [aux_sym_css_named_color_token132] = ACTIONS(182),
    [aux_sym_css_named_color_token133] = ACTIONS(182),
    [aux_sym_css_named_color_token134] = ACTIONS(182),
    [aux_sym_css_named_color_token135] = ACTIONS(182),
    [aux_sym_css_named_color_token136] = ACTIONS(182),
    [aux_sym_css_named_color_token137] = ACTIONS(182),
    [aux_sym_css_named_color_token138] = ACTIONS(182),
    [aux_sym_css_named_color_token139] = ACTIONS(182),
    [aux_sym_css_named_color_token140] = ACTIONS(182),
    [aux_sym_css_named_color_token141] = ACTIONS(182),
    [aux_sym_css_named_color_token142] = ACTIONS(182),
    [aux_sym_css_named_color_token143] = ACTIONS(182),
    [aux_sym_css_named_color_token144] = ACTIONS(182),
    [aux_sym_css_named_color_token145] = ACTIONS(184),
    [aux_sym_css_named_color_token146] = ACTIONS(182),
    [aux_sym_css_named_color_token147] = ACTIONS(184),
    [aux_sym_css_named_color_token148] = ACTIONS(182),
    [sym_css_keyword_transparent] = ACTIONS(182),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(188),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(186),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(188),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(186),
    [aux_sym_css_function_hwb_token1] = ACTIONS(186),
    [aux_sym_css_function_lab_token1] = ACTIONS(186),
    [aux_sym_css_function_oklab_token1] = ACTIONS(186),
    [aux_sym_css_function_lch_token1] = ACTIONS(186),
    [aux_sym_css_function_oklch_token1] = ACTIONS(186),
    [aux_sym_css_function_color_token1] = ACTIONS(186),
    [sym_css_hex_color_6_digits] = ACTIONS(188),
    [sym_css_hex_color_8_digits] = ACTIONS(186),
    [sym_css_hex_color_3_digits] = ACTIONS(188),
    [sym_css_hex_color_4_digits] = ACTIONS(188),
    [aux_sym_css_named_color_token1] = ACTIONS(186),
    [aux_sym_css_named_color_token2] = ACTIONS(186),
    [aux_sym_css_named_color_token3] = ACTIONS(188),
    [aux_sym_css_named_color_token4] = ACTIONS(186),
    [aux_sym_css_named_color_token5] = ACTIONS(186),
    [aux_sym_css_named_color_token6] = ACTIONS(186),
    [aux_sym_css_named_color_token7] = ACTIONS(186),
    [aux_sym_css_named_color_token8] = ACTIONS(186),
    [aux_sym_css_named_color_token9] = ACTIONS(186),
    [aux_sym_css_named_color_token10] = ACTIONS(188),
    [aux_sym_css_named_color_token11] = ACTIONS(186),
    [aux_sym_css_named_color_token12] = ACTIONS(186),
    [aux_sym_css_named_color_token13] = ACTIONS(186),
    [aux_sym_css_named_color_token14] = ACTIONS(186),
    [aux_sym_css_named_color_token15] = ACTIONS(186),
    [aux_sym_css_named_color_token16] = ACTIONS(186),
    [aux_sym_css_named_color_token17] = ACTIONS(186),
    [aux_sym_css_named_color_token18] = ACTIONS(186),
    [aux_sym_css_named_color_token19] = ACTIONS(186),
    [aux_sym_css_named_color_token20] = ACTIONS(186),
    [aux_sym_css_named_color_token21] = ACTIONS(186),
    [aux_sym_css_named_color_token22] = ACTIONS(186),
    [aux_sym_css_named_color_token23] = ACTIONS(186),
    [aux_sym_css_named_color_token24] = ACTIONS(186),
    [aux_sym_css_named_color_token25] = ACTIONS(186),
    [aux_sym_css_named_color_token26] = ACTIONS(186),
    [aux_sym_css_named_color_token27] = ACTIONS(186),
    [aux_sym_css_named_color_token28] = ACTIONS(186),
    [aux_sym_css_named_color_token29] = ACTIONS(186),
    [aux_sym_css_named_color_token30] = ACTIONS(186),
    [aux_sym_css_named_color_token31] = ACTIONS(186),
    [aux_sym_css_named_color_token32] = ACTIONS(186),
    [aux_sym_css_named_color_token33] = ACTIONS(186),
    [aux_sym_css_named_color_token34] = ACTIONS(186),
    [aux_sym_css_named_color_token35] = ACTIONS(186),
    [aux_sym_css_named_color_token36] = ACTIONS(186),
    [aux_sym_css_named_color_token37] = ACTIONS(186),
    [aux_sym_css_named_color_token38] = ACTIONS(186),
    [aux_sym_css_named_color_token39] = ACTIONS(186),
    [aux_sym_css_named_color_token40] = ACTIONS(186),
    [aux_sym_css_named_color_token41] = ACTIONS(186),
    [aux_sym_css_named_color_token42] = ACTIONS(186),
    [aux_sym_css_named_color_token43] = ACTIONS(186),
    [aux_sym_css_named_color_token44] = ACTIONS(186),
    [aux_sym_css_named_color_token45] = ACTIONS(186),
    [aux_sym_css_named_color_token46] = ACTIONS(186),
    [aux_sym_css_named_color_token47] = ACTIONS(186),
    [aux_sym_css_named_color_token48] = ACTIONS(186),
    [aux_sym_css_named_color_token49] = ACTIONS(186),
    [aux_sym_css_named_color_token50] = ACTIONS(186),
    [aux_sym_css_named_color_token51] = ACTIONS(186),
    [aux_sym_css_named_color_token52] = ACTIONS(188),
    [aux_sym_css_named_color_token53] = ACTIONS(186),
    [aux_sym_css_named_color_token54] = ACTIONS(186),
    [aux_sym_css_named_color_token55] = ACTIONS(188),
    [aux_sym_css_named_color_token56] = ACTIONS(186),
    [aux_sym_css_named_color_token57] = ACTIONS(186),
    [aux_sym_css_named_color_token58] = ACTIONS(186),
    [aux_sym_css_named_color_token59] = ACTIONS(186),
    [aux_sym_css_named_color_token60] = ACTIONS(186),
    [aux_sym_css_named_color_token61] = ACTIONS(186),
    [aux_sym_css_named_color_token62] = ACTIONS(186),
    [aux_sym_css_named_color_token63] = ACTIONS(186),
    [aux_sym_css_named_color_token64] = ACTIONS(188),
    [aux_sym_css_named_color_token65] = ACTIONS(186),
    [aux_sym_css_named_color_token66] = ACTIONS(186),
    [aux_sym_css_named_color_token67] = ACTIONS(186),
    [aux_sym_css_named_color_token68] = ACTIONS(186),
    [aux_sym_css_named_color_token69] = ACTIONS(186),
    [aux_sym_css_named_color_token70] = ACTIONS(186),
    [aux_sym_css_named_color_token71] = ACTIONS(186),
    [aux_sym_css_named_color_token72] = ACTIONS(186),
    [aux_sym_css_named_color_token73] = ACTIONS(186),
    [aux_sym_css_named_color_token74] = ACTIONS(186),
    [aux_sym_css_named_color_token75] = ACTIONS(186),
    [aux_sym_css_named_color_token76] = ACTIONS(186),
    [aux_sym_css_named_color_token77] = ACTIONS(186),
    [aux_sym_css_named_color_token78] = ACTIONS(186),
    [aux_sym_css_named_color_token79] = ACTIONS(186),
    [aux_sym_css_named_color_token80] = ACTIONS(186),
    [aux_sym_css_named_color_token81] = ACTIONS(186),
    [aux_sym_css_named_color_token82] = ACTIONS(186),
    [aux_sym_css_named_color_token83] = ACTIONS(188),
    [aux_sym_css_named_color_token84] = ACTIONS(186),
    [aux_sym_css_named_color_token85] = ACTIONS(186),
    [aux_sym_css_named_color_token86] = ACTIONS(186),
    [aux_sym_css_named_color_token87] = ACTIONS(186),
    [aux_sym_css_named_color_token88] = ACTIONS(186),
    [aux_sym_css_named_color_token89] = ACTIONS(186),
    [aux_sym_css_named_color_token90] = ACTIONS(186),
    [aux_sym_css_named_color_token91] = ACTIONS(186),
    [aux_sym_css_named_color_token92] = ACTIONS(186),
    [aux_sym_css_named_color_token93] = ACTIONS(186),
    [aux_sym_css_named_color_token94] = ACTIONS(186),
    [aux_sym_css_named_color_token95] = ACTIONS(186),
    [aux_sym_css_named_color_token96] = ACTIONS(186),
    [aux_sym_css_named_color_token97] = ACTIONS(186),
    [aux_sym_css_named_color_token98] = ACTIONS(186),
    [aux_sym_css_named_color_token99] = ACTIONS(186),
    [aux_sym_css_named_color_token100] = ACTIONS(186),
    [aux_sym_css_named_color_token101] = ACTIONS(186),
    [aux_sym_css_named_color_token102] = ACTIONS(186),
    [aux_sym_css_named_color_token103] = ACTIONS(186),
    [aux_sym_css_named_color_token104] = ACTIONS(188),
    [aux_sym_css_named_color_token105] = ACTIONS(186),
    [aux_sym_css_named_color_token106] = ACTIONS(188),
    [aux_sym_css_named_color_token107] = ACTIONS(186),
    [aux_sym_css_named_color_token108] = ACTIONS(186),
    [aux_sym_css_named_color_token109] = ACTIONS(186),
    [aux_sym_css_named_color_token110] = ACTIONS(186),
    [aux_sym_css_named_color_token111] = ACTIONS(186),
    [aux_sym_css_named_color_token112] = ACTIONS(186),
    [aux_sym_css_named_color_token113] = ACTIONS(186),
    [aux_sym_css_named_color_token114] = ACTIONS(186),
    [aux_sym_css_named_color_token115] = ACTIONS(186),
    [aux_sym_css_named_color_token116] = ACTIONS(186),
    [aux_sym_css_named_color_token117] = ACTIONS(186),
    [aux_sym_css_named_color_token118] = ACTIONS(186),
    [aux_sym_css_named_color_token119] = ACTIONS(186),
    [aux_sym_css_named_color_token120] = ACTIONS(186),
    [aux_sym_css_named_color_token121] = ACTIONS(186),
    [aux_sym_css_named_color_token122] = ACTIONS(186),
    [aux_sym_css_named_color_token123] = ACTIONS(186),
    [aux_sym_css_named_color_token124] = ACTIONS(186),
    [aux_sym_css_named_color_token125] = ACTIONS(186),
    [aux_sym_css_named_color_token126] = ACTIONS(186),
    [aux_sym_css_named_color_token127] = ACTIONS(186),
    [aux_sym_css_named_color_token128] = ACTIONS(186),
    [aux_sym_css_named_color_token129] = ACTIONS(186),
    [aux_sym_css_named_color_token130] = ACTIONS(186),
    [aux_sym_css_named_color_token131] = ACTIONS(186),
    [aux_sym_css_named_color_token132] = ACTIONS(186),
    [aux_sym_css_named_color_token133] = ACTIONS(186),
    [aux_sym_css_named_color_token134] = ACTIONS(186),
    [aux_sym_css_named_color_token135] = ACTIONS(186),
    [aux_sym_css_named_color_token136] = ACTIONS(186),
    [aux_sym_css_named_color_token137] = ACTIONS(186),
    [aux_sym_css_named_color_token138] = ACTIONS(186),
    [aux_sym_css_named_color_token139] = ACTIONS(186),
    [aux_sym_css_named_color_token140] = ACTIONS(186),
    [aux_sym_css_named_color_token141] = ACTIONS(186),
    [aux_sym_css_named_color_token142] = ACTIONS(186),
    [aux_sym_css_named_color_token143] = ACTIONS(186),
    [aux_sym_css_named_color_token144] = ACTIONS(186),
    [aux_sym_css_named_color_token145] = ACTIONS(188),
    [aux_sym_css_named_color_token146] = ACTIONS(186),
    [aux_sym_css_named_color_token147] = ACTIONS(188),
    [aux_sym_css_named_color_token148] = ACTIONS(186),
    [sym_css_keyword_transparent] = ACTIONS(186),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(192),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(190),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(192),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(190),
    [aux_sym_css_function_hwb_token1] = ACTIONS(190),
    [aux_sym_css_function_lab_token1] = ACTIONS(190),
    [aux_sym_css_function_oklab_token1] = ACTIONS(190),
    [aux_sym_css_function_lch_token1] = ACTIONS(190),
    [aux_sym_css_function_oklch_token1] = ACTIONS(190),
    [aux_sym_css_function_color_token1] = ACTIONS(190),
    [sym_css_hex_color_6_digits] = ACTIONS(192),
    [sym_css_hex_color_8_digits] = ACTIONS(190),
    [sym_css_hex_color_3_digits] = ACTIONS(192),
    [sym_css_hex_color_4_digits] = ACTIONS(192),
    [aux_sym_css_named_color_token1] = ACTIONS(190),
    [aux_sym_css_named_color_token2] = ACTIONS(190),
    [aux_sym_css_named_color_token3] = ACTIONS(192),
    [aux_sym_css_named_color_token4] = ACTIONS(190),
    [aux_sym_css_named_color_token5] = ACTIONS(190),
    [aux_sym_css_named_color_token6] = ACTIONS(190),
    [aux_sym_css_named_color_token7] = ACTIONS(190),
    [aux_sym_css_named_color_token8] = ACTIONS(190),
    [aux_sym_css_named_color_token9] = ACTIONS(190),
    [aux_sym_css_named_color_token10] = ACTIONS(192),
    [aux_sym_css_named_color_token11] = ACTIONS(190),
    [aux_sym_css_named_color_token12] = ACTIONS(190),
    [aux_sym_css_named_color_token13] = ACTIONS(190),
    [aux_sym_css_named_color_token14] = ACTIONS(190),
    [aux_sym_css_named_color_token15] = ACTIONS(190),
    [aux_sym_css_named_color_token16] = ACTIONS(190),
    [aux_sym_css_named_color_token17] = ACTIONS(190),
    [aux_sym_css_named_color_token18] = ACTIONS(190),
    [aux_sym_css_named_color_token19] = ACTIONS(190),
    [aux_sym_css_named_color_token20] = ACTIONS(190),
    [aux_sym_css_named_color_token21] = ACTIONS(190),
    [aux_sym_css_named_color_token22] = ACTIONS(190),
    [aux_sym_css_named_color_token23] = ACTIONS(190),
    [aux_sym_css_named_color_token24] = ACTIONS(190),
    [aux_sym_css_named_color_token25] = ACTIONS(190),
    [aux_sym_css_named_color_token26] = ACTIONS(190),
    [aux_sym_css_named_color_token27] = ACTIONS(190),
    [aux_sym_css_named_color_token28] = ACTIONS(190),
    [aux_sym_css_named_color_token29] = ACTIONS(190),
    [aux_sym_css_named_color_token30] = ACTIONS(190),
    [aux_sym_css_named_color_token31] = ACTIONS(190),
    [aux_sym_css_named_color_token32] = ACTIONS(190),
    [aux_sym_css_named_color_token33] = ACTIONS(190),
    [aux_sym_css_named_color_token34] = ACTIONS(190),
    [aux_sym_css_named_color_token35] = ACTIONS(190),
    [aux_sym_css_named_color_token36] = ACTIONS(190),
    [aux_sym_css_named_color_token37] = ACTIONS(190),
    [aux_sym_css_named_color_token38] = ACTIONS(190),
    [aux_sym_css_named_color_token39] = ACTIONS(190),
    [aux_sym_css_named_color_token40] = ACTIONS(190),
    [aux_sym_css_named_color_token41] = ACTIONS(190),
    [aux_sym_css_named_color_token42] = ACTIONS(190),
    [aux_sym_css_named_color_token43] = ACTIONS(190),
    [aux_sym_css_named_color_token44] = ACTIONS(190),
    [aux_sym_css_named_color_token45] = ACTIONS(190),
    [aux_sym_css_named_color_token46] = ACTIONS(190),
    [aux_sym_css_named_color_token47] = ACTIONS(190),
    [aux_sym_css_named_color_token48] = ACTIONS(190),
    [aux_sym_css_named_color_token49] = ACTIONS(190),
    [aux_sym_css_named_color_token50] = ACTIONS(190),
    [aux_sym_css_named_color_token51] = ACTIONS(190),
    [aux_sym_css_named_color_token52] = ACTIONS(192),
    [aux_sym_css_named_color_token53] = ACTIONS(190),
    [aux_sym_css_named_color_token54] = ACTIONS(190),
    [aux_sym_css_named_color_token55] = ACTIONS(192),
    [aux_sym_css_named_color_token56] = ACTIONS(190),
    [aux_sym_css_named_color_token57] = ACTIONS(190),
    [aux_sym_css_named_color_token58] = ACTIONS(190),
    [aux_sym_css_named_color_token59] = ACTIONS(190),
    [aux_sym_css_named_color_token60] = ACTIONS(190),
    [aux_sym_css_named_color_token61] = ACTIONS(190),
    [aux_sym_css_named_color_token62] = ACTIONS(190),
    [aux_sym_css_named_color_token63] = ACTIONS(190),
    [aux_sym_css_named_color_token64] = ACTIONS(192),
    [aux_sym_css_named_color_token65] = ACTIONS(190),
    [aux_sym_css_named_color_token66] = ACTIONS(190),
    [aux_sym_css_named_color_token67] = ACTIONS(190),
    [aux_sym_css_named_color_token68] = ACTIONS(190),
    [aux_sym_css_named_color_token69] = ACTIONS(190),
    [aux_sym_css_named_color_token70] = ACTIONS(190),
    [aux_sym_css_named_color_token71] = ACTIONS(190),
    [aux_sym_css_named_color_token72] = ACTIONS(190),
    [aux_sym_css_named_color_token73] = ACTIONS(190),
    [aux_sym_css_named_color_token74] = ACTIONS(190),
    [aux_sym_css_named_color_token75] = ACTIONS(190),
    [aux_sym_css_named_color_token76] = ACTIONS(190),
    [aux_sym_css_named_color_token77] = ACTIONS(190),
    [aux_sym_css_named_color_token78] = ACTIONS(190),
    [aux_sym_css_named_color_token79] = ACTIONS(190),
    [aux_sym_css_named_color_token80] = ACTIONS(190),
    [aux_sym_css_named_color_token81] = ACTIONS(190),
    [aux_sym_css_named_color_token82] = ACTIONS(190),
    [aux_sym_css_named_color_token83] = ACTIONS(192),
    [aux_sym_css_named_color_token84] = ACTIONS(190),
    [aux_sym_css_named_color_token85] = ACTIONS(190),
    [aux_sym_css_named_color_token86] = ACTIONS(190),
    [aux_sym_css_named_color_token87] = ACTIONS(190),
    [aux_sym_css_named_color_token88] = ACTIONS(190),
    [aux_sym_css_named_color_token89] = ACTIONS(190),
    [aux_sym_css_named_color_token90] = ACTIONS(190),
    [aux_sym_css_named_color_token91] = ACTIONS(190),
    [aux_sym_css_named_color_token92] = ACTIONS(190),
    [aux_sym_css_named_color_token93] = ACTIONS(190),
    [aux_sym_css_named_color_token94] = ACTIONS(190),
    [aux_sym_css_named_color_token95] = ACTIONS(190),
    [aux_sym_css_named_color_token96] = ACTIONS(190),
    [aux_sym_css_named_color_token97] = ACTIONS(190),
    [aux_sym_css_named_color_token98] = ACTIONS(190),
    [aux_sym_css_named_color_token99] = ACTIONS(190),
    [aux_sym_css_named_color_token100] = ACTIONS(190),
    [aux_sym_css_named_color_token101] = ACTIONS(190),
    [aux_sym_css_named_color_token102] = ACTIONS(190),
    [aux_sym_css_named_color_token103] = ACTIONS(190),
    [aux_sym_css_named_color_token104] = ACTIONS(192),
    [aux_sym_css_named_color_token105] = ACTIONS(190),
    [aux_sym_css_named_color_token106] = ACTIONS(192),
    [aux_sym_css_named_color_token107] = ACTIONS(190),
    [aux_sym_css_named_color_token108] = ACTIONS(190),
    [aux_sym_css_named_color_token109] = ACTIONS(190),
    [aux_sym_css_named_color_token110] = ACTIONS(190),
    [aux_sym_css_named_color_token111] = ACTIONS(190),
    [aux_sym_css_named_color_token112] = ACTIONS(190),
    [aux_sym_css_named_color_token113] = ACTIONS(190),
    [aux_sym_css_named_color_token114] = ACTIONS(190),
    [aux_sym_css_named_color_token115] = ACTIONS(190),
    [aux_sym_css_named_color_token116] = ACTIONS(190),
    [aux_sym_css_named_color_token117] = ACTIONS(190),
    [aux_sym_css_named_color_token118] = ACTIONS(190),
    [aux_sym_css_named_color_token119] = ACTIONS(190),
    [aux_sym_css_named_color_token120] = ACTIONS(190),
    [aux_sym_css_named_color_token121] = ACTIONS(190),
    [aux_sym_css_named_color_token122] = ACTIONS(190),
    [aux_sym_css_named_color_token123] = ACTIONS(190),
    [aux_sym_css_named_color_token124] = ACTIONS(190),
    [aux_sym_css_named_color_token125] = ACTIONS(190),
    [aux_sym_css_named_color_token126] = ACTIONS(190),
    [aux_sym_css_named_color_token127] = ACTIONS(190),
    [aux_sym_css_named_color_token128] = ACTIONS(190),
    [aux_sym_css_named_color_token129] = ACTIONS(190),
    [aux_sym_css_named_color_token130] = ACTIONS(190),
    [aux_sym_css_named_color_token131] = ACTIONS(190),
    [aux_sym_css_named_color_token132] = ACTIONS(190),
    [aux_sym_css_named_color_token133] = ACTIONS(190),
    [aux_sym_css_named_color_token134] = ACTIONS(190),
    [aux_sym_css_named_color_token135] = ACTIONS(190),
    [aux_sym_css_named_color_token136] = ACTIONS(190),
    [aux_sym_css_named_color_token137] = ACTIONS(190),
    [aux_sym_css_named_color_token138] = ACTIONS(190),
    [aux_sym_css_named_color_token139] = ACTIONS(190),
    [aux_sym_css_named_color_token140] = ACTIONS(190),
    [aux_sym_css_named_color_token141] = ACTIONS(190),
    [aux_sym_css_named_color_token142] = ACTIONS(190),
    [aux_sym_css_named_color_token143] = ACTIONS(190),
    [aux_sym_css_named_color_token144] = ACTIONS(190),
    [aux_sym_css_named_color_token145] = ACTIONS(192),
    [aux_sym_css_named_color_token146] = ACTIONS(190),
    [aux_sym_css_named_color_token147] = ACTIONS(192),
    [aux_sym_css_named_color_token148] = ACTIONS(190),
    [sym_css_keyword_transparent] = ACTIONS(190),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(196),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(194),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(196),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(194),
    [aux_sym_css_function_hwb_token1] = ACTIONS(194),
    [aux_sym_css_function_lab_token1] = ACTIONS(194),
    [aux_sym_css_function_oklab_token1] = ACTIONS(194),
    [aux_sym_css_function_lch_token1] = ACTIONS(194),
    [aux_sym_css_function_oklch_token1] = ACTIONS(194),
    [aux_sym_css_function_color_token1] = ACTIONS(194),
    [sym_css_hex_color_6_digits] = ACTIONS(196),
    [sym_css_hex_color_8_digits] = ACTIONS(194),
    [sym_css_hex_color_3_digits] = ACTIONS(196),
    [sym_css_hex_color_4_digits] = ACTIONS(196),
    [aux_sym_css_named_color_token1] = ACTIONS(194),
    [aux_sym_css_named_color_token2] = ACTIONS(194),
    [aux_sym_css_named_color_token3] = ACTIONS(196),
    [aux_sym_css_named_color_token4] = ACTIONS(194),
    [aux_sym_css_named_color_token5] = ACTIONS(194),
    [aux_sym_css_named_color_token6] = ACTIONS(194),
    [aux_sym_css_named_color_token7] = ACTIONS(194),
    [aux_sym_css_named_color_token8] = ACTIONS(194),
    [aux_sym_css_named_color_token9] = ACTIONS(194),
    [aux_sym_css_named_color_token10] = ACTIONS(196),
    [aux_sym_css_named_color_token11] = ACTIONS(194),
    [aux_sym_css_named_color_token12] = ACTIONS(194),
    [aux_sym_css_named_color_token13] = ACTIONS(194),
    [aux_sym_css_named_color_token14] = ACTIONS(194),
    [aux_sym_css_named_color_token15] = ACTIONS(194),
    [aux_sym_css_named_color_token16] = ACTIONS(194),
    [aux_sym_css_named_color_token17] = ACTIONS(194),
    [aux_sym_css_named_color_token18] = ACTIONS(194),
    [aux_sym_css_named_color_token19] = ACTIONS(194),
    [aux_sym_css_named_color_token20] = ACTIONS(194),
    [aux_sym_css_named_color_token21] = ACTIONS(194),
    [aux_sym_css_named_color_token22] = ACTIONS(194),
    [aux_sym_css_named_color_token23] = ACTIONS(194),
    [aux_sym_css_named_color_token24] = ACTIONS(194),
    [aux_sym_css_named_color_token25] = ACTIONS(194),
    [aux_sym_css_named_color_token26] = ACTIONS(194),
    [aux_sym_css_named_color_token27] = ACTIONS(194),
    [aux_sym_css_named_color_token28] = ACTIONS(194),
    [aux_sym_css_named_color_token29] = ACTIONS(194),
    [aux_sym_css_named_color_token30] = ACTIONS(194),
    [aux_sym_css_named_color_token31] = ACTIONS(194),
    [aux_sym_css_named_color_token32] = ACTIONS(194),
    [aux_sym_css_named_color_token33] = ACTIONS(194),
    [aux_sym_css_named_color_token34] = ACTIONS(194),
    [aux_sym_css_named_color_token35] = ACTIONS(194),
    [aux_sym_css_named_color_token36] = ACTIONS(194),
    [aux_sym_css_named_color_token37] = ACTIONS(194),
    [aux_sym_css_named_color_token38] = ACTIONS(194),
    [aux_sym_css_named_color_token39] = ACTIONS(194),
    [aux_sym_css_named_color_token40] = ACTIONS(194),
    [aux_sym_css_named_color_token41] = ACTIONS(194),
    [aux_sym_css_named_color_token42] = ACTIONS(194),
    [aux_sym_css_named_color_token43] = ACTIONS(194),
    [aux_sym_css_named_color_token44] = ACTIONS(194),
    [aux_sym_css_named_color_token45] = ACTIONS(194),
    [aux_sym_css_named_color_token46] = ACTIONS(194),
    [aux_sym_css_named_color_token47] = ACTIONS(194),
    [aux_sym_css_named_color_token48] = ACTIONS(194),
    [aux_sym_css_named_color_token49] = ACTIONS(194),
    [aux_sym_css_named_color_token50] = ACTIONS(194),
    [aux_sym_css_named_color_token51] = ACTIONS(194),
    [aux_sym_css_named_color_token52] = ACTIONS(196),
    [aux_sym_css_named_color_token53] = ACTIONS(194),
    [aux_sym_css_named_color_token54] = ACTIONS(194),
    [aux_sym_css_named_color_token55] = ACTIONS(196),
    [aux_sym_css_named_color_token56] = ACTIONS(194),
    [aux_sym_css_named_color_token57] = ACTIONS(194),
    [aux_sym_css_named_color_token58] = ACTIONS(194),
    [aux_sym_css_named_color_token59] = ACTIONS(194),
    [aux_sym_css_named_color_token60] = ACTIONS(194),
    [aux_sym_css_named_color_token61] = ACTIONS(194),
    [aux_sym_css_named_color_token62] = ACTIONS(194),
    [aux_sym_css_named_color_token63] = ACTIONS(194),
    [aux_sym_css_named_color_token64] = ACTIONS(196),
    [aux_sym_css_named_color_token65] = ACTIONS(194),
    [aux_sym_css_named_color_token66] = ACTIONS(194),
    [aux_sym_css_named_color_token67] = ACTIONS(194),
    [aux_sym_css_named_color_token68] = ACTIONS(194),
    [aux_sym_css_named_color_token69] = ACTIONS(194),
    [aux_sym_css_named_color_token70] = ACTIONS(194),
    [aux_sym_css_named_color_token71] = ACTIONS(194),
    [aux_sym_css_named_color_token72] = ACTIONS(194),
    [aux_sym_css_named_color_token73] = ACTIONS(194),
    [aux_sym_css_named_color_token74] = ACTIONS(194),
    [aux_sym_css_named_color_token75] = ACTIONS(194),
    [aux_sym_css_named_color_token76] = ACTIONS(194),
    [aux_sym_css_named_color_token77] = ACTIONS(194),
    [aux_sym_css_named_color_token78] = ACTIONS(194),
    [aux_sym_css_named_color_token79] = ACTIONS(194),
    [aux_sym_css_named_color_token80] = ACTIONS(194),
    [aux_sym_css_named_color_token81] = ACTIONS(194),
    [aux_sym_css_named_color_token82] = ACTIONS(194),
    [aux_sym_css_named_color_token83] = ACTIONS(196),
    [aux_sym_css_named_color_token84] = ACTIONS(194),
    [aux_sym_css_named_color_token85] = ACTIONS(194),
    [aux_sym_css_named_color_token86] = ACTIONS(194),
    [aux_sym_css_named_color_token87] = ACTIONS(194),
    [aux_sym_css_named_color_token88] = ACTIONS(194),
    [aux_sym_css_named_color_token89] = ACTIONS(194),
    [aux_sym_css_named_color_token90] = ACTIONS(194),
    [aux_sym_css_named_color_token91] = ACTIONS(194),
    [aux_sym_css_named_color_token92] = ACTIONS(194),
    [aux_sym_css_named_color_token93] = ACTIONS(194),
    [aux_sym_css_named_color_token94] = ACTIONS(194),
    [aux_sym_css_named_color_token95] = ACTIONS(194),
    [aux_sym_css_named_color_token96] = ACTIONS(194),
    [aux_sym_css_named_color_token97] = ACTIONS(194),
    [aux_sym_css_named_color_token98] = ACTIONS(194),
    [aux_sym_css_named_color_token99] = ACTIONS(194),
    [aux_sym_css_named_color_token100] = ACTIONS(194),
    [aux_sym_css_named_color_token101] = ACTIONS(194),
    [aux_sym_css_named_color_token102] = ACTIONS(194),
    [aux_sym_css_named_color_token103] = ACTIONS(194),
    [aux_sym_css_named_color_token104] = ACTIONS(196),
    [aux_sym_css_named_color_token105] = ACTIONS(194),
    [aux_sym_css_named_color_token106] = ACTIONS(196),
    [aux_sym_css_named_color_token107] = ACTIONS(194),
    [aux_sym_css_named_color_token108] = ACTIONS(194),
    [aux_sym_css_named_color_token109] = ACTIONS(194),
    [aux_sym_css_named_color_token110] = ACTIONS(194),
    [aux_sym_css_named_color_token111] = ACTIONS(194),
    [aux_sym_css_named_color_token112] = ACTIONS(194),
    [aux_sym_css_named_color_token113] = ACTIONS(194),
    [aux_sym_css_named_color_token114] = ACTIONS(194),
    [aux_sym_css_named_color_token115] = ACTIONS(194),
    [aux_sym_css_named_color_token116] = ACTIONS(194),
    [aux_sym_css_named_color_token117] = ACTIONS(194),
    [aux_sym_css_named_color_token118] = ACTIONS(194),
    [aux_sym_css_named_color_token119] = ACTIONS(194),
    [aux_sym_css_named_color_token120] = ACTIONS(194),
    [aux_sym_css_named_color_token121] = ACTIONS(194),
    [aux_sym_css_named_color_token122] = ACTIONS(194),
    [aux_sym_css_named_color_token123] = ACTIONS(194),
    [aux_sym_css_named_color_token124] = ACTIONS(194),
    [aux_sym_css_named_color_token125] = ACTIONS(194),
    [aux_sym_css_named_color_token126] = ACTIONS(194),
    [aux_sym_css_named_color_token127] = ACTIONS(194),
    [aux_sym_css_named_color_token128] = ACTIONS(194),
    [aux_sym_css_named_color_token129] = ACTIONS(194),
    [aux_sym_css_named_color_token130] = ACTIONS(194),
    [aux_sym_css_named_color_token131] = ACTIONS(194),
    [aux_sym_css_named_color_token132] = ACTIONS(194),
    [aux_sym_css_named_color_token133] = ACTIONS(194),
    [aux_sym_css_named_color_token134] = ACTIONS(194),
    [aux_sym_css_named_color_token135] = ACTIONS(194),
    [aux_sym_css_named_color_token136] = ACTIONS(194),
    [aux_sym_css_named_color_token137] = ACTIONS(194),
    [aux_sym_css_named_color_token138] = ACTIONS(194),
    [aux_sym_css_named_color_token139] = ACTIONS(194),
    [aux_sym_css_named_color_token140] = ACTIONS(194),
    [aux_sym_css_named_color_token141] = ACTIONS(194),
    [aux_sym_css_named_color_token142] = ACTIONS(194),
    [aux_sym_css_named_color_token143] = ACTIONS(194),
    [aux_sym_css_named_color_token144] = ACTIONS(194),
    [aux_sym_css_named_color_token145] = ACTIONS(196),
    [aux_sym_css_named_color_token146] = ACTIONS(194),
    [aux_sym_css_named_color_token147] = ACTIONS(196),
    [aux_sym_css_named_color_token148] = ACTIONS(194),
    [sym_css_keyword_transparent] = ACTIONS(194),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(200),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(198),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(200),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(198),
    [aux_sym_css_function_hwb_token1] = ACTIONS(198),
    [aux_sym_css_function_lab_token1] = ACTIONS(198),
    [aux_sym_css_function_oklab_token1] = ACTIONS(198),
    [aux_sym_css_function_lch_token1] = ACTIONS(198),
    [aux_sym_css_function_oklch_token1] = ACTIONS(198),
    [aux_sym_css_function_color_token1] = ACTIONS(198),
    [sym_css_hex_color_6_digits] = ACTIONS(200),
    [sym_css_hex_color_8_digits] = ACTIONS(198),
    [sym_css_hex_color_3_digits] = ACTIONS(200),
    [sym_css_hex_color_4_digits] = ACTIONS(200),
    [aux_sym_css_named_color_token1] = ACTIONS(198),
    [aux_sym_css_named_color_token2] = ACTIONS(198),
    [aux_sym_css_named_color_token3] = ACTIONS(200),
    [aux_sym_css_named_color_token4] = ACTIONS(198),
    [aux_sym_css_named_color_token5] = ACTIONS(198),
    [aux_sym_css_named_color_token6] = ACTIONS(198),
    [aux_sym_css_named_color_token7] = ACTIONS(198),
    [aux_sym_css_named_color_token8] = ACTIONS(198),
    [aux_sym_css_named_color_token9] = ACTIONS(198),
    [aux_sym_css_named_color_token10] = ACTIONS(200),
    [aux_sym_css_named_color_token11] = ACTIONS(198),
    [aux_sym_css_named_color_token12] = ACTIONS(198),
    [aux_sym_css_named_color_token13] = ACTIONS(198),
    [aux_sym_css_named_color_token14] = ACTIONS(198),
    [aux_sym_css_named_color_token15] = ACTIONS(198),
    [aux_sym_css_named_color_token16] = ACTIONS(198),
    [aux_sym_css_named_color_token17] = ACTIONS(198),
    [aux_sym_css_named_color_token18] = ACTIONS(198),
    [aux_sym_css_named_color_token19] = ACTIONS(198),
    [aux_sym_css_named_color_token20] = ACTIONS(198),
    [aux_sym_css_named_color_token21] = ACTIONS(198),
    [aux_sym_css_named_color_token22] = ACTIONS(198),
    [aux_sym_css_named_color_token23] = ACTIONS(198),
    [aux_sym_css_named_color_token24] = ACTIONS(198),
    [aux_sym_css_named_color_token25] = ACTIONS(198),
    [aux_sym_css_named_color_token26] = ACTIONS(198),
    [aux_sym_css_named_color_token27] = ACTIONS(198),
    [aux_sym_css_named_color_token28] = ACTIONS(198),
    [aux_sym_css_named_color_token29] = ACTIONS(198),
    [aux_sym_css_named_color_token30] = ACTIONS(198),
    [aux_sym_css_named_color_token31] = ACTIONS(198),
    [aux_sym_css_named_color_token32] = ACTIONS(198),
    [aux_sym_css_named_color_token33] = ACTIONS(198),
    [aux_sym_css_named_color_token34] = ACTIONS(198),
    [aux_sym_css_named_color_token35] = ACTIONS(198),
    [aux_sym_css_named_color_token36] = ACTIONS(198),
    [aux_sym_css_named_color_token37] = ACTIONS(198),
    [aux_sym_css_named_color_token38] = ACTIONS(198),
    [aux_sym_css_named_color_token39] = ACTIONS(198),
    [aux_sym_css_named_color_token40] = ACTIONS(198),
    [aux_sym_css_named_color_token41] = ACTIONS(198),
    [aux_sym_css_named_color_token42] = ACTIONS(198),
    [aux_sym_css_named_color_token43] = ACTIONS(198),
    [aux_sym_css_named_color_token44] = ACTIONS(198),
    [aux_sym_css_named_color_token45] = ACTIONS(198),
    [aux_sym_css_named_color_token46] = ACTIONS(198),
    [aux_sym_css_named_color_token47] = ACTIONS(198),
    [aux_sym_css_named_color_token48] = ACTIONS(198),
    [aux_sym_css_named_color_token49] = ACTIONS(198),
    [aux_sym_css_named_color_token50] = ACTIONS(198),
    [aux_sym_css_named_color_token51] = ACTIONS(198),
    [aux_sym_css_named_color_token52] = ACTIONS(200),
    [aux_sym_css_named_color_token53] = ACTIONS(198),
    [aux_sym_css_named_color_token54] = ACTIONS(198),
    [aux_sym_css_named_color_token55] = ACTIONS(200),
    [aux_sym_css_named_color_token56] = ACTIONS(198),
    [aux_sym_css_named_color_token57] = ACTIONS(198),
    [aux_sym_css_named_color_token58] = ACTIONS(198),
    [aux_sym_css_named_color_token59] = ACTIONS(198),
    [aux_sym_css_named_color_token60] = ACTIONS(198),
    [aux_sym_css_named_color_token61] = ACTIONS(198),
    [aux_sym_css_named_color_token62] = ACTIONS(198),
    [aux_sym_css_named_color_token63] = ACTIONS(198),
    [aux_sym_css_named_color_token64] = ACTIONS(200),
    [aux_sym_css_named_color_token65] = ACTIONS(198),
    [aux_sym_css_named_color_token66] = ACTIONS(198),
    [aux_sym_css_named_color_token67] = ACTIONS(198),
    [aux_sym_css_named_color_token68] = ACTIONS(198),
    [aux_sym_css_named_color_token69] = ACTIONS(198),
    [aux_sym_css_named_color_token70] = ACTIONS(198),
    [aux_sym_css_named_color_token71] = ACTIONS(198),
    [aux_sym_css_named_color_token72] = ACTIONS(198),
    [aux_sym_css_named_color_token73] = ACTIONS(198),
    [aux_sym_css_named_color_token74] = ACTIONS(198),
    [aux_sym_css_named_color_token75] = ACTIONS(198),
    [aux_sym_css_named_color_token76] = ACTIONS(198),
    [aux_sym_css_named_color_token77] = ACTIONS(198),
    [aux_sym_css_named_color_token78] = ACTIONS(198),
    [aux_sym_css_named_color_token79] = ACTIONS(198),
    [aux_sym_css_named_color_token80] = ACTIONS(198),
    [aux_sym_css_named_color_token81] = ACTIONS(198),
    [aux_sym_css_named_color_token82] = ACTIONS(198),
    [aux_sym_css_named_color_token83] = ACTIONS(200),
    [aux_sym_css_named_color_token84] = ACTIONS(198),
    [aux_sym_css_named_color_token85] = ACTIONS(198),
    [aux_sym_css_named_color_token86] = ACTIONS(198),
    [aux_sym_css_named_color_token87] = ACTIONS(198),
    [aux_sym_css_named_color_token88] = ACTIONS(198),
    [aux_sym_css_named_color_token89] = ACTIONS(198),
    [aux_sym_css_named_color_token90] = ACTIONS(198),
    [aux_sym_css_named_color_token91] = ACTIONS(198),
    [aux_sym_css_named_color_token92] = ACTIONS(198),
    [aux_sym_css_named_color_token93] = ACTIONS(198),
    [aux_sym_css_named_color_token94] = ACTIONS(198),
    [aux_sym_css_named_color_token95] = ACTIONS(198),
    [aux_sym_css_named_color_token96] = ACTIONS(198),
    [aux_sym_css_named_color_token97] = ACTIONS(198),
    [aux_sym_css_named_color_token98] = ACTIONS(198),
    [aux_sym_css_named_color_token99] = ACTIONS(198),
    [aux_sym_css_named_color_token100] = ACTIONS(198),
    [aux_sym_css_named_color_token101] = ACTIONS(198),
    [aux_sym_css_named_color_token102] = ACTIONS(198),
    [aux_sym_css_named_color_token103] = ACTIONS(198),
    [aux_sym_css_named_color_token104] = ACTIONS(200),
    [aux_sym_css_named_color_token105] = ACTIONS(198),
    [aux_sym_css_named_color_token106] = ACTIONS(200),
    [aux_sym_css_named_color_token107] = ACTIONS(198),
    [aux_sym_css_named_color_token108] = ACTIONS(198),
    [aux_sym_css_named_color_token109] = ACTIONS(198),
    [aux_sym_css_named_color_token110] = ACTIONS(198),
    [aux_sym_css_named_color_token111] = ACTIONS(198),
    [aux_sym_css_named_color_token112] = ACTIONS(198),
    [aux_sym_css_named_color_token113] = ACTIONS(198),
    [aux_sym_css_named_color_token114] = ACTIONS(198),
    [aux_sym_css_named_color_token115] = ACTIONS(198),
    [aux_sym_css_named_color_token116] = ACTIONS(198),
    [aux_sym_css_named_color_token117] = ACTIONS(198),
    [aux_sym_css_named_color_token118] = ACTIONS(198),
    [aux_sym_css_named_color_token119] = ACTIONS(198),
    [aux_sym_css_named_color_token120] = ACTIONS(198),
    [aux_sym_css_named_color_token121] = ACTIONS(198),
    [aux_sym_css_named_color_token122] = ACTIONS(198),
    [aux_sym_css_named_color_token123] = ACTIONS(198),
    [aux_sym_css_named_color_token124] = ACTIONS(198),
    [aux_sym_css_named_color_token125] = ACTIONS(198),
    [aux_sym_css_named_color_token126] = ACTIONS(198),
    [aux_sym_css_named_color_token127] = ACTIONS(198),
    [aux_sym_css_named_color_token128] = ACTIONS(198),
    [aux_sym_css_named_color_token129] = ACTIONS(198),
    [aux_sym_css_named_color_token130] = ACTIONS(198),
    [aux_sym_css_named_color_token131] = ACTIONS(198),
    [aux_sym_css_named_color_token132] = ACTIONS(198),
    [aux_sym_css_named_color_token133] = ACTIONS(198),
    [aux_sym_css_named_color_token134] = ACTIONS(198),
    [aux_sym_css_named_color_token135] = ACTIONS(198),
    [aux_sym_css_named_color_token136] = ACTIONS(198),
    [aux_sym_css_named_color_token137] = ACTIONS(198),
    [aux_sym_css_named_color_token138] = ACTIONS(198),
    [aux_sym_css_named_color_token139] = ACTIONS(198),
    [aux_sym_css_named_color_token140] = ACTIONS(198),
    [aux_sym_css_named_color_token141] = ACTIONS(198),
    [aux_sym_css_named_color_token142] = ACTIONS(198),
    [aux_sym_css_named_color_token143] = ACTIONS(198),
    [aux_sym_css_named_color_token144] = ACTIONS(198),
    [aux_sym_css_named_color_token145] = ACTIONS(200),
    [aux_sym_css_named_color_token146] = ACTIONS(198),
    [aux_sym_css_named_color_token147] = ACTIONS(200),
    [aux_sym_css_named_color_token148] = ACTIONS(198),
    [sym_css_keyword_transparent] = ACTIONS(198),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(202),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(204),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(202),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(204),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(202),
    [aux_sym_css_function_hwb_token1] = ACTIONS(202),
    [aux_sym_css_function_lab_token1] = ACTIONS(202),
    [aux_sym_css_function_oklab_token1] = ACTIONS(202),
    [aux_sym_css_function_lch_token1] = ACTIONS(202),
    [aux_sym_css_function_oklch_token1] = ACTIONS(202),
    [aux_sym_css_function_color_token1] = ACTIONS(202),
    [sym_css_hex_color_6_digits] = ACTIONS(204),
    [sym_css_hex_color_8_digits] = ACTIONS(202),
    [sym_css_hex_color_3_digits] = ACTIONS(204),
    [sym_css_hex_color_4_digits] = ACTIONS(204),
    [aux_sym_css_named_color_token1] = ACTIONS(202),
    [aux_sym_css_named_color_token2] = ACTIONS(202),
    [aux_sym_css_named_color_token3] = ACTIONS(204),
    [aux_sym_css_named_color_token4] = ACTIONS(202),
    [aux_sym_css_named_color_token5] = ACTIONS(202),
    [aux_sym_css_named_color_token6] = ACTIONS(202),
    [aux_sym_css_named_color_token7] = ACTIONS(202),
    [aux_sym_css_named_color_token8] = ACTIONS(202),
    [aux_sym_css_named_color_token9] = ACTIONS(202),
    [aux_sym_css_named_color_token10] = ACTIONS(204),
    [aux_sym_css_named_color_token11] = ACTIONS(202),
    [aux_sym_css_named_color_token12] = ACTIONS(202),
    [aux_sym_css_named_color_token13] = ACTIONS(202),
    [aux_sym_css_named_color_token14] = ACTIONS(202),
    [aux_sym_css_named_color_token15] = ACTIONS(202),
    [aux_sym_css_named_color_token16] = ACTIONS(202),
    [aux_sym_css_named_color_token17] = ACTIONS(202),
    [aux_sym_css_named_color_token18] = ACTIONS(202),
    [aux_sym_css_named_color_token19] = ACTIONS(202),
    [aux_sym_css_named_color_token20] = ACTIONS(202),
    [aux_sym_css_named_color_token21] = ACTIONS(202),
    [aux_sym_css_named_color_token22] = ACTIONS(202),
    [aux_sym_css_named_color_token23] = ACTIONS(202),
    [aux_sym_css_named_color_token24] = ACTIONS(202),
    [aux_sym_css_named_color_token25] = ACTIONS(202),
    [aux_sym_css_named_color_token26] = ACTIONS(202),
    [aux_sym_css_named_color_token27] = ACTIONS(202),
    [aux_sym_css_named_color_token28] = ACTIONS(202),
    [aux_sym_css_named_color_token29] = ACTIONS(202),
    [aux_sym_css_named_color_token30] = ACTIONS(202),
    [aux_sym_css_named_color_token31] = ACTIONS(202),
    [aux_sym_css_named_color_token32] = ACTIONS(202),
    [aux_sym_css_named_color_token33] = ACTIONS(202),
    [aux_sym_css_named_color_token34] = ACTIONS(202),
    [aux_sym_css_named_color_token35] = ACTIONS(202),
    [aux_sym_css_named_color_token36] = ACTIONS(202),
    [aux_sym_css_named_color_token37] = ACTIONS(202),
    [aux_sym_css_named_color_token38] = ACTIONS(202),
    [aux_sym_css_named_color_token39] = ACTIONS(202),
    [aux_sym_css_named_color_token40] = ACTIONS(202),
    [aux_sym_css_named_color_token41] = ACTIONS(202),
    [aux_sym_css_named_color_token42] = ACTIONS(202),
    [aux_sym_css_named_color_token43] = ACTIONS(202),
    [aux_sym_css_named_color_token44] = ACTIONS(202),
    [aux_sym_css_named_color_token45] = ACTIONS(202),
    [aux_sym_css_named_color_token46] = ACTIONS(202),
    [aux_sym_css_named_color_token47] = ACTIONS(202),
    [aux_sym_css_named_color_token48] = ACTIONS(202),
    [aux_sym_css_named_color_token49] = ACTIONS(202),
    [aux_sym_css_named_color_token50] = ACTIONS(202),
    [aux_sym_css_named_color_token51] = ACTIONS(202),
    [aux_sym_css_named_color_token52] = ACTIONS(204),
    [aux_sym_css_named_color_token53] = ACTIONS(202),
    [aux_sym_css_named_color_token54] = ACTIONS(202),
    [aux_sym_css_named_color_token55] = ACTIONS(204),
    [aux_sym_css_named_color_token56] = ACTIONS(202),
    [aux_sym_css_named_color_token57] = ACTIONS(202),
    [aux_sym_css_named_color_token58] = ACTIONS(202),
    [aux_sym_css_named_color_token59] = ACTIONS(202),
    [aux_sym_css_named_color_token60] = ACTIONS(202),
    [aux_sym_css_named_color_token61] = ACTIONS(202),
    [aux_sym_css_named_color_token62] = ACTIONS(202),
    [aux_sym_css_named_color_token63] = ACTIONS(202),
    [aux_sym_css_named_color_token64] = ACTIONS(204),
    [aux_sym_css_named_color_token65] = ACTIONS(202),
    [aux_sym_css_named_color_token66] = ACTIONS(202),
    [aux_sym_css_named_color_token67] = ACTIONS(202),
    [aux_sym_css_named_color_token68] = ACTIONS(202),
    [aux_sym_css_named_color_token69] = ACTIONS(202),
    [aux_sym_css_named_color_token70] = ACTIONS(202),
    [aux_sym_css_named_color_token71] = ACTIONS(202),
    [aux_sym_css_named_color_token72] = ACTIONS(202),
    [aux_sym_css_named_color_token73] = ACTIONS(202),
    [aux_sym_css_named_color_token74] = ACTIONS(202),
    [aux_sym_css_named_color_token75] = ACTIONS(202),
    [aux_sym_css_named_color_token76] = ACTIONS(202),
    [aux_sym_css_named_color_token77] = ACTIONS(202),
    [aux_sym_css_named_color_token78] = ACTIONS(202),
    [aux_sym_css_named_color_token79] = ACTIONS(202),
    [aux_sym_css_named_color_token80] = ACTIONS(202),
    [aux_sym_css_named_color_token81] = ACTIONS(202),
    [aux_sym_css_named_color_token82] = ACTIONS(202),
    [aux_sym_css_named_color_token83] = ACTIONS(204),
    [aux_sym_css_named_color_token84] = ACTIONS(202),
    [aux_sym_css_named_color_token85] = ACTIONS(202),
    [aux_sym_css_named_color_token86] = ACTIONS(202),
    [aux_sym_css_named_color_token87] = ACTIONS(202),
    [aux_sym_css_named_color_token88] = ACTIONS(202),
    [aux_sym_css_named_color_token89] = ACTIONS(202),
    [aux_sym_css_named_color_token90] = ACTIONS(202),
    [aux_sym_css_named_color_token91] = ACTIONS(202),
    [aux_sym_css_named_color_token92] = ACTIONS(202),
    [aux_sym_css_named_color_token93] = ACTIONS(202),
    [aux_sym_css_named_color_token94] = ACTIONS(202),
    [aux_sym_css_named_color_token95] = ACTIONS(202),
    [aux_sym_css_named_color_token96] = ACTIONS(202),
    [aux_sym_css_named_color_token97] = ACTIONS(202),
    [aux_sym_css_named_color_token98] = ACTIONS(202),
    [aux_sym_css_named_color_token99] = ACTIONS(202),
    [aux_sym_css_named_color_token100] = ACTIONS(202),
    [aux_sym_css_named_color_token101] = ACTIONS(202),
    [aux_sym_css_named_color_token102] = ACTIONS(202),
    [aux_sym_css_named_color_token103] = ACTIONS(202),
    [aux_sym_css_named_color_token104] = ACTIONS(204),
    [aux_sym_css_named_color_token105] = ACTIONS(202),
    [aux_sym_css_named_color_token106] = ACTIONS(204),
    [aux_sym_css_named_color_token107] = ACTIONS(202),
    [aux_sym_css_named_color_token108] = ACTIONS(202),
    [aux_sym_css_named_color_token109] = ACTIONS(202),
    [aux_sym_css_named_color_token110] = ACTIONS(202),
    [aux_sym_css_named_color_token111] = ACTIONS(202),
    [aux_sym_css_named_color_token112] = ACTIONS(202),
    [aux_sym_css_named_color_token113] = ACTIONS(202),
    [aux_sym_css_named_color_token114] = ACTIONS(202),
    [aux_sym_css_named_color_token115] = ACTIONS(202),
    [aux_sym_css_named_color_token116] = ACTIONS(202),
    [aux_sym_css_named_color_token117] = ACTIONS(202),
    [aux_sym_css_named_color_token118] = ACTIONS(202),
    [aux_sym_css_named_color_token119] = ACTIONS(202),
    [aux_sym_css_named_color_token120] = ACTIONS(202),
    [aux_sym_css_named_color_token121] = ACTIONS(202),
    [aux_sym_css_named_color_token122] = ACTIONS(202),
    [aux_sym_css_named_color_token123] = ACTIONS(202),
    [aux_sym_css_named_color_token124] = ACTIONS(202),
    [aux_sym_css_named_color_token125] = ACTIONS(202),
    [aux_sym_css_named_color_token126] = ACTIONS(202),
    [aux_sym_css_named_color_token127] = ACTIONS(202),
    [aux_sym_css_named_color_token128] = ACTIONS(202),
    [aux_sym_css_named_color_token129] = ACTIONS(202),
    [aux_sym_css_named_color_token130] = ACTIONS(202),
    [aux_sym_css_named_color_token131] = ACTIONS(202),
    [aux_sym_css_named_color_token132] = ACTIONS(202),
    [aux_sym_css_named_color_token133] = ACTIONS(202),
    [aux_sym_css_named_color_token134] = ACTIONS(202),
    [aux_sym_css_named_color_token135] = ACTIONS(202),
    [aux_sym_css_named_color_token136] = ACTIONS(202),
    [aux_sym_css_named_color_token137] = ACTIONS(202),
    [aux_sym_css_named_color_token138] = ACTIONS(202),
    [aux_sym_css_named_color_token139] = ACTIONS(202),
    [aux_sym_css_named_color_token140] = ACTIONS(202),
    [aux_sym_css_named_color_token141] = ACTIONS(202),
    [aux_sym_css_named_color_token142] = ACTIONS(202),
    [aux_sym_css_named_color_token143] = ACTIONS(202),
    [aux_sym_css_named_color_token144] = ACTIONS(202),
    [aux_sym_css_named_color_token145] = ACTIONS(204),
    [aux_sym_css_named_color_token146] = ACTIONS(202),
    [aux_sym_css_named_color_token147] = ACTIONS(204),
    [aux_sym_css_named_color_token148] = ACTIONS(202),
    [sym_css_keyword_transparent] = ACTIONS(202),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(208),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(206),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(208),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(206),
    [aux_sym_css_function_hwb_token1] = ACTIONS(206),
    [aux_sym_css_function_lab_token1] = ACTIONS(206),
    [aux_sym_css_function_oklab_token1] = ACTIONS(206),
    [aux_sym_css_function_lch_token1] = ACTIONS(206),
    [aux_sym_css_function_oklch_token1] = ACTIONS(206),
    [aux_sym_css_function_color_token1] = ACTIONS(206),
    [sym_css_hex_color_6_digits] = ACTIONS(208),
    [sym_css_hex_color_8_digits] = ACTIONS(206),
    [sym_css_hex_color_3_digits] = ACTIONS(208),
    [sym_css_hex_color_4_digits] = ACTIONS(208),
    [aux_sym_css_named_color_token1] = ACTIONS(206),
    [aux_sym_css_named_color_token2] = ACTIONS(206),
    [aux_sym_css_named_color_token3] = ACTIONS(208),
    [aux_sym_css_named_color_token4] = ACTIONS(206),
    [aux_sym_css_named_color_token5] = ACTIONS(206),
    [aux_sym_css_named_color_token6] = ACTIONS(206),
    [aux_sym_css_named_color_token7] = ACTIONS(206),
    [aux_sym_css_named_color_token8] = ACTIONS(206),
    [aux_sym_css_named_color_token9] = ACTIONS(206),
    [aux_sym_css_named_color_token10] = ACTIONS(208),
    [aux_sym_css_named_color_token11] = ACTIONS(206),
    [aux_sym_css_named_color_token12] = ACTIONS(206),
    [aux_sym_css_named_color_token13] = ACTIONS(206),
    [aux_sym_css_named_color_token14] = ACTIONS(206),
    [aux_sym_css_named_color_token15] = ACTIONS(206),
    [aux_sym_css_named_color_token16] = ACTIONS(206),
    [aux_sym_css_named_color_token17] = ACTIONS(206),
    [aux_sym_css_named_color_token18] = ACTIONS(206),
    [aux_sym_css_named_color_token19] = ACTIONS(206),
    [aux_sym_css_named_color_token20] = ACTIONS(206),
    [aux_sym_css_named_color_token21] = ACTIONS(206),
    [aux_sym_css_named_color_token22] = ACTIONS(206),
    [aux_sym_css_named_color_token23] = ACTIONS(206),
    [aux_sym_css_named_color_token24] = ACTIONS(206),
    [aux_sym_css_named_color_token25] = ACTIONS(206),
    [aux_sym_css_named_color_token26] = ACTIONS(206),
    [aux_sym_css_named_color_token27] = ACTIONS(206),
    [aux_sym_css_named_color_token28] = ACTIONS(206),
    [aux_sym_css_named_color_token29] = ACTIONS(206),
    [aux_sym_css_named_color_token30] = ACTIONS(206),
    [aux_sym_css_named_color_token31] = ACTIONS(206),
    [aux_sym_css_named_color_token32] = ACTIONS(206),
    [aux_sym_css_named_color_token33] = ACTIONS(206),
    [aux_sym_css_named_color_token34] = ACTIONS(206),
    [aux_sym_css_named_color_token35] = ACTIONS(206),
    [aux_sym_css_named_color_token36] = ACTIONS(206),
    [aux_sym_css_named_color_token37] = ACTIONS(206),
    [aux_sym_css_named_color_token38] = ACTIONS(206),
    [aux_sym_css_named_color_token39] = ACTIONS(206),
    [aux_sym_css_named_color_token40] = ACTIONS(206),
    [aux_sym_css_named_color_token41] = ACTIONS(206),
    [aux_sym_css_named_color_token42] = ACTIONS(206),
    [aux_sym_css_named_color_token43] = ACTIONS(206),
    [aux_sym_css_named_color_token44] = ACTIONS(206),
    [aux_sym_css_named_color_token45] = ACTIONS(206),
    [aux_sym_css_named_color_token46] = ACTIONS(206),
    [aux_sym_css_named_color_token47] = ACTIONS(206),
    [aux_sym_css_named_color_token48] = ACTIONS(206),
    [aux_sym_css_named_color_token49] = ACTIONS(206),
    [aux_sym_css_named_color_token50] = ACTIONS(206),
    [aux_sym_css_named_color_token51] = ACTIONS(206),
    [aux_sym_css_named_color_token52] = ACTIONS(208),
    [aux_sym_css_named_color_token53] = ACTIONS(206),
    [aux_sym_css_named_color_token54] = ACTIONS(206),
    [aux_sym_css_named_color_token55] = ACTIONS(208),
    [aux_sym_css_named_color_token56] = ACTIONS(206),
    [aux_sym_css_named_color_token57] = ACTIONS(206),
    [aux_sym_css_named_color_token58] = ACTIONS(206),
    [aux_sym_css_named_color_token59] = ACTIONS(206),
    [aux_sym_css_named_color_token60] = ACTIONS(206),
    [aux_sym_css_named_color_token61] = ACTIONS(206),
    [aux_sym_css_named_color_token62] = ACTIONS(206),
    [aux_sym_css_named_color_token63] = ACTIONS(206),
    [aux_sym_css_named_color_token64] = ACTIONS(208),
    [aux_sym_css_named_color_token65] = ACTIONS(206),
    [aux_sym_css_named_color_token66] = ACTIONS(206),
    [aux_sym_css_named_color_token67] = ACTIONS(206),
    [aux_sym_css_named_color_token68] = ACTIONS(206),
    [aux_sym_css_named_color_token69] = ACTIONS(206),
    [aux_sym_css_named_color_token70] = ACTIONS(206),
    [aux_sym_css_named_color_token71] = ACTIONS(206),
    [aux_sym_css_named_color_token72] = ACTIONS(206),
    [aux_sym_css_named_color_token73] = ACTIONS(206),
    [aux_sym_css_named_color_token74] = ACTIONS(206),
    [aux_sym_css_named_color_token75] = ACTIONS(206),
    [aux_sym_css_named_color_token76] = ACTIONS(206),
    [aux_sym_css_named_color_token77] = ACTIONS(206),
    [aux_sym_css_named_color_token78] = ACTIONS(206),
    [aux_sym_css_named_color_token79] = ACTIONS(206),
    [aux_sym_css_named_color_token80] = ACTIONS(206),
    [aux_sym_css_named_color_token81] = ACTIONS(206),
    [aux_sym_css_named_color_token82] = ACTIONS(206),
    [aux_sym_css_named_color_token83] = ACTIONS(208),
    [aux_sym_css_named_color_token84] = ACTIONS(206),
    [aux_sym_css_named_color_token85] = ACTIONS(206),
    [aux_sym_css_named_color_token86] = ACTIONS(206),
    [aux_sym_css_named_color_token87] = ACTIONS(206),
    [aux_sym_css_named_color_token88] = ACTIONS(206),
    [aux_sym_css_named_color_token89] = ACTIONS(206),
    [aux_sym_css_named_color_token90] = ACTIONS(206),
    [aux_sym_css_named_color_token91] = ACTIONS(206),
    [aux_sym_css_named_color_token92] = ACTIONS(206),
    [aux_sym_css_named_color_token93] = ACTIONS(206),
    [aux_sym_css_named_color_token94] = ACTIONS(206),
    [aux_sym_css_named_color_token95] = ACTIONS(206),
    [aux_sym_css_named_color_token96] = ACTIONS(206),
    [aux_sym_css_named_color_token97] = ACTIONS(206),
    [aux_sym_css_named_color_token98] = ACTIONS(206),
    [aux_sym_css_named_color_token99] = ACTIONS(206),
    [aux_sym_css_named_color_token100] = ACTIONS(206),
    [aux_sym_css_named_color_token101] = ACTIONS(206),
    [aux_sym_css_named_color_token102] = ACTIONS(206),
    [aux_sym_css_named_color_token103] = ACTIONS(206),
    [aux_sym_css_named_color_token104] = ACTIONS(208),
    [aux_sym_css_named_color_token105] = ACTIONS(206),
    [aux_sym_css_named_color_token106] = ACTIONS(208),
    [aux_sym_css_named_color_token107] = ACTIONS(206),
    [aux_sym_css_named_color_token108] = ACTIONS(206),
    [aux_sym_css_named_color_token109] = ACTIONS(206),
    [aux_sym_css_named_color_token110] = ACTIONS(206),
    [aux_sym_css_named_color_token111] = ACTIONS(206),
    [aux_sym_css_named_color_token112] = ACTIONS(206),
    [aux_sym_css_named_color_token113] = ACTIONS(206),
    [aux_sym_css_named_color_token114] = ACTIONS(206),
    [aux_sym_css_named_color_token115] = ACTIONS(206),
    [aux_sym_css_named_color_token116] = ACTIONS(206),
    [aux_sym_css_named_color_token117] = ACTIONS(206),
    [aux_sym_css_named_color_token118] = ACTIONS(206),
    [aux_sym_css_named_color_token119] = ACTIONS(206),
    [aux_sym_css_named_color_token120] = ACTIONS(206),
    [aux_sym_css_named_color_token121] = ACTIONS(206),
    [aux_sym_css_named_color_token122] = ACTIONS(206),
    [aux_sym_css_named_color_token123] = ACTIONS(206),
    [aux_sym_css_named_color_token124] = ACTIONS(206),
    [aux_sym_css_named_color_token125] = ACTIONS(206),
    [aux_sym_css_named_color_token126] = ACTIONS(206),
    [aux_sym_css_named_color_token127] = ACTIONS(206),
    [aux_sym_css_named_color_token128] = ACTIONS(206),
    [aux_sym_css_named_color_token129] = ACTIONS(206),
    [aux_sym_css_named_color_token130] = ACTIONS(206),
    [aux_sym_css_named_color_token131] = ACTIONS(206),
    [aux_sym_css_named_color_token132] = ACTIONS(206),
    [aux_sym_css_named_color_token133] = ACTIONS(206),
    [aux_sym_css_named_color_token134] = ACTIONS(206),
    [aux_sym_css_named_color_token135] = ACTIONS(206),
    [aux_sym_css_named_color_token136] = ACTIONS(206),
    [aux_sym_css_named_color_token137] = ACTIONS(206),
    [aux_sym_css_named_color_token138] = ACTIONS(206),
    [aux_sym_css_named_color_token139] = ACTIONS(206),
    [aux_sym_css_named_color_token140] = ACTIONS(206),
    [aux_sym_css_named_color_token141] = ACTIONS(206),
    [aux_sym_css_named_color_token142] = ACTIONS(206),
    [aux_sym_css_named_color_token143] = ACTIONS(206),
    [aux_sym_css_named_color_token144] = ACTIONS(206),
    [aux_sym_css_named_color_token145] = ACTIONS(208),
    [aux_sym_css_named_color_token146] = ACTIONS(206),
    [aux_sym_css_named_color_token147] = ACTIONS(208),
    [aux_sym_css_named_color_token148] = ACTIONS(206),
    [sym_css_keyword_transparent] = ACTIONS(206),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(212),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(210),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(212),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(210),
    [aux_sym_css_function_hwb_token1] = ACTIONS(210),
    [aux_sym_css_function_lab_token1] = ACTIONS(210),
    [aux_sym_css_function_oklab_token1] = ACTIONS(210),
    [aux_sym_css_function_lch_token1] = ACTIONS(210),
    [aux_sym_css_function_oklch_token1] = ACTIONS(210),
    [aux_sym_css_function_color_token1] = ACTIONS(210),
    [sym_css_hex_color_6_digits] = ACTIONS(212),
    [sym_css_hex_color_8_digits] = ACTIONS(210),
    [sym_css_hex_color_3_digits] = ACTIONS(212),
    [sym_css_hex_color_4_digits] = ACTIONS(212),
    [aux_sym_css_named_color_token1] = ACTIONS(210),
    [aux_sym_css_named_color_token2] = ACTIONS(210),
    [aux_sym_css_named_color_token3] = ACTIONS(212),
    [aux_sym_css_named_color_token4] = ACTIONS(210),
    [aux_sym_css_named_color_token5] = ACTIONS(210),
    [aux_sym_css_named_color_token6] = ACTIONS(210),
    [aux_sym_css_named_color_token7] = ACTIONS(210),
    [aux_sym_css_named_color_token8] = ACTIONS(210),
    [aux_sym_css_named_color_token9] = ACTIONS(210),
    [aux_sym_css_named_color_token10] = ACTIONS(212),
    [aux_sym_css_named_color_token11] = ACTIONS(210),
    [aux_sym_css_named_color_token12] = ACTIONS(210),
    [aux_sym_css_named_color_token13] = ACTIONS(210),
    [aux_sym_css_named_color_token14] = ACTIONS(210),
    [aux_sym_css_named_color_token15] = ACTIONS(210),
    [aux_sym_css_named_color_token16] = ACTIONS(210),
    [aux_sym_css_named_color_token17] = ACTIONS(210),
    [aux_sym_css_named_color_token18] = ACTIONS(210),
    [aux_sym_css_named_color_token19] = ACTIONS(210),
    [aux_sym_css_named_color_token20] = ACTIONS(210),
    [aux_sym_css_named_color_token21] = ACTIONS(210),
    [aux_sym_css_named_color_token22] = ACTIONS(210),
    [aux_sym_css_named_color_token23] = ACTIONS(210),
    [aux_sym_css_named_color_token24] = ACTIONS(210),
    [aux_sym_css_named_color_token25] = ACTIONS(210),
    [aux_sym_css_named_color_token26] = ACTIONS(210),
    [aux_sym_css_named_color_token27] = ACTIONS(210),
    [aux_sym_css_named_color_token28] = ACTIONS(210),
    [aux_sym_css_named_color_token29] = ACTIONS(210),
    [aux_sym_css_named_color_token30] = ACTIONS(210),
    [aux_sym_css_named_color_token31] = ACTIONS(210),
    [aux_sym_css_named_color_token32] = ACTIONS(210),
    [aux_sym_css_named_color_token33] = ACTIONS(210),
    [aux_sym_css_named_color_token34] = ACTIONS(210),
    [aux_sym_css_named_color_token35] = ACTIONS(210),
    [aux_sym_css_named_color_token36] = ACTIONS(210),
    [aux_sym_css_named_color_token37] = ACTIONS(210),
    [aux_sym_css_named_color_token38] = ACTIONS(210),
    [aux_sym_css_named_color_token39] = ACTIONS(210),
    [aux_sym_css_named_color_token40] = ACTIONS(210),
    [aux_sym_css_named_color_token41] = ACTIONS(210),
    [aux_sym_css_named_color_token42] = ACTIONS(210),
    [aux_sym_css_named_color_token43] = ACTIONS(210),
    [aux_sym_css_named_color_token44] = ACTIONS(210),
    [aux_sym_css_named_color_token45] = ACTIONS(210),
    [aux_sym_css_named_color_token46] = ACTIONS(210),
    [aux_sym_css_named_color_token47] = ACTIONS(210),
    [aux_sym_css_named_color_token48] = ACTIONS(210),
    [aux_sym_css_named_color_token49] = ACTIONS(210),
    [aux_sym_css_named_color_token50] = ACTIONS(210),
    [aux_sym_css_named_color_token51] = ACTIONS(210),
    [aux_sym_css_named_color_token52] = ACTIONS(212),
    [aux_sym_css_named_color_token53] = ACTIONS(210),
    [aux_sym_css_named_color_token54] = ACTIONS(210),
    [aux_sym_css_named_color_token55] = ACTIONS(212),
    [aux_sym_css_named_color_token56] = ACTIONS(210),
    [aux_sym_css_named_color_token57] = ACTIONS(210),
    [aux_sym_css_named_color_token58] = ACTIONS(210),
    [aux_sym_css_named_color_token59] = ACTIONS(210),
    [aux_sym_css_named_color_token60] = ACTIONS(210),
    [aux_sym_css_named_color_token61] = ACTIONS(210),
    [aux_sym_css_named_color_token62] = ACTIONS(210),
    [aux_sym_css_named_color_token63] = ACTIONS(210),
    [aux_sym_css_named_color_token64] = ACTIONS(212),
    [aux_sym_css_named_color_token65] = ACTIONS(210),
    [aux_sym_css_named_color_token66] = ACTIONS(210),
    [aux_sym_css_named_color_token67] = ACTIONS(210),
    [aux_sym_css_named_color_token68] = ACTIONS(210),
    [aux_sym_css_named_color_token69] = ACTIONS(210),
    [aux_sym_css_named_color_token70] = ACTIONS(210),
    [aux_sym_css_named_color_token71] = ACTIONS(210),
    [aux_sym_css_named_color_token72] = ACTIONS(210),
    [aux_sym_css_named_color_token73] = ACTIONS(210),
    [aux_sym_css_named_color_token74] = ACTIONS(210),
    [aux_sym_css_named_color_token75] = ACTIONS(210),
    [aux_sym_css_named_color_token76] = ACTIONS(210),
    [aux_sym_css_named_color_token77] = ACTIONS(210),
    [aux_sym_css_named_color_token78] = ACTIONS(210),
    [aux_sym_css_named_color_token79] = ACTIONS(210),
    [aux_sym_css_named_color_token80] = ACTIONS(210),
    [aux_sym_css_named_color_token81] = ACTIONS(210),
    [aux_sym_css_named_color_token82] = ACTIONS(210),
    [aux_sym_css_named_color_token83] = ACTIONS(212),
    [aux_sym_css_named_color_token84] = ACTIONS(210),
    [aux_sym_css_named_color_token85] = ACTIONS(210),
    [aux_sym_css_named_color_token86] = ACTIONS(210),
    [aux_sym_css_named_color_token87] = ACTIONS(210),
    [aux_sym_css_named_color_token88] = ACTIONS(210),
    [aux_sym_css_named_color_token89] = ACTIONS(210),
    [aux_sym_css_named_color_token90] = ACTIONS(210),
    [aux_sym_css_named_color_token91] = ACTIONS(210),
    [aux_sym_css_named_color_token92] = ACTIONS(210),
    [aux_sym_css_named_color_token93] = ACTIONS(210),
    [aux_sym_css_named_color_token94] = ACTIONS(210),
    [aux_sym_css_named_color_token95] = ACTIONS(210),
    [aux_sym_css_named_color_token96] = ACTIONS(210),
    [aux_sym_css_named_color_token97] = ACTIONS(210),
    [aux_sym_css_named_color_token98] = ACTIONS(210),
    [aux_sym_css_named_color_token99] = ACTIONS(210),
    [aux_sym_css_named_color_token100] = ACTIONS(210),
    [aux_sym_css_named_color_token101] = ACTIONS(210),
    [aux_sym_css_named_color_token102] = ACTIONS(210),
    [aux_sym_css_named_color_token103] = ACTIONS(210),
    [aux_sym_css_named_color_token104] = ACTIONS(212),
    [aux_sym_css_named_color_token105] = ACTIONS(210),
    [aux_sym_css_named_color_token106] = ACTIONS(212),
    [aux_sym_css_named_color_token107] = ACTIONS(210),
    [aux_sym_css_named_color_token108] = ACTIONS(210),
    [aux_sym_css_named_color_token109] = ACTIONS(210),
    [aux_sym_css_named_color_token110] = ACTIONS(210),
    [aux_sym_css_named_color_token111] = ACTIONS(210),
    [aux_sym_css_named_color_token112] = ACTIONS(210),
    [aux_sym_css_named_color_token113] = ACTIONS(210),
    [aux_sym_css_named_color_token114] = ACTIONS(210),
    [aux_sym_css_named_color_token115] = ACTIONS(210),
    [aux_sym_css_named_color_token116] = ACTIONS(210),
    [aux_sym_css_named_color_token117] = ACTIONS(210),
    [aux_sym_css_named_color_token118] = ACTIONS(210),
    [aux_sym_css_named_color_token119] = ACTIONS(210),
    [aux_sym_css_named_color_token120] = ACTIONS(210),
    [aux_sym_css_named_color_token121] = ACTIONS(210),
    [aux_sym_css_named_color_token122] = ACTIONS(210),
    [aux_sym_css_named_color_token123] = ACTIONS(210),
    [aux_sym_css_named_color_token124] = ACTIONS(210),
    [aux_sym_css_named_color_token125] = ACTIONS(210),
    [aux_sym_css_named_color_token126] = ACTIONS(210),
    [aux_sym_css_named_color_token127] = ACTIONS(210),
    [aux_sym_css_named_color_token128] = ACTIONS(210),
    [aux_sym_css_named_color_token129] = ACTIONS(210),
    [aux_sym_css_named_color_token130] = ACTIONS(210),
    [aux_sym_css_named_color_token131] = ACTIONS(210),
    [aux_sym_css_named_color_token132] = ACTIONS(210),
    [aux_sym_css_named_color_token133] = ACTIONS(210),
    [aux_sym_css_named_color_token134] = ACTIONS(210),
    [aux_sym_css_named_color_token135] = ACTIONS(210),
    [aux_sym_css_named_color_token136] = ACTIONS(210),
    [aux_sym_css_named_color_token137] = ACTIONS(210),
    [aux_sym_css_named_color_token138] = ACTIONS(210),
    [aux_sym_css_named_color_token139] = ACTIONS(210),
    [aux_sym_css_named_color_token140] = ACTIONS(210),
    [aux_sym_css_named_color_token141] = ACTIONS(210),
    [aux_sym_css_named_color_token142] = ACTIONS(210),
    [aux_sym_css_named_color_token143] = ACTIONS(210),
    [aux_sym_css_named_color_token144] = ACTIONS(210),
    [aux_sym_css_named_color_token145] = ACTIONS(212),
    [aux_sym_css_named_color_token146] = ACTIONS(210),
    [aux_sym_css_named_color_token147] = ACTIONS(212),
    [aux_sym_css_named_color_token148] = ACTIONS(210),
    [sym_css_keyword_transparent] = ACTIONS(210),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(214),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(216),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(214),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(216),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(214),
    [aux_sym_css_function_hwb_token1] = ACTIONS(214),
    [aux_sym_css_function_lab_token1] = ACTIONS(214),
    [aux_sym_css_function_oklab_token1] = ACTIONS(214),
    [aux_sym_css_function_lch_token1] = ACTIONS(214),
    [aux_sym_css_function_oklch_token1] = ACTIONS(214),
    [aux_sym_css_function_color_token1] = ACTIONS(214),
    [sym_css_hex_color_6_digits] = ACTIONS(216),
    [sym_css_hex_color_8_digits] = ACTIONS(214),
    [sym_css_hex_color_3_digits] = ACTIONS(216),
    [sym_css_hex_color_4_digits] = ACTIONS(216),
    [aux_sym_css_named_color_token1] = ACTIONS(214),
    [aux_sym_css_named_color_token2] = ACTIONS(214),
    [aux_sym_css_named_color_token3] = ACTIONS(216),
    [aux_sym_css_named_color_token4] = ACTIONS(214),
    [aux_sym_css_named_color_token5] = ACTIONS(214),
    [aux_sym_css_named_color_token6] = ACTIONS(214),
    [aux_sym_css_named_color_token7] = ACTIONS(214),
    [aux_sym_css_named_color_token8] = ACTIONS(214),
    [aux_sym_css_named_color_token9] = ACTIONS(214),
    [aux_sym_css_named_color_token10] = ACTIONS(216),
    [aux_sym_css_named_color_token11] = ACTIONS(214),
    [aux_sym_css_named_color_token12] = ACTIONS(214),
    [aux_sym_css_named_color_token13] = ACTIONS(214),
    [aux_sym_css_named_color_token14] = ACTIONS(214),
    [aux_sym_css_named_color_token15] = ACTIONS(214),
    [aux_sym_css_named_color_token16] = ACTIONS(214),
    [aux_sym_css_named_color_token17] = ACTIONS(214),
    [aux_sym_css_named_color_token18] = ACTIONS(214),
    [aux_sym_css_named_color_token19] = ACTIONS(214),
    [aux_sym_css_named_color_token20] = ACTIONS(214),
    [aux_sym_css_named_color_token21] = ACTIONS(214),
    [aux_sym_css_named_color_token22] = ACTIONS(214),
    [aux_sym_css_named_color_token23] = ACTIONS(214),
    [aux_sym_css_named_color_token24] = ACTIONS(214),
    [aux_sym_css_named_color_token25] = ACTIONS(214),
    [aux_sym_css_named_color_token26] = ACTIONS(214),
    [aux_sym_css_named_color_token27] = ACTIONS(214),
    [aux_sym_css_named_color_token28] = ACTIONS(214),
    [aux_sym_css_named_color_token29] = ACTIONS(214),
    [aux_sym_css_named_color_token30] = ACTIONS(214),
    [aux_sym_css_named_color_token31] = ACTIONS(214),
    [aux_sym_css_named_color_token32] = ACTIONS(214),
    [aux_sym_css_named_color_token33] = ACTIONS(214),
    [aux_sym_css_named_color_token34] = ACTIONS(214),
    [aux_sym_css_named_color_token35] = ACTIONS(214),
    [aux_sym_css_named_color_token36] = ACTIONS(214),
    [aux_sym_css_named_color_token37] = ACTIONS(214),
    [aux_sym_css_named_color_token38] = ACTIONS(214),
    [aux_sym_css_named_color_token39] = ACTIONS(214),
    [aux_sym_css_named_color_token40] = ACTIONS(214),
    [aux_sym_css_named_color_token41] = ACTIONS(214),
    [aux_sym_css_named_color_token42] = ACTIONS(214),
    [aux_sym_css_named_color_token43] = ACTIONS(214),
    [aux_sym_css_named_color_token44] = ACTIONS(214),
    [aux_sym_css_named_color_token45] = ACTIONS(214),
    [aux_sym_css_named_color_token46] = ACTIONS(214),
    [aux_sym_css_named_color_token47] = ACTIONS(214),
    [aux_sym_css_named_color_token48] = ACTIONS(214),
    [aux_sym_css_named_color_token49] = ACTIONS(214),
    [aux_sym_css_named_color_token50] = ACTIONS(214),
    [aux_sym_css_named_color_token51] = ACTIONS(214),
    [aux_sym_css_named_color_token52] = ACTIONS(216),
    [aux_sym_css_named_color_token53] = ACTIONS(214),
    [aux_sym_css_named_color_token54] = ACTIONS(214),
    [aux_sym_css_named_color_token55] = ACTIONS(216),
    [aux_sym_css_named_color_token56] = ACTIONS(214),
    [aux_sym_css_named_color_token57] = ACTIONS(214),
    [aux_sym_css_named_color_token58] = ACTIONS(214),
    [aux_sym_css_named_color_token59] = ACTIONS(214),
    [aux_sym_css_named_color_token60] = ACTIONS(214),
    [aux_sym_css_named_color_token61] = ACTIONS(214),
    [aux_sym_css_named_color_token62] = ACTIONS(214),
    [aux_sym_css_named_color_token63] = ACTIONS(214),
    [aux_sym_css_named_color_token64] = ACTIONS(216),
    [aux_sym_css_named_color_token65] = ACTIONS(214),
    [aux_sym_css_named_color_token66] = ACTIONS(214),
    [aux_sym_css_named_color_token67] = ACTIONS(214),
    [aux_sym_css_named_color_token68] = ACTIONS(214),
    [aux_sym_css_named_color_token69] = ACTIONS(214),
    [aux_sym_css_named_color_token70] = ACTIONS(214),
    [aux_sym_css_named_color_token71] = ACTIONS(214),
    [aux_sym_css_named_color_token72] = ACTIONS(214),
    [aux_sym_css_named_color_token73] = ACTIONS(214),
    [aux_sym_css_named_color_token74] = ACTIONS(214),
    [aux_sym_css_named_color_token75] = ACTIONS(214),
    [aux_sym_css_named_color_token76] = ACTIONS(214),
    [aux_sym_css_named_color_token77] = ACTIONS(214),
    [aux_sym_css_named_color_token78] = ACTIONS(214),
    [aux_sym_css_named_color_token79] = ACTIONS(214),
    [aux_sym_css_named_color_token80] = ACTIONS(214),
    [aux_sym_css_named_color_token81] = ACTIONS(214),
    [aux_sym_css_named_color_token82] = ACTIONS(214),
    [aux_sym_css_named_color_token83] = ACTIONS(216),
    [aux_sym_css_named_color_token84] = ACTIONS(214),
    [aux_sym_css_named_color_token85] = ACTIONS(214),
    [aux_sym_css_named_color_token86] = ACTIONS(214),
    [aux_sym_css_named_color_token87] = ACTIONS(214),
    [aux_sym_css_named_color_token88] = ACTIONS(214),
    [aux_sym_css_named_color_token89] = ACTIONS(214),
    [aux_sym_css_named_color_token90] = ACTIONS(214),
    [aux_sym_css_named_color_token91] = ACTIONS(214),
    [aux_sym_css_named_color_token92] = ACTIONS(214),
    [aux_sym_css_named_color_token93] = ACTIONS(214),
    [aux_sym_css_named_color_token94] = ACTIONS(214),
    [aux_sym_css_named_color_token95] = ACTIONS(214),
    [aux_sym_css_named_color_token96] = ACTIONS(214),
    [aux_sym_css_named_color_token97] = ACTIONS(214),
    [aux_sym_css_named_color_token98] = ACTIONS(214),
    [aux_sym_css_named_color_token99] = ACTIONS(214),
    [aux_sym_css_named_color_token100] = ACTIONS(214),
    [aux_sym_css_named_color_token101] = ACTIONS(214),
    [aux_sym_css_named_color_token102] = ACTIONS(214),
    [aux_sym_css_named_color_token103] = ACTIONS(214),
    [aux_sym_css_named_color_token104] = ACTIONS(216),
    [aux_sym_css_named_color_token105] = ACTIONS(214),
    [aux_sym_css_named_color_token106] = ACTIONS(216),
    [aux_sym_css_named_color_token107] = ACTIONS(214),
    [aux_sym_css_named_color_token108] = ACTIONS(214),
    [aux_sym_css_named_color_token109] = ACTIONS(214),
    [aux_sym_css_named_color_token110] = ACTIONS(214),
    [aux_sym_css_named_color_token111] = ACTIONS(214),
    [aux_sym_css_named_color_token112] = ACTIONS(214),
    [aux_sym_css_named_color_token113] = ACTIONS(214),
    [aux_sym_css_named_color_token114] = ACTIONS(214),
    [aux_sym_css_named_color_token115] = ACTIONS(214),
    [aux_sym_css_named_color_token116] = ACTIONS(214),
    [aux_sym_css_named_color_token117] = ACTIONS(214),
    [aux_sym_css_named_color_token118] = ACTIONS(214),
    [aux_sym_css_named_color_token119] = ACTIONS(214),
    [aux_sym_css_named_color_token120] = ACTIONS(214),
    [aux_sym_css_named_color_token121] = ACTIONS(214),
    [aux_sym_css_named_color_token122] = ACTIONS(214),
    [aux_sym_css_named_color_token123] = ACTIONS(214),
    [aux_sym_css_named_color_token124] = ACTIONS(214),
    [aux_sym_css_named_color_token125] = ACTIONS(214),
    [aux_sym_css_named_color_token126] = ACTIONS(214),
    [aux_sym_css_named_color_token127] = ACTIONS(214),
    [aux_sym_css_named_color_token128] = ACTIONS(214),
    [aux_sym_css_named_color_token129] = ACTIONS(214),
    [aux_sym_css_named_color_token130] = ACTIONS(214),
    [aux_sym_css_named_color_token131] = ACTIONS(214),
    [aux_sym_css_named_color_token132] = ACTIONS(214),
    [aux_sym_css_named_color_token133] = ACTIONS(214),
    [aux_sym_css_named_color_token134] = ACTIONS(214),
    [aux_sym_css_named_color_token135] = ACTIONS(214),
    [aux_sym_css_named_color_token136] = ACTIONS(214),
    [aux_sym_css_named_color_token137] = ACTIONS(214),
    [aux_sym_css_named_color_token138] = ACTIONS(214),
    [aux_sym_css_named_color_token139] = ACTIONS(214),
    [aux_sym_css_named_color_token140] = ACTIONS(214),
    [aux_sym_css_named_color_token141] = ACTIONS(214),
    [aux_sym_css_named_color_token142] = ACTIONS(214),
    [aux_sym_css_named_color_token143] = ACTIONS(214),
    [aux_sym_css_named_color_token144] = ACTIONS(214),
    [aux_sym_css_named_color_token145] = ACTIONS(216),
    [aux_sym_css_named_color_token146] = ACTIONS(214),
    [aux_sym_css_named_color_token147] = ACTIONS(216),
    [aux_sym_css_named_color_token148] = ACTIONS(214),
    [sym_css_keyword_transparent] = ACTIONS(214),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(220),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(218),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(220),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(218),
    [aux_sym_css_function_hwb_token1] = ACTIONS(218),
    [aux_sym_css_function_lab_token1] = ACTIONS(218),
    [aux_sym_css_function_oklab_token1] = ACTIONS(218),
    [aux_sym_css_function_lch_token1] = ACTIONS(218),
    [aux_sym_css_function_oklch_token1] = ACTIONS(218),
    [aux_sym_css_function_color_token1] = ACTIONS(218),
    [sym_css_hex_color_6_digits] = ACTIONS(220),
    [sym_css_hex_color_8_digits] = ACTIONS(218),
    [sym_css_hex_color_3_digits] = ACTIONS(220),
    [sym_css_hex_color_4_digits] = ACTIONS(220),
    [aux_sym_css_named_color_token1] = ACTIONS(218),
    [aux_sym_css_named_color_token2] = ACTIONS(218),
    [aux_sym_css_named_color_token3] = ACTIONS(220),
    [aux_sym_css_named_color_token4] = ACTIONS(218),
    [aux_sym_css_named_color_token5] = ACTIONS(218),
    [aux_sym_css_named_color_token6] = ACTIONS(218),
    [aux_sym_css_named_color_token7] = ACTIONS(218),
    [aux_sym_css_named_color_token8] = ACTIONS(218),
    [aux_sym_css_named_color_token9] = ACTIONS(218),
    [aux_sym_css_named_color_token10] = ACTIONS(220),
    [aux_sym_css_named_color_token11] = ACTIONS(218),
    [aux_sym_css_named_color_token12] = ACTIONS(218),
    [aux_sym_css_named_color_token13] = ACTIONS(218),
    [aux_sym_css_named_color_token14] = ACTIONS(218),
    [aux_sym_css_named_color_token15] = ACTIONS(218),
    [aux_sym_css_named_color_token16] = ACTIONS(218),
    [aux_sym_css_named_color_token17] = ACTIONS(218),
    [aux_sym_css_named_color_token18] = ACTIONS(218),
    [aux_sym_css_named_color_token19] = ACTIONS(218),
    [aux_sym_css_named_color_token20] = ACTIONS(218),
    [aux_sym_css_named_color_token21] = ACTIONS(218),
    [aux_sym_css_named_color_token22] = ACTIONS(218),
    [aux_sym_css_named_color_token23] = ACTIONS(218),
    [aux_sym_css_named_color_token24] = ACTIONS(218),
    [aux_sym_css_named_color_token25] = ACTIONS(218),
    [aux_sym_css_named_color_token26] = ACTIONS(218),
    [aux_sym_css_named_color_token27] = ACTIONS(218),
    [aux_sym_css_named_color_token28] = ACTIONS(218),
    [aux_sym_css_named_color_token29] = ACTIONS(218),
    [aux_sym_css_named_color_token30] = ACTIONS(218),
    [aux_sym_css_named_color_token31] = ACTIONS(218),
    [aux_sym_css_named_color_token32] = ACTIONS(218),
    [aux_sym_css_named_color_token33] = ACTIONS(218),
    [aux_sym_css_named_color_token34] = ACTIONS(218),
    [aux_sym_css_named_color_token35] = ACTIONS(218),
    [aux_sym_css_named_color_token36] = ACTIONS(218),
    [aux_sym_css_named_color_token37] = ACTIONS(218),
    [aux_sym_css_named_color_token38] = ACTIONS(218),
    [aux_sym_css_named_color_token39] = ACTIONS(218),
    [aux_sym_css_named_color_token40] = ACTIONS(218),
    [aux_sym_css_named_color_token41] = ACTIONS(218),
    [aux_sym_css_named_color_token42] = ACTIONS(218),
    [aux_sym_css_named_color_token43] = ACTIONS(218),
    [aux_sym_css_named_color_token44] = ACTIONS(218),
    [aux_sym_css_named_color_token45] = ACTIONS(218),
    [aux_sym_css_named_color_token46] = ACTIONS(218),
    [aux_sym_css_named_color_token47] = ACTIONS(218),
    [aux_sym_css_named_color_token48] = ACTIONS(218),
    [aux_sym_css_named_color_token49] = ACTIONS(218),
    [aux_sym_css_named_color_token50] = ACTIONS(218),
    [aux_sym_css_named_color_token51] = ACTIONS(218),
    [aux_sym_css_named_color_token52] = ACTIONS(220),
    [aux_sym_css_named_color_token53] = ACTIONS(218),
    [aux_sym_css_named_color_token54] = ACTIONS(218),
    [aux_sym_css_named_color_token55] = ACTIONS(220),
    [aux_sym_css_named_color_token56] = ACTIONS(218),
    [aux_sym_css_named_color_token57] = ACTIONS(218),
    [aux_sym_css_named_color_token58] = ACTIONS(218),
    [aux_sym_css_named_color_token59] = ACTIONS(218),
    [aux_sym_css_named_color_token60] = ACTIONS(218),
    [aux_sym_css_named_color_token61] = ACTIONS(218),
    [aux_sym_css_named_color_token62] = ACTIONS(218),
    [aux_sym_css_named_color_token63] = ACTIONS(218),
    [aux_sym_css_named_color_token64] = ACTIONS(220),
    [aux_sym_css_named_color_token65] = ACTIONS(218),
    [aux_sym_css_named_color_token66] = ACTIONS(218),
    [aux_sym_css_named_color_token67] = ACTIONS(218),
    [aux_sym_css_named_color_token68] = ACTIONS(218),
    [aux_sym_css_named_color_token69] = ACTIONS(218),
    [aux_sym_css_named_color_token70] = ACTIONS(218),
    [aux_sym_css_named_color_token71] = ACTIONS(218),
    [aux_sym_css_named_color_token72] = ACTIONS(218),
    [aux_sym_css_named_color_token73] = ACTIONS(218),
    [aux_sym_css_named_color_token74] = ACTIONS(218),
    [aux_sym_css_named_color_token75] = ACTIONS(218),
    [aux_sym_css_named_color_token76] = ACTIONS(218),
    [aux_sym_css_named_color_token77] = ACTIONS(218),
    [aux_sym_css_named_color_token78] = ACTIONS(218),
    [aux_sym_css_named_color_token79] = ACTIONS(218),
    [aux_sym_css_named_color_token80] = ACTIONS(218),
    [aux_sym_css_named_color_token81] = ACTIONS(218),
    [aux_sym_css_named_color_token82] = ACTIONS(218),
    [aux_sym_css_named_color_token83] = ACTIONS(220),
    [aux_sym_css_named_color_token84] = ACTIONS(218),
    [aux_sym_css_named_color_token85] = ACTIONS(218),
    [aux_sym_css_named_color_token86] = ACTIONS(218),
    [aux_sym_css_named_color_token87] = ACTIONS(218),
    [aux_sym_css_named_color_token88] = ACTIONS(218),
    [aux_sym_css_named_color_token89] = ACTIONS(218),
    [aux_sym_css_named_color_token90] = ACTIONS(218),
    [aux_sym_css_named_color_token91] = ACTIONS(218),
    [aux_sym_css_named_color_token92] = ACTIONS(218),
    [aux_sym_css_named_color_token93] = ACTIONS(218),
    [aux_sym_css_named_color_token94] = ACTIONS(218),
    [aux_sym_css_named_color_token95] = ACTIONS(218),
    [aux_sym_css_named_color_token96] = ACTIONS(218),
    [aux_sym_css_named_color_token97] = ACTIONS(218),
    [aux_sym_css_named_color_token98] = ACTIONS(218),
    [aux_sym_css_named_color_token99] = ACTIONS(218),
    [aux_sym_css_named_color_token100] = ACTIONS(218),
    [aux_sym_css_named_color_token101] = ACTIONS(218),
    [aux_sym_css_named_color_token102] = ACTIONS(218),
    [aux_sym_css_named_color_token103] = ACTIONS(218),
    [aux_sym_css_named_color_token104] = ACTIONS(220),
    [aux_sym_css_named_color_token105] = ACTIONS(218),
    [aux_sym_css_named_color_token106] = ACTIONS(220),
    [aux_sym_css_named_color_token107] = ACTIONS(218),
    [aux_sym_css_named_color_token108] = ACTIONS(218),
    [aux_sym_css_named_color_token109] = ACTIONS(218),
    [aux_sym_css_named_color_token110] = ACTIONS(218),
    [aux_sym_css_named_color_token111] = ACTIONS(218),
    [aux_sym_css_named_color_token112] = ACTIONS(218),
    [aux_sym_css_named_color_token113] = ACTIONS(218),
    [aux_sym_css_named_color_token114] = ACTIONS(218),
    [aux_sym_css_named_color_token115] = ACTIONS(218),
    [aux_sym_css_named_color_token116] = ACTIONS(218),
    [aux_sym_css_named_color_token117] = ACTIONS(218),
    [aux_sym_css_named_color_token118] = ACTIONS(218),
    [aux_sym_css_named_color_token119] = ACTIONS(218),
    [aux_sym_css_named_color_token120] = ACTIONS(218),
    [aux_sym_css_named_color_token121] = ACTIONS(218),
    [aux_sym_css_named_color_token122] = ACTIONS(218),
    [aux_sym_css_named_color_token123] = ACTIONS(218),
    [aux_sym_css_named_color_token124] = ACTIONS(218),
    [aux_sym_css_named_color_token125] = ACTIONS(218),
    [aux_sym_css_named_color_token126] = ACTIONS(218),
    [aux_sym_css_named_color_token127] = ACTIONS(218),
    [aux_sym_css_named_color_token128] = ACTIONS(218),
    [aux_sym_css_named_color_token129] = ACTIONS(218),
    [aux_sym_css_named_color_token130] = ACTIONS(218),
    [aux_sym_css_named_color_token131] = ACTIONS(218),
    [aux_sym_css_named_color_token132] = ACTIONS(218),
    [aux_sym_css_named_color_token133] = ACTIONS(218),
    [aux_sym_css_named_color_token134] = ACTIONS(218),
    [aux_sym_css_named_color_token135] = ACTIONS(218),
    [aux_sym_css_named_color_token136] = ACTIONS(218),
    [aux_sym_css_named_color_token137] = ACTIONS(218),
    [aux_sym_css_named_color_token138] = ACTIONS(218),
    [aux_sym_css_named_color_token139] = ACTIONS(218),
    [aux_sym_css_named_color_token140] = ACTIONS(218),
    [aux_sym_css_named_color_token141] = ACTIONS(218),
    [aux_sym_css_named_color_token142] = ACTIONS(218),
    [aux_sym_css_named_color_token143] = ACTIONS(218),
    [aux_sym_css_named_color_token144] = ACTIONS(218),
    [aux_sym_css_named_color_token145] = ACTIONS(220),
    [aux_sym_css_named_color_token146] = ACTIONS(218),
    [aux_sym_css_named_color_token147] = ACTIONS(220),
    [aux_sym_css_named_color_token148] = ACTIONS(218),
    [sym_css_keyword_transparent] = ACTIONS(218),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(222), 1,
      aux_sym_css_predefined_rgb_token1,
    ACTIONS(226), 1,
      aux_sym_css_xyz_space_token1,
    STATE(54), 1,
      sym_css_predefined_rgb,
    STATE(62), 1,
      sym_css_xyz_space,
    STATE(106), 1,
      sym__css_predefined_rgb_params,
    STATE(112), 1,
      sym__css_colorspace_params,
    STATE(125), 1,
      sym__css_xyz_params,
    ACTIONS(228), 2,
      aux_sym_css_xyz_space_token2,
      aux_sym_css_xyz_space_token3,
    ACTIONS(224), 5,
      aux_sym_css_predefined_rgb_token2,
      aux_sym_css_predefined_rgb_token3,
      aux_sym_css_predefined_rgb_token4,
      aux_sym_css_predefined_rgb_token5,
      aux_sym_css_predefined_rgb_token6,
  [33] = 2,
    ACTIONS(230), 1,
      sym__css_number,
    ACTIONS(232), 6,
      sym__css_percentage,
      sym__css_angle,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [45] = 2,
    ACTIONS(234), 1,
      sym__css_number,
    ACTIONS(236), 6,
      sym__css_percentage,
      sym__css_angle,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [57] = 5,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      sym_css_keyword_none,
    STATE(68), 2,
      sym_css_number,
      sym_css_percentage,
  [74] = 5,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      sym_css_keyword_none,
    STATE(64), 2,
      sym_css_number,
      sym_css_percentage,
  [91] = 5,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(248), 1,
      sym_css_keyword_none,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    STATE(64), 2,
      sym_css_number,
      sym_css_percentage,
  [108] = 5,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      sym_css_keyword_none,
    STATE(65), 2,
      sym_css_number,
      sym_css_percentage,
  [125] = 5,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(254), 1,
      sym_css_keyword_none,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(65), 2,
      sym_css_number,
      sym_css_percentage,
  [142] = 2,
    ACTIONS(258), 1,
      sym__css_number,
    ACTIONS(260), 5,
      sym__css_percentage,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [153] = 5,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      sym_css_keyword_none,
    STATE(67), 2,
      sym_css_number,
      sym_css_percentage,
  [170] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(266), 1,
      sym_css_keyword_none,
    STATE(79), 2,
      sym_css_number,
      sym_css_percentage,
  [184] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(268), 1,
      sym_css_keyword_none,
    STATE(76), 2,
      sym_css_number,
      sym_css_percentage,
  [198] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(270), 1,
      sym_css_keyword_none,
    STATE(57), 2,
      sym_css_number,
      sym_css_percentage,
  [212] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(272), 1,
      sym_css_keyword_none,
    STATE(105), 2,
      sym_css_number,
      sym_css_percentage,
  [226] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(274), 1,
      sym_css_keyword_none,
    STATE(102), 2,
      sym_css_number,
      sym_css_percentage,
  [240] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(276), 1,
      sym_css_keyword_none,
    STATE(78), 2,
      sym_css_number,
      sym_css_percentage,
  [254] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(278), 1,
      sym_css_keyword_none,
    STATE(87), 2,
      sym_css_number,
      sym_css_percentage,
  [268] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(280), 1,
      sym_css_keyword_none,
    STATE(80), 2,
      sym_css_number,
      sym_css_percentage,
  [282] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(282), 1,
      sym_css_keyword_none,
    STATE(59), 2,
      sym_css_number,
      sym_css_percentage,
  [296] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(284), 1,
      sym_css_keyword_none,
    STATE(55), 2,
      sym_css_number,
      sym_css_percentage,
  [310] = 5,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(286), 1,
      sym_css_keyword_none,
    STATE(47), 1,
      sym_css_number,
    STATE(48), 1,
      sym_css_percentage,
  [326] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(288), 1,
      sym_css_keyword_none,
    STATE(104), 2,
      sym_css_number,
      sym_css_percentage,
  [340] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(290), 1,
      sym_css_keyword_none,
    STATE(111), 2,
      sym_css_number,
      sym_css_percentage,
  [354] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(248), 1,
      sym_css_keyword_none,
    STATE(64), 2,
      sym_css_number,
      sym_css_percentage,
  [368] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(292), 1,
      sym_css_keyword_none,
    STATE(113), 2,
      sym_css_number,
      sym_css_percentage,
  [382] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(294), 1,
      sym_css_keyword_none,
    STATE(114), 2,
      sym_css_number,
      sym_css_percentage,
  [396] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(254), 1,
      sym_css_keyword_none,
    STATE(65), 2,
      sym_css_number,
      sym_css_percentage,
  [410] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(296), 1,
      sym_css_keyword_none,
    STATE(117), 2,
      sym_css_number,
      sym_css_percentage,
  [424] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(298), 1,
      sym_css_keyword_none,
    STATE(119), 2,
      sym_css_number,
      sym_css_percentage,
  [438] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(300), 1,
      sym_css_keyword_none,
    STATE(120), 2,
      sym_css_number,
      sym_css_percentage,
  [452] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(264), 1,
      sym_css_keyword_none,
    STATE(67), 2,
      sym_css_number,
      sym_css_percentage,
  [466] = 5,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(302), 1,
      sym_css_keyword_none,
    STATE(49), 1,
      sym_css_number,
    STATE(50), 1,
      sym_css_percentage,
  [482] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(244), 1,
      sym_css_keyword_none,
    STATE(68), 2,
      sym_css_number,
      sym_css_percentage,
  [496] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(304), 1,
      sym_css_keyword_none,
    STATE(56), 2,
      sym_css_number,
      sym_css_percentage,
  [510] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(306), 1,
      sym_css_keyword_none,
    STATE(70), 2,
      sym_css_number,
      sym_css_percentage,
  [524] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(308), 1,
      sym_css_keyword_none,
    STATE(71), 2,
      sym_css_number,
      sym_css_percentage,
  [538] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(310), 1,
      sym_css_keyword_none,
    STATE(72), 2,
      sym_css_number,
      sym_css_percentage,
  [552] = 4,
    ACTIONS(238), 1,
      sym__css_number,
    ACTIONS(240), 1,
      sym__css_percentage,
    ACTIONS(312), 1,
      sym_css_keyword_none,
    STATE(86), 2,
      sym_css_number,
      sym_css_percentage,
  [566] = 4,
    ACTIONS(314), 1,
      sym__css_number,
    ACTIONS(316), 1,
      sym__css_percentage,
    ACTIONS(318), 1,
      sym_css_keyword_none,
    STATE(135), 1,
      sym_css_alpha_value,
  [579] = 4,
    ACTIONS(320), 1,
      sym__css_number,
    ACTIONS(322), 1,
      sym__css_angle,
    ACTIONS(324), 1,
      sym_css_keyword_none,
    STATE(77), 1,
      sym_css_hue,
  [592] = 4,
    ACTIONS(314), 1,
      sym__css_number,
    ACTIONS(316), 1,
      sym__css_percentage,
    ACTIONS(326), 1,
      sym_css_keyword_none,
    STATE(161), 1,
      sym_css_alpha_value,
  [605] = 4,
    ACTIONS(314), 1,
      sym__css_number,
    ACTIONS(316), 1,
      sym__css_percentage,
    ACTIONS(328), 1,
      sym_css_keyword_none,
    STATE(163), 1,
      sym_css_alpha_value,
  [618] = 4,
    ACTIONS(314), 1,
      sym__css_number,
    ACTIONS(316), 1,
      sym__css_percentage,
    ACTIONS(330), 1,
      sym_css_keyword_none,
    STATE(133), 1,
      sym_css_alpha_value,
  [631] = 4,
    ACTIONS(320), 1,
      sym__css_number,
    ACTIONS(322), 1,
      sym__css_angle,
    ACTIONS(332), 1,
      sym_css_keyword_none,
    STATE(122), 1,
      sym_css_hue,
  [644] = 4,
    ACTIONS(320), 1,
      sym__css_number,
    ACTIONS(322), 1,
      sym__css_angle,
    ACTIONS(334), 1,
      sym_css_keyword_none,
    STATE(123), 1,
      sym_css_hue,
  [657] = 4,
    ACTIONS(314), 1,
      sym__css_number,
    ACTIONS(316), 1,
      sym__css_percentage,
    ACTIONS(336), 1,
      sym_css_keyword_none,
    STATE(136), 1,
      sym_css_alpha_value,
  [670] = 4,
    ACTIONS(314), 1,
      sym__css_number,
    ACTIONS(316), 1,
      sym__css_percentage,
    ACTIONS(338), 1,
      sym_css_keyword_none,
    STATE(137), 1,
      sym_css_alpha_value,
  [683] = 4,
    ACTIONS(314), 1,
      sym__css_number,
    ACTIONS(316), 1,
      sym__css_percentage,
    ACTIONS(340), 1,
      sym_css_keyword_none,
    STATE(143), 1,
      sym_css_alpha_value,
  [696] = 4,
    ACTIONS(314), 1,
      sym__css_number,
    ACTIONS(316), 1,
      sym__css_percentage,
    ACTIONS(342), 1,
      sym_css_keyword_none,
    STATE(138), 1,
      sym_css_alpha_value,
  [709] = 4,
    ACTIONS(314), 1,
      sym__css_number,
    ACTIONS(316), 1,
      sym__css_percentage,
    ACTIONS(344), 1,
      sym_css_keyword_none,
    STATE(139), 1,
      sym_css_alpha_value,
  [722] = 4,
    ACTIONS(314), 1,
      sym__css_number,
    ACTIONS(316), 1,
      sym__css_percentage,
    ACTIONS(346), 1,
      sym_css_keyword_none,
    STATE(155), 1,
      sym_css_alpha_value,
  [735] = 4,
    ACTIONS(320), 1,
      sym__css_number,
    ACTIONS(322), 1,
      sym__css_angle,
    ACTIONS(348), 1,
      sym_css_keyword_none,
    STATE(46), 1,
      sym_css_hue,
  [748] = 4,
    ACTIONS(320), 1,
      sym__css_number,
    ACTIONS(322), 1,
      sym__css_angle,
    ACTIONS(350), 1,
      sym_css_keyword_none,
    STATE(52), 1,
      sym_css_hue,
  [761] = 3,
    ACTIONS(314), 1,
      sym__css_number,
    ACTIONS(316), 1,
      sym__css_percentage,
    STATE(158), 1,
      sym_css_alpha_value,
  [771] = 3,
    ACTIONS(314), 1,
      sym__css_number,
    ACTIONS(316), 1,
      sym__css_percentage,
    STATE(159), 1,
      sym_css_alpha_value,
  [781] = 3,
    ACTIONS(314), 1,
      sym__css_number,
    ACTIONS(316), 1,
      sym__css_percentage,
    STATE(160), 1,
      sym_css_alpha_value,
  [791] = 3,
    ACTIONS(314), 1,
      sym__css_number,
    ACTIONS(316), 1,
      sym__css_percentage,
    STATE(157), 1,
      sym_css_alpha_value,
  [801] = 2,
    ACTIONS(352), 1,
      sym__css_number,
    ACTIONS(354), 2,
      sym__css_percentage,
      sym_css_keyword_none,
  [809] = 2,
    ACTIONS(356), 1,
      sym__css_number,
    ACTIONS(358), 2,
      sym__css_percentage,
      sym_css_keyword_none,
  [817] = 1,
    ACTIONS(360), 2,
      anon_sym_RPAREN,
      anon_sym_SLASH,
  [822] = 2,
    ACTIONS(240), 1,
      sym__css_percentage,
    STATE(147), 1,
      sym_css_percentage,
  [829] = 2,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 1,
      anon_sym_SLASH,
  [836] = 1,
    ACTIONS(366), 2,
      anon_sym_RPAREN,
      anon_sym_SLASH,
  [841] = 1,
    ACTIONS(368), 2,
      anon_sym_RPAREN,
      anon_sym_SLASH,
  [846] = 2,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
  [853] = 2,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
  [860] = 2,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
  [867] = 2,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
  [874] = 2,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(388), 1,
      anon_sym_SLASH,
  [881] = 2,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    ACTIONS(392), 1,
      anon_sym_SLASH,
  [888] = 2,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    ACTIONS(396), 1,
      anon_sym_SLASH,
  [895] = 2,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    ACTIONS(400), 1,
      anon_sym_SLASH,
  [902] = 2,
    ACTIONS(402), 1,
      sym__css_number,
    STATE(108), 1,
      sym_css_number,
  [909] = 2,
    ACTIONS(240), 1,
      sym__css_percentage,
    STATE(109), 1,
      sym_css_percentage,
  [916] = 2,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    ACTIONS(406), 1,
      anon_sym_SLASH,
  [923] = 2,
    ACTIONS(402), 1,
      sym__css_number,
    STATE(146), 1,
      sym_css_number,
  [930] = 2,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    ACTIONS(410), 1,
      anon_sym_SLASH,
  [937] = 2,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    ACTIONS(414), 1,
      anon_sym_SLASH,
  [944] = 2,
    ACTIONS(240), 1,
      sym__css_percentage,
    STATE(150), 1,
      sym_css_percentage,
  [951] = 2,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    ACTIONS(418), 1,
      anon_sym_SLASH,
  [958] = 2,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    ACTIONS(422), 1,
      anon_sym_SLASH,
  [965] = 2,
    ACTIONS(240), 1,
      sym__css_percentage,
    STATE(132), 1,
      sym_css_percentage,
  [972] = 1,
    ACTIONS(424), 2,
      anon_sym_RPAREN,
      anon_sym_SLASH,
  [977] = 2,
    ACTIONS(240), 1,
      sym__css_percentage,
    STATE(108), 1,
      sym_css_percentage,
  [984] = 2,
    ACTIONS(240), 1,
      sym__css_percentage,
    STATE(110), 1,
      sym_css_percentage,
  [991] = 2,
    ACTIONS(402), 1,
      sym__css_number,
    STATE(107), 1,
      sym_css_number,
  [998] = 2,
    ACTIONS(240), 1,
      sym__css_percentage,
    STATE(107), 1,
      sym_css_percentage,
  [1005] = 2,
    ACTIONS(240), 1,
      sym__css_percentage,
    STATE(152), 1,
      sym_css_percentage,
  [1012] = 2,
    ACTIONS(402), 1,
      sym__css_number,
    STATE(149), 1,
      sym_css_number,
  [1019] = 1,
    ACTIONS(426), 1,
      anon_sym_COMMA,
  [1023] = 1,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
  [1027] = 1,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
  [1031] = 1,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
  [1035] = 1,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
  [1039] = 1,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
  [1043] = 1,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
  [1047] = 1,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
  [1051] = 1,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
  [1055] = 1,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
  [1059] = 1,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
  [1063] = 1,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
  [1067] = 1,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
  [1071] = 1,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
  [1075] = 1,
    ACTIONS(454), 1,
      anon_sym_COMMA,
  [1079] = 1,
    ACTIONS(456), 1,
      anon_sym_COMMA,
  [1083] = 1,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
  [1087] = 1,
    ACTIONS(460), 1,
      anon_sym_COMMA,
  [1091] = 1,
    ACTIONS(462), 1,
      anon_sym_COMMA,
  [1095] = 1,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
  [1099] = 1,
    ACTIONS(466), 1,
      anon_sym_COMMA,
  [1103] = 1,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
  [1107] = 1,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
  [1111] = 1,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
  [1115] = 1,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
  [1119] = 1,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
  [1123] = 1,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [1127] = 1,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
  [1131] = 1,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [1135] = 1,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
  [1139] = 1,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
  [1143] = 1,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
  [1147] = 1,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(43)] = 0,
  [SMALL_STATE(44)] = 33,
  [SMALL_STATE(45)] = 45,
  [SMALL_STATE(46)] = 57,
  [SMALL_STATE(47)] = 74,
  [SMALL_STATE(48)] = 91,
  [SMALL_STATE(49)] = 108,
  [SMALL_STATE(50)] = 125,
  [SMALL_STATE(51)] = 142,
  [SMALL_STATE(52)] = 153,
  [SMALL_STATE(53)] = 170,
  [SMALL_STATE(54)] = 184,
  [SMALL_STATE(55)] = 198,
  [SMALL_STATE(56)] = 212,
  [SMALL_STATE(57)] = 226,
  [SMALL_STATE(58)] = 240,
  [SMALL_STATE(59)] = 254,
  [SMALL_STATE(60)] = 268,
  [SMALL_STATE(61)] = 282,
  [SMALL_STATE(62)] = 296,
  [SMALL_STATE(63)] = 310,
  [SMALL_STATE(64)] = 326,
  [SMALL_STATE(65)] = 340,
  [SMALL_STATE(66)] = 354,
  [SMALL_STATE(67)] = 368,
  [SMALL_STATE(68)] = 382,
  [SMALL_STATE(69)] = 396,
  [SMALL_STATE(70)] = 410,
  [SMALL_STATE(71)] = 424,
  [SMALL_STATE(72)] = 438,
  [SMALL_STATE(73)] = 452,
  [SMALL_STATE(74)] = 466,
  [SMALL_STATE(75)] = 482,
  [SMALL_STATE(76)] = 496,
  [SMALL_STATE(77)] = 510,
  [SMALL_STATE(78)] = 524,
  [SMALL_STATE(79)] = 538,
  [SMALL_STATE(80)] = 552,
  [SMALL_STATE(81)] = 566,
  [SMALL_STATE(82)] = 579,
  [SMALL_STATE(83)] = 592,
  [SMALL_STATE(84)] = 605,
  [SMALL_STATE(85)] = 618,
  [SMALL_STATE(86)] = 631,
  [SMALL_STATE(87)] = 644,
  [SMALL_STATE(88)] = 657,
  [SMALL_STATE(89)] = 670,
  [SMALL_STATE(90)] = 683,
  [SMALL_STATE(91)] = 696,
  [SMALL_STATE(92)] = 709,
  [SMALL_STATE(93)] = 722,
  [SMALL_STATE(94)] = 735,
  [SMALL_STATE(95)] = 748,
  [SMALL_STATE(96)] = 761,
  [SMALL_STATE(97)] = 771,
  [SMALL_STATE(98)] = 781,
  [SMALL_STATE(99)] = 791,
  [SMALL_STATE(100)] = 801,
  [SMALL_STATE(101)] = 809,
  [SMALL_STATE(102)] = 817,
  [SMALL_STATE(103)] = 822,
  [SMALL_STATE(104)] = 829,
  [SMALL_STATE(105)] = 836,
  [SMALL_STATE(106)] = 841,
  [SMALL_STATE(107)] = 846,
  [SMALL_STATE(108)] = 853,
  [SMALL_STATE(109)] = 860,
  [SMALL_STATE(110)] = 867,
  [SMALL_STATE(111)] = 874,
  [SMALL_STATE(112)] = 881,
  [SMALL_STATE(113)] = 888,
  [SMALL_STATE(114)] = 895,
  [SMALL_STATE(115)] = 902,
  [SMALL_STATE(116)] = 909,
  [SMALL_STATE(117)] = 916,
  [SMALL_STATE(118)] = 923,
  [SMALL_STATE(119)] = 930,
  [SMALL_STATE(120)] = 937,
  [SMALL_STATE(121)] = 944,
  [SMALL_STATE(122)] = 951,
  [SMALL_STATE(123)] = 958,
  [SMALL_STATE(124)] = 965,
  [SMALL_STATE(125)] = 972,
  [SMALL_STATE(126)] = 977,
  [SMALL_STATE(127)] = 984,
  [SMALL_STATE(128)] = 991,
  [SMALL_STATE(129)] = 998,
  [SMALL_STATE(130)] = 1005,
  [SMALL_STATE(131)] = 1012,
  [SMALL_STATE(132)] = 1019,
  [SMALL_STATE(133)] = 1023,
  [SMALL_STATE(134)] = 1027,
  [SMALL_STATE(135)] = 1031,
  [SMALL_STATE(136)] = 1035,
  [SMALL_STATE(137)] = 1039,
  [SMALL_STATE(138)] = 1043,
  [SMALL_STATE(139)] = 1047,
  [SMALL_STATE(140)] = 1051,
  [SMALL_STATE(141)] = 1055,
  [SMALL_STATE(142)] = 1059,
  [SMALL_STATE(143)] = 1063,
  [SMALL_STATE(144)] = 1067,
  [SMALL_STATE(145)] = 1071,
  [SMALL_STATE(146)] = 1075,
  [SMALL_STATE(147)] = 1079,
  [SMALL_STATE(148)] = 1083,
  [SMALL_STATE(149)] = 1087,
  [SMALL_STATE(150)] = 1091,
  [SMALL_STATE(151)] = 1095,
  [SMALL_STATE(152)] = 1099,
  [SMALL_STATE(153)] = 1103,
  [SMALL_STATE(154)] = 1107,
  [SMALL_STATE(155)] = 1111,
  [SMALL_STATE(156)] = 1115,
  [SMALL_STATE(157)] = 1119,
  [SMALL_STATE(158)] = 1123,
  [SMALL_STATE(159)] = 1127,
  [SMALL_STATE(160)] = 1131,
  [SMALL_STATE(161)] = 1135,
  [SMALL_STATE(162)] = 1139,
  [SMALL_STATE(163)] = 1143,
  [SMALL_STATE(164)] = 1147,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl, 1, 0, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl, 1, 0, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba, 1, 0, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba, 1, 0, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla, 1, 0, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla, 1, 0, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb, 1, 0, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb, 1, 0, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_color, 4, 0, 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_color, 4, 0, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgb_modern, 6, 0, 6),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgb_modern, 6, 0, 6),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgba_modern, 6, 0, 6),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgba_modern, 6, 0, 6),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsl_modern, 6, 0, 7),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsl_modern, 6, 0, 7),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsla_modern, 6, 0, 7),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsla_modern, 6, 0, 7),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hwb, 6, 0, 8),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hwb, 6, 0, 8),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_lab, 6, 0, 9),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_lab, 6, 0, 9),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_oklab, 6, 0, 9),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_oklab, 6, 0, 9),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_lch, 6, 0, 10),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_lch, 6, 0, 10),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_oklch, 6, 0, 10),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_oklch, 6, 0, 10),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_color, 6, 0, 11),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_color, 6, 0, 11),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgb_modern, 8, 0, 14),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgb_modern, 8, 0, 14),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgb_legacy, 8, 0, 15),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgb_legacy, 8, 0, 15),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgba_modern, 8, 0, 14),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgba_modern, 8, 0, 14),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgba_legacy, 8, 0, 15),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgba_legacy, 8, 0, 15),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsl_modern, 8, 0, 16),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsl_modern, 8, 0, 16),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsl_legacy, 8, 0, 17),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsl_legacy, 8, 0, 17),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsla_modern, 8, 0, 16),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsla_modern, 8, 0, 16),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsla_legacy, 8, 0, 17),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsla_legacy, 8, 0, 17),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hwb, 8, 0, 18),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hwb, 8, 0, 18),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_lab, 8, 0, 19),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_lab, 8, 0, 19),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_oklab, 8, 0, 19),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_oklab, 8, 0, 19),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_lch, 8, 0, 20),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_lch, 8, 0, 20),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_oklch, 8, 0, 20),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_oklch, 8, 0, 20),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgb_legacy, 10, 0, 21),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgb_legacy, 10, 0, 21),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgba_legacy, 10, 0, 21),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgba_legacy, 10, 0, 21),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsl_legacy, 10, 0, 22),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsl_legacy, 10, 0, 22),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsla_legacy, 10, 0, 22),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsla_legacy, 10, 0, 22),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_percentage, 1, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_percentage, 1, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_number, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_number, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_hue, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_hue, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_predefined_rgb, 1, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_predefined_rgb, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_xyz_space, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_xyz_space, 1, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_xyz_params, 4, 0, 13),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_predefined_rgb_params, 4, 0, 12),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_colorspace_params, 1, 0, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_colorspace_params, 1, 0, 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_alpha_value, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [458] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_colors(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
