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
#define SYMBOL_COUNT 214
#define ALIAS_COUNT 0
#define TOKEN_COUNT 183
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 23

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  aux_sym_source_file_token2 = 2,
  sym__css_number = 3,
  sym__css_percentage = 4,
  sym__css_angle = 5,
  aux_sym__css_function_rgb_legacy_token1 = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  aux_sym__css_function_rgba_legacy_token1 = 10,
  anon_sym_SLASH = 11,
  aux_sym__css_function_hsl_legacy_token1 = 12,
  aux_sym__css_function_hsla_legacy_token1 = 13,
  aux_sym_css_function_hwb_token1 = 14,
  aux_sym_css_function_lab_token1 = 15,
  aux_sym_css_function_oklab_token1 = 16,
  aux_sym_css_function_lch_token1 = 17,
  aux_sym_css_function_oklch_token1 = 18,
  aux_sym_css_function_color_token1 = 19,
  aux_sym_css_predefined_rgb_token1 = 20,
  aux_sym_css_predefined_rgb_token2 = 21,
  aux_sym_css_predefined_rgb_token3 = 22,
  aux_sym_css_predefined_rgb_token4 = 23,
  aux_sym_css_predefined_rgb_token5 = 24,
  aux_sym_css_predefined_rgb_token6 = 25,
  aux_sym_css_xyz_space_token1 = 26,
  aux_sym_css_xyz_space_token2 = 27,
  aux_sym_css_xyz_space_token3 = 28,
  sym__css_hex_color_6_digits = 29,
  sym__css_hex_color_8_digits = 30,
  sym__css_hex_color_3_digits = 31,
  sym__css_hex_color_4_digits = 32,
  aux_sym_css_named_color_token1 = 33,
  aux_sym_css_named_color_token2 = 34,
  aux_sym_css_named_color_token3 = 35,
  aux_sym_css_named_color_token4 = 36,
  aux_sym_css_named_color_token5 = 37,
  aux_sym_css_named_color_token6 = 38,
  aux_sym_css_named_color_token7 = 39,
  aux_sym_css_named_color_token8 = 40,
  aux_sym_css_named_color_token9 = 41,
  aux_sym_css_named_color_token10 = 42,
  aux_sym_css_named_color_token11 = 43,
  aux_sym_css_named_color_token12 = 44,
  aux_sym_css_named_color_token13 = 45,
  aux_sym_css_named_color_token14 = 46,
  aux_sym_css_named_color_token15 = 47,
  aux_sym_css_named_color_token16 = 48,
  aux_sym_css_named_color_token17 = 49,
  aux_sym_css_named_color_token18 = 50,
  aux_sym_css_named_color_token19 = 51,
  aux_sym_css_named_color_token20 = 52,
  aux_sym_css_named_color_token21 = 53,
  aux_sym_css_named_color_token22 = 54,
  aux_sym_css_named_color_token23 = 55,
  aux_sym_css_named_color_token24 = 56,
  aux_sym_css_named_color_token25 = 57,
  aux_sym_css_named_color_token26 = 58,
  aux_sym_css_named_color_token27 = 59,
  aux_sym_css_named_color_token28 = 60,
  aux_sym_css_named_color_token29 = 61,
  aux_sym_css_named_color_token30 = 62,
  aux_sym_css_named_color_token31 = 63,
  aux_sym_css_named_color_token32 = 64,
  aux_sym_css_named_color_token33 = 65,
  aux_sym_css_named_color_token34 = 66,
  aux_sym_css_named_color_token35 = 67,
  aux_sym_css_named_color_token36 = 68,
  aux_sym_css_named_color_token37 = 69,
  aux_sym_css_named_color_token38 = 70,
  aux_sym_css_named_color_token39 = 71,
  aux_sym_css_named_color_token40 = 72,
  aux_sym_css_named_color_token41 = 73,
  aux_sym_css_named_color_token42 = 74,
  aux_sym_css_named_color_token43 = 75,
  aux_sym_css_named_color_token44 = 76,
  aux_sym_css_named_color_token45 = 77,
  aux_sym_css_named_color_token46 = 78,
  aux_sym_css_named_color_token47 = 79,
  aux_sym_css_named_color_token48 = 80,
  aux_sym_css_named_color_token49 = 81,
  aux_sym_css_named_color_token50 = 82,
  aux_sym_css_named_color_token51 = 83,
  aux_sym_css_named_color_token52 = 84,
  aux_sym_css_named_color_token53 = 85,
  aux_sym_css_named_color_token54 = 86,
  aux_sym_css_named_color_token55 = 87,
  aux_sym_css_named_color_token56 = 88,
  aux_sym_css_named_color_token57 = 89,
  aux_sym_css_named_color_token58 = 90,
  aux_sym_css_named_color_token59 = 91,
  aux_sym_css_named_color_token60 = 92,
  aux_sym_css_named_color_token61 = 93,
  aux_sym_css_named_color_token62 = 94,
  aux_sym_css_named_color_token63 = 95,
  aux_sym_css_named_color_token64 = 96,
  aux_sym_css_named_color_token65 = 97,
  aux_sym_css_named_color_token66 = 98,
  aux_sym_css_named_color_token67 = 99,
  aux_sym_css_named_color_token68 = 100,
  aux_sym_css_named_color_token69 = 101,
  aux_sym_css_named_color_token70 = 102,
  aux_sym_css_named_color_token71 = 103,
  aux_sym_css_named_color_token72 = 104,
  aux_sym_css_named_color_token73 = 105,
  aux_sym_css_named_color_token74 = 106,
  aux_sym_css_named_color_token75 = 107,
  aux_sym_css_named_color_token76 = 108,
  aux_sym_css_named_color_token77 = 109,
  aux_sym_css_named_color_token78 = 110,
  aux_sym_css_named_color_token79 = 111,
  aux_sym_css_named_color_token80 = 112,
  aux_sym_css_named_color_token81 = 113,
  aux_sym_css_named_color_token82 = 114,
  aux_sym_css_named_color_token83 = 115,
  aux_sym_css_named_color_token84 = 116,
  aux_sym_css_named_color_token85 = 117,
  aux_sym_css_named_color_token86 = 118,
  aux_sym_css_named_color_token87 = 119,
  aux_sym_css_named_color_token88 = 120,
  aux_sym_css_named_color_token89 = 121,
  aux_sym_css_named_color_token90 = 122,
  aux_sym_css_named_color_token91 = 123,
  aux_sym_css_named_color_token92 = 124,
  aux_sym_css_named_color_token93 = 125,
  aux_sym_css_named_color_token94 = 126,
  aux_sym_css_named_color_token95 = 127,
  aux_sym_css_named_color_token96 = 128,
  aux_sym_css_named_color_token97 = 129,
  aux_sym_css_named_color_token98 = 130,
  aux_sym_css_named_color_token99 = 131,
  aux_sym_css_named_color_token100 = 132,
  aux_sym_css_named_color_token101 = 133,
  aux_sym_css_named_color_token102 = 134,
  aux_sym_css_named_color_token103 = 135,
  aux_sym_css_named_color_token104 = 136,
  aux_sym_css_named_color_token105 = 137,
  aux_sym_css_named_color_token106 = 138,
  aux_sym_css_named_color_token107 = 139,
  aux_sym_css_named_color_token108 = 140,
  aux_sym_css_named_color_token109 = 141,
  aux_sym_css_named_color_token110 = 142,
  aux_sym_css_named_color_token111 = 143,
  aux_sym_css_named_color_token112 = 144,
  aux_sym_css_named_color_token113 = 145,
  aux_sym_css_named_color_token114 = 146,
  aux_sym_css_named_color_token115 = 147,
  aux_sym_css_named_color_token116 = 148,
  aux_sym_css_named_color_token117 = 149,
  aux_sym_css_named_color_token118 = 150,
  aux_sym_css_named_color_token119 = 151,
  aux_sym_css_named_color_token120 = 152,
  aux_sym_css_named_color_token121 = 153,
  aux_sym_css_named_color_token122 = 154,
  aux_sym_css_named_color_token123 = 155,
  aux_sym_css_named_color_token124 = 156,
  aux_sym_css_named_color_token125 = 157,
  aux_sym_css_named_color_token126 = 158,
  aux_sym_css_named_color_token127 = 159,
  aux_sym_css_named_color_token128 = 160,
  aux_sym_css_named_color_token129 = 161,
  aux_sym_css_named_color_token130 = 162,
  aux_sym_css_named_color_token131 = 163,
  aux_sym_css_named_color_token132 = 164,
  aux_sym_css_named_color_token133 = 165,
  aux_sym_css_named_color_token134 = 166,
  aux_sym_css_named_color_token135 = 167,
  aux_sym_css_named_color_token136 = 168,
  aux_sym_css_named_color_token137 = 169,
  aux_sym_css_named_color_token138 = 170,
  aux_sym_css_named_color_token139 = 171,
  aux_sym_css_named_color_token140 = 172,
  aux_sym_css_named_color_token141 = 173,
  aux_sym_css_named_color_token142 = 174,
  aux_sym_css_named_color_token143 = 175,
  aux_sym_css_named_color_token144 = 176,
  aux_sym_css_named_color_token145 = 177,
  aux_sym_css_named_color_token146 = 178,
  aux_sym_css_named_color_token147 = 179,
  aux_sym_css_named_color_token148 = 180,
  sym_css_keyword_transparent = 181,
  sym_css_keyword_none = 182,
  sym_source_file = 183,
  sym_css_number = 184,
  sym_css_percentage = 185,
  sym_css_alpha_value = 186,
  sym_css_hue = 187,
  sym_css_function_rgb = 188,
  sym_css_function_rgba = 189,
  sym__css_function_rgb_legacy = 190,
  sym__css_function_rgba_legacy = 191,
  sym__css_function_rgb_modern = 192,
  sym__css_function_rgba_modern = 193,
  sym_css_function_hsl = 194,
  sym__css_function_hsl_legacy = 195,
  sym__css_function_hsl_modern = 196,
  sym_css_function_hsla = 197,
  sym__css_function_hsla_legacy = 198,
  sym__css_function_hsla_modern = 199,
  sym_css_function_hwb = 200,
  sym_css_function_lab = 201,
  sym_css_function_oklab = 202,
  sym_css_function_lch = 203,
  sym_css_function_oklch = 204,
  sym_css_function_color = 205,
  sym__css_colorspace_params = 206,
  sym__css_predefined_rgb_params = 207,
  sym_css_predefined_rgb = 208,
  sym__css_xyz_params = 209,
  sym_css_xyz_space = 210,
  sym_css_hex_color = 211,
  sym_css_named_color = 212,
  aux_sym_source_file_repeat1 = 213,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [aux_sym_source_file_token2] = "source_file_token2",
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
  [sym__css_hex_color_6_digits] = "_css_hex_color_6_digits",
  [sym__css_hex_color_8_digits] = "_css_hex_color_8_digits",
  [sym__css_hex_color_3_digits] = "_css_hex_color_3_digits",
  [sym__css_hex_color_4_digits] = "_css_hex_color_4_digits",
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
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [aux_sym_source_file_token2] = aux_sym_source_file_token2,
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
  [sym__css_hex_color_6_digits] = sym__css_hex_color_6_digits,
  [sym__css_hex_color_8_digits] = sym__css_hex_color_8_digits,
  [sym__css_hex_color_3_digits] = sym__css_hex_color_3_digits,
  [sym__css_hex_color_4_digits] = sym__css_hex_color_4_digits,
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
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_token2] = {
    .visible = false,
    .named = false,
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
  [sym__css_hex_color_6_digits] = {
    .visible = false,
    .named = true,
  },
  [sym__css_hex_color_8_digits] = {
    .visible = false,
    .named = true,
  },
  [sym__css_hex_color_3_digits] = {
    .visible = false,
    .named = true,
  },
  [sym__css_hex_color_4_digits] = {
    .visible = false,
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
      if (eof) ADVANCE(69);
      ADVANCE_MAP(
        '#', 71,
        '(', 861,
        ')', 863,
        ',', 862,
        '/', 865,
        'A', 462,
        'a', 462,
        'B', 273,
        'b', 273,
        'C', 76,
        'c', 76,
        'D', 92,
        'd', 92,
        'F', 405,
        'f', 405,
        'G', 99,
        'g', 99,
        'H', 595,
        'h', 595,
        'I', 565,
        'i', 565,
        'K', 384,
        'k', 384,
        'L', 77,
        'l', 77,
        'M', 78,
        'm', 78,
        'N', 79,
        'n', 79,
        'O', 452,
        'o', 452,
        'P', 81,
        'p', 81,
        'R', 221,
        'r', 221,
        'S', 82,
        's', 82,
        'T', 96,
        't', 96,
        'V', 407,
        'v', 407,
        'W', 380,
        'w', 380,
        'X', 829,
        'x', 829,
        'Y', 274,
        'y', 274,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('!' <= lookahead && lookahead <= '.') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(854);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '(', 861,
        ')', 863,
        ',', 862,
        '.', 62,
        '/', 865,
        '+', 5,
        '-', 5,
        'A', 15,
        'a', 15,
        'D', 35,
        'd', 35,
        'N', 42,
        'n', 42,
        'P', 52,
        'p', 52,
        'R', 27,
        'r', 27,
        'S', 49,
        's', 49,
        'X', 59,
        'x', 59,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(855);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(855);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(880);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(883);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == '3') ADVANCE(877);
      END_STATE();
    case 12:
      if (lookahead == '5') ADVANCE(884);
      END_STATE();
    case 13:
      if (lookahead == '5') ADVANCE(7);
      if (lookahead == '6') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '8') ADVANCE(3);
      END_STATE();
    case 15:
      if (lookahead == '9') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(857);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(875);
      END_STATE();
    case 21:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(878);
      END_STATE();
    case 22:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(879);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 24:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(859);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1038);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(859);
      END_STATE();
    case 32:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 34:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 39:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(859);
      END_STATE();
    case 40:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 46:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 49:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 50:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 51:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(876);
      END_STATE();
    case 52:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 54:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      END_STATE();
    case 57:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 58:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 59:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 60:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 61:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(882);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(856);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(857);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(887);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(885);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(886);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      ADVANCE_MAP(
        '#', 71,
        'A', 462,
        'a', 462,
        'B', 273,
        'b', 273,
        'C', 76,
        'c', 76,
        'D', 92,
        'd', 92,
        'F', 405,
        'f', 405,
        'G', 99,
        'g', 99,
        'H', 595,
        'h', 595,
        'I', 565,
        'i', 565,
        'K', 384,
        'k', 384,
        'L', 77,
        'l', 77,
        'M', 78,
        'm', 78,
        'N', 80,
        'n', 80,
        'O', 452,
        'o', 452,
        'P', 81,
        'p', 81,
        'R', 272,
        'r', 272,
        'S', 83,
        's', 83,
        'T', 96,
        't', 96,
        'V', 407,
        'v', 407,
        'W', 380,
        'w', 380,
        'Y', 274,
        'y', 274,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68);
      if (('!' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(854);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == '0') ADVANCE(880);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '0' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '0' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == '2') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'A', 204,
        'a', 204,
        'H', 102,
        'h', 102,
        'O', 481,
        'o', 481,
        'R', 408,
        'r', 408,
        'Y', 98,
        'y', 98,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'A', 146,
        'a', 146,
        'C', 381,
        'c', 381,
        'E', 526,
        'e', 526,
        'I', 359,
        'i', 359,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'A', 366,
        'a', 366,
        'E', 209,
        'e', 209,
        'I', 207,
        'i', 207,
        'O', 177,
        'o', 177,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(807);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(575);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(807);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'A', 470,
        'a', 470,
        'E', 126,
        'e', 126,
        'I', 566,
        'i', 566,
        'L', 771,
        'l', 771,
        'O', 822,
        'o', 822,
        'U', 668,
        'u', 668,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'A', 205,
        'a', 205,
        'E', 85,
        'e', 85,
        'I', 282,
        'i', 282,
        'K', 842,
        'k', 842,
        'L', 97,
        'l', 97,
        'N', 601,
        'n', 601,
        'P', 690,
        'p', 690,
        'R', 358,
        'r', 358,
        'T', 314,
        't', 314,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'A', 205,
        'a', 205,
        'E', 85,
        'e', 85,
        'I', 282,
        'i', 282,
        'K', 842,
        'k', 842,
        'L', 97,
        'l', 97,
        'N', 601,
        'n', 601,
        'P', 690,
        'p', 690,
        'T', 314,
        't', 314,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(176);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(891);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(443);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(990);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1017);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(937);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(974);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(917);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'A', 663,
        'a', 663,
        'E', 222,
        'e', 222,
        'I', 525,
        'i', 525,
        'O', 214,
        'o', 214,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'A', 658,
        'a', 658,
        'B', 499,
        'b', 499,
        'O', 696,
        'o', 696,
        'P', 799,
        'p', 799,
        'S', 351,
        's', 351,
        'T', 806,
        't', 806,
        'V', 441,
        'v', 441,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'B' < lookahead) &&
          (lookahead < '[' || 'b' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(830);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'A', 534,
        'a', 534,
        'E', 104,
        'e', 104,
        'H', 422,
        'h', 422,
        'O', 527,
        'o', 527,
        'R', 111,
        'r', 111,
        'U', 687,
        'u', 687,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(751);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'A', 409,
        'a', 409,
        'H', 599,
        'h', 599,
        'O', 465,
        'o', 465,
        'R', 95,
        'r', 95,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(672);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(844);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(588);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(832);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(833);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(749);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(740);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(834);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(518);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(835);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(836);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(679);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(840);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(841);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(509);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(593);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(596);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(769);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(533);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(737);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(754);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(756);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(768);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(824);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(592);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(764);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(701);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'A', 512,
        'a', 512,
        'E', 143,
        'e', 143,
        'K', 851,
        'k', 851,
        'L', 133,
        'l', 133,
        'T', 350,
        't', 350,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(375);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || 'a' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(868);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(869);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(287);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(567);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(860);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(874);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(870);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(993);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(334);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(74);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1009);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(334);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1009);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(688);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(699);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(622);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'B', 485,
        'b', 485,
        'C', 848,
        'c', 848,
        'G', 621,
        'g', 621,
        'K', 396,
        'k', 396,
        'M', 132,
        'm', 132,
        'O', 471,
        'o', 471,
        'R', 279,
        'r', 279,
        'S', 121,
        's', 121,
        'T', 804,
        't', 804,
        'V', 439,
        'v', 439,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'B', 493,
        'b', 493,
        'C', 635,
        'c', 635,
        'G', 645,
        'g', 645,
        'P', 429,
        'p', 429,
        'S', 140,
        's', 140,
        'Y', 340,
        'y', 340,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(496);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(689);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(502);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(504);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(692);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(703);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(706);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(446);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(617);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(683);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(940);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(996);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(921);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(901);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(941);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(948);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(995);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(920);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(978);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(912);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(997);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1000);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(897);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(984);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(529);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(469);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(808);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(576);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(746);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(748);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(852);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(849);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(151);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(147);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(736);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(898);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(971);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1038);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(893);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(992);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1033);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(895);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(994);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1007);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(991);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1019);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1028);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(910);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(902);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(904);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(956);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(987);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1011);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1020);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1025);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1030);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(892);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(919);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(933);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(939);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(977);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1006);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1034);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(930);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(935);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(989);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(890);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(966);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(979);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(985);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(924);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(927);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(999);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1008);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(906);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(969);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(981);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(983);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(976);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(147);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(736);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'E', 404,
        'e', 404,
        'I', 722,
        'i', 722,
        'L', 84,
        'l', 84,
        'R', 600,
        'r', 600,
        'U', 669,
        'u', 669,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(847);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(766);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(798);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(813);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(809);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(715);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(945);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(590);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(741);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(742);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(743);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(544);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(545);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(915);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(962);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(561);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(752);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(728);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(763);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(519);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(717);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(719);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1002);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(629);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(486);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(417);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(642);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(805);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(387);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(224);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(667);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(293);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(632);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(681);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(695);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(702);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(707);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(708);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(710);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(711);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(712);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(713);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(714);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(378);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(316);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(871);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(872);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(953);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(729);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(648);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(739);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(413);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(415);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(767);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(951);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(916);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'I', 671,
        'i', 671,
        'L', 605,
        'l', 605,
        'O', 673,
        'o', 673,
        'U', 175,
        'u', 175,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(606);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(647);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(543);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(584);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(726);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(571);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(773);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(731);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(585);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(810);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(573);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(574);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(755);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(733);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(734);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(757);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(735);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(758);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(759);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(659);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(636);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(638);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(640);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(643);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(594);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(644);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1004);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(896);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(947);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(907);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(929);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(934);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(963);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(463);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(403);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(255);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(850);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(866);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1027);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(905);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1016);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(957);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      ADVANCE_MAP(
        'L', 406,
        'l', 406,
        'N', 747,
        'n', 747,
        'Q', 772,
        'q', 772,
        'Z', 797,
        'z', 797,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < 'Z' || '`' < lookahead) &&
          (lookahead < 'z' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(843);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(774);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(480);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(602);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(609);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(779);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(780);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(604);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(781);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(608);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(782);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(611);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(783);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(613);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(784);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(785);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(786);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(787);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(788);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(789);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(790);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(791);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(792);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(793);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(794);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(795);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(796);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(490);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(825);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1005);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(93);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(986);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(738);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(616);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(614);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(625);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(627);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(630);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1026);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(909);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(900);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(943);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(973);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(975);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1013);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(908);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(911);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(988);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1015);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(914);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(954);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(958);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(972);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(998);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1010);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(922);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(961);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1014);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(936);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(964);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1012);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1024);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1036);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(923);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(955);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(965);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(918);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(980);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(982);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(607);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(725);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(723);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(649);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(451);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(750);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(744);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(578);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(675);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(678);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(753);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(691);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(694);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(684);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(572);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(457);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(949);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1029);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(938);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(724);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(818);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(811);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(812);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(730);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(828);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(693);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(670);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(814);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(664);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(815);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(816);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(610);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(591);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(425);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(677);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(560);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(582);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(819);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(624);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(820);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(821);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(697);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(484);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(508);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(826);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(511);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(654);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1001);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(770);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(475);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(428);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(800);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(776);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(775);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(777);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(778);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(801);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(802);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(803);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(873);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1018);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(952);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(650);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(831);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(761);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(603);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(612);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(598);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(618);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(657);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(418);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(620);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(623);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(631);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(652);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(633);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(653);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(634);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(660);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(661);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(662);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(656);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(651);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(745);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(760);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(765);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(846);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(626);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1032);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1031);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(899);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(928);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1037);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(823);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(845);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(597);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(259);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(682);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(686);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1003);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(727);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(619);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(253);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(256);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(263);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(676);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(732);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(700);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(704);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(637);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(639);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(641);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(718);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(720);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(721);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1023);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1035);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(946);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(944);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(970);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(959);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(615);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(536);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(553);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(853);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(942);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(950);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(931);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(932);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(913);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(960);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1021);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1022);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(925);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(926);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(967);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(968);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(817);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(674);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(881);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < 'Z' || '`' < lookahead) &&
          (lookahead < 'z' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(854);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 858,
        '.', 62,
        'D', 28,
        'd', 28,
        'E', 16,
        'e', 16,
        'G', 50,
        'g', 50,
        'R', 17,
        'r', 17,
        'T', 58,
        't', 58,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(855);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 858,
        'D', 28,
        'd', 28,
        'E', 16,
        'e', 16,
        'G', 50,
        'g', 50,
        'R', 17,
        'r', 17,
        'T', 58,
        't', 58,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(856);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 858,
        'D', 28,
        'd', 28,
        'G', 50,
        'g', 50,
        'R', 17,
        'r', 17,
        'T', 58,
        't', 58,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(857);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__css_percentage);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__css_angle);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym__css_function_rgb_legacy_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(864);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym__css_function_rgba_legacy_token1);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym__css_function_hsl_legacy_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(867);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym__css_function_hsla_legacy_token1);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_css_function_hwb_token1);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_css_function_lab_token1);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_css_function_oklab_token1);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_css_function_lch_token1);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_css_function_oklch_token1);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_css_function_color_token1);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_css_predefined_rgb_token1);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_css_predefined_rgb_token1);
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_css_predefined_rgb_token2);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_css_predefined_rgb_token3);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_css_predefined_rgb_token4);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_css_predefined_rgb_token5);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_css_predefined_rgb_token6);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_css_xyz_space_token1);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_css_xyz_space_token1);
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_css_xyz_space_token2);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_css_xyz_space_token3);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__css_hex_color_6_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__css_hex_color_8_digits);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__css_hex_color_3_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(888);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__css_hex_color_4_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_css_named_color_token1);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_css_named_color_token2);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_css_named_color_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_css_named_color_token4);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_css_named_color_token5);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_css_named_color_token6);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_css_named_color_token7);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_css_named_color_token8);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_css_named_color_token9);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_css_named_color_token10);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(438);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_css_named_color_token11);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_css_named_color_token12);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_css_named_color_token13);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_css_named_color_token14);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_css_named_color_token15);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_css_named_color_token16);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_css_named_color_token17);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_css_named_color_token18);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_css_named_color_token19);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_css_named_color_token20);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_css_named_color_token21);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_css_named_color_token22);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_css_named_color_token23);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_css_named_color_token24);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_css_named_color_token25);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_css_named_color_token26);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_css_named_color_token27);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_css_named_color_token28);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_css_named_color_token29);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_css_named_color_token30);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_css_named_color_token31);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_css_named_color_token32);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_css_named_color_token33);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_css_named_color_token34);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_css_named_color_token35);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_css_named_color_token36);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_css_named_color_token37);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_css_named_color_token38);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_css_named_color_token39);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_css_named_color_token40);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_css_named_color_token41);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_css_named_color_token42);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_css_named_color_token43);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_css_named_color_token44);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_css_named_color_token45);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_css_named_color_token46);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_css_named_color_token47);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_css_named_color_token48);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_css_named_color_token49);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_css_named_color_token50);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_css_named_color_token51);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_css_named_color_token52);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_css_named_color_token53);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_css_named_color_token54);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_css_named_color_token55);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(339);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_css_named_color_token56);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_css_named_color_token57);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_css_named_color_token58);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_css_named_color_token59);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_css_named_color_token60);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_css_named_color_token61);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_css_named_color_token62);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_css_named_color_token63);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_css_named_color_token64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(467);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_css_named_color_token65);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_css_named_color_token66);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_css_named_color_token67);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_css_named_color_token68);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_css_named_color_token69);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_css_named_color_token70);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_css_named_color_token71);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_css_named_color_token72);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_css_named_color_token73);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_css_named_color_token74);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_css_named_color_token75);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_css_named_color_token76);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_css_named_color_token77);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_css_named_color_token78);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_css_named_color_token79);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_css_named_color_token80);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_css_named_color_token81);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_css_named_color_token82);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_css_named_color_token83);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(705);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_css_named_color_token84);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_css_named_color_token85);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_css_named_color_token86);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_css_named_color_token87);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_css_named_color_token88);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_css_named_color_token89);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_css_named_color_token90);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_css_named_color_token91);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_css_named_color_token92);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_css_named_color_token93);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_css_named_color_token94);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_css_named_color_token95);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_css_named_color_token96);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_css_named_color_token97);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_css_named_color_token98);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_css_named_color_token99);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_css_named_color_token100);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_css_named_color_token101);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_css_named_color_token102);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_css_named_color_token103);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_css_named_color_token104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(680);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_css_named_color_token105);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_css_named_color_token106);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_css_named_color_token107);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_css_named_color_token108);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_css_named_color_token109);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_css_named_color_token110);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_css_named_color_token111);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_css_named_color_token112);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_css_named_color_token113);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_css_named_color_token114);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_css_named_color_token115);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_css_named_color_token116);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_css_named_color_token117);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_css_named_color_token118);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_css_named_color_token119);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_css_named_color_token120);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_css_named_color_token121);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_css_named_color_token122);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_css_named_color_token123);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_css_named_color_token124);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_css_named_color_token125);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_css_named_color_token126);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_css_named_color_token127);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_css_named_color_token128);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_css_named_color_token129);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_css_named_color_token130);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_css_named_color_token131);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_css_named_color_token132);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_css_named_color_token133);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_css_named_color_token134);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_css_named_color_token135);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_css_named_color_token136);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_css_named_color_token137);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_css_named_color_token138);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_css_named_color_token139);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_css_named_color_token140);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_css_named_color_token141);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_css_named_color_token142);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_css_named_color_token143);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_css_named_color_token144);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_css_named_color_token145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(528);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_css_named_color_token146);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_css_named_color_token147);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(709);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_css_named_color_token148);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_css_keyword_transparent);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_css_keyword_none);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 68},
  [2] = {.lex_state = 68},
  [3] = {.lex_state = 68},
  [4] = {.lex_state = 68},
  [5] = {.lex_state = 68},
  [6] = {.lex_state = 68},
  [7] = {.lex_state = 68},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 68},
  [10] = {.lex_state = 68},
  [11] = {.lex_state = 68},
  [12] = {.lex_state = 68},
  [13] = {.lex_state = 68},
  [14] = {.lex_state = 68},
  [15] = {.lex_state = 68},
  [16] = {.lex_state = 68},
  [17] = {.lex_state = 68},
  [18] = {.lex_state = 68},
  [19] = {.lex_state = 68},
  [20] = {.lex_state = 68},
  [21] = {.lex_state = 68},
  [22] = {.lex_state = 68},
  [23] = {.lex_state = 68},
  [24] = {.lex_state = 68},
  [25] = {.lex_state = 68},
  [26] = {.lex_state = 68},
  [27] = {.lex_state = 68},
  [28] = {.lex_state = 68},
  [29] = {.lex_state = 68},
  [30] = {.lex_state = 68},
  [31] = {.lex_state = 68},
  [32] = {.lex_state = 68},
  [33] = {.lex_state = 68},
  [34] = {.lex_state = 68},
  [35] = {.lex_state = 68},
  [36] = {.lex_state = 68},
  [37] = {.lex_state = 68},
  [38] = {.lex_state = 68},
  [39] = {.lex_state = 68},
  [40] = {.lex_state = 68},
  [41] = {.lex_state = 68},
  [42] = {.lex_state = 68},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [aux_sym_source_file_token2] = ACTIONS(1),
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
    [aux_sym_css_predefined_rgb_token6] = ACTIONS(1),
    [aux_sym_css_xyz_space_token1] = ACTIONS(1),
    [sym__css_hex_color_6_digits] = ACTIONS(1),
    [sym__css_hex_color_8_digits] = ACTIONS(1),
    [sym__css_hex_color_3_digits] = ACTIONS(1),
    [sym__css_hex_color_4_digits] = ACTIONS(1),
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
    [aux_sym_source_file_token1] = ACTIONS(5),
    [aux_sym_source_file_token2] = ACTIONS(5),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(7),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(9),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(11),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(13),
    [aux_sym_css_function_hwb_token1] = ACTIONS(15),
    [aux_sym_css_function_lab_token1] = ACTIONS(17),
    [aux_sym_css_function_oklab_token1] = ACTIONS(19),
    [aux_sym_css_function_lch_token1] = ACTIONS(21),
    [aux_sym_css_function_oklch_token1] = ACTIONS(23),
    [aux_sym_css_function_color_token1] = ACTIONS(25),
    [sym__css_hex_color_6_digits] = ACTIONS(27),
    [sym__css_hex_color_8_digits] = ACTIONS(29),
    [sym__css_hex_color_3_digits] = ACTIONS(27),
    [sym__css_hex_color_4_digits] = ACTIONS(27),
    [aux_sym_css_named_color_token1] = ACTIONS(31),
    [aux_sym_css_named_color_token2] = ACTIONS(31),
    [aux_sym_css_named_color_token3] = ACTIONS(33),
    [aux_sym_css_named_color_token4] = ACTIONS(31),
    [aux_sym_css_named_color_token5] = ACTIONS(31),
    [aux_sym_css_named_color_token6] = ACTIONS(31),
    [aux_sym_css_named_color_token7] = ACTIONS(31),
    [aux_sym_css_named_color_token8] = ACTIONS(31),
    [aux_sym_css_named_color_token9] = ACTIONS(31),
    [aux_sym_css_named_color_token10] = ACTIONS(33),
    [aux_sym_css_named_color_token11] = ACTIONS(31),
    [aux_sym_css_named_color_token12] = ACTIONS(31),
    [aux_sym_css_named_color_token13] = ACTIONS(31),
    [aux_sym_css_named_color_token14] = ACTIONS(31),
    [aux_sym_css_named_color_token15] = ACTIONS(31),
    [aux_sym_css_named_color_token16] = ACTIONS(31),
    [aux_sym_css_named_color_token17] = ACTIONS(31),
    [aux_sym_css_named_color_token18] = ACTIONS(31),
    [aux_sym_css_named_color_token19] = ACTIONS(31),
    [aux_sym_css_named_color_token20] = ACTIONS(31),
    [aux_sym_css_named_color_token21] = ACTIONS(31),
    [aux_sym_css_named_color_token22] = ACTIONS(31),
    [aux_sym_css_named_color_token23] = ACTIONS(31),
    [aux_sym_css_named_color_token24] = ACTIONS(31),
    [aux_sym_css_named_color_token25] = ACTIONS(31),
    [aux_sym_css_named_color_token26] = ACTIONS(31),
    [aux_sym_css_named_color_token27] = ACTIONS(31),
    [aux_sym_css_named_color_token28] = ACTIONS(31),
    [aux_sym_css_named_color_token29] = ACTIONS(31),
    [aux_sym_css_named_color_token30] = ACTIONS(31),
    [aux_sym_css_named_color_token31] = ACTIONS(31),
    [aux_sym_css_named_color_token32] = ACTIONS(31),
    [aux_sym_css_named_color_token33] = ACTIONS(31),
    [aux_sym_css_named_color_token34] = ACTIONS(31),
    [aux_sym_css_named_color_token35] = ACTIONS(31),
    [aux_sym_css_named_color_token36] = ACTIONS(31),
    [aux_sym_css_named_color_token37] = ACTIONS(31),
    [aux_sym_css_named_color_token38] = ACTIONS(31),
    [aux_sym_css_named_color_token39] = ACTIONS(31),
    [aux_sym_css_named_color_token40] = ACTIONS(31),
    [aux_sym_css_named_color_token41] = ACTIONS(31),
    [aux_sym_css_named_color_token42] = ACTIONS(31),
    [aux_sym_css_named_color_token43] = ACTIONS(31),
    [aux_sym_css_named_color_token44] = ACTIONS(31),
    [aux_sym_css_named_color_token45] = ACTIONS(31),
    [aux_sym_css_named_color_token46] = ACTIONS(31),
    [aux_sym_css_named_color_token47] = ACTIONS(31),
    [aux_sym_css_named_color_token48] = ACTIONS(31),
    [aux_sym_css_named_color_token49] = ACTIONS(31),
    [aux_sym_css_named_color_token50] = ACTIONS(31),
    [aux_sym_css_named_color_token51] = ACTIONS(31),
    [aux_sym_css_named_color_token52] = ACTIONS(33),
    [aux_sym_css_named_color_token53] = ACTIONS(31),
    [aux_sym_css_named_color_token54] = ACTIONS(31),
    [aux_sym_css_named_color_token55] = ACTIONS(33),
    [aux_sym_css_named_color_token56] = ACTIONS(31),
    [aux_sym_css_named_color_token57] = ACTIONS(31),
    [aux_sym_css_named_color_token58] = ACTIONS(31),
    [aux_sym_css_named_color_token59] = ACTIONS(31),
    [aux_sym_css_named_color_token60] = ACTIONS(31),
    [aux_sym_css_named_color_token61] = ACTIONS(31),
    [aux_sym_css_named_color_token62] = ACTIONS(31),
    [aux_sym_css_named_color_token63] = ACTIONS(31),
    [aux_sym_css_named_color_token64] = ACTIONS(33),
    [aux_sym_css_named_color_token65] = ACTIONS(31),
    [aux_sym_css_named_color_token66] = ACTIONS(31),
    [aux_sym_css_named_color_token67] = ACTIONS(31),
    [aux_sym_css_named_color_token68] = ACTIONS(31),
    [aux_sym_css_named_color_token69] = ACTIONS(31),
    [aux_sym_css_named_color_token70] = ACTIONS(31),
    [aux_sym_css_named_color_token71] = ACTIONS(31),
    [aux_sym_css_named_color_token72] = ACTIONS(31),
    [aux_sym_css_named_color_token73] = ACTIONS(31),
    [aux_sym_css_named_color_token74] = ACTIONS(31),
    [aux_sym_css_named_color_token75] = ACTIONS(31),
    [aux_sym_css_named_color_token76] = ACTIONS(31),
    [aux_sym_css_named_color_token77] = ACTIONS(31),
    [aux_sym_css_named_color_token78] = ACTIONS(31),
    [aux_sym_css_named_color_token79] = ACTIONS(31),
    [aux_sym_css_named_color_token80] = ACTIONS(31),
    [aux_sym_css_named_color_token81] = ACTIONS(31),
    [aux_sym_css_named_color_token82] = ACTIONS(31),
    [aux_sym_css_named_color_token83] = ACTIONS(33),
    [aux_sym_css_named_color_token84] = ACTIONS(31),
    [aux_sym_css_named_color_token85] = ACTIONS(31),
    [aux_sym_css_named_color_token86] = ACTIONS(31),
    [aux_sym_css_named_color_token87] = ACTIONS(31),
    [aux_sym_css_named_color_token88] = ACTIONS(31),
    [aux_sym_css_named_color_token89] = ACTIONS(31),
    [aux_sym_css_named_color_token90] = ACTIONS(31),
    [aux_sym_css_named_color_token91] = ACTIONS(31),
    [aux_sym_css_named_color_token92] = ACTIONS(31),
    [aux_sym_css_named_color_token93] = ACTIONS(31),
    [aux_sym_css_named_color_token94] = ACTIONS(31),
    [aux_sym_css_named_color_token95] = ACTIONS(31),
    [aux_sym_css_named_color_token96] = ACTIONS(31),
    [aux_sym_css_named_color_token97] = ACTIONS(31),
    [aux_sym_css_named_color_token98] = ACTIONS(31),
    [aux_sym_css_named_color_token99] = ACTIONS(31),
    [aux_sym_css_named_color_token100] = ACTIONS(31),
    [aux_sym_css_named_color_token101] = ACTIONS(31),
    [aux_sym_css_named_color_token102] = ACTIONS(31),
    [aux_sym_css_named_color_token103] = ACTIONS(31),
    [aux_sym_css_named_color_token104] = ACTIONS(33),
    [aux_sym_css_named_color_token105] = ACTIONS(31),
    [aux_sym_css_named_color_token106] = ACTIONS(33),
    [aux_sym_css_named_color_token107] = ACTIONS(31),
    [aux_sym_css_named_color_token108] = ACTIONS(31),
    [aux_sym_css_named_color_token109] = ACTIONS(31),
    [aux_sym_css_named_color_token110] = ACTIONS(31),
    [aux_sym_css_named_color_token111] = ACTIONS(31),
    [aux_sym_css_named_color_token112] = ACTIONS(31),
    [aux_sym_css_named_color_token113] = ACTIONS(31),
    [aux_sym_css_named_color_token114] = ACTIONS(31),
    [aux_sym_css_named_color_token115] = ACTIONS(31),
    [aux_sym_css_named_color_token116] = ACTIONS(31),
    [aux_sym_css_named_color_token117] = ACTIONS(31),
    [aux_sym_css_named_color_token118] = ACTIONS(31),
    [aux_sym_css_named_color_token119] = ACTIONS(31),
    [aux_sym_css_named_color_token120] = ACTIONS(31),
    [aux_sym_css_named_color_token121] = ACTIONS(31),
    [aux_sym_css_named_color_token122] = ACTIONS(31),
    [aux_sym_css_named_color_token123] = ACTIONS(31),
    [aux_sym_css_named_color_token124] = ACTIONS(31),
    [aux_sym_css_named_color_token125] = ACTIONS(31),
    [aux_sym_css_named_color_token126] = ACTIONS(31),
    [aux_sym_css_named_color_token127] = ACTIONS(31),
    [aux_sym_css_named_color_token128] = ACTIONS(31),
    [aux_sym_css_named_color_token129] = ACTIONS(31),
    [aux_sym_css_named_color_token130] = ACTIONS(31),
    [aux_sym_css_named_color_token131] = ACTIONS(31),
    [aux_sym_css_named_color_token132] = ACTIONS(31),
    [aux_sym_css_named_color_token133] = ACTIONS(31),
    [aux_sym_css_named_color_token134] = ACTIONS(31),
    [aux_sym_css_named_color_token135] = ACTIONS(31),
    [aux_sym_css_named_color_token136] = ACTIONS(31),
    [aux_sym_css_named_color_token137] = ACTIONS(31),
    [aux_sym_css_named_color_token138] = ACTIONS(31),
    [aux_sym_css_named_color_token139] = ACTIONS(31),
    [aux_sym_css_named_color_token140] = ACTIONS(31),
    [aux_sym_css_named_color_token141] = ACTIONS(31),
    [aux_sym_css_named_color_token142] = ACTIONS(31),
    [aux_sym_css_named_color_token143] = ACTIONS(31),
    [aux_sym_css_named_color_token144] = ACTIONS(31),
    [aux_sym_css_named_color_token145] = ACTIONS(33),
    [aux_sym_css_named_color_token146] = ACTIONS(31),
    [aux_sym_css_named_color_token147] = ACTIONS(33),
    [aux_sym_css_named_color_token148] = ACTIONS(31),
    [sym_css_keyword_transparent] = ACTIONS(35),
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
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_source_file_token1] = ACTIONS(39),
    [aux_sym_source_file_token2] = ACTIONS(39),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(7),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(9),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(11),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(13),
    [aux_sym_css_function_hwb_token1] = ACTIONS(15),
    [aux_sym_css_function_lab_token1] = ACTIONS(17),
    [aux_sym_css_function_oklab_token1] = ACTIONS(19),
    [aux_sym_css_function_lch_token1] = ACTIONS(21),
    [aux_sym_css_function_oklch_token1] = ACTIONS(23),
    [aux_sym_css_function_color_token1] = ACTIONS(25),
    [sym__css_hex_color_6_digits] = ACTIONS(27),
    [sym__css_hex_color_8_digits] = ACTIONS(29),
    [sym__css_hex_color_3_digits] = ACTIONS(27),
    [sym__css_hex_color_4_digits] = ACTIONS(27),
    [aux_sym_css_named_color_token1] = ACTIONS(31),
    [aux_sym_css_named_color_token2] = ACTIONS(31),
    [aux_sym_css_named_color_token3] = ACTIONS(33),
    [aux_sym_css_named_color_token4] = ACTIONS(31),
    [aux_sym_css_named_color_token5] = ACTIONS(31),
    [aux_sym_css_named_color_token6] = ACTIONS(31),
    [aux_sym_css_named_color_token7] = ACTIONS(31),
    [aux_sym_css_named_color_token8] = ACTIONS(31),
    [aux_sym_css_named_color_token9] = ACTIONS(31),
    [aux_sym_css_named_color_token10] = ACTIONS(33),
    [aux_sym_css_named_color_token11] = ACTIONS(31),
    [aux_sym_css_named_color_token12] = ACTIONS(31),
    [aux_sym_css_named_color_token13] = ACTIONS(31),
    [aux_sym_css_named_color_token14] = ACTIONS(31),
    [aux_sym_css_named_color_token15] = ACTIONS(31),
    [aux_sym_css_named_color_token16] = ACTIONS(31),
    [aux_sym_css_named_color_token17] = ACTIONS(31),
    [aux_sym_css_named_color_token18] = ACTIONS(31),
    [aux_sym_css_named_color_token19] = ACTIONS(31),
    [aux_sym_css_named_color_token20] = ACTIONS(31),
    [aux_sym_css_named_color_token21] = ACTIONS(31),
    [aux_sym_css_named_color_token22] = ACTIONS(31),
    [aux_sym_css_named_color_token23] = ACTIONS(31),
    [aux_sym_css_named_color_token24] = ACTIONS(31),
    [aux_sym_css_named_color_token25] = ACTIONS(31),
    [aux_sym_css_named_color_token26] = ACTIONS(31),
    [aux_sym_css_named_color_token27] = ACTIONS(31),
    [aux_sym_css_named_color_token28] = ACTIONS(31),
    [aux_sym_css_named_color_token29] = ACTIONS(31),
    [aux_sym_css_named_color_token30] = ACTIONS(31),
    [aux_sym_css_named_color_token31] = ACTIONS(31),
    [aux_sym_css_named_color_token32] = ACTIONS(31),
    [aux_sym_css_named_color_token33] = ACTIONS(31),
    [aux_sym_css_named_color_token34] = ACTIONS(31),
    [aux_sym_css_named_color_token35] = ACTIONS(31),
    [aux_sym_css_named_color_token36] = ACTIONS(31),
    [aux_sym_css_named_color_token37] = ACTIONS(31),
    [aux_sym_css_named_color_token38] = ACTIONS(31),
    [aux_sym_css_named_color_token39] = ACTIONS(31),
    [aux_sym_css_named_color_token40] = ACTIONS(31),
    [aux_sym_css_named_color_token41] = ACTIONS(31),
    [aux_sym_css_named_color_token42] = ACTIONS(31),
    [aux_sym_css_named_color_token43] = ACTIONS(31),
    [aux_sym_css_named_color_token44] = ACTIONS(31),
    [aux_sym_css_named_color_token45] = ACTIONS(31),
    [aux_sym_css_named_color_token46] = ACTIONS(31),
    [aux_sym_css_named_color_token47] = ACTIONS(31),
    [aux_sym_css_named_color_token48] = ACTIONS(31),
    [aux_sym_css_named_color_token49] = ACTIONS(31),
    [aux_sym_css_named_color_token50] = ACTIONS(31),
    [aux_sym_css_named_color_token51] = ACTIONS(31),
    [aux_sym_css_named_color_token52] = ACTIONS(33),
    [aux_sym_css_named_color_token53] = ACTIONS(31),
    [aux_sym_css_named_color_token54] = ACTIONS(31),
    [aux_sym_css_named_color_token55] = ACTIONS(33),
    [aux_sym_css_named_color_token56] = ACTIONS(31),
    [aux_sym_css_named_color_token57] = ACTIONS(31),
    [aux_sym_css_named_color_token58] = ACTIONS(31),
    [aux_sym_css_named_color_token59] = ACTIONS(31),
    [aux_sym_css_named_color_token60] = ACTIONS(31),
    [aux_sym_css_named_color_token61] = ACTIONS(31),
    [aux_sym_css_named_color_token62] = ACTIONS(31),
    [aux_sym_css_named_color_token63] = ACTIONS(31),
    [aux_sym_css_named_color_token64] = ACTIONS(33),
    [aux_sym_css_named_color_token65] = ACTIONS(31),
    [aux_sym_css_named_color_token66] = ACTIONS(31),
    [aux_sym_css_named_color_token67] = ACTIONS(31),
    [aux_sym_css_named_color_token68] = ACTIONS(31),
    [aux_sym_css_named_color_token69] = ACTIONS(31),
    [aux_sym_css_named_color_token70] = ACTIONS(31),
    [aux_sym_css_named_color_token71] = ACTIONS(31),
    [aux_sym_css_named_color_token72] = ACTIONS(31),
    [aux_sym_css_named_color_token73] = ACTIONS(31),
    [aux_sym_css_named_color_token74] = ACTIONS(31),
    [aux_sym_css_named_color_token75] = ACTIONS(31),
    [aux_sym_css_named_color_token76] = ACTIONS(31),
    [aux_sym_css_named_color_token77] = ACTIONS(31),
    [aux_sym_css_named_color_token78] = ACTIONS(31),
    [aux_sym_css_named_color_token79] = ACTIONS(31),
    [aux_sym_css_named_color_token80] = ACTIONS(31),
    [aux_sym_css_named_color_token81] = ACTIONS(31),
    [aux_sym_css_named_color_token82] = ACTIONS(31),
    [aux_sym_css_named_color_token83] = ACTIONS(33),
    [aux_sym_css_named_color_token84] = ACTIONS(31),
    [aux_sym_css_named_color_token85] = ACTIONS(31),
    [aux_sym_css_named_color_token86] = ACTIONS(31),
    [aux_sym_css_named_color_token87] = ACTIONS(31),
    [aux_sym_css_named_color_token88] = ACTIONS(31),
    [aux_sym_css_named_color_token89] = ACTIONS(31),
    [aux_sym_css_named_color_token90] = ACTIONS(31),
    [aux_sym_css_named_color_token91] = ACTIONS(31),
    [aux_sym_css_named_color_token92] = ACTIONS(31),
    [aux_sym_css_named_color_token93] = ACTIONS(31),
    [aux_sym_css_named_color_token94] = ACTIONS(31),
    [aux_sym_css_named_color_token95] = ACTIONS(31),
    [aux_sym_css_named_color_token96] = ACTIONS(31),
    [aux_sym_css_named_color_token97] = ACTIONS(31),
    [aux_sym_css_named_color_token98] = ACTIONS(31),
    [aux_sym_css_named_color_token99] = ACTIONS(31),
    [aux_sym_css_named_color_token100] = ACTIONS(31),
    [aux_sym_css_named_color_token101] = ACTIONS(31),
    [aux_sym_css_named_color_token102] = ACTIONS(31),
    [aux_sym_css_named_color_token103] = ACTIONS(31),
    [aux_sym_css_named_color_token104] = ACTIONS(33),
    [aux_sym_css_named_color_token105] = ACTIONS(31),
    [aux_sym_css_named_color_token106] = ACTIONS(33),
    [aux_sym_css_named_color_token107] = ACTIONS(31),
    [aux_sym_css_named_color_token108] = ACTIONS(31),
    [aux_sym_css_named_color_token109] = ACTIONS(31),
    [aux_sym_css_named_color_token110] = ACTIONS(31),
    [aux_sym_css_named_color_token111] = ACTIONS(31),
    [aux_sym_css_named_color_token112] = ACTIONS(31),
    [aux_sym_css_named_color_token113] = ACTIONS(31),
    [aux_sym_css_named_color_token114] = ACTIONS(31),
    [aux_sym_css_named_color_token115] = ACTIONS(31),
    [aux_sym_css_named_color_token116] = ACTIONS(31),
    [aux_sym_css_named_color_token117] = ACTIONS(31),
    [aux_sym_css_named_color_token118] = ACTIONS(31),
    [aux_sym_css_named_color_token119] = ACTIONS(31),
    [aux_sym_css_named_color_token120] = ACTIONS(31),
    [aux_sym_css_named_color_token121] = ACTIONS(31),
    [aux_sym_css_named_color_token122] = ACTIONS(31),
    [aux_sym_css_named_color_token123] = ACTIONS(31),
    [aux_sym_css_named_color_token124] = ACTIONS(31),
    [aux_sym_css_named_color_token125] = ACTIONS(31),
    [aux_sym_css_named_color_token126] = ACTIONS(31),
    [aux_sym_css_named_color_token127] = ACTIONS(31),
    [aux_sym_css_named_color_token128] = ACTIONS(31),
    [aux_sym_css_named_color_token129] = ACTIONS(31),
    [aux_sym_css_named_color_token130] = ACTIONS(31),
    [aux_sym_css_named_color_token131] = ACTIONS(31),
    [aux_sym_css_named_color_token132] = ACTIONS(31),
    [aux_sym_css_named_color_token133] = ACTIONS(31),
    [aux_sym_css_named_color_token134] = ACTIONS(31),
    [aux_sym_css_named_color_token135] = ACTIONS(31),
    [aux_sym_css_named_color_token136] = ACTIONS(31),
    [aux_sym_css_named_color_token137] = ACTIONS(31),
    [aux_sym_css_named_color_token138] = ACTIONS(31),
    [aux_sym_css_named_color_token139] = ACTIONS(31),
    [aux_sym_css_named_color_token140] = ACTIONS(31),
    [aux_sym_css_named_color_token141] = ACTIONS(31),
    [aux_sym_css_named_color_token142] = ACTIONS(31),
    [aux_sym_css_named_color_token143] = ACTIONS(31),
    [aux_sym_css_named_color_token144] = ACTIONS(31),
    [aux_sym_css_named_color_token145] = ACTIONS(33),
    [aux_sym_css_named_color_token146] = ACTIONS(31),
    [aux_sym_css_named_color_token147] = ACTIONS(33),
    [aux_sym_css_named_color_token148] = ACTIONS(31),
    [sym_css_keyword_transparent] = ACTIONS(41),
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
    [ts_builtin_sym_end] = ACTIONS(43),
    [aux_sym_source_file_token1] = ACTIONS(45),
    [aux_sym_source_file_token2] = ACTIONS(45),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(48),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(51),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(54),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(57),
    [aux_sym_css_function_hwb_token1] = ACTIONS(60),
    [aux_sym_css_function_lab_token1] = ACTIONS(63),
    [aux_sym_css_function_oklab_token1] = ACTIONS(66),
    [aux_sym_css_function_lch_token1] = ACTIONS(69),
    [aux_sym_css_function_oklch_token1] = ACTIONS(72),
    [aux_sym_css_function_color_token1] = ACTIONS(75),
    [sym__css_hex_color_6_digits] = ACTIONS(78),
    [sym__css_hex_color_8_digits] = ACTIONS(81),
    [sym__css_hex_color_3_digits] = ACTIONS(78),
    [sym__css_hex_color_4_digits] = ACTIONS(78),
    [aux_sym_css_named_color_token1] = ACTIONS(84),
    [aux_sym_css_named_color_token2] = ACTIONS(84),
    [aux_sym_css_named_color_token3] = ACTIONS(87),
    [aux_sym_css_named_color_token4] = ACTIONS(84),
    [aux_sym_css_named_color_token5] = ACTIONS(84),
    [aux_sym_css_named_color_token6] = ACTIONS(84),
    [aux_sym_css_named_color_token7] = ACTIONS(84),
    [aux_sym_css_named_color_token8] = ACTIONS(84),
    [aux_sym_css_named_color_token9] = ACTIONS(84),
    [aux_sym_css_named_color_token10] = ACTIONS(87),
    [aux_sym_css_named_color_token11] = ACTIONS(84),
    [aux_sym_css_named_color_token12] = ACTIONS(84),
    [aux_sym_css_named_color_token13] = ACTIONS(84),
    [aux_sym_css_named_color_token14] = ACTIONS(84),
    [aux_sym_css_named_color_token15] = ACTIONS(84),
    [aux_sym_css_named_color_token16] = ACTIONS(84),
    [aux_sym_css_named_color_token17] = ACTIONS(84),
    [aux_sym_css_named_color_token18] = ACTIONS(84),
    [aux_sym_css_named_color_token19] = ACTIONS(84),
    [aux_sym_css_named_color_token20] = ACTIONS(84),
    [aux_sym_css_named_color_token21] = ACTIONS(84),
    [aux_sym_css_named_color_token22] = ACTIONS(84),
    [aux_sym_css_named_color_token23] = ACTIONS(84),
    [aux_sym_css_named_color_token24] = ACTIONS(84),
    [aux_sym_css_named_color_token25] = ACTIONS(84),
    [aux_sym_css_named_color_token26] = ACTIONS(84),
    [aux_sym_css_named_color_token27] = ACTIONS(84),
    [aux_sym_css_named_color_token28] = ACTIONS(84),
    [aux_sym_css_named_color_token29] = ACTIONS(84),
    [aux_sym_css_named_color_token30] = ACTIONS(84),
    [aux_sym_css_named_color_token31] = ACTIONS(84),
    [aux_sym_css_named_color_token32] = ACTIONS(84),
    [aux_sym_css_named_color_token33] = ACTIONS(84),
    [aux_sym_css_named_color_token34] = ACTIONS(84),
    [aux_sym_css_named_color_token35] = ACTIONS(84),
    [aux_sym_css_named_color_token36] = ACTIONS(84),
    [aux_sym_css_named_color_token37] = ACTIONS(84),
    [aux_sym_css_named_color_token38] = ACTIONS(84),
    [aux_sym_css_named_color_token39] = ACTIONS(84),
    [aux_sym_css_named_color_token40] = ACTIONS(84),
    [aux_sym_css_named_color_token41] = ACTIONS(84),
    [aux_sym_css_named_color_token42] = ACTIONS(84),
    [aux_sym_css_named_color_token43] = ACTIONS(84),
    [aux_sym_css_named_color_token44] = ACTIONS(84),
    [aux_sym_css_named_color_token45] = ACTIONS(84),
    [aux_sym_css_named_color_token46] = ACTIONS(84),
    [aux_sym_css_named_color_token47] = ACTIONS(84),
    [aux_sym_css_named_color_token48] = ACTIONS(84),
    [aux_sym_css_named_color_token49] = ACTIONS(84),
    [aux_sym_css_named_color_token50] = ACTIONS(84),
    [aux_sym_css_named_color_token51] = ACTIONS(84),
    [aux_sym_css_named_color_token52] = ACTIONS(87),
    [aux_sym_css_named_color_token53] = ACTIONS(84),
    [aux_sym_css_named_color_token54] = ACTIONS(84),
    [aux_sym_css_named_color_token55] = ACTIONS(87),
    [aux_sym_css_named_color_token56] = ACTIONS(84),
    [aux_sym_css_named_color_token57] = ACTIONS(84),
    [aux_sym_css_named_color_token58] = ACTIONS(84),
    [aux_sym_css_named_color_token59] = ACTIONS(84),
    [aux_sym_css_named_color_token60] = ACTIONS(84),
    [aux_sym_css_named_color_token61] = ACTIONS(84),
    [aux_sym_css_named_color_token62] = ACTIONS(84),
    [aux_sym_css_named_color_token63] = ACTIONS(84),
    [aux_sym_css_named_color_token64] = ACTIONS(87),
    [aux_sym_css_named_color_token65] = ACTIONS(84),
    [aux_sym_css_named_color_token66] = ACTIONS(84),
    [aux_sym_css_named_color_token67] = ACTIONS(84),
    [aux_sym_css_named_color_token68] = ACTIONS(84),
    [aux_sym_css_named_color_token69] = ACTIONS(84),
    [aux_sym_css_named_color_token70] = ACTIONS(84),
    [aux_sym_css_named_color_token71] = ACTIONS(84),
    [aux_sym_css_named_color_token72] = ACTIONS(84),
    [aux_sym_css_named_color_token73] = ACTIONS(84),
    [aux_sym_css_named_color_token74] = ACTIONS(84),
    [aux_sym_css_named_color_token75] = ACTIONS(84),
    [aux_sym_css_named_color_token76] = ACTIONS(84),
    [aux_sym_css_named_color_token77] = ACTIONS(84),
    [aux_sym_css_named_color_token78] = ACTIONS(84),
    [aux_sym_css_named_color_token79] = ACTIONS(84),
    [aux_sym_css_named_color_token80] = ACTIONS(84),
    [aux_sym_css_named_color_token81] = ACTIONS(84),
    [aux_sym_css_named_color_token82] = ACTIONS(84),
    [aux_sym_css_named_color_token83] = ACTIONS(87),
    [aux_sym_css_named_color_token84] = ACTIONS(84),
    [aux_sym_css_named_color_token85] = ACTIONS(84),
    [aux_sym_css_named_color_token86] = ACTIONS(84),
    [aux_sym_css_named_color_token87] = ACTIONS(84),
    [aux_sym_css_named_color_token88] = ACTIONS(84),
    [aux_sym_css_named_color_token89] = ACTIONS(84),
    [aux_sym_css_named_color_token90] = ACTIONS(84),
    [aux_sym_css_named_color_token91] = ACTIONS(84),
    [aux_sym_css_named_color_token92] = ACTIONS(84),
    [aux_sym_css_named_color_token93] = ACTIONS(84),
    [aux_sym_css_named_color_token94] = ACTIONS(84),
    [aux_sym_css_named_color_token95] = ACTIONS(84),
    [aux_sym_css_named_color_token96] = ACTIONS(84),
    [aux_sym_css_named_color_token97] = ACTIONS(84),
    [aux_sym_css_named_color_token98] = ACTIONS(84),
    [aux_sym_css_named_color_token99] = ACTIONS(84),
    [aux_sym_css_named_color_token100] = ACTIONS(84),
    [aux_sym_css_named_color_token101] = ACTIONS(84),
    [aux_sym_css_named_color_token102] = ACTIONS(84),
    [aux_sym_css_named_color_token103] = ACTIONS(84),
    [aux_sym_css_named_color_token104] = ACTIONS(87),
    [aux_sym_css_named_color_token105] = ACTIONS(84),
    [aux_sym_css_named_color_token106] = ACTIONS(87),
    [aux_sym_css_named_color_token107] = ACTIONS(84),
    [aux_sym_css_named_color_token108] = ACTIONS(84),
    [aux_sym_css_named_color_token109] = ACTIONS(84),
    [aux_sym_css_named_color_token110] = ACTIONS(84),
    [aux_sym_css_named_color_token111] = ACTIONS(84),
    [aux_sym_css_named_color_token112] = ACTIONS(84),
    [aux_sym_css_named_color_token113] = ACTIONS(84),
    [aux_sym_css_named_color_token114] = ACTIONS(84),
    [aux_sym_css_named_color_token115] = ACTIONS(84),
    [aux_sym_css_named_color_token116] = ACTIONS(84),
    [aux_sym_css_named_color_token117] = ACTIONS(84),
    [aux_sym_css_named_color_token118] = ACTIONS(84),
    [aux_sym_css_named_color_token119] = ACTIONS(84),
    [aux_sym_css_named_color_token120] = ACTIONS(84),
    [aux_sym_css_named_color_token121] = ACTIONS(84),
    [aux_sym_css_named_color_token122] = ACTIONS(84),
    [aux_sym_css_named_color_token123] = ACTIONS(84),
    [aux_sym_css_named_color_token124] = ACTIONS(84),
    [aux_sym_css_named_color_token125] = ACTIONS(84),
    [aux_sym_css_named_color_token126] = ACTIONS(84),
    [aux_sym_css_named_color_token127] = ACTIONS(84),
    [aux_sym_css_named_color_token128] = ACTIONS(84),
    [aux_sym_css_named_color_token129] = ACTIONS(84),
    [aux_sym_css_named_color_token130] = ACTIONS(84),
    [aux_sym_css_named_color_token131] = ACTIONS(84),
    [aux_sym_css_named_color_token132] = ACTIONS(84),
    [aux_sym_css_named_color_token133] = ACTIONS(84),
    [aux_sym_css_named_color_token134] = ACTIONS(84),
    [aux_sym_css_named_color_token135] = ACTIONS(84),
    [aux_sym_css_named_color_token136] = ACTIONS(84),
    [aux_sym_css_named_color_token137] = ACTIONS(84),
    [aux_sym_css_named_color_token138] = ACTIONS(84),
    [aux_sym_css_named_color_token139] = ACTIONS(84),
    [aux_sym_css_named_color_token140] = ACTIONS(84),
    [aux_sym_css_named_color_token141] = ACTIONS(84),
    [aux_sym_css_named_color_token142] = ACTIONS(84),
    [aux_sym_css_named_color_token143] = ACTIONS(84),
    [aux_sym_css_named_color_token144] = ACTIONS(84),
    [aux_sym_css_named_color_token145] = ACTIONS(87),
    [aux_sym_css_named_color_token146] = ACTIONS(84),
    [aux_sym_css_named_color_token147] = ACTIONS(87),
    [aux_sym_css_named_color_token148] = ACTIONS(84),
    [sym_css_keyword_transparent] = ACTIONS(90),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [aux_sym_source_file_token1] = ACTIONS(95),
    [aux_sym_source_file_token2] = ACTIONS(95),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(95),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(93),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(95),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(93),
    [aux_sym_css_function_hwb_token1] = ACTIONS(93),
    [aux_sym_css_function_lab_token1] = ACTIONS(93),
    [aux_sym_css_function_oklab_token1] = ACTIONS(93),
    [aux_sym_css_function_lch_token1] = ACTIONS(93),
    [aux_sym_css_function_oklch_token1] = ACTIONS(93),
    [aux_sym_css_function_color_token1] = ACTIONS(93),
    [sym__css_hex_color_6_digits] = ACTIONS(95),
    [sym__css_hex_color_8_digits] = ACTIONS(93),
    [sym__css_hex_color_3_digits] = ACTIONS(95),
    [sym__css_hex_color_4_digits] = ACTIONS(95),
    [aux_sym_css_named_color_token1] = ACTIONS(93),
    [aux_sym_css_named_color_token2] = ACTIONS(93),
    [aux_sym_css_named_color_token3] = ACTIONS(95),
    [aux_sym_css_named_color_token4] = ACTIONS(93),
    [aux_sym_css_named_color_token5] = ACTIONS(93),
    [aux_sym_css_named_color_token6] = ACTIONS(93),
    [aux_sym_css_named_color_token7] = ACTIONS(93),
    [aux_sym_css_named_color_token8] = ACTIONS(93),
    [aux_sym_css_named_color_token9] = ACTIONS(93),
    [aux_sym_css_named_color_token10] = ACTIONS(95),
    [aux_sym_css_named_color_token11] = ACTIONS(93),
    [aux_sym_css_named_color_token12] = ACTIONS(93),
    [aux_sym_css_named_color_token13] = ACTIONS(93),
    [aux_sym_css_named_color_token14] = ACTIONS(93),
    [aux_sym_css_named_color_token15] = ACTIONS(93),
    [aux_sym_css_named_color_token16] = ACTIONS(93),
    [aux_sym_css_named_color_token17] = ACTIONS(93),
    [aux_sym_css_named_color_token18] = ACTIONS(93),
    [aux_sym_css_named_color_token19] = ACTIONS(93),
    [aux_sym_css_named_color_token20] = ACTIONS(93),
    [aux_sym_css_named_color_token21] = ACTIONS(93),
    [aux_sym_css_named_color_token22] = ACTIONS(93),
    [aux_sym_css_named_color_token23] = ACTIONS(93),
    [aux_sym_css_named_color_token24] = ACTIONS(93),
    [aux_sym_css_named_color_token25] = ACTIONS(93),
    [aux_sym_css_named_color_token26] = ACTIONS(93),
    [aux_sym_css_named_color_token27] = ACTIONS(93),
    [aux_sym_css_named_color_token28] = ACTIONS(93),
    [aux_sym_css_named_color_token29] = ACTIONS(93),
    [aux_sym_css_named_color_token30] = ACTIONS(93),
    [aux_sym_css_named_color_token31] = ACTIONS(93),
    [aux_sym_css_named_color_token32] = ACTIONS(93),
    [aux_sym_css_named_color_token33] = ACTIONS(93),
    [aux_sym_css_named_color_token34] = ACTIONS(93),
    [aux_sym_css_named_color_token35] = ACTIONS(93),
    [aux_sym_css_named_color_token36] = ACTIONS(93),
    [aux_sym_css_named_color_token37] = ACTIONS(93),
    [aux_sym_css_named_color_token38] = ACTIONS(93),
    [aux_sym_css_named_color_token39] = ACTIONS(93),
    [aux_sym_css_named_color_token40] = ACTIONS(93),
    [aux_sym_css_named_color_token41] = ACTIONS(93),
    [aux_sym_css_named_color_token42] = ACTIONS(93),
    [aux_sym_css_named_color_token43] = ACTIONS(93),
    [aux_sym_css_named_color_token44] = ACTIONS(93),
    [aux_sym_css_named_color_token45] = ACTIONS(93),
    [aux_sym_css_named_color_token46] = ACTIONS(93),
    [aux_sym_css_named_color_token47] = ACTIONS(93),
    [aux_sym_css_named_color_token48] = ACTIONS(93),
    [aux_sym_css_named_color_token49] = ACTIONS(93),
    [aux_sym_css_named_color_token50] = ACTIONS(93),
    [aux_sym_css_named_color_token51] = ACTIONS(93),
    [aux_sym_css_named_color_token52] = ACTIONS(95),
    [aux_sym_css_named_color_token53] = ACTIONS(93),
    [aux_sym_css_named_color_token54] = ACTIONS(93),
    [aux_sym_css_named_color_token55] = ACTIONS(95),
    [aux_sym_css_named_color_token56] = ACTIONS(93),
    [aux_sym_css_named_color_token57] = ACTIONS(93),
    [aux_sym_css_named_color_token58] = ACTIONS(93),
    [aux_sym_css_named_color_token59] = ACTIONS(93),
    [aux_sym_css_named_color_token60] = ACTIONS(93),
    [aux_sym_css_named_color_token61] = ACTIONS(93),
    [aux_sym_css_named_color_token62] = ACTIONS(93),
    [aux_sym_css_named_color_token63] = ACTIONS(93),
    [aux_sym_css_named_color_token64] = ACTIONS(95),
    [aux_sym_css_named_color_token65] = ACTIONS(93),
    [aux_sym_css_named_color_token66] = ACTIONS(93),
    [aux_sym_css_named_color_token67] = ACTIONS(93),
    [aux_sym_css_named_color_token68] = ACTIONS(93),
    [aux_sym_css_named_color_token69] = ACTIONS(93),
    [aux_sym_css_named_color_token70] = ACTIONS(93),
    [aux_sym_css_named_color_token71] = ACTIONS(93),
    [aux_sym_css_named_color_token72] = ACTIONS(93),
    [aux_sym_css_named_color_token73] = ACTIONS(93),
    [aux_sym_css_named_color_token74] = ACTIONS(93),
    [aux_sym_css_named_color_token75] = ACTIONS(93),
    [aux_sym_css_named_color_token76] = ACTIONS(93),
    [aux_sym_css_named_color_token77] = ACTIONS(93),
    [aux_sym_css_named_color_token78] = ACTIONS(93),
    [aux_sym_css_named_color_token79] = ACTIONS(93),
    [aux_sym_css_named_color_token80] = ACTIONS(93),
    [aux_sym_css_named_color_token81] = ACTIONS(93),
    [aux_sym_css_named_color_token82] = ACTIONS(93),
    [aux_sym_css_named_color_token83] = ACTIONS(95),
    [aux_sym_css_named_color_token84] = ACTIONS(93),
    [aux_sym_css_named_color_token85] = ACTIONS(93),
    [aux_sym_css_named_color_token86] = ACTIONS(93),
    [aux_sym_css_named_color_token87] = ACTIONS(93),
    [aux_sym_css_named_color_token88] = ACTIONS(93),
    [aux_sym_css_named_color_token89] = ACTIONS(93),
    [aux_sym_css_named_color_token90] = ACTIONS(93),
    [aux_sym_css_named_color_token91] = ACTIONS(93),
    [aux_sym_css_named_color_token92] = ACTIONS(93),
    [aux_sym_css_named_color_token93] = ACTIONS(93),
    [aux_sym_css_named_color_token94] = ACTIONS(93),
    [aux_sym_css_named_color_token95] = ACTIONS(93),
    [aux_sym_css_named_color_token96] = ACTIONS(93),
    [aux_sym_css_named_color_token97] = ACTIONS(93),
    [aux_sym_css_named_color_token98] = ACTIONS(93),
    [aux_sym_css_named_color_token99] = ACTIONS(93),
    [aux_sym_css_named_color_token100] = ACTIONS(93),
    [aux_sym_css_named_color_token101] = ACTIONS(93),
    [aux_sym_css_named_color_token102] = ACTIONS(93),
    [aux_sym_css_named_color_token103] = ACTIONS(93),
    [aux_sym_css_named_color_token104] = ACTIONS(95),
    [aux_sym_css_named_color_token105] = ACTIONS(93),
    [aux_sym_css_named_color_token106] = ACTIONS(95),
    [aux_sym_css_named_color_token107] = ACTIONS(93),
    [aux_sym_css_named_color_token108] = ACTIONS(93),
    [aux_sym_css_named_color_token109] = ACTIONS(93),
    [aux_sym_css_named_color_token110] = ACTIONS(93),
    [aux_sym_css_named_color_token111] = ACTIONS(93),
    [aux_sym_css_named_color_token112] = ACTIONS(93),
    [aux_sym_css_named_color_token113] = ACTIONS(93),
    [aux_sym_css_named_color_token114] = ACTIONS(93),
    [aux_sym_css_named_color_token115] = ACTIONS(93),
    [aux_sym_css_named_color_token116] = ACTIONS(93),
    [aux_sym_css_named_color_token117] = ACTIONS(93),
    [aux_sym_css_named_color_token118] = ACTIONS(93),
    [aux_sym_css_named_color_token119] = ACTIONS(93),
    [aux_sym_css_named_color_token120] = ACTIONS(93),
    [aux_sym_css_named_color_token121] = ACTIONS(93),
    [aux_sym_css_named_color_token122] = ACTIONS(93),
    [aux_sym_css_named_color_token123] = ACTIONS(93),
    [aux_sym_css_named_color_token124] = ACTIONS(93),
    [aux_sym_css_named_color_token125] = ACTIONS(93),
    [aux_sym_css_named_color_token126] = ACTIONS(93),
    [aux_sym_css_named_color_token127] = ACTIONS(93),
    [aux_sym_css_named_color_token128] = ACTIONS(93),
    [aux_sym_css_named_color_token129] = ACTIONS(93),
    [aux_sym_css_named_color_token130] = ACTIONS(93),
    [aux_sym_css_named_color_token131] = ACTIONS(93),
    [aux_sym_css_named_color_token132] = ACTIONS(93),
    [aux_sym_css_named_color_token133] = ACTIONS(93),
    [aux_sym_css_named_color_token134] = ACTIONS(93),
    [aux_sym_css_named_color_token135] = ACTIONS(93),
    [aux_sym_css_named_color_token136] = ACTIONS(93),
    [aux_sym_css_named_color_token137] = ACTIONS(93),
    [aux_sym_css_named_color_token138] = ACTIONS(93),
    [aux_sym_css_named_color_token139] = ACTIONS(93),
    [aux_sym_css_named_color_token140] = ACTIONS(93),
    [aux_sym_css_named_color_token141] = ACTIONS(93),
    [aux_sym_css_named_color_token142] = ACTIONS(93),
    [aux_sym_css_named_color_token143] = ACTIONS(93),
    [aux_sym_css_named_color_token144] = ACTIONS(93),
    [aux_sym_css_named_color_token145] = ACTIONS(95),
    [aux_sym_css_named_color_token146] = ACTIONS(93),
    [aux_sym_css_named_color_token147] = ACTIONS(95),
    [aux_sym_css_named_color_token148] = ACTIONS(93),
    [sym_css_keyword_transparent] = ACTIONS(93),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [aux_sym_source_file_token1] = ACTIONS(99),
    [aux_sym_source_file_token2] = ACTIONS(99),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(99),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(97),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(99),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(97),
    [aux_sym_css_function_hwb_token1] = ACTIONS(97),
    [aux_sym_css_function_lab_token1] = ACTIONS(97),
    [aux_sym_css_function_oklab_token1] = ACTIONS(97),
    [aux_sym_css_function_lch_token1] = ACTIONS(97),
    [aux_sym_css_function_oklch_token1] = ACTIONS(97),
    [aux_sym_css_function_color_token1] = ACTIONS(97),
    [sym__css_hex_color_6_digits] = ACTIONS(99),
    [sym__css_hex_color_8_digits] = ACTIONS(97),
    [sym__css_hex_color_3_digits] = ACTIONS(99),
    [sym__css_hex_color_4_digits] = ACTIONS(99),
    [aux_sym_css_named_color_token1] = ACTIONS(97),
    [aux_sym_css_named_color_token2] = ACTIONS(97),
    [aux_sym_css_named_color_token3] = ACTIONS(99),
    [aux_sym_css_named_color_token4] = ACTIONS(97),
    [aux_sym_css_named_color_token5] = ACTIONS(97),
    [aux_sym_css_named_color_token6] = ACTIONS(97),
    [aux_sym_css_named_color_token7] = ACTIONS(97),
    [aux_sym_css_named_color_token8] = ACTIONS(97),
    [aux_sym_css_named_color_token9] = ACTIONS(97),
    [aux_sym_css_named_color_token10] = ACTIONS(99),
    [aux_sym_css_named_color_token11] = ACTIONS(97),
    [aux_sym_css_named_color_token12] = ACTIONS(97),
    [aux_sym_css_named_color_token13] = ACTIONS(97),
    [aux_sym_css_named_color_token14] = ACTIONS(97),
    [aux_sym_css_named_color_token15] = ACTIONS(97),
    [aux_sym_css_named_color_token16] = ACTIONS(97),
    [aux_sym_css_named_color_token17] = ACTIONS(97),
    [aux_sym_css_named_color_token18] = ACTIONS(97),
    [aux_sym_css_named_color_token19] = ACTIONS(97),
    [aux_sym_css_named_color_token20] = ACTIONS(97),
    [aux_sym_css_named_color_token21] = ACTIONS(97),
    [aux_sym_css_named_color_token22] = ACTIONS(97),
    [aux_sym_css_named_color_token23] = ACTIONS(97),
    [aux_sym_css_named_color_token24] = ACTIONS(97),
    [aux_sym_css_named_color_token25] = ACTIONS(97),
    [aux_sym_css_named_color_token26] = ACTIONS(97),
    [aux_sym_css_named_color_token27] = ACTIONS(97),
    [aux_sym_css_named_color_token28] = ACTIONS(97),
    [aux_sym_css_named_color_token29] = ACTIONS(97),
    [aux_sym_css_named_color_token30] = ACTIONS(97),
    [aux_sym_css_named_color_token31] = ACTIONS(97),
    [aux_sym_css_named_color_token32] = ACTIONS(97),
    [aux_sym_css_named_color_token33] = ACTIONS(97),
    [aux_sym_css_named_color_token34] = ACTIONS(97),
    [aux_sym_css_named_color_token35] = ACTIONS(97),
    [aux_sym_css_named_color_token36] = ACTIONS(97),
    [aux_sym_css_named_color_token37] = ACTIONS(97),
    [aux_sym_css_named_color_token38] = ACTIONS(97),
    [aux_sym_css_named_color_token39] = ACTIONS(97),
    [aux_sym_css_named_color_token40] = ACTIONS(97),
    [aux_sym_css_named_color_token41] = ACTIONS(97),
    [aux_sym_css_named_color_token42] = ACTIONS(97),
    [aux_sym_css_named_color_token43] = ACTIONS(97),
    [aux_sym_css_named_color_token44] = ACTIONS(97),
    [aux_sym_css_named_color_token45] = ACTIONS(97),
    [aux_sym_css_named_color_token46] = ACTIONS(97),
    [aux_sym_css_named_color_token47] = ACTIONS(97),
    [aux_sym_css_named_color_token48] = ACTIONS(97),
    [aux_sym_css_named_color_token49] = ACTIONS(97),
    [aux_sym_css_named_color_token50] = ACTIONS(97),
    [aux_sym_css_named_color_token51] = ACTIONS(97),
    [aux_sym_css_named_color_token52] = ACTIONS(99),
    [aux_sym_css_named_color_token53] = ACTIONS(97),
    [aux_sym_css_named_color_token54] = ACTIONS(97),
    [aux_sym_css_named_color_token55] = ACTIONS(99),
    [aux_sym_css_named_color_token56] = ACTIONS(97),
    [aux_sym_css_named_color_token57] = ACTIONS(97),
    [aux_sym_css_named_color_token58] = ACTIONS(97),
    [aux_sym_css_named_color_token59] = ACTIONS(97),
    [aux_sym_css_named_color_token60] = ACTIONS(97),
    [aux_sym_css_named_color_token61] = ACTIONS(97),
    [aux_sym_css_named_color_token62] = ACTIONS(97),
    [aux_sym_css_named_color_token63] = ACTIONS(97),
    [aux_sym_css_named_color_token64] = ACTIONS(99),
    [aux_sym_css_named_color_token65] = ACTIONS(97),
    [aux_sym_css_named_color_token66] = ACTIONS(97),
    [aux_sym_css_named_color_token67] = ACTIONS(97),
    [aux_sym_css_named_color_token68] = ACTIONS(97),
    [aux_sym_css_named_color_token69] = ACTIONS(97),
    [aux_sym_css_named_color_token70] = ACTIONS(97),
    [aux_sym_css_named_color_token71] = ACTIONS(97),
    [aux_sym_css_named_color_token72] = ACTIONS(97),
    [aux_sym_css_named_color_token73] = ACTIONS(97),
    [aux_sym_css_named_color_token74] = ACTIONS(97),
    [aux_sym_css_named_color_token75] = ACTIONS(97),
    [aux_sym_css_named_color_token76] = ACTIONS(97),
    [aux_sym_css_named_color_token77] = ACTIONS(97),
    [aux_sym_css_named_color_token78] = ACTIONS(97),
    [aux_sym_css_named_color_token79] = ACTIONS(97),
    [aux_sym_css_named_color_token80] = ACTIONS(97),
    [aux_sym_css_named_color_token81] = ACTIONS(97),
    [aux_sym_css_named_color_token82] = ACTIONS(97),
    [aux_sym_css_named_color_token83] = ACTIONS(99),
    [aux_sym_css_named_color_token84] = ACTIONS(97),
    [aux_sym_css_named_color_token85] = ACTIONS(97),
    [aux_sym_css_named_color_token86] = ACTIONS(97),
    [aux_sym_css_named_color_token87] = ACTIONS(97),
    [aux_sym_css_named_color_token88] = ACTIONS(97),
    [aux_sym_css_named_color_token89] = ACTIONS(97),
    [aux_sym_css_named_color_token90] = ACTIONS(97),
    [aux_sym_css_named_color_token91] = ACTIONS(97),
    [aux_sym_css_named_color_token92] = ACTIONS(97),
    [aux_sym_css_named_color_token93] = ACTIONS(97),
    [aux_sym_css_named_color_token94] = ACTIONS(97),
    [aux_sym_css_named_color_token95] = ACTIONS(97),
    [aux_sym_css_named_color_token96] = ACTIONS(97),
    [aux_sym_css_named_color_token97] = ACTIONS(97),
    [aux_sym_css_named_color_token98] = ACTIONS(97),
    [aux_sym_css_named_color_token99] = ACTIONS(97),
    [aux_sym_css_named_color_token100] = ACTIONS(97),
    [aux_sym_css_named_color_token101] = ACTIONS(97),
    [aux_sym_css_named_color_token102] = ACTIONS(97),
    [aux_sym_css_named_color_token103] = ACTIONS(97),
    [aux_sym_css_named_color_token104] = ACTIONS(99),
    [aux_sym_css_named_color_token105] = ACTIONS(97),
    [aux_sym_css_named_color_token106] = ACTIONS(99),
    [aux_sym_css_named_color_token107] = ACTIONS(97),
    [aux_sym_css_named_color_token108] = ACTIONS(97),
    [aux_sym_css_named_color_token109] = ACTIONS(97),
    [aux_sym_css_named_color_token110] = ACTIONS(97),
    [aux_sym_css_named_color_token111] = ACTIONS(97),
    [aux_sym_css_named_color_token112] = ACTIONS(97),
    [aux_sym_css_named_color_token113] = ACTIONS(97),
    [aux_sym_css_named_color_token114] = ACTIONS(97),
    [aux_sym_css_named_color_token115] = ACTIONS(97),
    [aux_sym_css_named_color_token116] = ACTIONS(97),
    [aux_sym_css_named_color_token117] = ACTIONS(97),
    [aux_sym_css_named_color_token118] = ACTIONS(97),
    [aux_sym_css_named_color_token119] = ACTIONS(97),
    [aux_sym_css_named_color_token120] = ACTIONS(97),
    [aux_sym_css_named_color_token121] = ACTIONS(97),
    [aux_sym_css_named_color_token122] = ACTIONS(97),
    [aux_sym_css_named_color_token123] = ACTIONS(97),
    [aux_sym_css_named_color_token124] = ACTIONS(97),
    [aux_sym_css_named_color_token125] = ACTIONS(97),
    [aux_sym_css_named_color_token126] = ACTIONS(97),
    [aux_sym_css_named_color_token127] = ACTIONS(97),
    [aux_sym_css_named_color_token128] = ACTIONS(97),
    [aux_sym_css_named_color_token129] = ACTIONS(97),
    [aux_sym_css_named_color_token130] = ACTIONS(97),
    [aux_sym_css_named_color_token131] = ACTIONS(97),
    [aux_sym_css_named_color_token132] = ACTIONS(97),
    [aux_sym_css_named_color_token133] = ACTIONS(97),
    [aux_sym_css_named_color_token134] = ACTIONS(97),
    [aux_sym_css_named_color_token135] = ACTIONS(97),
    [aux_sym_css_named_color_token136] = ACTIONS(97),
    [aux_sym_css_named_color_token137] = ACTIONS(97),
    [aux_sym_css_named_color_token138] = ACTIONS(97),
    [aux_sym_css_named_color_token139] = ACTIONS(97),
    [aux_sym_css_named_color_token140] = ACTIONS(97),
    [aux_sym_css_named_color_token141] = ACTIONS(97),
    [aux_sym_css_named_color_token142] = ACTIONS(97),
    [aux_sym_css_named_color_token143] = ACTIONS(97),
    [aux_sym_css_named_color_token144] = ACTIONS(97),
    [aux_sym_css_named_color_token145] = ACTIONS(99),
    [aux_sym_css_named_color_token146] = ACTIONS(97),
    [aux_sym_css_named_color_token147] = ACTIONS(99),
    [aux_sym_css_named_color_token148] = ACTIONS(97),
    [sym_css_keyword_transparent] = ACTIONS(97),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [aux_sym_source_file_token1] = ACTIONS(95),
    [aux_sym_source_file_token2] = ACTIONS(95),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(95),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(93),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(95),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(93),
    [aux_sym_css_function_hwb_token1] = ACTIONS(93),
    [aux_sym_css_function_lab_token1] = ACTIONS(93),
    [aux_sym_css_function_oklab_token1] = ACTIONS(93),
    [aux_sym_css_function_lch_token1] = ACTIONS(93),
    [aux_sym_css_function_oklch_token1] = ACTIONS(93),
    [aux_sym_css_function_color_token1] = ACTIONS(93),
    [sym__css_hex_color_6_digits] = ACTIONS(95),
    [sym__css_hex_color_8_digits] = ACTIONS(93),
    [sym__css_hex_color_3_digits] = ACTIONS(95),
    [sym__css_hex_color_4_digits] = ACTIONS(95),
    [aux_sym_css_named_color_token1] = ACTIONS(93),
    [aux_sym_css_named_color_token2] = ACTIONS(93),
    [aux_sym_css_named_color_token3] = ACTIONS(95),
    [aux_sym_css_named_color_token4] = ACTIONS(93),
    [aux_sym_css_named_color_token5] = ACTIONS(93),
    [aux_sym_css_named_color_token6] = ACTIONS(93),
    [aux_sym_css_named_color_token7] = ACTIONS(93),
    [aux_sym_css_named_color_token8] = ACTIONS(93),
    [aux_sym_css_named_color_token9] = ACTIONS(93),
    [aux_sym_css_named_color_token10] = ACTIONS(95),
    [aux_sym_css_named_color_token11] = ACTIONS(93),
    [aux_sym_css_named_color_token12] = ACTIONS(93),
    [aux_sym_css_named_color_token13] = ACTIONS(93),
    [aux_sym_css_named_color_token14] = ACTIONS(93),
    [aux_sym_css_named_color_token15] = ACTIONS(93),
    [aux_sym_css_named_color_token16] = ACTIONS(93),
    [aux_sym_css_named_color_token17] = ACTIONS(93),
    [aux_sym_css_named_color_token18] = ACTIONS(93),
    [aux_sym_css_named_color_token19] = ACTIONS(93),
    [aux_sym_css_named_color_token20] = ACTIONS(93),
    [aux_sym_css_named_color_token21] = ACTIONS(93),
    [aux_sym_css_named_color_token22] = ACTIONS(93),
    [aux_sym_css_named_color_token23] = ACTIONS(93),
    [aux_sym_css_named_color_token24] = ACTIONS(93),
    [aux_sym_css_named_color_token25] = ACTIONS(93),
    [aux_sym_css_named_color_token26] = ACTIONS(93),
    [aux_sym_css_named_color_token27] = ACTIONS(93),
    [aux_sym_css_named_color_token28] = ACTIONS(93),
    [aux_sym_css_named_color_token29] = ACTIONS(93),
    [aux_sym_css_named_color_token30] = ACTIONS(93),
    [aux_sym_css_named_color_token31] = ACTIONS(93),
    [aux_sym_css_named_color_token32] = ACTIONS(93),
    [aux_sym_css_named_color_token33] = ACTIONS(93),
    [aux_sym_css_named_color_token34] = ACTIONS(93),
    [aux_sym_css_named_color_token35] = ACTIONS(93),
    [aux_sym_css_named_color_token36] = ACTIONS(93),
    [aux_sym_css_named_color_token37] = ACTIONS(93),
    [aux_sym_css_named_color_token38] = ACTIONS(93),
    [aux_sym_css_named_color_token39] = ACTIONS(93),
    [aux_sym_css_named_color_token40] = ACTIONS(93),
    [aux_sym_css_named_color_token41] = ACTIONS(93),
    [aux_sym_css_named_color_token42] = ACTIONS(93),
    [aux_sym_css_named_color_token43] = ACTIONS(93),
    [aux_sym_css_named_color_token44] = ACTIONS(93),
    [aux_sym_css_named_color_token45] = ACTIONS(93),
    [aux_sym_css_named_color_token46] = ACTIONS(93),
    [aux_sym_css_named_color_token47] = ACTIONS(93),
    [aux_sym_css_named_color_token48] = ACTIONS(93),
    [aux_sym_css_named_color_token49] = ACTIONS(93),
    [aux_sym_css_named_color_token50] = ACTIONS(93),
    [aux_sym_css_named_color_token51] = ACTIONS(93),
    [aux_sym_css_named_color_token52] = ACTIONS(95),
    [aux_sym_css_named_color_token53] = ACTIONS(93),
    [aux_sym_css_named_color_token54] = ACTIONS(93),
    [aux_sym_css_named_color_token55] = ACTIONS(95),
    [aux_sym_css_named_color_token56] = ACTIONS(93),
    [aux_sym_css_named_color_token57] = ACTIONS(93),
    [aux_sym_css_named_color_token58] = ACTIONS(93),
    [aux_sym_css_named_color_token59] = ACTIONS(93),
    [aux_sym_css_named_color_token60] = ACTIONS(93),
    [aux_sym_css_named_color_token61] = ACTIONS(93),
    [aux_sym_css_named_color_token62] = ACTIONS(93),
    [aux_sym_css_named_color_token63] = ACTIONS(93),
    [aux_sym_css_named_color_token64] = ACTIONS(95),
    [aux_sym_css_named_color_token65] = ACTIONS(93),
    [aux_sym_css_named_color_token66] = ACTIONS(93),
    [aux_sym_css_named_color_token67] = ACTIONS(93),
    [aux_sym_css_named_color_token68] = ACTIONS(93),
    [aux_sym_css_named_color_token69] = ACTIONS(93),
    [aux_sym_css_named_color_token70] = ACTIONS(93),
    [aux_sym_css_named_color_token71] = ACTIONS(93),
    [aux_sym_css_named_color_token72] = ACTIONS(93),
    [aux_sym_css_named_color_token73] = ACTIONS(93),
    [aux_sym_css_named_color_token74] = ACTIONS(93),
    [aux_sym_css_named_color_token75] = ACTIONS(93),
    [aux_sym_css_named_color_token76] = ACTIONS(93),
    [aux_sym_css_named_color_token77] = ACTIONS(93),
    [aux_sym_css_named_color_token78] = ACTIONS(93),
    [aux_sym_css_named_color_token79] = ACTIONS(93),
    [aux_sym_css_named_color_token80] = ACTIONS(93),
    [aux_sym_css_named_color_token81] = ACTIONS(93),
    [aux_sym_css_named_color_token82] = ACTIONS(93),
    [aux_sym_css_named_color_token83] = ACTIONS(95),
    [aux_sym_css_named_color_token84] = ACTIONS(93),
    [aux_sym_css_named_color_token85] = ACTIONS(93),
    [aux_sym_css_named_color_token86] = ACTIONS(93),
    [aux_sym_css_named_color_token87] = ACTIONS(93),
    [aux_sym_css_named_color_token88] = ACTIONS(93),
    [aux_sym_css_named_color_token89] = ACTIONS(93),
    [aux_sym_css_named_color_token90] = ACTIONS(93),
    [aux_sym_css_named_color_token91] = ACTIONS(93),
    [aux_sym_css_named_color_token92] = ACTIONS(93),
    [aux_sym_css_named_color_token93] = ACTIONS(93),
    [aux_sym_css_named_color_token94] = ACTIONS(93),
    [aux_sym_css_named_color_token95] = ACTIONS(93),
    [aux_sym_css_named_color_token96] = ACTIONS(93),
    [aux_sym_css_named_color_token97] = ACTIONS(93),
    [aux_sym_css_named_color_token98] = ACTIONS(93),
    [aux_sym_css_named_color_token99] = ACTIONS(93),
    [aux_sym_css_named_color_token100] = ACTIONS(93),
    [aux_sym_css_named_color_token101] = ACTIONS(93),
    [aux_sym_css_named_color_token102] = ACTIONS(93),
    [aux_sym_css_named_color_token103] = ACTIONS(93),
    [aux_sym_css_named_color_token104] = ACTIONS(95),
    [aux_sym_css_named_color_token105] = ACTIONS(93),
    [aux_sym_css_named_color_token106] = ACTIONS(95),
    [aux_sym_css_named_color_token107] = ACTIONS(93),
    [aux_sym_css_named_color_token108] = ACTIONS(93),
    [aux_sym_css_named_color_token109] = ACTIONS(93),
    [aux_sym_css_named_color_token110] = ACTIONS(93),
    [aux_sym_css_named_color_token111] = ACTIONS(93),
    [aux_sym_css_named_color_token112] = ACTIONS(93),
    [aux_sym_css_named_color_token113] = ACTIONS(93),
    [aux_sym_css_named_color_token114] = ACTIONS(93),
    [aux_sym_css_named_color_token115] = ACTIONS(93),
    [aux_sym_css_named_color_token116] = ACTIONS(93),
    [aux_sym_css_named_color_token117] = ACTIONS(93),
    [aux_sym_css_named_color_token118] = ACTIONS(93),
    [aux_sym_css_named_color_token119] = ACTIONS(93),
    [aux_sym_css_named_color_token120] = ACTIONS(93),
    [aux_sym_css_named_color_token121] = ACTIONS(93),
    [aux_sym_css_named_color_token122] = ACTIONS(93),
    [aux_sym_css_named_color_token123] = ACTIONS(93),
    [aux_sym_css_named_color_token124] = ACTIONS(93),
    [aux_sym_css_named_color_token125] = ACTIONS(93),
    [aux_sym_css_named_color_token126] = ACTIONS(93),
    [aux_sym_css_named_color_token127] = ACTIONS(93),
    [aux_sym_css_named_color_token128] = ACTIONS(93),
    [aux_sym_css_named_color_token129] = ACTIONS(93),
    [aux_sym_css_named_color_token130] = ACTIONS(93),
    [aux_sym_css_named_color_token131] = ACTIONS(93),
    [aux_sym_css_named_color_token132] = ACTIONS(93),
    [aux_sym_css_named_color_token133] = ACTIONS(93),
    [aux_sym_css_named_color_token134] = ACTIONS(93),
    [aux_sym_css_named_color_token135] = ACTIONS(93),
    [aux_sym_css_named_color_token136] = ACTIONS(93),
    [aux_sym_css_named_color_token137] = ACTIONS(93),
    [aux_sym_css_named_color_token138] = ACTIONS(93),
    [aux_sym_css_named_color_token139] = ACTIONS(93),
    [aux_sym_css_named_color_token140] = ACTIONS(93),
    [aux_sym_css_named_color_token141] = ACTIONS(93),
    [aux_sym_css_named_color_token142] = ACTIONS(93),
    [aux_sym_css_named_color_token143] = ACTIONS(93),
    [aux_sym_css_named_color_token144] = ACTIONS(93),
    [aux_sym_css_named_color_token145] = ACTIONS(95),
    [aux_sym_css_named_color_token146] = ACTIONS(93),
    [aux_sym_css_named_color_token147] = ACTIONS(95),
    [aux_sym_css_named_color_token148] = ACTIONS(93),
    [sym_css_keyword_transparent] = ACTIONS(93),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [aux_sym_source_file_token1] = ACTIONS(103),
    [aux_sym_source_file_token2] = ACTIONS(103),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(103),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(101),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(103),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(101),
    [aux_sym_css_function_hwb_token1] = ACTIONS(101),
    [aux_sym_css_function_lab_token1] = ACTIONS(101),
    [aux_sym_css_function_oklab_token1] = ACTIONS(101),
    [aux_sym_css_function_lch_token1] = ACTIONS(101),
    [aux_sym_css_function_oklch_token1] = ACTIONS(101),
    [aux_sym_css_function_color_token1] = ACTIONS(101),
    [sym__css_hex_color_6_digits] = ACTIONS(103),
    [sym__css_hex_color_8_digits] = ACTIONS(101),
    [sym__css_hex_color_3_digits] = ACTIONS(103),
    [sym__css_hex_color_4_digits] = ACTIONS(103),
    [aux_sym_css_named_color_token1] = ACTIONS(101),
    [aux_sym_css_named_color_token2] = ACTIONS(101),
    [aux_sym_css_named_color_token3] = ACTIONS(103),
    [aux_sym_css_named_color_token4] = ACTIONS(101),
    [aux_sym_css_named_color_token5] = ACTIONS(101),
    [aux_sym_css_named_color_token6] = ACTIONS(101),
    [aux_sym_css_named_color_token7] = ACTIONS(101),
    [aux_sym_css_named_color_token8] = ACTIONS(101),
    [aux_sym_css_named_color_token9] = ACTIONS(101),
    [aux_sym_css_named_color_token10] = ACTIONS(103),
    [aux_sym_css_named_color_token11] = ACTIONS(101),
    [aux_sym_css_named_color_token12] = ACTIONS(101),
    [aux_sym_css_named_color_token13] = ACTIONS(101),
    [aux_sym_css_named_color_token14] = ACTIONS(101),
    [aux_sym_css_named_color_token15] = ACTIONS(101),
    [aux_sym_css_named_color_token16] = ACTIONS(101),
    [aux_sym_css_named_color_token17] = ACTIONS(101),
    [aux_sym_css_named_color_token18] = ACTIONS(101),
    [aux_sym_css_named_color_token19] = ACTIONS(101),
    [aux_sym_css_named_color_token20] = ACTIONS(101),
    [aux_sym_css_named_color_token21] = ACTIONS(101),
    [aux_sym_css_named_color_token22] = ACTIONS(101),
    [aux_sym_css_named_color_token23] = ACTIONS(101),
    [aux_sym_css_named_color_token24] = ACTIONS(101),
    [aux_sym_css_named_color_token25] = ACTIONS(101),
    [aux_sym_css_named_color_token26] = ACTIONS(101),
    [aux_sym_css_named_color_token27] = ACTIONS(101),
    [aux_sym_css_named_color_token28] = ACTIONS(101),
    [aux_sym_css_named_color_token29] = ACTIONS(101),
    [aux_sym_css_named_color_token30] = ACTIONS(101),
    [aux_sym_css_named_color_token31] = ACTIONS(101),
    [aux_sym_css_named_color_token32] = ACTIONS(101),
    [aux_sym_css_named_color_token33] = ACTIONS(101),
    [aux_sym_css_named_color_token34] = ACTIONS(101),
    [aux_sym_css_named_color_token35] = ACTIONS(101),
    [aux_sym_css_named_color_token36] = ACTIONS(101),
    [aux_sym_css_named_color_token37] = ACTIONS(101),
    [aux_sym_css_named_color_token38] = ACTIONS(101),
    [aux_sym_css_named_color_token39] = ACTIONS(101),
    [aux_sym_css_named_color_token40] = ACTIONS(101),
    [aux_sym_css_named_color_token41] = ACTIONS(101),
    [aux_sym_css_named_color_token42] = ACTIONS(101),
    [aux_sym_css_named_color_token43] = ACTIONS(101),
    [aux_sym_css_named_color_token44] = ACTIONS(101),
    [aux_sym_css_named_color_token45] = ACTIONS(101),
    [aux_sym_css_named_color_token46] = ACTIONS(101),
    [aux_sym_css_named_color_token47] = ACTIONS(101),
    [aux_sym_css_named_color_token48] = ACTIONS(101),
    [aux_sym_css_named_color_token49] = ACTIONS(101),
    [aux_sym_css_named_color_token50] = ACTIONS(101),
    [aux_sym_css_named_color_token51] = ACTIONS(101),
    [aux_sym_css_named_color_token52] = ACTIONS(103),
    [aux_sym_css_named_color_token53] = ACTIONS(101),
    [aux_sym_css_named_color_token54] = ACTIONS(101),
    [aux_sym_css_named_color_token55] = ACTIONS(103),
    [aux_sym_css_named_color_token56] = ACTIONS(101),
    [aux_sym_css_named_color_token57] = ACTIONS(101),
    [aux_sym_css_named_color_token58] = ACTIONS(101),
    [aux_sym_css_named_color_token59] = ACTIONS(101),
    [aux_sym_css_named_color_token60] = ACTIONS(101),
    [aux_sym_css_named_color_token61] = ACTIONS(101),
    [aux_sym_css_named_color_token62] = ACTIONS(101),
    [aux_sym_css_named_color_token63] = ACTIONS(101),
    [aux_sym_css_named_color_token64] = ACTIONS(103),
    [aux_sym_css_named_color_token65] = ACTIONS(101),
    [aux_sym_css_named_color_token66] = ACTIONS(101),
    [aux_sym_css_named_color_token67] = ACTIONS(101),
    [aux_sym_css_named_color_token68] = ACTIONS(101),
    [aux_sym_css_named_color_token69] = ACTIONS(101),
    [aux_sym_css_named_color_token70] = ACTIONS(101),
    [aux_sym_css_named_color_token71] = ACTIONS(101),
    [aux_sym_css_named_color_token72] = ACTIONS(101),
    [aux_sym_css_named_color_token73] = ACTIONS(101),
    [aux_sym_css_named_color_token74] = ACTIONS(101),
    [aux_sym_css_named_color_token75] = ACTIONS(101),
    [aux_sym_css_named_color_token76] = ACTIONS(101),
    [aux_sym_css_named_color_token77] = ACTIONS(101),
    [aux_sym_css_named_color_token78] = ACTIONS(101),
    [aux_sym_css_named_color_token79] = ACTIONS(101),
    [aux_sym_css_named_color_token80] = ACTIONS(101),
    [aux_sym_css_named_color_token81] = ACTIONS(101),
    [aux_sym_css_named_color_token82] = ACTIONS(101),
    [aux_sym_css_named_color_token83] = ACTIONS(103),
    [aux_sym_css_named_color_token84] = ACTIONS(101),
    [aux_sym_css_named_color_token85] = ACTIONS(101),
    [aux_sym_css_named_color_token86] = ACTIONS(101),
    [aux_sym_css_named_color_token87] = ACTIONS(101),
    [aux_sym_css_named_color_token88] = ACTIONS(101),
    [aux_sym_css_named_color_token89] = ACTIONS(101),
    [aux_sym_css_named_color_token90] = ACTIONS(101),
    [aux_sym_css_named_color_token91] = ACTIONS(101),
    [aux_sym_css_named_color_token92] = ACTIONS(101),
    [aux_sym_css_named_color_token93] = ACTIONS(101),
    [aux_sym_css_named_color_token94] = ACTIONS(101),
    [aux_sym_css_named_color_token95] = ACTIONS(101),
    [aux_sym_css_named_color_token96] = ACTIONS(101),
    [aux_sym_css_named_color_token97] = ACTIONS(101),
    [aux_sym_css_named_color_token98] = ACTIONS(101),
    [aux_sym_css_named_color_token99] = ACTIONS(101),
    [aux_sym_css_named_color_token100] = ACTIONS(101),
    [aux_sym_css_named_color_token101] = ACTIONS(101),
    [aux_sym_css_named_color_token102] = ACTIONS(101),
    [aux_sym_css_named_color_token103] = ACTIONS(101),
    [aux_sym_css_named_color_token104] = ACTIONS(103),
    [aux_sym_css_named_color_token105] = ACTIONS(101),
    [aux_sym_css_named_color_token106] = ACTIONS(103),
    [aux_sym_css_named_color_token107] = ACTIONS(101),
    [aux_sym_css_named_color_token108] = ACTIONS(101),
    [aux_sym_css_named_color_token109] = ACTIONS(101),
    [aux_sym_css_named_color_token110] = ACTIONS(101),
    [aux_sym_css_named_color_token111] = ACTIONS(101),
    [aux_sym_css_named_color_token112] = ACTIONS(101),
    [aux_sym_css_named_color_token113] = ACTIONS(101),
    [aux_sym_css_named_color_token114] = ACTIONS(101),
    [aux_sym_css_named_color_token115] = ACTIONS(101),
    [aux_sym_css_named_color_token116] = ACTIONS(101),
    [aux_sym_css_named_color_token117] = ACTIONS(101),
    [aux_sym_css_named_color_token118] = ACTIONS(101),
    [aux_sym_css_named_color_token119] = ACTIONS(101),
    [aux_sym_css_named_color_token120] = ACTIONS(101),
    [aux_sym_css_named_color_token121] = ACTIONS(101),
    [aux_sym_css_named_color_token122] = ACTIONS(101),
    [aux_sym_css_named_color_token123] = ACTIONS(101),
    [aux_sym_css_named_color_token124] = ACTIONS(101),
    [aux_sym_css_named_color_token125] = ACTIONS(101),
    [aux_sym_css_named_color_token126] = ACTIONS(101),
    [aux_sym_css_named_color_token127] = ACTIONS(101),
    [aux_sym_css_named_color_token128] = ACTIONS(101),
    [aux_sym_css_named_color_token129] = ACTIONS(101),
    [aux_sym_css_named_color_token130] = ACTIONS(101),
    [aux_sym_css_named_color_token131] = ACTIONS(101),
    [aux_sym_css_named_color_token132] = ACTIONS(101),
    [aux_sym_css_named_color_token133] = ACTIONS(101),
    [aux_sym_css_named_color_token134] = ACTIONS(101),
    [aux_sym_css_named_color_token135] = ACTIONS(101),
    [aux_sym_css_named_color_token136] = ACTIONS(101),
    [aux_sym_css_named_color_token137] = ACTIONS(101),
    [aux_sym_css_named_color_token138] = ACTIONS(101),
    [aux_sym_css_named_color_token139] = ACTIONS(101),
    [aux_sym_css_named_color_token140] = ACTIONS(101),
    [aux_sym_css_named_color_token141] = ACTIONS(101),
    [aux_sym_css_named_color_token142] = ACTIONS(101),
    [aux_sym_css_named_color_token143] = ACTIONS(101),
    [aux_sym_css_named_color_token144] = ACTIONS(101),
    [aux_sym_css_named_color_token145] = ACTIONS(103),
    [aux_sym_css_named_color_token146] = ACTIONS(101),
    [aux_sym_css_named_color_token147] = ACTIONS(103),
    [aux_sym_css_named_color_token148] = ACTIONS(101),
    [sym_css_keyword_transparent] = ACTIONS(101),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [aux_sym_source_file_token1] = ACTIONS(107),
    [aux_sym_source_file_token2] = ACTIONS(107),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(107),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(105),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(107),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(105),
    [aux_sym_css_function_hwb_token1] = ACTIONS(105),
    [aux_sym_css_function_lab_token1] = ACTIONS(105),
    [aux_sym_css_function_oklab_token1] = ACTIONS(105),
    [aux_sym_css_function_lch_token1] = ACTIONS(105),
    [aux_sym_css_function_oklch_token1] = ACTIONS(105),
    [aux_sym_css_function_color_token1] = ACTIONS(105),
    [sym__css_hex_color_6_digits] = ACTIONS(107),
    [sym__css_hex_color_8_digits] = ACTIONS(105),
    [sym__css_hex_color_3_digits] = ACTIONS(107),
    [sym__css_hex_color_4_digits] = ACTIONS(107),
    [aux_sym_css_named_color_token1] = ACTIONS(105),
    [aux_sym_css_named_color_token2] = ACTIONS(105),
    [aux_sym_css_named_color_token3] = ACTIONS(107),
    [aux_sym_css_named_color_token4] = ACTIONS(105),
    [aux_sym_css_named_color_token5] = ACTIONS(105),
    [aux_sym_css_named_color_token6] = ACTIONS(105),
    [aux_sym_css_named_color_token7] = ACTIONS(105),
    [aux_sym_css_named_color_token8] = ACTIONS(105),
    [aux_sym_css_named_color_token9] = ACTIONS(105),
    [aux_sym_css_named_color_token10] = ACTIONS(107),
    [aux_sym_css_named_color_token11] = ACTIONS(105),
    [aux_sym_css_named_color_token12] = ACTIONS(105),
    [aux_sym_css_named_color_token13] = ACTIONS(105),
    [aux_sym_css_named_color_token14] = ACTIONS(105),
    [aux_sym_css_named_color_token15] = ACTIONS(105),
    [aux_sym_css_named_color_token16] = ACTIONS(105),
    [aux_sym_css_named_color_token17] = ACTIONS(105),
    [aux_sym_css_named_color_token18] = ACTIONS(105),
    [aux_sym_css_named_color_token19] = ACTIONS(105),
    [aux_sym_css_named_color_token20] = ACTIONS(105),
    [aux_sym_css_named_color_token21] = ACTIONS(105),
    [aux_sym_css_named_color_token22] = ACTIONS(105),
    [aux_sym_css_named_color_token23] = ACTIONS(105),
    [aux_sym_css_named_color_token24] = ACTIONS(105),
    [aux_sym_css_named_color_token25] = ACTIONS(105),
    [aux_sym_css_named_color_token26] = ACTIONS(105),
    [aux_sym_css_named_color_token27] = ACTIONS(105),
    [aux_sym_css_named_color_token28] = ACTIONS(105),
    [aux_sym_css_named_color_token29] = ACTIONS(105),
    [aux_sym_css_named_color_token30] = ACTIONS(105),
    [aux_sym_css_named_color_token31] = ACTIONS(105),
    [aux_sym_css_named_color_token32] = ACTIONS(105),
    [aux_sym_css_named_color_token33] = ACTIONS(105),
    [aux_sym_css_named_color_token34] = ACTIONS(105),
    [aux_sym_css_named_color_token35] = ACTIONS(105),
    [aux_sym_css_named_color_token36] = ACTIONS(105),
    [aux_sym_css_named_color_token37] = ACTIONS(105),
    [aux_sym_css_named_color_token38] = ACTIONS(105),
    [aux_sym_css_named_color_token39] = ACTIONS(105),
    [aux_sym_css_named_color_token40] = ACTIONS(105),
    [aux_sym_css_named_color_token41] = ACTIONS(105),
    [aux_sym_css_named_color_token42] = ACTIONS(105),
    [aux_sym_css_named_color_token43] = ACTIONS(105),
    [aux_sym_css_named_color_token44] = ACTIONS(105),
    [aux_sym_css_named_color_token45] = ACTIONS(105),
    [aux_sym_css_named_color_token46] = ACTIONS(105),
    [aux_sym_css_named_color_token47] = ACTIONS(105),
    [aux_sym_css_named_color_token48] = ACTIONS(105),
    [aux_sym_css_named_color_token49] = ACTIONS(105),
    [aux_sym_css_named_color_token50] = ACTIONS(105),
    [aux_sym_css_named_color_token51] = ACTIONS(105),
    [aux_sym_css_named_color_token52] = ACTIONS(107),
    [aux_sym_css_named_color_token53] = ACTIONS(105),
    [aux_sym_css_named_color_token54] = ACTIONS(105),
    [aux_sym_css_named_color_token55] = ACTIONS(107),
    [aux_sym_css_named_color_token56] = ACTIONS(105),
    [aux_sym_css_named_color_token57] = ACTIONS(105),
    [aux_sym_css_named_color_token58] = ACTIONS(105),
    [aux_sym_css_named_color_token59] = ACTIONS(105),
    [aux_sym_css_named_color_token60] = ACTIONS(105),
    [aux_sym_css_named_color_token61] = ACTIONS(105),
    [aux_sym_css_named_color_token62] = ACTIONS(105),
    [aux_sym_css_named_color_token63] = ACTIONS(105),
    [aux_sym_css_named_color_token64] = ACTIONS(107),
    [aux_sym_css_named_color_token65] = ACTIONS(105),
    [aux_sym_css_named_color_token66] = ACTIONS(105),
    [aux_sym_css_named_color_token67] = ACTIONS(105),
    [aux_sym_css_named_color_token68] = ACTIONS(105),
    [aux_sym_css_named_color_token69] = ACTIONS(105),
    [aux_sym_css_named_color_token70] = ACTIONS(105),
    [aux_sym_css_named_color_token71] = ACTIONS(105),
    [aux_sym_css_named_color_token72] = ACTIONS(105),
    [aux_sym_css_named_color_token73] = ACTIONS(105),
    [aux_sym_css_named_color_token74] = ACTIONS(105),
    [aux_sym_css_named_color_token75] = ACTIONS(105),
    [aux_sym_css_named_color_token76] = ACTIONS(105),
    [aux_sym_css_named_color_token77] = ACTIONS(105),
    [aux_sym_css_named_color_token78] = ACTIONS(105),
    [aux_sym_css_named_color_token79] = ACTIONS(105),
    [aux_sym_css_named_color_token80] = ACTIONS(105),
    [aux_sym_css_named_color_token81] = ACTIONS(105),
    [aux_sym_css_named_color_token82] = ACTIONS(105),
    [aux_sym_css_named_color_token83] = ACTIONS(107),
    [aux_sym_css_named_color_token84] = ACTIONS(105),
    [aux_sym_css_named_color_token85] = ACTIONS(105),
    [aux_sym_css_named_color_token86] = ACTIONS(105),
    [aux_sym_css_named_color_token87] = ACTIONS(105),
    [aux_sym_css_named_color_token88] = ACTIONS(105),
    [aux_sym_css_named_color_token89] = ACTIONS(105),
    [aux_sym_css_named_color_token90] = ACTIONS(105),
    [aux_sym_css_named_color_token91] = ACTIONS(105),
    [aux_sym_css_named_color_token92] = ACTIONS(105),
    [aux_sym_css_named_color_token93] = ACTIONS(105),
    [aux_sym_css_named_color_token94] = ACTIONS(105),
    [aux_sym_css_named_color_token95] = ACTIONS(105),
    [aux_sym_css_named_color_token96] = ACTIONS(105),
    [aux_sym_css_named_color_token97] = ACTIONS(105),
    [aux_sym_css_named_color_token98] = ACTIONS(105),
    [aux_sym_css_named_color_token99] = ACTIONS(105),
    [aux_sym_css_named_color_token100] = ACTIONS(105),
    [aux_sym_css_named_color_token101] = ACTIONS(105),
    [aux_sym_css_named_color_token102] = ACTIONS(105),
    [aux_sym_css_named_color_token103] = ACTIONS(105),
    [aux_sym_css_named_color_token104] = ACTIONS(107),
    [aux_sym_css_named_color_token105] = ACTIONS(105),
    [aux_sym_css_named_color_token106] = ACTIONS(107),
    [aux_sym_css_named_color_token107] = ACTIONS(105),
    [aux_sym_css_named_color_token108] = ACTIONS(105),
    [aux_sym_css_named_color_token109] = ACTIONS(105),
    [aux_sym_css_named_color_token110] = ACTIONS(105),
    [aux_sym_css_named_color_token111] = ACTIONS(105),
    [aux_sym_css_named_color_token112] = ACTIONS(105),
    [aux_sym_css_named_color_token113] = ACTIONS(105),
    [aux_sym_css_named_color_token114] = ACTIONS(105),
    [aux_sym_css_named_color_token115] = ACTIONS(105),
    [aux_sym_css_named_color_token116] = ACTIONS(105),
    [aux_sym_css_named_color_token117] = ACTIONS(105),
    [aux_sym_css_named_color_token118] = ACTIONS(105),
    [aux_sym_css_named_color_token119] = ACTIONS(105),
    [aux_sym_css_named_color_token120] = ACTIONS(105),
    [aux_sym_css_named_color_token121] = ACTIONS(105),
    [aux_sym_css_named_color_token122] = ACTIONS(105),
    [aux_sym_css_named_color_token123] = ACTIONS(105),
    [aux_sym_css_named_color_token124] = ACTIONS(105),
    [aux_sym_css_named_color_token125] = ACTIONS(105),
    [aux_sym_css_named_color_token126] = ACTIONS(105),
    [aux_sym_css_named_color_token127] = ACTIONS(105),
    [aux_sym_css_named_color_token128] = ACTIONS(105),
    [aux_sym_css_named_color_token129] = ACTIONS(105),
    [aux_sym_css_named_color_token130] = ACTIONS(105),
    [aux_sym_css_named_color_token131] = ACTIONS(105),
    [aux_sym_css_named_color_token132] = ACTIONS(105),
    [aux_sym_css_named_color_token133] = ACTIONS(105),
    [aux_sym_css_named_color_token134] = ACTIONS(105),
    [aux_sym_css_named_color_token135] = ACTIONS(105),
    [aux_sym_css_named_color_token136] = ACTIONS(105),
    [aux_sym_css_named_color_token137] = ACTIONS(105),
    [aux_sym_css_named_color_token138] = ACTIONS(105),
    [aux_sym_css_named_color_token139] = ACTIONS(105),
    [aux_sym_css_named_color_token140] = ACTIONS(105),
    [aux_sym_css_named_color_token141] = ACTIONS(105),
    [aux_sym_css_named_color_token142] = ACTIONS(105),
    [aux_sym_css_named_color_token143] = ACTIONS(105),
    [aux_sym_css_named_color_token144] = ACTIONS(105),
    [aux_sym_css_named_color_token145] = ACTIONS(107),
    [aux_sym_css_named_color_token146] = ACTIONS(105),
    [aux_sym_css_named_color_token147] = ACTIONS(107),
    [aux_sym_css_named_color_token148] = ACTIONS(105),
    [sym_css_keyword_transparent] = ACTIONS(105),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [aux_sym_source_file_token1] = ACTIONS(107),
    [aux_sym_source_file_token2] = ACTIONS(107),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(107),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(105),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(107),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(105),
    [aux_sym_css_function_hwb_token1] = ACTIONS(105),
    [aux_sym_css_function_lab_token1] = ACTIONS(105),
    [aux_sym_css_function_oklab_token1] = ACTIONS(105),
    [aux_sym_css_function_lch_token1] = ACTIONS(105),
    [aux_sym_css_function_oklch_token1] = ACTIONS(105),
    [aux_sym_css_function_color_token1] = ACTIONS(105),
    [sym__css_hex_color_6_digits] = ACTIONS(107),
    [sym__css_hex_color_8_digits] = ACTIONS(105),
    [sym__css_hex_color_3_digits] = ACTIONS(107),
    [sym__css_hex_color_4_digits] = ACTIONS(107),
    [aux_sym_css_named_color_token1] = ACTIONS(105),
    [aux_sym_css_named_color_token2] = ACTIONS(105),
    [aux_sym_css_named_color_token3] = ACTIONS(107),
    [aux_sym_css_named_color_token4] = ACTIONS(105),
    [aux_sym_css_named_color_token5] = ACTIONS(105),
    [aux_sym_css_named_color_token6] = ACTIONS(105),
    [aux_sym_css_named_color_token7] = ACTIONS(105),
    [aux_sym_css_named_color_token8] = ACTIONS(105),
    [aux_sym_css_named_color_token9] = ACTIONS(105),
    [aux_sym_css_named_color_token10] = ACTIONS(107),
    [aux_sym_css_named_color_token11] = ACTIONS(105),
    [aux_sym_css_named_color_token12] = ACTIONS(105),
    [aux_sym_css_named_color_token13] = ACTIONS(105),
    [aux_sym_css_named_color_token14] = ACTIONS(105),
    [aux_sym_css_named_color_token15] = ACTIONS(105),
    [aux_sym_css_named_color_token16] = ACTIONS(105),
    [aux_sym_css_named_color_token17] = ACTIONS(105),
    [aux_sym_css_named_color_token18] = ACTIONS(105),
    [aux_sym_css_named_color_token19] = ACTIONS(105),
    [aux_sym_css_named_color_token20] = ACTIONS(105),
    [aux_sym_css_named_color_token21] = ACTIONS(105),
    [aux_sym_css_named_color_token22] = ACTIONS(105),
    [aux_sym_css_named_color_token23] = ACTIONS(105),
    [aux_sym_css_named_color_token24] = ACTIONS(105),
    [aux_sym_css_named_color_token25] = ACTIONS(105),
    [aux_sym_css_named_color_token26] = ACTIONS(105),
    [aux_sym_css_named_color_token27] = ACTIONS(105),
    [aux_sym_css_named_color_token28] = ACTIONS(105),
    [aux_sym_css_named_color_token29] = ACTIONS(105),
    [aux_sym_css_named_color_token30] = ACTIONS(105),
    [aux_sym_css_named_color_token31] = ACTIONS(105),
    [aux_sym_css_named_color_token32] = ACTIONS(105),
    [aux_sym_css_named_color_token33] = ACTIONS(105),
    [aux_sym_css_named_color_token34] = ACTIONS(105),
    [aux_sym_css_named_color_token35] = ACTIONS(105),
    [aux_sym_css_named_color_token36] = ACTIONS(105),
    [aux_sym_css_named_color_token37] = ACTIONS(105),
    [aux_sym_css_named_color_token38] = ACTIONS(105),
    [aux_sym_css_named_color_token39] = ACTIONS(105),
    [aux_sym_css_named_color_token40] = ACTIONS(105),
    [aux_sym_css_named_color_token41] = ACTIONS(105),
    [aux_sym_css_named_color_token42] = ACTIONS(105),
    [aux_sym_css_named_color_token43] = ACTIONS(105),
    [aux_sym_css_named_color_token44] = ACTIONS(105),
    [aux_sym_css_named_color_token45] = ACTIONS(105),
    [aux_sym_css_named_color_token46] = ACTIONS(105),
    [aux_sym_css_named_color_token47] = ACTIONS(105),
    [aux_sym_css_named_color_token48] = ACTIONS(105),
    [aux_sym_css_named_color_token49] = ACTIONS(105),
    [aux_sym_css_named_color_token50] = ACTIONS(105),
    [aux_sym_css_named_color_token51] = ACTIONS(105),
    [aux_sym_css_named_color_token52] = ACTIONS(107),
    [aux_sym_css_named_color_token53] = ACTIONS(105),
    [aux_sym_css_named_color_token54] = ACTIONS(105),
    [aux_sym_css_named_color_token55] = ACTIONS(107),
    [aux_sym_css_named_color_token56] = ACTIONS(105),
    [aux_sym_css_named_color_token57] = ACTIONS(105),
    [aux_sym_css_named_color_token58] = ACTIONS(105),
    [aux_sym_css_named_color_token59] = ACTIONS(105),
    [aux_sym_css_named_color_token60] = ACTIONS(105),
    [aux_sym_css_named_color_token61] = ACTIONS(105),
    [aux_sym_css_named_color_token62] = ACTIONS(105),
    [aux_sym_css_named_color_token63] = ACTIONS(105),
    [aux_sym_css_named_color_token64] = ACTIONS(107),
    [aux_sym_css_named_color_token65] = ACTIONS(105),
    [aux_sym_css_named_color_token66] = ACTIONS(105),
    [aux_sym_css_named_color_token67] = ACTIONS(105),
    [aux_sym_css_named_color_token68] = ACTIONS(105),
    [aux_sym_css_named_color_token69] = ACTIONS(105),
    [aux_sym_css_named_color_token70] = ACTIONS(105),
    [aux_sym_css_named_color_token71] = ACTIONS(105),
    [aux_sym_css_named_color_token72] = ACTIONS(105),
    [aux_sym_css_named_color_token73] = ACTIONS(105),
    [aux_sym_css_named_color_token74] = ACTIONS(105),
    [aux_sym_css_named_color_token75] = ACTIONS(105),
    [aux_sym_css_named_color_token76] = ACTIONS(105),
    [aux_sym_css_named_color_token77] = ACTIONS(105),
    [aux_sym_css_named_color_token78] = ACTIONS(105),
    [aux_sym_css_named_color_token79] = ACTIONS(105),
    [aux_sym_css_named_color_token80] = ACTIONS(105),
    [aux_sym_css_named_color_token81] = ACTIONS(105),
    [aux_sym_css_named_color_token82] = ACTIONS(105),
    [aux_sym_css_named_color_token83] = ACTIONS(107),
    [aux_sym_css_named_color_token84] = ACTIONS(105),
    [aux_sym_css_named_color_token85] = ACTIONS(105),
    [aux_sym_css_named_color_token86] = ACTIONS(105),
    [aux_sym_css_named_color_token87] = ACTIONS(105),
    [aux_sym_css_named_color_token88] = ACTIONS(105),
    [aux_sym_css_named_color_token89] = ACTIONS(105),
    [aux_sym_css_named_color_token90] = ACTIONS(105),
    [aux_sym_css_named_color_token91] = ACTIONS(105),
    [aux_sym_css_named_color_token92] = ACTIONS(105),
    [aux_sym_css_named_color_token93] = ACTIONS(105),
    [aux_sym_css_named_color_token94] = ACTIONS(105),
    [aux_sym_css_named_color_token95] = ACTIONS(105),
    [aux_sym_css_named_color_token96] = ACTIONS(105),
    [aux_sym_css_named_color_token97] = ACTIONS(105),
    [aux_sym_css_named_color_token98] = ACTIONS(105),
    [aux_sym_css_named_color_token99] = ACTIONS(105),
    [aux_sym_css_named_color_token100] = ACTIONS(105),
    [aux_sym_css_named_color_token101] = ACTIONS(105),
    [aux_sym_css_named_color_token102] = ACTIONS(105),
    [aux_sym_css_named_color_token103] = ACTIONS(105),
    [aux_sym_css_named_color_token104] = ACTIONS(107),
    [aux_sym_css_named_color_token105] = ACTIONS(105),
    [aux_sym_css_named_color_token106] = ACTIONS(107),
    [aux_sym_css_named_color_token107] = ACTIONS(105),
    [aux_sym_css_named_color_token108] = ACTIONS(105),
    [aux_sym_css_named_color_token109] = ACTIONS(105),
    [aux_sym_css_named_color_token110] = ACTIONS(105),
    [aux_sym_css_named_color_token111] = ACTIONS(105),
    [aux_sym_css_named_color_token112] = ACTIONS(105),
    [aux_sym_css_named_color_token113] = ACTIONS(105),
    [aux_sym_css_named_color_token114] = ACTIONS(105),
    [aux_sym_css_named_color_token115] = ACTIONS(105),
    [aux_sym_css_named_color_token116] = ACTIONS(105),
    [aux_sym_css_named_color_token117] = ACTIONS(105),
    [aux_sym_css_named_color_token118] = ACTIONS(105),
    [aux_sym_css_named_color_token119] = ACTIONS(105),
    [aux_sym_css_named_color_token120] = ACTIONS(105),
    [aux_sym_css_named_color_token121] = ACTIONS(105),
    [aux_sym_css_named_color_token122] = ACTIONS(105),
    [aux_sym_css_named_color_token123] = ACTIONS(105),
    [aux_sym_css_named_color_token124] = ACTIONS(105),
    [aux_sym_css_named_color_token125] = ACTIONS(105),
    [aux_sym_css_named_color_token126] = ACTIONS(105),
    [aux_sym_css_named_color_token127] = ACTIONS(105),
    [aux_sym_css_named_color_token128] = ACTIONS(105),
    [aux_sym_css_named_color_token129] = ACTIONS(105),
    [aux_sym_css_named_color_token130] = ACTIONS(105),
    [aux_sym_css_named_color_token131] = ACTIONS(105),
    [aux_sym_css_named_color_token132] = ACTIONS(105),
    [aux_sym_css_named_color_token133] = ACTIONS(105),
    [aux_sym_css_named_color_token134] = ACTIONS(105),
    [aux_sym_css_named_color_token135] = ACTIONS(105),
    [aux_sym_css_named_color_token136] = ACTIONS(105),
    [aux_sym_css_named_color_token137] = ACTIONS(105),
    [aux_sym_css_named_color_token138] = ACTIONS(105),
    [aux_sym_css_named_color_token139] = ACTIONS(105),
    [aux_sym_css_named_color_token140] = ACTIONS(105),
    [aux_sym_css_named_color_token141] = ACTIONS(105),
    [aux_sym_css_named_color_token142] = ACTIONS(105),
    [aux_sym_css_named_color_token143] = ACTIONS(105),
    [aux_sym_css_named_color_token144] = ACTIONS(105),
    [aux_sym_css_named_color_token145] = ACTIONS(107),
    [aux_sym_css_named_color_token146] = ACTIONS(105),
    [aux_sym_css_named_color_token147] = ACTIONS(107),
    [aux_sym_css_named_color_token148] = ACTIONS(105),
    [sym_css_keyword_transparent] = ACTIONS(105),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [aux_sym_source_file_token1] = ACTIONS(111),
    [aux_sym_source_file_token2] = ACTIONS(111),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(111),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(109),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(111),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(109),
    [aux_sym_css_function_hwb_token1] = ACTIONS(109),
    [aux_sym_css_function_lab_token1] = ACTIONS(109),
    [aux_sym_css_function_oklab_token1] = ACTIONS(109),
    [aux_sym_css_function_lch_token1] = ACTIONS(109),
    [aux_sym_css_function_oklch_token1] = ACTIONS(109),
    [aux_sym_css_function_color_token1] = ACTIONS(109),
    [sym__css_hex_color_6_digits] = ACTIONS(111),
    [sym__css_hex_color_8_digits] = ACTIONS(109),
    [sym__css_hex_color_3_digits] = ACTIONS(111),
    [sym__css_hex_color_4_digits] = ACTIONS(111),
    [aux_sym_css_named_color_token1] = ACTIONS(109),
    [aux_sym_css_named_color_token2] = ACTIONS(109),
    [aux_sym_css_named_color_token3] = ACTIONS(111),
    [aux_sym_css_named_color_token4] = ACTIONS(109),
    [aux_sym_css_named_color_token5] = ACTIONS(109),
    [aux_sym_css_named_color_token6] = ACTIONS(109),
    [aux_sym_css_named_color_token7] = ACTIONS(109),
    [aux_sym_css_named_color_token8] = ACTIONS(109),
    [aux_sym_css_named_color_token9] = ACTIONS(109),
    [aux_sym_css_named_color_token10] = ACTIONS(111),
    [aux_sym_css_named_color_token11] = ACTIONS(109),
    [aux_sym_css_named_color_token12] = ACTIONS(109),
    [aux_sym_css_named_color_token13] = ACTIONS(109),
    [aux_sym_css_named_color_token14] = ACTIONS(109),
    [aux_sym_css_named_color_token15] = ACTIONS(109),
    [aux_sym_css_named_color_token16] = ACTIONS(109),
    [aux_sym_css_named_color_token17] = ACTIONS(109),
    [aux_sym_css_named_color_token18] = ACTIONS(109),
    [aux_sym_css_named_color_token19] = ACTIONS(109),
    [aux_sym_css_named_color_token20] = ACTIONS(109),
    [aux_sym_css_named_color_token21] = ACTIONS(109),
    [aux_sym_css_named_color_token22] = ACTIONS(109),
    [aux_sym_css_named_color_token23] = ACTIONS(109),
    [aux_sym_css_named_color_token24] = ACTIONS(109),
    [aux_sym_css_named_color_token25] = ACTIONS(109),
    [aux_sym_css_named_color_token26] = ACTIONS(109),
    [aux_sym_css_named_color_token27] = ACTIONS(109),
    [aux_sym_css_named_color_token28] = ACTIONS(109),
    [aux_sym_css_named_color_token29] = ACTIONS(109),
    [aux_sym_css_named_color_token30] = ACTIONS(109),
    [aux_sym_css_named_color_token31] = ACTIONS(109),
    [aux_sym_css_named_color_token32] = ACTIONS(109),
    [aux_sym_css_named_color_token33] = ACTIONS(109),
    [aux_sym_css_named_color_token34] = ACTIONS(109),
    [aux_sym_css_named_color_token35] = ACTIONS(109),
    [aux_sym_css_named_color_token36] = ACTIONS(109),
    [aux_sym_css_named_color_token37] = ACTIONS(109),
    [aux_sym_css_named_color_token38] = ACTIONS(109),
    [aux_sym_css_named_color_token39] = ACTIONS(109),
    [aux_sym_css_named_color_token40] = ACTIONS(109),
    [aux_sym_css_named_color_token41] = ACTIONS(109),
    [aux_sym_css_named_color_token42] = ACTIONS(109),
    [aux_sym_css_named_color_token43] = ACTIONS(109),
    [aux_sym_css_named_color_token44] = ACTIONS(109),
    [aux_sym_css_named_color_token45] = ACTIONS(109),
    [aux_sym_css_named_color_token46] = ACTIONS(109),
    [aux_sym_css_named_color_token47] = ACTIONS(109),
    [aux_sym_css_named_color_token48] = ACTIONS(109),
    [aux_sym_css_named_color_token49] = ACTIONS(109),
    [aux_sym_css_named_color_token50] = ACTIONS(109),
    [aux_sym_css_named_color_token51] = ACTIONS(109),
    [aux_sym_css_named_color_token52] = ACTIONS(111),
    [aux_sym_css_named_color_token53] = ACTIONS(109),
    [aux_sym_css_named_color_token54] = ACTIONS(109),
    [aux_sym_css_named_color_token55] = ACTIONS(111),
    [aux_sym_css_named_color_token56] = ACTIONS(109),
    [aux_sym_css_named_color_token57] = ACTIONS(109),
    [aux_sym_css_named_color_token58] = ACTIONS(109),
    [aux_sym_css_named_color_token59] = ACTIONS(109),
    [aux_sym_css_named_color_token60] = ACTIONS(109),
    [aux_sym_css_named_color_token61] = ACTIONS(109),
    [aux_sym_css_named_color_token62] = ACTIONS(109),
    [aux_sym_css_named_color_token63] = ACTIONS(109),
    [aux_sym_css_named_color_token64] = ACTIONS(111),
    [aux_sym_css_named_color_token65] = ACTIONS(109),
    [aux_sym_css_named_color_token66] = ACTIONS(109),
    [aux_sym_css_named_color_token67] = ACTIONS(109),
    [aux_sym_css_named_color_token68] = ACTIONS(109),
    [aux_sym_css_named_color_token69] = ACTIONS(109),
    [aux_sym_css_named_color_token70] = ACTIONS(109),
    [aux_sym_css_named_color_token71] = ACTIONS(109),
    [aux_sym_css_named_color_token72] = ACTIONS(109),
    [aux_sym_css_named_color_token73] = ACTIONS(109),
    [aux_sym_css_named_color_token74] = ACTIONS(109),
    [aux_sym_css_named_color_token75] = ACTIONS(109),
    [aux_sym_css_named_color_token76] = ACTIONS(109),
    [aux_sym_css_named_color_token77] = ACTIONS(109),
    [aux_sym_css_named_color_token78] = ACTIONS(109),
    [aux_sym_css_named_color_token79] = ACTIONS(109),
    [aux_sym_css_named_color_token80] = ACTIONS(109),
    [aux_sym_css_named_color_token81] = ACTIONS(109),
    [aux_sym_css_named_color_token82] = ACTIONS(109),
    [aux_sym_css_named_color_token83] = ACTIONS(111),
    [aux_sym_css_named_color_token84] = ACTIONS(109),
    [aux_sym_css_named_color_token85] = ACTIONS(109),
    [aux_sym_css_named_color_token86] = ACTIONS(109),
    [aux_sym_css_named_color_token87] = ACTIONS(109),
    [aux_sym_css_named_color_token88] = ACTIONS(109),
    [aux_sym_css_named_color_token89] = ACTIONS(109),
    [aux_sym_css_named_color_token90] = ACTIONS(109),
    [aux_sym_css_named_color_token91] = ACTIONS(109),
    [aux_sym_css_named_color_token92] = ACTIONS(109),
    [aux_sym_css_named_color_token93] = ACTIONS(109),
    [aux_sym_css_named_color_token94] = ACTIONS(109),
    [aux_sym_css_named_color_token95] = ACTIONS(109),
    [aux_sym_css_named_color_token96] = ACTIONS(109),
    [aux_sym_css_named_color_token97] = ACTIONS(109),
    [aux_sym_css_named_color_token98] = ACTIONS(109),
    [aux_sym_css_named_color_token99] = ACTIONS(109),
    [aux_sym_css_named_color_token100] = ACTIONS(109),
    [aux_sym_css_named_color_token101] = ACTIONS(109),
    [aux_sym_css_named_color_token102] = ACTIONS(109),
    [aux_sym_css_named_color_token103] = ACTIONS(109),
    [aux_sym_css_named_color_token104] = ACTIONS(111),
    [aux_sym_css_named_color_token105] = ACTIONS(109),
    [aux_sym_css_named_color_token106] = ACTIONS(111),
    [aux_sym_css_named_color_token107] = ACTIONS(109),
    [aux_sym_css_named_color_token108] = ACTIONS(109),
    [aux_sym_css_named_color_token109] = ACTIONS(109),
    [aux_sym_css_named_color_token110] = ACTIONS(109),
    [aux_sym_css_named_color_token111] = ACTIONS(109),
    [aux_sym_css_named_color_token112] = ACTIONS(109),
    [aux_sym_css_named_color_token113] = ACTIONS(109),
    [aux_sym_css_named_color_token114] = ACTIONS(109),
    [aux_sym_css_named_color_token115] = ACTIONS(109),
    [aux_sym_css_named_color_token116] = ACTIONS(109),
    [aux_sym_css_named_color_token117] = ACTIONS(109),
    [aux_sym_css_named_color_token118] = ACTIONS(109),
    [aux_sym_css_named_color_token119] = ACTIONS(109),
    [aux_sym_css_named_color_token120] = ACTIONS(109),
    [aux_sym_css_named_color_token121] = ACTIONS(109),
    [aux_sym_css_named_color_token122] = ACTIONS(109),
    [aux_sym_css_named_color_token123] = ACTIONS(109),
    [aux_sym_css_named_color_token124] = ACTIONS(109),
    [aux_sym_css_named_color_token125] = ACTIONS(109),
    [aux_sym_css_named_color_token126] = ACTIONS(109),
    [aux_sym_css_named_color_token127] = ACTIONS(109),
    [aux_sym_css_named_color_token128] = ACTIONS(109),
    [aux_sym_css_named_color_token129] = ACTIONS(109),
    [aux_sym_css_named_color_token130] = ACTIONS(109),
    [aux_sym_css_named_color_token131] = ACTIONS(109),
    [aux_sym_css_named_color_token132] = ACTIONS(109),
    [aux_sym_css_named_color_token133] = ACTIONS(109),
    [aux_sym_css_named_color_token134] = ACTIONS(109),
    [aux_sym_css_named_color_token135] = ACTIONS(109),
    [aux_sym_css_named_color_token136] = ACTIONS(109),
    [aux_sym_css_named_color_token137] = ACTIONS(109),
    [aux_sym_css_named_color_token138] = ACTIONS(109),
    [aux_sym_css_named_color_token139] = ACTIONS(109),
    [aux_sym_css_named_color_token140] = ACTIONS(109),
    [aux_sym_css_named_color_token141] = ACTIONS(109),
    [aux_sym_css_named_color_token142] = ACTIONS(109),
    [aux_sym_css_named_color_token143] = ACTIONS(109),
    [aux_sym_css_named_color_token144] = ACTIONS(109),
    [aux_sym_css_named_color_token145] = ACTIONS(111),
    [aux_sym_css_named_color_token146] = ACTIONS(109),
    [aux_sym_css_named_color_token147] = ACTIONS(111),
    [aux_sym_css_named_color_token148] = ACTIONS(109),
    [sym_css_keyword_transparent] = ACTIONS(109),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [aux_sym_source_file_token1] = ACTIONS(99),
    [aux_sym_source_file_token2] = ACTIONS(99),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(99),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(97),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(99),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(97),
    [aux_sym_css_function_hwb_token1] = ACTIONS(97),
    [aux_sym_css_function_lab_token1] = ACTIONS(97),
    [aux_sym_css_function_oklab_token1] = ACTIONS(97),
    [aux_sym_css_function_lch_token1] = ACTIONS(97),
    [aux_sym_css_function_oklch_token1] = ACTIONS(97),
    [aux_sym_css_function_color_token1] = ACTIONS(97),
    [sym__css_hex_color_6_digits] = ACTIONS(99),
    [sym__css_hex_color_8_digits] = ACTIONS(97),
    [sym__css_hex_color_3_digits] = ACTIONS(99),
    [sym__css_hex_color_4_digits] = ACTIONS(99),
    [aux_sym_css_named_color_token1] = ACTIONS(97),
    [aux_sym_css_named_color_token2] = ACTIONS(97),
    [aux_sym_css_named_color_token3] = ACTIONS(99),
    [aux_sym_css_named_color_token4] = ACTIONS(97),
    [aux_sym_css_named_color_token5] = ACTIONS(97),
    [aux_sym_css_named_color_token6] = ACTIONS(97),
    [aux_sym_css_named_color_token7] = ACTIONS(97),
    [aux_sym_css_named_color_token8] = ACTIONS(97),
    [aux_sym_css_named_color_token9] = ACTIONS(97),
    [aux_sym_css_named_color_token10] = ACTIONS(99),
    [aux_sym_css_named_color_token11] = ACTIONS(97),
    [aux_sym_css_named_color_token12] = ACTIONS(97),
    [aux_sym_css_named_color_token13] = ACTIONS(97),
    [aux_sym_css_named_color_token14] = ACTIONS(97),
    [aux_sym_css_named_color_token15] = ACTIONS(97),
    [aux_sym_css_named_color_token16] = ACTIONS(97),
    [aux_sym_css_named_color_token17] = ACTIONS(97),
    [aux_sym_css_named_color_token18] = ACTIONS(97),
    [aux_sym_css_named_color_token19] = ACTIONS(97),
    [aux_sym_css_named_color_token20] = ACTIONS(97),
    [aux_sym_css_named_color_token21] = ACTIONS(97),
    [aux_sym_css_named_color_token22] = ACTIONS(97),
    [aux_sym_css_named_color_token23] = ACTIONS(97),
    [aux_sym_css_named_color_token24] = ACTIONS(97),
    [aux_sym_css_named_color_token25] = ACTIONS(97),
    [aux_sym_css_named_color_token26] = ACTIONS(97),
    [aux_sym_css_named_color_token27] = ACTIONS(97),
    [aux_sym_css_named_color_token28] = ACTIONS(97),
    [aux_sym_css_named_color_token29] = ACTIONS(97),
    [aux_sym_css_named_color_token30] = ACTIONS(97),
    [aux_sym_css_named_color_token31] = ACTIONS(97),
    [aux_sym_css_named_color_token32] = ACTIONS(97),
    [aux_sym_css_named_color_token33] = ACTIONS(97),
    [aux_sym_css_named_color_token34] = ACTIONS(97),
    [aux_sym_css_named_color_token35] = ACTIONS(97),
    [aux_sym_css_named_color_token36] = ACTIONS(97),
    [aux_sym_css_named_color_token37] = ACTIONS(97),
    [aux_sym_css_named_color_token38] = ACTIONS(97),
    [aux_sym_css_named_color_token39] = ACTIONS(97),
    [aux_sym_css_named_color_token40] = ACTIONS(97),
    [aux_sym_css_named_color_token41] = ACTIONS(97),
    [aux_sym_css_named_color_token42] = ACTIONS(97),
    [aux_sym_css_named_color_token43] = ACTIONS(97),
    [aux_sym_css_named_color_token44] = ACTIONS(97),
    [aux_sym_css_named_color_token45] = ACTIONS(97),
    [aux_sym_css_named_color_token46] = ACTIONS(97),
    [aux_sym_css_named_color_token47] = ACTIONS(97),
    [aux_sym_css_named_color_token48] = ACTIONS(97),
    [aux_sym_css_named_color_token49] = ACTIONS(97),
    [aux_sym_css_named_color_token50] = ACTIONS(97),
    [aux_sym_css_named_color_token51] = ACTIONS(97),
    [aux_sym_css_named_color_token52] = ACTIONS(99),
    [aux_sym_css_named_color_token53] = ACTIONS(97),
    [aux_sym_css_named_color_token54] = ACTIONS(97),
    [aux_sym_css_named_color_token55] = ACTIONS(99),
    [aux_sym_css_named_color_token56] = ACTIONS(97),
    [aux_sym_css_named_color_token57] = ACTIONS(97),
    [aux_sym_css_named_color_token58] = ACTIONS(97),
    [aux_sym_css_named_color_token59] = ACTIONS(97),
    [aux_sym_css_named_color_token60] = ACTIONS(97),
    [aux_sym_css_named_color_token61] = ACTIONS(97),
    [aux_sym_css_named_color_token62] = ACTIONS(97),
    [aux_sym_css_named_color_token63] = ACTIONS(97),
    [aux_sym_css_named_color_token64] = ACTIONS(99),
    [aux_sym_css_named_color_token65] = ACTIONS(97),
    [aux_sym_css_named_color_token66] = ACTIONS(97),
    [aux_sym_css_named_color_token67] = ACTIONS(97),
    [aux_sym_css_named_color_token68] = ACTIONS(97),
    [aux_sym_css_named_color_token69] = ACTIONS(97),
    [aux_sym_css_named_color_token70] = ACTIONS(97),
    [aux_sym_css_named_color_token71] = ACTIONS(97),
    [aux_sym_css_named_color_token72] = ACTIONS(97),
    [aux_sym_css_named_color_token73] = ACTIONS(97),
    [aux_sym_css_named_color_token74] = ACTIONS(97),
    [aux_sym_css_named_color_token75] = ACTIONS(97),
    [aux_sym_css_named_color_token76] = ACTIONS(97),
    [aux_sym_css_named_color_token77] = ACTIONS(97),
    [aux_sym_css_named_color_token78] = ACTIONS(97),
    [aux_sym_css_named_color_token79] = ACTIONS(97),
    [aux_sym_css_named_color_token80] = ACTIONS(97),
    [aux_sym_css_named_color_token81] = ACTIONS(97),
    [aux_sym_css_named_color_token82] = ACTIONS(97),
    [aux_sym_css_named_color_token83] = ACTIONS(99),
    [aux_sym_css_named_color_token84] = ACTIONS(97),
    [aux_sym_css_named_color_token85] = ACTIONS(97),
    [aux_sym_css_named_color_token86] = ACTIONS(97),
    [aux_sym_css_named_color_token87] = ACTIONS(97),
    [aux_sym_css_named_color_token88] = ACTIONS(97),
    [aux_sym_css_named_color_token89] = ACTIONS(97),
    [aux_sym_css_named_color_token90] = ACTIONS(97),
    [aux_sym_css_named_color_token91] = ACTIONS(97),
    [aux_sym_css_named_color_token92] = ACTIONS(97),
    [aux_sym_css_named_color_token93] = ACTIONS(97),
    [aux_sym_css_named_color_token94] = ACTIONS(97),
    [aux_sym_css_named_color_token95] = ACTIONS(97),
    [aux_sym_css_named_color_token96] = ACTIONS(97),
    [aux_sym_css_named_color_token97] = ACTIONS(97),
    [aux_sym_css_named_color_token98] = ACTIONS(97),
    [aux_sym_css_named_color_token99] = ACTIONS(97),
    [aux_sym_css_named_color_token100] = ACTIONS(97),
    [aux_sym_css_named_color_token101] = ACTIONS(97),
    [aux_sym_css_named_color_token102] = ACTIONS(97),
    [aux_sym_css_named_color_token103] = ACTIONS(97),
    [aux_sym_css_named_color_token104] = ACTIONS(99),
    [aux_sym_css_named_color_token105] = ACTIONS(97),
    [aux_sym_css_named_color_token106] = ACTIONS(99),
    [aux_sym_css_named_color_token107] = ACTIONS(97),
    [aux_sym_css_named_color_token108] = ACTIONS(97),
    [aux_sym_css_named_color_token109] = ACTIONS(97),
    [aux_sym_css_named_color_token110] = ACTIONS(97),
    [aux_sym_css_named_color_token111] = ACTIONS(97),
    [aux_sym_css_named_color_token112] = ACTIONS(97),
    [aux_sym_css_named_color_token113] = ACTIONS(97),
    [aux_sym_css_named_color_token114] = ACTIONS(97),
    [aux_sym_css_named_color_token115] = ACTIONS(97),
    [aux_sym_css_named_color_token116] = ACTIONS(97),
    [aux_sym_css_named_color_token117] = ACTIONS(97),
    [aux_sym_css_named_color_token118] = ACTIONS(97),
    [aux_sym_css_named_color_token119] = ACTIONS(97),
    [aux_sym_css_named_color_token120] = ACTIONS(97),
    [aux_sym_css_named_color_token121] = ACTIONS(97),
    [aux_sym_css_named_color_token122] = ACTIONS(97),
    [aux_sym_css_named_color_token123] = ACTIONS(97),
    [aux_sym_css_named_color_token124] = ACTIONS(97),
    [aux_sym_css_named_color_token125] = ACTIONS(97),
    [aux_sym_css_named_color_token126] = ACTIONS(97),
    [aux_sym_css_named_color_token127] = ACTIONS(97),
    [aux_sym_css_named_color_token128] = ACTIONS(97),
    [aux_sym_css_named_color_token129] = ACTIONS(97),
    [aux_sym_css_named_color_token130] = ACTIONS(97),
    [aux_sym_css_named_color_token131] = ACTIONS(97),
    [aux_sym_css_named_color_token132] = ACTIONS(97),
    [aux_sym_css_named_color_token133] = ACTIONS(97),
    [aux_sym_css_named_color_token134] = ACTIONS(97),
    [aux_sym_css_named_color_token135] = ACTIONS(97),
    [aux_sym_css_named_color_token136] = ACTIONS(97),
    [aux_sym_css_named_color_token137] = ACTIONS(97),
    [aux_sym_css_named_color_token138] = ACTIONS(97),
    [aux_sym_css_named_color_token139] = ACTIONS(97),
    [aux_sym_css_named_color_token140] = ACTIONS(97),
    [aux_sym_css_named_color_token141] = ACTIONS(97),
    [aux_sym_css_named_color_token142] = ACTIONS(97),
    [aux_sym_css_named_color_token143] = ACTIONS(97),
    [aux_sym_css_named_color_token144] = ACTIONS(97),
    [aux_sym_css_named_color_token145] = ACTIONS(99),
    [aux_sym_css_named_color_token146] = ACTIONS(97),
    [aux_sym_css_named_color_token147] = ACTIONS(99),
    [aux_sym_css_named_color_token148] = ACTIONS(97),
    [sym_css_keyword_transparent] = ACTIONS(97),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [aux_sym_source_file_token1] = ACTIONS(115),
    [aux_sym_source_file_token2] = ACTIONS(115),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(115),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(113),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(115),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(113),
    [aux_sym_css_function_hwb_token1] = ACTIONS(113),
    [aux_sym_css_function_lab_token1] = ACTIONS(113),
    [aux_sym_css_function_oklab_token1] = ACTIONS(113),
    [aux_sym_css_function_lch_token1] = ACTIONS(113),
    [aux_sym_css_function_oklch_token1] = ACTIONS(113),
    [aux_sym_css_function_color_token1] = ACTIONS(113),
    [sym__css_hex_color_6_digits] = ACTIONS(115),
    [sym__css_hex_color_8_digits] = ACTIONS(113),
    [sym__css_hex_color_3_digits] = ACTIONS(115),
    [sym__css_hex_color_4_digits] = ACTIONS(115),
    [aux_sym_css_named_color_token1] = ACTIONS(113),
    [aux_sym_css_named_color_token2] = ACTIONS(113),
    [aux_sym_css_named_color_token3] = ACTIONS(115),
    [aux_sym_css_named_color_token4] = ACTIONS(113),
    [aux_sym_css_named_color_token5] = ACTIONS(113),
    [aux_sym_css_named_color_token6] = ACTIONS(113),
    [aux_sym_css_named_color_token7] = ACTIONS(113),
    [aux_sym_css_named_color_token8] = ACTIONS(113),
    [aux_sym_css_named_color_token9] = ACTIONS(113),
    [aux_sym_css_named_color_token10] = ACTIONS(115),
    [aux_sym_css_named_color_token11] = ACTIONS(113),
    [aux_sym_css_named_color_token12] = ACTIONS(113),
    [aux_sym_css_named_color_token13] = ACTIONS(113),
    [aux_sym_css_named_color_token14] = ACTIONS(113),
    [aux_sym_css_named_color_token15] = ACTIONS(113),
    [aux_sym_css_named_color_token16] = ACTIONS(113),
    [aux_sym_css_named_color_token17] = ACTIONS(113),
    [aux_sym_css_named_color_token18] = ACTIONS(113),
    [aux_sym_css_named_color_token19] = ACTIONS(113),
    [aux_sym_css_named_color_token20] = ACTIONS(113),
    [aux_sym_css_named_color_token21] = ACTIONS(113),
    [aux_sym_css_named_color_token22] = ACTIONS(113),
    [aux_sym_css_named_color_token23] = ACTIONS(113),
    [aux_sym_css_named_color_token24] = ACTIONS(113),
    [aux_sym_css_named_color_token25] = ACTIONS(113),
    [aux_sym_css_named_color_token26] = ACTIONS(113),
    [aux_sym_css_named_color_token27] = ACTIONS(113),
    [aux_sym_css_named_color_token28] = ACTIONS(113),
    [aux_sym_css_named_color_token29] = ACTIONS(113),
    [aux_sym_css_named_color_token30] = ACTIONS(113),
    [aux_sym_css_named_color_token31] = ACTIONS(113),
    [aux_sym_css_named_color_token32] = ACTIONS(113),
    [aux_sym_css_named_color_token33] = ACTIONS(113),
    [aux_sym_css_named_color_token34] = ACTIONS(113),
    [aux_sym_css_named_color_token35] = ACTIONS(113),
    [aux_sym_css_named_color_token36] = ACTIONS(113),
    [aux_sym_css_named_color_token37] = ACTIONS(113),
    [aux_sym_css_named_color_token38] = ACTIONS(113),
    [aux_sym_css_named_color_token39] = ACTIONS(113),
    [aux_sym_css_named_color_token40] = ACTIONS(113),
    [aux_sym_css_named_color_token41] = ACTIONS(113),
    [aux_sym_css_named_color_token42] = ACTIONS(113),
    [aux_sym_css_named_color_token43] = ACTIONS(113),
    [aux_sym_css_named_color_token44] = ACTIONS(113),
    [aux_sym_css_named_color_token45] = ACTIONS(113),
    [aux_sym_css_named_color_token46] = ACTIONS(113),
    [aux_sym_css_named_color_token47] = ACTIONS(113),
    [aux_sym_css_named_color_token48] = ACTIONS(113),
    [aux_sym_css_named_color_token49] = ACTIONS(113),
    [aux_sym_css_named_color_token50] = ACTIONS(113),
    [aux_sym_css_named_color_token51] = ACTIONS(113),
    [aux_sym_css_named_color_token52] = ACTIONS(115),
    [aux_sym_css_named_color_token53] = ACTIONS(113),
    [aux_sym_css_named_color_token54] = ACTIONS(113),
    [aux_sym_css_named_color_token55] = ACTIONS(115),
    [aux_sym_css_named_color_token56] = ACTIONS(113),
    [aux_sym_css_named_color_token57] = ACTIONS(113),
    [aux_sym_css_named_color_token58] = ACTIONS(113),
    [aux_sym_css_named_color_token59] = ACTIONS(113),
    [aux_sym_css_named_color_token60] = ACTIONS(113),
    [aux_sym_css_named_color_token61] = ACTIONS(113),
    [aux_sym_css_named_color_token62] = ACTIONS(113),
    [aux_sym_css_named_color_token63] = ACTIONS(113),
    [aux_sym_css_named_color_token64] = ACTIONS(115),
    [aux_sym_css_named_color_token65] = ACTIONS(113),
    [aux_sym_css_named_color_token66] = ACTIONS(113),
    [aux_sym_css_named_color_token67] = ACTIONS(113),
    [aux_sym_css_named_color_token68] = ACTIONS(113),
    [aux_sym_css_named_color_token69] = ACTIONS(113),
    [aux_sym_css_named_color_token70] = ACTIONS(113),
    [aux_sym_css_named_color_token71] = ACTIONS(113),
    [aux_sym_css_named_color_token72] = ACTIONS(113),
    [aux_sym_css_named_color_token73] = ACTIONS(113),
    [aux_sym_css_named_color_token74] = ACTIONS(113),
    [aux_sym_css_named_color_token75] = ACTIONS(113),
    [aux_sym_css_named_color_token76] = ACTIONS(113),
    [aux_sym_css_named_color_token77] = ACTIONS(113),
    [aux_sym_css_named_color_token78] = ACTIONS(113),
    [aux_sym_css_named_color_token79] = ACTIONS(113),
    [aux_sym_css_named_color_token80] = ACTIONS(113),
    [aux_sym_css_named_color_token81] = ACTIONS(113),
    [aux_sym_css_named_color_token82] = ACTIONS(113),
    [aux_sym_css_named_color_token83] = ACTIONS(115),
    [aux_sym_css_named_color_token84] = ACTIONS(113),
    [aux_sym_css_named_color_token85] = ACTIONS(113),
    [aux_sym_css_named_color_token86] = ACTIONS(113),
    [aux_sym_css_named_color_token87] = ACTIONS(113),
    [aux_sym_css_named_color_token88] = ACTIONS(113),
    [aux_sym_css_named_color_token89] = ACTIONS(113),
    [aux_sym_css_named_color_token90] = ACTIONS(113),
    [aux_sym_css_named_color_token91] = ACTIONS(113),
    [aux_sym_css_named_color_token92] = ACTIONS(113),
    [aux_sym_css_named_color_token93] = ACTIONS(113),
    [aux_sym_css_named_color_token94] = ACTIONS(113),
    [aux_sym_css_named_color_token95] = ACTIONS(113),
    [aux_sym_css_named_color_token96] = ACTIONS(113),
    [aux_sym_css_named_color_token97] = ACTIONS(113),
    [aux_sym_css_named_color_token98] = ACTIONS(113),
    [aux_sym_css_named_color_token99] = ACTIONS(113),
    [aux_sym_css_named_color_token100] = ACTIONS(113),
    [aux_sym_css_named_color_token101] = ACTIONS(113),
    [aux_sym_css_named_color_token102] = ACTIONS(113),
    [aux_sym_css_named_color_token103] = ACTIONS(113),
    [aux_sym_css_named_color_token104] = ACTIONS(115),
    [aux_sym_css_named_color_token105] = ACTIONS(113),
    [aux_sym_css_named_color_token106] = ACTIONS(115),
    [aux_sym_css_named_color_token107] = ACTIONS(113),
    [aux_sym_css_named_color_token108] = ACTIONS(113),
    [aux_sym_css_named_color_token109] = ACTIONS(113),
    [aux_sym_css_named_color_token110] = ACTIONS(113),
    [aux_sym_css_named_color_token111] = ACTIONS(113),
    [aux_sym_css_named_color_token112] = ACTIONS(113),
    [aux_sym_css_named_color_token113] = ACTIONS(113),
    [aux_sym_css_named_color_token114] = ACTIONS(113),
    [aux_sym_css_named_color_token115] = ACTIONS(113),
    [aux_sym_css_named_color_token116] = ACTIONS(113),
    [aux_sym_css_named_color_token117] = ACTIONS(113),
    [aux_sym_css_named_color_token118] = ACTIONS(113),
    [aux_sym_css_named_color_token119] = ACTIONS(113),
    [aux_sym_css_named_color_token120] = ACTIONS(113),
    [aux_sym_css_named_color_token121] = ACTIONS(113),
    [aux_sym_css_named_color_token122] = ACTIONS(113),
    [aux_sym_css_named_color_token123] = ACTIONS(113),
    [aux_sym_css_named_color_token124] = ACTIONS(113),
    [aux_sym_css_named_color_token125] = ACTIONS(113),
    [aux_sym_css_named_color_token126] = ACTIONS(113),
    [aux_sym_css_named_color_token127] = ACTIONS(113),
    [aux_sym_css_named_color_token128] = ACTIONS(113),
    [aux_sym_css_named_color_token129] = ACTIONS(113),
    [aux_sym_css_named_color_token130] = ACTIONS(113),
    [aux_sym_css_named_color_token131] = ACTIONS(113),
    [aux_sym_css_named_color_token132] = ACTIONS(113),
    [aux_sym_css_named_color_token133] = ACTIONS(113),
    [aux_sym_css_named_color_token134] = ACTIONS(113),
    [aux_sym_css_named_color_token135] = ACTIONS(113),
    [aux_sym_css_named_color_token136] = ACTIONS(113),
    [aux_sym_css_named_color_token137] = ACTIONS(113),
    [aux_sym_css_named_color_token138] = ACTIONS(113),
    [aux_sym_css_named_color_token139] = ACTIONS(113),
    [aux_sym_css_named_color_token140] = ACTIONS(113),
    [aux_sym_css_named_color_token141] = ACTIONS(113),
    [aux_sym_css_named_color_token142] = ACTIONS(113),
    [aux_sym_css_named_color_token143] = ACTIONS(113),
    [aux_sym_css_named_color_token144] = ACTIONS(113),
    [aux_sym_css_named_color_token145] = ACTIONS(115),
    [aux_sym_css_named_color_token146] = ACTIONS(113),
    [aux_sym_css_named_color_token147] = ACTIONS(115),
    [aux_sym_css_named_color_token148] = ACTIONS(113),
    [sym_css_keyword_transparent] = ACTIONS(113),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [aux_sym_source_file_token1] = ACTIONS(111),
    [aux_sym_source_file_token2] = ACTIONS(111),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(111),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(109),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(111),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(109),
    [aux_sym_css_function_hwb_token1] = ACTIONS(109),
    [aux_sym_css_function_lab_token1] = ACTIONS(109),
    [aux_sym_css_function_oklab_token1] = ACTIONS(109),
    [aux_sym_css_function_lch_token1] = ACTIONS(109),
    [aux_sym_css_function_oklch_token1] = ACTIONS(109),
    [aux_sym_css_function_color_token1] = ACTIONS(109),
    [sym__css_hex_color_6_digits] = ACTIONS(111),
    [sym__css_hex_color_8_digits] = ACTIONS(109),
    [sym__css_hex_color_3_digits] = ACTIONS(111),
    [sym__css_hex_color_4_digits] = ACTIONS(111),
    [aux_sym_css_named_color_token1] = ACTIONS(109),
    [aux_sym_css_named_color_token2] = ACTIONS(109),
    [aux_sym_css_named_color_token3] = ACTIONS(111),
    [aux_sym_css_named_color_token4] = ACTIONS(109),
    [aux_sym_css_named_color_token5] = ACTIONS(109),
    [aux_sym_css_named_color_token6] = ACTIONS(109),
    [aux_sym_css_named_color_token7] = ACTIONS(109),
    [aux_sym_css_named_color_token8] = ACTIONS(109),
    [aux_sym_css_named_color_token9] = ACTIONS(109),
    [aux_sym_css_named_color_token10] = ACTIONS(111),
    [aux_sym_css_named_color_token11] = ACTIONS(109),
    [aux_sym_css_named_color_token12] = ACTIONS(109),
    [aux_sym_css_named_color_token13] = ACTIONS(109),
    [aux_sym_css_named_color_token14] = ACTIONS(109),
    [aux_sym_css_named_color_token15] = ACTIONS(109),
    [aux_sym_css_named_color_token16] = ACTIONS(109),
    [aux_sym_css_named_color_token17] = ACTIONS(109),
    [aux_sym_css_named_color_token18] = ACTIONS(109),
    [aux_sym_css_named_color_token19] = ACTIONS(109),
    [aux_sym_css_named_color_token20] = ACTIONS(109),
    [aux_sym_css_named_color_token21] = ACTIONS(109),
    [aux_sym_css_named_color_token22] = ACTIONS(109),
    [aux_sym_css_named_color_token23] = ACTIONS(109),
    [aux_sym_css_named_color_token24] = ACTIONS(109),
    [aux_sym_css_named_color_token25] = ACTIONS(109),
    [aux_sym_css_named_color_token26] = ACTIONS(109),
    [aux_sym_css_named_color_token27] = ACTIONS(109),
    [aux_sym_css_named_color_token28] = ACTIONS(109),
    [aux_sym_css_named_color_token29] = ACTIONS(109),
    [aux_sym_css_named_color_token30] = ACTIONS(109),
    [aux_sym_css_named_color_token31] = ACTIONS(109),
    [aux_sym_css_named_color_token32] = ACTIONS(109),
    [aux_sym_css_named_color_token33] = ACTIONS(109),
    [aux_sym_css_named_color_token34] = ACTIONS(109),
    [aux_sym_css_named_color_token35] = ACTIONS(109),
    [aux_sym_css_named_color_token36] = ACTIONS(109),
    [aux_sym_css_named_color_token37] = ACTIONS(109),
    [aux_sym_css_named_color_token38] = ACTIONS(109),
    [aux_sym_css_named_color_token39] = ACTIONS(109),
    [aux_sym_css_named_color_token40] = ACTIONS(109),
    [aux_sym_css_named_color_token41] = ACTIONS(109),
    [aux_sym_css_named_color_token42] = ACTIONS(109),
    [aux_sym_css_named_color_token43] = ACTIONS(109),
    [aux_sym_css_named_color_token44] = ACTIONS(109),
    [aux_sym_css_named_color_token45] = ACTIONS(109),
    [aux_sym_css_named_color_token46] = ACTIONS(109),
    [aux_sym_css_named_color_token47] = ACTIONS(109),
    [aux_sym_css_named_color_token48] = ACTIONS(109),
    [aux_sym_css_named_color_token49] = ACTIONS(109),
    [aux_sym_css_named_color_token50] = ACTIONS(109),
    [aux_sym_css_named_color_token51] = ACTIONS(109),
    [aux_sym_css_named_color_token52] = ACTIONS(111),
    [aux_sym_css_named_color_token53] = ACTIONS(109),
    [aux_sym_css_named_color_token54] = ACTIONS(109),
    [aux_sym_css_named_color_token55] = ACTIONS(111),
    [aux_sym_css_named_color_token56] = ACTIONS(109),
    [aux_sym_css_named_color_token57] = ACTIONS(109),
    [aux_sym_css_named_color_token58] = ACTIONS(109),
    [aux_sym_css_named_color_token59] = ACTIONS(109),
    [aux_sym_css_named_color_token60] = ACTIONS(109),
    [aux_sym_css_named_color_token61] = ACTIONS(109),
    [aux_sym_css_named_color_token62] = ACTIONS(109),
    [aux_sym_css_named_color_token63] = ACTIONS(109),
    [aux_sym_css_named_color_token64] = ACTIONS(111),
    [aux_sym_css_named_color_token65] = ACTIONS(109),
    [aux_sym_css_named_color_token66] = ACTIONS(109),
    [aux_sym_css_named_color_token67] = ACTIONS(109),
    [aux_sym_css_named_color_token68] = ACTIONS(109),
    [aux_sym_css_named_color_token69] = ACTIONS(109),
    [aux_sym_css_named_color_token70] = ACTIONS(109),
    [aux_sym_css_named_color_token71] = ACTIONS(109),
    [aux_sym_css_named_color_token72] = ACTIONS(109),
    [aux_sym_css_named_color_token73] = ACTIONS(109),
    [aux_sym_css_named_color_token74] = ACTIONS(109),
    [aux_sym_css_named_color_token75] = ACTIONS(109),
    [aux_sym_css_named_color_token76] = ACTIONS(109),
    [aux_sym_css_named_color_token77] = ACTIONS(109),
    [aux_sym_css_named_color_token78] = ACTIONS(109),
    [aux_sym_css_named_color_token79] = ACTIONS(109),
    [aux_sym_css_named_color_token80] = ACTIONS(109),
    [aux_sym_css_named_color_token81] = ACTIONS(109),
    [aux_sym_css_named_color_token82] = ACTIONS(109),
    [aux_sym_css_named_color_token83] = ACTIONS(111),
    [aux_sym_css_named_color_token84] = ACTIONS(109),
    [aux_sym_css_named_color_token85] = ACTIONS(109),
    [aux_sym_css_named_color_token86] = ACTIONS(109),
    [aux_sym_css_named_color_token87] = ACTIONS(109),
    [aux_sym_css_named_color_token88] = ACTIONS(109),
    [aux_sym_css_named_color_token89] = ACTIONS(109),
    [aux_sym_css_named_color_token90] = ACTIONS(109),
    [aux_sym_css_named_color_token91] = ACTIONS(109),
    [aux_sym_css_named_color_token92] = ACTIONS(109),
    [aux_sym_css_named_color_token93] = ACTIONS(109),
    [aux_sym_css_named_color_token94] = ACTIONS(109),
    [aux_sym_css_named_color_token95] = ACTIONS(109),
    [aux_sym_css_named_color_token96] = ACTIONS(109),
    [aux_sym_css_named_color_token97] = ACTIONS(109),
    [aux_sym_css_named_color_token98] = ACTIONS(109),
    [aux_sym_css_named_color_token99] = ACTIONS(109),
    [aux_sym_css_named_color_token100] = ACTIONS(109),
    [aux_sym_css_named_color_token101] = ACTIONS(109),
    [aux_sym_css_named_color_token102] = ACTIONS(109),
    [aux_sym_css_named_color_token103] = ACTIONS(109),
    [aux_sym_css_named_color_token104] = ACTIONS(111),
    [aux_sym_css_named_color_token105] = ACTIONS(109),
    [aux_sym_css_named_color_token106] = ACTIONS(111),
    [aux_sym_css_named_color_token107] = ACTIONS(109),
    [aux_sym_css_named_color_token108] = ACTIONS(109),
    [aux_sym_css_named_color_token109] = ACTIONS(109),
    [aux_sym_css_named_color_token110] = ACTIONS(109),
    [aux_sym_css_named_color_token111] = ACTIONS(109),
    [aux_sym_css_named_color_token112] = ACTIONS(109),
    [aux_sym_css_named_color_token113] = ACTIONS(109),
    [aux_sym_css_named_color_token114] = ACTIONS(109),
    [aux_sym_css_named_color_token115] = ACTIONS(109),
    [aux_sym_css_named_color_token116] = ACTIONS(109),
    [aux_sym_css_named_color_token117] = ACTIONS(109),
    [aux_sym_css_named_color_token118] = ACTIONS(109),
    [aux_sym_css_named_color_token119] = ACTIONS(109),
    [aux_sym_css_named_color_token120] = ACTIONS(109),
    [aux_sym_css_named_color_token121] = ACTIONS(109),
    [aux_sym_css_named_color_token122] = ACTIONS(109),
    [aux_sym_css_named_color_token123] = ACTIONS(109),
    [aux_sym_css_named_color_token124] = ACTIONS(109),
    [aux_sym_css_named_color_token125] = ACTIONS(109),
    [aux_sym_css_named_color_token126] = ACTIONS(109),
    [aux_sym_css_named_color_token127] = ACTIONS(109),
    [aux_sym_css_named_color_token128] = ACTIONS(109),
    [aux_sym_css_named_color_token129] = ACTIONS(109),
    [aux_sym_css_named_color_token130] = ACTIONS(109),
    [aux_sym_css_named_color_token131] = ACTIONS(109),
    [aux_sym_css_named_color_token132] = ACTIONS(109),
    [aux_sym_css_named_color_token133] = ACTIONS(109),
    [aux_sym_css_named_color_token134] = ACTIONS(109),
    [aux_sym_css_named_color_token135] = ACTIONS(109),
    [aux_sym_css_named_color_token136] = ACTIONS(109),
    [aux_sym_css_named_color_token137] = ACTIONS(109),
    [aux_sym_css_named_color_token138] = ACTIONS(109),
    [aux_sym_css_named_color_token139] = ACTIONS(109),
    [aux_sym_css_named_color_token140] = ACTIONS(109),
    [aux_sym_css_named_color_token141] = ACTIONS(109),
    [aux_sym_css_named_color_token142] = ACTIONS(109),
    [aux_sym_css_named_color_token143] = ACTIONS(109),
    [aux_sym_css_named_color_token144] = ACTIONS(109),
    [aux_sym_css_named_color_token145] = ACTIONS(111),
    [aux_sym_css_named_color_token146] = ACTIONS(109),
    [aux_sym_css_named_color_token147] = ACTIONS(111),
    [aux_sym_css_named_color_token148] = ACTIONS(109),
    [sym_css_keyword_transparent] = ACTIONS(109),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [aux_sym_source_file_token1] = ACTIONS(119),
    [aux_sym_source_file_token2] = ACTIONS(119),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(119),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(117),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(119),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(117),
    [aux_sym_css_function_hwb_token1] = ACTIONS(117),
    [aux_sym_css_function_lab_token1] = ACTIONS(117),
    [aux_sym_css_function_oklab_token1] = ACTIONS(117),
    [aux_sym_css_function_lch_token1] = ACTIONS(117),
    [aux_sym_css_function_oklch_token1] = ACTIONS(117),
    [aux_sym_css_function_color_token1] = ACTIONS(117),
    [sym__css_hex_color_6_digits] = ACTIONS(119),
    [sym__css_hex_color_8_digits] = ACTIONS(117),
    [sym__css_hex_color_3_digits] = ACTIONS(119),
    [sym__css_hex_color_4_digits] = ACTIONS(119),
    [aux_sym_css_named_color_token1] = ACTIONS(117),
    [aux_sym_css_named_color_token2] = ACTIONS(117),
    [aux_sym_css_named_color_token3] = ACTIONS(119),
    [aux_sym_css_named_color_token4] = ACTIONS(117),
    [aux_sym_css_named_color_token5] = ACTIONS(117),
    [aux_sym_css_named_color_token6] = ACTIONS(117),
    [aux_sym_css_named_color_token7] = ACTIONS(117),
    [aux_sym_css_named_color_token8] = ACTIONS(117),
    [aux_sym_css_named_color_token9] = ACTIONS(117),
    [aux_sym_css_named_color_token10] = ACTIONS(119),
    [aux_sym_css_named_color_token11] = ACTIONS(117),
    [aux_sym_css_named_color_token12] = ACTIONS(117),
    [aux_sym_css_named_color_token13] = ACTIONS(117),
    [aux_sym_css_named_color_token14] = ACTIONS(117),
    [aux_sym_css_named_color_token15] = ACTIONS(117),
    [aux_sym_css_named_color_token16] = ACTIONS(117),
    [aux_sym_css_named_color_token17] = ACTIONS(117),
    [aux_sym_css_named_color_token18] = ACTIONS(117),
    [aux_sym_css_named_color_token19] = ACTIONS(117),
    [aux_sym_css_named_color_token20] = ACTIONS(117),
    [aux_sym_css_named_color_token21] = ACTIONS(117),
    [aux_sym_css_named_color_token22] = ACTIONS(117),
    [aux_sym_css_named_color_token23] = ACTIONS(117),
    [aux_sym_css_named_color_token24] = ACTIONS(117),
    [aux_sym_css_named_color_token25] = ACTIONS(117),
    [aux_sym_css_named_color_token26] = ACTIONS(117),
    [aux_sym_css_named_color_token27] = ACTIONS(117),
    [aux_sym_css_named_color_token28] = ACTIONS(117),
    [aux_sym_css_named_color_token29] = ACTIONS(117),
    [aux_sym_css_named_color_token30] = ACTIONS(117),
    [aux_sym_css_named_color_token31] = ACTIONS(117),
    [aux_sym_css_named_color_token32] = ACTIONS(117),
    [aux_sym_css_named_color_token33] = ACTIONS(117),
    [aux_sym_css_named_color_token34] = ACTIONS(117),
    [aux_sym_css_named_color_token35] = ACTIONS(117),
    [aux_sym_css_named_color_token36] = ACTIONS(117),
    [aux_sym_css_named_color_token37] = ACTIONS(117),
    [aux_sym_css_named_color_token38] = ACTIONS(117),
    [aux_sym_css_named_color_token39] = ACTIONS(117),
    [aux_sym_css_named_color_token40] = ACTIONS(117),
    [aux_sym_css_named_color_token41] = ACTIONS(117),
    [aux_sym_css_named_color_token42] = ACTIONS(117),
    [aux_sym_css_named_color_token43] = ACTIONS(117),
    [aux_sym_css_named_color_token44] = ACTIONS(117),
    [aux_sym_css_named_color_token45] = ACTIONS(117),
    [aux_sym_css_named_color_token46] = ACTIONS(117),
    [aux_sym_css_named_color_token47] = ACTIONS(117),
    [aux_sym_css_named_color_token48] = ACTIONS(117),
    [aux_sym_css_named_color_token49] = ACTIONS(117),
    [aux_sym_css_named_color_token50] = ACTIONS(117),
    [aux_sym_css_named_color_token51] = ACTIONS(117),
    [aux_sym_css_named_color_token52] = ACTIONS(119),
    [aux_sym_css_named_color_token53] = ACTIONS(117),
    [aux_sym_css_named_color_token54] = ACTIONS(117),
    [aux_sym_css_named_color_token55] = ACTIONS(119),
    [aux_sym_css_named_color_token56] = ACTIONS(117),
    [aux_sym_css_named_color_token57] = ACTIONS(117),
    [aux_sym_css_named_color_token58] = ACTIONS(117),
    [aux_sym_css_named_color_token59] = ACTIONS(117),
    [aux_sym_css_named_color_token60] = ACTIONS(117),
    [aux_sym_css_named_color_token61] = ACTIONS(117),
    [aux_sym_css_named_color_token62] = ACTIONS(117),
    [aux_sym_css_named_color_token63] = ACTIONS(117),
    [aux_sym_css_named_color_token64] = ACTIONS(119),
    [aux_sym_css_named_color_token65] = ACTIONS(117),
    [aux_sym_css_named_color_token66] = ACTIONS(117),
    [aux_sym_css_named_color_token67] = ACTIONS(117),
    [aux_sym_css_named_color_token68] = ACTIONS(117),
    [aux_sym_css_named_color_token69] = ACTIONS(117),
    [aux_sym_css_named_color_token70] = ACTIONS(117),
    [aux_sym_css_named_color_token71] = ACTIONS(117),
    [aux_sym_css_named_color_token72] = ACTIONS(117),
    [aux_sym_css_named_color_token73] = ACTIONS(117),
    [aux_sym_css_named_color_token74] = ACTIONS(117),
    [aux_sym_css_named_color_token75] = ACTIONS(117),
    [aux_sym_css_named_color_token76] = ACTIONS(117),
    [aux_sym_css_named_color_token77] = ACTIONS(117),
    [aux_sym_css_named_color_token78] = ACTIONS(117),
    [aux_sym_css_named_color_token79] = ACTIONS(117),
    [aux_sym_css_named_color_token80] = ACTIONS(117),
    [aux_sym_css_named_color_token81] = ACTIONS(117),
    [aux_sym_css_named_color_token82] = ACTIONS(117),
    [aux_sym_css_named_color_token83] = ACTIONS(119),
    [aux_sym_css_named_color_token84] = ACTIONS(117),
    [aux_sym_css_named_color_token85] = ACTIONS(117),
    [aux_sym_css_named_color_token86] = ACTIONS(117),
    [aux_sym_css_named_color_token87] = ACTIONS(117),
    [aux_sym_css_named_color_token88] = ACTIONS(117),
    [aux_sym_css_named_color_token89] = ACTIONS(117),
    [aux_sym_css_named_color_token90] = ACTIONS(117),
    [aux_sym_css_named_color_token91] = ACTIONS(117),
    [aux_sym_css_named_color_token92] = ACTIONS(117),
    [aux_sym_css_named_color_token93] = ACTIONS(117),
    [aux_sym_css_named_color_token94] = ACTIONS(117),
    [aux_sym_css_named_color_token95] = ACTIONS(117),
    [aux_sym_css_named_color_token96] = ACTIONS(117),
    [aux_sym_css_named_color_token97] = ACTIONS(117),
    [aux_sym_css_named_color_token98] = ACTIONS(117),
    [aux_sym_css_named_color_token99] = ACTIONS(117),
    [aux_sym_css_named_color_token100] = ACTIONS(117),
    [aux_sym_css_named_color_token101] = ACTIONS(117),
    [aux_sym_css_named_color_token102] = ACTIONS(117),
    [aux_sym_css_named_color_token103] = ACTIONS(117),
    [aux_sym_css_named_color_token104] = ACTIONS(119),
    [aux_sym_css_named_color_token105] = ACTIONS(117),
    [aux_sym_css_named_color_token106] = ACTIONS(119),
    [aux_sym_css_named_color_token107] = ACTIONS(117),
    [aux_sym_css_named_color_token108] = ACTIONS(117),
    [aux_sym_css_named_color_token109] = ACTIONS(117),
    [aux_sym_css_named_color_token110] = ACTIONS(117),
    [aux_sym_css_named_color_token111] = ACTIONS(117),
    [aux_sym_css_named_color_token112] = ACTIONS(117),
    [aux_sym_css_named_color_token113] = ACTIONS(117),
    [aux_sym_css_named_color_token114] = ACTIONS(117),
    [aux_sym_css_named_color_token115] = ACTIONS(117),
    [aux_sym_css_named_color_token116] = ACTIONS(117),
    [aux_sym_css_named_color_token117] = ACTIONS(117),
    [aux_sym_css_named_color_token118] = ACTIONS(117),
    [aux_sym_css_named_color_token119] = ACTIONS(117),
    [aux_sym_css_named_color_token120] = ACTIONS(117),
    [aux_sym_css_named_color_token121] = ACTIONS(117),
    [aux_sym_css_named_color_token122] = ACTIONS(117),
    [aux_sym_css_named_color_token123] = ACTIONS(117),
    [aux_sym_css_named_color_token124] = ACTIONS(117),
    [aux_sym_css_named_color_token125] = ACTIONS(117),
    [aux_sym_css_named_color_token126] = ACTIONS(117),
    [aux_sym_css_named_color_token127] = ACTIONS(117),
    [aux_sym_css_named_color_token128] = ACTIONS(117),
    [aux_sym_css_named_color_token129] = ACTIONS(117),
    [aux_sym_css_named_color_token130] = ACTIONS(117),
    [aux_sym_css_named_color_token131] = ACTIONS(117),
    [aux_sym_css_named_color_token132] = ACTIONS(117),
    [aux_sym_css_named_color_token133] = ACTIONS(117),
    [aux_sym_css_named_color_token134] = ACTIONS(117),
    [aux_sym_css_named_color_token135] = ACTIONS(117),
    [aux_sym_css_named_color_token136] = ACTIONS(117),
    [aux_sym_css_named_color_token137] = ACTIONS(117),
    [aux_sym_css_named_color_token138] = ACTIONS(117),
    [aux_sym_css_named_color_token139] = ACTIONS(117),
    [aux_sym_css_named_color_token140] = ACTIONS(117),
    [aux_sym_css_named_color_token141] = ACTIONS(117),
    [aux_sym_css_named_color_token142] = ACTIONS(117),
    [aux_sym_css_named_color_token143] = ACTIONS(117),
    [aux_sym_css_named_color_token144] = ACTIONS(117),
    [aux_sym_css_named_color_token145] = ACTIONS(119),
    [aux_sym_css_named_color_token146] = ACTIONS(117),
    [aux_sym_css_named_color_token147] = ACTIONS(119),
    [aux_sym_css_named_color_token148] = ACTIONS(117),
    [sym_css_keyword_transparent] = ACTIONS(117),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [aux_sym_source_file_token1] = ACTIONS(123),
    [aux_sym_source_file_token2] = ACTIONS(123),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(123),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(121),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(123),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(121),
    [aux_sym_css_function_hwb_token1] = ACTIONS(121),
    [aux_sym_css_function_lab_token1] = ACTIONS(121),
    [aux_sym_css_function_oklab_token1] = ACTIONS(121),
    [aux_sym_css_function_lch_token1] = ACTIONS(121),
    [aux_sym_css_function_oklch_token1] = ACTIONS(121),
    [aux_sym_css_function_color_token1] = ACTIONS(121),
    [sym__css_hex_color_6_digits] = ACTIONS(123),
    [sym__css_hex_color_8_digits] = ACTIONS(121),
    [sym__css_hex_color_3_digits] = ACTIONS(123),
    [sym__css_hex_color_4_digits] = ACTIONS(123),
    [aux_sym_css_named_color_token1] = ACTIONS(121),
    [aux_sym_css_named_color_token2] = ACTIONS(121),
    [aux_sym_css_named_color_token3] = ACTIONS(123),
    [aux_sym_css_named_color_token4] = ACTIONS(121),
    [aux_sym_css_named_color_token5] = ACTIONS(121),
    [aux_sym_css_named_color_token6] = ACTIONS(121),
    [aux_sym_css_named_color_token7] = ACTIONS(121),
    [aux_sym_css_named_color_token8] = ACTIONS(121),
    [aux_sym_css_named_color_token9] = ACTIONS(121),
    [aux_sym_css_named_color_token10] = ACTIONS(123),
    [aux_sym_css_named_color_token11] = ACTIONS(121),
    [aux_sym_css_named_color_token12] = ACTIONS(121),
    [aux_sym_css_named_color_token13] = ACTIONS(121),
    [aux_sym_css_named_color_token14] = ACTIONS(121),
    [aux_sym_css_named_color_token15] = ACTIONS(121),
    [aux_sym_css_named_color_token16] = ACTIONS(121),
    [aux_sym_css_named_color_token17] = ACTIONS(121),
    [aux_sym_css_named_color_token18] = ACTIONS(121),
    [aux_sym_css_named_color_token19] = ACTIONS(121),
    [aux_sym_css_named_color_token20] = ACTIONS(121),
    [aux_sym_css_named_color_token21] = ACTIONS(121),
    [aux_sym_css_named_color_token22] = ACTIONS(121),
    [aux_sym_css_named_color_token23] = ACTIONS(121),
    [aux_sym_css_named_color_token24] = ACTIONS(121),
    [aux_sym_css_named_color_token25] = ACTIONS(121),
    [aux_sym_css_named_color_token26] = ACTIONS(121),
    [aux_sym_css_named_color_token27] = ACTIONS(121),
    [aux_sym_css_named_color_token28] = ACTIONS(121),
    [aux_sym_css_named_color_token29] = ACTIONS(121),
    [aux_sym_css_named_color_token30] = ACTIONS(121),
    [aux_sym_css_named_color_token31] = ACTIONS(121),
    [aux_sym_css_named_color_token32] = ACTIONS(121),
    [aux_sym_css_named_color_token33] = ACTIONS(121),
    [aux_sym_css_named_color_token34] = ACTIONS(121),
    [aux_sym_css_named_color_token35] = ACTIONS(121),
    [aux_sym_css_named_color_token36] = ACTIONS(121),
    [aux_sym_css_named_color_token37] = ACTIONS(121),
    [aux_sym_css_named_color_token38] = ACTIONS(121),
    [aux_sym_css_named_color_token39] = ACTIONS(121),
    [aux_sym_css_named_color_token40] = ACTIONS(121),
    [aux_sym_css_named_color_token41] = ACTIONS(121),
    [aux_sym_css_named_color_token42] = ACTIONS(121),
    [aux_sym_css_named_color_token43] = ACTIONS(121),
    [aux_sym_css_named_color_token44] = ACTIONS(121),
    [aux_sym_css_named_color_token45] = ACTIONS(121),
    [aux_sym_css_named_color_token46] = ACTIONS(121),
    [aux_sym_css_named_color_token47] = ACTIONS(121),
    [aux_sym_css_named_color_token48] = ACTIONS(121),
    [aux_sym_css_named_color_token49] = ACTIONS(121),
    [aux_sym_css_named_color_token50] = ACTIONS(121),
    [aux_sym_css_named_color_token51] = ACTIONS(121),
    [aux_sym_css_named_color_token52] = ACTIONS(123),
    [aux_sym_css_named_color_token53] = ACTIONS(121),
    [aux_sym_css_named_color_token54] = ACTIONS(121),
    [aux_sym_css_named_color_token55] = ACTIONS(123),
    [aux_sym_css_named_color_token56] = ACTIONS(121),
    [aux_sym_css_named_color_token57] = ACTIONS(121),
    [aux_sym_css_named_color_token58] = ACTIONS(121),
    [aux_sym_css_named_color_token59] = ACTIONS(121),
    [aux_sym_css_named_color_token60] = ACTIONS(121),
    [aux_sym_css_named_color_token61] = ACTIONS(121),
    [aux_sym_css_named_color_token62] = ACTIONS(121),
    [aux_sym_css_named_color_token63] = ACTIONS(121),
    [aux_sym_css_named_color_token64] = ACTIONS(123),
    [aux_sym_css_named_color_token65] = ACTIONS(121),
    [aux_sym_css_named_color_token66] = ACTIONS(121),
    [aux_sym_css_named_color_token67] = ACTIONS(121),
    [aux_sym_css_named_color_token68] = ACTIONS(121),
    [aux_sym_css_named_color_token69] = ACTIONS(121),
    [aux_sym_css_named_color_token70] = ACTIONS(121),
    [aux_sym_css_named_color_token71] = ACTIONS(121),
    [aux_sym_css_named_color_token72] = ACTIONS(121),
    [aux_sym_css_named_color_token73] = ACTIONS(121),
    [aux_sym_css_named_color_token74] = ACTIONS(121),
    [aux_sym_css_named_color_token75] = ACTIONS(121),
    [aux_sym_css_named_color_token76] = ACTIONS(121),
    [aux_sym_css_named_color_token77] = ACTIONS(121),
    [aux_sym_css_named_color_token78] = ACTIONS(121),
    [aux_sym_css_named_color_token79] = ACTIONS(121),
    [aux_sym_css_named_color_token80] = ACTIONS(121),
    [aux_sym_css_named_color_token81] = ACTIONS(121),
    [aux_sym_css_named_color_token82] = ACTIONS(121),
    [aux_sym_css_named_color_token83] = ACTIONS(123),
    [aux_sym_css_named_color_token84] = ACTIONS(121),
    [aux_sym_css_named_color_token85] = ACTIONS(121),
    [aux_sym_css_named_color_token86] = ACTIONS(121),
    [aux_sym_css_named_color_token87] = ACTIONS(121),
    [aux_sym_css_named_color_token88] = ACTIONS(121),
    [aux_sym_css_named_color_token89] = ACTIONS(121),
    [aux_sym_css_named_color_token90] = ACTIONS(121),
    [aux_sym_css_named_color_token91] = ACTIONS(121),
    [aux_sym_css_named_color_token92] = ACTIONS(121),
    [aux_sym_css_named_color_token93] = ACTIONS(121),
    [aux_sym_css_named_color_token94] = ACTIONS(121),
    [aux_sym_css_named_color_token95] = ACTIONS(121),
    [aux_sym_css_named_color_token96] = ACTIONS(121),
    [aux_sym_css_named_color_token97] = ACTIONS(121),
    [aux_sym_css_named_color_token98] = ACTIONS(121),
    [aux_sym_css_named_color_token99] = ACTIONS(121),
    [aux_sym_css_named_color_token100] = ACTIONS(121),
    [aux_sym_css_named_color_token101] = ACTIONS(121),
    [aux_sym_css_named_color_token102] = ACTIONS(121),
    [aux_sym_css_named_color_token103] = ACTIONS(121),
    [aux_sym_css_named_color_token104] = ACTIONS(123),
    [aux_sym_css_named_color_token105] = ACTIONS(121),
    [aux_sym_css_named_color_token106] = ACTIONS(123),
    [aux_sym_css_named_color_token107] = ACTIONS(121),
    [aux_sym_css_named_color_token108] = ACTIONS(121),
    [aux_sym_css_named_color_token109] = ACTIONS(121),
    [aux_sym_css_named_color_token110] = ACTIONS(121),
    [aux_sym_css_named_color_token111] = ACTIONS(121),
    [aux_sym_css_named_color_token112] = ACTIONS(121),
    [aux_sym_css_named_color_token113] = ACTIONS(121),
    [aux_sym_css_named_color_token114] = ACTIONS(121),
    [aux_sym_css_named_color_token115] = ACTIONS(121),
    [aux_sym_css_named_color_token116] = ACTIONS(121),
    [aux_sym_css_named_color_token117] = ACTIONS(121),
    [aux_sym_css_named_color_token118] = ACTIONS(121),
    [aux_sym_css_named_color_token119] = ACTIONS(121),
    [aux_sym_css_named_color_token120] = ACTIONS(121),
    [aux_sym_css_named_color_token121] = ACTIONS(121),
    [aux_sym_css_named_color_token122] = ACTIONS(121),
    [aux_sym_css_named_color_token123] = ACTIONS(121),
    [aux_sym_css_named_color_token124] = ACTIONS(121),
    [aux_sym_css_named_color_token125] = ACTIONS(121),
    [aux_sym_css_named_color_token126] = ACTIONS(121),
    [aux_sym_css_named_color_token127] = ACTIONS(121),
    [aux_sym_css_named_color_token128] = ACTIONS(121),
    [aux_sym_css_named_color_token129] = ACTIONS(121),
    [aux_sym_css_named_color_token130] = ACTIONS(121),
    [aux_sym_css_named_color_token131] = ACTIONS(121),
    [aux_sym_css_named_color_token132] = ACTIONS(121),
    [aux_sym_css_named_color_token133] = ACTIONS(121),
    [aux_sym_css_named_color_token134] = ACTIONS(121),
    [aux_sym_css_named_color_token135] = ACTIONS(121),
    [aux_sym_css_named_color_token136] = ACTIONS(121),
    [aux_sym_css_named_color_token137] = ACTIONS(121),
    [aux_sym_css_named_color_token138] = ACTIONS(121),
    [aux_sym_css_named_color_token139] = ACTIONS(121),
    [aux_sym_css_named_color_token140] = ACTIONS(121),
    [aux_sym_css_named_color_token141] = ACTIONS(121),
    [aux_sym_css_named_color_token142] = ACTIONS(121),
    [aux_sym_css_named_color_token143] = ACTIONS(121),
    [aux_sym_css_named_color_token144] = ACTIONS(121),
    [aux_sym_css_named_color_token145] = ACTIONS(123),
    [aux_sym_css_named_color_token146] = ACTIONS(121),
    [aux_sym_css_named_color_token147] = ACTIONS(123),
    [aux_sym_css_named_color_token148] = ACTIONS(121),
    [sym_css_keyword_transparent] = ACTIONS(121),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [aux_sym_source_file_token1] = ACTIONS(127),
    [aux_sym_source_file_token2] = ACTIONS(127),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(127),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(125),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(127),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(125),
    [aux_sym_css_function_hwb_token1] = ACTIONS(125),
    [aux_sym_css_function_lab_token1] = ACTIONS(125),
    [aux_sym_css_function_oklab_token1] = ACTIONS(125),
    [aux_sym_css_function_lch_token1] = ACTIONS(125),
    [aux_sym_css_function_oklch_token1] = ACTIONS(125),
    [aux_sym_css_function_color_token1] = ACTIONS(125),
    [sym__css_hex_color_6_digits] = ACTIONS(127),
    [sym__css_hex_color_8_digits] = ACTIONS(125),
    [sym__css_hex_color_3_digits] = ACTIONS(127),
    [sym__css_hex_color_4_digits] = ACTIONS(127),
    [aux_sym_css_named_color_token1] = ACTIONS(125),
    [aux_sym_css_named_color_token2] = ACTIONS(125),
    [aux_sym_css_named_color_token3] = ACTIONS(127),
    [aux_sym_css_named_color_token4] = ACTIONS(125),
    [aux_sym_css_named_color_token5] = ACTIONS(125),
    [aux_sym_css_named_color_token6] = ACTIONS(125),
    [aux_sym_css_named_color_token7] = ACTIONS(125),
    [aux_sym_css_named_color_token8] = ACTIONS(125),
    [aux_sym_css_named_color_token9] = ACTIONS(125),
    [aux_sym_css_named_color_token10] = ACTIONS(127),
    [aux_sym_css_named_color_token11] = ACTIONS(125),
    [aux_sym_css_named_color_token12] = ACTIONS(125),
    [aux_sym_css_named_color_token13] = ACTIONS(125),
    [aux_sym_css_named_color_token14] = ACTIONS(125),
    [aux_sym_css_named_color_token15] = ACTIONS(125),
    [aux_sym_css_named_color_token16] = ACTIONS(125),
    [aux_sym_css_named_color_token17] = ACTIONS(125),
    [aux_sym_css_named_color_token18] = ACTIONS(125),
    [aux_sym_css_named_color_token19] = ACTIONS(125),
    [aux_sym_css_named_color_token20] = ACTIONS(125),
    [aux_sym_css_named_color_token21] = ACTIONS(125),
    [aux_sym_css_named_color_token22] = ACTIONS(125),
    [aux_sym_css_named_color_token23] = ACTIONS(125),
    [aux_sym_css_named_color_token24] = ACTIONS(125),
    [aux_sym_css_named_color_token25] = ACTIONS(125),
    [aux_sym_css_named_color_token26] = ACTIONS(125),
    [aux_sym_css_named_color_token27] = ACTIONS(125),
    [aux_sym_css_named_color_token28] = ACTIONS(125),
    [aux_sym_css_named_color_token29] = ACTIONS(125),
    [aux_sym_css_named_color_token30] = ACTIONS(125),
    [aux_sym_css_named_color_token31] = ACTIONS(125),
    [aux_sym_css_named_color_token32] = ACTIONS(125),
    [aux_sym_css_named_color_token33] = ACTIONS(125),
    [aux_sym_css_named_color_token34] = ACTIONS(125),
    [aux_sym_css_named_color_token35] = ACTIONS(125),
    [aux_sym_css_named_color_token36] = ACTIONS(125),
    [aux_sym_css_named_color_token37] = ACTIONS(125),
    [aux_sym_css_named_color_token38] = ACTIONS(125),
    [aux_sym_css_named_color_token39] = ACTIONS(125),
    [aux_sym_css_named_color_token40] = ACTIONS(125),
    [aux_sym_css_named_color_token41] = ACTIONS(125),
    [aux_sym_css_named_color_token42] = ACTIONS(125),
    [aux_sym_css_named_color_token43] = ACTIONS(125),
    [aux_sym_css_named_color_token44] = ACTIONS(125),
    [aux_sym_css_named_color_token45] = ACTIONS(125),
    [aux_sym_css_named_color_token46] = ACTIONS(125),
    [aux_sym_css_named_color_token47] = ACTIONS(125),
    [aux_sym_css_named_color_token48] = ACTIONS(125),
    [aux_sym_css_named_color_token49] = ACTIONS(125),
    [aux_sym_css_named_color_token50] = ACTIONS(125),
    [aux_sym_css_named_color_token51] = ACTIONS(125),
    [aux_sym_css_named_color_token52] = ACTIONS(127),
    [aux_sym_css_named_color_token53] = ACTIONS(125),
    [aux_sym_css_named_color_token54] = ACTIONS(125),
    [aux_sym_css_named_color_token55] = ACTIONS(127),
    [aux_sym_css_named_color_token56] = ACTIONS(125),
    [aux_sym_css_named_color_token57] = ACTIONS(125),
    [aux_sym_css_named_color_token58] = ACTIONS(125),
    [aux_sym_css_named_color_token59] = ACTIONS(125),
    [aux_sym_css_named_color_token60] = ACTIONS(125),
    [aux_sym_css_named_color_token61] = ACTIONS(125),
    [aux_sym_css_named_color_token62] = ACTIONS(125),
    [aux_sym_css_named_color_token63] = ACTIONS(125),
    [aux_sym_css_named_color_token64] = ACTIONS(127),
    [aux_sym_css_named_color_token65] = ACTIONS(125),
    [aux_sym_css_named_color_token66] = ACTIONS(125),
    [aux_sym_css_named_color_token67] = ACTIONS(125),
    [aux_sym_css_named_color_token68] = ACTIONS(125),
    [aux_sym_css_named_color_token69] = ACTIONS(125),
    [aux_sym_css_named_color_token70] = ACTIONS(125),
    [aux_sym_css_named_color_token71] = ACTIONS(125),
    [aux_sym_css_named_color_token72] = ACTIONS(125),
    [aux_sym_css_named_color_token73] = ACTIONS(125),
    [aux_sym_css_named_color_token74] = ACTIONS(125),
    [aux_sym_css_named_color_token75] = ACTIONS(125),
    [aux_sym_css_named_color_token76] = ACTIONS(125),
    [aux_sym_css_named_color_token77] = ACTIONS(125),
    [aux_sym_css_named_color_token78] = ACTIONS(125),
    [aux_sym_css_named_color_token79] = ACTIONS(125),
    [aux_sym_css_named_color_token80] = ACTIONS(125),
    [aux_sym_css_named_color_token81] = ACTIONS(125),
    [aux_sym_css_named_color_token82] = ACTIONS(125),
    [aux_sym_css_named_color_token83] = ACTIONS(127),
    [aux_sym_css_named_color_token84] = ACTIONS(125),
    [aux_sym_css_named_color_token85] = ACTIONS(125),
    [aux_sym_css_named_color_token86] = ACTIONS(125),
    [aux_sym_css_named_color_token87] = ACTIONS(125),
    [aux_sym_css_named_color_token88] = ACTIONS(125),
    [aux_sym_css_named_color_token89] = ACTIONS(125),
    [aux_sym_css_named_color_token90] = ACTIONS(125),
    [aux_sym_css_named_color_token91] = ACTIONS(125),
    [aux_sym_css_named_color_token92] = ACTIONS(125),
    [aux_sym_css_named_color_token93] = ACTIONS(125),
    [aux_sym_css_named_color_token94] = ACTIONS(125),
    [aux_sym_css_named_color_token95] = ACTIONS(125),
    [aux_sym_css_named_color_token96] = ACTIONS(125),
    [aux_sym_css_named_color_token97] = ACTIONS(125),
    [aux_sym_css_named_color_token98] = ACTIONS(125),
    [aux_sym_css_named_color_token99] = ACTIONS(125),
    [aux_sym_css_named_color_token100] = ACTIONS(125),
    [aux_sym_css_named_color_token101] = ACTIONS(125),
    [aux_sym_css_named_color_token102] = ACTIONS(125),
    [aux_sym_css_named_color_token103] = ACTIONS(125),
    [aux_sym_css_named_color_token104] = ACTIONS(127),
    [aux_sym_css_named_color_token105] = ACTIONS(125),
    [aux_sym_css_named_color_token106] = ACTIONS(127),
    [aux_sym_css_named_color_token107] = ACTIONS(125),
    [aux_sym_css_named_color_token108] = ACTIONS(125),
    [aux_sym_css_named_color_token109] = ACTIONS(125),
    [aux_sym_css_named_color_token110] = ACTIONS(125),
    [aux_sym_css_named_color_token111] = ACTIONS(125),
    [aux_sym_css_named_color_token112] = ACTIONS(125),
    [aux_sym_css_named_color_token113] = ACTIONS(125),
    [aux_sym_css_named_color_token114] = ACTIONS(125),
    [aux_sym_css_named_color_token115] = ACTIONS(125),
    [aux_sym_css_named_color_token116] = ACTIONS(125),
    [aux_sym_css_named_color_token117] = ACTIONS(125),
    [aux_sym_css_named_color_token118] = ACTIONS(125),
    [aux_sym_css_named_color_token119] = ACTIONS(125),
    [aux_sym_css_named_color_token120] = ACTIONS(125),
    [aux_sym_css_named_color_token121] = ACTIONS(125),
    [aux_sym_css_named_color_token122] = ACTIONS(125),
    [aux_sym_css_named_color_token123] = ACTIONS(125),
    [aux_sym_css_named_color_token124] = ACTIONS(125),
    [aux_sym_css_named_color_token125] = ACTIONS(125),
    [aux_sym_css_named_color_token126] = ACTIONS(125),
    [aux_sym_css_named_color_token127] = ACTIONS(125),
    [aux_sym_css_named_color_token128] = ACTIONS(125),
    [aux_sym_css_named_color_token129] = ACTIONS(125),
    [aux_sym_css_named_color_token130] = ACTIONS(125),
    [aux_sym_css_named_color_token131] = ACTIONS(125),
    [aux_sym_css_named_color_token132] = ACTIONS(125),
    [aux_sym_css_named_color_token133] = ACTIONS(125),
    [aux_sym_css_named_color_token134] = ACTIONS(125),
    [aux_sym_css_named_color_token135] = ACTIONS(125),
    [aux_sym_css_named_color_token136] = ACTIONS(125),
    [aux_sym_css_named_color_token137] = ACTIONS(125),
    [aux_sym_css_named_color_token138] = ACTIONS(125),
    [aux_sym_css_named_color_token139] = ACTIONS(125),
    [aux_sym_css_named_color_token140] = ACTIONS(125),
    [aux_sym_css_named_color_token141] = ACTIONS(125),
    [aux_sym_css_named_color_token142] = ACTIONS(125),
    [aux_sym_css_named_color_token143] = ACTIONS(125),
    [aux_sym_css_named_color_token144] = ACTIONS(125),
    [aux_sym_css_named_color_token145] = ACTIONS(127),
    [aux_sym_css_named_color_token146] = ACTIONS(125),
    [aux_sym_css_named_color_token147] = ACTIONS(127),
    [aux_sym_css_named_color_token148] = ACTIONS(125),
    [sym_css_keyword_transparent] = ACTIONS(125),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_source_file_token1] = ACTIONS(131),
    [aux_sym_source_file_token2] = ACTIONS(131),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(131),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(129),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(131),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(129),
    [aux_sym_css_function_hwb_token1] = ACTIONS(129),
    [aux_sym_css_function_lab_token1] = ACTIONS(129),
    [aux_sym_css_function_oklab_token1] = ACTIONS(129),
    [aux_sym_css_function_lch_token1] = ACTIONS(129),
    [aux_sym_css_function_oklch_token1] = ACTIONS(129),
    [aux_sym_css_function_color_token1] = ACTIONS(129),
    [sym__css_hex_color_6_digits] = ACTIONS(131),
    [sym__css_hex_color_8_digits] = ACTIONS(129),
    [sym__css_hex_color_3_digits] = ACTIONS(131),
    [sym__css_hex_color_4_digits] = ACTIONS(131),
    [aux_sym_css_named_color_token1] = ACTIONS(129),
    [aux_sym_css_named_color_token2] = ACTIONS(129),
    [aux_sym_css_named_color_token3] = ACTIONS(131),
    [aux_sym_css_named_color_token4] = ACTIONS(129),
    [aux_sym_css_named_color_token5] = ACTIONS(129),
    [aux_sym_css_named_color_token6] = ACTIONS(129),
    [aux_sym_css_named_color_token7] = ACTIONS(129),
    [aux_sym_css_named_color_token8] = ACTIONS(129),
    [aux_sym_css_named_color_token9] = ACTIONS(129),
    [aux_sym_css_named_color_token10] = ACTIONS(131),
    [aux_sym_css_named_color_token11] = ACTIONS(129),
    [aux_sym_css_named_color_token12] = ACTIONS(129),
    [aux_sym_css_named_color_token13] = ACTIONS(129),
    [aux_sym_css_named_color_token14] = ACTIONS(129),
    [aux_sym_css_named_color_token15] = ACTIONS(129),
    [aux_sym_css_named_color_token16] = ACTIONS(129),
    [aux_sym_css_named_color_token17] = ACTIONS(129),
    [aux_sym_css_named_color_token18] = ACTIONS(129),
    [aux_sym_css_named_color_token19] = ACTIONS(129),
    [aux_sym_css_named_color_token20] = ACTIONS(129),
    [aux_sym_css_named_color_token21] = ACTIONS(129),
    [aux_sym_css_named_color_token22] = ACTIONS(129),
    [aux_sym_css_named_color_token23] = ACTIONS(129),
    [aux_sym_css_named_color_token24] = ACTIONS(129),
    [aux_sym_css_named_color_token25] = ACTIONS(129),
    [aux_sym_css_named_color_token26] = ACTIONS(129),
    [aux_sym_css_named_color_token27] = ACTIONS(129),
    [aux_sym_css_named_color_token28] = ACTIONS(129),
    [aux_sym_css_named_color_token29] = ACTIONS(129),
    [aux_sym_css_named_color_token30] = ACTIONS(129),
    [aux_sym_css_named_color_token31] = ACTIONS(129),
    [aux_sym_css_named_color_token32] = ACTIONS(129),
    [aux_sym_css_named_color_token33] = ACTIONS(129),
    [aux_sym_css_named_color_token34] = ACTIONS(129),
    [aux_sym_css_named_color_token35] = ACTIONS(129),
    [aux_sym_css_named_color_token36] = ACTIONS(129),
    [aux_sym_css_named_color_token37] = ACTIONS(129),
    [aux_sym_css_named_color_token38] = ACTIONS(129),
    [aux_sym_css_named_color_token39] = ACTIONS(129),
    [aux_sym_css_named_color_token40] = ACTIONS(129),
    [aux_sym_css_named_color_token41] = ACTIONS(129),
    [aux_sym_css_named_color_token42] = ACTIONS(129),
    [aux_sym_css_named_color_token43] = ACTIONS(129),
    [aux_sym_css_named_color_token44] = ACTIONS(129),
    [aux_sym_css_named_color_token45] = ACTIONS(129),
    [aux_sym_css_named_color_token46] = ACTIONS(129),
    [aux_sym_css_named_color_token47] = ACTIONS(129),
    [aux_sym_css_named_color_token48] = ACTIONS(129),
    [aux_sym_css_named_color_token49] = ACTIONS(129),
    [aux_sym_css_named_color_token50] = ACTIONS(129),
    [aux_sym_css_named_color_token51] = ACTIONS(129),
    [aux_sym_css_named_color_token52] = ACTIONS(131),
    [aux_sym_css_named_color_token53] = ACTIONS(129),
    [aux_sym_css_named_color_token54] = ACTIONS(129),
    [aux_sym_css_named_color_token55] = ACTIONS(131),
    [aux_sym_css_named_color_token56] = ACTIONS(129),
    [aux_sym_css_named_color_token57] = ACTIONS(129),
    [aux_sym_css_named_color_token58] = ACTIONS(129),
    [aux_sym_css_named_color_token59] = ACTIONS(129),
    [aux_sym_css_named_color_token60] = ACTIONS(129),
    [aux_sym_css_named_color_token61] = ACTIONS(129),
    [aux_sym_css_named_color_token62] = ACTIONS(129),
    [aux_sym_css_named_color_token63] = ACTIONS(129),
    [aux_sym_css_named_color_token64] = ACTIONS(131),
    [aux_sym_css_named_color_token65] = ACTIONS(129),
    [aux_sym_css_named_color_token66] = ACTIONS(129),
    [aux_sym_css_named_color_token67] = ACTIONS(129),
    [aux_sym_css_named_color_token68] = ACTIONS(129),
    [aux_sym_css_named_color_token69] = ACTIONS(129),
    [aux_sym_css_named_color_token70] = ACTIONS(129),
    [aux_sym_css_named_color_token71] = ACTIONS(129),
    [aux_sym_css_named_color_token72] = ACTIONS(129),
    [aux_sym_css_named_color_token73] = ACTIONS(129),
    [aux_sym_css_named_color_token74] = ACTIONS(129),
    [aux_sym_css_named_color_token75] = ACTIONS(129),
    [aux_sym_css_named_color_token76] = ACTIONS(129),
    [aux_sym_css_named_color_token77] = ACTIONS(129),
    [aux_sym_css_named_color_token78] = ACTIONS(129),
    [aux_sym_css_named_color_token79] = ACTIONS(129),
    [aux_sym_css_named_color_token80] = ACTIONS(129),
    [aux_sym_css_named_color_token81] = ACTIONS(129),
    [aux_sym_css_named_color_token82] = ACTIONS(129),
    [aux_sym_css_named_color_token83] = ACTIONS(131),
    [aux_sym_css_named_color_token84] = ACTIONS(129),
    [aux_sym_css_named_color_token85] = ACTIONS(129),
    [aux_sym_css_named_color_token86] = ACTIONS(129),
    [aux_sym_css_named_color_token87] = ACTIONS(129),
    [aux_sym_css_named_color_token88] = ACTIONS(129),
    [aux_sym_css_named_color_token89] = ACTIONS(129),
    [aux_sym_css_named_color_token90] = ACTIONS(129),
    [aux_sym_css_named_color_token91] = ACTIONS(129),
    [aux_sym_css_named_color_token92] = ACTIONS(129),
    [aux_sym_css_named_color_token93] = ACTIONS(129),
    [aux_sym_css_named_color_token94] = ACTIONS(129),
    [aux_sym_css_named_color_token95] = ACTIONS(129),
    [aux_sym_css_named_color_token96] = ACTIONS(129),
    [aux_sym_css_named_color_token97] = ACTIONS(129),
    [aux_sym_css_named_color_token98] = ACTIONS(129),
    [aux_sym_css_named_color_token99] = ACTIONS(129),
    [aux_sym_css_named_color_token100] = ACTIONS(129),
    [aux_sym_css_named_color_token101] = ACTIONS(129),
    [aux_sym_css_named_color_token102] = ACTIONS(129),
    [aux_sym_css_named_color_token103] = ACTIONS(129),
    [aux_sym_css_named_color_token104] = ACTIONS(131),
    [aux_sym_css_named_color_token105] = ACTIONS(129),
    [aux_sym_css_named_color_token106] = ACTIONS(131),
    [aux_sym_css_named_color_token107] = ACTIONS(129),
    [aux_sym_css_named_color_token108] = ACTIONS(129),
    [aux_sym_css_named_color_token109] = ACTIONS(129),
    [aux_sym_css_named_color_token110] = ACTIONS(129),
    [aux_sym_css_named_color_token111] = ACTIONS(129),
    [aux_sym_css_named_color_token112] = ACTIONS(129),
    [aux_sym_css_named_color_token113] = ACTIONS(129),
    [aux_sym_css_named_color_token114] = ACTIONS(129),
    [aux_sym_css_named_color_token115] = ACTIONS(129),
    [aux_sym_css_named_color_token116] = ACTIONS(129),
    [aux_sym_css_named_color_token117] = ACTIONS(129),
    [aux_sym_css_named_color_token118] = ACTIONS(129),
    [aux_sym_css_named_color_token119] = ACTIONS(129),
    [aux_sym_css_named_color_token120] = ACTIONS(129),
    [aux_sym_css_named_color_token121] = ACTIONS(129),
    [aux_sym_css_named_color_token122] = ACTIONS(129),
    [aux_sym_css_named_color_token123] = ACTIONS(129),
    [aux_sym_css_named_color_token124] = ACTIONS(129),
    [aux_sym_css_named_color_token125] = ACTIONS(129),
    [aux_sym_css_named_color_token126] = ACTIONS(129),
    [aux_sym_css_named_color_token127] = ACTIONS(129),
    [aux_sym_css_named_color_token128] = ACTIONS(129),
    [aux_sym_css_named_color_token129] = ACTIONS(129),
    [aux_sym_css_named_color_token130] = ACTIONS(129),
    [aux_sym_css_named_color_token131] = ACTIONS(129),
    [aux_sym_css_named_color_token132] = ACTIONS(129),
    [aux_sym_css_named_color_token133] = ACTIONS(129),
    [aux_sym_css_named_color_token134] = ACTIONS(129),
    [aux_sym_css_named_color_token135] = ACTIONS(129),
    [aux_sym_css_named_color_token136] = ACTIONS(129),
    [aux_sym_css_named_color_token137] = ACTIONS(129),
    [aux_sym_css_named_color_token138] = ACTIONS(129),
    [aux_sym_css_named_color_token139] = ACTIONS(129),
    [aux_sym_css_named_color_token140] = ACTIONS(129),
    [aux_sym_css_named_color_token141] = ACTIONS(129),
    [aux_sym_css_named_color_token142] = ACTIONS(129),
    [aux_sym_css_named_color_token143] = ACTIONS(129),
    [aux_sym_css_named_color_token144] = ACTIONS(129),
    [aux_sym_css_named_color_token145] = ACTIONS(131),
    [aux_sym_css_named_color_token146] = ACTIONS(129),
    [aux_sym_css_named_color_token147] = ACTIONS(131),
    [aux_sym_css_named_color_token148] = ACTIONS(129),
    [sym_css_keyword_transparent] = ACTIONS(129),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [aux_sym_source_file_token1] = ACTIONS(135),
    [aux_sym_source_file_token2] = ACTIONS(135),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(135),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(133),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(135),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(133),
    [aux_sym_css_function_hwb_token1] = ACTIONS(133),
    [aux_sym_css_function_lab_token1] = ACTIONS(133),
    [aux_sym_css_function_oklab_token1] = ACTIONS(133),
    [aux_sym_css_function_lch_token1] = ACTIONS(133),
    [aux_sym_css_function_oklch_token1] = ACTIONS(133),
    [aux_sym_css_function_color_token1] = ACTIONS(133),
    [sym__css_hex_color_6_digits] = ACTIONS(135),
    [sym__css_hex_color_8_digits] = ACTIONS(133),
    [sym__css_hex_color_3_digits] = ACTIONS(135),
    [sym__css_hex_color_4_digits] = ACTIONS(135),
    [aux_sym_css_named_color_token1] = ACTIONS(133),
    [aux_sym_css_named_color_token2] = ACTIONS(133),
    [aux_sym_css_named_color_token3] = ACTIONS(135),
    [aux_sym_css_named_color_token4] = ACTIONS(133),
    [aux_sym_css_named_color_token5] = ACTIONS(133),
    [aux_sym_css_named_color_token6] = ACTIONS(133),
    [aux_sym_css_named_color_token7] = ACTIONS(133),
    [aux_sym_css_named_color_token8] = ACTIONS(133),
    [aux_sym_css_named_color_token9] = ACTIONS(133),
    [aux_sym_css_named_color_token10] = ACTIONS(135),
    [aux_sym_css_named_color_token11] = ACTIONS(133),
    [aux_sym_css_named_color_token12] = ACTIONS(133),
    [aux_sym_css_named_color_token13] = ACTIONS(133),
    [aux_sym_css_named_color_token14] = ACTIONS(133),
    [aux_sym_css_named_color_token15] = ACTIONS(133),
    [aux_sym_css_named_color_token16] = ACTIONS(133),
    [aux_sym_css_named_color_token17] = ACTIONS(133),
    [aux_sym_css_named_color_token18] = ACTIONS(133),
    [aux_sym_css_named_color_token19] = ACTIONS(133),
    [aux_sym_css_named_color_token20] = ACTIONS(133),
    [aux_sym_css_named_color_token21] = ACTIONS(133),
    [aux_sym_css_named_color_token22] = ACTIONS(133),
    [aux_sym_css_named_color_token23] = ACTIONS(133),
    [aux_sym_css_named_color_token24] = ACTIONS(133),
    [aux_sym_css_named_color_token25] = ACTIONS(133),
    [aux_sym_css_named_color_token26] = ACTIONS(133),
    [aux_sym_css_named_color_token27] = ACTIONS(133),
    [aux_sym_css_named_color_token28] = ACTIONS(133),
    [aux_sym_css_named_color_token29] = ACTIONS(133),
    [aux_sym_css_named_color_token30] = ACTIONS(133),
    [aux_sym_css_named_color_token31] = ACTIONS(133),
    [aux_sym_css_named_color_token32] = ACTIONS(133),
    [aux_sym_css_named_color_token33] = ACTIONS(133),
    [aux_sym_css_named_color_token34] = ACTIONS(133),
    [aux_sym_css_named_color_token35] = ACTIONS(133),
    [aux_sym_css_named_color_token36] = ACTIONS(133),
    [aux_sym_css_named_color_token37] = ACTIONS(133),
    [aux_sym_css_named_color_token38] = ACTIONS(133),
    [aux_sym_css_named_color_token39] = ACTIONS(133),
    [aux_sym_css_named_color_token40] = ACTIONS(133),
    [aux_sym_css_named_color_token41] = ACTIONS(133),
    [aux_sym_css_named_color_token42] = ACTIONS(133),
    [aux_sym_css_named_color_token43] = ACTIONS(133),
    [aux_sym_css_named_color_token44] = ACTIONS(133),
    [aux_sym_css_named_color_token45] = ACTIONS(133),
    [aux_sym_css_named_color_token46] = ACTIONS(133),
    [aux_sym_css_named_color_token47] = ACTIONS(133),
    [aux_sym_css_named_color_token48] = ACTIONS(133),
    [aux_sym_css_named_color_token49] = ACTIONS(133),
    [aux_sym_css_named_color_token50] = ACTIONS(133),
    [aux_sym_css_named_color_token51] = ACTIONS(133),
    [aux_sym_css_named_color_token52] = ACTIONS(135),
    [aux_sym_css_named_color_token53] = ACTIONS(133),
    [aux_sym_css_named_color_token54] = ACTIONS(133),
    [aux_sym_css_named_color_token55] = ACTIONS(135),
    [aux_sym_css_named_color_token56] = ACTIONS(133),
    [aux_sym_css_named_color_token57] = ACTIONS(133),
    [aux_sym_css_named_color_token58] = ACTIONS(133),
    [aux_sym_css_named_color_token59] = ACTIONS(133),
    [aux_sym_css_named_color_token60] = ACTIONS(133),
    [aux_sym_css_named_color_token61] = ACTIONS(133),
    [aux_sym_css_named_color_token62] = ACTIONS(133),
    [aux_sym_css_named_color_token63] = ACTIONS(133),
    [aux_sym_css_named_color_token64] = ACTIONS(135),
    [aux_sym_css_named_color_token65] = ACTIONS(133),
    [aux_sym_css_named_color_token66] = ACTIONS(133),
    [aux_sym_css_named_color_token67] = ACTIONS(133),
    [aux_sym_css_named_color_token68] = ACTIONS(133),
    [aux_sym_css_named_color_token69] = ACTIONS(133),
    [aux_sym_css_named_color_token70] = ACTIONS(133),
    [aux_sym_css_named_color_token71] = ACTIONS(133),
    [aux_sym_css_named_color_token72] = ACTIONS(133),
    [aux_sym_css_named_color_token73] = ACTIONS(133),
    [aux_sym_css_named_color_token74] = ACTIONS(133),
    [aux_sym_css_named_color_token75] = ACTIONS(133),
    [aux_sym_css_named_color_token76] = ACTIONS(133),
    [aux_sym_css_named_color_token77] = ACTIONS(133),
    [aux_sym_css_named_color_token78] = ACTIONS(133),
    [aux_sym_css_named_color_token79] = ACTIONS(133),
    [aux_sym_css_named_color_token80] = ACTIONS(133),
    [aux_sym_css_named_color_token81] = ACTIONS(133),
    [aux_sym_css_named_color_token82] = ACTIONS(133),
    [aux_sym_css_named_color_token83] = ACTIONS(135),
    [aux_sym_css_named_color_token84] = ACTIONS(133),
    [aux_sym_css_named_color_token85] = ACTIONS(133),
    [aux_sym_css_named_color_token86] = ACTIONS(133),
    [aux_sym_css_named_color_token87] = ACTIONS(133),
    [aux_sym_css_named_color_token88] = ACTIONS(133),
    [aux_sym_css_named_color_token89] = ACTIONS(133),
    [aux_sym_css_named_color_token90] = ACTIONS(133),
    [aux_sym_css_named_color_token91] = ACTIONS(133),
    [aux_sym_css_named_color_token92] = ACTIONS(133),
    [aux_sym_css_named_color_token93] = ACTIONS(133),
    [aux_sym_css_named_color_token94] = ACTIONS(133),
    [aux_sym_css_named_color_token95] = ACTIONS(133),
    [aux_sym_css_named_color_token96] = ACTIONS(133),
    [aux_sym_css_named_color_token97] = ACTIONS(133),
    [aux_sym_css_named_color_token98] = ACTIONS(133),
    [aux_sym_css_named_color_token99] = ACTIONS(133),
    [aux_sym_css_named_color_token100] = ACTIONS(133),
    [aux_sym_css_named_color_token101] = ACTIONS(133),
    [aux_sym_css_named_color_token102] = ACTIONS(133),
    [aux_sym_css_named_color_token103] = ACTIONS(133),
    [aux_sym_css_named_color_token104] = ACTIONS(135),
    [aux_sym_css_named_color_token105] = ACTIONS(133),
    [aux_sym_css_named_color_token106] = ACTIONS(135),
    [aux_sym_css_named_color_token107] = ACTIONS(133),
    [aux_sym_css_named_color_token108] = ACTIONS(133),
    [aux_sym_css_named_color_token109] = ACTIONS(133),
    [aux_sym_css_named_color_token110] = ACTIONS(133),
    [aux_sym_css_named_color_token111] = ACTIONS(133),
    [aux_sym_css_named_color_token112] = ACTIONS(133),
    [aux_sym_css_named_color_token113] = ACTIONS(133),
    [aux_sym_css_named_color_token114] = ACTIONS(133),
    [aux_sym_css_named_color_token115] = ACTIONS(133),
    [aux_sym_css_named_color_token116] = ACTIONS(133),
    [aux_sym_css_named_color_token117] = ACTIONS(133),
    [aux_sym_css_named_color_token118] = ACTIONS(133),
    [aux_sym_css_named_color_token119] = ACTIONS(133),
    [aux_sym_css_named_color_token120] = ACTIONS(133),
    [aux_sym_css_named_color_token121] = ACTIONS(133),
    [aux_sym_css_named_color_token122] = ACTIONS(133),
    [aux_sym_css_named_color_token123] = ACTIONS(133),
    [aux_sym_css_named_color_token124] = ACTIONS(133),
    [aux_sym_css_named_color_token125] = ACTIONS(133),
    [aux_sym_css_named_color_token126] = ACTIONS(133),
    [aux_sym_css_named_color_token127] = ACTIONS(133),
    [aux_sym_css_named_color_token128] = ACTIONS(133),
    [aux_sym_css_named_color_token129] = ACTIONS(133),
    [aux_sym_css_named_color_token130] = ACTIONS(133),
    [aux_sym_css_named_color_token131] = ACTIONS(133),
    [aux_sym_css_named_color_token132] = ACTIONS(133),
    [aux_sym_css_named_color_token133] = ACTIONS(133),
    [aux_sym_css_named_color_token134] = ACTIONS(133),
    [aux_sym_css_named_color_token135] = ACTIONS(133),
    [aux_sym_css_named_color_token136] = ACTIONS(133),
    [aux_sym_css_named_color_token137] = ACTIONS(133),
    [aux_sym_css_named_color_token138] = ACTIONS(133),
    [aux_sym_css_named_color_token139] = ACTIONS(133),
    [aux_sym_css_named_color_token140] = ACTIONS(133),
    [aux_sym_css_named_color_token141] = ACTIONS(133),
    [aux_sym_css_named_color_token142] = ACTIONS(133),
    [aux_sym_css_named_color_token143] = ACTIONS(133),
    [aux_sym_css_named_color_token144] = ACTIONS(133),
    [aux_sym_css_named_color_token145] = ACTIONS(135),
    [aux_sym_css_named_color_token146] = ACTIONS(133),
    [aux_sym_css_named_color_token147] = ACTIONS(135),
    [aux_sym_css_named_color_token148] = ACTIONS(133),
    [sym_css_keyword_transparent] = ACTIONS(133),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [aux_sym_source_file_token1] = ACTIONS(139),
    [aux_sym_source_file_token2] = ACTIONS(139),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(139),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(137),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(139),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(137),
    [aux_sym_css_function_hwb_token1] = ACTIONS(137),
    [aux_sym_css_function_lab_token1] = ACTIONS(137),
    [aux_sym_css_function_oklab_token1] = ACTIONS(137),
    [aux_sym_css_function_lch_token1] = ACTIONS(137),
    [aux_sym_css_function_oklch_token1] = ACTIONS(137),
    [aux_sym_css_function_color_token1] = ACTIONS(137),
    [sym__css_hex_color_6_digits] = ACTIONS(139),
    [sym__css_hex_color_8_digits] = ACTIONS(137),
    [sym__css_hex_color_3_digits] = ACTIONS(139),
    [sym__css_hex_color_4_digits] = ACTIONS(139),
    [aux_sym_css_named_color_token1] = ACTIONS(137),
    [aux_sym_css_named_color_token2] = ACTIONS(137),
    [aux_sym_css_named_color_token3] = ACTIONS(139),
    [aux_sym_css_named_color_token4] = ACTIONS(137),
    [aux_sym_css_named_color_token5] = ACTIONS(137),
    [aux_sym_css_named_color_token6] = ACTIONS(137),
    [aux_sym_css_named_color_token7] = ACTIONS(137),
    [aux_sym_css_named_color_token8] = ACTIONS(137),
    [aux_sym_css_named_color_token9] = ACTIONS(137),
    [aux_sym_css_named_color_token10] = ACTIONS(139),
    [aux_sym_css_named_color_token11] = ACTIONS(137),
    [aux_sym_css_named_color_token12] = ACTIONS(137),
    [aux_sym_css_named_color_token13] = ACTIONS(137),
    [aux_sym_css_named_color_token14] = ACTIONS(137),
    [aux_sym_css_named_color_token15] = ACTIONS(137),
    [aux_sym_css_named_color_token16] = ACTIONS(137),
    [aux_sym_css_named_color_token17] = ACTIONS(137),
    [aux_sym_css_named_color_token18] = ACTIONS(137),
    [aux_sym_css_named_color_token19] = ACTIONS(137),
    [aux_sym_css_named_color_token20] = ACTIONS(137),
    [aux_sym_css_named_color_token21] = ACTIONS(137),
    [aux_sym_css_named_color_token22] = ACTIONS(137),
    [aux_sym_css_named_color_token23] = ACTIONS(137),
    [aux_sym_css_named_color_token24] = ACTIONS(137),
    [aux_sym_css_named_color_token25] = ACTIONS(137),
    [aux_sym_css_named_color_token26] = ACTIONS(137),
    [aux_sym_css_named_color_token27] = ACTIONS(137),
    [aux_sym_css_named_color_token28] = ACTIONS(137),
    [aux_sym_css_named_color_token29] = ACTIONS(137),
    [aux_sym_css_named_color_token30] = ACTIONS(137),
    [aux_sym_css_named_color_token31] = ACTIONS(137),
    [aux_sym_css_named_color_token32] = ACTIONS(137),
    [aux_sym_css_named_color_token33] = ACTIONS(137),
    [aux_sym_css_named_color_token34] = ACTIONS(137),
    [aux_sym_css_named_color_token35] = ACTIONS(137),
    [aux_sym_css_named_color_token36] = ACTIONS(137),
    [aux_sym_css_named_color_token37] = ACTIONS(137),
    [aux_sym_css_named_color_token38] = ACTIONS(137),
    [aux_sym_css_named_color_token39] = ACTIONS(137),
    [aux_sym_css_named_color_token40] = ACTIONS(137),
    [aux_sym_css_named_color_token41] = ACTIONS(137),
    [aux_sym_css_named_color_token42] = ACTIONS(137),
    [aux_sym_css_named_color_token43] = ACTIONS(137),
    [aux_sym_css_named_color_token44] = ACTIONS(137),
    [aux_sym_css_named_color_token45] = ACTIONS(137),
    [aux_sym_css_named_color_token46] = ACTIONS(137),
    [aux_sym_css_named_color_token47] = ACTIONS(137),
    [aux_sym_css_named_color_token48] = ACTIONS(137),
    [aux_sym_css_named_color_token49] = ACTIONS(137),
    [aux_sym_css_named_color_token50] = ACTIONS(137),
    [aux_sym_css_named_color_token51] = ACTIONS(137),
    [aux_sym_css_named_color_token52] = ACTIONS(139),
    [aux_sym_css_named_color_token53] = ACTIONS(137),
    [aux_sym_css_named_color_token54] = ACTIONS(137),
    [aux_sym_css_named_color_token55] = ACTIONS(139),
    [aux_sym_css_named_color_token56] = ACTIONS(137),
    [aux_sym_css_named_color_token57] = ACTIONS(137),
    [aux_sym_css_named_color_token58] = ACTIONS(137),
    [aux_sym_css_named_color_token59] = ACTIONS(137),
    [aux_sym_css_named_color_token60] = ACTIONS(137),
    [aux_sym_css_named_color_token61] = ACTIONS(137),
    [aux_sym_css_named_color_token62] = ACTIONS(137),
    [aux_sym_css_named_color_token63] = ACTIONS(137),
    [aux_sym_css_named_color_token64] = ACTIONS(139),
    [aux_sym_css_named_color_token65] = ACTIONS(137),
    [aux_sym_css_named_color_token66] = ACTIONS(137),
    [aux_sym_css_named_color_token67] = ACTIONS(137),
    [aux_sym_css_named_color_token68] = ACTIONS(137),
    [aux_sym_css_named_color_token69] = ACTIONS(137),
    [aux_sym_css_named_color_token70] = ACTIONS(137),
    [aux_sym_css_named_color_token71] = ACTIONS(137),
    [aux_sym_css_named_color_token72] = ACTIONS(137),
    [aux_sym_css_named_color_token73] = ACTIONS(137),
    [aux_sym_css_named_color_token74] = ACTIONS(137),
    [aux_sym_css_named_color_token75] = ACTIONS(137),
    [aux_sym_css_named_color_token76] = ACTIONS(137),
    [aux_sym_css_named_color_token77] = ACTIONS(137),
    [aux_sym_css_named_color_token78] = ACTIONS(137),
    [aux_sym_css_named_color_token79] = ACTIONS(137),
    [aux_sym_css_named_color_token80] = ACTIONS(137),
    [aux_sym_css_named_color_token81] = ACTIONS(137),
    [aux_sym_css_named_color_token82] = ACTIONS(137),
    [aux_sym_css_named_color_token83] = ACTIONS(139),
    [aux_sym_css_named_color_token84] = ACTIONS(137),
    [aux_sym_css_named_color_token85] = ACTIONS(137),
    [aux_sym_css_named_color_token86] = ACTIONS(137),
    [aux_sym_css_named_color_token87] = ACTIONS(137),
    [aux_sym_css_named_color_token88] = ACTIONS(137),
    [aux_sym_css_named_color_token89] = ACTIONS(137),
    [aux_sym_css_named_color_token90] = ACTIONS(137),
    [aux_sym_css_named_color_token91] = ACTIONS(137),
    [aux_sym_css_named_color_token92] = ACTIONS(137),
    [aux_sym_css_named_color_token93] = ACTIONS(137),
    [aux_sym_css_named_color_token94] = ACTIONS(137),
    [aux_sym_css_named_color_token95] = ACTIONS(137),
    [aux_sym_css_named_color_token96] = ACTIONS(137),
    [aux_sym_css_named_color_token97] = ACTIONS(137),
    [aux_sym_css_named_color_token98] = ACTIONS(137),
    [aux_sym_css_named_color_token99] = ACTIONS(137),
    [aux_sym_css_named_color_token100] = ACTIONS(137),
    [aux_sym_css_named_color_token101] = ACTIONS(137),
    [aux_sym_css_named_color_token102] = ACTIONS(137),
    [aux_sym_css_named_color_token103] = ACTIONS(137),
    [aux_sym_css_named_color_token104] = ACTIONS(139),
    [aux_sym_css_named_color_token105] = ACTIONS(137),
    [aux_sym_css_named_color_token106] = ACTIONS(139),
    [aux_sym_css_named_color_token107] = ACTIONS(137),
    [aux_sym_css_named_color_token108] = ACTIONS(137),
    [aux_sym_css_named_color_token109] = ACTIONS(137),
    [aux_sym_css_named_color_token110] = ACTIONS(137),
    [aux_sym_css_named_color_token111] = ACTIONS(137),
    [aux_sym_css_named_color_token112] = ACTIONS(137),
    [aux_sym_css_named_color_token113] = ACTIONS(137),
    [aux_sym_css_named_color_token114] = ACTIONS(137),
    [aux_sym_css_named_color_token115] = ACTIONS(137),
    [aux_sym_css_named_color_token116] = ACTIONS(137),
    [aux_sym_css_named_color_token117] = ACTIONS(137),
    [aux_sym_css_named_color_token118] = ACTIONS(137),
    [aux_sym_css_named_color_token119] = ACTIONS(137),
    [aux_sym_css_named_color_token120] = ACTIONS(137),
    [aux_sym_css_named_color_token121] = ACTIONS(137),
    [aux_sym_css_named_color_token122] = ACTIONS(137),
    [aux_sym_css_named_color_token123] = ACTIONS(137),
    [aux_sym_css_named_color_token124] = ACTIONS(137),
    [aux_sym_css_named_color_token125] = ACTIONS(137),
    [aux_sym_css_named_color_token126] = ACTIONS(137),
    [aux_sym_css_named_color_token127] = ACTIONS(137),
    [aux_sym_css_named_color_token128] = ACTIONS(137),
    [aux_sym_css_named_color_token129] = ACTIONS(137),
    [aux_sym_css_named_color_token130] = ACTIONS(137),
    [aux_sym_css_named_color_token131] = ACTIONS(137),
    [aux_sym_css_named_color_token132] = ACTIONS(137),
    [aux_sym_css_named_color_token133] = ACTIONS(137),
    [aux_sym_css_named_color_token134] = ACTIONS(137),
    [aux_sym_css_named_color_token135] = ACTIONS(137),
    [aux_sym_css_named_color_token136] = ACTIONS(137),
    [aux_sym_css_named_color_token137] = ACTIONS(137),
    [aux_sym_css_named_color_token138] = ACTIONS(137),
    [aux_sym_css_named_color_token139] = ACTIONS(137),
    [aux_sym_css_named_color_token140] = ACTIONS(137),
    [aux_sym_css_named_color_token141] = ACTIONS(137),
    [aux_sym_css_named_color_token142] = ACTIONS(137),
    [aux_sym_css_named_color_token143] = ACTIONS(137),
    [aux_sym_css_named_color_token144] = ACTIONS(137),
    [aux_sym_css_named_color_token145] = ACTIONS(139),
    [aux_sym_css_named_color_token146] = ACTIONS(137),
    [aux_sym_css_named_color_token147] = ACTIONS(139),
    [aux_sym_css_named_color_token148] = ACTIONS(137),
    [sym_css_keyword_transparent] = ACTIONS(137),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_source_file_token1] = ACTIONS(143),
    [aux_sym_source_file_token2] = ACTIONS(143),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(143),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(141),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(143),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(141),
    [aux_sym_css_function_hwb_token1] = ACTIONS(141),
    [aux_sym_css_function_lab_token1] = ACTIONS(141),
    [aux_sym_css_function_oklab_token1] = ACTIONS(141),
    [aux_sym_css_function_lch_token1] = ACTIONS(141),
    [aux_sym_css_function_oklch_token1] = ACTIONS(141),
    [aux_sym_css_function_color_token1] = ACTIONS(141),
    [sym__css_hex_color_6_digits] = ACTIONS(143),
    [sym__css_hex_color_8_digits] = ACTIONS(141),
    [sym__css_hex_color_3_digits] = ACTIONS(143),
    [sym__css_hex_color_4_digits] = ACTIONS(143),
    [aux_sym_css_named_color_token1] = ACTIONS(141),
    [aux_sym_css_named_color_token2] = ACTIONS(141),
    [aux_sym_css_named_color_token3] = ACTIONS(143),
    [aux_sym_css_named_color_token4] = ACTIONS(141),
    [aux_sym_css_named_color_token5] = ACTIONS(141),
    [aux_sym_css_named_color_token6] = ACTIONS(141),
    [aux_sym_css_named_color_token7] = ACTIONS(141),
    [aux_sym_css_named_color_token8] = ACTIONS(141),
    [aux_sym_css_named_color_token9] = ACTIONS(141),
    [aux_sym_css_named_color_token10] = ACTIONS(143),
    [aux_sym_css_named_color_token11] = ACTIONS(141),
    [aux_sym_css_named_color_token12] = ACTIONS(141),
    [aux_sym_css_named_color_token13] = ACTIONS(141),
    [aux_sym_css_named_color_token14] = ACTIONS(141),
    [aux_sym_css_named_color_token15] = ACTIONS(141),
    [aux_sym_css_named_color_token16] = ACTIONS(141),
    [aux_sym_css_named_color_token17] = ACTIONS(141),
    [aux_sym_css_named_color_token18] = ACTIONS(141),
    [aux_sym_css_named_color_token19] = ACTIONS(141),
    [aux_sym_css_named_color_token20] = ACTIONS(141),
    [aux_sym_css_named_color_token21] = ACTIONS(141),
    [aux_sym_css_named_color_token22] = ACTIONS(141),
    [aux_sym_css_named_color_token23] = ACTIONS(141),
    [aux_sym_css_named_color_token24] = ACTIONS(141),
    [aux_sym_css_named_color_token25] = ACTIONS(141),
    [aux_sym_css_named_color_token26] = ACTIONS(141),
    [aux_sym_css_named_color_token27] = ACTIONS(141),
    [aux_sym_css_named_color_token28] = ACTIONS(141),
    [aux_sym_css_named_color_token29] = ACTIONS(141),
    [aux_sym_css_named_color_token30] = ACTIONS(141),
    [aux_sym_css_named_color_token31] = ACTIONS(141),
    [aux_sym_css_named_color_token32] = ACTIONS(141),
    [aux_sym_css_named_color_token33] = ACTIONS(141),
    [aux_sym_css_named_color_token34] = ACTIONS(141),
    [aux_sym_css_named_color_token35] = ACTIONS(141),
    [aux_sym_css_named_color_token36] = ACTIONS(141),
    [aux_sym_css_named_color_token37] = ACTIONS(141),
    [aux_sym_css_named_color_token38] = ACTIONS(141),
    [aux_sym_css_named_color_token39] = ACTIONS(141),
    [aux_sym_css_named_color_token40] = ACTIONS(141),
    [aux_sym_css_named_color_token41] = ACTIONS(141),
    [aux_sym_css_named_color_token42] = ACTIONS(141),
    [aux_sym_css_named_color_token43] = ACTIONS(141),
    [aux_sym_css_named_color_token44] = ACTIONS(141),
    [aux_sym_css_named_color_token45] = ACTIONS(141),
    [aux_sym_css_named_color_token46] = ACTIONS(141),
    [aux_sym_css_named_color_token47] = ACTIONS(141),
    [aux_sym_css_named_color_token48] = ACTIONS(141),
    [aux_sym_css_named_color_token49] = ACTIONS(141),
    [aux_sym_css_named_color_token50] = ACTIONS(141),
    [aux_sym_css_named_color_token51] = ACTIONS(141),
    [aux_sym_css_named_color_token52] = ACTIONS(143),
    [aux_sym_css_named_color_token53] = ACTIONS(141),
    [aux_sym_css_named_color_token54] = ACTIONS(141),
    [aux_sym_css_named_color_token55] = ACTIONS(143),
    [aux_sym_css_named_color_token56] = ACTIONS(141),
    [aux_sym_css_named_color_token57] = ACTIONS(141),
    [aux_sym_css_named_color_token58] = ACTIONS(141),
    [aux_sym_css_named_color_token59] = ACTIONS(141),
    [aux_sym_css_named_color_token60] = ACTIONS(141),
    [aux_sym_css_named_color_token61] = ACTIONS(141),
    [aux_sym_css_named_color_token62] = ACTIONS(141),
    [aux_sym_css_named_color_token63] = ACTIONS(141),
    [aux_sym_css_named_color_token64] = ACTIONS(143),
    [aux_sym_css_named_color_token65] = ACTIONS(141),
    [aux_sym_css_named_color_token66] = ACTIONS(141),
    [aux_sym_css_named_color_token67] = ACTIONS(141),
    [aux_sym_css_named_color_token68] = ACTIONS(141),
    [aux_sym_css_named_color_token69] = ACTIONS(141),
    [aux_sym_css_named_color_token70] = ACTIONS(141),
    [aux_sym_css_named_color_token71] = ACTIONS(141),
    [aux_sym_css_named_color_token72] = ACTIONS(141),
    [aux_sym_css_named_color_token73] = ACTIONS(141),
    [aux_sym_css_named_color_token74] = ACTIONS(141),
    [aux_sym_css_named_color_token75] = ACTIONS(141),
    [aux_sym_css_named_color_token76] = ACTIONS(141),
    [aux_sym_css_named_color_token77] = ACTIONS(141),
    [aux_sym_css_named_color_token78] = ACTIONS(141),
    [aux_sym_css_named_color_token79] = ACTIONS(141),
    [aux_sym_css_named_color_token80] = ACTIONS(141),
    [aux_sym_css_named_color_token81] = ACTIONS(141),
    [aux_sym_css_named_color_token82] = ACTIONS(141),
    [aux_sym_css_named_color_token83] = ACTIONS(143),
    [aux_sym_css_named_color_token84] = ACTIONS(141),
    [aux_sym_css_named_color_token85] = ACTIONS(141),
    [aux_sym_css_named_color_token86] = ACTIONS(141),
    [aux_sym_css_named_color_token87] = ACTIONS(141),
    [aux_sym_css_named_color_token88] = ACTIONS(141),
    [aux_sym_css_named_color_token89] = ACTIONS(141),
    [aux_sym_css_named_color_token90] = ACTIONS(141),
    [aux_sym_css_named_color_token91] = ACTIONS(141),
    [aux_sym_css_named_color_token92] = ACTIONS(141),
    [aux_sym_css_named_color_token93] = ACTIONS(141),
    [aux_sym_css_named_color_token94] = ACTIONS(141),
    [aux_sym_css_named_color_token95] = ACTIONS(141),
    [aux_sym_css_named_color_token96] = ACTIONS(141),
    [aux_sym_css_named_color_token97] = ACTIONS(141),
    [aux_sym_css_named_color_token98] = ACTIONS(141),
    [aux_sym_css_named_color_token99] = ACTIONS(141),
    [aux_sym_css_named_color_token100] = ACTIONS(141),
    [aux_sym_css_named_color_token101] = ACTIONS(141),
    [aux_sym_css_named_color_token102] = ACTIONS(141),
    [aux_sym_css_named_color_token103] = ACTIONS(141),
    [aux_sym_css_named_color_token104] = ACTIONS(143),
    [aux_sym_css_named_color_token105] = ACTIONS(141),
    [aux_sym_css_named_color_token106] = ACTIONS(143),
    [aux_sym_css_named_color_token107] = ACTIONS(141),
    [aux_sym_css_named_color_token108] = ACTIONS(141),
    [aux_sym_css_named_color_token109] = ACTIONS(141),
    [aux_sym_css_named_color_token110] = ACTIONS(141),
    [aux_sym_css_named_color_token111] = ACTIONS(141),
    [aux_sym_css_named_color_token112] = ACTIONS(141),
    [aux_sym_css_named_color_token113] = ACTIONS(141),
    [aux_sym_css_named_color_token114] = ACTIONS(141),
    [aux_sym_css_named_color_token115] = ACTIONS(141),
    [aux_sym_css_named_color_token116] = ACTIONS(141),
    [aux_sym_css_named_color_token117] = ACTIONS(141),
    [aux_sym_css_named_color_token118] = ACTIONS(141),
    [aux_sym_css_named_color_token119] = ACTIONS(141),
    [aux_sym_css_named_color_token120] = ACTIONS(141),
    [aux_sym_css_named_color_token121] = ACTIONS(141),
    [aux_sym_css_named_color_token122] = ACTIONS(141),
    [aux_sym_css_named_color_token123] = ACTIONS(141),
    [aux_sym_css_named_color_token124] = ACTIONS(141),
    [aux_sym_css_named_color_token125] = ACTIONS(141),
    [aux_sym_css_named_color_token126] = ACTIONS(141),
    [aux_sym_css_named_color_token127] = ACTIONS(141),
    [aux_sym_css_named_color_token128] = ACTIONS(141),
    [aux_sym_css_named_color_token129] = ACTIONS(141),
    [aux_sym_css_named_color_token130] = ACTIONS(141),
    [aux_sym_css_named_color_token131] = ACTIONS(141),
    [aux_sym_css_named_color_token132] = ACTIONS(141),
    [aux_sym_css_named_color_token133] = ACTIONS(141),
    [aux_sym_css_named_color_token134] = ACTIONS(141),
    [aux_sym_css_named_color_token135] = ACTIONS(141),
    [aux_sym_css_named_color_token136] = ACTIONS(141),
    [aux_sym_css_named_color_token137] = ACTIONS(141),
    [aux_sym_css_named_color_token138] = ACTIONS(141),
    [aux_sym_css_named_color_token139] = ACTIONS(141),
    [aux_sym_css_named_color_token140] = ACTIONS(141),
    [aux_sym_css_named_color_token141] = ACTIONS(141),
    [aux_sym_css_named_color_token142] = ACTIONS(141),
    [aux_sym_css_named_color_token143] = ACTIONS(141),
    [aux_sym_css_named_color_token144] = ACTIONS(141),
    [aux_sym_css_named_color_token145] = ACTIONS(143),
    [aux_sym_css_named_color_token146] = ACTIONS(141),
    [aux_sym_css_named_color_token147] = ACTIONS(143),
    [aux_sym_css_named_color_token148] = ACTIONS(141),
    [sym_css_keyword_transparent] = ACTIONS(141),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_source_file_token1] = ACTIONS(147),
    [aux_sym_source_file_token2] = ACTIONS(147),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(147),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(145),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(147),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(145),
    [aux_sym_css_function_hwb_token1] = ACTIONS(145),
    [aux_sym_css_function_lab_token1] = ACTIONS(145),
    [aux_sym_css_function_oklab_token1] = ACTIONS(145),
    [aux_sym_css_function_lch_token1] = ACTIONS(145),
    [aux_sym_css_function_oklch_token1] = ACTIONS(145),
    [aux_sym_css_function_color_token1] = ACTIONS(145),
    [sym__css_hex_color_6_digits] = ACTIONS(147),
    [sym__css_hex_color_8_digits] = ACTIONS(145),
    [sym__css_hex_color_3_digits] = ACTIONS(147),
    [sym__css_hex_color_4_digits] = ACTIONS(147),
    [aux_sym_css_named_color_token1] = ACTIONS(145),
    [aux_sym_css_named_color_token2] = ACTIONS(145),
    [aux_sym_css_named_color_token3] = ACTIONS(147),
    [aux_sym_css_named_color_token4] = ACTIONS(145),
    [aux_sym_css_named_color_token5] = ACTIONS(145),
    [aux_sym_css_named_color_token6] = ACTIONS(145),
    [aux_sym_css_named_color_token7] = ACTIONS(145),
    [aux_sym_css_named_color_token8] = ACTIONS(145),
    [aux_sym_css_named_color_token9] = ACTIONS(145),
    [aux_sym_css_named_color_token10] = ACTIONS(147),
    [aux_sym_css_named_color_token11] = ACTIONS(145),
    [aux_sym_css_named_color_token12] = ACTIONS(145),
    [aux_sym_css_named_color_token13] = ACTIONS(145),
    [aux_sym_css_named_color_token14] = ACTIONS(145),
    [aux_sym_css_named_color_token15] = ACTIONS(145),
    [aux_sym_css_named_color_token16] = ACTIONS(145),
    [aux_sym_css_named_color_token17] = ACTIONS(145),
    [aux_sym_css_named_color_token18] = ACTIONS(145),
    [aux_sym_css_named_color_token19] = ACTIONS(145),
    [aux_sym_css_named_color_token20] = ACTIONS(145),
    [aux_sym_css_named_color_token21] = ACTIONS(145),
    [aux_sym_css_named_color_token22] = ACTIONS(145),
    [aux_sym_css_named_color_token23] = ACTIONS(145),
    [aux_sym_css_named_color_token24] = ACTIONS(145),
    [aux_sym_css_named_color_token25] = ACTIONS(145),
    [aux_sym_css_named_color_token26] = ACTIONS(145),
    [aux_sym_css_named_color_token27] = ACTIONS(145),
    [aux_sym_css_named_color_token28] = ACTIONS(145),
    [aux_sym_css_named_color_token29] = ACTIONS(145),
    [aux_sym_css_named_color_token30] = ACTIONS(145),
    [aux_sym_css_named_color_token31] = ACTIONS(145),
    [aux_sym_css_named_color_token32] = ACTIONS(145),
    [aux_sym_css_named_color_token33] = ACTIONS(145),
    [aux_sym_css_named_color_token34] = ACTIONS(145),
    [aux_sym_css_named_color_token35] = ACTIONS(145),
    [aux_sym_css_named_color_token36] = ACTIONS(145),
    [aux_sym_css_named_color_token37] = ACTIONS(145),
    [aux_sym_css_named_color_token38] = ACTIONS(145),
    [aux_sym_css_named_color_token39] = ACTIONS(145),
    [aux_sym_css_named_color_token40] = ACTIONS(145),
    [aux_sym_css_named_color_token41] = ACTIONS(145),
    [aux_sym_css_named_color_token42] = ACTIONS(145),
    [aux_sym_css_named_color_token43] = ACTIONS(145),
    [aux_sym_css_named_color_token44] = ACTIONS(145),
    [aux_sym_css_named_color_token45] = ACTIONS(145),
    [aux_sym_css_named_color_token46] = ACTIONS(145),
    [aux_sym_css_named_color_token47] = ACTIONS(145),
    [aux_sym_css_named_color_token48] = ACTIONS(145),
    [aux_sym_css_named_color_token49] = ACTIONS(145),
    [aux_sym_css_named_color_token50] = ACTIONS(145),
    [aux_sym_css_named_color_token51] = ACTIONS(145),
    [aux_sym_css_named_color_token52] = ACTIONS(147),
    [aux_sym_css_named_color_token53] = ACTIONS(145),
    [aux_sym_css_named_color_token54] = ACTIONS(145),
    [aux_sym_css_named_color_token55] = ACTIONS(147),
    [aux_sym_css_named_color_token56] = ACTIONS(145),
    [aux_sym_css_named_color_token57] = ACTIONS(145),
    [aux_sym_css_named_color_token58] = ACTIONS(145),
    [aux_sym_css_named_color_token59] = ACTIONS(145),
    [aux_sym_css_named_color_token60] = ACTIONS(145),
    [aux_sym_css_named_color_token61] = ACTIONS(145),
    [aux_sym_css_named_color_token62] = ACTIONS(145),
    [aux_sym_css_named_color_token63] = ACTIONS(145),
    [aux_sym_css_named_color_token64] = ACTIONS(147),
    [aux_sym_css_named_color_token65] = ACTIONS(145),
    [aux_sym_css_named_color_token66] = ACTIONS(145),
    [aux_sym_css_named_color_token67] = ACTIONS(145),
    [aux_sym_css_named_color_token68] = ACTIONS(145),
    [aux_sym_css_named_color_token69] = ACTIONS(145),
    [aux_sym_css_named_color_token70] = ACTIONS(145),
    [aux_sym_css_named_color_token71] = ACTIONS(145),
    [aux_sym_css_named_color_token72] = ACTIONS(145),
    [aux_sym_css_named_color_token73] = ACTIONS(145),
    [aux_sym_css_named_color_token74] = ACTIONS(145),
    [aux_sym_css_named_color_token75] = ACTIONS(145),
    [aux_sym_css_named_color_token76] = ACTIONS(145),
    [aux_sym_css_named_color_token77] = ACTIONS(145),
    [aux_sym_css_named_color_token78] = ACTIONS(145),
    [aux_sym_css_named_color_token79] = ACTIONS(145),
    [aux_sym_css_named_color_token80] = ACTIONS(145),
    [aux_sym_css_named_color_token81] = ACTIONS(145),
    [aux_sym_css_named_color_token82] = ACTIONS(145),
    [aux_sym_css_named_color_token83] = ACTIONS(147),
    [aux_sym_css_named_color_token84] = ACTIONS(145),
    [aux_sym_css_named_color_token85] = ACTIONS(145),
    [aux_sym_css_named_color_token86] = ACTIONS(145),
    [aux_sym_css_named_color_token87] = ACTIONS(145),
    [aux_sym_css_named_color_token88] = ACTIONS(145),
    [aux_sym_css_named_color_token89] = ACTIONS(145),
    [aux_sym_css_named_color_token90] = ACTIONS(145),
    [aux_sym_css_named_color_token91] = ACTIONS(145),
    [aux_sym_css_named_color_token92] = ACTIONS(145),
    [aux_sym_css_named_color_token93] = ACTIONS(145),
    [aux_sym_css_named_color_token94] = ACTIONS(145),
    [aux_sym_css_named_color_token95] = ACTIONS(145),
    [aux_sym_css_named_color_token96] = ACTIONS(145),
    [aux_sym_css_named_color_token97] = ACTIONS(145),
    [aux_sym_css_named_color_token98] = ACTIONS(145),
    [aux_sym_css_named_color_token99] = ACTIONS(145),
    [aux_sym_css_named_color_token100] = ACTIONS(145),
    [aux_sym_css_named_color_token101] = ACTIONS(145),
    [aux_sym_css_named_color_token102] = ACTIONS(145),
    [aux_sym_css_named_color_token103] = ACTIONS(145),
    [aux_sym_css_named_color_token104] = ACTIONS(147),
    [aux_sym_css_named_color_token105] = ACTIONS(145),
    [aux_sym_css_named_color_token106] = ACTIONS(147),
    [aux_sym_css_named_color_token107] = ACTIONS(145),
    [aux_sym_css_named_color_token108] = ACTIONS(145),
    [aux_sym_css_named_color_token109] = ACTIONS(145),
    [aux_sym_css_named_color_token110] = ACTIONS(145),
    [aux_sym_css_named_color_token111] = ACTIONS(145),
    [aux_sym_css_named_color_token112] = ACTIONS(145),
    [aux_sym_css_named_color_token113] = ACTIONS(145),
    [aux_sym_css_named_color_token114] = ACTIONS(145),
    [aux_sym_css_named_color_token115] = ACTIONS(145),
    [aux_sym_css_named_color_token116] = ACTIONS(145),
    [aux_sym_css_named_color_token117] = ACTIONS(145),
    [aux_sym_css_named_color_token118] = ACTIONS(145),
    [aux_sym_css_named_color_token119] = ACTIONS(145),
    [aux_sym_css_named_color_token120] = ACTIONS(145),
    [aux_sym_css_named_color_token121] = ACTIONS(145),
    [aux_sym_css_named_color_token122] = ACTIONS(145),
    [aux_sym_css_named_color_token123] = ACTIONS(145),
    [aux_sym_css_named_color_token124] = ACTIONS(145),
    [aux_sym_css_named_color_token125] = ACTIONS(145),
    [aux_sym_css_named_color_token126] = ACTIONS(145),
    [aux_sym_css_named_color_token127] = ACTIONS(145),
    [aux_sym_css_named_color_token128] = ACTIONS(145),
    [aux_sym_css_named_color_token129] = ACTIONS(145),
    [aux_sym_css_named_color_token130] = ACTIONS(145),
    [aux_sym_css_named_color_token131] = ACTIONS(145),
    [aux_sym_css_named_color_token132] = ACTIONS(145),
    [aux_sym_css_named_color_token133] = ACTIONS(145),
    [aux_sym_css_named_color_token134] = ACTIONS(145),
    [aux_sym_css_named_color_token135] = ACTIONS(145),
    [aux_sym_css_named_color_token136] = ACTIONS(145),
    [aux_sym_css_named_color_token137] = ACTIONS(145),
    [aux_sym_css_named_color_token138] = ACTIONS(145),
    [aux_sym_css_named_color_token139] = ACTIONS(145),
    [aux_sym_css_named_color_token140] = ACTIONS(145),
    [aux_sym_css_named_color_token141] = ACTIONS(145),
    [aux_sym_css_named_color_token142] = ACTIONS(145),
    [aux_sym_css_named_color_token143] = ACTIONS(145),
    [aux_sym_css_named_color_token144] = ACTIONS(145),
    [aux_sym_css_named_color_token145] = ACTIONS(147),
    [aux_sym_css_named_color_token146] = ACTIONS(145),
    [aux_sym_css_named_color_token147] = ACTIONS(147),
    [aux_sym_css_named_color_token148] = ACTIONS(145),
    [sym_css_keyword_transparent] = ACTIONS(145),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_source_file_token1] = ACTIONS(151),
    [aux_sym_source_file_token2] = ACTIONS(151),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(151),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(149),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(151),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(149),
    [aux_sym_css_function_hwb_token1] = ACTIONS(149),
    [aux_sym_css_function_lab_token1] = ACTIONS(149),
    [aux_sym_css_function_oklab_token1] = ACTIONS(149),
    [aux_sym_css_function_lch_token1] = ACTIONS(149),
    [aux_sym_css_function_oklch_token1] = ACTIONS(149),
    [aux_sym_css_function_color_token1] = ACTIONS(149),
    [sym__css_hex_color_6_digits] = ACTIONS(151),
    [sym__css_hex_color_8_digits] = ACTIONS(149),
    [sym__css_hex_color_3_digits] = ACTIONS(151),
    [sym__css_hex_color_4_digits] = ACTIONS(151),
    [aux_sym_css_named_color_token1] = ACTIONS(149),
    [aux_sym_css_named_color_token2] = ACTIONS(149),
    [aux_sym_css_named_color_token3] = ACTIONS(151),
    [aux_sym_css_named_color_token4] = ACTIONS(149),
    [aux_sym_css_named_color_token5] = ACTIONS(149),
    [aux_sym_css_named_color_token6] = ACTIONS(149),
    [aux_sym_css_named_color_token7] = ACTIONS(149),
    [aux_sym_css_named_color_token8] = ACTIONS(149),
    [aux_sym_css_named_color_token9] = ACTIONS(149),
    [aux_sym_css_named_color_token10] = ACTIONS(151),
    [aux_sym_css_named_color_token11] = ACTIONS(149),
    [aux_sym_css_named_color_token12] = ACTIONS(149),
    [aux_sym_css_named_color_token13] = ACTIONS(149),
    [aux_sym_css_named_color_token14] = ACTIONS(149),
    [aux_sym_css_named_color_token15] = ACTIONS(149),
    [aux_sym_css_named_color_token16] = ACTIONS(149),
    [aux_sym_css_named_color_token17] = ACTIONS(149),
    [aux_sym_css_named_color_token18] = ACTIONS(149),
    [aux_sym_css_named_color_token19] = ACTIONS(149),
    [aux_sym_css_named_color_token20] = ACTIONS(149),
    [aux_sym_css_named_color_token21] = ACTIONS(149),
    [aux_sym_css_named_color_token22] = ACTIONS(149),
    [aux_sym_css_named_color_token23] = ACTIONS(149),
    [aux_sym_css_named_color_token24] = ACTIONS(149),
    [aux_sym_css_named_color_token25] = ACTIONS(149),
    [aux_sym_css_named_color_token26] = ACTIONS(149),
    [aux_sym_css_named_color_token27] = ACTIONS(149),
    [aux_sym_css_named_color_token28] = ACTIONS(149),
    [aux_sym_css_named_color_token29] = ACTIONS(149),
    [aux_sym_css_named_color_token30] = ACTIONS(149),
    [aux_sym_css_named_color_token31] = ACTIONS(149),
    [aux_sym_css_named_color_token32] = ACTIONS(149),
    [aux_sym_css_named_color_token33] = ACTIONS(149),
    [aux_sym_css_named_color_token34] = ACTIONS(149),
    [aux_sym_css_named_color_token35] = ACTIONS(149),
    [aux_sym_css_named_color_token36] = ACTIONS(149),
    [aux_sym_css_named_color_token37] = ACTIONS(149),
    [aux_sym_css_named_color_token38] = ACTIONS(149),
    [aux_sym_css_named_color_token39] = ACTIONS(149),
    [aux_sym_css_named_color_token40] = ACTIONS(149),
    [aux_sym_css_named_color_token41] = ACTIONS(149),
    [aux_sym_css_named_color_token42] = ACTIONS(149),
    [aux_sym_css_named_color_token43] = ACTIONS(149),
    [aux_sym_css_named_color_token44] = ACTIONS(149),
    [aux_sym_css_named_color_token45] = ACTIONS(149),
    [aux_sym_css_named_color_token46] = ACTIONS(149),
    [aux_sym_css_named_color_token47] = ACTIONS(149),
    [aux_sym_css_named_color_token48] = ACTIONS(149),
    [aux_sym_css_named_color_token49] = ACTIONS(149),
    [aux_sym_css_named_color_token50] = ACTIONS(149),
    [aux_sym_css_named_color_token51] = ACTIONS(149),
    [aux_sym_css_named_color_token52] = ACTIONS(151),
    [aux_sym_css_named_color_token53] = ACTIONS(149),
    [aux_sym_css_named_color_token54] = ACTIONS(149),
    [aux_sym_css_named_color_token55] = ACTIONS(151),
    [aux_sym_css_named_color_token56] = ACTIONS(149),
    [aux_sym_css_named_color_token57] = ACTIONS(149),
    [aux_sym_css_named_color_token58] = ACTIONS(149),
    [aux_sym_css_named_color_token59] = ACTIONS(149),
    [aux_sym_css_named_color_token60] = ACTIONS(149),
    [aux_sym_css_named_color_token61] = ACTIONS(149),
    [aux_sym_css_named_color_token62] = ACTIONS(149),
    [aux_sym_css_named_color_token63] = ACTIONS(149),
    [aux_sym_css_named_color_token64] = ACTIONS(151),
    [aux_sym_css_named_color_token65] = ACTIONS(149),
    [aux_sym_css_named_color_token66] = ACTIONS(149),
    [aux_sym_css_named_color_token67] = ACTIONS(149),
    [aux_sym_css_named_color_token68] = ACTIONS(149),
    [aux_sym_css_named_color_token69] = ACTIONS(149),
    [aux_sym_css_named_color_token70] = ACTIONS(149),
    [aux_sym_css_named_color_token71] = ACTIONS(149),
    [aux_sym_css_named_color_token72] = ACTIONS(149),
    [aux_sym_css_named_color_token73] = ACTIONS(149),
    [aux_sym_css_named_color_token74] = ACTIONS(149),
    [aux_sym_css_named_color_token75] = ACTIONS(149),
    [aux_sym_css_named_color_token76] = ACTIONS(149),
    [aux_sym_css_named_color_token77] = ACTIONS(149),
    [aux_sym_css_named_color_token78] = ACTIONS(149),
    [aux_sym_css_named_color_token79] = ACTIONS(149),
    [aux_sym_css_named_color_token80] = ACTIONS(149),
    [aux_sym_css_named_color_token81] = ACTIONS(149),
    [aux_sym_css_named_color_token82] = ACTIONS(149),
    [aux_sym_css_named_color_token83] = ACTIONS(151),
    [aux_sym_css_named_color_token84] = ACTIONS(149),
    [aux_sym_css_named_color_token85] = ACTIONS(149),
    [aux_sym_css_named_color_token86] = ACTIONS(149),
    [aux_sym_css_named_color_token87] = ACTIONS(149),
    [aux_sym_css_named_color_token88] = ACTIONS(149),
    [aux_sym_css_named_color_token89] = ACTIONS(149),
    [aux_sym_css_named_color_token90] = ACTIONS(149),
    [aux_sym_css_named_color_token91] = ACTIONS(149),
    [aux_sym_css_named_color_token92] = ACTIONS(149),
    [aux_sym_css_named_color_token93] = ACTIONS(149),
    [aux_sym_css_named_color_token94] = ACTIONS(149),
    [aux_sym_css_named_color_token95] = ACTIONS(149),
    [aux_sym_css_named_color_token96] = ACTIONS(149),
    [aux_sym_css_named_color_token97] = ACTIONS(149),
    [aux_sym_css_named_color_token98] = ACTIONS(149),
    [aux_sym_css_named_color_token99] = ACTIONS(149),
    [aux_sym_css_named_color_token100] = ACTIONS(149),
    [aux_sym_css_named_color_token101] = ACTIONS(149),
    [aux_sym_css_named_color_token102] = ACTIONS(149),
    [aux_sym_css_named_color_token103] = ACTIONS(149),
    [aux_sym_css_named_color_token104] = ACTIONS(151),
    [aux_sym_css_named_color_token105] = ACTIONS(149),
    [aux_sym_css_named_color_token106] = ACTIONS(151),
    [aux_sym_css_named_color_token107] = ACTIONS(149),
    [aux_sym_css_named_color_token108] = ACTIONS(149),
    [aux_sym_css_named_color_token109] = ACTIONS(149),
    [aux_sym_css_named_color_token110] = ACTIONS(149),
    [aux_sym_css_named_color_token111] = ACTIONS(149),
    [aux_sym_css_named_color_token112] = ACTIONS(149),
    [aux_sym_css_named_color_token113] = ACTIONS(149),
    [aux_sym_css_named_color_token114] = ACTIONS(149),
    [aux_sym_css_named_color_token115] = ACTIONS(149),
    [aux_sym_css_named_color_token116] = ACTIONS(149),
    [aux_sym_css_named_color_token117] = ACTIONS(149),
    [aux_sym_css_named_color_token118] = ACTIONS(149),
    [aux_sym_css_named_color_token119] = ACTIONS(149),
    [aux_sym_css_named_color_token120] = ACTIONS(149),
    [aux_sym_css_named_color_token121] = ACTIONS(149),
    [aux_sym_css_named_color_token122] = ACTIONS(149),
    [aux_sym_css_named_color_token123] = ACTIONS(149),
    [aux_sym_css_named_color_token124] = ACTIONS(149),
    [aux_sym_css_named_color_token125] = ACTIONS(149),
    [aux_sym_css_named_color_token126] = ACTIONS(149),
    [aux_sym_css_named_color_token127] = ACTIONS(149),
    [aux_sym_css_named_color_token128] = ACTIONS(149),
    [aux_sym_css_named_color_token129] = ACTIONS(149),
    [aux_sym_css_named_color_token130] = ACTIONS(149),
    [aux_sym_css_named_color_token131] = ACTIONS(149),
    [aux_sym_css_named_color_token132] = ACTIONS(149),
    [aux_sym_css_named_color_token133] = ACTIONS(149),
    [aux_sym_css_named_color_token134] = ACTIONS(149),
    [aux_sym_css_named_color_token135] = ACTIONS(149),
    [aux_sym_css_named_color_token136] = ACTIONS(149),
    [aux_sym_css_named_color_token137] = ACTIONS(149),
    [aux_sym_css_named_color_token138] = ACTIONS(149),
    [aux_sym_css_named_color_token139] = ACTIONS(149),
    [aux_sym_css_named_color_token140] = ACTIONS(149),
    [aux_sym_css_named_color_token141] = ACTIONS(149),
    [aux_sym_css_named_color_token142] = ACTIONS(149),
    [aux_sym_css_named_color_token143] = ACTIONS(149),
    [aux_sym_css_named_color_token144] = ACTIONS(149),
    [aux_sym_css_named_color_token145] = ACTIONS(151),
    [aux_sym_css_named_color_token146] = ACTIONS(149),
    [aux_sym_css_named_color_token147] = ACTIONS(151),
    [aux_sym_css_named_color_token148] = ACTIONS(149),
    [sym_css_keyword_transparent] = ACTIONS(149),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [aux_sym_source_file_token1] = ACTIONS(155),
    [aux_sym_source_file_token2] = ACTIONS(155),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(155),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(153),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(155),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(153),
    [aux_sym_css_function_hwb_token1] = ACTIONS(153),
    [aux_sym_css_function_lab_token1] = ACTIONS(153),
    [aux_sym_css_function_oklab_token1] = ACTIONS(153),
    [aux_sym_css_function_lch_token1] = ACTIONS(153),
    [aux_sym_css_function_oklch_token1] = ACTIONS(153),
    [aux_sym_css_function_color_token1] = ACTIONS(153),
    [sym__css_hex_color_6_digits] = ACTIONS(155),
    [sym__css_hex_color_8_digits] = ACTIONS(153),
    [sym__css_hex_color_3_digits] = ACTIONS(155),
    [sym__css_hex_color_4_digits] = ACTIONS(155),
    [aux_sym_css_named_color_token1] = ACTIONS(153),
    [aux_sym_css_named_color_token2] = ACTIONS(153),
    [aux_sym_css_named_color_token3] = ACTIONS(155),
    [aux_sym_css_named_color_token4] = ACTIONS(153),
    [aux_sym_css_named_color_token5] = ACTIONS(153),
    [aux_sym_css_named_color_token6] = ACTIONS(153),
    [aux_sym_css_named_color_token7] = ACTIONS(153),
    [aux_sym_css_named_color_token8] = ACTIONS(153),
    [aux_sym_css_named_color_token9] = ACTIONS(153),
    [aux_sym_css_named_color_token10] = ACTIONS(155),
    [aux_sym_css_named_color_token11] = ACTIONS(153),
    [aux_sym_css_named_color_token12] = ACTIONS(153),
    [aux_sym_css_named_color_token13] = ACTIONS(153),
    [aux_sym_css_named_color_token14] = ACTIONS(153),
    [aux_sym_css_named_color_token15] = ACTIONS(153),
    [aux_sym_css_named_color_token16] = ACTIONS(153),
    [aux_sym_css_named_color_token17] = ACTIONS(153),
    [aux_sym_css_named_color_token18] = ACTIONS(153),
    [aux_sym_css_named_color_token19] = ACTIONS(153),
    [aux_sym_css_named_color_token20] = ACTIONS(153),
    [aux_sym_css_named_color_token21] = ACTIONS(153),
    [aux_sym_css_named_color_token22] = ACTIONS(153),
    [aux_sym_css_named_color_token23] = ACTIONS(153),
    [aux_sym_css_named_color_token24] = ACTIONS(153),
    [aux_sym_css_named_color_token25] = ACTIONS(153),
    [aux_sym_css_named_color_token26] = ACTIONS(153),
    [aux_sym_css_named_color_token27] = ACTIONS(153),
    [aux_sym_css_named_color_token28] = ACTIONS(153),
    [aux_sym_css_named_color_token29] = ACTIONS(153),
    [aux_sym_css_named_color_token30] = ACTIONS(153),
    [aux_sym_css_named_color_token31] = ACTIONS(153),
    [aux_sym_css_named_color_token32] = ACTIONS(153),
    [aux_sym_css_named_color_token33] = ACTIONS(153),
    [aux_sym_css_named_color_token34] = ACTIONS(153),
    [aux_sym_css_named_color_token35] = ACTIONS(153),
    [aux_sym_css_named_color_token36] = ACTIONS(153),
    [aux_sym_css_named_color_token37] = ACTIONS(153),
    [aux_sym_css_named_color_token38] = ACTIONS(153),
    [aux_sym_css_named_color_token39] = ACTIONS(153),
    [aux_sym_css_named_color_token40] = ACTIONS(153),
    [aux_sym_css_named_color_token41] = ACTIONS(153),
    [aux_sym_css_named_color_token42] = ACTIONS(153),
    [aux_sym_css_named_color_token43] = ACTIONS(153),
    [aux_sym_css_named_color_token44] = ACTIONS(153),
    [aux_sym_css_named_color_token45] = ACTIONS(153),
    [aux_sym_css_named_color_token46] = ACTIONS(153),
    [aux_sym_css_named_color_token47] = ACTIONS(153),
    [aux_sym_css_named_color_token48] = ACTIONS(153),
    [aux_sym_css_named_color_token49] = ACTIONS(153),
    [aux_sym_css_named_color_token50] = ACTIONS(153),
    [aux_sym_css_named_color_token51] = ACTIONS(153),
    [aux_sym_css_named_color_token52] = ACTIONS(155),
    [aux_sym_css_named_color_token53] = ACTIONS(153),
    [aux_sym_css_named_color_token54] = ACTIONS(153),
    [aux_sym_css_named_color_token55] = ACTIONS(155),
    [aux_sym_css_named_color_token56] = ACTIONS(153),
    [aux_sym_css_named_color_token57] = ACTIONS(153),
    [aux_sym_css_named_color_token58] = ACTIONS(153),
    [aux_sym_css_named_color_token59] = ACTIONS(153),
    [aux_sym_css_named_color_token60] = ACTIONS(153),
    [aux_sym_css_named_color_token61] = ACTIONS(153),
    [aux_sym_css_named_color_token62] = ACTIONS(153),
    [aux_sym_css_named_color_token63] = ACTIONS(153),
    [aux_sym_css_named_color_token64] = ACTIONS(155),
    [aux_sym_css_named_color_token65] = ACTIONS(153),
    [aux_sym_css_named_color_token66] = ACTIONS(153),
    [aux_sym_css_named_color_token67] = ACTIONS(153),
    [aux_sym_css_named_color_token68] = ACTIONS(153),
    [aux_sym_css_named_color_token69] = ACTIONS(153),
    [aux_sym_css_named_color_token70] = ACTIONS(153),
    [aux_sym_css_named_color_token71] = ACTIONS(153),
    [aux_sym_css_named_color_token72] = ACTIONS(153),
    [aux_sym_css_named_color_token73] = ACTIONS(153),
    [aux_sym_css_named_color_token74] = ACTIONS(153),
    [aux_sym_css_named_color_token75] = ACTIONS(153),
    [aux_sym_css_named_color_token76] = ACTIONS(153),
    [aux_sym_css_named_color_token77] = ACTIONS(153),
    [aux_sym_css_named_color_token78] = ACTIONS(153),
    [aux_sym_css_named_color_token79] = ACTIONS(153),
    [aux_sym_css_named_color_token80] = ACTIONS(153),
    [aux_sym_css_named_color_token81] = ACTIONS(153),
    [aux_sym_css_named_color_token82] = ACTIONS(153),
    [aux_sym_css_named_color_token83] = ACTIONS(155),
    [aux_sym_css_named_color_token84] = ACTIONS(153),
    [aux_sym_css_named_color_token85] = ACTIONS(153),
    [aux_sym_css_named_color_token86] = ACTIONS(153),
    [aux_sym_css_named_color_token87] = ACTIONS(153),
    [aux_sym_css_named_color_token88] = ACTIONS(153),
    [aux_sym_css_named_color_token89] = ACTIONS(153),
    [aux_sym_css_named_color_token90] = ACTIONS(153),
    [aux_sym_css_named_color_token91] = ACTIONS(153),
    [aux_sym_css_named_color_token92] = ACTIONS(153),
    [aux_sym_css_named_color_token93] = ACTIONS(153),
    [aux_sym_css_named_color_token94] = ACTIONS(153),
    [aux_sym_css_named_color_token95] = ACTIONS(153),
    [aux_sym_css_named_color_token96] = ACTIONS(153),
    [aux_sym_css_named_color_token97] = ACTIONS(153),
    [aux_sym_css_named_color_token98] = ACTIONS(153),
    [aux_sym_css_named_color_token99] = ACTIONS(153),
    [aux_sym_css_named_color_token100] = ACTIONS(153),
    [aux_sym_css_named_color_token101] = ACTIONS(153),
    [aux_sym_css_named_color_token102] = ACTIONS(153),
    [aux_sym_css_named_color_token103] = ACTIONS(153),
    [aux_sym_css_named_color_token104] = ACTIONS(155),
    [aux_sym_css_named_color_token105] = ACTIONS(153),
    [aux_sym_css_named_color_token106] = ACTIONS(155),
    [aux_sym_css_named_color_token107] = ACTIONS(153),
    [aux_sym_css_named_color_token108] = ACTIONS(153),
    [aux_sym_css_named_color_token109] = ACTIONS(153),
    [aux_sym_css_named_color_token110] = ACTIONS(153),
    [aux_sym_css_named_color_token111] = ACTIONS(153),
    [aux_sym_css_named_color_token112] = ACTIONS(153),
    [aux_sym_css_named_color_token113] = ACTIONS(153),
    [aux_sym_css_named_color_token114] = ACTIONS(153),
    [aux_sym_css_named_color_token115] = ACTIONS(153),
    [aux_sym_css_named_color_token116] = ACTIONS(153),
    [aux_sym_css_named_color_token117] = ACTIONS(153),
    [aux_sym_css_named_color_token118] = ACTIONS(153),
    [aux_sym_css_named_color_token119] = ACTIONS(153),
    [aux_sym_css_named_color_token120] = ACTIONS(153),
    [aux_sym_css_named_color_token121] = ACTIONS(153),
    [aux_sym_css_named_color_token122] = ACTIONS(153),
    [aux_sym_css_named_color_token123] = ACTIONS(153),
    [aux_sym_css_named_color_token124] = ACTIONS(153),
    [aux_sym_css_named_color_token125] = ACTIONS(153),
    [aux_sym_css_named_color_token126] = ACTIONS(153),
    [aux_sym_css_named_color_token127] = ACTIONS(153),
    [aux_sym_css_named_color_token128] = ACTIONS(153),
    [aux_sym_css_named_color_token129] = ACTIONS(153),
    [aux_sym_css_named_color_token130] = ACTIONS(153),
    [aux_sym_css_named_color_token131] = ACTIONS(153),
    [aux_sym_css_named_color_token132] = ACTIONS(153),
    [aux_sym_css_named_color_token133] = ACTIONS(153),
    [aux_sym_css_named_color_token134] = ACTIONS(153),
    [aux_sym_css_named_color_token135] = ACTIONS(153),
    [aux_sym_css_named_color_token136] = ACTIONS(153),
    [aux_sym_css_named_color_token137] = ACTIONS(153),
    [aux_sym_css_named_color_token138] = ACTIONS(153),
    [aux_sym_css_named_color_token139] = ACTIONS(153),
    [aux_sym_css_named_color_token140] = ACTIONS(153),
    [aux_sym_css_named_color_token141] = ACTIONS(153),
    [aux_sym_css_named_color_token142] = ACTIONS(153),
    [aux_sym_css_named_color_token143] = ACTIONS(153),
    [aux_sym_css_named_color_token144] = ACTIONS(153),
    [aux_sym_css_named_color_token145] = ACTIONS(155),
    [aux_sym_css_named_color_token146] = ACTIONS(153),
    [aux_sym_css_named_color_token147] = ACTIONS(155),
    [aux_sym_css_named_color_token148] = ACTIONS(153),
    [sym_css_keyword_transparent] = ACTIONS(153),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [aux_sym_source_file_token1] = ACTIONS(155),
    [aux_sym_source_file_token2] = ACTIONS(155),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(155),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(153),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(155),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(153),
    [aux_sym_css_function_hwb_token1] = ACTIONS(153),
    [aux_sym_css_function_lab_token1] = ACTIONS(153),
    [aux_sym_css_function_oklab_token1] = ACTIONS(153),
    [aux_sym_css_function_lch_token1] = ACTIONS(153),
    [aux_sym_css_function_oklch_token1] = ACTIONS(153),
    [aux_sym_css_function_color_token1] = ACTIONS(153),
    [sym__css_hex_color_6_digits] = ACTIONS(155),
    [sym__css_hex_color_8_digits] = ACTIONS(153),
    [sym__css_hex_color_3_digits] = ACTIONS(155),
    [sym__css_hex_color_4_digits] = ACTIONS(155),
    [aux_sym_css_named_color_token1] = ACTIONS(153),
    [aux_sym_css_named_color_token2] = ACTIONS(153),
    [aux_sym_css_named_color_token3] = ACTIONS(155),
    [aux_sym_css_named_color_token4] = ACTIONS(153),
    [aux_sym_css_named_color_token5] = ACTIONS(153),
    [aux_sym_css_named_color_token6] = ACTIONS(153),
    [aux_sym_css_named_color_token7] = ACTIONS(153),
    [aux_sym_css_named_color_token8] = ACTIONS(153),
    [aux_sym_css_named_color_token9] = ACTIONS(153),
    [aux_sym_css_named_color_token10] = ACTIONS(155),
    [aux_sym_css_named_color_token11] = ACTIONS(153),
    [aux_sym_css_named_color_token12] = ACTIONS(153),
    [aux_sym_css_named_color_token13] = ACTIONS(153),
    [aux_sym_css_named_color_token14] = ACTIONS(153),
    [aux_sym_css_named_color_token15] = ACTIONS(153),
    [aux_sym_css_named_color_token16] = ACTIONS(153),
    [aux_sym_css_named_color_token17] = ACTIONS(153),
    [aux_sym_css_named_color_token18] = ACTIONS(153),
    [aux_sym_css_named_color_token19] = ACTIONS(153),
    [aux_sym_css_named_color_token20] = ACTIONS(153),
    [aux_sym_css_named_color_token21] = ACTIONS(153),
    [aux_sym_css_named_color_token22] = ACTIONS(153),
    [aux_sym_css_named_color_token23] = ACTIONS(153),
    [aux_sym_css_named_color_token24] = ACTIONS(153),
    [aux_sym_css_named_color_token25] = ACTIONS(153),
    [aux_sym_css_named_color_token26] = ACTIONS(153),
    [aux_sym_css_named_color_token27] = ACTIONS(153),
    [aux_sym_css_named_color_token28] = ACTIONS(153),
    [aux_sym_css_named_color_token29] = ACTIONS(153),
    [aux_sym_css_named_color_token30] = ACTIONS(153),
    [aux_sym_css_named_color_token31] = ACTIONS(153),
    [aux_sym_css_named_color_token32] = ACTIONS(153),
    [aux_sym_css_named_color_token33] = ACTIONS(153),
    [aux_sym_css_named_color_token34] = ACTIONS(153),
    [aux_sym_css_named_color_token35] = ACTIONS(153),
    [aux_sym_css_named_color_token36] = ACTIONS(153),
    [aux_sym_css_named_color_token37] = ACTIONS(153),
    [aux_sym_css_named_color_token38] = ACTIONS(153),
    [aux_sym_css_named_color_token39] = ACTIONS(153),
    [aux_sym_css_named_color_token40] = ACTIONS(153),
    [aux_sym_css_named_color_token41] = ACTIONS(153),
    [aux_sym_css_named_color_token42] = ACTIONS(153),
    [aux_sym_css_named_color_token43] = ACTIONS(153),
    [aux_sym_css_named_color_token44] = ACTIONS(153),
    [aux_sym_css_named_color_token45] = ACTIONS(153),
    [aux_sym_css_named_color_token46] = ACTIONS(153),
    [aux_sym_css_named_color_token47] = ACTIONS(153),
    [aux_sym_css_named_color_token48] = ACTIONS(153),
    [aux_sym_css_named_color_token49] = ACTIONS(153),
    [aux_sym_css_named_color_token50] = ACTIONS(153),
    [aux_sym_css_named_color_token51] = ACTIONS(153),
    [aux_sym_css_named_color_token52] = ACTIONS(155),
    [aux_sym_css_named_color_token53] = ACTIONS(153),
    [aux_sym_css_named_color_token54] = ACTIONS(153),
    [aux_sym_css_named_color_token55] = ACTIONS(155),
    [aux_sym_css_named_color_token56] = ACTIONS(153),
    [aux_sym_css_named_color_token57] = ACTIONS(153),
    [aux_sym_css_named_color_token58] = ACTIONS(153),
    [aux_sym_css_named_color_token59] = ACTIONS(153),
    [aux_sym_css_named_color_token60] = ACTIONS(153),
    [aux_sym_css_named_color_token61] = ACTIONS(153),
    [aux_sym_css_named_color_token62] = ACTIONS(153),
    [aux_sym_css_named_color_token63] = ACTIONS(153),
    [aux_sym_css_named_color_token64] = ACTIONS(155),
    [aux_sym_css_named_color_token65] = ACTIONS(153),
    [aux_sym_css_named_color_token66] = ACTIONS(153),
    [aux_sym_css_named_color_token67] = ACTIONS(153),
    [aux_sym_css_named_color_token68] = ACTIONS(153),
    [aux_sym_css_named_color_token69] = ACTIONS(153),
    [aux_sym_css_named_color_token70] = ACTIONS(153),
    [aux_sym_css_named_color_token71] = ACTIONS(153),
    [aux_sym_css_named_color_token72] = ACTIONS(153),
    [aux_sym_css_named_color_token73] = ACTIONS(153),
    [aux_sym_css_named_color_token74] = ACTIONS(153),
    [aux_sym_css_named_color_token75] = ACTIONS(153),
    [aux_sym_css_named_color_token76] = ACTIONS(153),
    [aux_sym_css_named_color_token77] = ACTIONS(153),
    [aux_sym_css_named_color_token78] = ACTIONS(153),
    [aux_sym_css_named_color_token79] = ACTIONS(153),
    [aux_sym_css_named_color_token80] = ACTIONS(153),
    [aux_sym_css_named_color_token81] = ACTIONS(153),
    [aux_sym_css_named_color_token82] = ACTIONS(153),
    [aux_sym_css_named_color_token83] = ACTIONS(155),
    [aux_sym_css_named_color_token84] = ACTIONS(153),
    [aux_sym_css_named_color_token85] = ACTIONS(153),
    [aux_sym_css_named_color_token86] = ACTIONS(153),
    [aux_sym_css_named_color_token87] = ACTIONS(153),
    [aux_sym_css_named_color_token88] = ACTIONS(153),
    [aux_sym_css_named_color_token89] = ACTIONS(153),
    [aux_sym_css_named_color_token90] = ACTIONS(153),
    [aux_sym_css_named_color_token91] = ACTIONS(153),
    [aux_sym_css_named_color_token92] = ACTIONS(153),
    [aux_sym_css_named_color_token93] = ACTIONS(153),
    [aux_sym_css_named_color_token94] = ACTIONS(153),
    [aux_sym_css_named_color_token95] = ACTIONS(153),
    [aux_sym_css_named_color_token96] = ACTIONS(153),
    [aux_sym_css_named_color_token97] = ACTIONS(153),
    [aux_sym_css_named_color_token98] = ACTIONS(153),
    [aux_sym_css_named_color_token99] = ACTIONS(153),
    [aux_sym_css_named_color_token100] = ACTIONS(153),
    [aux_sym_css_named_color_token101] = ACTIONS(153),
    [aux_sym_css_named_color_token102] = ACTIONS(153),
    [aux_sym_css_named_color_token103] = ACTIONS(153),
    [aux_sym_css_named_color_token104] = ACTIONS(155),
    [aux_sym_css_named_color_token105] = ACTIONS(153),
    [aux_sym_css_named_color_token106] = ACTIONS(155),
    [aux_sym_css_named_color_token107] = ACTIONS(153),
    [aux_sym_css_named_color_token108] = ACTIONS(153),
    [aux_sym_css_named_color_token109] = ACTIONS(153),
    [aux_sym_css_named_color_token110] = ACTIONS(153),
    [aux_sym_css_named_color_token111] = ACTIONS(153),
    [aux_sym_css_named_color_token112] = ACTIONS(153),
    [aux_sym_css_named_color_token113] = ACTIONS(153),
    [aux_sym_css_named_color_token114] = ACTIONS(153),
    [aux_sym_css_named_color_token115] = ACTIONS(153),
    [aux_sym_css_named_color_token116] = ACTIONS(153),
    [aux_sym_css_named_color_token117] = ACTIONS(153),
    [aux_sym_css_named_color_token118] = ACTIONS(153),
    [aux_sym_css_named_color_token119] = ACTIONS(153),
    [aux_sym_css_named_color_token120] = ACTIONS(153),
    [aux_sym_css_named_color_token121] = ACTIONS(153),
    [aux_sym_css_named_color_token122] = ACTIONS(153),
    [aux_sym_css_named_color_token123] = ACTIONS(153),
    [aux_sym_css_named_color_token124] = ACTIONS(153),
    [aux_sym_css_named_color_token125] = ACTIONS(153),
    [aux_sym_css_named_color_token126] = ACTIONS(153),
    [aux_sym_css_named_color_token127] = ACTIONS(153),
    [aux_sym_css_named_color_token128] = ACTIONS(153),
    [aux_sym_css_named_color_token129] = ACTIONS(153),
    [aux_sym_css_named_color_token130] = ACTIONS(153),
    [aux_sym_css_named_color_token131] = ACTIONS(153),
    [aux_sym_css_named_color_token132] = ACTIONS(153),
    [aux_sym_css_named_color_token133] = ACTIONS(153),
    [aux_sym_css_named_color_token134] = ACTIONS(153),
    [aux_sym_css_named_color_token135] = ACTIONS(153),
    [aux_sym_css_named_color_token136] = ACTIONS(153),
    [aux_sym_css_named_color_token137] = ACTIONS(153),
    [aux_sym_css_named_color_token138] = ACTIONS(153),
    [aux_sym_css_named_color_token139] = ACTIONS(153),
    [aux_sym_css_named_color_token140] = ACTIONS(153),
    [aux_sym_css_named_color_token141] = ACTIONS(153),
    [aux_sym_css_named_color_token142] = ACTIONS(153),
    [aux_sym_css_named_color_token143] = ACTIONS(153),
    [aux_sym_css_named_color_token144] = ACTIONS(153),
    [aux_sym_css_named_color_token145] = ACTIONS(155),
    [aux_sym_css_named_color_token146] = ACTIONS(153),
    [aux_sym_css_named_color_token147] = ACTIONS(155),
    [aux_sym_css_named_color_token148] = ACTIONS(153),
    [sym_css_keyword_transparent] = ACTIONS(153),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_source_file_token1] = ACTIONS(159),
    [aux_sym_source_file_token2] = ACTIONS(159),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(159),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(157),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(159),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(157),
    [aux_sym_css_function_hwb_token1] = ACTIONS(157),
    [aux_sym_css_function_lab_token1] = ACTIONS(157),
    [aux_sym_css_function_oklab_token1] = ACTIONS(157),
    [aux_sym_css_function_lch_token1] = ACTIONS(157),
    [aux_sym_css_function_oklch_token1] = ACTIONS(157),
    [aux_sym_css_function_color_token1] = ACTIONS(157),
    [sym__css_hex_color_6_digits] = ACTIONS(159),
    [sym__css_hex_color_8_digits] = ACTIONS(157),
    [sym__css_hex_color_3_digits] = ACTIONS(159),
    [sym__css_hex_color_4_digits] = ACTIONS(159),
    [aux_sym_css_named_color_token1] = ACTIONS(157),
    [aux_sym_css_named_color_token2] = ACTIONS(157),
    [aux_sym_css_named_color_token3] = ACTIONS(159),
    [aux_sym_css_named_color_token4] = ACTIONS(157),
    [aux_sym_css_named_color_token5] = ACTIONS(157),
    [aux_sym_css_named_color_token6] = ACTIONS(157),
    [aux_sym_css_named_color_token7] = ACTIONS(157),
    [aux_sym_css_named_color_token8] = ACTIONS(157),
    [aux_sym_css_named_color_token9] = ACTIONS(157),
    [aux_sym_css_named_color_token10] = ACTIONS(159),
    [aux_sym_css_named_color_token11] = ACTIONS(157),
    [aux_sym_css_named_color_token12] = ACTIONS(157),
    [aux_sym_css_named_color_token13] = ACTIONS(157),
    [aux_sym_css_named_color_token14] = ACTIONS(157),
    [aux_sym_css_named_color_token15] = ACTIONS(157),
    [aux_sym_css_named_color_token16] = ACTIONS(157),
    [aux_sym_css_named_color_token17] = ACTIONS(157),
    [aux_sym_css_named_color_token18] = ACTIONS(157),
    [aux_sym_css_named_color_token19] = ACTIONS(157),
    [aux_sym_css_named_color_token20] = ACTIONS(157),
    [aux_sym_css_named_color_token21] = ACTIONS(157),
    [aux_sym_css_named_color_token22] = ACTIONS(157),
    [aux_sym_css_named_color_token23] = ACTIONS(157),
    [aux_sym_css_named_color_token24] = ACTIONS(157),
    [aux_sym_css_named_color_token25] = ACTIONS(157),
    [aux_sym_css_named_color_token26] = ACTIONS(157),
    [aux_sym_css_named_color_token27] = ACTIONS(157),
    [aux_sym_css_named_color_token28] = ACTIONS(157),
    [aux_sym_css_named_color_token29] = ACTIONS(157),
    [aux_sym_css_named_color_token30] = ACTIONS(157),
    [aux_sym_css_named_color_token31] = ACTIONS(157),
    [aux_sym_css_named_color_token32] = ACTIONS(157),
    [aux_sym_css_named_color_token33] = ACTIONS(157),
    [aux_sym_css_named_color_token34] = ACTIONS(157),
    [aux_sym_css_named_color_token35] = ACTIONS(157),
    [aux_sym_css_named_color_token36] = ACTIONS(157),
    [aux_sym_css_named_color_token37] = ACTIONS(157),
    [aux_sym_css_named_color_token38] = ACTIONS(157),
    [aux_sym_css_named_color_token39] = ACTIONS(157),
    [aux_sym_css_named_color_token40] = ACTIONS(157),
    [aux_sym_css_named_color_token41] = ACTIONS(157),
    [aux_sym_css_named_color_token42] = ACTIONS(157),
    [aux_sym_css_named_color_token43] = ACTIONS(157),
    [aux_sym_css_named_color_token44] = ACTIONS(157),
    [aux_sym_css_named_color_token45] = ACTIONS(157),
    [aux_sym_css_named_color_token46] = ACTIONS(157),
    [aux_sym_css_named_color_token47] = ACTIONS(157),
    [aux_sym_css_named_color_token48] = ACTIONS(157),
    [aux_sym_css_named_color_token49] = ACTIONS(157),
    [aux_sym_css_named_color_token50] = ACTIONS(157),
    [aux_sym_css_named_color_token51] = ACTIONS(157),
    [aux_sym_css_named_color_token52] = ACTIONS(159),
    [aux_sym_css_named_color_token53] = ACTIONS(157),
    [aux_sym_css_named_color_token54] = ACTIONS(157),
    [aux_sym_css_named_color_token55] = ACTIONS(159),
    [aux_sym_css_named_color_token56] = ACTIONS(157),
    [aux_sym_css_named_color_token57] = ACTIONS(157),
    [aux_sym_css_named_color_token58] = ACTIONS(157),
    [aux_sym_css_named_color_token59] = ACTIONS(157),
    [aux_sym_css_named_color_token60] = ACTIONS(157),
    [aux_sym_css_named_color_token61] = ACTIONS(157),
    [aux_sym_css_named_color_token62] = ACTIONS(157),
    [aux_sym_css_named_color_token63] = ACTIONS(157),
    [aux_sym_css_named_color_token64] = ACTIONS(159),
    [aux_sym_css_named_color_token65] = ACTIONS(157),
    [aux_sym_css_named_color_token66] = ACTIONS(157),
    [aux_sym_css_named_color_token67] = ACTIONS(157),
    [aux_sym_css_named_color_token68] = ACTIONS(157),
    [aux_sym_css_named_color_token69] = ACTIONS(157),
    [aux_sym_css_named_color_token70] = ACTIONS(157),
    [aux_sym_css_named_color_token71] = ACTIONS(157),
    [aux_sym_css_named_color_token72] = ACTIONS(157),
    [aux_sym_css_named_color_token73] = ACTIONS(157),
    [aux_sym_css_named_color_token74] = ACTIONS(157),
    [aux_sym_css_named_color_token75] = ACTIONS(157),
    [aux_sym_css_named_color_token76] = ACTIONS(157),
    [aux_sym_css_named_color_token77] = ACTIONS(157),
    [aux_sym_css_named_color_token78] = ACTIONS(157),
    [aux_sym_css_named_color_token79] = ACTIONS(157),
    [aux_sym_css_named_color_token80] = ACTIONS(157),
    [aux_sym_css_named_color_token81] = ACTIONS(157),
    [aux_sym_css_named_color_token82] = ACTIONS(157),
    [aux_sym_css_named_color_token83] = ACTIONS(159),
    [aux_sym_css_named_color_token84] = ACTIONS(157),
    [aux_sym_css_named_color_token85] = ACTIONS(157),
    [aux_sym_css_named_color_token86] = ACTIONS(157),
    [aux_sym_css_named_color_token87] = ACTIONS(157),
    [aux_sym_css_named_color_token88] = ACTIONS(157),
    [aux_sym_css_named_color_token89] = ACTIONS(157),
    [aux_sym_css_named_color_token90] = ACTIONS(157),
    [aux_sym_css_named_color_token91] = ACTIONS(157),
    [aux_sym_css_named_color_token92] = ACTIONS(157),
    [aux_sym_css_named_color_token93] = ACTIONS(157),
    [aux_sym_css_named_color_token94] = ACTIONS(157),
    [aux_sym_css_named_color_token95] = ACTIONS(157),
    [aux_sym_css_named_color_token96] = ACTIONS(157),
    [aux_sym_css_named_color_token97] = ACTIONS(157),
    [aux_sym_css_named_color_token98] = ACTIONS(157),
    [aux_sym_css_named_color_token99] = ACTIONS(157),
    [aux_sym_css_named_color_token100] = ACTIONS(157),
    [aux_sym_css_named_color_token101] = ACTIONS(157),
    [aux_sym_css_named_color_token102] = ACTIONS(157),
    [aux_sym_css_named_color_token103] = ACTIONS(157),
    [aux_sym_css_named_color_token104] = ACTIONS(159),
    [aux_sym_css_named_color_token105] = ACTIONS(157),
    [aux_sym_css_named_color_token106] = ACTIONS(159),
    [aux_sym_css_named_color_token107] = ACTIONS(157),
    [aux_sym_css_named_color_token108] = ACTIONS(157),
    [aux_sym_css_named_color_token109] = ACTIONS(157),
    [aux_sym_css_named_color_token110] = ACTIONS(157),
    [aux_sym_css_named_color_token111] = ACTIONS(157),
    [aux_sym_css_named_color_token112] = ACTIONS(157),
    [aux_sym_css_named_color_token113] = ACTIONS(157),
    [aux_sym_css_named_color_token114] = ACTIONS(157),
    [aux_sym_css_named_color_token115] = ACTIONS(157),
    [aux_sym_css_named_color_token116] = ACTIONS(157),
    [aux_sym_css_named_color_token117] = ACTIONS(157),
    [aux_sym_css_named_color_token118] = ACTIONS(157),
    [aux_sym_css_named_color_token119] = ACTIONS(157),
    [aux_sym_css_named_color_token120] = ACTIONS(157),
    [aux_sym_css_named_color_token121] = ACTIONS(157),
    [aux_sym_css_named_color_token122] = ACTIONS(157),
    [aux_sym_css_named_color_token123] = ACTIONS(157),
    [aux_sym_css_named_color_token124] = ACTIONS(157),
    [aux_sym_css_named_color_token125] = ACTIONS(157),
    [aux_sym_css_named_color_token126] = ACTIONS(157),
    [aux_sym_css_named_color_token127] = ACTIONS(157),
    [aux_sym_css_named_color_token128] = ACTIONS(157),
    [aux_sym_css_named_color_token129] = ACTIONS(157),
    [aux_sym_css_named_color_token130] = ACTIONS(157),
    [aux_sym_css_named_color_token131] = ACTIONS(157),
    [aux_sym_css_named_color_token132] = ACTIONS(157),
    [aux_sym_css_named_color_token133] = ACTIONS(157),
    [aux_sym_css_named_color_token134] = ACTIONS(157),
    [aux_sym_css_named_color_token135] = ACTIONS(157),
    [aux_sym_css_named_color_token136] = ACTIONS(157),
    [aux_sym_css_named_color_token137] = ACTIONS(157),
    [aux_sym_css_named_color_token138] = ACTIONS(157),
    [aux_sym_css_named_color_token139] = ACTIONS(157),
    [aux_sym_css_named_color_token140] = ACTIONS(157),
    [aux_sym_css_named_color_token141] = ACTIONS(157),
    [aux_sym_css_named_color_token142] = ACTIONS(157),
    [aux_sym_css_named_color_token143] = ACTIONS(157),
    [aux_sym_css_named_color_token144] = ACTIONS(157),
    [aux_sym_css_named_color_token145] = ACTIONS(159),
    [aux_sym_css_named_color_token146] = ACTIONS(157),
    [aux_sym_css_named_color_token147] = ACTIONS(159),
    [aux_sym_css_named_color_token148] = ACTIONS(157),
    [sym_css_keyword_transparent] = ACTIONS(157),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_source_file_token1] = ACTIONS(163),
    [aux_sym_source_file_token2] = ACTIONS(163),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(163),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(161),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(163),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(161),
    [aux_sym_css_function_hwb_token1] = ACTIONS(161),
    [aux_sym_css_function_lab_token1] = ACTIONS(161),
    [aux_sym_css_function_oklab_token1] = ACTIONS(161),
    [aux_sym_css_function_lch_token1] = ACTIONS(161),
    [aux_sym_css_function_oklch_token1] = ACTIONS(161),
    [aux_sym_css_function_color_token1] = ACTIONS(161),
    [sym__css_hex_color_6_digits] = ACTIONS(163),
    [sym__css_hex_color_8_digits] = ACTIONS(161),
    [sym__css_hex_color_3_digits] = ACTIONS(163),
    [sym__css_hex_color_4_digits] = ACTIONS(163),
    [aux_sym_css_named_color_token1] = ACTIONS(161),
    [aux_sym_css_named_color_token2] = ACTIONS(161),
    [aux_sym_css_named_color_token3] = ACTIONS(163),
    [aux_sym_css_named_color_token4] = ACTIONS(161),
    [aux_sym_css_named_color_token5] = ACTIONS(161),
    [aux_sym_css_named_color_token6] = ACTIONS(161),
    [aux_sym_css_named_color_token7] = ACTIONS(161),
    [aux_sym_css_named_color_token8] = ACTIONS(161),
    [aux_sym_css_named_color_token9] = ACTIONS(161),
    [aux_sym_css_named_color_token10] = ACTIONS(163),
    [aux_sym_css_named_color_token11] = ACTIONS(161),
    [aux_sym_css_named_color_token12] = ACTIONS(161),
    [aux_sym_css_named_color_token13] = ACTIONS(161),
    [aux_sym_css_named_color_token14] = ACTIONS(161),
    [aux_sym_css_named_color_token15] = ACTIONS(161),
    [aux_sym_css_named_color_token16] = ACTIONS(161),
    [aux_sym_css_named_color_token17] = ACTIONS(161),
    [aux_sym_css_named_color_token18] = ACTIONS(161),
    [aux_sym_css_named_color_token19] = ACTIONS(161),
    [aux_sym_css_named_color_token20] = ACTIONS(161),
    [aux_sym_css_named_color_token21] = ACTIONS(161),
    [aux_sym_css_named_color_token22] = ACTIONS(161),
    [aux_sym_css_named_color_token23] = ACTIONS(161),
    [aux_sym_css_named_color_token24] = ACTIONS(161),
    [aux_sym_css_named_color_token25] = ACTIONS(161),
    [aux_sym_css_named_color_token26] = ACTIONS(161),
    [aux_sym_css_named_color_token27] = ACTIONS(161),
    [aux_sym_css_named_color_token28] = ACTIONS(161),
    [aux_sym_css_named_color_token29] = ACTIONS(161),
    [aux_sym_css_named_color_token30] = ACTIONS(161),
    [aux_sym_css_named_color_token31] = ACTIONS(161),
    [aux_sym_css_named_color_token32] = ACTIONS(161),
    [aux_sym_css_named_color_token33] = ACTIONS(161),
    [aux_sym_css_named_color_token34] = ACTIONS(161),
    [aux_sym_css_named_color_token35] = ACTIONS(161),
    [aux_sym_css_named_color_token36] = ACTIONS(161),
    [aux_sym_css_named_color_token37] = ACTIONS(161),
    [aux_sym_css_named_color_token38] = ACTIONS(161),
    [aux_sym_css_named_color_token39] = ACTIONS(161),
    [aux_sym_css_named_color_token40] = ACTIONS(161),
    [aux_sym_css_named_color_token41] = ACTIONS(161),
    [aux_sym_css_named_color_token42] = ACTIONS(161),
    [aux_sym_css_named_color_token43] = ACTIONS(161),
    [aux_sym_css_named_color_token44] = ACTIONS(161),
    [aux_sym_css_named_color_token45] = ACTIONS(161),
    [aux_sym_css_named_color_token46] = ACTIONS(161),
    [aux_sym_css_named_color_token47] = ACTIONS(161),
    [aux_sym_css_named_color_token48] = ACTIONS(161),
    [aux_sym_css_named_color_token49] = ACTIONS(161),
    [aux_sym_css_named_color_token50] = ACTIONS(161),
    [aux_sym_css_named_color_token51] = ACTIONS(161),
    [aux_sym_css_named_color_token52] = ACTIONS(163),
    [aux_sym_css_named_color_token53] = ACTIONS(161),
    [aux_sym_css_named_color_token54] = ACTIONS(161),
    [aux_sym_css_named_color_token55] = ACTIONS(163),
    [aux_sym_css_named_color_token56] = ACTIONS(161),
    [aux_sym_css_named_color_token57] = ACTIONS(161),
    [aux_sym_css_named_color_token58] = ACTIONS(161),
    [aux_sym_css_named_color_token59] = ACTIONS(161),
    [aux_sym_css_named_color_token60] = ACTIONS(161),
    [aux_sym_css_named_color_token61] = ACTIONS(161),
    [aux_sym_css_named_color_token62] = ACTIONS(161),
    [aux_sym_css_named_color_token63] = ACTIONS(161),
    [aux_sym_css_named_color_token64] = ACTIONS(163),
    [aux_sym_css_named_color_token65] = ACTIONS(161),
    [aux_sym_css_named_color_token66] = ACTIONS(161),
    [aux_sym_css_named_color_token67] = ACTIONS(161),
    [aux_sym_css_named_color_token68] = ACTIONS(161),
    [aux_sym_css_named_color_token69] = ACTIONS(161),
    [aux_sym_css_named_color_token70] = ACTIONS(161),
    [aux_sym_css_named_color_token71] = ACTIONS(161),
    [aux_sym_css_named_color_token72] = ACTIONS(161),
    [aux_sym_css_named_color_token73] = ACTIONS(161),
    [aux_sym_css_named_color_token74] = ACTIONS(161),
    [aux_sym_css_named_color_token75] = ACTIONS(161),
    [aux_sym_css_named_color_token76] = ACTIONS(161),
    [aux_sym_css_named_color_token77] = ACTIONS(161),
    [aux_sym_css_named_color_token78] = ACTIONS(161),
    [aux_sym_css_named_color_token79] = ACTIONS(161),
    [aux_sym_css_named_color_token80] = ACTIONS(161),
    [aux_sym_css_named_color_token81] = ACTIONS(161),
    [aux_sym_css_named_color_token82] = ACTIONS(161),
    [aux_sym_css_named_color_token83] = ACTIONS(163),
    [aux_sym_css_named_color_token84] = ACTIONS(161),
    [aux_sym_css_named_color_token85] = ACTIONS(161),
    [aux_sym_css_named_color_token86] = ACTIONS(161),
    [aux_sym_css_named_color_token87] = ACTIONS(161),
    [aux_sym_css_named_color_token88] = ACTIONS(161),
    [aux_sym_css_named_color_token89] = ACTIONS(161),
    [aux_sym_css_named_color_token90] = ACTIONS(161),
    [aux_sym_css_named_color_token91] = ACTIONS(161),
    [aux_sym_css_named_color_token92] = ACTIONS(161),
    [aux_sym_css_named_color_token93] = ACTIONS(161),
    [aux_sym_css_named_color_token94] = ACTIONS(161),
    [aux_sym_css_named_color_token95] = ACTIONS(161),
    [aux_sym_css_named_color_token96] = ACTIONS(161),
    [aux_sym_css_named_color_token97] = ACTIONS(161),
    [aux_sym_css_named_color_token98] = ACTIONS(161),
    [aux_sym_css_named_color_token99] = ACTIONS(161),
    [aux_sym_css_named_color_token100] = ACTIONS(161),
    [aux_sym_css_named_color_token101] = ACTIONS(161),
    [aux_sym_css_named_color_token102] = ACTIONS(161),
    [aux_sym_css_named_color_token103] = ACTIONS(161),
    [aux_sym_css_named_color_token104] = ACTIONS(163),
    [aux_sym_css_named_color_token105] = ACTIONS(161),
    [aux_sym_css_named_color_token106] = ACTIONS(163),
    [aux_sym_css_named_color_token107] = ACTIONS(161),
    [aux_sym_css_named_color_token108] = ACTIONS(161),
    [aux_sym_css_named_color_token109] = ACTIONS(161),
    [aux_sym_css_named_color_token110] = ACTIONS(161),
    [aux_sym_css_named_color_token111] = ACTIONS(161),
    [aux_sym_css_named_color_token112] = ACTIONS(161),
    [aux_sym_css_named_color_token113] = ACTIONS(161),
    [aux_sym_css_named_color_token114] = ACTIONS(161),
    [aux_sym_css_named_color_token115] = ACTIONS(161),
    [aux_sym_css_named_color_token116] = ACTIONS(161),
    [aux_sym_css_named_color_token117] = ACTIONS(161),
    [aux_sym_css_named_color_token118] = ACTIONS(161),
    [aux_sym_css_named_color_token119] = ACTIONS(161),
    [aux_sym_css_named_color_token120] = ACTIONS(161),
    [aux_sym_css_named_color_token121] = ACTIONS(161),
    [aux_sym_css_named_color_token122] = ACTIONS(161),
    [aux_sym_css_named_color_token123] = ACTIONS(161),
    [aux_sym_css_named_color_token124] = ACTIONS(161),
    [aux_sym_css_named_color_token125] = ACTIONS(161),
    [aux_sym_css_named_color_token126] = ACTIONS(161),
    [aux_sym_css_named_color_token127] = ACTIONS(161),
    [aux_sym_css_named_color_token128] = ACTIONS(161),
    [aux_sym_css_named_color_token129] = ACTIONS(161),
    [aux_sym_css_named_color_token130] = ACTIONS(161),
    [aux_sym_css_named_color_token131] = ACTIONS(161),
    [aux_sym_css_named_color_token132] = ACTIONS(161),
    [aux_sym_css_named_color_token133] = ACTIONS(161),
    [aux_sym_css_named_color_token134] = ACTIONS(161),
    [aux_sym_css_named_color_token135] = ACTIONS(161),
    [aux_sym_css_named_color_token136] = ACTIONS(161),
    [aux_sym_css_named_color_token137] = ACTIONS(161),
    [aux_sym_css_named_color_token138] = ACTIONS(161),
    [aux_sym_css_named_color_token139] = ACTIONS(161),
    [aux_sym_css_named_color_token140] = ACTIONS(161),
    [aux_sym_css_named_color_token141] = ACTIONS(161),
    [aux_sym_css_named_color_token142] = ACTIONS(161),
    [aux_sym_css_named_color_token143] = ACTIONS(161),
    [aux_sym_css_named_color_token144] = ACTIONS(161),
    [aux_sym_css_named_color_token145] = ACTIONS(163),
    [aux_sym_css_named_color_token146] = ACTIONS(161),
    [aux_sym_css_named_color_token147] = ACTIONS(163),
    [aux_sym_css_named_color_token148] = ACTIONS(161),
    [sym_css_keyword_transparent] = ACTIONS(161),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_source_file_token1] = ACTIONS(167),
    [aux_sym_source_file_token2] = ACTIONS(167),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(167),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(165),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(167),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(165),
    [aux_sym_css_function_hwb_token1] = ACTIONS(165),
    [aux_sym_css_function_lab_token1] = ACTIONS(165),
    [aux_sym_css_function_oklab_token1] = ACTIONS(165),
    [aux_sym_css_function_lch_token1] = ACTIONS(165),
    [aux_sym_css_function_oklch_token1] = ACTIONS(165),
    [aux_sym_css_function_color_token1] = ACTIONS(165),
    [sym__css_hex_color_6_digits] = ACTIONS(167),
    [sym__css_hex_color_8_digits] = ACTIONS(165),
    [sym__css_hex_color_3_digits] = ACTIONS(167),
    [sym__css_hex_color_4_digits] = ACTIONS(167),
    [aux_sym_css_named_color_token1] = ACTIONS(165),
    [aux_sym_css_named_color_token2] = ACTIONS(165),
    [aux_sym_css_named_color_token3] = ACTIONS(167),
    [aux_sym_css_named_color_token4] = ACTIONS(165),
    [aux_sym_css_named_color_token5] = ACTIONS(165),
    [aux_sym_css_named_color_token6] = ACTIONS(165),
    [aux_sym_css_named_color_token7] = ACTIONS(165),
    [aux_sym_css_named_color_token8] = ACTIONS(165),
    [aux_sym_css_named_color_token9] = ACTIONS(165),
    [aux_sym_css_named_color_token10] = ACTIONS(167),
    [aux_sym_css_named_color_token11] = ACTIONS(165),
    [aux_sym_css_named_color_token12] = ACTIONS(165),
    [aux_sym_css_named_color_token13] = ACTIONS(165),
    [aux_sym_css_named_color_token14] = ACTIONS(165),
    [aux_sym_css_named_color_token15] = ACTIONS(165),
    [aux_sym_css_named_color_token16] = ACTIONS(165),
    [aux_sym_css_named_color_token17] = ACTIONS(165),
    [aux_sym_css_named_color_token18] = ACTIONS(165),
    [aux_sym_css_named_color_token19] = ACTIONS(165),
    [aux_sym_css_named_color_token20] = ACTIONS(165),
    [aux_sym_css_named_color_token21] = ACTIONS(165),
    [aux_sym_css_named_color_token22] = ACTIONS(165),
    [aux_sym_css_named_color_token23] = ACTIONS(165),
    [aux_sym_css_named_color_token24] = ACTIONS(165),
    [aux_sym_css_named_color_token25] = ACTIONS(165),
    [aux_sym_css_named_color_token26] = ACTIONS(165),
    [aux_sym_css_named_color_token27] = ACTIONS(165),
    [aux_sym_css_named_color_token28] = ACTIONS(165),
    [aux_sym_css_named_color_token29] = ACTIONS(165),
    [aux_sym_css_named_color_token30] = ACTIONS(165),
    [aux_sym_css_named_color_token31] = ACTIONS(165),
    [aux_sym_css_named_color_token32] = ACTIONS(165),
    [aux_sym_css_named_color_token33] = ACTIONS(165),
    [aux_sym_css_named_color_token34] = ACTIONS(165),
    [aux_sym_css_named_color_token35] = ACTIONS(165),
    [aux_sym_css_named_color_token36] = ACTIONS(165),
    [aux_sym_css_named_color_token37] = ACTIONS(165),
    [aux_sym_css_named_color_token38] = ACTIONS(165),
    [aux_sym_css_named_color_token39] = ACTIONS(165),
    [aux_sym_css_named_color_token40] = ACTIONS(165),
    [aux_sym_css_named_color_token41] = ACTIONS(165),
    [aux_sym_css_named_color_token42] = ACTIONS(165),
    [aux_sym_css_named_color_token43] = ACTIONS(165),
    [aux_sym_css_named_color_token44] = ACTIONS(165),
    [aux_sym_css_named_color_token45] = ACTIONS(165),
    [aux_sym_css_named_color_token46] = ACTIONS(165),
    [aux_sym_css_named_color_token47] = ACTIONS(165),
    [aux_sym_css_named_color_token48] = ACTIONS(165),
    [aux_sym_css_named_color_token49] = ACTIONS(165),
    [aux_sym_css_named_color_token50] = ACTIONS(165),
    [aux_sym_css_named_color_token51] = ACTIONS(165),
    [aux_sym_css_named_color_token52] = ACTIONS(167),
    [aux_sym_css_named_color_token53] = ACTIONS(165),
    [aux_sym_css_named_color_token54] = ACTIONS(165),
    [aux_sym_css_named_color_token55] = ACTIONS(167),
    [aux_sym_css_named_color_token56] = ACTIONS(165),
    [aux_sym_css_named_color_token57] = ACTIONS(165),
    [aux_sym_css_named_color_token58] = ACTIONS(165),
    [aux_sym_css_named_color_token59] = ACTIONS(165),
    [aux_sym_css_named_color_token60] = ACTIONS(165),
    [aux_sym_css_named_color_token61] = ACTIONS(165),
    [aux_sym_css_named_color_token62] = ACTIONS(165),
    [aux_sym_css_named_color_token63] = ACTIONS(165),
    [aux_sym_css_named_color_token64] = ACTIONS(167),
    [aux_sym_css_named_color_token65] = ACTIONS(165),
    [aux_sym_css_named_color_token66] = ACTIONS(165),
    [aux_sym_css_named_color_token67] = ACTIONS(165),
    [aux_sym_css_named_color_token68] = ACTIONS(165),
    [aux_sym_css_named_color_token69] = ACTIONS(165),
    [aux_sym_css_named_color_token70] = ACTIONS(165),
    [aux_sym_css_named_color_token71] = ACTIONS(165),
    [aux_sym_css_named_color_token72] = ACTIONS(165),
    [aux_sym_css_named_color_token73] = ACTIONS(165),
    [aux_sym_css_named_color_token74] = ACTIONS(165),
    [aux_sym_css_named_color_token75] = ACTIONS(165),
    [aux_sym_css_named_color_token76] = ACTIONS(165),
    [aux_sym_css_named_color_token77] = ACTIONS(165),
    [aux_sym_css_named_color_token78] = ACTIONS(165),
    [aux_sym_css_named_color_token79] = ACTIONS(165),
    [aux_sym_css_named_color_token80] = ACTIONS(165),
    [aux_sym_css_named_color_token81] = ACTIONS(165),
    [aux_sym_css_named_color_token82] = ACTIONS(165),
    [aux_sym_css_named_color_token83] = ACTIONS(167),
    [aux_sym_css_named_color_token84] = ACTIONS(165),
    [aux_sym_css_named_color_token85] = ACTIONS(165),
    [aux_sym_css_named_color_token86] = ACTIONS(165),
    [aux_sym_css_named_color_token87] = ACTIONS(165),
    [aux_sym_css_named_color_token88] = ACTIONS(165),
    [aux_sym_css_named_color_token89] = ACTIONS(165),
    [aux_sym_css_named_color_token90] = ACTIONS(165),
    [aux_sym_css_named_color_token91] = ACTIONS(165),
    [aux_sym_css_named_color_token92] = ACTIONS(165),
    [aux_sym_css_named_color_token93] = ACTIONS(165),
    [aux_sym_css_named_color_token94] = ACTIONS(165),
    [aux_sym_css_named_color_token95] = ACTIONS(165),
    [aux_sym_css_named_color_token96] = ACTIONS(165),
    [aux_sym_css_named_color_token97] = ACTIONS(165),
    [aux_sym_css_named_color_token98] = ACTIONS(165),
    [aux_sym_css_named_color_token99] = ACTIONS(165),
    [aux_sym_css_named_color_token100] = ACTIONS(165),
    [aux_sym_css_named_color_token101] = ACTIONS(165),
    [aux_sym_css_named_color_token102] = ACTIONS(165),
    [aux_sym_css_named_color_token103] = ACTIONS(165),
    [aux_sym_css_named_color_token104] = ACTIONS(167),
    [aux_sym_css_named_color_token105] = ACTIONS(165),
    [aux_sym_css_named_color_token106] = ACTIONS(167),
    [aux_sym_css_named_color_token107] = ACTIONS(165),
    [aux_sym_css_named_color_token108] = ACTIONS(165),
    [aux_sym_css_named_color_token109] = ACTIONS(165),
    [aux_sym_css_named_color_token110] = ACTIONS(165),
    [aux_sym_css_named_color_token111] = ACTIONS(165),
    [aux_sym_css_named_color_token112] = ACTIONS(165),
    [aux_sym_css_named_color_token113] = ACTIONS(165),
    [aux_sym_css_named_color_token114] = ACTIONS(165),
    [aux_sym_css_named_color_token115] = ACTIONS(165),
    [aux_sym_css_named_color_token116] = ACTIONS(165),
    [aux_sym_css_named_color_token117] = ACTIONS(165),
    [aux_sym_css_named_color_token118] = ACTIONS(165),
    [aux_sym_css_named_color_token119] = ACTIONS(165),
    [aux_sym_css_named_color_token120] = ACTIONS(165),
    [aux_sym_css_named_color_token121] = ACTIONS(165),
    [aux_sym_css_named_color_token122] = ACTIONS(165),
    [aux_sym_css_named_color_token123] = ACTIONS(165),
    [aux_sym_css_named_color_token124] = ACTIONS(165),
    [aux_sym_css_named_color_token125] = ACTIONS(165),
    [aux_sym_css_named_color_token126] = ACTIONS(165),
    [aux_sym_css_named_color_token127] = ACTIONS(165),
    [aux_sym_css_named_color_token128] = ACTIONS(165),
    [aux_sym_css_named_color_token129] = ACTIONS(165),
    [aux_sym_css_named_color_token130] = ACTIONS(165),
    [aux_sym_css_named_color_token131] = ACTIONS(165),
    [aux_sym_css_named_color_token132] = ACTIONS(165),
    [aux_sym_css_named_color_token133] = ACTIONS(165),
    [aux_sym_css_named_color_token134] = ACTIONS(165),
    [aux_sym_css_named_color_token135] = ACTIONS(165),
    [aux_sym_css_named_color_token136] = ACTIONS(165),
    [aux_sym_css_named_color_token137] = ACTIONS(165),
    [aux_sym_css_named_color_token138] = ACTIONS(165),
    [aux_sym_css_named_color_token139] = ACTIONS(165),
    [aux_sym_css_named_color_token140] = ACTIONS(165),
    [aux_sym_css_named_color_token141] = ACTIONS(165),
    [aux_sym_css_named_color_token142] = ACTIONS(165),
    [aux_sym_css_named_color_token143] = ACTIONS(165),
    [aux_sym_css_named_color_token144] = ACTIONS(165),
    [aux_sym_css_named_color_token145] = ACTIONS(167),
    [aux_sym_css_named_color_token146] = ACTIONS(165),
    [aux_sym_css_named_color_token147] = ACTIONS(167),
    [aux_sym_css_named_color_token148] = ACTIONS(165),
    [sym_css_keyword_transparent] = ACTIONS(165),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_source_file_token1] = ACTIONS(171),
    [aux_sym_source_file_token2] = ACTIONS(171),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(171),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(169),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(171),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(169),
    [aux_sym_css_function_hwb_token1] = ACTIONS(169),
    [aux_sym_css_function_lab_token1] = ACTIONS(169),
    [aux_sym_css_function_oklab_token1] = ACTIONS(169),
    [aux_sym_css_function_lch_token1] = ACTIONS(169),
    [aux_sym_css_function_oklch_token1] = ACTIONS(169),
    [aux_sym_css_function_color_token1] = ACTIONS(169),
    [sym__css_hex_color_6_digits] = ACTIONS(171),
    [sym__css_hex_color_8_digits] = ACTIONS(169),
    [sym__css_hex_color_3_digits] = ACTIONS(171),
    [sym__css_hex_color_4_digits] = ACTIONS(171),
    [aux_sym_css_named_color_token1] = ACTIONS(169),
    [aux_sym_css_named_color_token2] = ACTIONS(169),
    [aux_sym_css_named_color_token3] = ACTIONS(171),
    [aux_sym_css_named_color_token4] = ACTIONS(169),
    [aux_sym_css_named_color_token5] = ACTIONS(169),
    [aux_sym_css_named_color_token6] = ACTIONS(169),
    [aux_sym_css_named_color_token7] = ACTIONS(169),
    [aux_sym_css_named_color_token8] = ACTIONS(169),
    [aux_sym_css_named_color_token9] = ACTIONS(169),
    [aux_sym_css_named_color_token10] = ACTIONS(171),
    [aux_sym_css_named_color_token11] = ACTIONS(169),
    [aux_sym_css_named_color_token12] = ACTIONS(169),
    [aux_sym_css_named_color_token13] = ACTIONS(169),
    [aux_sym_css_named_color_token14] = ACTIONS(169),
    [aux_sym_css_named_color_token15] = ACTIONS(169),
    [aux_sym_css_named_color_token16] = ACTIONS(169),
    [aux_sym_css_named_color_token17] = ACTIONS(169),
    [aux_sym_css_named_color_token18] = ACTIONS(169),
    [aux_sym_css_named_color_token19] = ACTIONS(169),
    [aux_sym_css_named_color_token20] = ACTIONS(169),
    [aux_sym_css_named_color_token21] = ACTIONS(169),
    [aux_sym_css_named_color_token22] = ACTIONS(169),
    [aux_sym_css_named_color_token23] = ACTIONS(169),
    [aux_sym_css_named_color_token24] = ACTIONS(169),
    [aux_sym_css_named_color_token25] = ACTIONS(169),
    [aux_sym_css_named_color_token26] = ACTIONS(169),
    [aux_sym_css_named_color_token27] = ACTIONS(169),
    [aux_sym_css_named_color_token28] = ACTIONS(169),
    [aux_sym_css_named_color_token29] = ACTIONS(169),
    [aux_sym_css_named_color_token30] = ACTIONS(169),
    [aux_sym_css_named_color_token31] = ACTIONS(169),
    [aux_sym_css_named_color_token32] = ACTIONS(169),
    [aux_sym_css_named_color_token33] = ACTIONS(169),
    [aux_sym_css_named_color_token34] = ACTIONS(169),
    [aux_sym_css_named_color_token35] = ACTIONS(169),
    [aux_sym_css_named_color_token36] = ACTIONS(169),
    [aux_sym_css_named_color_token37] = ACTIONS(169),
    [aux_sym_css_named_color_token38] = ACTIONS(169),
    [aux_sym_css_named_color_token39] = ACTIONS(169),
    [aux_sym_css_named_color_token40] = ACTIONS(169),
    [aux_sym_css_named_color_token41] = ACTIONS(169),
    [aux_sym_css_named_color_token42] = ACTIONS(169),
    [aux_sym_css_named_color_token43] = ACTIONS(169),
    [aux_sym_css_named_color_token44] = ACTIONS(169),
    [aux_sym_css_named_color_token45] = ACTIONS(169),
    [aux_sym_css_named_color_token46] = ACTIONS(169),
    [aux_sym_css_named_color_token47] = ACTIONS(169),
    [aux_sym_css_named_color_token48] = ACTIONS(169),
    [aux_sym_css_named_color_token49] = ACTIONS(169),
    [aux_sym_css_named_color_token50] = ACTIONS(169),
    [aux_sym_css_named_color_token51] = ACTIONS(169),
    [aux_sym_css_named_color_token52] = ACTIONS(171),
    [aux_sym_css_named_color_token53] = ACTIONS(169),
    [aux_sym_css_named_color_token54] = ACTIONS(169),
    [aux_sym_css_named_color_token55] = ACTIONS(171),
    [aux_sym_css_named_color_token56] = ACTIONS(169),
    [aux_sym_css_named_color_token57] = ACTIONS(169),
    [aux_sym_css_named_color_token58] = ACTIONS(169),
    [aux_sym_css_named_color_token59] = ACTIONS(169),
    [aux_sym_css_named_color_token60] = ACTIONS(169),
    [aux_sym_css_named_color_token61] = ACTIONS(169),
    [aux_sym_css_named_color_token62] = ACTIONS(169),
    [aux_sym_css_named_color_token63] = ACTIONS(169),
    [aux_sym_css_named_color_token64] = ACTIONS(171),
    [aux_sym_css_named_color_token65] = ACTIONS(169),
    [aux_sym_css_named_color_token66] = ACTIONS(169),
    [aux_sym_css_named_color_token67] = ACTIONS(169),
    [aux_sym_css_named_color_token68] = ACTIONS(169),
    [aux_sym_css_named_color_token69] = ACTIONS(169),
    [aux_sym_css_named_color_token70] = ACTIONS(169),
    [aux_sym_css_named_color_token71] = ACTIONS(169),
    [aux_sym_css_named_color_token72] = ACTIONS(169),
    [aux_sym_css_named_color_token73] = ACTIONS(169),
    [aux_sym_css_named_color_token74] = ACTIONS(169),
    [aux_sym_css_named_color_token75] = ACTIONS(169),
    [aux_sym_css_named_color_token76] = ACTIONS(169),
    [aux_sym_css_named_color_token77] = ACTIONS(169),
    [aux_sym_css_named_color_token78] = ACTIONS(169),
    [aux_sym_css_named_color_token79] = ACTIONS(169),
    [aux_sym_css_named_color_token80] = ACTIONS(169),
    [aux_sym_css_named_color_token81] = ACTIONS(169),
    [aux_sym_css_named_color_token82] = ACTIONS(169),
    [aux_sym_css_named_color_token83] = ACTIONS(171),
    [aux_sym_css_named_color_token84] = ACTIONS(169),
    [aux_sym_css_named_color_token85] = ACTIONS(169),
    [aux_sym_css_named_color_token86] = ACTIONS(169),
    [aux_sym_css_named_color_token87] = ACTIONS(169),
    [aux_sym_css_named_color_token88] = ACTIONS(169),
    [aux_sym_css_named_color_token89] = ACTIONS(169),
    [aux_sym_css_named_color_token90] = ACTIONS(169),
    [aux_sym_css_named_color_token91] = ACTIONS(169),
    [aux_sym_css_named_color_token92] = ACTIONS(169),
    [aux_sym_css_named_color_token93] = ACTIONS(169),
    [aux_sym_css_named_color_token94] = ACTIONS(169),
    [aux_sym_css_named_color_token95] = ACTIONS(169),
    [aux_sym_css_named_color_token96] = ACTIONS(169),
    [aux_sym_css_named_color_token97] = ACTIONS(169),
    [aux_sym_css_named_color_token98] = ACTIONS(169),
    [aux_sym_css_named_color_token99] = ACTIONS(169),
    [aux_sym_css_named_color_token100] = ACTIONS(169),
    [aux_sym_css_named_color_token101] = ACTIONS(169),
    [aux_sym_css_named_color_token102] = ACTIONS(169),
    [aux_sym_css_named_color_token103] = ACTIONS(169),
    [aux_sym_css_named_color_token104] = ACTIONS(171),
    [aux_sym_css_named_color_token105] = ACTIONS(169),
    [aux_sym_css_named_color_token106] = ACTIONS(171),
    [aux_sym_css_named_color_token107] = ACTIONS(169),
    [aux_sym_css_named_color_token108] = ACTIONS(169),
    [aux_sym_css_named_color_token109] = ACTIONS(169),
    [aux_sym_css_named_color_token110] = ACTIONS(169),
    [aux_sym_css_named_color_token111] = ACTIONS(169),
    [aux_sym_css_named_color_token112] = ACTIONS(169),
    [aux_sym_css_named_color_token113] = ACTIONS(169),
    [aux_sym_css_named_color_token114] = ACTIONS(169),
    [aux_sym_css_named_color_token115] = ACTIONS(169),
    [aux_sym_css_named_color_token116] = ACTIONS(169),
    [aux_sym_css_named_color_token117] = ACTIONS(169),
    [aux_sym_css_named_color_token118] = ACTIONS(169),
    [aux_sym_css_named_color_token119] = ACTIONS(169),
    [aux_sym_css_named_color_token120] = ACTIONS(169),
    [aux_sym_css_named_color_token121] = ACTIONS(169),
    [aux_sym_css_named_color_token122] = ACTIONS(169),
    [aux_sym_css_named_color_token123] = ACTIONS(169),
    [aux_sym_css_named_color_token124] = ACTIONS(169),
    [aux_sym_css_named_color_token125] = ACTIONS(169),
    [aux_sym_css_named_color_token126] = ACTIONS(169),
    [aux_sym_css_named_color_token127] = ACTIONS(169),
    [aux_sym_css_named_color_token128] = ACTIONS(169),
    [aux_sym_css_named_color_token129] = ACTIONS(169),
    [aux_sym_css_named_color_token130] = ACTIONS(169),
    [aux_sym_css_named_color_token131] = ACTIONS(169),
    [aux_sym_css_named_color_token132] = ACTIONS(169),
    [aux_sym_css_named_color_token133] = ACTIONS(169),
    [aux_sym_css_named_color_token134] = ACTIONS(169),
    [aux_sym_css_named_color_token135] = ACTIONS(169),
    [aux_sym_css_named_color_token136] = ACTIONS(169),
    [aux_sym_css_named_color_token137] = ACTIONS(169),
    [aux_sym_css_named_color_token138] = ACTIONS(169),
    [aux_sym_css_named_color_token139] = ACTIONS(169),
    [aux_sym_css_named_color_token140] = ACTIONS(169),
    [aux_sym_css_named_color_token141] = ACTIONS(169),
    [aux_sym_css_named_color_token142] = ACTIONS(169),
    [aux_sym_css_named_color_token143] = ACTIONS(169),
    [aux_sym_css_named_color_token144] = ACTIONS(169),
    [aux_sym_css_named_color_token145] = ACTIONS(171),
    [aux_sym_css_named_color_token146] = ACTIONS(169),
    [aux_sym_css_named_color_token147] = ACTIONS(171),
    [aux_sym_css_named_color_token148] = ACTIONS(169),
    [sym_css_keyword_transparent] = ACTIONS(169),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [aux_sym_source_file_token1] = ACTIONS(175),
    [aux_sym_source_file_token2] = ACTIONS(175),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(175),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(173),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(175),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(173),
    [aux_sym_css_function_hwb_token1] = ACTIONS(173),
    [aux_sym_css_function_lab_token1] = ACTIONS(173),
    [aux_sym_css_function_oklab_token1] = ACTIONS(173),
    [aux_sym_css_function_lch_token1] = ACTIONS(173),
    [aux_sym_css_function_oklch_token1] = ACTIONS(173),
    [aux_sym_css_function_color_token1] = ACTIONS(173),
    [sym__css_hex_color_6_digits] = ACTIONS(175),
    [sym__css_hex_color_8_digits] = ACTIONS(173),
    [sym__css_hex_color_3_digits] = ACTIONS(175),
    [sym__css_hex_color_4_digits] = ACTIONS(175),
    [aux_sym_css_named_color_token1] = ACTIONS(173),
    [aux_sym_css_named_color_token2] = ACTIONS(173),
    [aux_sym_css_named_color_token3] = ACTIONS(175),
    [aux_sym_css_named_color_token4] = ACTIONS(173),
    [aux_sym_css_named_color_token5] = ACTIONS(173),
    [aux_sym_css_named_color_token6] = ACTIONS(173),
    [aux_sym_css_named_color_token7] = ACTIONS(173),
    [aux_sym_css_named_color_token8] = ACTIONS(173),
    [aux_sym_css_named_color_token9] = ACTIONS(173),
    [aux_sym_css_named_color_token10] = ACTIONS(175),
    [aux_sym_css_named_color_token11] = ACTIONS(173),
    [aux_sym_css_named_color_token12] = ACTIONS(173),
    [aux_sym_css_named_color_token13] = ACTIONS(173),
    [aux_sym_css_named_color_token14] = ACTIONS(173),
    [aux_sym_css_named_color_token15] = ACTIONS(173),
    [aux_sym_css_named_color_token16] = ACTIONS(173),
    [aux_sym_css_named_color_token17] = ACTIONS(173),
    [aux_sym_css_named_color_token18] = ACTIONS(173),
    [aux_sym_css_named_color_token19] = ACTIONS(173),
    [aux_sym_css_named_color_token20] = ACTIONS(173),
    [aux_sym_css_named_color_token21] = ACTIONS(173),
    [aux_sym_css_named_color_token22] = ACTIONS(173),
    [aux_sym_css_named_color_token23] = ACTIONS(173),
    [aux_sym_css_named_color_token24] = ACTIONS(173),
    [aux_sym_css_named_color_token25] = ACTIONS(173),
    [aux_sym_css_named_color_token26] = ACTIONS(173),
    [aux_sym_css_named_color_token27] = ACTIONS(173),
    [aux_sym_css_named_color_token28] = ACTIONS(173),
    [aux_sym_css_named_color_token29] = ACTIONS(173),
    [aux_sym_css_named_color_token30] = ACTIONS(173),
    [aux_sym_css_named_color_token31] = ACTIONS(173),
    [aux_sym_css_named_color_token32] = ACTIONS(173),
    [aux_sym_css_named_color_token33] = ACTIONS(173),
    [aux_sym_css_named_color_token34] = ACTIONS(173),
    [aux_sym_css_named_color_token35] = ACTIONS(173),
    [aux_sym_css_named_color_token36] = ACTIONS(173),
    [aux_sym_css_named_color_token37] = ACTIONS(173),
    [aux_sym_css_named_color_token38] = ACTIONS(173),
    [aux_sym_css_named_color_token39] = ACTIONS(173),
    [aux_sym_css_named_color_token40] = ACTIONS(173),
    [aux_sym_css_named_color_token41] = ACTIONS(173),
    [aux_sym_css_named_color_token42] = ACTIONS(173),
    [aux_sym_css_named_color_token43] = ACTIONS(173),
    [aux_sym_css_named_color_token44] = ACTIONS(173),
    [aux_sym_css_named_color_token45] = ACTIONS(173),
    [aux_sym_css_named_color_token46] = ACTIONS(173),
    [aux_sym_css_named_color_token47] = ACTIONS(173),
    [aux_sym_css_named_color_token48] = ACTIONS(173),
    [aux_sym_css_named_color_token49] = ACTIONS(173),
    [aux_sym_css_named_color_token50] = ACTIONS(173),
    [aux_sym_css_named_color_token51] = ACTIONS(173),
    [aux_sym_css_named_color_token52] = ACTIONS(175),
    [aux_sym_css_named_color_token53] = ACTIONS(173),
    [aux_sym_css_named_color_token54] = ACTIONS(173),
    [aux_sym_css_named_color_token55] = ACTIONS(175),
    [aux_sym_css_named_color_token56] = ACTIONS(173),
    [aux_sym_css_named_color_token57] = ACTIONS(173),
    [aux_sym_css_named_color_token58] = ACTIONS(173),
    [aux_sym_css_named_color_token59] = ACTIONS(173),
    [aux_sym_css_named_color_token60] = ACTIONS(173),
    [aux_sym_css_named_color_token61] = ACTIONS(173),
    [aux_sym_css_named_color_token62] = ACTIONS(173),
    [aux_sym_css_named_color_token63] = ACTIONS(173),
    [aux_sym_css_named_color_token64] = ACTIONS(175),
    [aux_sym_css_named_color_token65] = ACTIONS(173),
    [aux_sym_css_named_color_token66] = ACTIONS(173),
    [aux_sym_css_named_color_token67] = ACTIONS(173),
    [aux_sym_css_named_color_token68] = ACTIONS(173),
    [aux_sym_css_named_color_token69] = ACTIONS(173),
    [aux_sym_css_named_color_token70] = ACTIONS(173),
    [aux_sym_css_named_color_token71] = ACTIONS(173),
    [aux_sym_css_named_color_token72] = ACTIONS(173),
    [aux_sym_css_named_color_token73] = ACTIONS(173),
    [aux_sym_css_named_color_token74] = ACTIONS(173),
    [aux_sym_css_named_color_token75] = ACTIONS(173),
    [aux_sym_css_named_color_token76] = ACTIONS(173),
    [aux_sym_css_named_color_token77] = ACTIONS(173),
    [aux_sym_css_named_color_token78] = ACTIONS(173),
    [aux_sym_css_named_color_token79] = ACTIONS(173),
    [aux_sym_css_named_color_token80] = ACTIONS(173),
    [aux_sym_css_named_color_token81] = ACTIONS(173),
    [aux_sym_css_named_color_token82] = ACTIONS(173),
    [aux_sym_css_named_color_token83] = ACTIONS(175),
    [aux_sym_css_named_color_token84] = ACTIONS(173),
    [aux_sym_css_named_color_token85] = ACTIONS(173),
    [aux_sym_css_named_color_token86] = ACTIONS(173),
    [aux_sym_css_named_color_token87] = ACTIONS(173),
    [aux_sym_css_named_color_token88] = ACTIONS(173),
    [aux_sym_css_named_color_token89] = ACTIONS(173),
    [aux_sym_css_named_color_token90] = ACTIONS(173),
    [aux_sym_css_named_color_token91] = ACTIONS(173),
    [aux_sym_css_named_color_token92] = ACTIONS(173),
    [aux_sym_css_named_color_token93] = ACTIONS(173),
    [aux_sym_css_named_color_token94] = ACTIONS(173),
    [aux_sym_css_named_color_token95] = ACTIONS(173),
    [aux_sym_css_named_color_token96] = ACTIONS(173),
    [aux_sym_css_named_color_token97] = ACTIONS(173),
    [aux_sym_css_named_color_token98] = ACTIONS(173),
    [aux_sym_css_named_color_token99] = ACTIONS(173),
    [aux_sym_css_named_color_token100] = ACTIONS(173),
    [aux_sym_css_named_color_token101] = ACTIONS(173),
    [aux_sym_css_named_color_token102] = ACTIONS(173),
    [aux_sym_css_named_color_token103] = ACTIONS(173),
    [aux_sym_css_named_color_token104] = ACTIONS(175),
    [aux_sym_css_named_color_token105] = ACTIONS(173),
    [aux_sym_css_named_color_token106] = ACTIONS(175),
    [aux_sym_css_named_color_token107] = ACTIONS(173),
    [aux_sym_css_named_color_token108] = ACTIONS(173),
    [aux_sym_css_named_color_token109] = ACTIONS(173),
    [aux_sym_css_named_color_token110] = ACTIONS(173),
    [aux_sym_css_named_color_token111] = ACTIONS(173),
    [aux_sym_css_named_color_token112] = ACTIONS(173),
    [aux_sym_css_named_color_token113] = ACTIONS(173),
    [aux_sym_css_named_color_token114] = ACTIONS(173),
    [aux_sym_css_named_color_token115] = ACTIONS(173),
    [aux_sym_css_named_color_token116] = ACTIONS(173),
    [aux_sym_css_named_color_token117] = ACTIONS(173),
    [aux_sym_css_named_color_token118] = ACTIONS(173),
    [aux_sym_css_named_color_token119] = ACTIONS(173),
    [aux_sym_css_named_color_token120] = ACTIONS(173),
    [aux_sym_css_named_color_token121] = ACTIONS(173),
    [aux_sym_css_named_color_token122] = ACTIONS(173),
    [aux_sym_css_named_color_token123] = ACTIONS(173),
    [aux_sym_css_named_color_token124] = ACTIONS(173),
    [aux_sym_css_named_color_token125] = ACTIONS(173),
    [aux_sym_css_named_color_token126] = ACTIONS(173),
    [aux_sym_css_named_color_token127] = ACTIONS(173),
    [aux_sym_css_named_color_token128] = ACTIONS(173),
    [aux_sym_css_named_color_token129] = ACTIONS(173),
    [aux_sym_css_named_color_token130] = ACTIONS(173),
    [aux_sym_css_named_color_token131] = ACTIONS(173),
    [aux_sym_css_named_color_token132] = ACTIONS(173),
    [aux_sym_css_named_color_token133] = ACTIONS(173),
    [aux_sym_css_named_color_token134] = ACTIONS(173),
    [aux_sym_css_named_color_token135] = ACTIONS(173),
    [aux_sym_css_named_color_token136] = ACTIONS(173),
    [aux_sym_css_named_color_token137] = ACTIONS(173),
    [aux_sym_css_named_color_token138] = ACTIONS(173),
    [aux_sym_css_named_color_token139] = ACTIONS(173),
    [aux_sym_css_named_color_token140] = ACTIONS(173),
    [aux_sym_css_named_color_token141] = ACTIONS(173),
    [aux_sym_css_named_color_token142] = ACTIONS(173),
    [aux_sym_css_named_color_token143] = ACTIONS(173),
    [aux_sym_css_named_color_token144] = ACTIONS(173),
    [aux_sym_css_named_color_token145] = ACTIONS(175),
    [aux_sym_css_named_color_token146] = ACTIONS(173),
    [aux_sym_css_named_color_token147] = ACTIONS(175),
    [aux_sym_css_named_color_token148] = ACTIONS(173),
    [sym_css_keyword_transparent] = ACTIONS(173),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [aux_sym_source_file_token1] = ACTIONS(179),
    [aux_sym_source_file_token2] = ACTIONS(179),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(179),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(177),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(179),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(177),
    [aux_sym_css_function_hwb_token1] = ACTIONS(177),
    [aux_sym_css_function_lab_token1] = ACTIONS(177),
    [aux_sym_css_function_oklab_token1] = ACTIONS(177),
    [aux_sym_css_function_lch_token1] = ACTIONS(177),
    [aux_sym_css_function_oklch_token1] = ACTIONS(177),
    [aux_sym_css_function_color_token1] = ACTIONS(177),
    [sym__css_hex_color_6_digits] = ACTIONS(179),
    [sym__css_hex_color_8_digits] = ACTIONS(177),
    [sym__css_hex_color_3_digits] = ACTIONS(179),
    [sym__css_hex_color_4_digits] = ACTIONS(179),
    [aux_sym_css_named_color_token1] = ACTIONS(177),
    [aux_sym_css_named_color_token2] = ACTIONS(177),
    [aux_sym_css_named_color_token3] = ACTIONS(179),
    [aux_sym_css_named_color_token4] = ACTIONS(177),
    [aux_sym_css_named_color_token5] = ACTIONS(177),
    [aux_sym_css_named_color_token6] = ACTIONS(177),
    [aux_sym_css_named_color_token7] = ACTIONS(177),
    [aux_sym_css_named_color_token8] = ACTIONS(177),
    [aux_sym_css_named_color_token9] = ACTIONS(177),
    [aux_sym_css_named_color_token10] = ACTIONS(179),
    [aux_sym_css_named_color_token11] = ACTIONS(177),
    [aux_sym_css_named_color_token12] = ACTIONS(177),
    [aux_sym_css_named_color_token13] = ACTIONS(177),
    [aux_sym_css_named_color_token14] = ACTIONS(177),
    [aux_sym_css_named_color_token15] = ACTIONS(177),
    [aux_sym_css_named_color_token16] = ACTIONS(177),
    [aux_sym_css_named_color_token17] = ACTIONS(177),
    [aux_sym_css_named_color_token18] = ACTIONS(177),
    [aux_sym_css_named_color_token19] = ACTIONS(177),
    [aux_sym_css_named_color_token20] = ACTIONS(177),
    [aux_sym_css_named_color_token21] = ACTIONS(177),
    [aux_sym_css_named_color_token22] = ACTIONS(177),
    [aux_sym_css_named_color_token23] = ACTIONS(177),
    [aux_sym_css_named_color_token24] = ACTIONS(177),
    [aux_sym_css_named_color_token25] = ACTIONS(177),
    [aux_sym_css_named_color_token26] = ACTIONS(177),
    [aux_sym_css_named_color_token27] = ACTIONS(177),
    [aux_sym_css_named_color_token28] = ACTIONS(177),
    [aux_sym_css_named_color_token29] = ACTIONS(177),
    [aux_sym_css_named_color_token30] = ACTIONS(177),
    [aux_sym_css_named_color_token31] = ACTIONS(177),
    [aux_sym_css_named_color_token32] = ACTIONS(177),
    [aux_sym_css_named_color_token33] = ACTIONS(177),
    [aux_sym_css_named_color_token34] = ACTIONS(177),
    [aux_sym_css_named_color_token35] = ACTIONS(177),
    [aux_sym_css_named_color_token36] = ACTIONS(177),
    [aux_sym_css_named_color_token37] = ACTIONS(177),
    [aux_sym_css_named_color_token38] = ACTIONS(177),
    [aux_sym_css_named_color_token39] = ACTIONS(177),
    [aux_sym_css_named_color_token40] = ACTIONS(177),
    [aux_sym_css_named_color_token41] = ACTIONS(177),
    [aux_sym_css_named_color_token42] = ACTIONS(177),
    [aux_sym_css_named_color_token43] = ACTIONS(177),
    [aux_sym_css_named_color_token44] = ACTIONS(177),
    [aux_sym_css_named_color_token45] = ACTIONS(177),
    [aux_sym_css_named_color_token46] = ACTIONS(177),
    [aux_sym_css_named_color_token47] = ACTIONS(177),
    [aux_sym_css_named_color_token48] = ACTIONS(177),
    [aux_sym_css_named_color_token49] = ACTIONS(177),
    [aux_sym_css_named_color_token50] = ACTIONS(177),
    [aux_sym_css_named_color_token51] = ACTIONS(177),
    [aux_sym_css_named_color_token52] = ACTIONS(179),
    [aux_sym_css_named_color_token53] = ACTIONS(177),
    [aux_sym_css_named_color_token54] = ACTIONS(177),
    [aux_sym_css_named_color_token55] = ACTIONS(179),
    [aux_sym_css_named_color_token56] = ACTIONS(177),
    [aux_sym_css_named_color_token57] = ACTIONS(177),
    [aux_sym_css_named_color_token58] = ACTIONS(177),
    [aux_sym_css_named_color_token59] = ACTIONS(177),
    [aux_sym_css_named_color_token60] = ACTIONS(177),
    [aux_sym_css_named_color_token61] = ACTIONS(177),
    [aux_sym_css_named_color_token62] = ACTIONS(177),
    [aux_sym_css_named_color_token63] = ACTIONS(177),
    [aux_sym_css_named_color_token64] = ACTIONS(179),
    [aux_sym_css_named_color_token65] = ACTIONS(177),
    [aux_sym_css_named_color_token66] = ACTIONS(177),
    [aux_sym_css_named_color_token67] = ACTIONS(177),
    [aux_sym_css_named_color_token68] = ACTIONS(177),
    [aux_sym_css_named_color_token69] = ACTIONS(177),
    [aux_sym_css_named_color_token70] = ACTIONS(177),
    [aux_sym_css_named_color_token71] = ACTIONS(177),
    [aux_sym_css_named_color_token72] = ACTIONS(177),
    [aux_sym_css_named_color_token73] = ACTIONS(177),
    [aux_sym_css_named_color_token74] = ACTIONS(177),
    [aux_sym_css_named_color_token75] = ACTIONS(177),
    [aux_sym_css_named_color_token76] = ACTIONS(177),
    [aux_sym_css_named_color_token77] = ACTIONS(177),
    [aux_sym_css_named_color_token78] = ACTIONS(177),
    [aux_sym_css_named_color_token79] = ACTIONS(177),
    [aux_sym_css_named_color_token80] = ACTIONS(177),
    [aux_sym_css_named_color_token81] = ACTIONS(177),
    [aux_sym_css_named_color_token82] = ACTIONS(177),
    [aux_sym_css_named_color_token83] = ACTIONS(179),
    [aux_sym_css_named_color_token84] = ACTIONS(177),
    [aux_sym_css_named_color_token85] = ACTIONS(177),
    [aux_sym_css_named_color_token86] = ACTIONS(177),
    [aux_sym_css_named_color_token87] = ACTIONS(177),
    [aux_sym_css_named_color_token88] = ACTIONS(177),
    [aux_sym_css_named_color_token89] = ACTIONS(177),
    [aux_sym_css_named_color_token90] = ACTIONS(177),
    [aux_sym_css_named_color_token91] = ACTIONS(177),
    [aux_sym_css_named_color_token92] = ACTIONS(177),
    [aux_sym_css_named_color_token93] = ACTIONS(177),
    [aux_sym_css_named_color_token94] = ACTIONS(177),
    [aux_sym_css_named_color_token95] = ACTIONS(177),
    [aux_sym_css_named_color_token96] = ACTIONS(177),
    [aux_sym_css_named_color_token97] = ACTIONS(177),
    [aux_sym_css_named_color_token98] = ACTIONS(177),
    [aux_sym_css_named_color_token99] = ACTIONS(177),
    [aux_sym_css_named_color_token100] = ACTIONS(177),
    [aux_sym_css_named_color_token101] = ACTIONS(177),
    [aux_sym_css_named_color_token102] = ACTIONS(177),
    [aux_sym_css_named_color_token103] = ACTIONS(177),
    [aux_sym_css_named_color_token104] = ACTIONS(179),
    [aux_sym_css_named_color_token105] = ACTIONS(177),
    [aux_sym_css_named_color_token106] = ACTIONS(179),
    [aux_sym_css_named_color_token107] = ACTIONS(177),
    [aux_sym_css_named_color_token108] = ACTIONS(177),
    [aux_sym_css_named_color_token109] = ACTIONS(177),
    [aux_sym_css_named_color_token110] = ACTIONS(177),
    [aux_sym_css_named_color_token111] = ACTIONS(177),
    [aux_sym_css_named_color_token112] = ACTIONS(177),
    [aux_sym_css_named_color_token113] = ACTIONS(177),
    [aux_sym_css_named_color_token114] = ACTIONS(177),
    [aux_sym_css_named_color_token115] = ACTIONS(177),
    [aux_sym_css_named_color_token116] = ACTIONS(177),
    [aux_sym_css_named_color_token117] = ACTIONS(177),
    [aux_sym_css_named_color_token118] = ACTIONS(177),
    [aux_sym_css_named_color_token119] = ACTIONS(177),
    [aux_sym_css_named_color_token120] = ACTIONS(177),
    [aux_sym_css_named_color_token121] = ACTIONS(177),
    [aux_sym_css_named_color_token122] = ACTIONS(177),
    [aux_sym_css_named_color_token123] = ACTIONS(177),
    [aux_sym_css_named_color_token124] = ACTIONS(177),
    [aux_sym_css_named_color_token125] = ACTIONS(177),
    [aux_sym_css_named_color_token126] = ACTIONS(177),
    [aux_sym_css_named_color_token127] = ACTIONS(177),
    [aux_sym_css_named_color_token128] = ACTIONS(177),
    [aux_sym_css_named_color_token129] = ACTIONS(177),
    [aux_sym_css_named_color_token130] = ACTIONS(177),
    [aux_sym_css_named_color_token131] = ACTIONS(177),
    [aux_sym_css_named_color_token132] = ACTIONS(177),
    [aux_sym_css_named_color_token133] = ACTIONS(177),
    [aux_sym_css_named_color_token134] = ACTIONS(177),
    [aux_sym_css_named_color_token135] = ACTIONS(177),
    [aux_sym_css_named_color_token136] = ACTIONS(177),
    [aux_sym_css_named_color_token137] = ACTIONS(177),
    [aux_sym_css_named_color_token138] = ACTIONS(177),
    [aux_sym_css_named_color_token139] = ACTIONS(177),
    [aux_sym_css_named_color_token140] = ACTIONS(177),
    [aux_sym_css_named_color_token141] = ACTIONS(177),
    [aux_sym_css_named_color_token142] = ACTIONS(177),
    [aux_sym_css_named_color_token143] = ACTIONS(177),
    [aux_sym_css_named_color_token144] = ACTIONS(177),
    [aux_sym_css_named_color_token145] = ACTIONS(179),
    [aux_sym_css_named_color_token146] = ACTIONS(177),
    [aux_sym_css_named_color_token147] = ACTIONS(179),
    [aux_sym_css_named_color_token148] = ACTIONS(177),
    [sym_css_keyword_transparent] = ACTIONS(177),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [aux_sym_source_file_token1] = ACTIONS(183),
    [aux_sym_source_file_token2] = ACTIONS(183),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(183),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(181),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(183),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(181),
    [aux_sym_css_function_hwb_token1] = ACTIONS(181),
    [aux_sym_css_function_lab_token1] = ACTIONS(181),
    [aux_sym_css_function_oklab_token1] = ACTIONS(181),
    [aux_sym_css_function_lch_token1] = ACTIONS(181),
    [aux_sym_css_function_oklch_token1] = ACTIONS(181),
    [aux_sym_css_function_color_token1] = ACTIONS(181),
    [sym__css_hex_color_6_digits] = ACTIONS(183),
    [sym__css_hex_color_8_digits] = ACTIONS(181),
    [sym__css_hex_color_3_digits] = ACTIONS(183),
    [sym__css_hex_color_4_digits] = ACTIONS(183),
    [aux_sym_css_named_color_token1] = ACTIONS(181),
    [aux_sym_css_named_color_token2] = ACTIONS(181),
    [aux_sym_css_named_color_token3] = ACTIONS(183),
    [aux_sym_css_named_color_token4] = ACTIONS(181),
    [aux_sym_css_named_color_token5] = ACTIONS(181),
    [aux_sym_css_named_color_token6] = ACTIONS(181),
    [aux_sym_css_named_color_token7] = ACTIONS(181),
    [aux_sym_css_named_color_token8] = ACTIONS(181),
    [aux_sym_css_named_color_token9] = ACTIONS(181),
    [aux_sym_css_named_color_token10] = ACTIONS(183),
    [aux_sym_css_named_color_token11] = ACTIONS(181),
    [aux_sym_css_named_color_token12] = ACTIONS(181),
    [aux_sym_css_named_color_token13] = ACTIONS(181),
    [aux_sym_css_named_color_token14] = ACTIONS(181),
    [aux_sym_css_named_color_token15] = ACTIONS(181),
    [aux_sym_css_named_color_token16] = ACTIONS(181),
    [aux_sym_css_named_color_token17] = ACTIONS(181),
    [aux_sym_css_named_color_token18] = ACTIONS(181),
    [aux_sym_css_named_color_token19] = ACTIONS(181),
    [aux_sym_css_named_color_token20] = ACTIONS(181),
    [aux_sym_css_named_color_token21] = ACTIONS(181),
    [aux_sym_css_named_color_token22] = ACTIONS(181),
    [aux_sym_css_named_color_token23] = ACTIONS(181),
    [aux_sym_css_named_color_token24] = ACTIONS(181),
    [aux_sym_css_named_color_token25] = ACTIONS(181),
    [aux_sym_css_named_color_token26] = ACTIONS(181),
    [aux_sym_css_named_color_token27] = ACTIONS(181),
    [aux_sym_css_named_color_token28] = ACTIONS(181),
    [aux_sym_css_named_color_token29] = ACTIONS(181),
    [aux_sym_css_named_color_token30] = ACTIONS(181),
    [aux_sym_css_named_color_token31] = ACTIONS(181),
    [aux_sym_css_named_color_token32] = ACTIONS(181),
    [aux_sym_css_named_color_token33] = ACTIONS(181),
    [aux_sym_css_named_color_token34] = ACTIONS(181),
    [aux_sym_css_named_color_token35] = ACTIONS(181),
    [aux_sym_css_named_color_token36] = ACTIONS(181),
    [aux_sym_css_named_color_token37] = ACTIONS(181),
    [aux_sym_css_named_color_token38] = ACTIONS(181),
    [aux_sym_css_named_color_token39] = ACTIONS(181),
    [aux_sym_css_named_color_token40] = ACTIONS(181),
    [aux_sym_css_named_color_token41] = ACTIONS(181),
    [aux_sym_css_named_color_token42] = ACTIONS(181),
    [aux_sym_css_named_color_token43] = ACTIONS(181),
    [aux_sym_css_named_color_token44] = ACTIONS(181),
    [aux_sym_css_named_color_token45] = ACTIONS(181),
    [aux_sym_css_named_color_token46] = ACTIONS(181),
    [aux_sym_css_named_color_token47] = ACTIONS(181),
    [aux_sym_css_named_color_token48] = ACTIONS(181),
    [aux_sym_css_named_color_token49] = ACTIONS(181),
    [aux_sym_css_named_color_token50] = ACTIONS(181),
    [aux_sym_css_named_color_token51] = ACTIONS(181),
    [aux_sym_css_named_color_token52] = ACTIONS(183),
    [aux_sym_css_named_color_token53] = ACTIONS(181),
    [aux_sym_css_named_color_token54] = ACTIONS(181),
    [aux_sym_css_named_color_token55] = ACTIONS(183),
    [aux_sym_css_named_color_token56] = ACTIONS(181),
    [aux_sym_css_named_color_token57] = ACTIONS(181),
    [aux_sym_css_named_color_token58] = ACTIONS(181),
    [aux_sym_css_named_color_token59] = ACTIONS(181),
    [aux_sym_css_named_color_token60] = ACTIONS(181),
    [aux_sym_css_named_color_token61] = ACTIONS(181),
    [aux_sym_css_named_color_token62] = ACTIONS(181),
    [aux_sym_css_named_color_token63] = ACTIONS(181),
    [aux_sym_css_named_color_token64] = ACTIONS(183),
    [aux_sym_css_named_color_token65] = ACTIONS(181),
    [aux_sym_css_named_color_token66] = ACTIONS(181),
    [aux_sym_css_named_color_token67] = ACTIONS(181),
    [aux_sym_css_named_color_token68] = ACTIONS(181),
    [aux_sym_css_named_color_token69] = ACTIONS(181),
    [aux_sym_css_named_color_token70] = ACTIONS(181),
    [aux_sym_css_named_color_token71] = ACTIONS(181),
    [aux_sym_css_named_color_token72] = ACTIONS(181),
    [aux_sym_css_named_color_token73] = ACTIONS(181),
    [aux_sym_css_named_color_token74] = ACTIONS(181),
    [aux_sym_css_named_color_token75] = ACTIONS(181),
    [aux_sym_css_named_color_token76] = ACTIONS(181),
    [aux_sym_css_named_color_token77] = ACTIONS(181),
    [aux_sym_css_named_color_token78] = ACTIONS(181),
    [aux_sym_css_named_color_token79] = ACTIONS(181),
    [aux_sym_css_named_color_token80] = ACTIONS(181),
    [aux_sym_css_named_color_token81] = ACTIONS(181),
    [aux_sym_css_named_color_token82] = ACTIONS(181),
    [aux_sym_css_named_color_token83] = ACTIONS(183),
    [aux_sym_css_named_color_token84] = ACTIONS(181),
    [aux_sym_css_named_color_token85] = ACTIONS(181),
    [aux_sym_css_named_color_token86] = ACTIONS(181),
    [aux_sym_css_named_color_token87] = ACTIONS(181),
    [aux_sym_css_named_color_token88] = ACTIONS(181),
    [aux_sym_css_named_color_token89] = ACTIONS(181),
    [aux_sym_css_named_color_token90] = ACTIONS(181),
    [aux_sym_css_named_color_token91] = ACTIONS(181),
    [aux_sym_css_named_color_token92] = ACTIONS(181),
    [aux_sym_css_named_color_token93] = ACTIONS(181),
    [aux_sym_css_named_color_token94] = ACTIONS(181),
    [aux_sym_css_named_color_token95] = ACTIONS(181),
    [aux_sym_css_named_color_token96] = ACTIONS(181),
    [aux_sym_css_named_color_token97] = ACTIONS(181),
    [aux_sym_css_named_color_token98] = ACTIONS(181),
    [aux_sym_css_named_color_token99] = ACTIONS(181),
    [aux_sym_css_named_color_token100] = ACTIONS(181),
    [aux_sym_css_named_color_token101] = ACTIONS(181),
    [aux_sym_css_named_color_token102] = ACTIONS(181),
    [aux_sym_css_named_color_token103] = ACTIONS(181),
    [aux_sym_css_named_color_token104] = ACTIONS(183),
    [aux_sym_css_named_color_token105] = ACTIONS(181),
    [aux_sym_css_named_color_token106] = ACTIONS(183),
    [aux_sym_css_named_color_token107] = ACTIONS(181),
    [aux_sym_css_named_color_token108] = ACTIONS(181),
    [aux_sym_css_named_color_token109] = ACTIONS(181),
    [aux_sym_css_named_color_token110] = ACTIONS(181),
    [aux_sym_css_named_color_token111] = ACTIONS(181),
    [aux_sym_css_named_color_token112] = ACTIONS(181),
    [aux_sym_css_named_color_token113] = ACTIONS(181),
    [aux_sym_css_named_color_token114] = ACTIONS(181),
    [aux_sym_css_named_color_token115] = ACTIONS(181),
    [aux_sym_css_named_color_token116] = ACTIONS(181),
    [aux_sym_css_named_color_token117] = ACTIONS(181),
    [aux_sym_css_named_color_token118] = ACTIONS(181),
    [aux_sym_css_named_color_token119] = ACTIONS(181),
    [aux_sym_css_named_color_token120] = ACTIONS(181),
    [aux_sym_css_named_color_token121] = ACTIONS(181),
    [aux_sym_css_named_color_token122] = ACTIONS(181),
    [aux_sym_css_named_color_token123] = ACTIONS(181),
    [aux_sym_css_named_color_token124] = ACTIONS(181),
    [aux_sym_css_named_color_token125] = ACTIONS(181),
    [aux_sym_css_named_color_token126] = ACTIONS(181),
    [aux_sym_css_named_color_token127] = ACTIONS(181),
    [aux_sym_css_named_color_token128] = ACTIONS(181),
    [aux_sym_css_named_color_token129] = ACTIONS(181),
    [aux_sym_css_named_color_token130] = ACTIONS(181),
    [aux_sym_css_named_color_token131] = ACTIONS(181),
    [aux_sym_css_named_color_token132] = ACTIONS(181),
    [aux_sym_css_named_color_token133] = ACTIONS(181),
    [aux_sym_css_named_color_token134] = ACTIONS(181),
    [aux_sym_css_named_color_token135] = ACTIONS(181),
    [aux_sym_css_named_color_token136] = ACTIONS(181),
    [aux_sym_css_named_color_token137] = ACTIONS(181),
    [aux_sym_css_named_color_token138] = ACTIONS(181),
    [aux_sym_css_named_color_token139] = ACTIONS(181),
    [aux_sym_css_named_color_token140] = ACTIONS(181),
    [aux_sym_css_named_color_token141] = ACTIONS(181),
    [aux_sym_css_named_color_token142] = ACTIONS(181),
    [aux_sym_css_named_color_token143] = ACTIONS(181),
    [aux_sym_css_named_color_token144] = ACTIONS(181),
    [aux_sym_css_named_color_token145] = ACTIONS(183),
    [aux_sym_css_named_color_token146] = ACTIONS(181),
    [aux_sym_css_named_color_token147] = ACTIONS(183),
    [aux_sym_css_named_color_token148] = ACTIONS(181),
    [sym_css_keyword_transparent] = ACTIONS(181),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [aux_sym_source_file_token1] = ACTIONS(187),
    [aux_sym_source_file_token2] = ACTIONS(187),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(187),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(185),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(187),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(185),
    [aux_sym_css_function_hwb_token1] = ACTIONS(185),
    [aux_sym_css_function_lab_token1] = ACTIONS(185),
    [aux_sym_css_function_oklab_token1] = ACTIONS(185),
    [aux_sym_css_function_lch_token1] = ACTIONS(185),
    [aux_sym_css_function_oklch_token1] = ACTIONS(185),
    [aux_sym_css_function_color_token1] = ACTIONS(185),
    [sym__css_hex_color_6_digits] = ACTIONS(187),
    [sym__css_hex_color_8_digits] = ACTIONS(185),
    [sym__css_hex_color_3_digits] = ACTIONS(187),
    [sym__css_hex_color_4_digits] = ACTIONS(187),
    [aux_sym_css_named_color_token1] = ACTIONS(185),
    [aux_sym_css_named_color_token2] = ACTIONS(185),
    [aux_sym_css_named_color_token3] = ACTIONS(187),
    [aux_sym_css_named_color_token4] = ACTIONS(185),
    [aux_sym_css_named_color_token5] = ACTIONS(185),
    [aux_sym_css_named_color_token6] = ACTIONS(185),
    [aux_sym_css_named_color_token7] = ACTIONS(185),
    [aux_sym_css_named_color_token8] = ACTIONS(185),
    [aux_sym_css_named_color_token9] = ACTIONS(185),
    [aux_sym_css_named_color_token10] = ACTIONS(187),
    [aux_sym_css_named_color_token11] = ACTIONS(185),
    [aux_sym_css_named_color_token12] = ACTIONS(185),
    [aux_sym_css_named_color_token13] = ACTIONS(185),
    [aux_sym_css_named_color_token14] = ACTIONS(185),
    [aux_sym_css_named_color_token15] = ACTIONS(185),
    [aux_sym_css_named_color_token16] = ACTIONS(185),
    [aux_sym_css_named_color_token17] = ACTIONS(185),
    [aux_sym_css_named_color_token18] = ACTIONS(185),
    [aux_sym_css_named_color_token19] = ACTIONS(185),
    [aux_sym_css_named_color_token20] = ACTIONS(185),
    [aux_sym_css_named_color_token21] = ACTIONS(185),
    [aux_sym_css_named_color_token22] = ACTIONS(185),
    [aux_sym_css_named_color_token23] = ACTIONS(185),
    [aux_sym_css_named_color_token24] = ACTIONS(185),
    [aux_sym_css_named_color_token25] = ACTIONS(185),
    [aux_sym_css_named_color_token26] = ACTIONS(185),
    [aux_sym_css_named_color_token27] = ACTIONS(185),
    [aux_sym_css_named_color_token28] = ACTIONS(185),
    [aux_sym_css_named_color_token29] = ACTIONS(185),
    [aux_sym_css_named_color_token30] = ACTIONS(185),
    [aux_sym_css_named_color_token31] = ACTIONS(185),
    [aux_sym_css_named_color_token32] = ACTIONS(185),
    [aux_sym_css_named_color_token33] = ACTIONS(185),
    [aux_sym_css_named_color_token34] = ACTIONS(185),
    [aux_sym_css_named_color_token35] = ACTIONS(185),
    [aux_sym_css_named_color_token36] = ACTIONS(185),
    [aux_sym_css_named_color_token37] = ACTIONS(185),
    [aux_sym_css_named_color_token38] = ACTIONS(185),
    [aux_sym_css_named_color_token39] = ACTIONS(185),
    [aux_sym_css_named_color_token40] = ACTIONS(185),
    [aux_sym_css_named_color_token41] = ACTIONS(185),
    [aux_sym_css_named_color_token42] = ACTIONS(185),
    [aux_sym_css_named_color_token43] = ACTIONS(185),
    [aux_sym_css_named_color_token44] = ACTIONS(185),
    [aux_sym_css_named_color_token45] = ACTIONS(185),
    [aux_sym_css_named_color_token46] = ACTIONS(185),
    [aux_sym_css_named_color_token47] = ACTIONS(185),
    [aux_sym_css_named_color_token48] = ACTIONS(185),
    [aux_sym_css_named_color_token49] = ACTIONS(185),
    [aux_sym_css_named_color_token50] = ACTIONS(185),
    [aux_sym_css_named_color_token51] = ACTIONS(185),
    [aux_sym_css_named_color_token52] = ACTIONS(187),
    [aux_sym_css_named_color_token53] = ACTIONS(185),
    [aux_sym_css_named_color_token54] = ACTIONS(185),
    [aux_sym_css_named_color_token55] = ACTIONS(187),
    [aux_sym_css_named_color_token56] = ACTIONS(185),
    [aux_sym_css_named_color_token57] = ACTIONS(185),
    [aux_sym_css_named_color_token58] = ACTIONS(185),
    [aux_sym_css_named_color_token59] = ACTIONS(185),
    [aux_sym_css_named_color_token60] = ACTIONS(185),
    [aux_sym_css_named_color_token61] = ACTIONS(185),
    [aux_sym_css_named_color_token62] = ACTIONS(185),
    [aux_sym_css_named_color_token63] = ACTIONS(185),
    [aux_sym_css_named_color_token64] = ACTIONS(187),
    [aux_sym_css_named_color_token65] = ACTIONS(185),
    [aux_sym_css_named_color_token66] = ACTIONS(185),
    [aux_sym_css_named_color_token67] = ACTIONS(185),
    [aux_sym_css_named_color_token68] = ACTIONS(185),
    [aux_sym_css_named_color_token69] = ACTIONS(185),
    [aux_sym_css_named_color_token70] = ACTIONS(185),
    [aux_sym_css_named_color_token71] = ACTIONS(185),
    [aux_sym_css_named_color_token72] = ACTIONS(185),
    [aux_sym_css_named_color_token73] = ACTIONS(185),
    [aux_sym_css_named_color_token74] = ACTIONS(185),
    [aux_sym_css_named_color_token75] = ACTIONS(185),
    [aux_sym_css_named_color_token76] = ACTIONS(185),
    [aux_sym_css_named_color_token77] = ACTIONS(185),
    [aux_sym_css_named_color_token78] = ACTIONS(185),
    [aux_sym_css_named_color_token79] = ACTIONS(185),
    [aux_sym_css_named_color_token80] = ACTIONS(185),
    [aux_sym_css_named_color_token81] = ACTIONS(185),
    [aux_sym_css_named_color_token82] = ACTIONS(185),
    [aux_sym_css_named_color_token83] = ACTIONS(187),
    [aux_sym_css_named_color_token84] = ACTIONS(185),
    [aux_sym_css_named_color_token85] = ACTIONS(185),
    [aux_sym_css_named_color_token86] = ACTIONS(185),
    [aux_sym_css_named_color_token87] = ACTIONS(185),
    [aux_sym_css_named_color_token88] = ACTIONS(185),
    [aux_sym_css_named_color_token89] = ACTIONS(185),
    [aux_sym_css_named_color_token90] = ACTIONS(185),
    [aux_sym_css_named_color_token91] = ACTIONS(185),
    [aux_sym_css_named_color_token92] = ACTIONS(185),
    [aux_sym_css_named_color_token93] = ACTIONS(185),
    [aux_sym_css_named_color_token94] = ACTIONS(185),
    [aux_sym_css_named_color_token95] = ACTIONS(185),
    [aux_sym_css_named_color_token96] = ACTIONS(185),
    [aux_sym_css_named_color_token97] = ACTIONS(185),
    [aux_sym_css_named_color_token98] = ACTIONS(185),
    [aux_sym_css_named_color_token99] = ACTIONS(185),
    [aux_sym_css_named_color_token100] = ACTIONS(185),
    [aux_sym_css_named_color_token101] = ACTIONS(185),
    [aux_sym_css_named_color_token102] = ACTIONS(185),
    [aux_sym_css_named_color_token103] = ACTIONS(185),
    [aux_sym_css_named_color_token104] = ACTIONS(187),
    [aux_sym_css_named_color_token105] = ACTIONS(185),
    [aux_sym_css_named_color_token106] = ACTIONS(187),
    [aux_sym_css_named_color_token107] = ACTIONS(185),
    [aux_sym_css_named_color_token108] = ACTIONS(185),
    [aux_sym_css_named_color_token109] = ACTIONS(185),
    [aux_sym_css_named_color_token110] = ACTIONS(185),
    [aux_sym_css_named_color_token111] = ACTIONS(185),
    [aux_sym_css_named_color_token112] = ACTIONS(185),
    [aux_sym_css_named_color_token113] = ACTIONS(185),
    [aux_sym_css_named_color_token114] = ACTIONS(185),
    [aux_sym_css_named_color_token115] = ACTIONS(185),
    [aux_sym_css_named_color_token116] = ACTIONS(185),
    [aux_sym_css_named_color_token117] = ACTIONS(185),
    [aux_sym_css_named_color_token118] = ACTIONS(185),
    [aux_sym_css_named_color_token119] = ACTIONS(185),
    [aux_sym_css_named_color_token120] = ACTIONS(185),
    [aux_sym_css_named_color_token121] = ACTIONS(185),
    [aux_sym_css_named_color_token122] = ACTIONS(185),
    [aux_sym_css_named_color_token123] = ACTIONS(185),
    [aux_sym_css_named_color_token124] = ACTIONS(185),
    [aux_sym_css_named_color_token125] = ACTIONS(185),
    [aux_sym_css_named_color_token126] = ACTIONS(185),
    [aux_sym_css_named_color_token127] = ACTIONS(185),
    [aux_sym_css_named_color_token128] = ACTIONS(185),
    [aux_sym_css_named_color_token129] = ACTIONS(185),
    [aux_sym_css_named_color_token130] = ACTIONS(185),
    [aux_sym_css_named_color_token131] = ACTIONS(185),
    [aux_sym_css_named_color_token132] = ACTIONS(185),
    [aux_sym_css_named_color_token133] = ACTIONS(185),
    [aux_sym_css_named_color_token134] = ACTIONS(185),
    [aux_sym_css_named_color_token135] = ACTIONS(185),
    [aux_sym_css_named_color_token136] = ACTIONS(185),
    [aux_sym_css_named_color_token137] = ACTIONS(185),
    [aux_sym_css_named_color_token138] = ACTIONS(185),
    [aux_sym_css_named_color_token139] = ACTIONS(185),
    [aux_sym_css_named_color_token140] = ACTIONS(185),
    [aux_sym_css_named_color_token141] = ACTIONS(185),
    [aux_sym_css_named_color_token142] = ACTIONS(185),
    [aux_sym_css_named_color_token143] = ACTIONS(185),
    [aux_sym_css_named_color_token144] = ACTIONS(185),
    [aux_sym_css_named_color_token145] = ACTIONS(187),
    [aux_sym_css_named_color_token146] = ACTIONS(185),
    [aux_sym_css_named_color_token147] = ACTIONS(187),
    [aux_sym_css_named_color_token148] = ACTIONS(185),
    [sym_css_keyword_transparent] = ACTIONS(185),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [aux_sym_source_file_token1] = ACTIONS(191),
    [aux_sym_source_file_token2] = ACTIONS(191),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(191),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(189),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(191),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(189),
    [aux_sym_css_function_hwb_token1] = ACTIONS(189),
    [aux_sym_css_function_lab_token1] = ACTIONS(189),
    [aux_sym_css_function_oklab_token1] = ACTIONS(189),
    [aux_sym_css_function_lch_token1] = ACTIONS(189),
    [aux_sym_css_function_oklch_token1] = ACTIONS(189),
    [aux_sym_css_function_color_token1] = ACTIONS(189),
    [sym__css_hex_color_6_digits] = ACTIONS(191),
    [sym__css_hex_color_8_digits] = ACTIONS(189),
    [sym__css_hex_color_3_digits] = ACTIONS(191),
    [sym__css_hex_color_4_digits] = ACTIONS(191),
    [aux_sym_css_named_color_token1] = ACTIONS(189),
    [aux_sym_css_named_color_token2] = ACTIONS(189),
    [aux_sym_css_named_color_token3] = ACTIONS(191),
    [aux_sym_css_named_color_token4] = ACTIONS(189),
    [aux_sym_css_named_color_token5] = ACTIONS(189),
    [aux_sym_css_named_color_token6] = ACTIONS(189),
    [aux_sym_css_named_color_token7] = ACTIONS(189),
    [aux_sym_css_named_color_token8] = ACTIONS(189),
    [aux_sym_css_named_color_token9] = ACTIONS(189),
    [aux_sym_css_named_color_token10] = ACTIONS(191),
    [aux_sym_css_named_color_token11] = ACTIONS(189),
    [aux_sym_css_named_color_token12] = ACTIONS(189),
    [aux_sym_css_named_color_token13] = ACTIONS(189),
    [aux_sym_css_named_color_token14] = ACTIONS(189),
    [aux_sym_css_named_color_token15] = ACTIONS(189),
    [aux_sym_css_named_color_token16] = ACTIONS(189),
    [aux_sym_css_named_color_token17] = ACTIONS(189),
    [aux_sym_css_named_color_token18] = ACTIONS(189),
    [aux_sym_css_named_color_token19] = ACTIONS(189),
    [aux_sym_css_named_color_token20] = ACTIONS(189),
    [aux_sym_css_named_color_token21] = ACTIONS(189),
    [aux_sym_css_named_color_token22] = ACTIONS(189),
    [aux_sym_css_named_color_token23] = ACTIONS(189),
    [aux_sym_css_named_color_token24] = ACTIONS(189),
    [aux_sym_css_named_color_token25] = ACTIONS(189),
    [aux_sym_css_named_color_token26] = ACTIONS(189),
    [aux_sym_css_named_color_token27] = ACTIONS(189),
    [aux_sym_css_named_color_token28] = ACTIONS(189),
    [aux_sym_css_named_color_token29] = ACTIONS(189),
    [aux_sym_css_named_color_token30] = ACTIONS(189),
    [aux_sym_css_named_color_token31] = ACTIONS(189),
    [aux_sym_css_named_color_token32] = ACTIONS(189),
    [aux_sym_css_named_color_token33] = ACTIONS(189),
    [aux_sym_css_named_color_token34] = ACTIONS(189),
    [aux_sym_css_named_color_token35] = ACTIONS(189),
    [aux_sym_css_named_color_token36] = ACTIONS(189),
    [aux_sym_css_named_color_token37] = ACTIONS(189),
    [aux_sym_css_named_color_token38] = ACTIONS(189),
    [aux_sym_css_named_color_token39] = ACTIONS(189),
    [aux_sym_css_named_color_token40] = ACTIONS(189),
    [aux_sym_css_named_color_token41] = ACTIONS(189),
    [aux_sym_css_named_color_token42] = ACTIONS(189),
    [aux_sym_css_named_color_token43] = ACTIONS(189),
    [aux_sym_css_named_color_token44] = ACTIONS(189),
    [aux_sym_css_named_color_token45] = ACTIONS(189),
    [aux_sym_css_named_color_token46] = ACTIONS(189),
    [aux_sym_css_named_color_token47] = ACTIONS(189),
    [aux_sym_css_named_color_token48] = ACTIONS(189),
    [aux_sym_css_named_color_token49] = ACTIONS(189),
    [aux_sym_css_named_color_token50] = ACTIONS(189),
    [aux_sym_css_named_color_token51] = ACTIONS(189),
    [aux_sym_css_named_color_token52] = ACTIONS(191),
    [aux_sym_css_named_color_token53] = ACTIONS(189),
    [aux_sym_css_named_color_token54] = ACTIONS(189),
    [aux_sym_css_named_color_token55] = ACTIONS(191),
    [aux_sym_css_named_color_token56] = ACTIONS(189),
    [aux_sym_css_named_color_token57] = ACTIONS(189),
    [aux_sym_css_named_color_token58] = ACTIONS(189),
    [aux_sym_css_named_color_token59] = ACTIONS(189),
    [aux_sym_css_named_color_token60] = ACTIONS(189),
    [aux_sym_css_named_color_token61] = ACTIONS(189),
    [aux_sym_css_named_color_token62] = ACTIONS(189),
    [aux_sym_css_named_color_token63] = ACTIONS(189),
    [aux_sym_css_named_color_token64] = ACTIONS(191),
    [aux_sym_css_named_color_token65] = ACTIONS(189),
    [aux_sym_css_named_color_token66] = ACTIONS(189),
    [aux_sym_css_named_color_token67] = ACTIONS(189),
    [aux_sym_css_named_color_token68] = ACTIONS(189),
    [aux_sym_css_named_color_token69] = ACTIONS(189),
    [aux_sym_css_named_color_token70] = ACTIONS(189),
    [aux_sym_css_named_color_token71] = ACTIONS(189),
    [aux_sym_css_named_color_token72] = ACTIONS(189),
    [aux_sym_css_named_color_token73] = ACTIONS(189),
    [aux_sym_css_named_color_token74] = ACTIONS(189),
    [aux_sym_css_named_color_token75] = ACTIONS(189),
    [aux_sym_css_named_color_token76] = ACTIONS(189),
    [aux_sym_css_named_color_token77] = ACTIONS(189),
    [aux_sym_css_named_color_token78] = ACTIONS(189),
    [aux_sym_css_named_color_token79] = ACTIONS(189),
    [aux_sym_css_named_color_token80] = ACTIONS(189),
    [aux_sym_css_named_color_token81] = ACTIONS(189),
    [aux_sym_css_named_color_token82] = ACTIONS(189),
    [aux_sym_css_named_color_token83] = ACTIONS(191),
    [aux_sym_css_named_color_token84] = ACTIONS(189),
    [aux_sym_css_named_color_token85] = ACTIONS(189),
    [aux_sym_css_named_color_token86] = ACTIONS(189),
    [aux_sym_css_named_color_token87] = ACTIONS(189),
    [aux_sym_css_named_color_token88] = ACTIONS(189),
    [aux_sym_css_named_color_token89] = ACTIONS(189),
    [aux_sym_css_named_color_token90] = ACTIONS(189),
    [aux_sym_css_named_color_token91] = ACTIONS(189),
    [aux_sym_css_named_color_token92] = ACTIONS(189),
    [aux_sym_css_named_color_token93] = ACTIONS(189),
    [aux_sym_css_named_color_token94] = ACTIONS(189),
    [aux_sym_css_named_color_token95] = ACTIONS(189),
    [aux_sym_css_named_color_token96] = ACTIONS(189),
    [aux_sym_css_named_color_token97] = ACTIONS(189),
    [aux_sym_css_named_color_token98] = ACTIONS(189),
    [aux_sym_css_named_color_token99] = ACTIONS(189),
    [aux_sym_css_named_color_token100] = ACTIONS(189),
    [aux_sym_css_named_color_token101] = ACTIONS(189),
    [aux_sym_css_named_color_token102] = ACTIONS(189),
    [aux_sym_css_named_color_token103] = ACTIONS(189),
    [aux_sym_css_named_color_token104] = ACTIONS(191),
    [aux_sym_css_named_color_token105] = ACTIONS(189),
    [aux_sym_css_named_color_token106] = ACTIONS(191),
    [aux_sym_css_named_color_token107] = ACTIONS(189),
    [aux_sym_css_named_color_token108] = ACTIONS(189),
    [aux_sym_css_named_color_token109] = ACTIONS(189),
    [aux_sym_css_named_color_token110] = ACTIONS(189),
    [aux_sym_css_named_color_token111] = ACTIONS(189),
    [aux_sym_css_named_color_token112] = ACTIONS(189),
    [aux_sym_css_named_color_token113] = ACTIONS(189),
    [aux_sym_css_named_color_token114] = ACTIONS(189),
    [aux_sym_css_named_color_token115] = ACTIONS(189),
    [aux_sym_css_named_color_token116] = ACTIONS(189),
    [aux_sym_css_named_color_token117] = ACTIONS(189),
    [aux_sym_css_named_color_token118] = ACTIONS(189),
    [aux_sym_css_named_color_token119] = ACTIONS(189),
    [aux_sym_css_named_color_token120] = ACTIONS(189),
    [aux_sym_css_named_color_token121] = ACTIONS(189),
    [aux_sym_css_named_color_token122] = ACTIONS(189),
    [aux_sym_css_named_color_token123] = ACTIONS(189),
    [aux_sym_css_named_color_token124] = ACTIONS(189),
    [aux_sym_css_named_color_token125] = ACTIONS(189),
    [aux_sym_css_named_color_token126] = ACTIONS(189),
    [aux_sym_css_named_color_token127] = ACTIONS(189),
    [aux_sym_css_named_color_token128] = ACTIONS(189),
    [aux_sym_css_named_color_token129] = ACTIONS(189),
    [aux_sym_css_named_color_token130] = ACTIONS(189),
    [aux_sym_css_named_color_token131] = ACTIONS(189),
    [aux_sym_css_named_color_token132] = ACTIONS(189),
    [aux_sym_css_named_color_token133] = ACTIONS(189),
    [aux_sym_css_named_color_token134] = ACTIONS(189),
    [aux_sym_css_named_color_token135] = ACTIONS(189),
    [aux_sym_css_named_color_token136] = ACTIONS(189),
    [aux_sym_css_named_color_token137] = ACTIONS(189),
    [aux_sym_css_named_color_token138] = ACTIONS(189),
    [aux_sym_css_named_color_token139] = ACTIONS(189),
    [aux_sym_css_named_color_token140] = ACTIONS(189),
    [aux_sym_css_named_color_token141] = ACTIONS(189),
    [aux_sym_css_named_color_token142] = ACTIONS(189),
    [aux_sym_css_named_color_token143] = ACTIONS(189),
    [aux_sym_css_named_color_token144] = ACTIONS(189),
    [aux_sym_css_named_color_token145] = ACTIONS(191),
    [aux_sym_css_named_color_token146] = ACTIONS(189),
    [aux_sym_css_named_color_token147] = ACTIONS(191),
    [aux_sym_css_named_color_token148] = ACTIONS(189),
    [sym_css_keyword_transparent] = ACTIONS(189),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym_source_file_token1] = ACTIONS(195),
    [aux_sym_source_file_token2] = ACTIONS(195),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(195),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(193),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(195),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(193),
    [aux_sym_css_function_hwb_token1] = ACTIONS(193),
    [aux_sym_css_function_lab_token1] = ACTIONS(193),
    [aux_sym_css_function_oklab_token1] = ACTIONS(193),
    [aux_sym_css_function_lch_token1] = ACTIONS(193),
    [aux_sym_css_function_oklch_token1] = ACTIONS(193),
    [aux_sym_css_function_color_token1] = ACTIONS(193),
    [sym__css_hex_color_6_digits] = ACTIONS(195),
    [sym__css_hex_color_8_digits] = ACTIONS(193),
    [sym__css_hex_color_3_digits] = ACTIONS(195),
    [sym__css_hex_color_4_digits] = ACTIONS(195),
    [aux_sym_css_named_color_token1] = ACTIONS(193),
    [aux_sym_css_named_color_token2] = ACTIONS(193),
    [aux_sym_css_named_color_token3] = ACTIONS(195),
    [aux_sym_css_named_color_token4] = ACTIONS(193),
    [aux_sym_css_named_color_token5] = ACTIONS(193),
    [aux_sym_css_named_color_token6] = ACTIONS(193),
    [aux_sym_css_named_color_token7] = ACTIONS(193),
    [aux_sym_css_named_color_token8] = ACTIONS(193),
    [aux_sym_css_named_color_token9] = ACTIONS(193),
    [aux_sym_css_named_color_token10] = ACTIONS(195),
    [aux_sym_css_named_color_token11] = ACTIONS(193),
    [aux_sym_css_named_color_token12] = ACTIONS(193),
    [aux_sym_css_named_color_token13] = ACTIONS(193),
    [aux_sym_css_named_color_token14] = ACTIONS(193),
    [aux_sym_css_named_color_token15] = ACTIONS(193),
    [aux_sym_css_named_color_token16] = ACTIONS(193),
    [aux_sym_css_named_color_token17] = ACTIONS(193),
    [aux_sym_css_named_color_token18] = ACTIONS(193),
    [aux_sym_css_named_color_token19] = ACTIONS(193),
    [aux_sym_css_named_color_token20] = ACTIONS(193),
    [aux_sym_css_named_color_token21] = ACTIONS(193),
    [aux_sym_css_named_color_token22] = ACTIONS(193),
    [aux_sym_css_named_color_token23] = ACTIONS(193),
    [aux_sym_css_named_color_token24] = ACTIONS(193),
    [aux_sym_css_named_color_token25] = ACTIONS(193),
    [aux_sym_css_named_color_token26] = ACTIONS(193),
    [aux_sym_css_named_color_token27] = ACTIONS(193),
    [aux_sym_css_named_color_token28] = ACTIONS(193),
    [aux_sym_css_named_color_token29] = ACTIONS(193),
    [aux_sym_css_named_color_token30] = ACTIONS(193),
    [aux_sym_css_named_color_token31] = ACTIONS(193),
    [aux_sym_css_named_color_token32] = ACTIONS(193),
    [aux_sym_css_named_color_token33] = ACTIONS(193),
    [aux_sym_css_named_color_token34] = ACTIONS(193),
    [aux_sym_css_named_color_token35] = ACTIONS(193),
    [aux_sym_css_named_color_token36] = ACTIONS(193),
    [aux_sym_css_named_color_token37] = ACTIONS(193),
    [aux_sym_css_named_color_token38] = ACTIONS(193),
    [aux_sym_css_named_color_token39] = ACTIONS(193),
    [aux_sym_css_named_color_token40] = ACTIONS(193),
    [aux_sym_css_named_color_token41] = ACTIONS(193),
    [aux_sym_css_named_color_token42] = ACTIONS(193),
    [aux_sym_css_named_color_token43] = ACTIONS(193),
    [aux_sym_css_named_color_token44] = ACTIONS(193),
    [aux_sym_css_named_color_token45] = ACTIONS(193),
    [aux_sym_css_named_color_token46] = ACTIONS(193),
    [aux_sym_css_named_color_token47] = ACTIONS(193),
    [aux_sym_css_named_color_token48] = ACTIONS(193),
    [aux_sym_css_named_color_token49] = ACTIONS(193),
    [aux_sym_css_named_color_token50] = ACTIONS(193),
    [aux_sym_css_named_color_token51] = ACTIONS(193),
    [aux_sym_css_named_color_token52] = ACTIONS(195),
    [aux_sym_css_named_color_token53] = ACTIONS(193),
    [aux_sym_css_named_color_token54] = ACTIONS(193),
    [aux_sym_css_named_color_token55] = ACTIONS(195),
    [aux_sym_css_named_color_token56] = ACTIONS(193),
    [aux_sym_css_named_color_token57] = ACTIONS(193),
    [aux_sym_css_named_color_token58] = ACTIONS(193),
    [aux_sym_css_named_color_token59] = ACTIONS(193),
    [aux_sym_css_named_color_token60] = ACTIONS(193),
    [aux_sym_css_named_color_token61] = ACTIONS(193),
    [aux_sym_css_named_color_token62] = ACTIONS(193),
    [aux_sym_css_named_color_token63] = ACTIONS(193),
    [aux_sym_css_named_color_token64] = ACTIONS(195),
    [aux_sym_css_named_color_token65] = ACTIONS(193),
    [aux_sym_css_named_color_token66] = ACTIONS(193),
    [aux_sym_css_named_color_token67] = ACTIONS(193),
    [aux_sym_css_named_color_token68] = ACTIONS(193),
    [aux_sym_css_named_color_token69] = ACTIONS(193),
    [aux_sym_css_named_color_token70] = ACTIONS(193),
    [aux_sym_css_named_color_token71] = ACTIONS(193),
    [aux_sym_css_named_color_token72] = ACTIONS(193),
    [aux_sym_css_named_color_token73] = ACTIONS(193),
    [aux_sym_css_named_color_token74] = ACTIONS(193),
    [aux_sym_css_named_color_token75] = ACTIONS(193),
    [aux_sym_css_named_color_token76] = ACTIONS(193),
    [aux_sym_css_named_color_token77] = ACTIONS(193),
    [aux_sym_css_named_color_token78] = ACTIONS(193),
    [aux_sym_css_named_color_token79] = ACTIONS(193),
    [aux_sym_css_named_color_token80] = ACTIONS(193),
    [aux_sym_css_named_color_token81] = ACTIONS(193),
    [aux_sym_css_named_color_token82] = ACTIONS(193),
    [aux_sym_css_named_color_token83] = ACTIONS(195),
    [aux_sym_css_named_color_token84] = ACTIONS(193),
    [aux_sym_css_named_color_token85] = ACTIONS(193),
    [aux_sym_css_named_color_token86] = ACTIONS(193),
    [aux_sym_css_named_color_token87] = ACTIONS(193),
    [aux_sym_css_named_color_token88] = ACTIONS(193),
    [aux_sym_css_named_color_token89] = ACTIONS(193),
    [aux_sym_css_named_color_token90] = ACTIONS(193),
    [aux_sym_css_named_color_token91] = ACTIONS(193),
    [aux_sym_css_named_color_token92] = ACTIONS(193),
    [aux_sym_css_named_color_token93] = ACTIONS(193),
    [aux_sym_css_named_color_token94] = ACTIONS(193),
    [aux_sym_css_named_color_token95] = ACTIONS(193),
    [aux_sym_css_named_color_token96] = ACTIONS(193),
    [aux_sym_css_named_color_token97] = ACTIONS(193),
    [aux_sym_css_named_color_token98] = ACTIONS(193),
    [aux_sym_css_named_color_token99] = ACTIONS(193),
    [aux_sym_css_named_color_token100] = ACTIONS(193),
    [aux_sym_css_named_color_token101] = ACTIONS(193),
    [aux_sym_css_named_color_token102] = ACTIONS(193),
    [aux_sym_css_named_color_token103] = ACTIONS(193),
    [aux_sym_css_named_color_token104] = ACTIONS(195),
    [aux_sym_css_named_color_token105] = ACTIONS(193),
    [aux_sym_css_named_color_token106] = ACTIONS(195),
    [aux_sym_css_named_color_token107] = ACTIONS(193),
    [aux_sym_css_named_color_token108] = ACTIONS(193),
    [aux_sym_css_named_color_token109] = ACTIONS(193),
    [aux_sym_css_named_color_token110] = ACTIONS(193),
    [aux_sym_css_named_color_token111] = ACTIONS(193),
    [aux_sym_css_named_color_token112] = ACTIONS(193),
    [aux_sym_css_named_color_token113] = ACTIONS(193),
    [aux_sym_css_named_color_token114] = ACTIONS(193),
    [aux_sym_css_named_color_token115] = ACTIONS(193),
    [aux_sym_css_named_color_token116] = ACTIONS(193),
    [aux_sym_css_named_color_token117] = ACTIONS(193),
    [aux_sym_css_named_color_token118] = ACTIONS(193),
    [aux_sym_css_named_color_token119] = ACTIONS(193),
    [aux_sym_css_named_color_token120] = ACTIONS(193),
    [aux_sym_css_named_color_token121] = ACTIONS(193),
    [aux_sym_css_named_color_token122] = ACTIONS(193),
    [aux_sym_css_named_color_token123] = ACTIONS(193),
    [aux_sym_css_named_color_token124] = ACTIONS(193),
    [aux_sym_css_named_color_token125] = ACTIONS(193),
    [aux_sym_css_named_color_token126] = ACTIONS(193),
    [aux_sym_css_named_color_token127] = ACTIONS(193),
    [aux_sym_css_named_color_token128] = ACTIONS(193),
    [aux_sym_css_named_color_token129] = ACTIONS(193),
    [aux_sym_css_named_color_token130] = ACTIONS(193),
    [aux_sym_css_named_color_token131] = ACTIONS(193),
    [aux_sym_css_named_color_token132] = ACTIONS(193),
    [aux_sym_css_named_color_token133] = ACTIONS(193),
    [aux_sym_css_named_color_token134] = ACTIONS(193),
    [aux_sym_css_named_color_token135] = ACTIONS(193),
    [aux_sym_css_named_color_token136] = ACTIONS(193),
    [aux_sym_css_named_color_token137] = ACTIONS(193),
    [aux_sym_css_named_color_token138] = ACTIONS(193),
    [aux_sym_css_named_color_token139] = ACTIONS(193),
    [aux_sym_css_named_color_token140] = ACTIONS(193),
    [aux_sym_css_named_color_token141] = ACTIONS(193),
    [aux_sym_css_named_color_token142] = ACTIONS(193),
    [aux_sym_css_named_color_token143] = ACTIONS(193),
    [aux_sym_css_named_color_token144] = ACTIONS(193),
    [aux_sym_css_named_color_token145] = ACTIONS(195),
    [aux_sym_css_named_color_token146] = ACTIONS(193),
    [aux_sym_css_named_color_token147] = ACTIONS(195),
    [aux_sym_css_named_color_token148] = ACTIONS(193),
    [sym_css_keyword_transparent] = ACTIONS(193),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_source_file_token1] = ACTIONS(199),
    [aux_sym_source_file_token2] = ACTIONS(199),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(199),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(197),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(199),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(197),
    [aux_sym_css_function_hwb_token1] = ACTIONS(197),
    [aux_sym_css_function_lab_token1] = ACTIONS(197),
    [aux_sym_css_function_oklab_token1] = ACTIONS(197),
    [aux_sym_css_function_lch_token1] = ACTIONS(197),
    [aux_sym_css_function_oklch_token1] = ACTIONS(197),
    [aux_sym_css_function_color_token1] = ACTIONS(197),
    [sym__css_hex_color_6_digits] = ACTIONS(199),
    [sym__css_hex_color_8_digits] = ACTIONS(197),
    [sym__css_hex_color_3_digits] = ACTIONS(199),
    [sym__css_hex_color_4_digits] = ACTIONS(199),
    [aux_sym_css_named_color_token1] = ACTIONS(197),
    [aux_sym_css_named_color_token2] = ACTIONS(197),
    [aux_sym_css_named_color_token3] = ACTIONS(199),
    [aux_sym_css_named_color_token4] = ACTIONS(197),
    [aux_sym_css_named_color_token5] = ACTIONS(197),
    [aux_sym_css_named_color_token6] = ACTIONS(197),
    [aux_sym_css_named_color_token7] = ACTIONS(197),
    [aux_sym_css_named_color_token8] = ACTIONS(197),
    [aux_sym_css_named_color_token9] = ACTIONS(197),
    [aux_sym_css_named_color_token10] = ACTIONS(199),
    [aux_sym_css_named_color_token11] = ACTIONS(197),
    [aux_sym_css_named_color_token12] = ACTIONS(197),
    [aux_sym_css_named_color_token13] = ACTIONS(197),
    [aux_sym_css_named_color_token14] = ACTIONS(197),
    [aux_sym_css_named_color_token15] = ACTIONS(197),
    [aux_sym_css_named_color_token16] = ACTIONS(197),
    [aux_sym_css_named_color_token17] = ACTIONS(197),
    [aux_sym_css_named_color_token18] = ACTIONS(197),
    [aux_sym_css_named_color_token19] = ACTIONS(197),
    [aux_sym_css_named_color_token20] = ACTIONS(197),
    [aux_sym_css_named_color_token21] = ACTIONS(197),
    [aux_sym_css_named_color_token22] = ACTIONS(197),
    [aux_sym_css_named_color_token23] = ACTIONS(197),
    [aux_sym_css_named_color_token24] = ACTIONS(197),
    [aux_sym_css_named_color_token25] = ACTIONS(197),
    [aux_sym_css_named_color_token26] = ACTIONS(197),
    [aux_sym_css_named_color_token27] = ACTIONS(197),
    [aux_sym_css_named_color_token28] = ACTIONS(197),
    [aux_sym_css_named_color_token29] = ACTIONS(197),
    [aux_sym_css_named_color_token30] = ACTIONS(197),
    [aux_sym_css_named_color_token31] = ACTIONS(197),
    [aux_sym_css_named_color_token32] = ACTIONS(197),
    [aux_sym_css_named_color_token33] = ACTIONS(197),
    [aux_sym_css_named_color_token34] = ACTIONS(197),
    [aux_sym_css_named_color_token35] = ACTIONS(197),
    [aux_sym_css_named_color_token36] = ACTIONS(197),
    [aux_sym_css_named_color_token37] = ACTIONS(197),
    [aux_sym_css_named_color_token38] = ACTIONS(197),
    [aux_sym_css_named_color_token39] = ACTIONS(197),
    [aux_sym_css_named_color_token40] = ACTIONS(197),
    [aux_sym_css_named_color_token41] = ACTIONS(197),
    [aux_sym_css_named_color_token42] = ACTIONS(197),
    [aux_sym_css_named_color_token43] = ACTIONS(197),
    [aux_sym_css_named_color_token44] = ACTIONS(197),
    [aux_sym_css_named_color_token45] = ACTIONS(197),
    [aux_sym_css_named_color_token46] = ACTIONS(197),
    [aux_sym_css_named_color_token47] = ACTIONS(197),
    [aux_sym_css_named_color_token48] = ACTIONS(197),
    [aux_sym_css_named_color_token49] = ACTIONS(197),
    [aux_sym_css_named_color_token50] = ACTIONS(197),
    [aux_sym_css_named_color_token51] = ACTIONS(197),
    [aux_sym_css_named_color_token52] = ACTIONS(199),
    [aux_sym_css_named_color_token53] = ACTIONS(197),
    [aux_sym_css_named_color_token54] = ACTIONS(197),
    [aux_sym_css_named_color_token55] = ACTIONS(199),
    [aux_sym_css_named_color_token56] = ACTIONS(197),
    [aux_sym_css_named_color_token57] = ACTIONS(197),
    [aux_sym_css_named_color_token58] = ACTIONS(197),
    [aux_sym_css_named_color_token59] = ACTIONS(197),
    [aux_sym_css_named_color_token60] = ACTIONS(197),
    [aux_sym_css_named_color_token61] = ACTIONS(197),
    [aux_sym_css_named_color_token62] = ACTIONS(197),
    [aux_sym_css_named_color_token63] = ACTIONS(197),
    [aux_sym_css_named_color_token64] = ACTIONS(199),
    [aux_sym_css_named_color_token65] = ACTIONS(197),
    [aux_sym_css_named_color_token66] = ACTIONS(197),
    [aux_sym_css_named_color_token67] = ACTIONS(197),
    [aux_sym_css_named_color_token68] = ACTIONS(197),
    [aux_sym_css_named_color_token69] = ACTIONS(197),
    [aux_sym_css_named_color_token70] = ACTIONS(197),
    [aux_sym_css_named_color_token71] = ACTIONS(197),
    [aux_sym_css_named_color_token72] = ACTIONS(197),
    [aux_sym_css_named_color_token73] = ACTIONS(197),
    [aux_sym_css_named_color_token74] = ACTIONS(197),
    [aux_sym_css_named_color_token75] = ACTIONS(197),
    [aux_sym_css_named_color_token76] = ACTIONS(197),
    [aux_sym_css_named_color_token77] = ACTIONS(197),
    [aux_sym_css_named_color_token78] = ACTIONS(197),
    [aux_sym_css_named_color_token79] = ACTIONS(197),
    [aux_sym_css_named_color_token80] = ACTIONS(197),
    [aux_sym_css_named_color_token81] = ACTIONS(197),
    [aux_sym_css_named_color_token82] = ACTIONS(197),
    [aux_sym_css_named_color_token83] = ACTIONS(199),
    [aux_sym_css_named_color_token84] = ACTIONS(197),
    [aux_sym_css_named_color_token85] = ACTIONS(197),
    [aux_sym_css_named_color_token86] = ACTIONS(197),
    [aux_sym_css_named_color_token87] = ACTIONS(197),
    [aux_sym_css_named_color_token88] = ACTIONS(197),
    [aux_sym_css_named_color_token89] = ACTIONS(197),
    [aux_sym_css_named_color_token90] = ACTIONS(197),
    [aux_sym_css_named_color_token91] = ACTIONS(197),
    [aux_sym_css_named_color_token92] = ACTIONS(197),
    [aux_sym_css_named_color_token93] = ACTIONS(197),
    [aux_sym_css_named_color_token94] = ACTIONS(197),
    [aux_sym_css_named_color_token95] = ACTIONS(197),
    [aux_sym_css_named_color_token96] = ACTIONS(197),
    [aux_sym_css_named_color_token97] = ACTIONS(197),
    [aux_sym_css_named_color_token98] = ACTIONS(197),
    [aux_sym_css_named_color_token99] = ACTIONS(197),
    [aux_sym_css_named_color_token100] = ACTIONS(197),
    [aux_sym_css_named_color_token101] = ACTIONS(197),
    [aux_sym_css_named_color_token102] = ACTIONS(197),
    [aux_sym_css_named_color_token103] = ACTIONS(197),
    [aux_sym_css_named_color_token104] = ACTIONS(199),
    [aux_sym_css_named_color_token105] = ACTIONS(197),
    [aux_sym_css_named_color_token106] = ACTIONS(199),
    [aux_sym_css_named_color_token107] = ACTIONS(197),
    [aux_sym_css_named_color_token108] = ACTIONS(197),
    [aux_sym_css_named_color_token109] = ACTIONS(197),
    [aux_sym_css_named_color_token110] = ACTIONS(197),
    [aux_sym_css_named_color_token111] = ACTIONS(197),
    [aux_sym_css_named_color_token112] = ACTIONS(197),
    [aux_sym_css_named_color_token113] = ACTIONS(197),
    [aux_sym_css_named_color_token114] = ACTIONS(197),
    [aux_sym_css_named_color_token115] = ACTIONS(197),
    [aux_sym_css_named_color_token116] = ACTIONS(197),
    [aux_sym_css_named_color_token117] = ACTIONS(197),
    [aux_sym_css_named_color_token118] = ACTIONS(197),
    [aux_sym_css_named_color_token119] = ACTIONS(197),
    [aux_sym_css_named_color_token120] = ACTIONS(197),
    [aux_sym_css_named_color_token121] = ACTIONS(197),
    [aux_sym_css_named_color_token122] = ACTIONS(197),
    [aux_sym_css_named_color_token123] = ACTIONS(197),
    [aux_sym_css_named_color_token124] = ACTIONS(197),
    [aux_sym_css_named_color_token125] = ACTIONS(197),
    [aux_sym_css_named_color_token126] = ACTIONS(197),
    [aux_sym_css_named_color_token127] = ACTIONS(197),
    [aux_sym_css_named_color_token128] = ACTIONS(197),
    [aux_sym_css_named_color_token129] = ACTIONS(197),
    [aux_sym_css_named_color_token130] = ACTIONS(197),
    [aux_sym_css_named_color_token131] = ACTIONS(197),
    [aux_sym_css_named_color_token132] = ACTIONS(197),
    [aux_sym_css_named_color_token133] = ACTIONS(197),
    [aux_sym_css_named_color_token134] = ACTIONS(197),
    [aux_sym_css_named_color_token135] = ACTIONS(197),
    [aux_sym_css_named_color_token136] = ACTIONS(197),
    [aux_sym_css_named_color_token137] = ACTIONS(197),
    [aux_sym_css_named_color_token138] = ACTIONS(197),
    [aux_sym_css_named_color_token139] = ACTIONS(197),
    [aux_sym_css_named_color_token140] = ACTIONS(197),
    [aux_sym_css_named_color_token141] = ACTIONS(197),
    [aux_sym_css_named_color_token142] = ACTIONS(197),
    [aux_sym_css_named_color_token143] = ACTIONS(197),
    [aux_sym_css_named_color_token144] = ACTIONS(197),
    [aux_sym_css_named_color_token145] = ACTIONS(199),
    [aux_sym_css_named_color_token146] = ACTIONS(197),
    [aux_sym_css_named_color_token147] = ACTIONS(199),
    [aux_sym_css_named_color_token148] = ACTIONS(197),
    [sym_css_keyword_transparent] = ACTIONS(197),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_source_file_token1] = ACTIONS(203),
    [aux_sym_source_file_token2] = ACTIONS(203),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(203),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(201),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(203),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(201),
    [aux_sym_css_function_hwb_token1] = ACTIONS(201),
    [aux_sym_css_function_lab_token1] = ACTIONS(201),
    [aux_sym_css_function_oklab_token1] = ACTIONS(201),
    [aux_sym_css_function_lch_token1] = ACTIONS(201),
    [aux_sym_css_function_oklch_token1] = ACTIONS(201),
    [aux_sym_css_function_color_token1] = ACTIONS(201),
    [sym__css_hex_color_6_digits] = ACTIONS(203),
    [sym__css_hex_color_8_digits] = ACTIONS(201),
    [sym__css_hex_color_3_digits] = ACTIONS(203),
    [sym__css_hex_color_4_digits] = ACTIONS(203),
    [aux_sym_css_named_color_token1] = ACTIONS(201),
    [aux_sym_css_named_color_token2] = ACTIONS(201),
    [aux_sym_css_named_color_token3] = ACTIONS(203),
    [aux_sym_css_named_color_token4] = ACTIONS(201),
    [aux_sym_css_named_color_token5] = ACTIONS(201),
    [aux_sym_css_named_color_token6] = ACTIONS(201),
    [aux_sym_css_named_color_token7] = ACTIONS(201),
    [aux_sym_css_named_color_token8] = ACTIONS(201),
    [aux_sym_css_named_color_token9] = ACTIONS(201),
    [aux_sym_css_named_color_token10] = ACTIONS(203),
    [aux_sym_css_named_color_token11] = ACTIONS(201),
    [aux_sym_css_named_color_token12] = ACTIONS(201),
    [aux_sym_css_named_color_token13] = ACTIONS(201),
    [aux_sym_css_named_color_token14] = ACTIONS(201),
    [aux_sym_css_named_color_token15] = ACTIONS(201),
    [aux_sym_css_named_color_token16] = ACTIONS(201),
    [aux_sym_css_named_color_token17] = ACTIONS(201),
    [aux_sym_css_named_color_token18] = ACTIONS(201),
    [aux_sym_css_named_color_token19] = ACTIONS(201),
    [aux_sym_css_named_color_token20] = ACTIONS(201),
    [aux_sym_css_named_color_token21] = ACTIONS(201),
    [aux_sym_css_named_color_token22] = ACTIONS(201),
    [aux_sym_css_named_color_token23] = ACTIONS(201),
    [aux_sym_css_named_color_token24] = ACTIONS(201),
    [aux_sym_css_named_color_token25] = ACTIONS(201),
    [aux_sym_css_named_color_token26] = ACTIONS(201),
    [aux_sym_css_named_color_token27] = ACTIONS(201),
    [aux_sym_css_named_color_token28] = ACTIONS(201),
    [aux_sym_css_named_color_token29] = ACTIONS(201),
    [aux_sym_css_named_color_token30] = ACTIONS(201),
    [aux_sym_css_named_color_token31] = ACTIONS(201),
    [aux_sym_css_named_color_token32] = ACTIONS(201),
    [aux_sym_css_named_color_token33] = ACTIONS(201),
    [aux_sym_css_named_color_token34] = ACTIONS(201),
    [aux_sym_css_named_color_token35] = ACTIONS(201),
    [aux_sym_css_named_color_token36] = ACTIONS(201),
    [aux_sym_css_named_color_token37] = ACTIONS(201),
    [aux_sym_css_named_color_token38] = ACTIONS(201),
    [aux_sym_css_named_color_token39] = ACTIONS(201),
    [aux_sym_css_named_color_token40] = ACTIONS(201),
    [aux_sym_css_named_color_token41] = ACTIONS(201),
    [aux_sym_css_named_color_token42] = ACTIONS(201),
    [aux_sym_css_named_color_token43] = ACTIONS(201),
    [aux_sym_css_named_color_token44] = ACTIONS(201),
    [aux_sym_css_named_color_token45] = ACTIONS(201),
    [aux_sym_css_named_color_token46] = ACTIONS(201),
    [aux_sym_css_named_color_token47] = ACTIONS(201),
    [aux_sym_css_named_color_token48] = ACTIONS(201),
    [aux_sym_css_named_color_token49] = ACTIONS(201),
    [aux_sym_css_named_color_token50] = ACTIONS(201),
    [aux_sym_css_named_color_token51] = ACTIONS(201),
    [aux_sym_css_named_color_token52] = ACTIONS(203),
    [aux_sym_css_named_color_token53] = ACTIONS(201),
    [aux_sym_css_named_color_token54] = ACTIONS(201),
    [aux_sym_css_named_color_token55] = ACTIONS(203),
    [aux_sym_css_named_color_token56] = ACTIONS(201),
    [aux_sym_css_named_color_token57] = ACTIONS(201),
    [aux_sym_css_named_color_token58] = ACTIONS(201),
    [aux_sym_css_named_color_token59] = ACTIONS(201),
    [aux_sym_css_named_color_token60] = ACTIONS(201),
    [aux_sym_css_named_color_token61] = ACTIONS(201),
    [aux_sym_css_named_color_token62] = ACTIONS(201),
    [aux_sym_css_named_color_token63] = ACTIONS(201),
    [aux_sym_css_named_color_token64] = ACTIONS(203),
    [aux_sym_css_named_color_token65] = ACTIONS(201),
    [aux_sym_css_named_color_token66] = ACTIONS(201),
    [aux_sym_css_named_color_token67] = ACTIONS(201),
    [aux_sym_css_named_color_token68] = ACTIONS(201),
    [aux_sym_css_named_color_token69] = ACTIONS(201),
    [aux_sym_css_named_color_token70] = ACTIONS(201),
    [aux_sym_css_named_color_token71] = ACTIONS(201),
    [aux_sym_css_named_color_token72] = ACTIONS(201),
    [aux_sym_css_named_color_token73] = ACTIONS(201),
    [aux_sym_css_named_color_token74] = ACTIONS(201),
    [aux_sym_css_named_color_token75] = ACTIONS(201),
    [aux_sym_css_named_color_token76] = ACTIONS(201),
    [aux_sym_css_named_color_token77] = ACTIONS(201),
    [aux_sym_css_named_color_token78] = ACTIONS(201),
    [aux_sym_css_named_color_token79] = ACTIONS(201),
    [aux_sym_css_named_color_token80] = ACTIONS(201),
    [aux_sym_css_named_color_token81] = ACTIONS(201),
    [aux_sym_css_named_color_token82] = ACTIONS(201),
    [aux_sym_css_named_color_token83] = ACTIONS(203),
    [aux_sym_css_named_color_token84] = ACTIONS(201),
    [aux_sym_css_named_color_token85] = ACTIONS(201),
    [aux_sym_css_named_color_token86] = ACTIONS(201),
    [aux_sym_css_named_color_token87] = ACTIONS(201),
    [aux_sym_css_named_color_token88] = ACTIONS(201),
    [aux_sym_css_named_color_token89] = ACTIONS(201),
    [aux_sym_css_named_color_token90] = ACTIONS(201),
    [aux_sym_css_named_color_token91] = ACTIONS(201),
    [aux_sym_css_named_color_token92] = ACTIONS(201),
    [aux_sym_css_named_color_token93] = ACTIONS(201),
    [aux_sym_css_named_color_token94] = ACTIONS(201),
    [aux_sym_css_named_color_token95] = ACTIONS(201),
    [aux_sym_css_named_color_token96] = ACTIONS(201),
    [aux_sym_css_named_color_token97] = ACTIONS(201),
    [aux_sym_css_named_color_token98] = ACTIONS(201),
    [aux_sym_css_named_color_token99] = ACTIONS(201),
    [aux_sym_css_named_color_token100] = ACTIONS(201),
    [aux_sym_css_named_color_token101] = ACTIONS(201),
    [aux_sym_css_named_color_token102] = ACTIONS(201),
    [aux_sym_css_named_color_token103] = ACTIONS(201),
    [aux_sym_css_named_color_token104] = ACTIONS(203),
    [aux_sym_css_named_color_token105] = ACTIONS(201),
    [aux_sym_css_named_color_token106] = ACTIONS(203),
    [aux_sym_css_named_color_token107] = ACTIONS(201),
    [aux_sym_css_named_color_token108] = ACTIONS(201),
    [aux_sym_css_named_color_token109] = ACTIONS(201),
    [aux_sym_css_named_color_token110] = ACTIONS(201),
    [aux_sym_css_named_color_token111] = ACTIONS(201),
    [aux_sym_css_named_color_token112] = ACTIONS(201),
    [aux_sym_css_named_color_token113] = ACTIONS(201),
    [aux_sym_css_named_color_token114] = ACTIONS(201),
    [aux_sym_css_named_color_token115] = ACTIONS(201),
    [aux_sym_css_named_color_token116] = ACTIONS(201),
    [aux_sym_css_named_color_token117] = ACTIONS(201),
    [aux_sym_css_named_color_token118] = ACTIONS(201),
    [aux_sym_css_named_color_token119] = ACTIONS(201),
    [aux_sym_css_named_color_token120] = ACTIONS(201),
    [aux_sym_css_named_color_token121] = ACTIONS(201),
    [aux_sym_css_named_color_token122] = ACTIONS(201),
    [aux_sym_css_named_color_token123] = ACTIONS(201),
    [aux_sym_css_named_color_token124] = ACTIONS(201),
    [aux_sym_css_named_color_token125] = ACTIONS(201),
    [aux_sym_css_named_color_token126] = ACTIONS(201),
    [aux_sym_css_named_color_token127] = ACTIONS(201),
    [aux_sym_css_named_color_token128] = ACTIONS(201),
    [aux_sym_css_named_color_token129] = ACTIONS(201),
    [aux_sym_css_named_color_token130] = ACTIONS(201),
    [aux_sym_css_named_color_token131] = ACTIONS(201),
    [aux_sym_css_named_color_token132] = ACTIONS(201),
    [aux_sym_css_named_color_token133] = ACTIONS(201),
    [aux_sym_css_named_color_token134] = ACTIONS(201),
    [aux_sym_css_named_color_token135] = ACTIONS(201),
    [aux_sym_css_named_color_token136] = ACTIONS(201),
    [aux_sym_css_named_color_token137] = ACTIONS(201),
    [aux_sym_css_named_color_token138] = ACTIONS(201),
    [aux_sym_css_named_color_token139] = ACTIONS(201),
    [aux_sym_css_named_color_token140] = ACTIONS(201),
    [aux_sym_css_named_color_token141] = ACTIONS(201),
    [aux_sym_css_named_color_token142] = ACTIONS(201),
    [aux_sym_css_named_color_token143] = ACTIONS(201),
    [aux_sym_css_named_color_token144] = ACTIONS(201),
    [aux_sym_css_named_color_token145] = ACTIONS(203),
    [aux_sym_css_named_color_token146] = ACTIONS(201),
    [aux_sym_css_named_color_token147] = ACTIONS(203),
    [aux_sym_css_named_color_token148] = ACTIONS(201),
    [sym_css_keyword_transparent] = ACTIONS(201),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_source_file_token1] = ACTIONS(207),
    [aux_sym_source_file_token2] = ACTIONS(207),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(207),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(205),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(207),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(205),
    [aux_sym_css_function_hwb_token1] = ACTIONS(205),
    [aux_sym_css_function_lab_token1] = ACTIONS(205),
    [aux_sym_css_function_oklab_token1] = ACTIONS(205),
    [aux_sym_css_function_lch_token1] = ACTIONS(205),
    [aux_sym_css_function_oklch_token1] = ACTIONS(205),
    [aux_sym_css_function_color_token1] = ACTIONS(205),
    [sym__css_hex_color_6_digits] = ACTIONS(207),
    [sym__css_hex_color_8_digits] = ACTIONS(205),
    [sym__css_hex_color_3_digits] = ACTIONS(207),
    [sym__css_hex_color_4_digits] = ACTIONS(207),
    [aux_sym_css_named_color_token1] = ACTIONS(205),
    [aux_sym_css_named_color_token2] = ACTIONS(205),
    [aux_sym_css_named_color_token3] = ACTIONS(207),
    [aux_sym_css_named_color_token4] = ACTIONS(205),
    [aux_sym_css_named_color_token5] = ACTIONS(205),
    [aux_sym_css_named_color_token6] = ACTIONS(205),
    [aux_sym_css_named_color_token7] = ACTIONS(205),
    [aux_sym_css_named_color_token8] = ACTIONS(205),
    [aux_sym_css_named_color_token9] = ACTIONS(205),
    [aux_sym_css_named_color_token10] = ACTIONS(207),
    [aux_sym_css_named_color_token11] = ACTIONS(205),
    [aux_sym_css_named_color_token12] = ACTIONS(205),
    [aux_sym_css_named_color_token13] = ACTIONS(205),
    [aux_sym_css_named_color_token14] = ACTIONS(205),
    [aux_sym_css_named_color_token15] = ACTIONS(205),
    [aux_sym_css_named_color_token16] = ACTIONS(205),
    [aux_sym_css_named_color_token17] = ACTIONS(205),
    [aux_sym_css_named_color_token18] = ACTIONS(205),
    [aux_sym_css_named_color_token19] = ACTIONS(205),
    [aux_sym_css_named_color_token20] = ACTIONS(205),
    [aux_sym_css_named_color_token21] = ACTIONS(205),
    [aux_sym_css_named_color_token22] = ACTIONS(205),
    [aux_sym_css_named_color_token23] = ACTIONS(205),
    [aux_sym_css_named_color_token24] = ACTIONS(205),
    [aux_sym_css_named_color_token25] = ACTIONS(205),
    [aux_sym_css_named_color_token26] = ACTIONS(205),
    [aux_sym_css_named_color_token27] = ACTIONS(205),
    [aux_sym_css_named_color_token28] = ACTIONS(205),
    [aux_sym_css_named_color_token29] = ACTIONS(205),
    [aux_sym_css_named_color_token30] = ACTIONS(205),
    [aux_sym_css_named_color_token31] = ACTIONS(205),
    [aux_sym_css_named_color_token32] = ACTIONS(205),
    [aux_sym_css_named_color_token33] = ACTIONS(205),
    [aux_sym_css_named_color_token34] = ACTIONS(205),
    [aux_sym_css_named_color_token35] = ACTIONS(205),
    [aux_sym_css_named_color_token36] = ACTIONS(205),
    [aux_sym_css_named_color_token37] = ACTIONS(205),
    [aux_sym_css_named_color_token38] = ACTIONS(205),
    [aux_sym_css_named_color_token39] = ACTIONS(205),
    [aux_sym_css_named_color_token40] = ACTIONS(205),
    [aux_sym_css_named_color_token41] = ACTIONS(205),
    [aux_sym_css_named_color_token42] = ACTIONS(205),
    [aux_sym_css_named_color_token43] = ACTIONS(205),
    [aux_sym_css_named_color_token44] = ACTIONS(205),
    [aux_sym_css_named_color_token45] = ACTIONS(205),
    [aux_sym_css_named_color_token46] = ACTIONS(205),
    [aux_sym_css_named_color_token47] = ACTIONS(205),
    [aux_sym_css_named_color_token48] = ACTIONS(205),
    [aux_sym_css_named_color_token49] = ACTIONS(205),
    [aux_sym_css_named_color_token50] = ACTIONS(205),
    [aux_sym_css_named_color_token51] = ACTIONS(205),
    [aux_sym_css_named_color_token52] = ACTIONS(207),
    [aux_sym_css_named_color_token53] = ACTIONS(205),
    [aux_sym_css_named_color_token54] = ACTIONS(205),
    [aux_sym_css_named_color_token55] = ACTIONS(207),
    [aux_sym_css_named_color_token56] = ACTIONS(205),
    [aux_sym_css_named_color_token57] = ACTIONS(205),
    [aux_sym_css_named_color_token58] = ACTIONS(205),
    [aux_sym_css_named_color_token59] = ACTIONS(205),
    [aux_sym_css_named_color_token60] = ACTIONS(205),
    [aux_sym_css_named_color_token61] = ACTIONS(205),
    [aux_sym_css_named_color_token62] = ACTIONS(205),
    [aux_sym_css_named_color_token63] = ACTIONS(205),
    [aux_sym_css_named_color_token64] = ACTIONS(207),
    [aux_sym_css_named_color_token65] = ACTIONS(205),
    [aux_sym_css_named_color_token66] = ACTIONS(205),
    [aux_sym_css_named_color_token67] = ACTIONS(205),
    [aux_sym_css_named_color_token68] = ACTIONS(205),
    [aux_sym_css_named_color_token69] = ACTIONS(205),
    [aux_sym_css_named_color_token70] = ACTIONS(205),
    [aux_sym_css_named_color_token71] = ACTIONS(205),
    [aux_sym_css_named_color_token72] = ACTIONS(205),
    [aux_sym_css_named_color_token73] = ACTIONS(205),
    [aux_sym_css_named_color_token74] = ACTIONS(205),
    [aux_sym_css_named_color_token75] = ACTIONS(205),
    [aux_sym_css_named_color_token76] = ACTIONS(205),
    [aux_sym_css_named_color_token77] = ACTIONS(205),
    [aux_sym_css_named_color_token78] = ACTIONS(205),
    [aux_sym_css_named_color_token79] = ACTIONS(205),
    [aux_sym_css_named_color_token80] = ACTIONS(205),
    [aux_sym_css_named_color_token81] = ACTIONS(205),
    [aux_sym_css_named_color_token82] = ACTIONS(205),
    [aux_sym_css_named_color_token83] = ACTIONS(207),
    [aux_sym_css_named_color_token84] = ACTIONS(205),
    [aux_sym_css_named_color_token85] = ACTIONS(205),
    [aux_sym_css_named_color_token86] = ACTIONS(205),
    [aux_sym_css_named_color_token87] = ACTIONS(205),
    [aux_sym_css_named_color_token88] = ACTIONS(205),
    [aux_sym_css_named_color_token89] = ACTIONS(205),
    [aux_sym_css_named_color_token90] = ACTIONS(205),
    [aux_sym_css_named_color_token91] = ACTIONS(205),
    [aux_sym_css_named_color_token92] = ACTIONS(205),
    [aux_sym_css_named_color_token93] = ACTIONS(205),
    [aux_sym_css_named_color_token94] = ACTIONS(205),
    [aux_sym_css_named_color_token95] = ACTIONS(205),
    [aux_sym_css_named_color_token96] = ACTIONS(205),
    [aux_sym_css_named_color_token97] = ACTIONS(205),
    [aux_sym_css_named_color_token98] = ACTIONS(205),
    [aux_sym_css_named_color_token99] = ACTIONS(205),
    [aux_sym_css_named_color_token100] = ACTIONS(205),
    [aux_sym_css_named_color_token101] = ACTIONS(205),
    [aux_sym_css_named_color_token102] = ACTIONS(205),
    [aux_sym_css_named_color_token103] = ACTIONS(205),
    [aux_sym_css_named_color_token104] = ACTIONS(207),
    [aux_sym_css_named_color_token105] = ACTIONS(205),
    [aux_sym_css_named_color_token106] = ACTIONS(207),
    [aux_sym_css_named_color_token107] = ACTIONS(205),
    [aux_sym_css_named_color_token108] = ACTIONS(205),
    [aux_sym_css_named_color_token109] = ACTIONS(205),
    [aux_sym_css_named_color_token110] = ACTIONS(205),
    [aux_sym_css_named_color_token111] = ACTIONS(205),
    [aux_sym_css_named_color_token112] = ACTIONS(205),
    [aux_sym_css_named_color_token113] = ACTIONS(205),
    [aux_sym_css_named_color_token114] = ACTIONS(205),
    [aux_sym_css_named_color_token115] = ACTIONS(205),
    [aux_sym_css_named_color_token116] = ACTIONS(205),
    [aux_sym_css_named_color_token117] = ACTIONS(205),
    [aux_sym_css_named_color_token118] = ACTIONS(205),
    [aux_sym_css_named_color_token119] = ACTIONS(205),
    [aux_sym_css_named_color_token120] = ACTIONS(205),
    [aux_sym_css_named_color_token121] = ACTIONS(205),
    [aux_sym_css_named_color_token122] = ACTIONS(205),
    [aux_sym_css_named_color_token123] = ACTIONS(205),
    [aux_sym_css_named_color_token124] = ACTIONS(205),
    [aux_sym_css_named_color_token125] = ACTIONS(205),
    [aux_sym_css_named_color_token126] = ACTIONS(205),
    [aux_sym_css_named_color_token127] = ACTIONS(205),
    [aux_sym_css_named_color_token128] = ACTIONS(205),
    [aux_sym_css_named_color_token129] = ACTIONS(205),
    [aux_sym_css_named_color_token130] = ACTIONS(205),
    [aux_sym_css_named_color_token131] = ACTIONS(205),
    [aux_sym_css_named_color_token132] = ACTIONS(205),
    [aux_sym_css_named_color_token133] = ACTIONS(205),
    [aux_sym_css_named_color_token134] = ACTIONS(205),
    [aux_sym_css_named_color_token135] = ACTIONS(205),
    [aux_sym_css_named_color_token136] = ACTIONS(205),
    [aux_sym_css_named_color_token137] = ACTIONS(205),
    [aux_sym_css_named_color_token138] = ACTIONS(205),
    [aux_sym_css_named_color_token139] = ACTIONS(205),
    [aux_sym_css_named_color_token140] = ACTIONS(205),
    [aux_sym_css_named_color_token141] = ACTIONS(205),
    [aux_sym_css_named_color_token142] = ACTIONS(205),
    [aux_sym_css_named_color_token143] = ACTIONS(205),
    [aux_sym_css_named_color_token144] = ACTIONS(205),
    [aux_sym_css_named_color_token145] = ACTIONS(207),
    [aux_sym_css_named_color_token146] = ACTIONS(205),
    [aux_sym_css_named_color_token147] = ACTIONS(207),
    [aux_sym_css_named_color_token148] = ACTIONS(205),
    [sym_css_keyword_transparent] = ACTIONS(205),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_source_file_token1] = ACTIONS(211),
    [aux_sym_source_file_token2] = ACTIONS(211),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(211),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(209),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(211),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(209),
    [aux_sym_css_function_hwb_token1] = ACTIONS(209),
    [aux_sym_css_function_lab_token1] = ACTIONS(209),
    [aux_sym_css_function_oklab_token1] = ACTIONS(209),
    [aux_sym_css_function_lch_token1] = ACTIONS(209),
    [aux_sym_css_function_oklch_token1] = ACTIONS(209),
    [aux_sym_css_function_color_token1] = ACTIONS(209),
    [sym__css_hex_color_6_digits] = ACTIONS(211),
    [sym__css_hex_color_8_digits] = ACTIONS(209),
    [sym__css_hex_color_3_digits] = ACTIONS(211),
    [sym__css_hex_color_4_digits] = ACTIONS(211),
    [aux_sym_css_named_color_token1] = ACTIONS(209),
    [aux_sym_css_named_color_token2] = ACTIONS(209),
    [aux_sym_css_named_color_token3] = ACTIONS(211),
    [aux_sym_css_named_color_token4] = ACTIONS(209),
    [aux_sym_css_named_color_token5] = ACTIONS(209),
    [aux_sym_css_named_color_token6] = ACTIONS(209),
    [aux_sym_css_named_color_token7] = ACTIONS(209),
    [aux_sym_css_named_color_token8] = ACTIONS(209),
    [aux_sym_css_named_color_token9] = ACTIONS(209),
    [aux_sym_css_named_color_token10] = ACTIONS(211),
    [aux_sym_css_named_color_token11] = ACTIONS(209),
    [aux_sym_css_named_color_token12] = ACTIONS(209),
    [aux_sym_css_named_color_token13] = ACTIONS(209),
    [aux_sym_css_named_color_token14] = ACTIONS(209),
    [aux_sym_css_named_color_token15] = ACTIONS(209),
    [aux_sym_css_named_color_token16] = ACTIONS(209),
    [aux_sym_css_named_color_token17] = ACTIONS(209),
    [aux_sym_css_named_color_token18] = ACTIONS(209),
    [aux_sym_css_named_color_token19] = ACTIONS(209),
    [aux_sym_css_named_color_token20] = ACTIONS(209),
    [aux_sym_css_named_color_token21] = ACTIONS(209),
    [aux_sym_css_named_color_token22] = ACTIONS(209),
    [aux_sym_css_named_color_token23] = ACTIONS(209),
    [aux_sym_css_named_color_token24] = ACTIONS(209),
    [aux_sym_css_named_color_token25] = ACTIONS(209),
    [aux_sym_css_named_color_token26] = ACTIONS(209),
    [aux_sym_css_named_color_token27] = ACTIONS(209),
    [aux_sym_css_named_color_token28] = ACTIONS(209),
    [aux_sym_css_named_color_token29] = ACTIONS(209),
    [aux_sym_css_named_color_token30] = ACTIONS(209),
    [aux_sym_css_named_color_token31] = ACTIONS(209),
    [aux_sym_css_named_color_token32] = ACTIONS(209),
    [aux_sym_css_named_color_token33] = ACTIONS(209),
    [aux_sym_css_named_color_token34] = ACTIONS(209),
    [aux_sym_css_named_color_token35] = ACTIONS(209),
    [aux_sym_css_named_color_token36] = ACTIONS(209),
    [aux_sym_css_named_color_token37] = ACTIONS(209),
    [aux_sym_css_named_color_token38] = ACTIONS(209),
    [aux_sym_css_named_color_token39] = ACTIONS(209),
    [aux_sym_css_named_color_token40] = ACTIONS(209),
    [aux_sym_css_named_color_token41] = ACTIONS(209),
    [aux_sym_css_named_color_token42] = ACTIONS(209),
    [aux_sym_css_named_color_token43] = ACTIONS(209),
    [aux_sym_css_named_color_token44] = ACTIONS(209),
    [aux_sym_css_named_color_token45] = ACTIONS(209),
    [aux_sym_css_named_color_token46] = ACTIONS(209),
    [aux_sym_css_named_color_token47] = ACTIONS(209),
    [aux_sym_css_named_color_token48] = ACTIONS(209),
    [aux_sym_css_named_color_token49] = ACTIONS(209),
    [aux_sym_css_named_color_token50] = ACTIONS(209),
    [aux_sym_css_named_color_token51] = ACTIONS(209),
    [aux_sym_css_named_color_token52] = ACTIONS(211),
    [aux_sym_css_named_color_token53] = ACTIONS(209),
    [aux_sym_css_named_color_token54] = ACTIONS(209),
    [aux_sym_css_named_color_token55] = ACTIONS(211),
    [aux_sym_css_named_color_token56] = ACTIONS(209),
    [aux_sym_css_named_color_token57] = ACTIONS(209),
    [aux_sym_css_named_color_token58] = ACTIONS(209),
    [aux_sym_css_named_color_token59] = ACTIONS(209),
    [aux_sym_css_named_color_token60] = ACTIONS(209),
    [aux_sym_css_named_color_token61] = ACTIONS(209),
    [aux_sym_css_named_color_token62] = ACTIONS(209),
    [aux_sym_css_named_color_token63] = ACTIONS(209),
    [aux_sym_css_named_color_token64] = ACTIONS(211),
    [aux_sym_css_named_color_token65] = ACTIONS(209),
    [aux_sym_css_named_color_token66] = ACTIONS(209),
    [aux_sym_css_named_color_token67] = ACTIONS(209),
    [aux_sym_css_named_color_token68] = ACTIONS(209),
    [aux_sym_css_named_color_token69] = ACTIONS(209),
    [aux_sym_css_named_color_token70] = ACTIONS(209),
    [aux_sym_css_named_color_token71] = ACTIONS(209),
    [aux_sym_css_named_color_token72] = ACTIONS(209),
    [aux_sym_css_named_color_token73] = ACTIONS(209),
    [aux_sym_css_named_color_token74] = ACTIONS(209),
    [aux_sym_css_named_color_token75] = ACTIONS(209),
    [aux_sym_css_named_color_token76] = ACTIONS(209),
    [aux_sym_css_named_color_token77] = ACTIONS(209),
    [aux_sym_css_named_color_token78] = ACTIONS(209),
    [aux_sym_css_named_color_token79] = ACTIONS(209),
    [aux_sym_css_named_color_token80] = ACTIONS(209),
    [aux_sym_css_named_color_token81] = ACTIONS(209),
    [aux_sym_css_named_color_token82] = ACTIONS(209),
    [aux_sym_css_named_color_token83] = ACTIONS(211),
    [aux_sym_css_named_color_token84] = ACTIONS(209),
    [aux_sym_css_named_color_token85] = ACTIONS(209),
    [aux_sym_css_named_color_token86] = ACTIONS(209),
    [aux_sym_css_named_color_token87] = ACTIONS(209),
    [aux_sym_css_named_color_token88] = ACTIONS(209),
    [aux_sym_css_named_color_token89] = ACTIONS(209),
    [aux_sym_css_named_color_token90] = ACTIONS(209),
    [aux_sym_css_named_color_token91] = ACTIONS(209),
    [aux_sym_css_named_color_token92] = ACTIONS(209),
    [aux_sym_css_named_color_token93] = ACTIONS(209),
    [aux_sym_css_named_color_token94] = ACTIONS(209),
    [aux_sym_css_named_color_token95] = ACTIONS(209),
    [aux_sym_css_named_color_token96] = ACTIONS(209),
    [aux_sym_css_named_color_token97] = ACTIONS(209),
    [aux_sym_css_named_color_token98] = ACTIONS(209),
    [aux_sym_css_named_color_token99] = ACTIONS(209),
    [aux_sym_css_named_color_token100] = ACTIONS(209),
    [aux_sym_css_named_color_token101] = ACTIONS(209),
    [aux_sym_css_named_color_token102] = ACTIONS(209),
    [aux_sym_css_named_color_token103] = ACTIONS(209),
    [aux_sym_css_named_color_token104] = ACTIONS(211),
    [aux_sym_css_named_color_token105] = ACTIONS(209),
    [aux_sym_css_named_color_token106] = ACTIONS(211),
    [aux_sym_css_named_color_token107] = ACTIONS(209),
    [aux_sym_css_named_color_token108] = ACTIONS(209),
    [aux_sym_css_named_color_token109] = ACTIONS(209),
    [aux_sym_css_named_color_token110] = ACTIONS(209),
    [aux_sym_css_named_color_token111] = ACTIONS(209),
    [aux_sym_css_named_color_token112] = ACTIONS(209),
    [aux_sym_css_named_color_token113] = ACTIONS(209),
    [aux_sym_css_named_color_token114] = ACTIONS(209),
    [aux_sym_css_named_color_token115] = ACTIONS(209),
    [aux_sym_css_named_color_token116] = ACTIONS(209),
    [aux_sym_css_named_color_token117] = ACTIONS(209),
    [aux_sym_css_named_color_token118] = ACTIONS(209),
    [aux_sym_css_named_color_token119] = ACTIONS(209),
    [aux_sym_css_named_color_token120] = ACTIONS(209),
    [aux_sym_css_named_color_token121] = ACTIONS(209),
    [aux_sym_css_named_color_token122] = ACTIONS(209),
    [aux_sym_css_named_color_token123] = ACTIONS(209),
    [aux_sym_css_named_color_token124] = ACTIONS(209),
    [aux_sym_css_named_color_token125] = ACTIONS(209),
    [aux_sym_css_named_color_token126] = ACTIONS(209),
    [aux_sym_css_named_color_token127] = ACTIONS(209),
    [aux_sym_css_named_color_token128] = ACTIONS(209),
    [aux_sym_css_named_color_token129] = ACTIONS(209),
    [aux_sym_css_named_color_token130] = ACTIONS(209),
    [aux_sym_css_named_color_token131] = ACTIONS(209),
    [aux_sym_css_named_color_token132] = ACTIONS(209),
    [aux_sym_css_named_color_token133] = ACTIONS(209),
    [aux_sym_css_named_color_token134] = ACTIONS(209),
    [aux_sym_css_named_color_token135] = ACTIONS(209),
    [aux_sym_css_named_color_token136] = ACTIONS(209),
    [aux_sym_css_named_color_token137] = ACTIONS(209),
    [aux_sym_css_named_color_token138] = ACTIONS(209),
    [aux_sym_css_named_color_token139] = ACTIONS(209),
    [aux_sym_css_named_color_token140] = ACTIONS(209),
    [aux_sym_css_named_color_token141] = ACTIONS(209),
    [aux_sym_css_named_color_token142] = ACTIONS(209),
    [aux_sym_css_named_color_token143] = ACTIONS(209),
    [aux_sym_css_named_color_token144] = ACTIONS(209),
    [aux_sym_css_named_color_token145] = ACTIONS(211),
    [aux_sym_css_named_color_token146] = ACTIONS(209),
    [aux_sym_css_named_color_token147] = ACTIONS(211),
    [aux_sym_css_named_color_token148] = ACTIONS(209),
    [sym_css_keyword_transparent] = ACTIONS(209),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [aux_sym_source_file_token1] = ACTIONS(215),
    [aux_sym_source_file_token2] = ACTIONS(215),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(215),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(213),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(215),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(213),
    [aux_sym_css_function_hwb_token1] = ACTIONS(213),
    [aux_sym_css_function_lab_token1] = ACTIONS(213),
    [aux_sym_css_function_oklab_token1] = ACTIONS(213),
    [aux_sym_css_function_lch_token1] = ACTIONS(213),
    [aux_sym_css_function_oklch_token1] = ACTIONS(213),
    [aux_sym_css_function_color_token1] = ACTIONS(213),
    [sym__css_hex_color_6_digits] = ACTIONS(215),
    [sym__css_hex_color_8_digits] = ACTIONS(213),
    [sym__css_hex_color_3_digits] = ACTIONS(215),
    [sym__css_hex_color_4_digits] = ACTIONS(215),
    [aux_sym_css_named_color_token1] = ACTIONS(213),
    [aux_sym_css_named_color_token2] = ACTIONS(213),
    [aux_sym_css_named_color_token3] = ACTIONS(215),
    [aux_sym_css_named_color_token4] = ACTIONS(213),
    [aux_sym_css_named_color_token5] = ACTIONS(213),
    [aux_sym_css_named_color_token6] = ACTIONS(213),
    [aux_sym_css_named_color_token7] = ACTIONS(213),
    [aux_sym_css_named_color_token8] = ACTIONS(213),
    [aux_sym_css_named_color_token9] = ACTIONS(213),
    [aux_sym_css_named_color_token10] = ACTIONS(215),
    [aux_sym_css_named_color_token11] = ACTIONS(213),
    [aux_sym_css_named_color_token12] = ACTIONS(213),
    [aux_sym_css_named_color_token13] = ACTIONS(213),
    [aux_sym_css_named_color_token14] = ACTIONS(213),
    [aux_sym_css_named_color_token15] = ACTIONS(213),
    [aux_sym_css_named_color_token16] = ACTIONS(213),
    [aux_sym_css_named_color_token17] = ACTIONS(213),
    [aux_sym_css_named_color_token18] = ACTIONS(213),
    [aux_sym_css_named_color_token19] = ACTIONS(213),
    [aux_sym_css_named_color_token20] = ACTIONS(213),
    [aux_sym_css_named_color_token21] = ACTIONS(213),
    [aux_sym_css_named_color_token22] = ACTIONS(213),
    [aux_sym_css_named_color_token23] = ACTIONS(213),
    [aux_sym_css_named_color_token24] = ACTIONS(213),
    [aux_sym_css_named_color_token25] = ACTIONS(213),
    [aux_sym_css_named_color_token26] = ACTIONS(213),
    [aux_sym_css_named_color_token27] = ACTIONS(213),
    [aux_sym_css_named_color_token28] = ACTIONS(213),
    [aux_sym_css_named_color_token29] = ACTIONS(213),
    [aux_sym_css_named_color_token30] = ACTIONS(213),
    [aux_sym_css_named_color_token31] = ACTIONS(213),
    [aux_sym_css_named_color_token32] = ACTIONS(213),
    [aux_sym_css_named_color_token33] = ACTIONS(213),
    [aux_sym_css_named_color_token34] = ACTIONS(213),
    [aux_sym_css_named_color_token35] = ACTIONS(213),
    [aux_sym_css_named_color_token36] = ACTIONS(213),
    [aux_sym_css_named_color_token37] = ACTIONS(213),
    [aux_sym_css_named_color_token38] = ACTIONS(213),
    [aux_sym_css_named_color_token39] = ACTIONS(213),
    [aux_sym_css_named_color_token40] = ACTIONS(213),
    [aux_sym_css_named_color_token41] = ACTIONS(213),
    [aux_sym_css_named_color_token42] = ACTIONS(213),
    [aux_sym_css_named_color_token43] = ACTIONS(213),
    [aux_sym_css_named_color_token44] = ACTIONS(213),
    [aux_sym_css_named_color_token45] = ACTIONS(213),
    [aux_sym_css_named_color_token46] = ACTIONS(213),
    [aux_sym_css_named_color_token47] = ACTIONS(213),
    [aux_sym_css_named_color_token48] = ACTIONS(213),
    [aux_sym_css_named_color_token49] = ACTIONS(213),
    [aux_sym_css_named_color_token50] = ACTIONS(213),
    [aux_sym_css_named_color_token51] = ACTIONS(213),
    [aux_sym_css_named_color_token52] = ACTIONS(215),
    [aux_sym_css_named_color_token53] = ACTIONS(213),
    [aux_sym_css_named_color_token54] = ACTIONS(213),
    [aux_sym_css_named_color_token55] = ACTIONS(215),
    [aux_sym_css_named_color_token56] = ACTIONS(213),
    [aux_sym_css_named_color_token57] = ACTIONS(213),
    [aux_sym_css_named_color_token58] = ACTIONS(213),
    [aux_sym_css_named_color_token59] = ACTIONS(213),
    [aux_sym_css_named_color_token60] = ACTIONS(213),
    [aux_sym_css_named_color_token61] = ACTIONS(213),
    [aux_sym_css_named_color_token62] = ACTIONS(213),
    [aux_sym_css_named_color_token63] = ACTIONS(213),
    [aux_sym_css_named_color_token64] = ACTIONS(215),
    [aux_sym_css_named_color_token65] = ACTIONS(213),
    [aux_sym_css_named_color_token66] = ACTIONS(213),
    [aux_sym_css_named_color_token67] = ACTIONS(213),
    [aux_sym_css_named_color_token68] = ACTIONS(213),
    [aux_sym_css_named_color_token69] = ACTIONS(213),
    [aux_sym_css_named_color_token70] = ACTIONS(213),
    [aux_sym_css_named_color_token71] = ACTIONS(213),
    [aux_sym_css_named_color_token72] = ACTIONS(213),
    [aux_sym_css_named_color_token73] = ACTIONS(213),
    [aux_sym_css_named_color_token74] = ACTIONS(213),
    [aux_sym_css_named_color_token75] = ACTIONS(213),
    [aux_sym_css_named_color_token76] = ACTIONS(213),
    [aux_sym_css_named_color_token77] = ACTIONS(213),
    [aux_sym_css_named_color_token78] = ACTIONS(213),
    [aux_sym_css_named_color_token79] = ACTIONS(213),
    [aux_sym_css_named_color_token80] = ACTIONS(213),
    [aux_sym_css_named_color_token81] = ACTIONS(213),
    [aux_sym_css_named_color_token82] = ACTIONS(213),
    [aux_sym_css_named_color_token83] = ACTIONS(215),
    [aux_sym_css_named_color_token84] = ACTIONS(213),
    [aux_sym_css_named_color_token85] = ACTIONS(213),
    [aux_sym_css_named_color_token86] = ACTIONS(213),
    [aux_sym_css_named_color_token87] = ACTIONS(213),
    [aux_sym_css_named_color_token88] = ACTIONS(213),
    [aux_sym_css_named_color_token89] = ACTIONS(213),
    [aux_sym_css_named_color_token90] = ACTIONS(213),
    [aux_sym_css_named_color_token91] = ACTIONS(213),
    [aux_sym_css_named_color_token92] = ACTIONS(213),
    [aux_sym_css_named_color_token93] = ACTIONS(213),
    [aux_sym_css_named_color_token94] = ACTIONS(213),
    [aux_sym_css_named_color_token95] = ACTIONS(213),
    [aux_sym_css_named_color_token96] = ACTIONS(213),
    [aux_sym_css_named_color_token97] = ACTIONS(213),
    [aux_sym_css_named_color_token98] = ACTIONS(213),
    [aux_sym_css_named_color_token99] = ACTIONS(213),
    [aux_sym_css_named_color_token100] = ACTIONS(213),
    [aux_sym_css_named_color_token101] = ACTIONS(213),
    [aux_sym_css_named_color_token102] = ACTIONS(213),
    [aux_sym_css_named_color_token103] = ACTIONS(213),
    [aux_sym_css_named_color_token104] = ACTIONS(215),
    [aux_sym_css_named_color_token105] = ACTIONS(213),
    [aux_sym_css_named_color_token106] = ACTIONS(215),
    [aux_sym_css_named_color_token107] = ACTIONS(213),
    [aux_sym_css_named_color_token108] = ACTIONS(213),
    [aux_sym_css_named_color_token109] = ACTIONS(213),
    [aux_sym_css_named_color_token110] = ACTIONS(213),
    [aux_sym_css_named_color_token111] = ACTIONS(213),
    [aux_sym_css_named_color_token112] = ACTIONS(213),
    [aux_sym_css_named_color_token113] = ACTIONS(213),
    [aux_sym_css_named_color_token114] = ACTIONS(213),
    [aux_sym_css_named_color_token115] = ACTIONS(213),
    [aux_sym_css_named_color_token116] = ACTIONS(213),
    [aux_sym_css_named_color_token117] = ACTIONS(213),
    [aux_sym_css_named_color_token118] = ACTIONS(213),
    [aux_sym_css_named_color_token119] = ACTIONS(213),
    [aux_sym_css_named_color_token120] = ACTIONS(213),
    [aux_sym_css_named_color_token121] = ACTIONS(213),
    [aux_sym_css_named_color_token122] = ACTIONS(213),
    [aux_sym_css_named_color_token123] = ACTIONS(213),
    [aux_sym_css_named_color_token124] = ACTIONS(213),
    [aux_sym_css_named_color_token125] = ACTIONS(213),
    [aux_sym_css_named_color_token126] = ACTIONS(213),
    [aux_sym_css_named_color_token127] = ACTIONS(213),
    [aux_sym_css_named_color_token128] = ACTIONS(213),
    [aux_sym_css_named_color_token129] = ACTIONS(213),
    [aux_sym_css_named_color_token130] = ACTIONS(213),
    [aux_sym_css_named_color_token131] = ACTIONS(213),
    [aux_sym_css_named_color_token132] = ACTIONS(213),
    [aux_sym_css_named_color_token133] = ACTIONS(213),
    [aux_sym_css_named_color_token134] = ACTIONS(213),
    [aux_sym_css_named_color_token135] = ACTIONS(213),
    [aux_sym_css_named_color_token136] = ACTIONS(213),
    [aux_sym_css_named_color_token137] = ACTIONS(213),
    [aux_sym_css_named_color_token138] = ACTIONS(213),
    [aux_sym_css_named_color_token139] = ACTIONS(213),
    [aux_sym_css_named_color_token140] = ACTIONS(213),
    [aux_sym_css_named_color_token141] = ACTIONS(213),
    [aux_sym_css_named_color_token142] = ACTIONS(213),
    [aux_sym_css_named_color_token143] = ACTIONS(213),
    [aux_sym_css_named_color_token144] = ACTIONS(213),
    [aux_sym_css_named_color_token145] = ACTIONS(215),
    [aux_sym_css_named_color_token146] = ACTIONS(213),
    [aux_sym_css_named_color_token147] = ACTIONS(215),
    [aux_sym_css_named_color_token148] = ACTIONS(213),
    [sym_css_keyword_transparent] = ACTIONS(213),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [aux_sym_source_file_token1] = ACTIONS(219),
    [aux_sym_source_file_token2] = ACTIONS(219),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(219),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(217),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(219),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(217),
    [aux_sym_css_function_hwb_token1] = ACTIONS(217),
    [aux_sym_css_function_lab_token1] = ACTIONS(217),
    [aux_sym_css_function_oklab_token1] = ACTIONS(217),
    [aux_sym_css_function_lch_token1] = ACTIONS(217),
    [aux_sym_css_function_oklch_token1] = ACTIONS(217),
    [aux_sym_css_function_color_token1] = ACTIONS(217),
    [sym__css_hex_color_6_digits] = ACTIONS(219),
    [sym__css_hex_color_8_digits] = ACTIONS(217),
    [sym__css_hex_color_3_digits] = ACTIONS(219),
    [sym__css_hex_color_4_digits] = ACTIONS(219),
    [aux_sym_css_named_color_token1] = ACTIONS(217),
    [aux_sym_css_named_color_token2] = ACTIONS(217),
    [aux_sym_css_named_color_token3] = ACTIONS(219),
    [aux_sym_css_named_color_token4] = ACTIONS(217),
    [aux_sym_css_named_color_token5] = ACTIONS(217),
    [aux_sym_css_named_color_token6] = ACTIONS(217),
    [aux_sym_css_named_color_token7] = ACTIONS(217),
    [aux_sym_css_named_color_token8] = ACTIONS(217),
    [aux_sym_css_named_color_token9] = ACTIONS(217),
    [aux_sym_css_named_color_token10] = ACTIONS(219),
    [aux_sym_css_named_color_token11] = ACTIONS(217),
    [aux_sym_css_named_color_token12] = ACTIONS(217),
    [aux_sym_css_named_color_token13] = ACTIONS(217),
    [aux_sym_css_named_color_token14] = ACTIONS(217),
    [aux_sym_css_named_color_token15] = ACTIONS(217),
    [aux_sym_css_named_color_token16] = ACTIONS(217),
    [aux_sym_css_named_color_token17] = ACTIONS(217),
    [aux_sym_css_named_color_token18] = ACTIONS(217),
    [aux_sym_css_named_color_token19] = ACTIONS(217),
    [aux_sym_css_named_color_token20] = ACTIONS(217),
    [aux_sym_css_named_color_token21] = ACTIONS(217),
    [aux_sym_css_named_color_token22] = ACTIONS(217),
    [aux_sym_css_named_color_token23] = ACTIONS(217),
    [aux_sym_css_named_color_token24] = ACTIONS(217),
    [aux_sym_css_named_color_token25] = ACTIONS(217),
    [aux_sym_css_named_color_token26] = ACTIONS(217),
    [aux_sym_css_named_color_token27] = ACTIONS(217),
    [aux_sym_css_named_color_token28] = ACTIONS(217),
    [aux_sym_css_named_color_token29] = ACTIONS(217),
    [aux_sym_css_named_color_token30] = ACTIONS(217),
    [aux_sym_css_named_color_token31] = ACTIONS(217),
    [aux_sym_css_named_color_token32] = ACTIONS(217),
    [aux_sym_css_named_color_token33] = ACTIONS(217),
    [aux_sym_css_named_color_token34] = ACTIONS(217),
    [aux_sym_css_named_color_token35] = ACTIONS(217),
    [aux_sym_css_named_color_token36] = ACTIONS(217),
    [aux_sym_css_named_color_token37] = ACTIONS(217),
    [aux_sym_css_named_color_token38] = ACTIONS(217),
    [aux_sym_css_named_color_token39] = ACTIONS(217),
    [aux_sym_css_named_color_token40] = ACTIONS(217),
    [aux_sym_css_named_color_token41] = ACTIONS(217),
    [aux_sym_css_named_color_token42] = ACTIONS(217),
    [aux_sym_css_named_color_token43] = ACTIONS(217),
    [aux_sym_css_named_color_token44] = ACTIONS(217),
    [aux_sym_css_named_color_token45] = ACTIONS(217),
    [aux_sym_css_named_color_token46] = ACTIONS(217),
    [aux_sym_css_named_color_token47] = ACTIONS(217),
    [aux_sym_css_named_color_token48] = ACTIONS(217),
    [aux_sym_css_named_color_token49] = ACTIONS(217),
    [aux_sym_css_named_color_token50] = ACTIONS(217),
    [aux_sym_css_named_color_token51] = ACTIONS(217),
    [aux_sym_css_named_color_token52] = ACTIONS(219),
    [aux_sym_css_named_color_token53] = ACTIONS(217),
    [aux_sym_css_named_color_token54] = ACTIONS(217),
    [aux_sym_css_named_color_token55] = ACTIONS(219),
    [aux_sym_css_named_color_token56] = ACTIONS(217),
    [aux_sym_css_named_color_token57] = ACTIONS(217),
    [aux_sym_css_named_color_token58] = ACTIONS(217),
    [aux_sym_css_named_color_token59] = ACTIONS(217),
    [aux_sym_css_named_color_token60] = ACTIONS(217),
    [aux_sym_css_named_color_token61] = ACTIONS(217),
    [aux_sym_css_named_color_token62] = ACTIONS(217),
    [aux_sym_css_named_color_token63] = ACTIONS(217),
    [aux_sym_css_named_color_token64] = ACTIONS(219),
    [aux_sym_css_named_color_token65] = ACTIONS(217),
    [aux_sym_css_named_color_token66] = ACTIONS(217),
    [aux_sym_css_named_color_token67] = ACTIONS(217),
    [aux_sym_css_named_color_token68] = ACTIONS(217),
    [aux_sym_css_named_color_token69] = ACTIONS(217),
    [aux_sym_css_named_color_token70] = ACTIONS(217),
    [aux_sym_css_named_color_token71] = ACTIONS(217),
    [aux_sym_css_named_color_token72] = ACTIONS(217),
    [aux_sym_css_named_color_token73] = ACTIONS(217),
    [aux_sym_css_named_color_token74] = ACTIONS(217),
    [aux_sym_css_named_color_token75] = ACTIONS(217),
    [aux_sym_css_named_color_token76] = ACTIONS(217),
    [aux_sym_css_named_color_token77] = ACTIONS(217),
    [aux_sym_css_named_color_token78] = ACTIONS(217),
    [aux_sym_css_named_color_token79] = ACTIONS(217),
    [aux_sym_css_named_color_token80] = ACTIONS(217),
    [aux_sym_css_named_color_token81] = ACTIONS(217),
    [aux_sym_css_named_color_token82] = ACTIONS(217),
    [aux_sym_css_named_color_token83] = ACTIONS(219),
    [aux_sym_css_named_color_token84] = ACTIONS(217),
    [aux_sym_css_named_color_token85] = ACTIONS(217),
    [aux_sym_css_named_color_token86] = ACTIONS(217),
    [aux_sym_css_named_color_token87] = ACTIONS(217),
    [aux_sym_css_named_color_token88] = ACTIONS(217),
    [aux_sym_css_named_color_token89] = ACTIONS(217),
    [aux_sym_css_named_color_token90] = ACTIONS(217),
    [aux_sym_css_named_color_token91] = ACTIONS(217),
    [aux_sym_css_named_color_token92] = ACTIONS(217),
    [aux_sym_css_named_color_token93] = ACTIONS(217),
    [aux_sym_css_named_color_token94] = ACTIONS(217),
    [aux_sym_css_named_color_token95] = ACTIONS(217),
    [aux_sym_css_named_color_token96] = ACTIONS(217),
    [aux_sym_css_named_color_token97] = ACTIONS(217),
    [aux_sym_css_named_color_token98] = ACTIONS(217),
    [aux_sym_css_named_color_token99] = ACTIONS(217),
    [aux_sym_css_named_color_token100] = ACTIONS(217),
    [aux_sym_css_named_color_token101] = ACTIONS(217),
    [aux_sym_css_named_color_token102] = ACTIONS(217),
    [aux_sym_css_named_color_token103] = ACTIONS(217),
    [aux_sym_css_named_color_token104] = ACTIONS(219),
    [aux_sym_css_named_color_token105] = ACTIONS(217),
    [aux_sym_css_named_color_token106] = ACTIONS(219),
    [aux_sym_css_named_color_token107] = ACTIONS(217),
    [aux_sym_css_named_color_token108] = ACTIONS(217),
    [aux_sym_css_named_color_token109] = ACTIONS(217),
    [aux_sym_css_named_color_token110] = ACTIONS(217),
    [aux_sym_css_named_color_token111] = ACTIONS(217),
    [aux_sym_css_named_color_token112] = ACTIONS(217),
    [aux_sym_css_named_color_token113] = ACTIONS(217),
    [aux_sym_css_named_color_token114] = ACTIONS(217),
    [aux_sym_css_named_color_token115] = ACTIONS(217),
    [aux_sym_css_named_color_token116] = ACTIONS(217),
    [aux_sym_css_named_color_token117] = ACTIONS(217),
    [aux_sym_css_named_color_token118] = ACTIONS(217),
    [aux_sym_css_named_color_token119] = ACTIONS(217),
    [aux_sym_css_named_color_token120] = ACTIONS(217),
    [aux_sym_css_named_color_token121] = ACTIONS(217),
    [aux_sym_css_named_color_token122] = ACTIONS(217),
    [aux_sym_css_named_color_token123] = ACTIONS(217),
    [aux_sym_css_named_color_token124] = ACTIONS(217),
    [aux_sym_css_named_color_token125] = ACTIONS(217),
    [aux_sym_css_named_color_token126] = ACTIONS(217),
    [aux_sym_css_named_color_token127] = ACTIONS(217),
    [aux_sym_css_named_color_token128] = ACTIONS(217),
    [aux_sym_css_named_color_token129] = ACTIONS(217),
    [aux_sym_css_named_color_token130] = ACTIONS(217),
    [aux_sym_css_named_color_token131] = ACTIONS(217),
    [aux_sym_css_named_color_token132] = ACTIONS(217),
    [aux_sym_css_named_color_token133] = ACTIONS(217),
    [aux_sym_css_named_color_token134] = ACTIONS(217),
    [aux_sym_css_named_color_token135] = ACTIONS(217),
    [aux_sym_css_named_color_token136] = ACTIONS(217),
    [aux_sym_css_named_color_token137] = ACTIONS(217),
    [aux_sym_css_named_color_token138] = ACTIONS(217),
    [aux_sym_css_named_color_token139] = ACTIONS(217),
    [aux_sym_css_named_color_token140] = ACTIONS(217),
    [aux_sym_css_named_color_token141] = ACTIONS(217),
    [aux_sym_css_named_color_token142] = ACTIONS(217),
    [aux_sym_css_named_color_token143] = ACTIONS(217),
    [aux_sym_css_named_color_token144] = ACTIONS(217),
    [aux_sym_css_named_color_token145] = ACTIONS(219),
    [aux_sym_css_named_color_token146] = ACTIONS(217),
    [aux_sym_css_named_color_token147] = ACTIONS(219),
    [aux_sym_css_named_color_token148] = ACTIONS(217),
    [sym_css_keyword_transparent] = ACTIONS(217),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [aux_sym_source_file_token1] = ACTIONS(223),
    [aux_sym_source_file_token2] = ACTIONS(223),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(223),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(221),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(223),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(221),
    [aux_sym_css_function_hwb_token1] = ACTIONS(221),
    [aux_sym_css_function_lab_token1] = ACTIONS(221),
    [aux_sym_css_function_oklab_token1] = ACTIONS(221),
    [aux_sym_css_function_lch_token1] = ACTIONS(221),
    [aux_sym_css_function_oklch_token1] = ACTIONS(221),
    [aux_sym_css_function_color_token1] = ACTIONS(221),
    [sym__css_hex_color_6_digits] = ACTIONS(223),
    [sym__css_hex_color_8_digits] = ACTIONS(221),
    [sym__css_hex_color_3_digits] = ACTIONS(223),
    [sym__css_hex_color_4_digits] = ACTIONS(223),
    [aux_sym_css_named_color_token1] = ACTIONS(221),
    [aux_sym_css_named_color_token2] = ACTIONS(221),
    [aux_sym_css_named_color_token3] = ACTIONS(223),
    [aux_sym_css_named_color_token4] = ACTIONS(221),
    [aux_sym_css_named_color_token5] = ACTIONS(221),
    [aux_sym_css_named_color_token6] = ACTIONS(221),
    [aux_sym_css_named_color_token7] = ACTIONS(221),
    [aux_sym_css_named_color_token8] = ACTIONS(221),
    [aux_sym_css_named_color_token9] = ACTIONS(221),
    [aux_sym_css_named_color_token10] = ACTIONS(223),
    [aux_sym_css_named_color_token11] = ACTIONS(221),
    [aux_sym_css_named_color_token12] = ACTIONS(221),
    [aux_sym_css_named_color_token13] = ACTIONS(221),
    [aux_sym_css_named_color_token14] = ACTIONS(221),
    [aux_sym_css_named_color_token15] = ACTIONS(221),
    [aux_sym_css_named_color_token16] = ACTIONS(221),
    [aux_sym_css_named_color_token17] = ACTIONS(221),
    [aux_sym_css_named_color_token18] = ACTIONS(221),
    [aux_sym_css_named_color_token19] = ACTIONS(221),
    [aux_sym_css_named_color_token20] = ACTIONS(221),
    [aux_sym_css_named_color_token21] = ACTIONS(221),
    [aux_sym_css_named_color_token22] = ACTIONS(221),
    [aux_sym_css_named_color_token23] = ACTIONS(221),
    [aux_sym_css_named_color_token24] = ACTIONS(221),
    [aux_sym_css_named_color_token25] = ACTIONS(221),
    [aux_sym_css_named_color_token26] = ACTIONS(221),
    [aux_sym_css_named_color_token27] = ACTIONS(221),
    [aux_sym_css_named_color_token28] = ACTIONS(221),
    [aux_sym_css_named_color_token29] = ACTIONS(221),
    [aux_sym_css_named_color_token30] = ACTIONS(221),
    [aux_sym_css_named_color_token31] = ACTIONS(221),
    [aux_sym_css_named_color_token32] = ACTIONS(221),
    [aux_sym_css_named_color_token33] = ACTIONS(221),
    [aux_sym_css_named_color_token34] = ACTIONS(221),
    [aux_sym_css_named_color_token35] = ACTIONS(221),
    [aux_sym_css_named_color_token36] = ACTIONS(221),
    [aux_sym_css_named_color_token37] = ACTIONS(221),
    [aux_sym_css_named_color_token38] = ACTIONS(221),
    [aux_sym_css_named_color_token39] = ACTIONS(221),
    [aux_sym_css_named_color_token40] = ACTIONS(221),
    [aux_sym_css_named_color_token41] = ACTIONS(221),
    [aux_sym_css_named_color_token42] = ACTIONS(221),
    [aux_sym_css_named_color_token43] = ACTIONS(221),
    [aux_sym_css_named_color_token44] = ACTIONS(221),
    [aux_sym_css_named_color_token45] = ACTIONS(221),
    [aux_sym_css_named_color_token46] = ACTIONS(221),
    [aux_sym_css_named_color_token47] = ACTIONS(221),
    [aux_sym_css_named_color_token48] = ACTIONS(221),
    [aux_sym_css_named_color_token49] = ACTIONS(221),
    [aux_sym_css_named_color_token50] = ACTIONS(221),
    [aux_sym_css_named_color_token51] = ACTIONS(221),
    [aux_sym_css_named_color_token52] = ACTIONS(223),
    [aux_sym_css_named_color_token53] = ACTIONS(221),
    [aux_sym_css_named_color_token54] = ACTIONS(221),
    [aux_sym_css_named_color_token55] = ACTIONS(223),
    [aux_sym_css_named_color_token56] = ACTIONS(221),
    [aux_sym_css_named_color_token57] = ACTIONS(221),
    [aux_sym_css_named_color_token58] = ACTIONS(221),
    [aux_sym_css_named_color_token59] = ACTIONS(221),
    [aux_sym_css_named_color_token60] = ACTIONS(221),
    [aux_sym_css_named_color_token61] = ACTIONS(221),
    [aux_sym_css_named_color_token62] = ACTIONS(221),
    [aux_sym_css_named_color_token63] = ACTIONS(221),
    [aux_sym_css_named_color_token64] = ACTIONS(223),
    [aux_sym_css_named_color_token65] = ACTIONS(221),
    [aux_sym_css_named_color_token66] = ACTIONS(221),
    [aux_sym_css_named_color_token67] = ACTIONS(221),
    [aux_sym_css_named_color_token68] = ACTIONS(221),
    [aux_sym_css_named_color_token69] = ACTIONS(221),
    [aux_sym_css_named_color_token70] = ACTIONS(221),
    [aux_sym_css_named_color_token71] = ACTIONS(221),
    [aux_sym_css_named_color_token72] = ACTIONS(221),
    [aux_sym_css_named_color_token73] = ACTIONS(221),
    [aux_sym_css_named_color_token74] = ACTIONS(221),
    [aux_sym_css_named_color_token75] = ACTIONS(221),
    [aux_sym_css_named_color_token76] = ACTIONS(221),
    [aux_sym_css_named_color_token77] = ACTIONS(221),
    [aux_sym_css_named_color_token78] = ACTIONS(221),
    [aux_sym_css_named_color_token79] = ACTIONS(221),
    [aux_sym_css_named_color_token80] = ACTIONS(221),
    [aux_sym_css_named_color_token81] = ACTIONS(221),
    [aux_sym_css_named_color_token82] = ACTIONS(221),
    [aux_sym_css_named_color_token83] = ACTIONS(223),
    [aux_sym_css_named_color_token84] = ACTIONS(221),
    [aux_sym_css_named_color_token85] = ACTIONS(221),
    [aux_sym_css_named_color_token86] = ACTIONS(221),
    [aux_sym_css_named_color_token87] = ACTIONS(221),
    [aux_sym_css_named_color_token88] = ACTIONS(221),
    [aux_sym_css_named_color_token89] = ACTIONS(221),
    [aux_sym_css_named_color_token90] = ACTIONS(221),
    [aux_sym_css_named_color_token91] = ACTIONS(221),
    [aux_sym_css_named_color_token92] = ACTIONS(221),
    [aux_sym_css_named_color_token93] = ACTIONS(221),
    [aux_sym_css_named_color_token94] = ACTIONS(221),
    [aux_sym_css_named_color_token95] = ACTIONS(221),
    [aux_sym_css_named_color_token96] = ACTIONS(221),
    [aux_sym_css_named_color_token97] = ACTIONS(221),
    [aux_sym_css_named_color_token98] = ACTIONS(221),
    [aux_sym_css_named_color_token99] = ACTIONS(221),
    [aux_sym_css_named_color_token100] = ACTIONS(221),
    [aux_sym_css_named_color_token101] = ACTIONS(221),
    [aux_sym_css_named_color_token102] = ACTIONS(221),
    [aux_sym_css_named_color_token103] = ACTIONS(221),
    [aux_sym_css_named_color_token104] = ACTIONS(223),
    [aux_sym_css_named_color_token105] = ACTIONS(221),
    [aux_sym_css_named_color_token106] = ACTIONS(223),
    [aux_sym_css_named_color_token107] = ACTIONS(221),
    [aux_sym_css_named_color_token108] = ACTIONS(221),
    [aux_sym_css_named_color_token109] = ACTIONS(221),
    [aux_sym_css_named_color_token110] = ACTIONS(221),
    [aux_sym_css_named_color_token111] = ACTIONS(221),
    [aux_sym_css_named_color_token112] = ACTIONS(221),
    [aux_sym_css_named_color_token113] = ACTIONS(221),
    [aux_sym_css_named_color_token114] = ACTIONS(221),
    [aux_sym_css_named_color_token115] = ACTIONS(221),
    [aux_sym_css_named_color_token116] = ACTIONS(221),
    [aux_sym_css_named_color_token117] = ACTIONS(221),
    [aux_sym_css_named_color_token118] = ACTIONS(221),
    [aux_sym_css_named_color_token119] = ACTIONS(221),
    [aux_sym_css_named_color_token120] = ACTIONS(221),
    [aux_sym_css_named_color_token121] = ACTIONS(221),
    [aux_sym_css_named_color_token122] = ACTIONS(221),
    [aux_sym_css_named_color_token123] = ACTIONS(221),
    [aux_sym_css_named_color_token124] = ACTIONS(221),
    [aux_sym_css_named_color_token125] = ACTIONS(221),
    [aux_sym_css_named_color_token126] = ACTIONS(221),
    [aux_sym_css_named_color_token127] = ACTIONS(221),
    [aux_sym_css_named_color_token128] = ACTIONS(221),
    [aux_sym_css_named_color_token129] = ACTIONS(221),
    [aux_sym_css_named_color_token130] = ACTIONS(221),
    [aux_sym_css_named_color_token131] = ACTIONS(221),
    [aux_sym_css_named_color_token132] = ACTIONS(221),
    [aux_sym_css_named_color_token133] = ACTIONS(221),
    [aux_sym_css_named_color_token134] = ACTIONS(221),
    [aux_sym_css_named_color_token135] = ACTIONS(221),
    [aux_sym_css_named_color_token136] = ACTIONS(221),
    [aux_sym_css_named_color_token137] = ACTIONS(221),
    [aux_sym_css_named_color_token138] = ACTIONS(221),
    [aux_sym_css_named_color_token139] = ACTIONS(221),
    [aux_sym_css_named_color_token140] = ACTIONS(221),
    [aux_sym_css_named_color_token141] = ACTIONS(221),
    [aux_sym_css_named_color_token142] = ACTIONS(221),
    [aux_sym_css_named_color_token143] = ACTIONS(221),
    [aux_sym_css_named_color_token144] = ACTIONS(221),
    [aux_sym_css_named_color_token145] = ACTIONS(223),
    [aux_sym_css_named_color_token146] = ACTIONS(221),
    [aux_sym_css_named_color_token147] = ACTIONS(223),
    [aux_sym_css_named_color_token148] = ACTIONS(221),
    [sym_css_keyword_transparent] = ACTIONS(221),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [aux_sym_source_file_token1] = ACTIONS(227),
    [aux_sym_source_file_token2] = ACTIONS(227),
    [aux_sym__css_function_rgb_legacy_token1] = ACTIONS(227),
    [aux_sym__css_function_rgba_legacy_token1] = ACTIONS(225),
    [aux_sym__css_function_hsl_legacy_token1] = ACTIONS(227),
    [aux_sym__css_function_hsla_legacy_token1] = ACTIONS(225),
    [aux_sym_css_function_hwb_token1] = ACTIONS(225),
    [aux_sym_css_function_lab_token1] = ACTIONS(225),
    [aux_sym_css_function_oklab_token1] = ACTIONS(225),
    [aux_sym_css_function_lch_token1] = ACTIONS(225),
    [aux_sym_css_function_oklch_token1] = ACTIONS(225),
    [aux_sym_css_function_color_token1] = ACTIONS(225),
    [sym__css_hex_color_6_digits] = ACTIONS(227),
    [sym__css_hex_color_8_digits] = ACTIONS(225),
    [sym__css_hex_color_3_digits] = ACTIONS(227),
    [sym__css_hex_color_4_digits] = ACTIONS(227),
    [aux_sym_css_named_color_token1] = ACTIONS(225),
    [aux_sym_css_named_color_token2] = ACTIONS(225),
    [aux_sym_css_named_color_token3] = ACTIONS(227),
    [aux_sym_css_named_color_token4] = ACTIONS(225),
    [aux_sym_css_named_color_token5] = ACTIONS(225),
    [aux_sym_css_named_color_token6] = ACTIONS(225),
    [aux_sym_css_named_color_token7] = ACTIONS(225),
    [aux_sym_css_named_color_token8] = ACTIONS(225),
    [aux_sym_css_named_color_token9] = ACTIONS(225),
    [aux_sym_css_named_color_token10] = ACTIONS(227),
    [aux_sym_css_named_color_token11] = ACTIONS(225),
    [aux_sym_css_named_color_token12] = ACTIONS(225),
    [aux_sym_css_named_color_token13] = ACTIONS(225),
    [aux_sym_css_named_color_token14] = ACTIONS(225),
    [aux_sym_css_named_color_token15] = ACTIONS(225),
    [aux_sym_css_named_color_token16] = ACTIONS(225),
    [aux_sym_css_named_color_token17] = ACTIONS(225),
    [aux_sym_css_named_color_token18] = ACTIONS(225),
    [aux_sym_css_named_color_token19] = ACTIONS(225),
    [aux_sym_css_named_color_token20] = ACTIONS(225),
    [aux_sym_css_named_color_token21] = ACTIONS(225),
    [aux_sym_css_named_color_token22] = ACTIONS(225),
    [aux_sym_css_named_color_token23] = ACTIONS(225),
    [aux_sym_css_named_color_token24] = ACTIONS(225),
    [aux_sym_css_named_color_token25] = ACTIONS(225),
    [aux_sym_css_named_color_token26] = ACTIONS(225),
    [aux_sym_css_named_color_token27] = ACTIONS(225),
    [aux_sym_css_named_color_token28] = ACTIONS(225),
    [aux_sym_css_named_color_token29] = ACTIONS(225),
    [aux_sym_css_named_color_token30] = ACTIONS(225),
    [aux_sym_css_named_color_token31] = ACTIONS(225),
    [aux_sym_css_named_color_token32] = ACTIONS(225),
    [aux_sym_css_named_color_token33] = ACTIONS(225),
    [aux_sym_css_named_color_token34] = ACTIONS(225),
    [aux_sym_css_named_color_token35] = ACTIONS(225),
    [aux_sym_css_named_color_token36] = ACTIONS(225),
    [aux_sym_css_named_color_token37] = ACTIONS(225),
    [aux_sym_css_named_color_token38] = ACTIONS(225),
    [aux_sym_css_named_color_token39] = ACTIONS(225),
    [aux_sym_css_named_color_token40] = ACTIONS(225),
    [aux_sym_css_named_color_token41] = ACTIONS(225),
    [aux_sym_css_named_color_token42] = ACTIONS(225),
    [aux_sym_css_named_color_token43] = ACTIONS(225),
    [aux_sym_css_named_color_token44] = ACTIONS(225),
    [aux_sym_css_named_color_token45] = ACTIONS(225),
    [aux_sym_css_named_color_token46] = ACTIONS(225),
    [aux_sym_css_named_color_token47] = ACTIONS(225),
    [aux_sym_css_named_color_token48] = ACTIONS(225),
    [aux_sym_css_named_color_token49] = ACTIONS(225),
    [aux_sym_css_named_color_token50] = ACTIONS(225),
    [aux_sym_css_named_color_token51] = ACTIONS(225),
    [aux_sym_css_named_color_token52] = ACTIONS(227),
    [aux_sym_css_named_color_token53] = ACTIONS(225),
    [aux_sym_css_named_color_token54] = ACTIONS(225),
    [aux_sym_css_named_color_token55] = ACTIONS(227),
    [aux_sym_css_named_color_token56] = ACTIONS(225),
    [aux_sym_css_named_color_token57] = ACTIONS(225),
    [aux_sym_css_named_color_token58] = ACTIONS(225),
    [aux_sym_css_named_color_token59] = ACTIONS(225),
    [aux_sym_css_named_color_token60] = ACTIONS(225),
    [aux_sym_css_named_color_token61] = ACTIONS(225),
    [aux_sym_css_named_color_token62] = ACTIONS(225),
    [aux_sym_css_named_color_token63] = ACTIONS(225),
    [aux_sym_css_named_color_token64] = ACTIONS(227),
    [aux_sym_css_named_color_token65] = ACTIONS(225),
    [aux_sym_css_named_color_token66] = ACTIONS(225),
    [aux_sym_css_named_color_token67] = ACTIONS(225),
    [aux_sym_css_named_color_token68] = ACTIONS(225),
    [aux_sym_css_named_color_token69] = ACTIONS(225),
    [aux_sym_css_named_color_token70] = ACTIONS(225),
    [aux_sym_css_named_color_token71] = ACTIONS(225),
    [aux_sym_css_named_color_token72] = ACTIONS(225),
    [aux_sym_css_named_color_token73] = ACTIONS(225),
    [aux_sym_css_named_color_token74] = ACTIONS(225),
    [aux_sym_css_named_color_token75] = ACTIONS(225),
    [aux_sym_css_named_color_token76] = ACTIONS(225),
    [aux_sym_css_named_color_token77] = ACTIONS(225),
    [aux_sym_css_named_color_token78] = ACTIONS(225),
    [aux_sym_css_named_color_token79] = ACTIONS(225),
    [aux_sym_css_named_color_token80] = ACTIONS(225),
    [aux_sym_css_named_color_token81] = ACTIONS(225),
    [aux_sym_css_named_color_token82] = ACTIONS(225),
    [aux_sym_css_named_color_token83] = ACTIONS(227),
    [aux_sym_css_named_color_token84] = ACTIONS(225),
    [aux_sym_css_named_color_token85] = ACTIONS(225),
    [aux_sym_css_named_color_token86] = ACTIONS(225),
    [aux_sym_css_named_color_token87] = ACTIONS(225),
    [aux_sym_css_named_color_token88] = ACTIONS(225),
    [aux_sym_css_named_color_token89] = ACTIONS(225),
    [aux_sym_css_named_color_token90] = ACTIONS(225),
    [aux_sym_css_named_color_token91] = ACTIONS(225),
    [aux_sym_css_named_color_token92] = ACTIONS(225),
    [aux_sym_css_named_color_token93] = ACTIONS(225),
    [aux_sym_css_named_color_token94] = ACTIONS(225),
    [aux_sym_css_named_color_token95] = ACTIONS(225),
    [aux_sym_css_named_color_token96] = ACTIONS(225),
    [aux_sym_css_named_color_token97] = ACTIONS(225),
    [aux_sym_css_named_color_token98] = ACTIONS(225),
    [aux_sym_css_named_color_token99] = ACTIONS(225),
    [aux_sym_css_named_color_token100] = ACTIONS(225),
    [aux_sym_css_named_color_token101] = ACTIONS(225),
    [aux_sym_css_named_color_token102] = ACTIONS(225),
    [aux_sym_css_named_color_token103] = ACTIONS(225),
    [aux_sym_css_named_color_token104] = ACTIONS(227),
    [aux_sym_css_named_color_token105] = ACTIONS(225),
    [aux_sym_css_named_color_token106] = ACTIONS(227),
    [aux_sym_css_named_color_token107] = ACTIONS(225),
    [aux_sym_css_named_color_token108] = ACTIONS(225),
    [aux_sym_css_named_color_token109] = ACTIONS(225),
    [aux_sym_css_named_color_token110] = ACTIONS(225),
    [aux_sym_css_named_color_token111] = ACTIONS(225),
    [aux_sym_css_named_color_token112] = ACTIONS(225),
    [aux_sym_css_named_color_token113] = ACTIONS(225),
    [aux_sym_css_named_color_token114] = ACTIONS(225),
    [aux_sym_css_named_color_token115] = ACTIONS(225),
    [aux_sym_css_named_color_token116] = ACTIONS(225),
    [aux_sym_css_named_color_token117] = ACTIONS(225),
    [aux_sym_css_named_color_token118] = ACTIONS(225),
    [aux_sym_css_named_color_token119] = ACTIONS(225),
    [aux_sym_css_named_color_token120] = ACTIONS(225),
    [aux_sym_css_named_color_token121] = ACTIONS(225),
    [aux_sym_css_named_color_token122] = ACTIONS(225),
    [aux_sym_css_named_color_token123] = ACTIONS(225),
    [aux_sym_css_named_color_token124] = ACTIONS(225),
    [aux_sym_css_named_color_token125] = ACTIONS(225),
    [aux_sym_css_named_color_token126] = ACTIONS(225),
    [aux_sym_css_named_color_token127] = ACTIONS(225),
    [aux_sym_css_named_color_token128] = ACTIONS(225),
    [aux_sym_css_named_color_token129] = ACTIONS(225),
    [aux_sym_css_named_color_token130] = ACTIONS(225),
    [aux_sym_css_named_color_token131] = ACTIONS(225),
    [aux_sym_css_named_color_token132] = ACTIONS(225),
    [aux_sym_css_named_color_token133] = ACTIONS(225),
    [aux_sym_css_named_color_token134] = ACTIONS(225),
    [aux_sym_css_named_color_token135] = ACTIONS(225),
    [aux_sym_css_named_color_token136] = ACTIONS(225),
    [aux_sym_css_named_color_token137] = ACTIONS(225),
    [aux_sym_css_named_color_token138] = ACTIONS(225),
    [aux_sym_css_named_color_token139] = ACTIONS(225),
    [aux_sym_css_named_color_token140] = ACTIONS(225),
    [aux_sym_css_named_color_token141] = ACTIONS(225),
    [aux_sym_css_named_color_token142] = ACTIONS(225),
    [aux_sym_css_named_color_token143] = ACTIONS(225),
    [aux_sym_css_named_color_token144] = ACTIONS(225),
    [aux_sym_css_named_color_token145] = ACTIONS(227),
    [aux_sym_css_named_color_token146] = ACTIONS(225),
    [aux_sym_css_named_color_token147] = ACTIONS(227),
    [aux_sym_css_named_color_token148] = ACTIONS(225),
    [sym_css_keyword_transparent] = ACTIONS(225),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(229), 1,
      aux_sym_css_predefined_rgb_token1,
    ACTIONS(233), 1,
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
    ACTIONS(235), 2,
      aux_sym_css_xyz_space_token2,
      aux_sym_css_xyz_space_token3,
    ACTIONS(231), 5,
      aux_sym_css_predefined_rgb_token2,
      aux_sym_css_predefined_rgb_token3,
      aux_sym_css_predefined_rgb_token4,
      aux_sym_css_predefined_rgb_token5,
      aux_sym_css_predefined_rgb_token6,
  [33] = 2,
    ACTIONS(237), 1,
      sym__css_number,
    ACTIONS(239), 6,
      sym__css_percentage,
      sym__css_angle,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [45] = 2,
    ACTIONS(241), 1,
      sym__css_number,
    ACTIONS(243), 6,
      sym__css_percentage,
      sym__css_angle,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [57] = 5,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      sym_css_keyword_none,
    STATE(68), 2,
      sym_css_number,
      sym_css_percentage,
  [74] = 5,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      sym_css_keyword_none,
    STATE(64), 2,
      sym_css_number,
      sym_css_percentage,
  [91] = 5,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(255), 1,
      sym_css_keyword_none,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    STATE(64), 2,
      sym_css_number,
      sym_css_percentage,
  [108] = 5,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      sym_css_keyword_none,
    STATE(65), 2,
      sym_css_number,
      sym_css_percentage,
  [125] = 5,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(261), 1,
      sym_css_keyword_none,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    STATE(65), 2,
      sym_css_number,
      sym_css_percentage,
  [142] = 2,
    ACTIONS(265), 1,
      sym__css_number,
    ACTIONS(267), 5,
      sym__css_percentage,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [153] = 5,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      sym_css_keyword_none,
    STATE(67), 2,
      sym_css_number,
      sym_css_percentage,
  [170] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(273), 1,
      sym_css_keyword_none,
    STATE(79), 2,
      sym_css_number,
      sym_css_percentage,
  [184] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(275), 1,
      sym_css_keyword_none,
    STATE(76), 2,
      sym_css_number,
      sym_css_percentage,
  [198] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(277), 1,
      sym_css_keyword_none,
    STATE(57), 2,
      sym_css_number,
      sym_css_percentage,
  [212] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(279), 1,
      sym_css_keyword_none,
    STATE(105), 2,
      sym_css_number,
      sym_css_percentage,
  [226] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(281), 1,
      sym_css_keyword_none,
    STATE(102), 2,
      sym_css_number,
      sym_css_percentage,
  [240] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(283), 1,
      sym_css_keyword_none,
    STATE(78), 2,
      sym_css_number,
      sym_css_percentage,
  [254] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(285), 1,
      sym_css_keyword_none,
    STATE(87), 2,
      sym_css_number,
      sym_css_percentage,
  [268] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(287), 1,
      sym_css_keyword_none,
    STATE(80), 2,
      sym_css_number,
      sym_css_percentage,
  [282] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(289), 1,
      sym_css_keyword_none,
    STATE(59), 2,
      sym_css_number,
      sym_css_percentage,
  [296] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(291), 1,
      sym_css_keyword_none,
    STATE(55), 2,
      sym_css_number,
      sym_css_percentage,
  [310] = 5,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(293), 1,
      sym_css_keyword_none,
    STATE(47), 1,
      sym_css_number,
    STATE(48), 1,
      sym_css_percentage,
  [326] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(295), 1,
      sym_css_keyword_none,
    STATE(104), 2,
      sym_css_number,
      sym_css_percentage,
  [340] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(297), 1,
      sym_css_keyword_none,
    STATE(111), 2,
      sym_css_number,
      sym_css_percentage,
  [354] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(255), 1,
      sym_css_keyword_none,
    STATE(64), 2,
      sym_css_number,
      sym_css_percentage,
  [368] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(299), 1,
      sym_css_keyword_none,
    STATE(113), 2,
      sym_css_number,
      sym_css_percentage,
  [382] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(301), 1,
      sym_css_keyword_none,
    STATE(114), 2,
      sym_css_number,
      sym_css_percentage,
  [396] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(261), 1,
      sym_css_keyword_none,
    STATE(65), 2,
      sym_css_number,
      sym_css_percentage,
  [410] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(303), 1,
      sym_css_keyword_none,
    STATE(117), 2,
      sym_css_number,
      sym_css_percentage,
  [424] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(305), 1,
      sym_css_keyword_none,
    STATE(119), 2,
      sym_css_number,
      sym_css_percentage,
  [438] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(307), 1,
      sym_css_keyword_none,
    STATE(120), 2,
      sym_css_number,
      sym_css_percentage,
  [452] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(271), 1,
      sym_css_keyword_none,
    STATE(67), 2,
      sym_css_number,
      sym_css_percentage,
  [466] = 5,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(309), 1,
      sym_css_keyword_none,
    STATE(49), 1,
      sym_css_number,
    STATE(50), 1,
      sym_css_percentage,
  [482] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(251), 1,
      sym_css_keyword_none,
    STATE(68), 2,
      sym_css_number,
      sym_css_percentage,
  [496] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(311), 1,
      sym_css_keyword_none,
    STATE(56), 2,
      sym_css_number,
      sym_css_percentage,
  [510] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(313), 1,
      sym_css_keyword_none,
    STATE(70), 2,
      sym_css_number,
      sym_css_percentage,
  [524] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(315), 1,
      sym_css_keyword_none,
    STATE(71), 2,
      sym_css_number,
      sym_css_percentage,
  [538] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(317), 1,
      sym_css_keyword_none,
    STATE(72), 2,
      sym_css_number,
      sym_css_percentage,
  [552] = 4,
    ACTIONS(245), 1,
      sym__css_number,
    ACTIONS(247), 1,
      sym__css_percentage,
    ACTIONS(319), 1,
      sym_css_keyword_none,
    STATE(86), 2,
      sym_css_number,
      sym_css_percentage,
  [566] = 4,
    ACTIONS(321), 1,
      sym__css_number,
    ACTIONS(323), 1,
      sym__css_percentage,
    ACTIONS(325), 1,
      sym_css_keyword_none,
    STATE(135), 1,
      sym_css_alpha_value,
  [579] = 4,
    ACTIONS(327), 1,
      sym__css_number,
    ACTIONS(329), 1,
      sym__css_angle,
    ACTIONS(331), 1,
      sym_css_keyword_none,
    STATE(77), 1,
      sym_css_hue,
  [592] = 4,
    ACTIONS(321), 1,
      sym__css_number,
    ACTIONS(323), 1,
      sym__css_percentage,
    ACTIONS(333), 1,
      sym_css_keyword_none,
    STATE(161), 1,
      sym_css_alpha_value,
  [605] = 4,
    ACTIONS(321), 1,
      sym__css_number,
    ACTIONS(323), 1,
      sym__css_percentage,
    ACTIONS(335), 1,
      sym_css_keyword_none,
    STATE(163), 1,
      sym_css_alpha_value,
  [618] = 4,
    ACTIONS(321), 1,
      sym__css_number,
    ACTIONS(323), 1,
      sym__css_percentage,
    ACTIONS(337), 1,
      sym_css_keyword_none,
    STATE(133), 1,
      sym_css_alpha_value,
  [631] = 4,
    ACTIONS(327), 1,
      sym__css_number,
    ACTIONS(329), 1,
      sym__css_angle,
    ACTIONS(339), 1,
      sym_css_keyword_none,
    STATE(122), 1,
      sym_css_hue,
  [644] = 4,
    ACTIONS(327), 1,
      sym__css_number,
    ACTIONS(329), 1,
      sym__css_angle,
    ACTIONS(341), 1,
      sym_css_keyword_none,
    STATE(123), 1,
      sym_css_hue,
  [657] = 4,
    ACTIONS(321), 1,
      sym__css_number,
    ACTIONS(323), 1,
      sym__css_percentage,
    ACTIONS(343), 1,
      sym_css_keyword_none,
    STATE(136), 1,
      sym_css_alpha_value,
  [670] = 4,
    ACTIONS(321), 1,
      sym__css_number,
    ACTIONS(323), 1,
      sym__css_percentage,
    ACTIONS(345), 1,
      sym_css_keyword_none,
    STATE(137), 1,
      sym_css_alpha_value,
  [683] = 4,
    ACTIONS(321), 1,
      sym__css_number,
    ACTIONS(323), 1,
      sym__css_percentage,
    ACTIONS(347), 1,
      sym_css_keyword_none,
    STATE(143), 1,
      sym_css_alpha_value,
  [696] = 4,
    ACTIONS(321), 1,
      sym__css_number,
    ACTIONS(323), 1,
      sym__css_percentage,
    ACTIONS(349), 1,
      sym_css_keyword_none,
    STATE(138), 1,
      sym_css_alpha_value,
  [709] = 4,
    ACTIONS(321), 1,
      sym__css_number,
    ACTIONS(323), 1,
      sym__css_percentage,
    ACTIONS(351), 1,
      sym_css_keyword_none,
    STATE(139), 1,
      sym_css_alpha_value,
  [722] = 4,
    ACTIONS(321), 1,
      sym__css_number,
    ACTIONS(323), 1,
      sym__css_percentage,
    ACTIONS(353), 1,
      sym_css_keyword_none,
    STATE(155), 1,
      sym_css_alpha_value,
  [735] = 4,
    ACTIONS(327), 1,
      sym__css_number,
    ACTIONS(329), 1,
      sym__css_angle,
    ACTIONS(355), 1,
      sym_css_keyword_none,
    STATE(46), 1,
      sym_css_hue,
  [748] = 4,
    ACTIONS(327), 1,
      sym__css_number,
    ACTIONS(329), 1,
      sym__css_angle,
    ACTIONS(357), 1,
      sym_css_keyword_none,
    STATE(52), 1,
      sym_css_hue,
  [761] = 3,
    ACTIONS(321), 1,
      sym__css_number,
    ACTIONS(323), 1,
      sym__css_percentage,
    STATE(158), 1,
      sym_css_alpha_value,
  [771] = 3,
    ACTIONS(321), 1,
      sym__css_number,
    ACTIONS(323), 1,
      sym__css_percentage,
    STATE(159), 1,
      sym_css_alpha_value,
  [781] = 3,
    ACTIONS(321), 1,
      sym__css_number,
    ACTIONS(323), 1,
      sym__css_percentage,
    STATE(160), 1,
      sym_css_alpha_value,
  [791] = 3,
    ACTIONS(321), 1,
      sym__css_number,
    ACTIONS(323), 1,
      sym__css_percentage,
    STATE(157), 1,
      sym_css_alpha_value,
  [801] = 2,
    ACTIONS(359), 1,
      sym__css_number,
    ACTIONS(361), 2,
      sym__css_percentage,
      sym_css_keyword_none,
  [809] = 2,
    ACTIONS(363), 1,
      sym__css_number,
    ACTIONS(365), 2,
      sym__css_percentage,
      sym_css_keyword_none,
  [817] = 1,
    ACTIONS(367), 2,
      anon_sym_RPAREN,
      anon_sym_SLASH,
  [822] = 2,
    ACTIONS(247), 1,
      sym__css_percentage,
    STATE(147), 1,
      sym_css_percentage,
  [829] = 2,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 1,
      anon_sym_SLASH,
  [836] = 1,
    ACTIONS(373), 2,
      anon_sym_RPAREN,
      anon_sym_SLASH,
  [841] = 1,
    ACTIONS(375), 2,
      anon_sym_RPAREN,
      anon_sym_SLASH,
  [846] = 2,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
  [853] = 2,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
  [860] = 2,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
  [867] = 2,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
  [874] = 2,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 1,
      anon_sym_SLASH,
  [881] = 2,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    ACTIONS(399), 1,
      anon_sym_SLASH,
  [888] = 2,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    ACTIONS(403), 1,
      anon_sym_SLASH,
  [895] = 2,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    ACTIONS(407), 1,
      anon_sym_SLASH,
  [902] = 2,
    ACTIONS(409), 1,
      sym__css_number,
    STATE(108), 1,
      sym_css_number,
  [909] = 2,
    ACTIONS(247), 1,
      sym__css_percentage,
    STATE(109), 1,
      sym_css_percentage,
  [916] = 2,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      anon_sym_SLASH,
  [923] = 2,
    ACTIONS(409), 1,
      sym__css_number,
    STATE(146), 1,
      sym_css_number,
  [930] = 2,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    ACTIONS(417), 1,
      anon_sym_SLASH,
  [937] = 2,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    ACTIONS(421), 1,
      anon_sym_SLASH,
  [944] = 2,
    ACTIONS(247), 1,
      sym__css_percentage,
    STATE(150), 1,
      sym_css_percentage,
  [951] = 2,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    ACTIONS(425), 1,
      anon_sym_SLASH,
  [958] = 2,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 1,
      anon_sym_SLASH,
  [965] = 2,
    ACTIONS(247), 1,
      sym__css_percentage,
    STATE(132), 1,
      sym_css_percentage,
  [972] = 1,
    ACTIONS(431), 2,
      anon_sym_RPAREN,
      anon_sym_SLASH,
  [977] = 2,
    ACTIONS(247), 1,
      sym__css_percentage,
    STATE(108), 1,
      sym_css_percentage,
  [984] = 2,
    ACTIONS(247), 1,
      sym__css_percentage,
    STATE(110), 1,
      sym_css_percentage,
  [991] = 2,
    ACTIONS(409), 1,
      sym__css_number,
    STATE(107), 1,
      sym_css_number,
  [998] = 2,
    ACTIONS(247), 1,
      sym__css_percentage,
    STATE(107), 1,
      sym_css_percentage,
  [1005] = 2,
    ACTIONS(247), 1,
      sym__css_percentage,
    STATE(152), 1,
      sym_css_percentage,
  [1012] = 2,
    ACTIONS(409), 1,
      sym__css_number,
    STATE(149), 1,
      sym_css_number,
  [1019] = 1,
    ACTIONS(433), 1,
      anon_sym_COMMA,
  [1023] = 1,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
  [1027] = 1,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
  [1031] = 1,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
  [1035] = 1,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
  [1039] = 1,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
  [1043] = 1,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
  [1047] = 1,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
  [1051] = 1,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
  [1055] = 1,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
  [1059] = 1,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
  [1063] = 1,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [1067] = 1,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
  [1071] = 1,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
  [1075] = 1,
    ACTIONS(461), 1,
      anon_sym_COMMA,
  [1079] = 1,
    ACTIONS(463), 1,
      anon_sym_COMMA,
  [1083] = 1,
    ACTIONS(465), 1,
      ts_builtin_sym_end,
  [1087] = 1,
    ACTIONS(467), 1,
      anon_sym_COMMA,
  [1091] = 1,
    ACTIONS(469), 1,
      anon_sym_COMMA,
  [1095] = 1,
    ACTIONS(471), 1,
      anon_sym_LPAREN,
  [1099] = 1,
    ACTIONS(473), 1,
      anon_sym_COMMA,
  [1103] = 1,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
  [1107] = 1,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
  [1111] = 1,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
  [1115] = 1,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
  [1119] = 1,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
  [1123] = 1,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
  [1127] = 1,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [1131] = 1,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
  [1135] = 1,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
  [1139] = 1,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
  [1143] = 1,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
  [1147] = 1,
    ACTIONS(497), 1,
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
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(151),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(154),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl, 1, 0, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl, 1, 0, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba, 1, 0, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba, 1, 0, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla, 1, 0, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla, 1, 0, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb, 1, 0, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb, 1, 0, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_color, 4, 0, 5),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_color, 4, 0, 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgb_modern, 6, 0, 6),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgb_modern, 6, 0, 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgba_modern, 6, 0, 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgba_modern, 6, 0, 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsl_modern, 6, 0, 7),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsl_modern, 6, 0, 7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsla_modern, 6, 0, 7),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsla_modern, 6, 0, 7),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hwb, 6, 0, 8),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hwb, 6, 0, 8),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_lab, 6, 0, 9),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_lab, 6, 0, 9),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_oklab, 6, 0, 9),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_oklab, 6, 0, 9),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_lch, 6, 0, 10),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_lch, 6, 0, 10),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_oklch, 6, 0, 10),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_oklch, 6, 0, 10),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_color, 6, 0, 11),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_color, 6, 0, 11),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgb_modern, 8, 0, 14),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgb_modern, 8, 0, 14),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgb_legacy, 8, 0, 15),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgb_legacy, 8, 0, 15),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgba_modern, 8, 0, 14),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgba_modern, 8, 0, 14),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgba_legacy, 8, 0, 15),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgba_legacy, 8, 0, 15),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsl_modern, 8, 0, 16),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsl_modern, 8, 0, 16),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsl_legacy, 8, 0, 17),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsl_legacy, 8, 0, 17),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsla_modern, 8, 0, 16),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsla_modern, 8, 0, 16),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsla_legacy, 8, 0, 17),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsla_legacy, 8, 0, 17),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hwb, 8, 0, 18),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hwb, 8, 0, 18),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_lab, 8, 0, 19),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_lab, 8, 0, 19),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_oklab, 8, 0, 19),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_oklab, 8, 0, 19),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_lch, 8, 0, 20),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_lch, 8, 0, 20),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_oklch, 8, 0, 20),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_oklch, 8, 0, 20),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgb_legacy, 10, 0, 21),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgb_legacy, 10, 0, 21),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_rgba_legacy, 10, 0, 21),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_rgba_legacy, 10, 0, 21),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsl_legacy, 10, 0, 22),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsl_legacy, 10, 0, 22),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_function_hsla_legacy, 10, 0, 22),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__css_function_hsla_legacy, 10, 0, 22),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_percentage, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_percentage, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_number, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_number, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_hue, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_hue, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_predefined_rgb, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_predefined_rgb, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_xyz_space, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_xyz_space, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_xyz_params, 4, 0, 13),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_predefined_rgb_params, 4, 0, 12),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_colorspace_params, 1, 0, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__css_colorspace_params, 1, 0, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_alpha_value, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [465] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
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
