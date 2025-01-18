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
#define STATE_COUNT 140
#define LARGE_STATE_COUNT 36
#define SYMBOL_COUNT 196
#define ALIAS_COUNT 0
#define TOKEN_COUNT 171
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
  sym__css_number = 1,
  sym__css_percentage = 2,
  sym__css_angle = 3,
  aux_sym_css_function_rgb_legacy_token1 = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  aux_sym_css_function_rgba_legacy_token1 = 8,
  anon_sym_SLASH = 9,
  aux_sym_css_function_hsl_legacy_token1 = 10,
  aux_sym_css_function_hsla_legacy_token1 = 11,
  aux_sym_css_function_hwb_token1 = 12,
  aux_sym_css_function_lab_token1 = 13,
  aux_sym_css_function_oklab_token1 = 14,
  aux_sym_css_function_lch_token1 = 15,
  aux_sym_css_function_oklch_token1 = 16,
  sym_css_hex_color_6_digits = 17,
  sym_css_hex_color_8_digits = 18,
  sym_css_hex_color_3_digits = 19,
  sym_css_hex_color_4_digits = 20,
  aux_sym_css_named_color_token1 = 21,
  aux_sym_css_named_color_token2 = 22,
  aux_sym_css_named_color_token3 = 23,
  aux_sym_css_named_color_token4 = 24,
  aux_sym_css_named_color_token5 = 25,
  aux_sym_css_named_color_token6 = 26,
  aux_sym_css_named_color_token7 = 27,
  aux_sym_css_named_color_token8 = 28,
  aux_sym_css_named_color_token9 = 29,
  aux_sym_css_named_color_token10 = 30,
  aux_sym_css_named_color_token11 = 31,
  aux_sym_css_named_color_token12 = 32,
  aux_sym_css_named_color_token13 = 33,
  aux_sym_css_named_color_token14 = 34,
  aux_sym_css_named_color_token15 = 35,
  aux_sym_css_named_color_token16 = 36,
  aux_sym_css_named_color_token17 = 37,
  aux_sym_css_named_color_token18 = 38,
  aux_sym_css_named_color_token19 = 39,
  aux_sym_css_named_color_token20 = 40,
  aux_sym_css_named_color_token21 = 41,
  aux_sym_css_named_color_token22 = 42,
  aux_sym_css_named_color_token23 = 43,
  aux_sym_css_named_color_token24 = 44,
  aux_sym_css_named_color_token25 = 45,
  aux_sym_css_named_color_token26 = 46,
  aux_sym_css_named_color_token27 = 47,
  aux_sym_css_named_color_token28 = 48,
  aux_sym_css_named_color_token29 = 49,
  aux_sym_css_named_color_token30 = 50,
  aux_sym_css_named_color_token31 = 51,
  aux_sym_css_named_color_token32 = 52,
  aux_sym_css_named_color_token33 = 53,
  aux_sym_css_named_color_token34 = 54,
  aux_sym_css_named_color_token35 = 55,
  aux_sym_css_named_color_token36 = 56,
  aux_sym_css_named_color_token37 = 57,
  aux_sym_css_named_color_token38 = 58,
  aux_sym_css_named_color_token39 = 59,
  aux_sym_css_named_color_token40 = 60,
  aux_sym_css_named_color_token41 = 61,
  aux_sym_css_named_color_token42 = 62,
  aux_sym_css_named_color_token43 = 63,
  aux_sym_css_named_color_token44 = 64,
  aux_sym_css_named_color_token45 = 65,
  aux_sym_css_named_color_token46 = 66,
  aux_sym_css_named_color_token47 = 67,
  aux_sym_css_named_color_token48 = 68,
  aux_sym_css_named_color_token49 = 69,
  aux_sym_css_named_color_token50 = 70,
  aux_sym_css_named_color_token51 = 71,
  aux_sym_css_named_color_token52 = 72,
  aux_sym_css_named_color_token53 = 73,
  aux_sym_css_named_color_token54 = 74,
  aux_sym_css_named_color_token55 = 75,
  aux_sym_css_named_color_token56 = 76,
  aux_sym_css_named_color_token57 = 77,
  aux_sym_css_named_color_token58 = 78,
  aux_sym_css_named_color_token59 = 79,
  aux_sym_css_named_color_token60 = 80,
  aux_sym_css_named_color_token61 = 81,
  aux_sym_css_named_color_token62 = 82,
  aux_sym_css_named_color_token63 = 83,
  aux_sym_css_named_color_token64 = 84,
  aux_sym_css_named_color_token65 = 85,
  aux_sym_css_named_color_token66 = 86,
  aux_sym_css_named_color_token67 = 87,
  aux_sym_css_named_color_token68 = 88,
  aux_sym_css_named_color_token69 = 89,
  aux_sym_css_named_color_token70 = 90,
  aux_sym_css_named_color_token71 = 91,
  aux_sym_css_named_color_token72 = 92,
  aux_sym_css_named_color_token73 = 93,
  aux_sym_css_named_color_token74 = 94,
  aux_sym_css_named_color_token75 = 95,
  aux_sym_css_named_color_token76 = 96,
  aux_sym_css_named_color_token77 = 97,
  aux_sym_css_named_color_token78 = 98,
  aux_sym_css_named_color_token79 = 99,
  aux_sym_css_named_color_token80 = 100,
  aux_sym_css_named_color_token81 = 101,
  aux_sym_css_named_color_token82 = 102,
  aux_sym_css_named_color_token83 = 103,
  aux_sym_css_named_color_token84 = 104,
  aux_sym_css_named_color_token85 = 105,
  aux_sym_css_named_color_token86 = 106,
  aux_sym_css_named_color_token87 = 107,
  aux_sym_css_named_color_token88 = 108,
  aux_sym_css_named_color_token89 = 109,
  aux_sym_css_named_color_token90 = 110,
  aux_sym_css_named_color_token91 = 111,
  aux_sym_css_named_color_token92 = 112,
  aux_sym_css_named_color_token93 = 113,
  aux_sym_css_named_color_token94 = 114,
  aux_sym_css_named_color_token95 = 115,
  aux_sym_css_named_color_token96 = 116,
  aux_sym_css_named_color_token97 = 117,
  aux_sym_css_named_color_token98 = 118,
  aux_sym_css_named_color_token99 = 119,
  aux_sym_css_named_color_token100 = 120,
  aux_sym_css_named_color_token101 = 121,
  aux_sym_css_named_color_token102 = 122,
  aux_sym_css_named_color_token103 = 123,
  aux_sym_css_named_color_token104 = 124,
  aux_sym_css_named_color_token105 = 125,
  aux_sym_css_named_color_token106 = 126,
  aux_sym_css_named_color_token107 = 127,
  aux_sym_css_named_color_token108 = 128,
  aux_sym_css_named_color_token109 = 129,
  aux_sym_css_named_color_token110 = 130,
  aux_sym_css_named_color_token111 = 131,
  aux_sym_css_named_color_token112 = 132,
  aux_sym_css_named_color_token113 = 133,
  aux_sym_css_named_color_token114 = 134,
  aux_sym_css_named_color_token115 = 135,
  aux_sym_css_named_color_token116 = 136,
  aux_sym_css_named_color_token117 = 137,
  aux_sym_css_named_color_token118 = 138,
  aux_sym_css_named_color_token119 = 139,
  aux_sym_css_named_color_token120 = 140,
  aux_sym_css_named_color_token121 = 141,
  aux_sym_css_named_color_token122 = 142,
  aux_sym_css_named_color_token123 = 143,
  aux_sym_css_named_color_token124 = 144,
  aux_sym_css_named_color_token125 = 145,
  aux_sym_css_named_color_token126 = 146,
  aux_sym_css_named_color_token127 = 147,
  aux_sym_css_named_color_token128 = 148,
  aux_sym_css_named_color_token129 = 149,
  aux_sym_css_named_color_token130 = 150,
  aux_sym_css_named_color_token131 = 151,
  aux_sym_css_named_color_token132 = 152,
  aux_sym_css_named_color_token133 = 153,
  aux_sym_css_named_color_token134 = 154,
  aux_sym_css_named_color_token135 = 155,
  aux_sym_css_named_color_token136 = 156,
  aux_sym_css_named_color_token137 = 157,
  aux_sym_css_named_color_token138 = 158,
  aux_sym_css_named_color_token139 = 159,
  aux_sym_css_named_color_token140 = 160,
  aux_sym_css_named_color_token141 = 161,
  aux_sym_css_named_color_token142 = 162,
  aux_sym_css_named_color_token143 = 163,
  aux_sym_css_named_color_token144 = 164,
  aux_sym_css_named_color_token145 = 165,
  aux_sym_css_named_color_token146 = 166,
  aux_sym_css_named_color_token147 = 167,
  aux_sym_css_named_color_token148 = 168,
  sym_css_keyword_transparent = 169,
  sym_css_keyword_none = 170,
  sym_source_file = 171,
  sym_css_number = 172,
  sym_css_percentage = 173,
  sym_css_alpha_value = 174,
  sym_css_hue = 175,
  sym_css_function_rgb = 176,
  sym_css_function_rgba = 177,
  sym_css_function_rgb_legacy = 178,
  sym_css_function_rgba_legacy = 179,
  sym_css_function_rgb_modern = 180,
  sym_css_function_rgba_modern = 181,
  sym_css_function_hsl = 182,
  sym_css_function_hsl_legacy = 183,
  sym_css_function_hsl_modern = 184,
  sym_css_function_hsla = 185,
  sym_css_function_hsla_legacy = 186,
  sym_css_function_hsla_modern = 187,
  sym_css_function_hwb = 188,
  sym_css_function_lab = 189,
  sym_css_function_oklab = 190,
  sym_css_function_lch = 191,
  sym_css_function_oklch = 192,
  sym_css_hex_color = 193,
  sym_css_named_color = 194,
  aux_sym_source_file_repeat1 = 195,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__css_number] = "_css_number",
  [sym__css_percentage] = "_css_percentage",
  [sym__css_angle] = "_css_angle",
  [aux_sym_css_function_rgb_legacy_token1] = "css_function_rgb_legacy_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_css_function_rgba_legacy_token1] = "css_function_rgba_legacy_token1",
  [anon_sym_SLASH] = "/",
  [aux_sym_css_function_hsl_legacy_token1] = "css_function_hsl_legacy_token1",
  [aux_sym_css_function_hsla_legacy_token1] = "css_function_hsla_legacy_token1",
  [aux_sym_css_function_hwb_token1] = "css_function_hwb_token1",
  [aux_sym_css_function_lab_token1] = "css_function_lab_token1",
  [aux_sym_css_function_oklab_token1] = "css_function_oklab_token1",
  [aux_sym_css_function_lch_token1] = "css_function_lch_token1",
  [aux_sym_css_function_oklch_token1] = "css_function_oklch_token1",
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
  [sym_css_function_rgb_legacy] = "css_function_rgb_legacy",
  [sym_css_function_rgba_legacy] = "css_function_rgba_legacy",
  [sym_css_function_rgb_modern] = "css_function_rgb_modern",
  [sym_css_function_rgba_modern] = "css_function_rgba_modern",
  [sym_css_function_hsl] = "css_function_hsl",
  [sym_css_function_hsl_legacy] = "css_function_hsl_legacy",
  [sym_css_function_hsl_modern] = "css_function_hsl_modern",
  [sym_css_function_hsla] = "css_function_hsla",
  [sym_css_function_hsla_legacy] = "css_function_hsla_legacy",
  [sym_css_function_hsla_modern] = "css_function_hsla_modern",
  [sym_css_function_hwb] = "css_function_hwb",
  [sym_css_function_lab] = "css_function_lab",
  [sym_css_function_oklab] = "css_function_oklab",
  [sym_css_function_lch] = "css_function_lch",
  [sym_css_function_oklch] = "css_function_oklch",
  [sym_css_hex_color] = "css_hex_color",
  [sym_css_named_color] = "css_named_color",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__css_number] = sym__css_number,
  [sym__css_percentage] = sym__css_percentage,
  [sym__css_angle] = sym__css_angle,
  [aux_sym_css_function_rgb_legacy_token1] = aux_sym_css_function_rgb_legacy_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_css_function_rgba_legacy_token1] = aux_sym_css_function_rgba_legacy_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_css_function_hsl_legacy_token1] = aux_sym_css_function_hsl_legacy_token1,
  [aux_sym_css_function_hsla_legacy_token1] = aux_sym_css_function_hsla_legacy_token1,
  [aux_sym_css_function_hwb_token1] = aux_sym_css_function_hwb_token1,
  [aux_sym_css_function_lab_token1] = aux_sym_css_function_lab_token1,
  [aux_sym_css_function_oklab_token1] = aux_sym_css_function_oklab_token1,
  [aux_sym_css_function_lch_token1] = aux_sym_css_function_lch_token1,
  [aux_sym_css_function_oklch_token1] = aux_sym_css_function_oklch_token1,
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
  [sym_css_function_rgb_legacy] = sym_css_function_rgb_legacy,
  [sym_css_function_rgba_legacy] = sym_css_function_rgba_legacy,
  [sym_css_function_rgb_modern] = sym_css_function_rgb_modern,
  [sym_css_function_rgba_modern] = sym_css_function_rgba_modern,
  [sym_css_function_hsl] = sym_css_function_hsl,
  [sym_css_function_hsl_legacy] = sym_css_function_hsl_legacy,
  [sym_css_function_hsl_modern] = sym_css_function_hsl_modern,
  [sym_css_function_hsla] = sym_css_function_hsla,
  [sym_css_function_hsla_legacy] = sym_css_function_hsla_legacy,
  [sym_css_function_hsla_modern] = sym_css_function_hsla_modern,
  [sym_css_function_hwb] = sym_css_function_hwb,
  [sym_css_function_lab] = sym_css_function_lab,
  [sym_css_function_oklab] = sym_css_function_oklab,
  [sym_css_function_lch] = sym_css_function_lch,
  [sym_css_function_oklch] = sym_css_function_oklch,
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
  [aux_sym_css_function_rgb_legacy_token1] = {
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
  [aux_sym_css_function_rgba_legacy_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_css_function_hsl_legacy_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_css_function_hsla_legacy_token1] = {
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
  [sym_css_function_rgb_legacy] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_rgba_legacy] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_rgb_modern] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_rgba_modern] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_hsl] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_hsl_legacy] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_hsl_modern] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_hsla] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_hsla_legacy] = {
    .visible = true,
    .named = true,
  },
  [sym_css_function_hsla_modern] = {
    .visible = true,
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
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 3},
  [3] = {.index = 6, .length = 3},
  [4] = {.index = 9, .length = 3},
  [5] = {.index = 12, .length = 3},
  [6] = {.index = 15, .length = 4},
  [7] = {.index = 19, .length = 3},
  [8] = {.index = 22, .length = 4},
  [9] = {.index = 26, .length = 3},
  [10] = {.index = 29, .length = 4},
  [11] = {.index = 33, .length = 4},
  [12] = {.index = 37, .length = 4},
  [13] = {.index = 41, .length = 4},
  [14] = {.index = 45, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_b, 4},
    {field_g, 3},
    {field_r, 2},
  [3] =
    {field_h, 2},
    {field_l, 4},
    {field_s, 3},
  [6] =
    {field_b, 4},
    {field_h, 2},
    {field_w, 3},
  [9] =
    {field_L, 2},
    {field_a, 3},
    {field_b, 4},
  [12] =
    {field_C, 3},
    {field_L, 2},
    {field_h, 4},
  [15] =
    {field_alpha, 6},
    {field_b, 4},
    {field_g, 3},
    {field_r, 2},
  [19] =
    {field_b, 6},
    {field_g, 4},
    {field_r, 2},
  [22] =
    {field_alpha, 6},
    {field_h, 2},
    {field_l, 4},
    {field_s, 3},
  [26] =
    {field_h, 2},
    {field_l, 6},
    {field_s, 4},
  [29] =
    {field_alpha, 6},
    {field_b, 4},
    {field_h, 2},
    {field_w, 3},
  [33] =
    {field_L, 2},
    {field_a, 3},
    {field_alpha, 6},
    {field_b, 4},
  [37] =
    {field_C, 3},
    {field_L, 2},
    {field_alpha, 6},
    {field_h, 4},
  [41] =
    {field_alpha, 8},
    {field_b, 6},
    {field_g, 4},
    {field_r, 2},
  [45] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(786);
      ADVANCE_MAP(
        '#', 785,
        '(', 793,
        ')', 795,
        ',', 794,
        '.', 779,
        '/', 797,
        '+', 1,
        '-', 1,
        'A', 387,
        'a', 387,
        'B', 197,
        'b', 197,
        'C', 3,
        'c', 3,
        'D', 20,
        'd', 20,
        'F', 332,
        'f', 332,
        'G', 24,
        'g', 24,
        'H', 520,
        'h', 520,
        'I', 490,
        'i', 490,
        'K', 309,
        'k', 309,
        'L', 4,
        'l', 4,
        'M', 5,
        'm', 5,
        'N', 6,
        'n', 6,
        'O', 377,
        'o', 377,
        'P', 7,
        'p', 7,
        'R', 146,
        'r', 146,
        'S', 8,
        's', 8,
        'T', 21,
        't', 21,
        'V', 331,
        'v', 331,
        'W', 305,
        'w', 305,
        'Y', 199,
        'y', 199,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      END_STATE();
    case 2:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        'A', 130,
        'a', 130,
        'H', 33,
        'h', 33,
        'O', 587,
        'o', 587,
        'R', 333,
        'r', 333,
        'Y', 23,
        'y', 23,
      );
      END_STATE();
    case 4:
      ADVANCE_MAP(
        'A', 72,
        'a', 72,
        'C', 306,
        'c', 306,
        'E', 450,
        'e', 450,
        'I', 284,
        'i', 284,
      );
      END_STATE();
    case 5:
      ADVANCE_MAP(
        'A', 291,
        'a', 291,
        'E', 134,
        'e', 134,
        'I', 132,
        'i', 132,
        'O', 101,
        'o', 101,
      );
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(734);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        'A', 395,
        'a', 395,
        'E', 52,
        'e', 52,
        'I', 491,
        'i', 491,
        'L', 697,
        'l', 697,
        'O', 749,
        'o', 749,
        'U', 592,
        'u', 592,
      );
      END_STATE();
    case 8:
      ADVANCE_MAP(
        'A', 129,
        'a', 129,
        'E', 10,
        'e', 10,
        'I', 206,
        'i', 206,
        'K', 768,
        'k', 768,
        'L', 22,
        'l', 22,
        'N', 526,
        'n', 526,
        'P', 616,
        'p', 616,
        'T', 239,
        't', 239,
      );
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(811);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(368);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(910);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(937);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(857);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(894);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(837);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(756);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        'A', 582,
        'a', 582,
        'B', 423,
        'b', 423,
        'O', 622,
        'o', 622,
        'P', 726,
        'p', 726,
        'S', 276,
        's', 276,
        'T', 733,
        't', 733,
        'V', 366,
        'v', 366,
      );
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        'A', 588,
        'a', 588,
        'E', 147,
        'e', 147,
        'I', 448,
        'i', 448,
        'O', 139,
        'o', 139,
      );
      END_STATE();
    case 21:
      ADVANCE_MAP(
        'A', 458,
        'a', 458,
        'E', 29,
        'e', 29,
        'H', 347,
        'h', 347,
        'O', 451,
        'o', 451,
        'R', 37,
        'r', 37,
        'U', 613,
        'u', 613,
      );
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(677);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        'A', 335,
        'a', 335,
        'H', 524,
        'h', 524,
        'O', 390,
        'o', 390,
        'R', 17,
        'r', 17,
      );
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(447);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(770);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(513);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(758);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(759);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(675);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(384);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(760);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(761);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(762);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(764);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(766);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(433);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(604);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(518);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(521);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(467);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(685);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(751);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(517);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(316);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(690);
      END_STATE();
    case 66:
      ADVANCE_MAP(
        'A', 436,
        'a', 436,
        'E', 69,
        'e', 69,
        'K', 777,
        'k', 777,
        'L', 59,
        'l', 59,
        'T', 275,
        't', 275,
      );
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(800);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(801);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(210);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(510);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(792);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(802);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(913);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(409);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(259);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(929);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(614);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(625);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(547);
      END_STATE();
    case 81:
      ADVANCE_MAP(
        'B', 410,
        'b', 410,
        'C', 774,
        'c', 774,
        'G', 544,
        'g', 544,
        'K', 321,
        'k', 321,
        'M', 58,
        'm', 58,
        'O', 396,
        'o', 396,
        'R', 205,
        'r', 205,
        'S', 46,
        's', 46,
        'T', 731,
        't', 731,
        'V', 364,
        'v', 364,
      );
      END_STATE();
    case 82:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(413);
      END_STATE();
    case 83:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(415);
      END_STATE();
    case 84:
      ADVANCE_MAP(
        'B', 417,
        'b', 417,
        'C', 562,
        'c', 562,
        'G', 569,
        'g', 569,
        'P', 354,
        'p', 354,
        'S', 66,
        's', 66,
        'Y', 265,
        'y', 265,
      );
      END_STATE();
    case 85:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(419);
      END_STATE();
    case 86:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(420);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(615);
      END_STATE();
    case 87:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(421);
      END_STATE();
    case 88:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(422);
      END_STATE();
    case 89:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(424);
      END_STATE();
    case 90:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(425);
      END_STATE();
    case 91:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(426);
      END_STATE();
    case 92:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(427);
      END_STATE();
    case 93:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(428);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(618);
      END_STATE();
    case 94:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(429);
      END_STATE();
    case 95:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(430);
      END_STATE();
    case 96:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(431);
      END_STATE();
    case 97:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(629);
      END_STATE();
    case 98:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(632);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(371);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 103:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(375);
      END_STATE();
    case 104:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(319);
      END_STATE();
    case 105:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 106:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(540);
      END_STATE();
    case 110:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 111:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 112:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(609);
      END_STATE();
    case 113:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(860);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(791);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(916);
      END_STATE();
    case 117:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(841);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(821);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(861);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(868);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(915);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(840);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(898);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(832);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(917);
      END_STATE();
    case 126:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(920);
      END_STATE();
    case 127:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(817);
      END_STATE();
    case 128:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(904);
      END_STATE();
    case 129:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(135);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 130:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 131:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(394);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(735);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(499);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(672);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(673);
      END_STATE();
    case 133:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(327);
      END_STATE();
    case 134:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(407);
      END_STATE();
    case 136:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(778);
      END_STATE();
    case 137:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 138:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 139:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 140:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 141:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 142:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 143:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 144:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 145:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(775);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(73);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(662);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(818);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(958);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(912);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(953);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(914);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(927);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(911);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(939);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(948);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(931);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(945);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(950);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(812);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(853);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(859);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(897);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(926);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(954);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(855);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(886);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(919);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(901);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 197:
      ADVANCE_MAP(
        'E', 326,
        'e', 326,
        'I', 648,
        'i', 648,
        'L', 9,
        'l', 9,
        'R', 525,
        'r', 525,
        'U', 593,
        'u', 593,
      );
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(692);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(504);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(736);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(865);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(515);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(835);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(477);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(882);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(645);
      END_STATE();
    case 277:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(922);
      END_STATE();
    case 278:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(277);
      END_STATE();
    case 279:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(553);
      END_STATE();
    case 281:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(411);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
      END_STATE();
    case 282:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(791);
      END_STATE();
    case 283:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(566);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(732);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(365);
      END_STATE();
    case 284:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(312);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 285:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(591);
      END_STATE();
    case 286:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 287:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 288:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 289:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 290:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(325);
      END_STATE();
    case 291:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(217);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 292:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(320);
      END_STATE();
    case 293:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(621);
      END_STATE();
    case 294:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(242);
      END_STATE();
    case 295:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(628);
      END_STATE();
    case 296:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(633);
      END_STATE();
    case 297:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(634);
      END_STATE();
    case 298:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 299:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(636);
      END_STATE();
    case 300:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(637);
      END_STATE();
    case 301:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(638);
      END_STATE();
    case 302:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(639);
      END_STATE();
    case 303:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(640);
      END_STATE();
    case 304:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(303);
      END_STATE();
    case 305:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(241);
      END_STATE();
    case 306:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(803);
      END_STATE();
    case 307:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(804);
      END_STATE();
    case 308:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(873);
      END_STATE();
    case 309:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 310:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(655);
      END_STATE();
    case 311:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(572);
      END_STATE();
    case 312:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(665);
      END_STATE();
    case 313:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(338);
      END_STATE();
    case 314:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 315:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(346);
      END_STATE();
    case 316:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(339);
      END_STATE();
    case 317:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(337);
      END_STATE();
    case 318:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(340);
      END_STATE();
    case 319:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(207);
      END_STATE();
    case 320:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(240);
      END_STATE();
    case 321:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 322:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 323:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(360);
      END_STATE();
    case 324:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(361);
      END_STATE();
    case 325:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(693);
      END_STATE();
    case 326:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 327:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 328:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(871);
      END_STATE();
    case 329:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(836);
      END_STATE();
    case 330:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 331:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 332:
      ADVANCE_MAP(
        'I', 597,
        'i', 597,
        'L', 532,
        'l', 532,
        'O', 598,
        'o', 598,
        'U', 99,
        'u', 99,
      );
      END_STATE();
    case 333:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 334:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 335:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 336:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 337:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 338:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 339:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 340:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 341:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 342:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 343:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 344:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 345:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(508);
      END_STATE();
    case 346:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 347:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(652);
      END_STATE();
    case 348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(495);
      END_STATE();
    case 349:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(698);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(657);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(737);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 354:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(681);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(659);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(660);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(682);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(683);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(684);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(583);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 365:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 366:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 367:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 368:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(568);
      END_STATE();
    case 369:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 370:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(924);
      END_STATE();
    case 371:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(816);
      END_STATE();
    case 372:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(867);
      END_STATE();
    case 373:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(827);
      END_STATE();
    case 374:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(849);
      END_STATE();
    case 375:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(854);
      END_STATE();
    case 376:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(883);
      END_STATE();
    case 377:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(388);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 378:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(328);
      END_STATE();
    case 379:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(329);
      END_STATE();
    case 380:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(180);
      END_STATE();
    case 381:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(776);
      END_STATE();
    case 382:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(798);
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(947);
      END_STATE();
    case 384:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(825);
      END_STATE();
    case 385:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(936);
      END_STATE();
    case 386:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(877);
      END_STATE();
    case 387:
      ADVANCE_MAP(
        'L', 330,
        'l', 330,
        'N', 674,
        'n', 674,
        'Q', 699,
        'q', 699,
        'Z', 724,
        'z', 724,
      );
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 389:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(769);
      END_STATE();
    case 390:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      END_STATE();
    case 392:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(700);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 394:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 397:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 398:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 399:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 400:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 401:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 402:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 403:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 404:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 405:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 406:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 407:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 408:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(527);
      END_STATE();
    case 409:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(706);
      END_STATE();
    case 410:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(707);
      END_STATE();
    case 411:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(529);
      END_STATE();
    case 412:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 413:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(708);
      END_STATE();
    case 414:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      END_STATE();
    case 415:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(709);
      END_STATE();
    case 416:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(533);
      END_STATE();
    case 417:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(710);
      END_STATE();
    case 418:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 419:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(711);
      END_STATE();
    case 420:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(712);
      END_STATE();
    case 421:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(713);
      END_STATE();
    case 422:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(714);
      END_STATE();
    case 423:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(715);
      END_STATE();
    case 424:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      END_STATE();
    case 425:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(717);
      END_STATE();
    case 426:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(718);
      END_STATE();
    case 427:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(719);
      END_STATE();
    case 428:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(720);
      END_STATE();
    case 429:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(721);
      END_STATE();
    case 430:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(722);
      END_STATE();
    case 431:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(723);
      END_STATE();
    case 432:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 433:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(454);
      END_STATE();
    case 434:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 435:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 436:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 437:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 438:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(456);
      END_STATE();
    case 439:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 440:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(752);
      END_STATE();
    case 441:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 442:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 443:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 444:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 445:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(925);
      END_STATE();
    case 446:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 447:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(906);
      END_STATE();
    case 448:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 449:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(664);
      END_STATE();
    case 450:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(541);
      END_STATE();
    case 451:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 452:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(537);
      END_STATE();
    case 453:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 454:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(551);
      END_STATE();
    case 455:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(552);
      END_STATE();
    case 456:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(554);
      END_STATE();
    case 457:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 458:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(946);
      END_STATE();
    case 459:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(829);
      END_STATE();
    case 460:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(791);
      END_STATE();
    case 461:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(820);
      END_STATE();
    case 462:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(863);
      END_STATE();
    case 463:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 464:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(895);
      END_STATE();
    case 465:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(933);
      END_STATE();
    case 466:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(828);
      END_STATE();
    case 467:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(831);
      END_STATE();
    case 468:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(908);
      END_STATE();
    case 469:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(935);
      END_STATE();
    case 470:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 471:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(874);
      END_STATE();
    case 472:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(878);
      END_STATE();
    case 473:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(892);
      END_STATE();
    case 474:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(918);
      END_STATE();
    case 475:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(930);
      END_STATE();
    case 476:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(842);
      END_STATE();
    case 477:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(881);
      END_STATE();
    case 478:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(934);
      END_STATE();
    case 479:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(856);
      END_STATE();
    case 480:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(884);
      END_STATE();
    case 481:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(932);
      END_STATE();
    case 482:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(944);
      END_STATE();
    case 483:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(956);
      END_STATE();
    case 484:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(843);
      END_STATE();
    case 485:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(875);
      END_STATE();
    case 486:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(885);
      END_STATE();
    case 487:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 488:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(900);
      END_STATE();
    case 489:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(902);
      END_STATE();
    case 490:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(133);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(534);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(650);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(649);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(573);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(676);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(670);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(502);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 507:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(603);
      END_STATE();
    case 508:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(679);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(617);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(620);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 517:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 518:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 519:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 520:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(497);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(382);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(71);
      END_STATE();
    case 521:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(869);
      END_STATE();
    case 522:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(949);
      END_STATE();
    case 523:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(858);
      END_STATE();
    case 524:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 525:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(745);
      END_STATE();
    case 526:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 527:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      END_STATE();
    case 528:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 529:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(755);
      END_STATE();
    case 530:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 531:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 532:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 533:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(742);
      END_STATE();
    case 534:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 535:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 536:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(743);
      END_STATE();
    case 537:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 539:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(412);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(464);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(465);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(476);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(485);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(746);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(548);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(747);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(623);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 563:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 564:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 565:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 566:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(432);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 567:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 568:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 569:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(435);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 570:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(578);
      END_STATE();
    case 571:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(921);
      END_STATE();
    case 572:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(696);
      END_STATE();
    case 573:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(348);
      END_STATE();
    case 574:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 575:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(399);
      END_STATE();
    case 576:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(404);
      END_STATE();
    case 577:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(405);
      END_STATE();
    case 578:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(353);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(381);
      END_STATE();
    case 579:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(727);
      END_STATE();
    case 580:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(704);
      END_STATE();
    case 581:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(701);
      END_STATE();
    case 582:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(703);
      END_STATE();
    case 583:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(705);
      END_STATE();
    case 584:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(728);
      END_STATE();
    case 585:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(729);
      END_STATE();
    case 586:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(730);
      END_STATE();
    case 587:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 588:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 589:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(938);
      END_STATE();
    case 590:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(872);
      END_STATE();
    case 591:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 592:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 593:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 594:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(687);
      END_STATE();
    case 596:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 597:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 598:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 602:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 603:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 604:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 605:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 606:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 607:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 608:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 609:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 610:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(209);
      END_STATE();
    case 611:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 612:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 613:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(581);
      END_STATE();
    case 614:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 615:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 616:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 617:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 618:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 619:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 620:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 621:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 624:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 626:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(576);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 628:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 629:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 630:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(577);
      END_STATE();
    case 631:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 632:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      END_STATE();
    case 633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 634:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 635:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 636:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 637:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 638:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 639:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 640:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 641:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 642:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 643:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 644:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 645:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 646:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(585);
      END_STATE();
    case 647:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(586);
      END_STATE();
    case 648:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(580);
      END_STATE();
    case 649:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      END_STATE();
    case 650:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 651:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(671);
      END_STATE();
    case 652:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(686);
      END_STATE();
    case 653:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(308);
      END_STATE();
    case 654:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(691);
      END_STATE();
    case 655:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(342);
      END_STATE();
    case 656:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      END_STATE();
    case 657:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 658:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 659:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 660:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      END_STATE();
    case 661:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      END_STATE();
    case 662:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(772);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 663:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(344);
      END_STATE();
    case 664:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(550);
      END_STATE();
    case 665:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 666:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(952);
      END_STATE();
    case 667:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(951);
      END_STATE();
    case 668:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(819);
      END_STATE();
    case 669:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(848);
      END_STATE();
    case 670:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(957);
      END_STATE();
    case 671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(750);
      END_STATE();
    case 672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 673:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(771);
      END_STATE();
    case 674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(362);
      END_STATE();
    case 675:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(522);
      END_STATE();
    case 676:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 677:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 678:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 679:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 680:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 681:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 682:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 683:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 684:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 685:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 686:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(400);
      END_STATE();
    case 687:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(608);
      END_STATE();
    case 688:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(611);
      END_STATE();
    case 689:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(612);
      END_STATE();
    case 690:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      END_STATE();
    case 691:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      END_STATE();
    case 692:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 693:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 694:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 695:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(923);
      END_STATE();
    case 696:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 697:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(445);
      END_STATE();
    case 698:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(446);
      END_STATE();
    case 699:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 700:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(653);
      END_STATE();
    case 701:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(542);
      END_STATE();
    case 702:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(605);
      END_STATE();
    case 703:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 704:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 705:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 706:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 707:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 708:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 709:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 710:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 711:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 712:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 713:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 714:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 715:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 716:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 717:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 718:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 719:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 720:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 721:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 722:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 723:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 724:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(602);
      END_STATE();
    case 725:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(658);
      END_STATE();
    case 726:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(626);
      END_STATE();
    case 727:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(630);
      END_STATE();
    case 728:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(563);
      END_STATE();
    case 729:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(564);
      END_STATE();
    case 730:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(565);
      END_STATE();
    case 731:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(644);
      END_STATE();
    case 732:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(646);
      END_STATE();
    case 733:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(647);
      END_STATE();
    case 734:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 735:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(154);
      END_STATE();
    case 736:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(218);
      END_STATE();
    case 737:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(274);
      END_STATE();
    case 738:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(943);
      END_STATE();
    case 739:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(955);
      END_STATE();
    case 740:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(866);
      END_STATE();
    case 741:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(864);
      END_STATE();
    case 742:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(890);
      END_STATE();
    case 743:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(879);
      END_STATE();
    case 744:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(538);
      END_STATE();
    case 745:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(461);
      END_STATE();
    case 746:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(475);
      END_STATE();
    case 747:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(478);
      END_STATE();
    case 748:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(481);
      END_STATE();
    case 749:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(144);
      END_STATE();
    case 750:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(314);
      END_STATE();
    case 751:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(317);
      END_STATE();
    case 752:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(322);
      END_STATE();
    case 753:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(323);
      END_STATE();
    case 754:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(324);
      END_STATE();
    case 755:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(273);
      END_STATE();
    case 756:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(862);
      END_STATE();
    case 757:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(870);
      END_STATE();
    case 758:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(851);
      END_STATE();
    case 759:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(852);
      END_STATE();
    case 760:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(833);
      END_STATE();
    case 761:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(880);
      END_STATE();
    case 762:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(941);
      END_STATE();
    case 763:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(942);
      END_STATE();
    case 764:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(845);
      END_STATE();
    case 765:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(846);
      END_STATE();
    case 766:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(887);
      END_STATE();
    case 767:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(888);
      END_STATE();
    case 768:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 769:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(744);
      END_STATE();
    case 770:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 771:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(599);
      END_STATE();
    case 772:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 773:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 774:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 775:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 776:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 777:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 778:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(267);
      END_STATE();
    case 779:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      END_STATE();
    case 780:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 781:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(807);
      END_STATE();
    case 782:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      END_STATE();
    case 783:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      END_STATE();
    case 784:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(781);
      END_STATE();
    case 785:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(784);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 790,
        '.', 779,
        'D', 198,
        'd', 198,
        'E', 2,
        'e', 2,
        'G', 596,
        'g', 596,
        'R', 27,
        'r', 27,
        'T', 702,
        't', 702,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 790,
        'D', 198,
        'd', 198,
        'E', 2,
        'e', 2,
        'G', 596,
        'g', 596,
        'R', 27,
        'r', 27,
        'T', 702,
        't', 702,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 790,
        'D', 198,
        'd', 198,
        'G', 596,
        'g', 596,
        'R', 27,
        'r', 27,
        'T', 702,
        't', 702,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__css_percentage);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__css_angle);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_css_function_rgb_legacy_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(796);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_css_function_rgba_legacy_token1);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_css_function_hsl_legacy_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(799);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_css_function_hsla_legacy_token1);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_css_function_hwb_token1);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_css_function_lab_token1);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_css_function_oklab_token1);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_css_function_lch_token1);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_css_function_oklch_token1);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_css_hex_color_6_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(783);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_css_hex_color_8_digits);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_css_hex_color_3_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(808);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_css_hex_color_4_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(782);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_css_named_color_token1);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_css_named_color_token2);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_css_named_color_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_css_named_color_token4);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_css_named_color_token5);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_css_named_color_token6);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_css_named_color_token7);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_css_named_color_token8);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_css_named_color_token9);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_css_named_color_token10);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(363);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_css_named_color_token11);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_css_named_color_token12);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_css_named_color_token13);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_css_named_color_token14);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_css_named_color_token15);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_css_named_color_token16);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_css_named_color_token17);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_css_named_color_token18);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_css_named_color_token19);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_css_named_color_token20);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_css_named_color_token21);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_css_named_color_token22);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_css_named_color_token23);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_css_named_color_token24);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_css_named_color_token25);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_css_named_color_token26);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_css_named_color_token27);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_css_named_color_token28);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_css_named_color_token29);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_css_named_color_token30);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_css_named_color_token31);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_css_named_color_token32);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_css_named_color_token33);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_css_named_color_token34);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_css_named_color_token35);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_css_named_color_token36);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_css_named_color_token37);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_css_named_color_token38);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_css_named_color_token39);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_css_named_color_token40);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_css_named_color_token41);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_css_named_color_token42);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_css_named_color_token43);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_css_named_color_token44);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_css_named_color_token45);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_css_named_color_token46);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_css_named_color_token47);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_css_named_color_token48);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_css_named_color_token49);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_css_named_color_token50);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_css_named_color_token51);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_css_named_color_token52);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_css_named_color_token53);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_css_named_color_token54);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_css_named_color_token55);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(264);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_css_named_color_token56);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_css_named_color_token57);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_css_named_color_token58);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_css_named_color_token59);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_css_named_color_token60);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_css_named_color_token61);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_css_named_color_token62);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_css_named_color_token63);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_css_named_color_token64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(392);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_css_named_color_token65);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_css_named_color_token66);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_css_named_color_token67);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_css_named_color_token68);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_css_named_color_token69);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_css_named_color_token70);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_css_named_color_token71);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_css_named_color_token72);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_css_named_color_token73);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_css_named_color_token74);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_css_named_color_token75);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_css_named_color_token76);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_css_named_color_token77);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_css_named_color_token78);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_css_named_color_token79);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_css_named_color_token80);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_css_named_color_token81);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_css_named_color_token82);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_css_named_color_token83);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(631);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_css_named_color_token84);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_css_named_color_token85);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_css_named_color_token86);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_css_named_color_token87);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_css_named_color_token88);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_css_named_color_token89);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_css_named_color_token90);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_css_named_color_token91);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_css_named_color_token92);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_css_named_color_token93);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_css_named_color_token94);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_css_named_color_token95);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_css_named_color_token96);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_css_named_color_token97);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_css_named_color_token98);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_css_named_color_token99);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_css_named_color_token100);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_css_named_color_token101);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_css_named_color_token102);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_css_named_color_token103);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_css_named_color_token104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(606);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_css_named_color_token105);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_css_named_color_token106);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_css_named_color_token107);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_css_named_color_token108);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_css_named_color_token109);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_css_named_color_token110);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_css_named_color_token111);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_css_named_color_token112);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_css_named_color_token113);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_css_named_color_token114);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_css_named_color_token115);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_css_named_color_token116);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_css_named_color_token117);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_css_named_color_token118);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_css_named_color_token119);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_css_named_color_token120);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_css_named_color_token121);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_css_named_color_token122);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_css_named_color_token123);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_css_named_color_token124);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_css_named_color_token125);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_css_named_color_token126);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_css_named_color_token127);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_css_named_color_token128);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_css_named_color_token129);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_css_named_color_token130);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_css_named_color_token131);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_css_named_color_token132);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_css_named_color_token133);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_css_named_color_token134);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_css_named_color_token135);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_css_named_color_token136);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_css_named_color_token137);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_css_named_color_token138);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_css_named_color_token139);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_css_named_color_token140);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_css_named_color_token141);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_css_named_color_token142);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_css_named_color_token143);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_css_named_color_token144);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_css_named_color_token145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(452);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_css_named_color_token146);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_css_named_color_token147);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(635);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_css_named_color_token148);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_css_keyword_transparent);
      END_STATE();
    case 958:
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__css_number] = ACTIONS(1),
    [sym__css_percentage] = ACTIONS(1),
    [sym__css_angle] = ACTIONS(1),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(1),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(1),
    [aux_sym_css_function_hwb_token1] = ACTIONS(1),
    [aux_sym_css_function_lab_token1] = ACTIONS(1),
    [aux_sym_css_function_oklab_token1] = ACTIONS(1),
    [aux_sym_css_function_lch_token1] = ACTIONS(1),
    [aux_sym_css_function_oklch_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(116),
    [sym_css_function_rgb] = STATE(2),
    [sym_css_function_rgba] = STATE(2),
    [sym_css_function_rgb_legacy] = STATE(6),
    [sym_css_function_rgba_legacy] = STATE(20),
    [sym_css_function_rgb_modern] = STATE(6),
    [sym_css_function_rgba_modern] = STATE(20),
    [sym_css_function_hsl] = STATE(2),
    [sym_css_function_hsl_legacy] = STATE(28),
    [sym_css_function_hsl_modern] = STATE(28),
    [sym_css_function_hsla] = STATE(2),
    [sym_css_function_hsla_legacy] = STATE(15),
    [sym_css_function_hsla_modern] = STATE(15),
    [sym_css_function_hwb] = STATE(2),
    [sym_css_function_lab] = STATE(2),
    [sym_css_function_oklab] = STATE(2),
    [sym_css_function_lch] = STATE(2),
    [sym_css_function_oklch] = STATE(2),
    [sym_css_hex_color] = STATE(2),
    [sym_css_named_color] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(5),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(7),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(9),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(11),
    [aux_sym_css_function_hwb_token1] = ACTIONS(13),
    [aux_sym_css_function_lab_token1] = ACTIONS(15),
    [aux_sym_css_function_oklab_token1] = ACTIONS(17),
    [aux_sym_css_function_lch_token1] = ACTIONS(19),
    [aux_sym_css_function_oklch_token1] = ACTIONS(21),
    [sym_css_hex_color_6_digits] = ACTIONS(23),
    [sym_css_hex_color_8_digits] = ACTIONS(25),
    [sym_css_hex_color_3_digits] = ACTIONS(23),
    [sym_css_hex_color_4_digits] = ACTIONS(23),
    [aux_sym_css_named_color_token1] = ACTIONS(27),
    [aux_sym_css_named_color_token2] = ACTIONS(27),
    [aux_sym_css_named_color_token3] = ACTIONS(29),
    [aux_sym_css_named_color_token4] = ACTIONS(27),
    [aux_sym_css_named_color_token5] = ACTIONS(27),
    [aux_sym_css_named_color_token6] = ACTIONS(27),
    [aux_sym_css_named_color_token7] = ACTIONS(27),
    [aux_sym_css_named_color_token8] = ACTIONS(27),
    [aux_sym_css_named_color_token9] = ACTIONS(27),
    [aux_sym_css_named_color_token10] = ACTIONS(29),
    [aux_sym_css_named_color_token11] = ACTIONS(27),
    [aux_sym_css_named_color_token12] = ACTIONS(27),
    [aux_sym_css_named_color_token13] = ACTIONS(27),
    [aux_sym_css_named_color_token14] = ACTIONS(27),
    [aux_sym_css_named_color_token15] = ACTIONS(27),
    [aux_sym_css_named_color_token16] = ACTIONS(27),
    [aux_sym_css_named_color_token17] = ACTIONS(27),
    [aux_sym_css_named_color_token18] = ACTIONS(27),
    [aux_sym_css_named_color_token19] = ACTIONS(27),
    [aux_sym_css_named_color_token20] = ACTIONS(27),
    [aux_sym_css_named_color_token21] = ACTIONS(27),
    [aux_sym_css_named_color_token22] = ACTIONS(27),
    [aux_sym_css_named_color_token23] = ACTIONS(27),
    [aux_sym_css_named_color_token24] = ACTIONS(27),
    [aux_sym_css_named_color_token25] = ACTIONS(27),
    [aux_sym_css_named_color_token26] = ACTIONS(27),
    [aux_sym_css_named_color_token27] = ACTIONS(27),
    [aux_sym_css_named_color_token28] = ACTIONS(27),
    [aux_sym_css_named_color_token29] = ACTIONS(27),
    [aux_sym_css_named_color_token30] = ACTIONS(27),
    [aux_sym_css_named_color_token31] = ACTIONS(27),
    [aux_sym_css_named_color_token32] = ACTIONS(27),
    [aux_sym_css_named_color_token33] = ACTIONS(27),
    [aux_sym_css_named_color_token34] = ACTIONS(27),
    [aux_sym_css_named_color_token35] = ACTIONS(27),
    [aux_sym_css_named_color_token36] = ACTIONS(27),
    [aux_sym_css_named_color_token37] = ACTIONS(27),
    [aux_sym_css_named_color_token38] = ACTIONS(27),
    [aux_sym_css_named_color_token39] = ACTIONS(27),
    [aux_sym_css_named_color_token40] = ACTIONS(27),
    [aux_sym_css_named_color_token41] = ACTIONS(27),
    [aux_sym_css_named_color_token42] = ACTIONS(27),
    [aux_sym_css_named_color_token43] = ACTIONS(27),
    [aux_sym_css_named_color_token44] = ACTIONS(27),
    [aux_sym_css_named_color_token45] = ACTIONS(27),
    [aux_sym_css_named_color_token46] = ACTIONS(27),
    [aux_sym_css_named_color_token47] = ACTIONS(27),
    [aux_sym_css_named_color_token48] = ACTIONS(27),
    [aux_sym_css_named_color_token49] = ACTIONS(27),
    [aux_sym_css_named_color_token50] = ACTIONS(27),
    [aux_sym_css_named_color_token51] = ACTIONS(27),
    [aux_sym_css_named_color_token52] = ACTIONS(29),
    [aux_sym_css_named_color_token53] = ACTIONS(27),
    [aux_sym_css_named_color_token54] = ACTIONS(27),
    [aux_sym_css_named_color_token55] = ACTIONS(29),
    [aux_sym_css_named_color_token56] = ACTIONS(27),
    [aux_sym_css_named_color_token57] = ACTIONS(27),
    [aux_sym_css_named_color_token58] = ACTIONS(27),
    [aux_sym_css_named_color_token59] = ACTIONS(27),
    [aux_sym_css_named_color_token60] = ACTIONS(27),
    [aux_sym_css_named_color_token61] = ACTIONS(27),
    [aux_sym_css_named_color_token62] = ACTIONS(27),
    [aux_sym_css_named_color_token63] = ACTIONS(27),
    [aux_sym_css_named_color_token64] = ACTIONS(29),
    [aux_sym_css_named_color_token65] = ACTIONS(27),
    [aux_sym_css_named_color_token66] = ACTIONS(27),
    [aux_sym_css_named_color_token67] = ACTIONS(27),
    [aux_sym_css_named_color_token68] = ACTIONS(27),
    [aux_sym_css_named_color_token69] = ACTIONS(27),
    [aux_sym_css_named_color_token70] = ACTIONS(27),
    [aux_sym_css_named_color_token71] = ACTIONS(27),
    [aux_sym_css_named_color_token72] = ACTIONS(27),
    [aux_sym_css_named_color_token73] = ACTIONS(27),
    [aux_sym_css_named_color_token74] = ACTIONS(27),
    [aux_sym_css_named_color_token75] = ACTIONS(27),
    [aux_sym_css_named_color_token76] = ACTIONS(27),
    [aux_sym_css_named_color_token77] = ACTIONS(27),
    [aux_sym_css_named_color_token78] = ACTIONS(27),
    [aux_sym_css_named_color_token79] = ACTIONS(27),
    [aux_sym_css_named_color_token80] = ACTIONS(27),
    [aux_sym_css_named_color_token81] = ACTIONS(27),
    [aux_sym_css_named_color_token82] = ACTIONS(27),
    [aux_sym_css_named_color_token83] = ACTIONS(29),
    [aux_sym_css_named_color_token84] = ACTIONS(27),
    [aux_sym_css_named_color_token85] = ACTIONS(27),
    [aux_sym_css_named_color_token86] = ACTIONS(27),
    [aux_sym_css_named_color_token87] = ACTIONS(27),
    [aux_sym_css_named_color_token88] = ACTIONS(27),
    [aux_sym_css_named_color_token89] = ACTIONS(27),
    [aux_sym_css_named_color_token90] = ACTIONS(27),
    [aux_sym_css_named_color_token91] = ACTIONS(27),
    [aux_sym_css_named_color_token92] = ACTIONS(27),
    [aux_sym_css_named_color_token93] = ACTIONS(27),
    [aux_sym_css_named_color_token94] = ACTIONS(27),
    [aux_sym_css_named_color_token95] = ACTIONS(27),
    [aux_sym_css_named_color_token96] = ACTIONS(27),
    [aux_sym_css_named_color_token97] = ACTIONS(27),
    [aux_sym_css_named_color_token98] = ACTIONS(27),
    [aux_sym_css_named_color_token99] = ACTIONS(27),
    [aux_sym_css_named_color_token100] = ACTIONS(27),
    [aux_sym_css_named_color_token101] = ACTIONS(27),
    [aux_sym_css_named_color_token102] = ACTIONS(27),
    [aux_sym_css_named_color_token103] = ACTIONS(27),
    [aux_sym_css_named_color_token104] = ACTIONS(29),
    [aux_sym_css_named_color_token105] = ACTIONS(27),
    [aux_sym_css_named_color_token106] = ACTIONS(29),
    [aux_sym_css_named_color_token107] = ACTIONS(27),
    [aux_sym_css_named_color_token108] = ACTIONS(27),
    [aux_sym_css_named_color_token109] = ACTIONS(27),
    [aux_sym_css_named_color_token110] = ACTIONS(27),
    [aux_sym_css_named_color_token111] = ACTIONS(27),
    [aux_sym_css_named_color_token112] = ACTIONS(27),
    [aux_sym_css_named_color_token113] = ACTIONS(27),
    [aux_sym_css_named_color_token114] = ACTIONS(27),
    [aux_sym_css_named_color_token115] = ACTIONS(27),
    [aux_sym_css_named_color_token116] = ACTIONS(27),
    [aux_sym_css_named_color_token117] = ACTIONS(27),
    [aux_sym_css_named_color_token118] = ACTIONS(27),
    [aux_sym_css_named_color_token119] = ACTIONS(27),
    [aux_sym_css_named_color_token120] = ACTIONS(27),
    [aux_sym_css_named_color_token121] = ACTIONS(27),
    [aux_sym_css_named_color_token122] = ACTIONS(27),
    [aux_sym_css_named_color_token123] = ACTIONS(27),
    [aux_sym_css_named_color_token124] = ACTIONS(27),
    [aux_sym_css_named_color_token125] = ACTIONS(27),
    [aux_sym_css_named_color_token126] = ACTIONS(27),
    [aux_sym_css_named_color_token127] = ACTIONS(27),
    [aux_sym_css_named_color_token128] = ACTIONS(27),
    [aux_sym_css_named_color_token129] = ACTIONS(27),
    [aux_sym_css_named_color_token130] = ACTIONS(27),
    [aux_sym_css_named_color_token131] = ACTIONS(27),
    [aux_sym_css_named_color_token132] = ACTIONS(27),
    [aux_sym_css_named_color_token133] = ACTIONS(27),
    [aux_sym_css_named_color_token134] = ACTIONS(27),
    [aux_sym_css_named_color_token135] = ACTIONS(27),
    [aux_sym_css_named_color_token136] = ACTIONS(27),
    [aux_sym_css_named_color_token137] = ACTIONS(27),
    [aux_sym_css_named_color_token138] = ACTIONS(27),
    [aux_sym_css_named_color_token139] = ACTIONS(27),
    [aux_sym_css_named_color_token140] = ACTIONS(27),
    [aux_sym_css_named_color_token141] = ACTIONS(27),
    [aux_sym_css_named_color_token142] = ACTIONS(27),
    [aux_sym_css_named_color_token143] = ACTIONS(27),
    [aux_sym_css_named_color_token144] = ACTIONS(27),
    [aux_sym_css_named_color_token145] = ACTIONS(29),
    [aux_sym_css_named_color_token146] = ACTIONS(27),
    [aux_sym_css_named_color_token147] = ACTIONS(29),
    [aux_sym_css_named_color_token148] = ACTIONS(27),
    [sym_css_keyword_transparent] = ACTIONS(31),
  },
  [2] = {
    [sym_css_function_rgb] = STATE(3),
    [sym_css_function_rgba] = STATE(3),
    [sym_css_function_rgb_legacy] = STATE(6),
    [sym_css_function_rgba_legacy] = STATE(20),
    [sym_css_function_rgb_modern] = STATE(6),
    [sym_css_function_rgba_modern] = STATE(20),
    [sym_css_function_hsl] = STATE(3),
    [sym_css_function_hsl_legacy] = STATE(28),
    [sym_css_function_hsl_modern] = STATE(28),
    [sym_css_function_hsla] = STATE(3),
    [sym_css_function_hsla_legacy] = STATE(15),
    [sym_css_function_hsla_modern] = STATE(15),
    [sym_css_function_hwb] = STATE(3),
    [sym_css_function_lab] = STATE(3),
    [sym_css_function_oklab] = STATE(3),
    [sym_css_function_lch] = STATE(3),
    [sym_css_function_oklch] = STATE(3),
    [sym_css_hex_color] = STATE(3),
    [sym_css_named_color] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(5),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(7),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(9),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(11),
    [aux_sym_css_function_hwb_token1] = ACTIONS(13),
    [aux_sym_css_function_lab_token1] = ACTIONS(15),
    [aux_sym_css_function_oklab_token1] = ACTIONS(17),
    [aux_sym_css_function_lch_token1] = ACTIONS(19),
    [aux_sym_css_function_oklch_token1] = ACTIONS(21),
    [sym_css_hex_color_6_digits] = ACTIONS(23),
    [sym_css_hex_color_8_digits] = ACTIONS(25),
    [sym_css_hex_color_3_digits] = ACTIONS(23),
    [sym_css_hex_color_4_digits] = ACTIONS(23),
    [aux_sym_css_named_color_token1] = ACTIONS(27),
    [aux_sym_css_named_color_token2] = ACTIONS(27),
    [aux_sym_css_named_color_token3] = ACTIONS(29),
    [aux_sym_css_named_color_token4] = ACTIONS(27),
    [aux_sym_css_named_color_token5] = ACTIONS(27),
    [aux_sym_css_named_color_token6] = ACTIONS(27),
    [aux_sym_css_named_color_token7] = ACTIONS(27),
    [aux_sym_css_named_color_token8] = ACTIONS(27),
    [aux_sym_css_named_color_token9] = ACTIONS(27),
    [aux_sym_css_named_color_token10] = ACTIONS(29),
    [aux_sym_css_named_color_token11] = ACTIONS(27),
    [aux_sym_css_named_color_token12] = ACTIONS(27),
    [aux_sym_css_named_color_token13] = ACTIONS(27),
    [aux_sym_css_named_color_token14] = ACTIONS(27),
    [aux_sym_css_named_color_token15] = ACTIONS(27),
    [aux_sym_css_named_color_token16] = ACTIONS(27),
    [aux_sym_css_named_color_token17] = ACTIONS(27),
    [aux_sym_css_named_color_token18] = ACTIONS(27),
    [aux_sym_css_named_color_token19] = ACTIONS(27),
    [aux_sym_css_named_color_token20] = ACTIONS(27),
    [aux_sym_css_named_color_token21] = ACTIONS(27),
    [aux_sym_css_named_color_token22] = ACTIONS(27),
    [aux_sym_css_named_color_token23] = ACTIONS(27),
    [aux_sym_css_named_color_token24] = ACTIONS(27),
    [aux_sym_css_named_color_token25] = ACTIONS(27),
    [aux_sym_css_named_color_token26] = ACTIONS(27),
    [aux_sym_css_named_color_token27] = ACTIONS(27),
    [aux_sym_css_named_color_token28] = ACTIONS(27),
    [aux_sym_css_named_color_token29] = ACTIONS(27),
    [aux_sym_css_named_color_token30] = ACTIONS(27),
    [aux_sym_css_named_color_token31] = ACTIONS(27),
    [aux_sym_css_named_color_token32] = ACTIONS(27),
    [aux_sym_css_named_color_token33] = ACTIONS(27),
    [aux_sym_css_named_color_token34] = ACTIONS(27),
    [aux_sym_css_named_color_token35] = ACTIONS(27),
    [aux_sym_css_named_color_token36] = ACTIONS(27),
    [aux_sym_css_named_color_token37] = ACTIONS(27),
    [aux_sym_css_named_color_token38] = ACTIONS(27),
    [aux_sym_css_named_color_token39] = ACTIONS(27),
    [aux_sym_css_named_color_token40] = ACTIONS(27),
    [aux_sym_css_named_color_token41] = ACTIONS(27),
    [aux_sym_css_named_color_token42] = ACTIONS(27),
    [aux_sym_css_named_color_token43] = ACTIONS(27),
    [aux_sym_css_named_color_token44] = ACTIONS(27),
    [aux_sym_css_named_color_token45] = ACTIONS(27),
    [aux_sym_css_named_color_token46] = ACTIONS(27),
    [aux_sym_css_named_color_token47] = ACTIONS(27),
    [aux_sym_css_named_color_token48] = ACTIONS(27),
    [aux_sym_css_named_color_token49] = ACTIONS(27),
    [aux_sym_css_named_color_token50] = ACTIONS(27),
    [aux_sym_css_named_color_token51] = ACTIONS(27),
    [aux_sym_css_named_color_token52] = ACTIONS(29),
    [aux_sym_css_named_color_token53] = ACTIONS(27),
    [aux_sym_css_named_color_token54] = ACTIONS(27),
    [aux_sym_css_named_color_token55] = ACTIONS(29),
    [aux_sym_css_named_color_token56] = ACTIONS(27),
    [aux_sym_css_named_color_token57] = ACTIONS(27),
    [aux_sym_css_named_color_token58] = ACTIONS(27),
    [aux_sym_css_named_color_token59] = ACTIONS(27),
    [aux_sym_css_named_color_token60] = ACTIONS(27),
    [aux_sym_css_named_color_token61] = ACTIONS(27),
    [aux_sym_css_named_color_token62] = ACTIONS(27),
    [aux_sym_css_named_color_token63] = ACTIONS(27),
    [aux_sym_css_named_color_token64] = ACTIONS(29),
    [aux_sym_css_named_color_token65] = ACTIONS(27),
    [aux_sym_css_named_color_token66] = ACTIONS(27),
    [aux_sym_css_named_color_token67] = ACTIONS(27),
    [aux_sym_css_named_color_token68] = ACTIONS(27),
    [aux_sym_css_named_color_token69] = ACTIONS(27),
    [aux_sym_css_named_color_token70] = ACTIONS(27),
    [aux_sym_css_named_color_token71] = ACTIONS(27),
    [aux_sym_css_named_color_token72] = ACTIONS(27),
    [aux_sym_css_named_color_token73] = ACTIONS(27),
    [aux_sym_css_named_color_token74] = ACTIONS(27),
    [aux_sym_css_named_color_token75] = ACTIONS(27),
    [aux_sym_css_named_color_token76] = ACTIONS(27),
    [aux_sym_css_named_color_token77] = ACTIONS(27),
    [aux_sym_css_named_color_token78] = ACTIONS(27),
    [aux_sym_css_named_color_token79] = ACTIONS(27),
    [aux_sym_css_named_color_token80] = ACTIONS(27),
    [aux_sym_css_named_color_token81] = ACTIONS(27),
    [aux_sym_css_named_color_token82] = ACTIONS(27),
    [aux_sym_css_named_color_token83] = ACTIONS(29),
    [aux_sym_css_named_color_token84] = ACTIONS(27),
    [aux_sym_css_named_color_token85] = ACTIONS(27),
    [aux_sym_css_named_color_token86] = ACTIONS(27),
    [aux_sym_css_named_color_token87] = ACTIONS(27),
    [aux_sym_css_named_color_token88] = ACTIONS(27),
    [aux_sym_css_named_color_token89] = ACTIONS(27),
    [aux_sym_css_named_color_token90] = ACTIONS(27),
    [aux_sym_css_named_color_token91] = ACTIONS(27),
    [aux_sym_css_named_color_token92] = ACTIONS(27),
    [aux_sym_css_named_color_token93] = ACTIONS(27),
    [aux_sym_css_named_color_token94] = ACTIONS(27),
    [aux_sym_css_named_color_token95] = ACTIONS(27),
    [aux_sym_css_named_color_token96] = ACTIONS(27),
    [aux_sym_css_named_color_token97] = ACTIONS(27),
    [aux_sym_css_named_color_token98] = ACTIONS(27),
    [aux_sym_css_named_color_token99] = ACTIONS(27),
    [aux_sym_css_named_color_token100] = ACTIONS(27),
    [aux_sym_css_named_color_token101] = ACTIONS(27),
    [aux_sym_css_named_color_token102] = ACTIONS(27),
    [aux_sym_css_named_color_token103] = ACTIONS(27),
    [aux_sym_css_named_color_token104] = ACTIONS(29),
    [aux_sym_css_named_color_token105] = ACTIONS(27),
    [aux_sym_css_named_color_token106] = ACTIONS(29),
    [aux_sym_css_named_color_token107] = ACTIONS(27),
    [aux_sym_css_named_color_token108] = ACTIONS(27),
    [aux_sym_css_named_color_token109] = ACTIONS(27),
    [aux_sym_css_named_color_token110] = ACTIONS(27),
    [aux_sym_css_named_color_token111] = ACTIONS(27),
    [aux_sym_css_named_color_token112] = ACTIONS(27),
    [aux_sym_css_named_color_token113] = ACTIONS(27),
    [aux_sym_css_named_color_token114] = ACTIONS(27),
    [aux_sym_css_named_color_token115] = ACTIONS(27),
    [aux_sym_css_named_color_token116] = ACTIONS(27),
    [aux_sym_css_named_color_token117] = ACTIONS(27),
    [aux_sym_css_named_color_token118] = ACTIONS(27),
    [aux_sym_css_named_color_token119] = ACTIONS(27),
    [aux_sym_css_named_color_token120] = ACTIONS(27),
    [aux_sym_css_named_color_token121] = ACTIONS(27),
    [aux_sym_css_named_color_token122] = ACTIONS(27),
    [aux_sym_css_named_color_token123] = ACTIONS(27),
    [aux_sym_css_named_color_token124] = ACTIONS(27),
    [aux_sym_css_named_color_token125] = ACTIONS(27),
    [aux_sym_css_named_color_token126] = ACTIONS(27),
    [aux_sym_css_named_color_token127] = ACTIONS(27),
    [aux_sym_css_named_color_token128] = ACTIONS(27),
    [aux_sym_css_named_color_token129] = ACTIONS(27),
    [aux_sym_css_named_color_token130] = ACTIONS(27),
    [aux_sym_css_named_color_token131] = ACTIONS(27),
    [aux_sym_css_named_color_token132] = ACTIONS(27),
    [aux_sym_css_named_color_token133] = ACTIONS(27),
    [aux_sym_css_named_color_token134] = ACTIONS(27),
    [aux_sym_css_named_color_token135] = ACTIONS(27),
    [aux_sym_css_named_color_token136] = ACTIONS(27),
    [aux_sym_css_named_color_token137] = ACTIONS(27),
    [aux_sym_css_named_color_token138] = ACTIONS(27),
    [aux_sym_css_named_color_token139] = ACTIONS(27),
    [aux_sym_css_named_color_token140] = ACTIONS(27),
    [aux_sym_css_named_color_token141] = ACTIONS(27),
    [aux_sym_css_named_color_token142] = ACTIONS(27),
    [aux_sym_css_named_color_token143] = ACTIONS(27),
    [aux_sym_css_named_color_token144] = ACTIONS(27),
    [aux_sym_css_named_color_token145] = ACTIONS(29),
    [aux_sym_css_named_color_token146] = ACTIONS(27),
    [aux_sym_css_named_color_token147] = ACTIONS(29),
    [aux_sym_css_named_color_token148] = ACTIONS(27),
    [sym_css_keyword_transparent] = ACTIONS(35),
  },
  [3] = {
    [sym_css_function_rgb] = STATE(3),
    [sym_css_function_rgba] = STATE(3),
    [sym_css_function_rgb_legacy] = STATE(6),
    [sym_css_function_rgba_legacy] = STATE(20),
    [sym_css_function_rgb_modern] = STATE(6),
    [sym_css_function_rgba_modern] = STATE(20),
    [sym_css_function_hsl] = STATE(3),
    [sym_css_function_hsl_legacy] = STATE(28),
    [sym_css_function_hsl_modern] = STATE(28),
    [sym_css_function_hsla] = STATE(3),
    [sym_css_function_hsla_legacy] = STATE(15),
    [sym_css_function_hsla_modern] = STATE(15),
    [sym_css_function_hwb] = STATE(3),
    [sym_css_function_lab] = STATE(3),
    [sym_css_function_oklab] = STATE(3),
    [sym_css_function_lch] = STATE(3),
    [sym_css_function_oklch] = STATE(3),
    [sym_css_hex_color] = STATE(3),
    [sym_css_named_color] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(39),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(42),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(45),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(48),
    [aux_sym_css_function_hwb_token1] = ACTIONS(51),
    [aux_sym_css_function_lab_token1] = ACTIONS(54),
    [aux_sym_css_function_oklab_token1] = ACTIONS(57),
    [aux_sym_css_function_lch_token1] = ACTIONS(60),
    [aux_sym_css_function_oklch_token1] = ACTIONS(63),
    [sym_css_hex_color_6_digits] = ACTIONS(66),
    [sym_css_hex_color_8_digits] = ACTIONS(69),
    [sym_css_hex_color_3_digits] = ACTIONS(66),
    [sym_css_hex_color_4_digits] = ACTIONS(66),
    [aux_sym_css_named_color_token1] = ACTIONS(72),
    [aux_sym_css_named_color_token2] = ACTIONS(72),
    [aux_sym_css_named_color_token3] = ACTIONS(75),
    [aux_sym_css_named_color_token4] = ACTIONS(72),
    [aux_sym_css_named_color_token5] = ACTIONS(72),
    [aux_sym_css_named_color_token6] = ACTIONS(72),
    [aux_sym_css_named_color_token7] = ACTIONS(72),
    [aux_sym_css_named_color_token8] = ACTIONS(72),
    [aux_sym_css_named_color_token9] = ACTIONS(72),
    [aux_sym_css_named_color_token10] = ACTIONS(75),
    [aux_sym_css_named_color_token11] = ACTIONS(72),
    [aux_sym_css_named_color_token12] = ACTIONS(72),
    [aux_sym_css_named_color_token13] = ACTIONS(72),
    [aux_sym_css_named_color_token14] = ACTIONS(72),
    [aux_sym_css_named_color_token15] = ACTIONS(72),
    [aux_sym_css_named_color_token16] = ACTIONS(72),
    [aux_sym_css_named_color_token17] = ACTIONS(72),
    [aux_sym_css_named_color_token18] = ACTIONS(72),
    [aux_sym_css_named_color_token19] = ACTIONS(72),
    [aux_sym_css_named_color_token20] = ACTIONS(72),
    [aux_sym_css_named_color_token21] = ACTIONS(72),
    [aux_sym_css_named_color_token22] = ACTIONS(72),
    [aux_sym_css_named_color_token23] = ACTIONS(72),
    [aux_sym_css_named_color_token24] = ACTIONS(72),
    [aux_sym_css_named_color_token25] = ACTIONS(72),
    [aux_sym_css_named_color_token26] = ACTIONS(72),
    [aux_sym_css_named_color_token27] = ACTIONS(72),
    [aux_sym_css_named_color_token28] = ACTIONS(72),
    [aux_sym_css_named_color_token29] = ACTIONS(72),
    [aux_sym_css_named_color_token30] = ACTIONS(72),
    [aux_sym_css_named_color_token31] = ACTIONS(72),
    [aux_sym_css_named_color_token32] = ACTIONS(72),
    [aux_sym_css_named_color_token33] = ACTIONS(72),
    [aux_sym_css_named_color_token34] = ACTIONS(72),
    [aux_sym_css_named_color_token35] = ACTIONS(72),
    [aux_sym_css_named_color_token36] = ACTIONS(72),
    [aux_sym_css_named_color_token37] = ACTIONS(72),
    [aux_sym_css_named_color_token38] = ACTIONS(72),
    [aux_sym_css_named_color_token39] = ACTIONS(72),
    [aux_sym_css_named_color_token40] = ACTIONS(72),
    [aux_sym_css_named_color_token41] = ACTIONS(72),
    [aux_sym_css_named_color_token42] = ACTIONS(72),
    [aux_sym_css_named_color_token43] = ACTIONS(72),
    [aux_sym_css_named_color_token44] = ACTIONS(72),
    [aux_sym_css_named_color_token45] = ACTIONS(72),
    [aux_sym_css_named_color_token46] = ACTIONS(72),
    [aux_sym_css_named_color_token47] = ACTIONS(72),
    [aux_sym_css_named_color_token48] = ACTIONS(72),
    [aux_sym_css_named_color_token49] = ACTIONS(72),
    [aux_sym_css_named_color_token50] = ACTIONS(72),
    [aux_sym_css_named_color_token51] = ACTIONS(72),
    [aux_sym_css_named_color_token52] = ACTIONS(75),
    [aux_sym_css_named_color_token53] = ACTIONS(72),
    [aux_sym_css_named_color_token54] = ACTIONS(72),
    [aux_sym_css_named_color_token55] = ACTIONS(75),
    [aux_sym_css_named_color_token56] = ACTIONS(72),
    [aux_sym_css_named_color_token57] = ACTIONS(72),
    [aux_sym_css_named_color_token58] = ACTIONS(72),
    [aux_sym_css_named_color_token59] = ACTIONS(72),
    [aux_sym_css_named_color_token60] = ACTIONS(72),
    [aux_sym_css_named_color_token61] = ACTIONS(72),
    [aux_sym_css_named_color_token62] = ACTIONS(72),
    [aux_sym_css_named_color_token63] = ACTIONS(72),
    [aux_sym_css_named_color_token64] = ACTIONS(75),
    [aux_sym_css_named_color_token65] = ACTIONS(72),
    [aux_sym_css_named_color_token66] = ACTIONS(72),
    [aux_sym_css_named_color_token67] = ACTIONS(72),
    [aux_sym_css_named_color_token68] = ACTIONS(72),
    [aux_sym_css_named_color_token69] = ACTIONS(72),
    [aux_sym_css_named_color_token70] = ACTIONS(72),
    [aux_sym_css_named_color_token71] = ACTIONS(72),
    [aux_sym_css_named_color_token72] = ACTIONS(72),
    [aux_sym_css_named_color_token73] = ACTIONS(72),
    [aux_sym_css_named_color_token74] = ACTIONS(72),
    [aux_sym_css_named_color_token75] = ACTIONS(72),
    [aux_sym_css_named_color_token76] = ACTIONS(72),
    [aux_sym_css_named_color_token77] = ACTIONS(72),
    [aux_sym_css_named_color_token78] = ACTIONS(72),
    [aux_sym_css_named_color_token79] = ACTIONS(72),
    [aux_sym_css_named_color_token80] = ACTIONS(72),
    [aux_sym_css_named_color_token81] = ACTIONS(72),
    [aux_sym_css_named_color_token82] = ACTIONS(72),
    [aux_sym_css_named_color_token83] = ACTIONS(75),
    [aux_sym_css_named_color_token84] = ACTIONS(72),
    [aux_sym_css_named_color_token85] = ACTIONS(72),
    [aux_sym_css_named_color_token86] = ACTIONS(72),
    [aux_sym_css_named_color_token87] = ACTIONS(72),
    [aux_sym_css_named_color_token88] = ACTIONS(72),
    [aux_sym_css_named_color_token89] = ACTIONS(72),
    [aux_sym_css_named_color_token90] = ACTIONS(72),
    [aux_sym_css_named_color_token91] = ACTIONS(72),
    [aux_sym_css_named_color_token92] = ACTIONS(72),
    [aux_sym_css_named_color_token93] = ACTIONS(72),
    [aux_sym_css_named_color_token94] = ACTIONS(72),
    [aux_sym_css_named_color_token95] = ACTIONS(72),
    [aux_sym_css_named_color_token96] = ACTIONS(72),
    [aux_sym_css_named_color_token97] = ACTIONS(72),
    [aux_sym_css_named_color_token98] = ACTIONS(72),
    [aux_sym_css_named_color_token99] = ACTIONS(72),
    [aux_sym_css_named_color_token100] = ACTIONS(72),
    [aux_sym_css_named_color_token101] = ACTIONS(72),
    [aux_sym_css_named_color_token102] = ACTIONS(72),
    [aux_sym_css_named_color_token103] = ACTIONS(72),
    [aux_sym_css_named_color_token104] = ACTIONS(75),
    [aux_sym_css_named_color_token105] = ACTIONS(72),
    [aux_sym_css_named_color_token106] = ACTIONS(75),
    [aux_sym_css_named_color_token107] = ACTIONS(72),
    [aux_sym_css_named_color_token108] = ACTIONS(72),
    [aux_sym_css_named_color_token109] = ACTIONS(72),
    [aux_sym_css_named_color_token110] = ACTIONS(72),
    [aux_sym_css_named_color_token111] = ACTIONS(72),
    [aux_sym_css_named_color_token112] = ACTIONS(72),
    [aux_sym_css_named_color_token113] = ACTIONS(72),
    [aux_sym_css_named_color_token114] = ACTIONS(72),
    [aux_sym_css_named_color_token115] = ACTIONS(72),
    [aux_sym_css_named_color_token116] = ACTIONS(72),
    [aux_sym_css_named_color_token117] = ACTIONS(72),
    [aux_sym_css_named_color_token118] = ACTIONS(72),
    [aux_sym_css_named_color_token119] = ACTIONS(72),
    [aux_sym_css_named_color_token120] = ACTIONS(72),
    [aux_sym_css_named_color_token121] = ACTIONS(72),
    [aux_sym_css_named_color_token122] = ACTIONS(72),
    [aux_sym_css_named_color_token123] = ACTIONS(72),
    [aux_sym_css_named_color_token124] = ACTIONS(72),
    [aux_sym_css_named_color_token125] = ACTIONS(72),
    [aux_sym_css_named_color_token126] = ACTIONS(72),
    [aux_sym_css_named_color_token127] = ACTIONS(72),
    [aux_sym_css_named_color_token128] = ACTIONS(72),
    [aux_sym_css_named_color_token129] = ACTIONS(72),
    [aux_sym_css_named_color_token130] = ACTIONS(72),
    [aux_sym_css_named_color_token131] = ACTIONS(72),
    [aux_sym_css_named_color_token132] = ACTIONS(72),
    [aux_sym_css_named_color_token133] = ACTIONS(72),
    [aux_sym_css_named_color_token134] = ACTIONS(72),
    [aux_sym_css_named_color_token135] = ACTIONS(72),
    [aux_sym_css_named_color_token136] = ACTIONS(72),
    [aux_sym_css_named_color_token137] = ACTIONS(72),
    [aux_sym_css_named_color_token138] = ACTIONS(72),
    [aux_sym_css_named_color_token139] = ACTIONS(72),
    [aux_sym_css_named_color_token140] = ACTIONS(72),
    [aux_sym_css_named_color_token141] = ACTIONS(72),
    [aux_sym_css_named_color_token142] = ACTIONS(72),
    [aux_sym_css_named_color_token143] = ACTIONS(72),
    [aux_sym_css_named_color_token144] = ACTIONS(72),
    [aux_sym_css_named_color_token145] = ACTIONS(75),
    [aux_sym_css_named_color_token146] = ACTIONS(72),
    [aux_sym_css_named_color_token147] = ACTIONS(75),
    [aux_sym_css_named_color_token148] = ACTIONS(72),
    [sym_css_keyword_transparent] = ACTIONS(78),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(83),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(81),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(83),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(81),
    [aux_sym_css_function_hwb_token1] = ACTIONS(81),
    [aux_sym_css_function_lab_token1] = ACTIONS(81),
    [aux_sym_css_function_oklab_token1] = ACTIONS(81),
    [aux_sym_css_function_lch_token1] = ACTIONS(81),
    [aux_sym_css_function_oklch_token1] = ACTIONS(81),
    [sym_css_hex_color_6_digits] = ACTIONS(83),
    [sym_css_hex_color_8_digits] = ACTIONS(81),
    [sym_css_hex_color_3_digits] = ACTIONS(83),
    [sym_css_hex_color_4_digits] = ACTIONS(83),
    [aux_sym_css_named_color_token1] = ACTIONS(81),
    [aux_sym_css_named_color_token2] = ACTIONS(81),
    [aux_sym_css_named_color_token3] = ACTIONS(83),
    [aux_sym_css_named_color_token4] = ACTIONS(81),
    [aux_sym_css_named_color_token5] = ACTIONS(81),
    [aux_sym_css_named_color_token6] = ACTIONS(81),
    [aux_sym_css_named_color_token7] = ACTIONS(81),
    [aux_sym_css_named_color_token8] = ACTIONS(81),
    [aux_sym_css_named_color_token9] = ACTIONS(81),
    [aux_sym_css_named_color_token10] = ACTIONS(83),
    [aux_sym_css_named_color_token11] = ACTIONS(81),
    [aux_sym_css_named_color_token12] = ACTIONS(81),
    [aux_sym_css_named_color_token13] = ACTIONS(81),
    [aux_sym_css_named_color_token14] = ACTIONS(81),
    [aux_sym_css_named_color_token15] = ACTIONS(81),
    [aux_sym_css_named_color_token16] = ACTIONS(81),
    [aux_sym_css_named_color_token17] = ACTIONS(81),
    [aux_sym_css_named_color_token18] = ACTIONS(81),
    [aux_sym_css_named_color_token19] = ACTIONS(81),
    [aux_sym_css_named_color_token20] = ACTIONS(81),
    [aux_sym_css_named_color_token21] = ACTIONS(81),
    [aux_sym_css_named_color_token22] = ACTIONS(81),
    [aux_sym_css_named_color_token23] = ACTIONS(81),
    [aux_sym_css_named_color_token24] = ACTIONS(81),
    [aux_sym_css_named_color_token25] = ACTIONS(81),
    [aux_sym_css_named_color_token26] = ACTIONS(81),
    [aux_sym_css_named_color_token27] = ACTIONS(81),
    [aux_sym_css_named_color_token28] = ACTIONS(81),
    [aux_sym_css_named_color_token29] = ACTIONS(81),
    [aux_sym_css_named_color_token30] = ACTIONS(81),
    [aux_sym_css_named_color_token31] = ACTIONS(81),
    [aux_sym_css_named_color_token32] = ACTIONS(81),
    [aux_sym_css_named_color_token33] = ACTIONS(81),
    [aux_sym_css_named_color_token34] = ACTIONS(81),
    [aux_sym_css_named_color_token35] = ACTIONS(81),
    [aux_sym_css_named_color_token36] = ACTIONS(81),
    [aux_sym_css_named_color_token37] = ACTIONS(81),
    [aux_sym_css_named_color_token38] = ACTIONS(81),
    [aux_sym_css_named_color_token39] = ACTIONS(81),
    [aux_sym_css_named_color_token40] = ACTIONS(81),
    [aux_sym_css_named_color_token41] = ACTIONS(81),
    [aux_sym_css_named_color_token42] = ACTIONS(81),
    [aux_sym_css_named_color_token43] = ACTIONS(81),
    [aux_sym_css_named_color_token44] = ACTIONS(81),
    [aux_sym_css_named_color_token45] = ACTIONS(81),
    [aux_sym_css_named_color_token46] = ACTIONS(81),
    [aux_sym_css_named_color_token47] = ACTIONS(81),
    [aux_sym_css_named_color_token48] = ACTIONS(81),
    [aux_sym_css_named_color_token49] = ACTIONS(81),
    [aux_sym_css_named_color_token50] = ACTIONS(81),
    [aux_sym_css_named_color_token51] = ACTIONS(81),
    [aux_sym_css_named_color_token52] = ACTIONS(83),
    [aux_sym_css_named_color_token53] = ACTIONS(81),
    [aux_sym_css_named_color_token54] = ACTIONS(81),
    [aux_sym_css_named_color_token55] = ACTIONS(83),
    [aux_sym_css_named_color_token56] = ACTIONS(81),
    [aux_sym_css_named_color_token57] = ACTIONS(81),
    [aux_sym_css_named_color_token58] = ACTIONS(81),
    [aux_sym_css_named_color_token59] = ACTIONS(81),
    [aux_sym_css_named_color_token60] = ACTIONS(81),
    [aux_sym_css_named_color_token61] = ACTIONS(81),
    [aux_sym_css_named_color_token62] = ACTIONS(81),
    [aux_sym_css_named_color_token63] = ACTIONS(81),
    [aux_sym_css_named_color_token64] = ACTIONS(83),
    [aux_sym_css_named_color_token65] = ACTIONS(81),
    [aux_sym_css_named_color_token66] = ACTIONS(81),
    [aux_sym_css_named_color_token67] = ACTIONS(81),
    [aux_sym_css_named_color_token68] = ACTIONS(81),
    [aux_sym_css_named_color_token69] = ACTIONS(81),
    [aux_sym_css_named_color_token70] = ACTIONS(81),
    [aux_sym_css_named_color_token71] = ACTIONS(81),
    [aux_sym_css_named_color_token72] = ACTIONS(81),
    [aux_sym_css_named_color_token73] = ACTIONS(81),
    [aux_sym_css_named_color_token74] = ACTIONS(81),
    [aux_sym_css_named_color_token75] = ACTIONS(81),
    [aux_sym_css_named_color_token76] = ACTIONS(81),
    [aux_sym_css_named_color_token77] = ACTIONS(81),
    [aux_sym_css_named_color_token78] = ACTIONS(81),
    [aux_sym_css_named_color_token79] = ACTIONS(81),
    [aux_sym_css_named_color_token80] = ACTIONS(81),
    [aux_sym_css_named_color_token81] = ACTIONS(81),
    [aux_sym_css_named_color_token82] = ACTIONS(81),
    [aux_sym_css_named_color_token83] = ACTIONS(83),
    [aux_sym_css_named_color_token84] = ACTIONS(81),
    [aux_sym_css_named_color_token85] = ACTIONS(81),
    [aux_sym_css_named_color_token86] = ACTIONS(81),
    [aux_sym_css_named_color_token87] = ACTIONS(81),
    [aux_sym_css_named_color_token88] = ACTIONS(81),
    [aux_sym_css_named_color_token89] = ACTIONS(81),
    [aux_sym_css_named_color_token90] = ACTIONS(81),
    [aux_sym_css_named_color_token91] = ACTIONS(81),
    [aux_sym_css_named_color_token92] = ACTIONS(81),
    [aux_sym_css_named_color_token93] = ACTIONS(81),
    [aux_sym_css_named_color_token94] = ACTIONS(81),
    [aux_sym_css_named_color_token95] = ACTIONS(81),
    [aux_sym_css_named_color_token96] = ACTIONS(81),
    [aux_sym_css_named_color_token97] = ACTIONS(81),
    [aux_sym_css_named_color_token98] = ACTIONS(81),
    [aux_sym_css_named_color_token99] = ACTIONS(81),
    [aux_sym_css_named_color_token100] = ACTIONS(81),
    [aux_sym_css_named_color_token101] = ACTIONS(81),
    [aux_sym_css_named_color_token102] = ACTIONS(81),
    [aux_sym_css_named_color_token103] = ACTIONS(81),
    [aux_sym_css_named_color_token104] = ACTIONS(83),
    [aux_sym_css_named_color_token105] = ACTIONS(81),
    [aux_sym_css_named_color_token106] = ACTIONS(83),
    [aux_sym_css_named_color_token107] = ACTIONS(81),
    [aux_sym_css_named_color_token108] = ACTIONS(81),
    [aux_sym_css_named_color_token109] = ACTIONS(81),
    [aux_sym_css_named_color_token110] = ACTIONS(81),
    [aux_sym_css_named_color_token111] = ACTIONS(81),
    [aux_sym_css_named_color_token112] = ACTIONS(81),
    [aux_sym_css_named_color_token113] = ACTIONS(81),
    [aux_sym_css_named_color_token114] = ACTIONS(81),
    [aux_sym_css_named_color_token115] = ACTIONS(81),
    [aux_sym_css_named_color_token116] = ACTIONS(81),
    [aux_sym_css_named_color_token117] = ACTIONS(81),
    [aux_sym_css_named_color_token118] = ACTIONS(81),
    [aux_sym_css_named_color_token119] = ACTIONS(81),
    [aux_sym_css_named_color_token120] = ACTIONS(81),
    [aux_sym_css_named_color_token121] = ACTIONS(81),
    [aux_sym_css_named_color_token122] = ACTIONS(81),
    [aux_sym_css_named_color_token123] = ACTIONS(81),
    [aux_sym_css_named_color_token124] = ACTIONS(81),
    [aux_sym_css_named_color_token125] = ACTIONS(81),
    [aux_sym_css_named_color_token126] = ACTIONS(81),
    [aux_sym_css_named_color_token127] = ACTIONS(81),
    [aux_sym_css_named_color_token128] = ACTIONS(81),
    [aux_sym_css_named_color_token129] = ACTIONS(81),
    [aux_sym_css_named_color_token130] = ACTIONS(81),
    [aux_sym_css_named_color_token131] = ACTIONS(81),
    [aux_sym_css_named_color_token132] = ACTIONS(81),
    [aux_sym_css_named_color_token133] = ACTIONS(81),
    [aux_sym_css_named_color_token134] = ACTIONS(81),
    [aux_sym_css_named_color_token135] = ACTIONS(81),
    [aux_sym_css_named_color_token136] = ACTIONS(81),
    [aux_sym_css_named_color_token137] = ACTIONS(81),
    [aux_sym_css_named_color_token138] = ACTIONS(81),
    [aux_sym_css_named_color_token139] = ACTIONS(81),
    [aux_sym_css_named_color_token140] = ACTIONS(81),
    [aux_sym_css_named_color_token141] = ACTIONS(81),
    [aux_sym_css_named_color_token142] = ACTIONS(81),
    [aux_sym_css_named_color_token143] = ACTIONS(81),
    [aux_sym_css_named_color_token144] = ACTIONS(81),
    [aux_sym_css_named_color_token145] = ACTIONS(83),
    [aux_sym_css_named_color_token146] = ACTIONS(81),
    [aux_sym_css_named_color_token147] = ACTIONS(83),
    [aux_sym_css_named_color_token148] = ACTIONS(81),
    [sym_css_keyword_transparent] = ACTIONS(81),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(87),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(85),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(87),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(85),
    [aux_sym_css_function_hwb_token1] = ACTIONS(85),
    [aux_sym_css_function_lab_token1] = ACTIONS(85),
    [aux_sym_css_function_oklab_token1] = ACTIONS(85),
    [aux_sym_css_function_lch_token1] = ACTIONS(85),
    [aux_sym_css_function_oklch_token1] = ACTIONS(85),
    [sym_css_hex_color_6_digits] = ACTIONS(87),
    [sym_css_hex_color_8_digits] = ACTIONS(85),
    [sym_css_hex_color_3_digits] = ACTIONS(87),
    [sym_css_hex_color_4_digits] = ACTIONS(87),
    [aux_sym_css_named_color_token1] = ACTIONS(85),
    [aux_sym_css_named_color_token2] = ACTIONS(85),
    [aux_sym_css_named_color_token3] = ACTIONS(87),
    [aux_sym_css_named_color_token4] = ACTIONS(85),
    [aux_sym_css_named_color_token5] = ACTIONS(85),
    [aux_sym_css_named_color_token6] = ACTIONS(85),
    [aux_sym_css_named_color_token7] = ACTIONS(85),
    [aux_sym_css_named_color_token8] = ACTIONS(85),
    [aux_sym_css_named_color_token9] = ACTIONS(85),
    [aux_sym_css_named_color_token10] = ACTIONS(87),
    [aux_sym_css_named_color_token11] = ACTIONS(85),
    [aux_sym_css_named_color_token12] = ACTIONS(85),
    [aux_sym_css_named_color_token13] = ACTIONS(85),
    [aux_sym_css_named_color_token14] = ACTIONS(85),
    [aux_sym_css_named_color_token15] = ACTIONS(85),
    [aux_sym_css_named_color_token16] = ACTIONS(85),
    [aux_sym_css_named_color_token17] = ACTIONS(85),
    [aux_sym_css_named_color_token18] = ACTIONS(85),
    [aux_sym_css_named_color_token19] = ACTIONS(85),
    [aux_sym_css_named_color_token20] = ACTIONS(85),
    [aux_sym_css_named_color_token21] = ACTIONS(85),
    [aux_sym_css_named_color_token22] = ACTIONS(85),
    [aux_sym_css_named_color_token23] = ACTIONS(85),
    [aux_sym_css_named_color_token24] = ACTIONS(85),
    [aux_sym_css_named_color_token25] = ACTIONS(85),
    [aux_sym_css_named_color_token26] = ACTIONS(85),
    [aux_sym_css_named_color_token27] = ACTIONS(85),
    [aux_sym_css_named_color_token28] = ACTIONS(85),
    [aux_sym_css_named_color_token29] = ACTIONS(85),
    [aux_sym_css_named_color_token30] = ACTIONS(85),
    [aux_sym_css_named_color_token31] = ACTIONS(85),
    [aux_sym_css_named_color_token32] = ACTIONS(85),
    [aux_sym_css_named_color_token33] = ACTIONS(85),
    [aux_sym_css_named_color_token34] = ACTIONS(85),
    [aux_sym_css_named_color_token35] = ACTIONS(85),
    [aux_sym_css_named_color_token36] = ACTIONS(85),
    [aux_sym_css_named_color_token37] = ACTIONS(85),
    [aux_sym_css_named_color_token38] = ACTIONS(85),
    [aux_sym_css_named_color_token39] = ACTIONS(85),
    [aux_sym_css_named_color_token40] = ACTIONS(85),
    [aux_sym_css_named_color_token41] = ACTIONS(85),
    [aux_sym_css_named_color_token42] = ACTIONS(85),
    [aux_sym_css_named_color_token43] = ACTIONS(85),
    [aux_sym_css_named_color_token44] = ACTIONS(85),
    [aux_sym_css_named_color_token45] = ACTIONS(85),
    [aux_sym_css_named_color_token46] = ACTIONS(85),
    [aux_sym_css_named_color_token47] = ACTIONS(85),
    [aux_sym_css_named_color_token48] = ACTIONS(85),
    [aux_sym_css_named_color_token49] = ACTIONS(85),
    [aux_sym_css_named_color_token50] = ACTIONS(85),
    [aux_sym_css_named_color_token51] = ACTIONS(85),
    [aux_sym_css_named_color_token52] = ACTIONS(87),
    [aux_sym_css_named_color_token53] = ACTIONS(85),
    [aux_sym_css_named_color_token54] = ACTIONS(85),
    [aux_sym_css_named_color_token55] = ACTIONS(87),
    [aux_sym_css_named_color_token56] = ACTIONS(85),
    [aux_sym_css_named_color_token57] = ACTIONS(85),
    [aux_sym_css_named_color_token58] = ACTIONS(85),
    [aux_sym_css_named_color_token59] = ACTIONS(85),
    [aux_sym_css_named_color_token60] = ACTIONS(85),
    [aux_sym_css_named_color_token61] = ACTIONS(85),
    [aux_sym_css_named_color_token62] = ACTIONS(85),
    [aux_sym_css_named_color_token63] = ACTIONS(85),
    [aux_sym_css_named_color_token64] = ACTIONS(87),
    [aux_sym_css_named_color_token65] = ACTIONS(85),
    [aux_sym_css_named_color_token66] = ACTIONS(85),
    [aux_sym_css_named_color_token67] = ACTIONS(85),
    [aux_sym_css_named_color_token68] = ACTIONS(85),
    [aux_sym_css_named_color_token69] = ACTIONS(85),
    [aux_sym_css_named_color_token70] = ACTIONS(85),
    [aux_sym_css_named_color_token71] = ACTIONS(85),
    [aux_sym_css_named_color_token72] = ACTIONS(85),
    [aux_sym_css_named_color_token73] = ACTIONS(85),
    [aux_sym_css_named_color_token74] = ACTIONS(85),
    [aux_sym_css_named_color_token75] = ACTIONS(85),
    [aux_sym_css_named_color_token76] = ACTIONS(85),
    [aux_sym_css_named_color_token77] = ACTIONS(85),
    [aux_sym_css_named_color_token78] = ACTIONS(85),
    [aux_sym_css_named_color_token79] = ACTIONS(85),
    [aux_sym_css_named_color_token80] = ACTIONS(85),
    [aux_sym_css_named_color_token81] = ACTIONS(85),
    [aux_sym_css_named_color_token82] = ACTIONS(85),
    [aux_sym_css_named_color_token83] = ACTIONS(87),
    [aux_sym_css_named_color_token84] = ACTIONS(85),
    [aux_sym_css_named_color_token85] = ACTIONS(85),
    [aux_sym_css_named_color_token86] = ACTIONS(85),
    [aux_sym_css_named_color_token87] = ACTIONS(85),
    [aux_sym_css_named_color_token88] = ACTIONS(85),
    [aux_sym_css_named_color_token89] = ACTIONS(85),
    [aux_sym_css_named_color_token90] = ACTIONS(85),
    [aux_sym_css_named_color_token91] = ACTIONS(85),
    [aux_sym_css_named_color_token92] = ACTIONS(85),
    [aux_sym_css_named_color_token93] = ACTIONS(85),
    [aux_sym_css_named_color_token94] = ACTIONS(85),
    [aux_sym_css_named_color_token95] = ACTIONS(85),
    [aux_sym_css_named_color_token96] = ACTIONS(85),
    [aux_sym_css_named_color_token97] = ACTIONS(85),
    [aux_sym_css_named_color_token98] = ACTIONS(85),
    [aux_sym_css_named_color_token99] = ACTIONS(85),
    [aux_sym_css_named_color_token100] = ACTIONS(85),
    [aux_sym_css_named_color_token101] = ACTIONS(85),
    [aux_sym_css_named_color_token102] = ACTIONS(85),
    [aux_sym_css_named_color_token103] = ACTIONS(85),
    [aux_sym_css_named_color_token104] = ACTIONS(87),
    [aux_sym_css_named_color_token105] = ACTIONS(85),
    [aux_sym_css_named_color_token106] = ACTIONS(87),
    [aux_sym_css_named_color_token107] = ACTIONS(85),
    [aux_sym_css_named_color_token108] = ACTIONS(85),
    [aux_sym_css_named_color_token109] = ACTIONS(85),
    [aux_sym_css_named_color_token110] = ACTIONS(85),
    [aux_sym_css_named_color_token111] = ACTIONS(85),
    [aux_sym_css_named_color_token112] = ACTIONS(85),
    [aux_sym_css_named_color_token113] = ACTIONS(85),
    [aux_sym_css_named_color_token114] = ACTIONS(85),
    [aux_sym_css_named_color_token115] = ACTIONS(85),
    [aux_sym_css_named_color_token116] = ACTIONS(85),
    [aux_sym_css_named_color_token117] = ACTIONS(85),
    [aux_sym_css_named_color_token118] = ACTIONS(85),
    [aux_sym_css_named_color_token119] = ACTIONS(85),
    [aux_sym_css_named_color_token120] = ACTIONS(85),
    [aux_sym_css_named_color_token121] = ACTIONS(85),
    [aux_sym_css_named_color_token122] = ACTIONS(85),
    [aux_sym_css_named_color_token123] = ACTIONS(85),
    [aux_sym_css_named_color_token124] = ACTIONS(85),
    [aux_sym_css_named_color_token125] = ACTIONS(85),
    [aux_sym_css_named_color_token126] = ACTIONS(85),
    [aux_sym_css_named_color_token127] = ACTIONS(85),
    [aux_sym_css_named_color_token128] = ACTIONS(85),
    [aux_sym_css_named_color_token129] = ACTIONS(85),
    [aux_sym_css_named_color_token130] = ACTIONS(85),
    [aux_sym_css_named_color_token131] = ACTIONS(85),
    [aux_sym_css_named_color_token132] = ACTIONS(85),
    [aux_sym_css_named_color_token133] = ACTIONS(85),
    [aux_sym_css_named_color_token134] = ACTIONS(85),
    [aux_sym_css_named_color_token135] = ACTIONS(85),
    [aux_sym_css_named_color_token136] = ACTIONS(85),
    [aux_sym_css_named_color_token137] = ACTIONS(85),
    [aux_sym_css_named_color_token138] = ACTIONS(85),
    [aux_sym_css_named_color_token139] = ACTIONS(85),
    [aux_sym_css_named_color_token140] = ACTIONS(85),
    [aux_sym_css_named_color_token141] = ACTIONS(85),
    [aux_sym_css_named_color_token142] = ACTIONS(85),
    [aux_sym_css_named_color_token143] = ACTIONS(85),
    [aux_sym_css_named_color_token144] = ACTIONS(85),
    [aux_sym_css_named_color_token145] = ACTIONS(87),
    [aux_sym_css_named_color_token146] = ACTIONS(85),
    [aux_sym_css_named_color_token147] = ACTIONS(87),
    [aux_sym_css_named_color_token148] = ACTIONS(85),
    [sym_css_keyword_transparent] = ACTIONS(85),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(91),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(89),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(91),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(89),
    [aux_sym_css_function_hwb_token1] = ACTIONS(89),
    [aux_sym_css_function_lab_token1] = ACTIONS(89),
    [aux_sym_css_function_oklab_token1] = ACTIONS(89),
    [aux_sym_css_function_lch_token1] = ACTIONS(89),
    [aux_sym_css_function_oklch_token1] = ACTIONS(89),
    [sym_css_hex_color_6_digits] = ACTIONS(91),
    [sym_css_hex_color_8_digits] = ACTIONS(89),
    [sym_css_hex_color_3_digits] = ACTIONS(91),
    [sym_css_hex_color_4_digits] = ACTIONS(91),
    [aux_sym_css_named_color_token1] = ACTIONS(89),
    [aux_sym_css_named_color_token2] = ACTIONS(89),
    [aux_sym_css_named_color_token3] = ACTIONS(91),
    [aux_sym_css_named_color_token4] = ACTIONS(89),
    [aux_sym_css_named_color_token5] = ACTIONS(89),
    [aux_sym_css_named_color_token6] = ACTIONS(89),
    [aux_sym_css_named_color_token7] = ACTIONS(89),
    [aux_sym_css_named_color_token8] = ACTIONS(89),
    [aux_sym_css_named_color_token9] = ACTIONS(89),
    [aux_sym_css_named_color_token10] = ACTIONS(91),
    [aux_sym_css_named_color_token11] = ACTIONS(89),
    [aux_sym_css_named_color_token12] = ACTIONS(89),
    [aux_sym_css_named_color_token13] = ACTIONS(89),
    [aux_sym_css_named_color_token14] = ACTIONS(89),
    [aux_sym_css_named_color_token15] = ACTIONS(89),
    [aux_sym_css_named_color_token16] = ACTIONS(89),
    [aux_sym_css_named_color_token17] = ACTIONS(89),
    [aux_sym_css_named_color_token18] = ACTIONS(89),
    [aux_sym_css_named_color_token19] = ACTIONS(89),
    [aux_sym_css_named_color_token20] = ACTIONS(89),
    [aux_sym_css_named_color_token21] = ACTIONS(89),
    [aux_sym_css_named_color_token22] = ACTIONS(89),
    [aux_sym_css_named_color_token23] = ACTIONS(89),
    [aux_sym_css_named_color_token24] = ACTIONS(89),
    [aux_sym_css_named_color_token25] = ACTIONS(89),
    [aux_sym_css_named_color_token26] = ACTIONS(89),
    [aux_sym_css_named_color_token27] = ACTIONS(89),
    [aux_sym_css_named_color_token28] = ACTIONS(89),
    [aux_sym_css_named_color_token29] = ACTIONS(89),
    [aux_sym_css_named_color_token30] = ACTIONS(89),
    [aux_sym_css_named_color_token31] = ACTIONS(89),
    [aux_sym_css_named_color_token32] = ACTIONS(89),
    [aux_sym_css_named_color_token33] = ACTIONS(89),
    [aux_sym_css_named_color_token34] = ACTIONS(89),
    [aux_sym_css_named_color_token35] = ACTIONS(89),
    [aux_sym_css_named_color_token36] = ACTIONS(89),
    [aux_sym_css_named_color_token37] = ACTIONS(89),
    [aux_sym_css_named_color_token38] = ACTIONS(89),
    [aux_sym_css_named_color_token39] = ACTIONS(89),
    [aux_sym_css_named_color_token40] = ACTIONS(89),
    [aux_sym_css_named_color_token41] = ACTIONS(89),
    [aux_sym_css_named_color_token42] = ACTIONS(89),
    [aux_sym_css_named_color_token43] = ACTIONS(89),
    [aux_sym_css_named_color_token44] = ACTIONS(89),
    [aux_sym_css_named_color_token45] = ACTIONS(89),
    [aux_sym_css_named_color_token46] = ACTIONS(89),
    [aux_sym_css_named_color_token47] = ACTIONS(89),
    [aux_sym_css_named_color_token48] = ACTIONS(89),
    [aux_sym_css_named_color_token49] = ACTIONS(89),
    [aux_sym_css_named_color_token50] = ACTIONS(89),
    [aux_sym_css_named_color_token51] = ACTIONS(89),
    [aux_sym_css_named_color_token52] = ACTIONS(91),
    [aux_sym_css_named_color_token53] = ACTIONS(89),
    [aux_sym_css_named_color_token54] = ACTIONS(89),
    [aux_sym_css_named_color_token55] = ACTIONS(91),
    [aux_sym_css_named_color_token56] = ACTIONS(89),
    [aux_sym_css_named_color_token57] = ACTIONS(89),
    [aux_sym_css_named_color_token58] = ACTIONS(89),
    [aux_sym_css_named_color_token59] = ACTIONS(89),
    [aux_sym_css_named_color_token60] = ACTIONS(89),
    [aux_sym_css_named_color_token61] = ACTIONS(89),
    [aux_sym_css_named_color_token62] = ACTIONS(89),
    [aux_sym_css_named_color_token63] = ACTIONS(89),
    [aux_sym_css_named_color_token64] = ACTIONS(91),
    [aux_sym_css_named_color_token65] = ACTIONS(89),
    [aux_sym_css_named_color_token66] = ACTIONS(89),
    [aux_sym_css_named_color_token67] = ACTIONS(89),
    [aux_sym_css_named_color_token68] = ACTIONS(89),
    [aux_sym_css_named_color_token69] = ACTIONS(89),
    [aux_sym_css_named_color_token70] = ACTIONS(89),
    [aux_sym_css_named_color_token71] = ACTIONS(89),
    [aux_sym_css_named_color_token72] = ACTIONS(89),
    [aux_sym_css_named_color_token73] = ACTIONS(89),
    [aux_sym_css_named_color_token74] = ACTIONS(89),
    [aux_sym_css_named_color_token75] = ACTIONS(89),
    [aux_sym_css_named_color_token76] = ACTIONS(89),
    [aux_sym_css_named_color_token77] = ACTIONS(89),
    [aux_sym_css_named_color_token78] = ACTIONS(89),
    [aux_sym_css_named_color_token79] = ACTIONS(89),
    [aux_sym_css_named_color_token80] = ACTIONS(89),
    [aux_sym_css_named_color_token81] = ACTIONS(89),
    [aux_sym_css_named_color_token82] = ACTIONS(89),
    [aux_sym_css_named_color_token83] = ACTIONS(91),
    [aux_sym_css_named_color_token84] = ACTIONS(89),
    [aux_sym_css_named_color_token85] = ACTIONS(89),
    [aux_sym_css_named_color_token86] = ACTIONS(89),
    [aux_sym_css_named_color_token87] = ACTIONS(89),
    [aux_sym_css_named_color_token88] = ACTIONS(89),
    [aux_sym_css_named_color_token89] = ACTIONS(89),
    [aux_sym_css_named_color_token90] = ACTIONS(89),
    [aux_sym_css_named_color_token91] = ACTIONS(89),
    [aux_sym_css_named_color_token92] = ACTIONS(89),
    [aux_sym_css_named_color_token93] = ACTIONS(89),
    [aux_sym_css_named_color_token94] = ACTIONS(89),
    [aux_sym_css_named_color_token95] = ACTIONS(89),
    [aux_sym_css_named_color_token96] = ACTIONS(89),
    [aux_sym_css_named_color_token97] = ACTIONS(89),
    [aux_sym_css_named_color_token98] = ACTIONS(89),
    [aux_sym_css_named_color_token99] = ACTIONS(89),
    [aux_sym_css_named_color_token100] = ACTIONS(89),
    [aux_sym_css_named_color_token101] = ACTIONS(89),
    [aux_sym_css_named_color_token102] = ACTIONS(89),
    [aux_sym_css_named_color_token103] = ACTIONS(89),
    [aux_sym_css_named_color_token104] = ACTIONS(91),
    [aux_sym_css_named_color_token105] = ACTIONS(89),
    [aux_sym_css_named_color_token106] = ACTIONS(91),
    [aux_sym_css_named_color_token107] = ACTIONS(89),
    [aux_sym_css_named_color_token108] = ACTIONS(89),
    [aux_sym_css_named_color_token109] = ACTIONS(89),
    [aux_sym_css_named_color_token110] = ACTIONS(89),
    [aux_sym_css_named_color_token111] = ACTIONS(89),
    [aux_sym_css_named_color_token112] = ACTIONS(89),
    [aux_sym_css_named_color_token113] = ACTIONS(89),
    [aux_sym_css_named_color_token114] = ACTIONS(89),
    [aux_sym_css_named_color_token115] = ACTIONS(89),
    [aux_sym_css_named_color_token116] = ACTIONS(89),
    [aux_sym_css_named_color_token117] = ACTIONS(89),
    [aux_sym_css_named_color_token118] = ACTIONS(89),
    [aux_sym_css_named_color_token119] = ACTIONS(89),
    [aux_sym_css_named_color_token120] = ACTIONS(89),
    [aux_sym_css_named_color_token121] = ACTIONS(89),
    [aux_sym_css_named_color_token122] = ACTIONS(89),
    [aux_sym_css_named_color_token123] = ACTIONS(89),
    [aux_sym_css_named_color_token124] = ACTIONS(89),
    [aux_sym_css_named_color_token125] = ACTIONS(89),
    [aux_sym_css_named_color_token126] = ACTIONS(89),
    [aux_sym_css_named_color_token127] = ACTIONS(89),
    [aux_sym_css_named_color_token128] = ACTIONS(89),
    [aux_sym_css_named_color_token129] = ACTIONS(89),
    [aux_sym_css_named_color_token130] = ACTIONS(89),
    [aux_sym_css_named_color_token131] = ACTIONS(89),
    [aux_sym_css_named_color_token132] = ACTIONS(89),
    [aux_sym_css_named_color_token133] = ACTIONS(89),
    [aux_sym_css_named_color_token134] = ACTIONS(89),
    [aux_sym_css_named_color_token135] = ACTIONS(89),
    [aux_sym_css_named_color_token136] = ACTIONS(89),
    [aux_sym_css_named_color_token137] = ACTIONS(89),
    [aux_sym_css_named_color_token138] = ACTIONS(89),
    [aux_sym_css_named_color_token139] = ACTIONS(89),
    [aux_sym_css_named_color_token140] = ACTIONS(89),
    [aux_sym_css_named_color_token141] = ACTIONS(89),
    [aux_sym_css_named_color_token142] = ACTIONS(89),
    [aux_sym_css_named_color_token143] = ACTIONS(89),
    [aux_sym_css_named_color_token144] = ACTIONS(89),
    [aux_sym_css_named_color_token145] = ACTIONS(91),
    [aux_sym_css_named_color_token146] = ACTIONS(89),
    [aux_sym_css_named_color_token147] = ACTIONS(91),
    [aux_sym_css_named_color_token148] = ACTIONS(89),
    [sym_css_keyword_transparent] = ACTIONS(89),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(95),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(93),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(95),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(93),
    [aux_sym_css_function_hwb_token1] = ACTIONS(93),
    [aux_sym_css_function_lab_token1] = ACTIONS(93),
    [aux_sym_css_function_oklab_token1] = ACTIONS(93),
    [aux_sym_css_function_lch_token1] = ACTIONS(93),
    [aux_sym_css_function_oklch_token1] = ACTIONS(93),
    [sym_css_hex_color_6_digits] = ACTIONS(95),
    [sym_css_hex_color_8_digits] = ACTIONS(93),
    [sym_css_hex_color_3_digits] = ACTIONS(95),
    [sym_css_hex_color_4_digits] = ACTIONS(95),
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
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(99),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(97),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(99),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(97),
    [aux_sym_css_function_hwb_token1] = ACTIONS(97),
    [aux_sym_css_function_lab_token1] = ACTIONS(97),
    [aux_sym_css_function_oklab_token1] = ACTIONS(97),
    [aux_sym_css_function_lch_token1] = ACTIONS(97),
    [aux_sym_css_function_oklch_token1] = ACTIONS(97),
    [sym_css_hex_color_6_digits] = ACTIONS(99),
    [sym_css_hex_color_8_digits] = ACTIONS(97),
    [sym_css_hex_color_3_digits] = ACTIONS(99),
    [sym_css_hex_color_4_digits] = ACTIONS(99),
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
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(103),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(101),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(103),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(101),
    [aux_sym_css_function_hwb_token1] = ACTIONS(101),
    [aux_sym_css_function_lab_token1] = ACTIONS(101),
    [aux_sym_css_function_oklab_token1] = ACTIONS(101),
    [aux_sym_css_function_lch_token1] = ACTIONS(101),
    [aux_sym_css_function_oklch_token1] = ACTIONS(101),
    [sym_css_hex_color_6_digits] = ACTIONS(103),
    [sym_css_hex_color_8_digits] = ACTIONS(101),
    [sym_css_hex_color_3_digits] = ACTIONS(103),
    [sym_css_hex_color_4_digits] = ACTIONS(103),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(107),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(105),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(107),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(105),
    [aux_sym_css_function_hwb_token1] = ACTIONS(105),
    [aux_sym_css_function_lab_token1] = ACTIONS(105),
    [aux_sym_css_function_oklab_token1] = ACTIONS(105),
    [aux_sym_css_function_lch_token1] = ACTIONS(105),
    [aux_sym_css_function_oklch_token1] = ACTIONS(105),
    [sym_css_hex_color_6_digits] = ACTIONS(107),
    [sym_css_hex_color_8_digits] = ACTIONS(105),
    [sym_css_hex_color_3_digits] = ACTIONS(107),
    [sym_css_hex_color_4_digits] = ACTIONS(107),
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
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(111),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(109),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(111),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(109),
    [aux_sym_css_function_hwb_token1] = ACTIONS(109),
    [aux_sym_css_function_lab_token1] = ACTIONS(109),
    [aux_sym_css_function_oklab_token1] = ACTIONS(109),
    [aux_sym_css_function_lch_token1] = ACTIONS(109),
    [aux_sym_css_function_oklch_token1] = ACTIONS(109),
    [sym_css_hex_color_6_digits] = ACTIONS(111),
    [sym_css_hex_color_8_digits] = ACTIONS(109),
    [sym_css_hex_color_3_digits] = ACTIONS(111),
    [sym_css_hex_color_4_digits] = ACTIONS(111),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(115),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(113),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(115),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(113),
    [aux_sym_css_function_hwb_token1] = ACTIONS(113),
    [aux_sym_css_function_lab_token1] = ACTIONS(113),
    [aux_sym_css_function_oklab_token1] = ACTIONS(113),
    [aux_sym_css_function_lch_token1] = ACTIONS(113),
    [aux_sym_css_function_oklch_token1] = ACTIONS(113),
    [sym_css_hex_color_6_digits] = ACTIONS(115),
    [sym_css_hex_color_8_digits] = ACTIONS(113),
    [sym_css_hex_color_3_digits] = ACTIONS(115),
    [sym_css_hex_color_4_digits] = ACTIONS(115),
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
    [ts_builtin_sym_end] = ACTIONS(117),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(119),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(117),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(119),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(117),
    [aux_sym_css_function_hwb_token1] = ACTIONS(117),
    [aux_sym_css_function_lab_token1] = ACTIONS(117),
    [aux_sym_css_function_oklab_token1] = ACTIONS(117),
    [aux_sym_css_function_lch_token1] = ACTIONS(117),
    [aux_sym_css_function_oklch_token1] = ACTIONS(117),
    [sym_css_hex_color_6_digits] = ACTIONS(119),
    [sym_css_hex_color_8_digits] = ACTIONS(117),
    [sym_css_hex_color_3_digits] = ACTIONS(119),
    [sym_css_hex_color_4_digits] = ACTIONS(119),
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
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(123),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(121),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(123),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(121),
    [aux_sym_css_function_hwb_token1] = ACTIONS(121),
    [aux_sym_css_function_lab_token1] = ACTIONS(121),
    [aux_sym_css_function_oklab_token1] = ACTIONS(121),
    [aux_sym_css_function_lch_token1] = ACTIONS(121),
    [aux_sym_css_function_oklch_token1] = ACTIONS(121),
    [sym_css_hex_color_6_digits] = ACTIONS(123),
    [sym_css_hex_color_8_digits] = ACTIONS(121),
    [sym_css_hex_color_3_digits] = ACTIONS(123),
    [sym_css_hex_color_4_digits] = ACTIONS(123),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(127),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(125),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(127),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(125),
    [aux_sym_css_function_hwb_token1] = ACTIONS(125),
    [aux_sym_css_function_lab_token1] = ACTIONS(125),
    [aux_sym_css_function_oklab_token1] = ACTIONS(125),
    [aux_sym_css_function_lch_token1] = ACTIONS(125),
    [aux_sym_css_function_oklch_token1] = ACTIONS(125),
    [sym_css_hex_color_6_digits] = ACTIONS(127),
    [sym_css_hex_color_8_digits] = ACTIONS(125),
    [sym_css_hex_color_3_digits] = ACTIONS(127),
    [sym_css_hex_color_4_digits] = ACTIONS(127),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(131),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(129),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(131),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(129),
    [aux_sym_css_function_hwb_token1] = ACTIONS(129),
    [aux_sym_css_function_lab_token1] = ACTIONS(129),
    [aux_sym_css_function_oklab_token1] = ACTIONS(129),
    [aux_sym_css_function_lch_token1] = ACTIONS(129),
    [aux_sym_css_function_oklch_token1] = ACTIONS(129),
    [sym_css_hex_color_6_digits] = ACTIONS(131),
    [sym_css_hex_color_8_digits] = ACTIONS(129),
    [sym_css_hex_color_3_digits] = ACTIONS(131),
    [sym_css_hex_color_4_digits] = ACTIONS(131),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(135),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(133),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(135),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(133),
    [aux_sym_css_function_hwb_token1] = ACTIONS(133),
    [aux_sym_css_function_lab_token1] = ACTIONS(133),
    [aux_sym_css_function_oklab_token1] = ACTIONS(133),
    [aux_sym_css_function_lch_token1] = ACTIONS(133),
    [aux_sym_css_function_oklch_token1] = ACTIONS(133),
    [sym_css_hex_color_6_digits] = ACTIONS(135),
    [sym_css_hex_color_8_digits] = ACTIONS(133),
    [sym_css_hex_color_3_digits] = ACTIONS(135),
    [sym_css_hex_color_4_digits] = ACTIONS(135),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(139),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(137),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(139),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(137),
    [aux_sym_css_function_hwb_token1] = ACTIONS(137),
    [aux_sym_css_function_lab_token1] = ACTIONS(137),
    [aux_sym_css_function_oklab_token1] = ACTIONS(137),
    [aux_sym_css_function_lch_token1] = ACTIONS(137),
    [aux_sym_css_function_oklch_token1] = ACTIONS(137),
    [sym_css_hex_color_6_digits] = ACTIONS(139),
    [sym_css_hex_color_8_digits] = ACTIONS(137),
    [sym_css_hex_color_3_digits] = ACTIONS(139),
    [sym_css_hex_color_4_digits] = ACTIONS(139),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(143),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(141),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(143),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(141),
    [aux_sym_css_function_hwb_token1] = ACTIONS(141),
    [aux_sym_css_function_lab_token1] = ACTIONS(141),
    [aux_sym_css_function_oklab_token1] = ACTIONS(141),
    [aux_sym_css_function_lch_token1] = ACTIONS(141),
    [aux_sym_css_function_oklch_token1] = ACTIONS(141),
    [sym_css_hex_color_6_digits] = ACTIONS(143),
    [sym_css_hex_color_8_digits] = ACTIONS(141),
    [sym_css_hex_color_3_digits] = ACTIONS(143),
    [sym_css_hex_color_4_digits] = ACTIONS(143),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(147),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(145),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(147),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(145),
    [aux_sym_css_function_hwb_token1] = ACTIONS(145),
    [aux_sym_css_function_lab_token1] = ACTIONS(145),
    [aux_sym_css_function_oklab_token1] = ACTIONS(145),
    [aux_sym_css_function_lch_token1] = ACTIONS(145),
    [aux_sym_css_function_oklch_token1] = ACTIONS(145),
    [sym_css_hex_color_6_digits] = ACTIONS(147),
    [sym_css_hex_color_8_digits] = ACTIONS(145),
    [sym_css_hex_color_3_digits] = ACTIONS(147),
    [sym_css_hex_color_4_digits] = ACTIONS(147),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(151),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(149),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(151),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(149),
    [aux_sym_css_function_hwb_token1] = ACTIONS(149),
    [aux_sym_css_function_lab_token1] = ACTIONS(149),
    [aux_sym_css_function_oklab_token1] = ACTIONS(149),
    [aux_sym_css_function_lch_token1] = ACTIONS(149),
    [aux_sym_css_function_oklch_token1] = ACTIONS(149),
    [sym_css_hex_color_6_digits] = ACTIONS(151),
    [sym_css_hex_color_8_digits] = ACTIONS(149),
    [sym_css_hex_color_3_digits] = ACTIONS(151),
    [sym_css_hex_color_4_digits] = ACTIONS(151),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(155),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(153),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(155),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(153),
    [aux_sym_css_function_hwb_token1] = ACTIONS(153),
    [aux_sym_css_function_lab_token1] = ACTIONS(153),
    [aux_sym_css_function_oklab_token1] = ACTIONS(153),
    [aux_sym_css_function_lch_token1] = ACTIONS(153),
    [aux_sym_css_function_oklch_token1] = ACTIONS(153),
    [sym_css_hex_color_6_digits] = ACTIONS(155),
    [sym_css_hex_color_8_digits] = ACTIONS(153),
    [sym_css_hex_color_3_digits] = ACTIONS(155),
    [sym_css_hex_color_4_digits] = ACTIONS(155),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(157),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(159),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(157),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(159),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(157),
    [aux_sym_css_function_hwb_token1] = ACTIONS(157),
    [aux_sym_css_function_lab_token1] = ACTIONS(157),
    [aux_sym_css_function_oklab_token1] = ACTIONS(157),
    [aux_sym_css_function_lch_token1] = ACTIONS(157),
    [aux_sym_css_function_oklch_token1] = ACTIONS(157),
    [sym_css_hex_color_6_digits] = ACTIONS(159),
    [sym_css_hex_color_8_digits] = ACTIONS(157),
    [sym_css_hex_color_3_digits] = ACTIONS(159),
    [sym_css_hex_color_4_digits] = ACTIONS(159),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(163),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(161),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(163),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(161),
    [aux_sym_css_function_hwb_token1] = ACTIONS(161),
    [aux_sym_css_function_lab_token1] = ACTIONS(161),
    [aux_sym_css_function_oklab_token1] = ACTIONS(161),
    [aux_sym_css_function_lch_token1] = ACTIONS(161),
    [aux_sym_css_function_oklch_token1] = ACTIONS(161),
    [sym_css_hex_color_6_digits] = ACTIONS(163),
    [sym_css_hex_color_8_digits] = ACTIONS(161),
    [sym_css_hex_color_3_digits] = ACTIONS(163),
    [sym_css_hex_color_4_digits] = ACTIONS(163),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(167),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(165),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(167),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(165),
    [aux_sym_css_function_hwb_token1] = ACTIONS(165),
    [aux_sym_css_function_lab_token1] = ACTIONS(165),
    [aux_sym_css_function_oklab_token1] = ACTIONS(165),
    [aux_sym_css_function_lch_token1] = ACTIONS(165),
    [aux_sym_css_function_oklch_token1] = ACTIONS(165),
    [sym_css_hex_color_6_digits] = ACTIONS(167),
    [sym_css_hex_color_8_digits] = ACTIONS(165),
    [sym_css_hex_color_3_digits] = ACTIONS(167),
    [sym_css_hex_color_4_digits] = ACTIONS(167),
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(171),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(169),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(171),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(169),
    [aux_sym_css_function_hwb_token1] = ACTIONS(169),
    [aux_sym_css_function_lab_token1] = ACTIONS(169),
    [aux_sym_css_function_oklab_token1] = ACTIONS(169),
    [aux_sym_css_function_lch_token1] = ACTIONS(169),
    [aux_sym_css_function_oklch_token1] = ACTIONS(169),
    [sym_css_hex_color_6_digits] = ACTIONS(171),
    [sym_css_hex_color_8_digits] = ACTIONS(169),
    [sym_css_hex_color_3_digits] = ACTIONS(171),
    [sym_css_hex_color_4_digits] = ACTIONS(171),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(175),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(173),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(175),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(173),
    [aux_sym_css_function_hwb_token1] = ACTIONS(173),
    [aux_sym_css_function_lab_token1] = ACTIONS(173),
    [aux_sym_css_function_oklab_token1] = ACTIONS(173),
    [aux_sym_css_function_lch_token1] = ACTIONS(173),
    [aux_sym_css_function_oklch_token1] = ACTIONS(173),
    [sym_css_hex_color_6_digits] = ACTIONS(175),
    [sym_css_hex_color_8_digits] = ACTIONS(173),
    [sym_css_hex_color_3_digits] = ACTIONS(175),
    [sym_css_hex_color_4_digits] = ACTIONS(175),
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
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(179),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(177),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(179),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(177),
    [aux_sym_css_function_hwb_token1] = ACTIONS(177),
    [aux_sym_css_function_lab_token1] = ACTIONS(177),
    [aux_sym_css_function_oklab_token1] = ACTIONS(177),
    [aux_sym_css_function_lch_token1] = ACTIONS(177),
    [aux_sym_css_function_oklch_token1] = ACTIONS(177),
    [sym_css_hex_color_6_digits] = ACTIONS(179),
    [sym_css_hex_color_8_digits] = ACTIONS(177),
    [sym_css_hex_color_3_digits] = ACTIONS(179),
    [sym_css_hex_color_4_digits] = ACTIONS(179),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(183),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(181),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(183),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(181),
    [aux_sym_css_function_hwb_token1] = ACTIONS(181),
    [aux_sym_css_function_lab_token1] = ACTIONS(181),
    [aux_sym_css_function_oklab_token1] = ACTIONS(181),
    [aux_sym_css_function_lch_token1] = ACTIONS(181),
    [aux_sym_css_function_oklch_token1] = ACTIONS(181),
    [sym_css_hex_color_6_digits] = ACTIONS(183),
    [sym_css_hex_color_8_digits] = ACTIONS(181),
    [sym_css_hex_color_3_digits] = ACTIONS(183),
    [sym_css_hex_color_4_digits] = ACTIONS(183),
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
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(187),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(185),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(187),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(185),
    [aux_sym_css_function_hwb_token1] = ACTIONS(185),
    [aux_sym_css_function_lab_token1] = ACTIONS(185),
    [aux_sym_css_function_oklab_token1] = ACTIONS(185),
    [aux_sym_css_function_lch_token1] = ACTIONS(185),
    [aux_sym_css_function_oklch_token1] = ACTIONS(185),
    [sym_css_hex_color_6_digits] = ACTIONS(187),
    [sym_css_hex_color_8_digits] = ACTIONS(185),
    [sym_css_hex_color_3_digits] = ACTIONS(187),
    [sym_css_hex_color_4_digits] = ACTIONS(187),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(191),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(189),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(191),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(189),
    [aux_sym_css_function_hwb_token1] = ACTIONS(189),
    [aux_sym_css_function_lab_token1] = ACTIONS(189),
    [aux_sym_css_function_oklab_token1] = ACTIONS(189),
    [aux_sym_css_function_lch_token1] = ACTIONS(189),
    [aux_sym_css_function_oklch_token1] = ACTIONS(189),
    [sym_css_hex_color_6_digits] = ACTIONS(191),
    [sym_css_hex_color_8_digits] = ACTIONS(189),
    [sym_css_hex_color_3_digits] = ACTIONS(191),
    [sym_css_hex_color_4_digits] = ACTIONS(191),
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
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(195),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(193),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(195),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(193),
    [aux_sym_css_function_hwb_token1] = ACTIONS(193),
    [aux_sym_css_function_lab_token1] = ACTIONS(193),
    [aux_sym_css_function_oklab_token1] = ACTIONS(193),
    [aux_sym_css_function_lch_token1] = ACTIONS(193),
    [aux_sym_css_function_oklch_token1] = ACTIONS(193),
    [sym_css_hex_color_6_digits] = ACTIONS(195),
    [sym_css_hex_color_8_digits] = ACTIONS(193),
    [sym_css_hex_color_3_digits] = ACTIONS(195),
    [sym_css_hex_color_4_digits] = ACTIONS(195),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(199),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(197),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(199),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(197),
    [aux_sym_css_function_hwb_token1] = ACTIONS(197),
    [aux_sym_css_function_lab_token1] = ACTIONS(197),
    [aux_sym_css_function_oklab_token1] = ACTIONS(197),
    [aux_sym_css_function_lch_token1] = ACTIONS(197),
    [aux_sym_css_function_oklch_token1] = ACTIONS(197),
    [sym_css_hex_color_6_digits] = ACTIONS(199),
    [sym_css_hex_color_8_digits] = ACTIONS(197),
    [sym_css_hex_color_3_digits] = ACTIONS(199),
    [sym_css_hex_color_4_digits] = ACTIONS(199),
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
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(203),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(201),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(203),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(201),
    [aux_sym_css_function_hwb_token1] = ACTIONS(201),
    [aux_sym_css_function_lab_token1] = ACTIONS(201),
    [aux_sym_css_function_oklab_token1] = ACTIONS(201),
    [aux_sym_css_function_lch_token1] = ACTIONS(201),
    [aux_sym_css_function_oklch_token1] = ACTIONS(201),
    [sym_css_hex_color_6_digits] = ACTIONS(203),
    [sym_css_hex_color_8_digits] = ACTIONS(201),
    [sym_css_hex_color_3_digits] = ACTIONS(203),
    [sym_css_hex_color_4_digits] = ACTIONS(203),
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
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(207),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(205),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(207),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(205),
    [aux_sym_css_function_hwb_token1] = ACTIONS(205),
    [aux_sym_css_function_lab_token1] = ACTIONS(205),
    [aux_sym_css_function_oklab_token1] = ACTIONS(205),
    [aux_sym_css_function_lch_token1] = ACTIONS(205),
    [aux_sym_css_function_oklch_token1] = ACTIONS(205),
    [sym_css_hex_color_6_digits] = ACTIONS(207),
    [sym_css_hex_color_8_digits] = ACTIONS(205),
    [sym_css_hex_color_3_digits] = ACTIONS(207),
    [sym_css_hex_color_4_digits] = ACTIONS(207),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(209), 1,
      sym__css_number,
    ACTIONS(211), 6,
      sym__css_percentage,
      sym__css_angle,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [12] = 2,
    ACTIONS(213), 1,
      sym__css_number,
    ACTIONS(215), 6,
      sym__css_percentage,
      sym__css_angle,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [24] = 5,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      sym_css_keyword_none,
    STATE(60), 2,
      sym_css_number,
      sym_css_percentage,
  [41] = 5,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      sym_css_keyword_none,
    STATE(61), 2,
      sym_css_number,
      sym_css_percentage,
  [58] = 5,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(223), 1,
      sym_css_keyword_none,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    STATE(60), 2,
      sym_css_number,
      sym_css_percentage,
  [75] = 2,
    ACTIONS(231), 1,
      sym__css_number,
    ACTIONS(233), 5,
      sym__css_percentage,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [86] = 5,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      sym_css_keyword_none,
    STATE(62), 2,
      sym_css_number,
      sym_css_percentage,
  [103] = 5,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      sym_css_keyword_none,
    STATE(63), 2,
      sym_css_number,
      sym_css_percentage,
  [120] = 5,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(227), 1,
      sym_css_keyword_none,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(61), 2,
      sym_css_number,
      sym_css_percentage,
  [137] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(245), 1,
      sym_css_keyword_none,
    STATE(102), 2,
      sym_css_number,
      sym_css_percentage,
  [151] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(223), 1,
      sym_css_keyword_none,
    STATE(60), 2,
      sym_css_number,
      sym_css_percentage,
  [165] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(227), 1,
      sym_css_keyword_none,
    STATE(61), 2,
      sym_css_number,
      sym_css_percentage,
  [179] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(247), 1,
      sym_css_keyword_none,
    STATE(56), 2,
      sym_css_number,
      sym_css_percentage,
  [193] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(249), 1,
      sym_css_keyword_none,
    STATE(57), 2,
      sym_css_number,
      sym_css_percentage,
  [207] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(251), 1,
      sym_css_keyword_none,
    STATE(58), 2,
      sym_css_number,
      sym_css_percentage,
  [221] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(237), 1,
      sym_css_keyword_none,
    STATE(62), 2,
      sym_css_number,
      sym_css_percentage,
  [235] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(253), 1,
      sym_css_keyword_none,
    STATE(59), 2,
      sym_css_number,
      sym_css_percentage,
  [249] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(241), 1,
      sym_css_keyword_none,
    STATE(63), 2,
      sym_css_number,
      sym_css_percentage,
  [263] = 5,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(255), 1,
      sym_css_keyword_none,
    STATE(38), 1,
      sym_css_number,
    STATE(40), 1,
      sym_css_percentage,
  [279] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(257), 1,
      sym_css_keyword_none,
    STATE(64), 2,
      sym_css_number,
      sym_css_percentage,
  [293] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(259), 1,
      sym_css_keyword_none,
    STATE(45), 2,
      sym_css_number,
      sym_css_percentage,
  [307] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(261), 1,
      sym_css_keyword_none,
    STATE(66), 2,
      sym_css_number,
      sym_css_percentage,
  [321] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(263), 1,
      sym_css_keyword_none,
    STATE(78), 2,
      sym_css_number,
      sym_css_percentage,
  [335] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(265), 1,
      sym_css_keyword_none,
    STATE(79), 2,
      sym_css_number,
      sym_css_percentage,
  [349] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(267), 1,
      sym_css_keyword_none,
    STATE(93), 2,
      sym_css_number,
      sym_css_percentage,
  [363] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(269), 1,
      sym_css_keyword_none,
    STATE(100), 2,
      sym_css_number,
      sym_css_percentage,
  [377] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(271), 1,
      sym_css_keyword_none,
    STATE(98), 2,
      sym_css_number,
      sym_css_percentage,
  [391] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(273), 1,
      sym_css_keyword_none,
    STATE(99), 2,
      sym_css_number,
      sym_css_percentage,
  [405] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(275), 1,
      sym_css_keyword_none,
    STATE(101), 2,
      sym_css_number,
      sym_css_percentage,
  [419] = 5,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(277), 1,
      sym_css_keyword_none,
    STATE(39), 1,
      sym_css_number,
    STATE(44), 1,
      sym_css_percentage,
  [435] = 4,
    ACTIONS(217), 1,
      sym__css_number,
    ACTIONS(219), 1,
      sym__css_percentage,
    ACTIONS(279), 1,
      sym_css_keyword_none,
    STATE(103), 2,
      sym_css_number,
      sym_css_percentage,
  [449] = 4,
    ACTIONS(281), 1,
      sym__css_number,
    ACTIONS(283), 1,
      sym__css_percentage,
    ACTIONS(285), 1,
      sym_css_keyword_none,
    STATE(114), 1,
      sym_css_alpha_value,
  [462] = 4,
    ACTIONS(281), 1,
      sym__css_number,
    ACTIONS(283), 1,
      sym__css_percentage,
    ACTIONS(287), 1,
      sym_css_keyword_none,
    STATE(112), 1,
      sym_css_alpha_value,
  [475] = 4,
    ACTIONS(289), 1,
      sym__css_number,
    ACTIONS(291), 1,
      sym__css_angle,
    ACTIONS(293), 1,
      sym_css_keyword_none,
    STATE(55), 1,
      sym_css_hue,
  [488] = 4,
    ACTIONS(281), 1,
      sym__css_number,
    ACTIONS(283), 1,
      sym__css_percentage,
    ACTIONS(295), 1,
      sym_css_keyword_none,
    STATE(113), 1,
      sym_css_alpha_value,
  [501] = 4,
    ACTIONS(281), 1,
      sym__css_number,
    ACTIONS(283), 1,
      sym__css_percentage,
    ACTIONS(297), 1,
      sym_css_keyword_none,
    STATE(137), 1,
      sym_css_alpha_value,
  [514] = 4,
    ACTIONS(281), 1,
      sym__css_number,
    ACTIONS(283), 1,
      sym__css_percentage,
    ACTIONS(299), 1,
      sym_css_keyword_none,
    STATE(126), 1,
      sym_css_alpha_value,
  [527] = 4,
    ACTIONS(281), 1,
      sym__css_number,
    ACTIONS(283), 1,
      sym__css_percentage,
    ACTIONS(301), 1,
      sym_css_keyword_none,
    STATE(128), 1,
      sym_css_alpha_value,
  [540] = 4,
    ACTIONS(281), 1,
      sym__css_number,
    ACTIONS(283), 1,
      sym__css_percentage,
    ACTIONS(303), 1,
      sym_css_keyword_none,
    STATE(139), 1,
      sym_css_alpha_value,
  [553] = 4,
    ACTIONS(289), 1,
      sym__css_number,
    ACTIONS(291), 1,
      sym__css_angle,
    ACTIONS(305), 1,
      sym_css_keyword_none,
    STATE(43), 1,
      sym_css_hue,
  [566] = 4,
    ACTIONS(281), 1,
      sym__css_number,
    ACTIONS(283), 1,
      sym__css_percentage,
    ACTIONS(307), 1,
      sym_css_keyword_none,
    STATE(111), 1,
      sym_css_alpha_value,
  [579] = 4,
    ACTIONS(281), 1,
      sym__css_number,
    ACTIONS(283), 1,
      sym__css_percentage,
    ACTIONS(309), 1,
      sym_css_keyword_none,
    STATE(130), 1,
      sym_css_alpha_value,
  [592] = 4,
    ACTIONS(289), 1,
      sym__css_number,
    ACTIONS(291), 1,
      sym__css_angle,
    ACTIONS(311), 1,
      sym_css_keyword_none,
    STATE(104), 1,
      sym_css_hue,
  [605] = 4,
    ACTIONS(289), 1,
      sym__css_number,
    ACTIONS(291), 1,
      sym__css_angle,
    ACTIONS(313), 1,
      sym_css_keyword_none,
    STATE(105), 1,
      sym_css_hue,
  [618] = 4,
    ACTIONS(289), 1,
      sym__css_number,
    ACTIONS(291), 1,
      sym__css_angle,
    ACTIONS(315), 1,
      sym_css_keyword_none,
    STATE(42), 1,
      sym_css_hue,
  [631] = 3,
    ACTIONS(281), 1,
      sym__css_number,
    ACTIONS(283), 1,
      sym__css_percentage,
    STATE(133), 1,
      sym_css_alpha_value,
  [641] = 3,
    ACTIONS(281), 1,
      sym__css_number,
    ACTIONS(283), 1,
      sym__css_percentage,
    STATE(132), 1,
      sym_css_alpha_value,
  [651] = 3,
    ACTIONS(281), 1,
      sym__css_number,
    ACTIONS(283), 1,
      sym__css_percentage,
    STATE(135), 1,
      sym_css_alpha_value,
  [661] = 3,
    ACTIONS(281), 1,
      sym__css_number,
    ACTIONS(283), 1,
      sym__css_percentage,
    STATE(134), 1,
      sym_css_alpha_value,
  [671] = 2,
    ACTIONS(317), 1,
      sym__css_number,
    STATE(95), 1,
      sym_css_number,
  [678] = 2,
    ACTIONS(219), 1,
      sym__css_percentage,
    STATE(95), 1,
      sym_css_percentage,
  [685] = 2,
    ACTIONS(317), 1,
      sym__css_number,
    STATE(118), 1,
      sym_css_number,
  [692] = 2,
    ACTIONS(219), 1,
      sym__css_percentage,
    STATE(96), 1,
      sym_css_percentage,
  [699] = 2,
    ACTIONS(219), 1,
      sym__css_percentage,
    STATE(119), 1,
      sym_css_percentage,
  [706] = 2,
    ACTIONS(219), 1,
      sym__css_percentage,
    STATE(97), 1,
      sym_css_percentage,
  [713] = 2,
    ACTIONS(219), 1,
      sym__css_percentage,
    STATE(121), 1,
      sym_css_percentage,
  [720] = 2,
    ACTIONS(219), 1,
      sym__css_percentage,
    STATE(124), 1,
      sym_css_percentage,
  [727] = 2,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(321), 1,
      anon_sym_SLASH,
  [734] = 2,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
  [741] = 2,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
  [748] = 2,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
  [755] = 2,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
  [762] = 2,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    ACTIONS(341), 1,
      anon_sym_SLASH,
  [769] = 2,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    ACTIONS(345), 1,
      anon_sym_SLASH,
  [776] = 2,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 1,
      anon_sym_SLASH,
  [783] = 2,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(353), 1,
      anon_sym_SLASH,
  [790] = 2,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
    ACTIONS(357), 1,
      anon_sym_SLASH,
  [797] = 2,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    ACTIONS(361), 1,
      anon_sym_SLASH,
  [804] = 2,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    ACTIONS(365), 1,
      anon_sym_SLASH,
  [811] = 2,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 1,
      anon_sym_SLASH,
  [818] = 2,
    ACTIONS(219), 1,
      sym__css_percentage,
    STATE(115), 1,
      sym_css_percentage,
  [825] = 2,
    ACTIONS(317), 1,
      sym__css_number,
    STATE(94), 1,
      sym_css_number,
  [832] = 2,
    ACTIONS(219), 1,
      sym__css_percentage,
    STATE(94), 1,
      sym_css_percentage,
  [839] = 2,
    ACTIONS(317), 1,
      sym__css_number,
    STATE(123), 1,
      sym_css_number,
  [846] = 1,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
  [850] = 1,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
  [854] = 1,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
  [858] = 1,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
  [862] = 1,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
  [866] = 1,
    ACTIONS(381), 1,
      anon_sym_COMMA,
  [870] = 1,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
  [874] = 1,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
  [878] = 1,
    ACTIONS(387), 1,
      anon_sym_COMMA,
  [882] = 1,
    ACTIONS(389), 1,
      anon_sym_COMMA,
  [886] = 1,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
  [890] = 1,
    ACTIONS(393), 1,
      anon_sym_COMMA,
  [894] = 1,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
  [898] = 1,
    ACTIONS(397), 1,
      anon_sym_COMMA,
  [902] = 1,
    ACTIONS(399), 1,
      anon_sym_COMMA,
  [906] = 1,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
  [910] = 1,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
  [914] = 1,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
  [918] = 1,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
  [922] = 1,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
  [926] = 1,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
  [930] = 1,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
  [934] = 1,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
  [938] = 1,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
  [942] = 1,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
  [946] = 1,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
  [950] = 1,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
  [954] = 1,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
  [958] = 1,
    ACTIONS(427), 1,
      anon_sym_LPAREN,
  [962] = 1,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(36)] = 0,
  [SMALL_STATE(37)] = 12,
  [SMALL_STATE(38)] = 24,
  [SMALL_STATE(39)] = 41,
  [SMALL_STATE(40)] = 58,
  [SMALL_STATE(41)] = 75,
  [SMALL_STATE(42)] = 86,
  [SMALL_STATE(43)] = 103,
  [SMALL_STATE(44)] = 120,
  [SMALL_STATE(45)] = 137,
  [SMALL_STATE(46)] = 151,
  [SMALL_STATE(47)] = 165,
  [SMALL_STATE(48)] = 179,
  [SMALL_STATE(49)] = 193,
  [SMALL_STATE(50)] = 207,
  [SMALL_STATE(51)] = 221,
  [SMALL_STATE(52)] = 235,
  [SMALL_STATE(53)] = 249,
  [SMALL_STATE(54)] = 263,
  [SMALL_STATE(55)] = 279,
  [SMALL_STATE(56)] = 293,
  [SMALL_STATE(57)] = 307,
  [SMALL_STATE(58)] = 321,
  [SMALL_STATE(59)] = 335,
  [SMALL_STATE(60)] = 349,
  [SMALL_STATE(61)] = 363,
  [SMALL_STATE(62)] = 377,
  [SMALL_STATE(63)] = 391,
  [SMALL_STATE(64)] = 405,
  [SMALL_STATE(65)] = 419,
  [SMALL_STATE(66)] = 435,
  [SMALL_STATE(67)] = 449,
  [SMALL_STATE(68)] = 462,
  [SMALL_STATE(69)] = 475,
  [SMALL_STATE(70)] = 488,
  [SMALL_STATE(71)] = 501,
  [SMALL_STATE(72)] = 514,
  [SMALL_STATE(73)] = 527,
  [SMALL_STATE(74)] = 540,
  [SMALL_STATE(75)] = 553,
  [SMALL_STATE(76)] = 566,
  [SMALL_STATE(77)] = 579,
  [SMALL_STATE(78)] = 592,
  [SMALL_STATE(79)] = 605,
  [SMALL_STATE(80)] = 618,
  [SMALL_STATE(81)] = 631,
  [SMALL_STATE(82)] = 641,
  [SMALL_STATE(83)] = 651,
  [SMALL_STATE(84)] = 661,
  [SMALL_STATE(85)] = 671,
  [SMALL_STATE(86)] = 678,
  [SMALL_STATE(87)] = 685,
  [SMALL_STATE(88)] = 692,
  [SMALL_STATE(89)] = 699,
  [SMALL_STATE(90)] = 706,
  [SMALL_STATE(91)] = 713,
  [SMALL_STATE(92)] = 720,
  [SMALL_STATE(93)] = 727,
  [SMALL_STATE(94)] = 734,
  [SMALL_STATE(95)] = 741,
  [SMALL_STATE(96)] = 748,
  [SMALL_STATE(97)] = 755,
  [SMALL_STATE(98)] = 762,
  [SMALL_STATE(99)] = 769,
  [SMALL_STATE(100)] = 776,
  [SMALL_STATE(101)] = 783,
  [SMALL_STATE(102)] = 790,
  [SMALL_STATE(103)] = 797,
  [SMALL_STATE(104)] = 804,
  [SMALL_STATE(105)] = 811,
  [SMALL_STATE(106)] = 818,
  [SMALL_STATE(107)] = 825,
  [SMALL_STATE(108)] = 832,
  [SMALL_STATE(109)] = 839,
  [SMALL_STATE(110)] = 846,
  [SMALL_STATE(111)] = 850,
  [SMALL_STATE(112)] = 854,
  [SMALL_STATE(113)] = 858,
  [SMALL_STATE(114)] = 862,
  [SMALL_STATE(115)] = 866,
  [SMALL_STATE(116)] = 870,
  [SMALL_STATE(117)] = 874,
  [SMALL_STATE(118)] = 878,
  [SMALL_STATE(119)] = 882,
  [SMALL_STATE(120)] = 886,
  [SMALL_STATE(121)] = 890,
  [SMALL_STATE(122)] = 894,
  [SMALL_STATE(123)] = 898,
  [SMALL_STATE(124)] = 902,
  [SMALL_STATE(125)] = 906,
  [SMALL_STATE(126)] = 910,
  [SMALL_STATE(127)] = 914,
  [SMALL_STATE(128)] = 918,
  [SMALL_STATE(129)] = 922,
  [SMALL_STATE(130)] = 926,
  [SMALL_STATE(131)] = 930,
  [SMALL_STATE(132)] = 934,
  [SMALL_STATE(133)] = 938,
  [SMALL_STATE(134)] = 942,
  [SMALL_STATE(135)] = 946,
  [SMALL_STATE(136)] = 950,
  [SMALL_STATE(137)] = 954,
  [SMALL_STATE(138)] = 958,
  [SMALL_STATE(139)] = 962,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_oklab, 8, 0, 11),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_oklab, 8, 0, 11),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_modern, 6, 0, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_modern, 6, 0, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_modern, 6, 0, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_modern, 6, 0, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_modern, 6, 0, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_modern, 6, 0, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_modern, 6, 0, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_modern, 6, 0, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hwb, 6, 0, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hwb, 6, 0, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_lab, 6, 0, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_lab, 6, 0, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_oklab, 6, 0, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_oklab, 6, 0, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_oklch, 6, 0, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_oklch, 6, 0, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_modern, 8, 0, 6),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_modern, 8, 0, 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_legacy, 8, 0, 7),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_legacy, 8, 0, 7),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_modern, 8, 0, 6),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_modern, 8, 0, 6),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_legacy, 8, 0, 7),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_legacy, 8, 0, 7),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_modern, 8, 0, 8),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_modern, 8, 0, 8),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_legacy, 8, 0, 9),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_legacy, 8, 0, 9),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_modern, 8, 0, 8),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_modern, 8, 0, 8),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_legacy, 8, 0, 9),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_legacy, 8, 0, 9),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hwb, 8, 0, 10),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hwb, 8, 0, 10),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_lab, 8, 0, 11),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_lab, 8, 0, 11),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_lch, 8, 0, 12),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_lch, 8, 0, 12),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_oklch, 8, 0, 12),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_oklch, 8, 0, 12),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_legacy, 10, 0, 13),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_legacy, 10, 0, 13),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_legacy, 10, 0, 13),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_legacy, 10, 0, 13),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_legacy, 10, 0, 14),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_legacy, 10, 0, 14),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_legacy, 10, 0, 14),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_legacy, 10, 0, 14),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_lch, 6, 0, 5),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_lch, 6, 0, 5),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_percentage, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_percentage, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_number, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_number, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_hue, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_hue, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [383] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_alpha_value, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
