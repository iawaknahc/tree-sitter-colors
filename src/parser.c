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
#define STATE_COUNT 104
#define LARGE_STATE_COUNT 28
#define SYMBOL_COUNT 188
#define ALIAS_COUNT 0
#define TOKEN_COUNT 167
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 11

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
  sym_css_hex_color_6_digits = 13,
  sym_css_hex_color_8_digits = 14,
  sym_css_hex_color_3_digits = 15,
  sym_css_hex_color_4_digits = 16,
  aux_sym_css_named_color_token1 = 17,
  aux_sym_css_named_color_token2 = 18,
  aux_sym_css_named_color_token3 = 19,
  aux_sym_css_named_color_token4 = 20,
  aux_sym_css_named_color_token5 = 21,
  aux_sym_css_named_color_token6 = 22,
  aux_sym_css_named_color_token7 = 23,
  aux_sym_css_named_color_token8 = 24,
  aux_sym_css_named_color_token9 = 25,
  aux_sym_css_named_color_token10 = 26,
  aux_sym_css_named_color_token11 = 27,
  aux_sym_css_named_color_token12 = 28,
  aux_sym_css_named_color_token13 = 29,
  aux_sym_css_named_color_token14 = 30,
  aux_sym_css_named_color_token15 = 31,
  aux_sym_css_named_color_token16 = 32,
  aux_sym_css_named_color_token17 = 33,
  aux_sym_css_named_color_token18 = 34,
  aux_sym_css_named_color_token19 = 35,
  aux_sym_css_named_color_token20 = 36,
  aux_sym_css_named_color_token21 = 37,
  aux_sym_css_named_color_token22 = 38,
  aux_sym_css_named_color_token23 = 39,
  aux_sym_css_named_color_token24 = 40,
  aux_sym_css_named_color_token25 = 41,
  aux_sym_css_named_color_token26 = 42,
  aux_sym_css_named_color_token27 = 43,
  aux_sym_css_named_color_token28 = 44,
  aux_sym_css_named_color_token29 = 45,
  aux_sym_css_named_color_token30 = 46,
  aux_sym_css_named_color_token31 = 47,
  aux_sym_css_named_color_token32 = 48,
  aux_sym_css_named_color_token33 = 49,
  aux_sym_css_named_color_token34 = 50,
  aux_sym_css_named_color_token35 = 51,
  aux_sym_css_named_color_token36 = 52,
  aux_sym_css_named_color_token37 = 53,
  aux_sym_css_named_color_token38 = 54,
  aux_sym_css_named_color_token39 = 55,
  aux_sym_css_named_color_token40 = 56,
  aux_sym_css_named_color_token41 = 57,
  aux_sym_css_named_color_token42 = 58,
  aux_sym_css_named_color_token43 = 59,
  aux_sym_css_named_color_token44 = 60,
  aux_sym_css_named_color_token45 = 61,
  aux_sym_css_named_color_token46 = 62,
  aux_sym_css_named_color_token47 = 63,
  aux_sym_css_named_color_token48 = 64,
  aux_sym_css_named_color_token49 = 65,
  aux_sym_css_named_color_token50 = 66,
  aux_sym_css_named_color_token51 = 67,
  aux_sym_css_named_color_token52 = 68,
  aux_sym_css_named_color_token53 = 69,
  aux_sym_css_named_color_token54 = 70,
  aux_sym_css_named_color_token55 = 71,
  aux_sym_css_named_color_token56 = 72,
  aux_sym_css_named_color_token57 = 73,
  aux_sym_css_named_color_token58 = 74,
  aux_sym_css_named_color_token59 = 75,
  aux_sym_css_named_color_token60 = 76,
  aux_sym_css_named_color_token61 = 77,
  aux_sym_css_named_color_token62 = 78,
  aux_sym_css_named_color_token63 = 79,
  aux_sym_css_named_color_token64 = 80,
  aux_sym_css_named_color_token65 = 81,
  aux_sym_css_named_color_token66 = 82,
  aux_sym_css_named_color_token67 = 83,
  aux_sym_css_named_color_token68 = 84,
  aux_sym_css_named_color_token69 = 85,
  aux_sym_css_named_color_token70 = 86,
  aux_sym_css_named_color_token71 = 87,
  aux_sym_css_named_color_token72 = 88,
  aux_sym_css_named_color_token73 = 89,
  aux_sym_css_named_color_token74 = 90,
  aux_sym_css_named_color_token75 = 91,
  aux_sym_css_named_color_token76 = 92,
  aux_sym_css_named_color_token77 = 93,
  aux_sym_css_named_color_token78 = 94,
  aux_sym_css_named_color_token79 = 95,
  aux_sym_css_named_color_token80 = 96,
  aux_sym_css_named_color_token81 = 97,
  aux_sym_css_named_color_token82 = 98,
  aux_sym_css_named_color_token83 = 99,
  aux_sym_css_named_color_token84 = 100,
  aux_sym_css_named_color_token85 = 101,
  aux_sym_css_named_color_token86 = 102,
  aux_sym_css_named_color_token87 = 103,
  aux_sym_css_named_color_token88 = 104,
  aux_sym_css_named_color_token89 = 105,
  aux_sym_css_named_color_token90 = 106,
  aux_sym_css_named_color_token91 = 107,
  aux_sym_css_named_color_token92 = 108,
  aux_sym_css_named_color_token93 = 109,
  aux_sym_css_named_color_token94 = 110,
  aux_sym_css_named_color_token95 = 111,
  aux_sym_css_named_color_token96 = 112,
  aux_sym_css_named_color_token97 = 113,
  aux_sym_css_named_color_token98 = 114,
  aux_sym_css_named_color_token99 = 115,
  aux_sym_css_named_color_token100 = 116,
  aux_sym_css_named_color_token101 = 117,
  aux_sym_css_named_color_token102 = 118,
  aux_sym_css_named_color_token103 = 119,
  aux_sym_css_named_color_token104 = 120,
  aux_sym_css_named_color_token105 = 121,
  aux_sym_css_named_color_token106 = 122,
  aux_sym_css_named_color_token107 = 123,
  aux_sym_css_named_color_token108 = 124,
  aux_sym_css_named_color_token109 = 125,
  aux_sym_css_named_color_token110 = 126,
  aux_sym_css_named_color_token111 = 127,
  aux_sym_css_named_color_token112 = 128,
  aux_sym_css_named_color_token113 = 129,
  aux_sym_css_named_color_token114 = 130,
  aux_sym_css_named_color_token115 = 131,
  aux_sym_css_named_color_token116 = 132,
  aux_sym_css_named_color_token117 = 133,
  aux_sym_css_named_color_token118 = 134,
  aux_sym_css_named_color_token119 = 135,
  aux_sym_css_named_color_token120 = 136,
  aux_sym_css_named_color_token121 = 137,
  aux_sym_css_named_color_token122 = 138,
  aux_sym_css_named_color_token123 = 139,
  aux_sym_css_named_color_token124 = 140,
  aux_sym_css_named_color_token125 = 141,
  aux_sym_css_named_color_token126 = 142,
  aux_sym_css_named_color_token127 = 143,
  aux_sym_css_named_color_token128 = 144,
  aux_sym_css_named_color_token129 = 145,
  aux_sym_css_named_color_token130 = 146,
  aux_sym_css_named_color_token131 = 147,
  aux_sym_css_named_color_token132 = 148,
  aux_sym_css_named_color_token133 = 149,
  aux_sym_css_named_color_token134 = 150,
  aux_sym_css_named_color_token135 = 151,
  aux_sym_css_named_color_token136 = 152,
  aux_sym_css_named_color_token137 = 153,
  aux_sym_css_named_color_token138 = 154,
  aux_sym_css_named_color_token139 = 155,
  aux_sym_css_named_color_token140 = 156,
  aux_sym_css_named_color_token141 = 157,
  aux_sym_css_named_color_token142 = 158,
  aux_sym_css_named_color_token143 = 159,
  aux_sym_css_named_color_token144 = 160,
  aux_sym_css_named_color_token145 = 161,
  aux_sym_css_named_color_token146 = 162,
  aux_sym_css_named_color_token147 = 163,
  aux_sym_css_named_color_token148 = 164,
  sym_css_keyword_transparent = 165,
  sym_css_keyword_none = 166,
  sym_source_file = 167,
  sym_css_number = 168,
  sym_css_percentage = 169,
  sym_css_alpha_value = 170,
  sym_css_hue = 171,
  sym_css_function_rgb = 172,
  sym_css_function_rgba = 173,
  sym_css_function_rgb_legacy = 174,
  sym_css_function_rgba_legacy = 175,
  sym_css_function_rgb_modern = 176,
  sym_css_function_rgba_modern = 177,
  sym_css_function_hsl = 178,
  sym_css_function_hsl_legacy = 179,
  sym_css_function_hsl_modern = 180,
  sym_css_function_hsla = 181,
  sym_css_function_hsla_legacy = 182,
  sym_css_function_hsla_modern = 183,
  sym_css_function_hwb = 184,
  sym_css_hex_color = 185,
  sym_css_named_color = 186,
  aux_sym_source_file_repeat1 = 187,
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
  field_a = 1,
  field_b = 2,
  field_g = 3,
  field_h = 4,
  field_l = 5,
  field_r = 6,
  field_s = 7,
  field_w = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_a] = "a",
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
  [4] = {.index = 9, .length = 4},
  [5] = {.index = 13, .length = 3},
  [6] = {.index = 16, .length = 4},
  [7] = {.index = 20, .length = 3},
  [8] = {.index = 23, .length = 4},
  [9] = {.index = 27, .length = 4},
  [10] = {.index = 31, .length = 4},
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
    {field_a, 6},
    {field_b, 4},
    {field_g, 3},
    {field_r, 2},
  [13] =
    {field_b, 6},
    {field_g, 4},
    {field_r, 2},
  [16] =
    {field_a, 6},
    {field_h, 2},
    {field_l, 4},
    {field_s, 3},
  [20] =
    {field_h, 2},
    {field_l, 6},
    {field_s, 4},
  [23] =
    {field_a, 6},
    {field_b, 4},
    {field_h, 2},
    {field_w, 3},
  [27] =
    {field_a, 8},
    {field_b, 6},
    {field_g, 4},
    {field_r, 2},
  [31] =
    {field_a, 8},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(781);
      ADVANCE_MAP(
        '#', 780,
        '(', 788,
        ')', 790,
        ',', 789,
        '.', 774,
        '/', 792,
        '+', 1,
        '-', 1,
        'A', 382,
        'a', 382,
        'B', 194,
        'b', 194,
        'C', 3,
        'c', 3,
        'D', 20,
        'd', 20,
        'F', 327,
        'f', 327,
        'G', 24,
        'g', 24,
        'H', 514,
        'h', 514,
        'I', 484,
        'i', 484,
        'K', 304,
        'k', 304,
        'L', 4,
        'l', 4,
        'M', 5,
        'm', 5,
        'N', 6,
        'n', 6,
        'O', 376,
        'o', 376,
        'P', 7,
        'p', 7,
        'R', 143,
        'r', 143,
        'S', 8,
        's', 8,
        'T', 21,
        't', 21,
        'V', 326,
        'v', 326,
        'W', 302,
        'w', 302,
        'Y', 195,
        'y', 195,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      END_STATE();
    case 2:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        'A', 128,
        'a', 128,
        'H', 32,
        'h', 32,
        'O', 581,
        'o', 581,
        'R', 328,
        'r', 328,
        'Y', 23,
        'y', 23,
      );
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(729);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        'A', 288,
        'a', 288,
        'E', 131,
        'e', 131,
        'I', 129,
        'i', 129,
        'O', 98,
        'o', 98,
      );
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(728);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        'A', 389,
        'a', 389,
        'E', 51,
        'e', 51,
        'I', 485,
        'i', 485,
        'L', 691,
        'l', 691,
        'O', 744,
        'o', 744,
        'U', 586,
        'u', 586,
      );
      END_STATE();
    case 8:
      ADVANCE_MAP(
        'A', 126,
        'a', 126,
        'E', 10,
        'e', 10,
        'I', 203,
        'i', 203,
        'K', 763,
        'k', 763,
        'L', 22,
        'l', 22,
        'N', 520,
        'n', 520,
        'P', 610,
        'p', 610,
        'T', 236,
        't', 236,
      );
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(802);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(363);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(901);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(928);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(848);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(885);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(828);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(751);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        'A', 576,
        'a', 576,
        'B', 417,
        'b', 417,
        'O', 616,
        'o', 616,
        'P', 720,
        'p', 720,
        'S', 273,
        's', 273,
        'T', 727,
        't', 727,
        'V', 361,
        'v', 361,
      );
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        'A', 582,
        'a', 582,
        'E', 144,
        'e', 144,
        'I', 442,
        'i', 442,
        'O', 136,
        'o', 136,
      );
      END_STATE();
    case 21:
      ADVANCE_MAP(
        'A', 452,
        'a', 452,
        'E', 25,
        'e', 25,
        'H', 342,
        'h', 342,
        'O', 445,
        'o', 445,
        'R', 37,
        'r', 37,
        'U', 607,
        'u', 607,
      );
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(671);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        'A', 330,
        'a', 330,
        'H', 518,
        'h', 518,
        'O', 384,
        'o', 384,
        'R', 17,
        'r', 17,
      );
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(765);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(507);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(308);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(589);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(753);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(669);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(488);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(660);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(755);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(756);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(757);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(434);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(759);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(761);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(598);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(515);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(689);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(674);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(679);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(688);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(618);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(746);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(511);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(621);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(684);
      END_STATE();
    case 65:
      ADVANCE_MAP(
        'A', 430,
        'a', 430,
        'E', 68,
        'e', 68,
        'K', 772,
        'k', 772,
        'L', 58,
        'l', 58,
        'T', 272,
        't', 272,
      );
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(432);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(296);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(795);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(787);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(904);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(403);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(256);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(920);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(608);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(619);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(541);
      END_STATE();
    case 78:
      ADVANCE_MAP(
        'B', 404,
        'b', 404,
        'C', 769,
        'c', 769,
        'G', 536,
        'g', 536,
        'K', 316,
        'k', 316,
        'M', 57,
        'm', 57,
        'O', 390,
        'o', 390,
        'R', 202,
        'r', 202,
        'S', 44,
        's', 44,
        'T', 725,
        't', 725,
        'V', 359,
        'v', 359,
      );
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(407);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(409);
      END_STATE();
    case 81:
      ADVANCE_MAP(
        'B', 411,
        'b', 411,
        'C', 556,
        'c', 556,
        'G', 563,
        'g', 563,
        'P', 349,
        'p', 349,
        'S', 65,
        's', 65,
        'Y', 262,
        'y', 262,
      );
      END_STATE();
    case 82:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(413);
      END_STATE();
    case 83:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(414);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(609);
      END_STATE();
    case 84:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(415);
      END_STATE();
    case 85:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(416);
      END_STATE();
    case 86:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(418);
      END_STATE();
    case 87:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(419);
      END_STATE();
    case 88:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(420);
      END_STATE();
    case 89:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(421);
      END_STATE();
    case 90:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(422);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(612);
      END_STATE();
    case 91:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(423);
      END_STATE();
    case 92:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(424);
      END_STATE();
    case 93:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(425);
      END_STATE();
    case 94:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(623);
      END_STATE();
    case 95:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(626);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(305);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(366);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(306);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(314);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 102:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 103:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 104:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 105:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 106:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(603);
      END_STATE();
    case 110:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(851);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(786);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(907);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(832);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(812);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(852);
      END_STATE();
    case 117:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(859);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(906);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(831);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(889);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(823);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(908);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(911);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(808);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(895);
      END_STATE();
    case 126:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(447);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 127:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(388);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(730);
      END_STATE();
    case 128:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 129:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(493);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(666);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(667);
      END_STATE();
    case 130:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 131:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 133:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(773);
      END_STATE();
    case 134:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 136:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 137:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 138:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 139:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 140:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 141:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(268);
      END_STATE();
    case 142:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(770);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(71);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(949);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(944);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(918);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(939);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(800);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(922);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(931);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(941);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(917);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(945);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(846);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(877);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(835);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(838);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(910);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(919);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 194:
      ADVANCE_MAP(
        'E', 321,
        'e', 321,
        'I', 642,
        'i', 642,
        'L', 9,
        'l', 9,
        'R', 519,
        'r', 519,
        'U', 587,
        'u', 587,
      );
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(768);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(735);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(731);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(856);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(826);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(873);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(672);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
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
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(59);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(639);
      END_STATE();
    case 274:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(913);
      END_STATE();
    case 275:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(274);
      END_STATE();
    case 276:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(547);
      END_STATE();
    case 278:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(405);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
      END_STATE();
    case 279:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(786);
      END_STATE();
    case 280:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(560);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(726);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(360);
      END_STATE();
    case 281:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(307);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(146);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 282:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(585);
      END_STATE();
    case 283:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 284:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 285:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(155);
      END_STATE();
    case 286:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 287:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(320);
      END_STATE();
    case 288:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(214);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 289:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(601);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(315);
      END_STATE();
    case 290:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(615);
      END_STATE();
    case 291:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 292:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(622);
      END_STATE();
    case 293:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(627);
      END_STATE();
    case 294:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(628);
      END_STATE();
    case 295:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(294);
      END_STATE();
    case 296:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(630);
      END_STATE();
    case 297:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(631);
      END_STATE();
    case 298:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(632);
      END_STATE();
    case 299:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(633);
      END_STATE();
    case 300:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(634);
      END_STATE();
    case 301:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(300);
      END_STATE();
    case 302:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 303:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(864);
      END_STATE();
    case 304:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 305:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(649);
      END_STATE();
    case 306:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(566);
      END_STATE();
    case 307:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(659);
      END_STATE();
    case 308:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(333);
      END_STATE();
    case 309:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(350);
      END_STATE();
    case 310:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(341);
      END_STATE();
    case 311:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(334);
      END_STATE();
    case 312:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(332);
      END_STATE();
    case 313:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(336);
      END_STATE();
    case 314:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(204);
      END_STATE();
    case 315:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(237);
      END_STATE();
    case 316:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 317:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(353);
      END_STATE();
    case 318:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 319:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(356);
      END_STATE();
    case 320:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(687);
      END_STATE();
    case 321:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 322:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 323:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(862);
      END_STATE();
    case 324:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(827);
      END_STATE();
    case 325:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 326:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 327:
      ADVANCE_MAP(
        'I', 591,
        'i', 591,
        'L', 526,
        'l', 526,
        'O', 592,
        'o', 592,
        'U', 96,
        'u', 96,
      );
      END_STATE();
    case 328:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 329:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 330:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(486);
      END_STATE();
    case 331:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 332:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(565);
      END_STATE();
    case 333:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 334:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 335:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(385);
      END_STATE();
    case 336:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 337:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 338:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(487);
      END_STATE();
    case 339:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(462);
      END_STATE();
    case 340:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 341:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 342:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(647);
      END_STATE();
    case 343:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(489);
      END_STATE();
    case 344:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 345:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 346:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 347:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(732);
      END_STATE();
    case 348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(490);
      END_STATE();
    case 349:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(675);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(653);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 354:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(655);
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(553);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 363:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(562);
      END_STATE();
    case 364:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(78);
      END_STATE();
    case 365:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(915);
      END_STATE();
    case 366:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(807);
      END_STATE();
    case 367:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(858);
      END_STATE();
    case 368:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(818);
      END_STATE();
    case 369:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(840);
      END_STATE();
    case 370:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(845);
      END_STATE();
    case 371:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(874);
      END_STATE();
    case 372:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(323);
      END_STATE();
    case 373:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(324);
      END_STATE();
    case 374:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(177);
      END_STATE();
    case 375:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(771);
      END_STATE();
    case 376:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 377:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(793);
      END_STATE();
    case 378:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(938);
      END_STATE();
    case 379:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(816);
      END_STATE();
    case 380:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(927);
      END_STATE();
    case 381:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(868);
      END_STATE();
    case 382:
      ADVANCE_MAP(
        'L', 325,
        'l', 325,
        'N', 668,
        'n', 668,
        'Q', 693,
        'q', 693,
        'Z', 718,
        'z', 718,
      );
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(764);
      END_STATE();
    case 384:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 385:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 386:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 387:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(694);
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 389:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 390:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(347);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 392:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 394:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 397:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 398:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 399:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 400:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 401:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 402:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(521);
      END_STATE();
    case 403:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(700);
      END_STATE();
    case 404:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(701);
      END_STATE();
    case 405:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(524);
      END_STATE();
    case 406:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 407:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(702);
      END_STATE();
    case 408:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(525);
      END_STATE();
    case 409:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(703);
      END_STATE();
    case 410:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(527);
      END_STATE();
    case 411:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(704);
      END_STATE();
    case 412:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(530);
      END_STATE();
    case 413:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 414:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(706);
      END_STATE();
    case 415:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(707);
      END_STATE();
    case 416:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(708);
      END_STATE();
    case 417:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(709);
      END_STATE();
    case 418:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(710);
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
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 427:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 428:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 429:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 430:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 431:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 432:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 433:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 434:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(747);
      END_STATE();
    case 435:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 436:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 437:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 438:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 439:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(916);
      END_STATE();
    case 440:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 441:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(897);
      END_STATE();
    case 442:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(282);
      END_STATE();
    case 443:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(658);
      END_STATE();
    case 444:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 445:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 446:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(531);
      END_STATE();
    case 447:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(543);
      END_STATE();
    case 448:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(545);
      END_STATE();
    case 449:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(546);
      END_STATE();
    case 450:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(548);
      END_STATE();
    case 451:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 452:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(937);
      END_STATE();
    case 453:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(820);
      END_STATE();
    case 454:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(786);
      END_STATE();
    case 455:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(811);
      END_STATE();
    case 456:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(854);
      END_STATE();
    case 457:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(884);
      END_STATE();
    case 458:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(886);
      END_STATE();
    case 459:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(924);
      END_STATE();
    case 460:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(819);
      END_STATE();
    case 461:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(822);
      END_STATE();
    case 462:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(899);
      END_STATE();
    case 463:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(926);
      END_STATE();
    case 464:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(825);
      END_STATE();
    case 465:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(865);
      END_STATE();
    case 466:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(869);
      END_STATE();
    case 467:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(883);
      END_STATE();
    case 468:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(909);
      END_STATE();
    case 469:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(921);
      END_STATE();
    case 470:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(833);
      END_STATE();
    case 471:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(872);
      END_STATE();
    case 472:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(925);
      END_STATE();
    case 473:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(847);
      END_STATE();
    case 474:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(875);
      END_STATE();
    case 475:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(923);
      END_STATE();
    case 476:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(935);
      END_STATE();
    case 477:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(947);
      END_STATE();
    case 478:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 479:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(866);
      END_STATE();
    case 480:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(876);
      END_STATE();
    case 481:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(829);
      END_STATE();
    case 482:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(891);
      END_STATE();
    case 483:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 484:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(528);
      END_STATE();
    case 485:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 486:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(643);
      END_STATE();
    case 487:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 488:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(644);
      END_STATE();
    case 489:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 490:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(567);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(670);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(664);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(594);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(597);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(611);
      END_STATE();
    case 507:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 508:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 514:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(491);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(377);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(70);
      END_STATE();
    case 515:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(860);
      END_STATE();
    case 516:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(940);
      END_STATE();
    case 517:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(849);
      END_STATE();
    case 518:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 519:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(740);
      END_STATE();
    case 520:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(733);
      END_STATE();
    case 521:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 522:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 523:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 524:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(750);
      END_STATE();
    case 525:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(736);
      END_STATE();
    case 526:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 527:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(737);
      END_STATE();
    case 528:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(588);
      END_STATE();
    case 529:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 530:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 531:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 532:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 533:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 534:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 535:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(510);
      END_STATE();
    case 536:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(406);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 537:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 539:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(459);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(470);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(479);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(742);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(743);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(617);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(426);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 563:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(429);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 564:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(572);
      END_STATE();
    case 565:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(912);
      END_STATE();
    case 566:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(690);
      END_STATE();
    case 567:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(343);
      END_STATE();
    case 568:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 569:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(393);
      END_STATE();
    case 570:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(398);
      END_STATE();
    case 571:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(399);
      END_STATE();
    case 572:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(348);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(375);
      END_STATE();
    case 573:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(721);
      END_STATE();
    case 574:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(698);
      END_STATE();
    case 575:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(695);
      END_STATE();
    case 576:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(697);
      END_STATE();
    case 577:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(699);
      END_STATE();
    case 578:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(722);
      END_STATE();
    case 579:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(723);
      END_STATE();
    case 580:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(724);
      END_STATE();
    case 581:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 582:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 583:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(929);
      END_STATE();
    case 584:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 585:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 586:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 587:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 588:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(752);
      END_STATE();
    case 589:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 590:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 591:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 592:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 593:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(522);
      END_STATE();
    case 594:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(533);
      END_STATE();
    case 595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 596:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 597:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 598:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 602:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 603:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 604:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 605:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 606:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 607:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 608:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 609:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 610:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 611:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 612:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 613:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 614:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 615:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 616:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 617:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 618:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 619:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(549);
      END_STATE();
    case 620:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(570);
      END_STATE();
    case 621:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 624:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 626:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 628:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 629:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 630:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 631:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 632:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 634:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 635:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 636:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 637:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 638:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(578);
      END_STATE();
    case 639:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 640:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 641:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(580);
      END_STATE();
    case 642:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      END_STATE();
    case 643:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(77);
      END_STATE();
    case 644:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(568);
      END_STATE();
    case 645:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(665);
      END_STATE();
    case 646:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(303);
      END_STATE();
    case 647:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(680);
      END_STATE();
    case 648:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(685);
      END_STATE();
    case 649:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 650:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 651:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 652:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(171);
      END_STATE();
    case 653:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      END_STATE();
    case 654:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(187);
      END_STATE();
    case 655:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      END_STATE();
    case 656:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(767);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 657:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      END_STATE();
    case 658:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(544);
      END_STATE();
    case 659:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 660:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(943);
      END_STATE();
    case 661:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(942);
      END_STATE();
    case 662:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(810);
      END_STATE();
    case 663:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(839);
      END_STATE();
    case 664:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(948);
      END_STATE();
    case 665:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(745);
      END_STATE();
    case 666:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 667:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(766);
      END_STATE();
    case 668:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(357);
      END_STATE();
    case 669:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      END_STATE();
    case 670:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      END_STATE();
    case 672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 673:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(163);
      END_STATE();
    case 675:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 676:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 677:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      END_STATE();
    case 678:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      END_STATE();
    case 679:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 680:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(394);
      END_STATE();
    case 681:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(602);
      END_STATE();
    case 682:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(605);
      END_STATE();
    case 683:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(606);
      END_STATE();
    case 684:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      END_STATE();
    case 685:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(293);
      END_STATE();
    case 686:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 687:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      END_STATE();
    case 688:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(266);
      END_STATE();
    case 689:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(914);
      END_STATE();
    case 690:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 691:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(439);
      END_STATE();
    case 692:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(440);
      END_STATE();
    case 693:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 694:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(646);
      END_STATE();
    case 695:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(537);
      END_STATE();
    case 696:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(599);
      END_STATE();
    case 697:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 698:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 699:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 700:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 701:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 702:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 703:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 704:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 705:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 706:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 707:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 708:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 709:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 710:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 711:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 712:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 713:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 714:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 715:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 716:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 717:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 718:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(596);
      END_STATE();
    case 719:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(652);
      END_STATE();
    case 720:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(620);
      END_STATE();
    case 721:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(624);
      END_STATE();
    case 722:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(557);
      END_STATE();
    case 723:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(558);
      END_STATE();
    case 724:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(559);
      END_STATE();
    case 725:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(638);
      END_STATE();
    case 726:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(640);
      END_STATE();
    case 727:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(641);
      END_STATE();
    case 728:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 729:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(207);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(504);
      END_STATE();
    case 730:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(151);
      END_STATE();
    case 731:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(215);
      END_STATE();
    case 732:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(271);
      END_STATE();
    case 733:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(934);
      END_STATE();
    case 734:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(946);
      END_STATE();
    case 735:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(857);
      END_STATE();
    case 736:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(855);
      END_STATE();
    case 737:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(881);
      END_STATE();
    case 738:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(870);
      END_STATE();
    case 739:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(532);
      END_STATE();
    case 740:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(455);
      END_STATE();
    case 741:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(469);
      END_STATE();
    case 742:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(472);
      END_STATE();
    case 743:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(475);
      END_STATE();
    case 744:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(141);
      END_STATE();
    case 745:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(309);
      END_STATE();
    case 746:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(312);
      END_STATE();
    case 747:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(317);
      END_STATE();
    case 748:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(318);
      END_STATE();
    case 749:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(319);
      END_STATE();
    case 750:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(270);
      END_STATE();
    case 751:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(853);
      END_STATE();
    case 752:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(861);
      END_STATE();
    case 753:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(842);
      END_STATE();
    case 754:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(843);
      END_STATE();
    case 755:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(824);
      END_STATE();
    case 756:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(871);
      END_STATE();
    case 757:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(932);
      END_STATE();
    case 758:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(933);
      END_STATE();
    case 759:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(836);
      END_STATE();
    case 760:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(837);
      END_STATE();
    case 761:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(878);
      END_STATE();
    case 762:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(879);
      END_STATE();
    case 763:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 764:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(739);
      END_STATE();
    case 765:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 766:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(593);
      END_STATE();
    case 767:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 768:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 769:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 770:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 771:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 772:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 773:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(264);
      END_STATE();
    case 774:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 775:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 776:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(798);
      END_STATE();
    case 777:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(796);
      END_STATE();
    case 778:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(797);
      END_STATE();
    case 779:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(776);
      END_STATE();
    case 780:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(779);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 785,
        '.', 774,
        'D', 196,
        'd', 196,
        'E', 2,
        'e', 2,
        'G', 590,
        'g', 590,
        'R', 28,
        'r', 28,
        'T', 696,
        't', 696,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 785,
        'D', 196,
        'd', 196,
        'E', 2,
        'e', 2,
        'G', 590,
        'g', 590,
        'R', 28,
        'r', 28,
        'T', 696,
        't', 696,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 785,
        'D', 196,
        'd', 196,
        'G', 590,
        'g', 590,
        'R', 28,
        'r', 28,
        'T', 696,
        't', 696,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__css_percentage);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__css_angle);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_css_function_rgb_legacy_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(791);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_css_function_rgba_legacy_token1);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_css_function_hsl_legacy_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_css_function_hsla_legacy_token1);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_css_function_hwb_token1);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_css_hex_color_6_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(778);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_css_hex_color_8_digits);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_css_hex_color_3_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(799);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_css_hex_color_4_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(777);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_css_named_color_token1);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_css_named_color_token2);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_css_named_color_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_css_named_color_token4);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_css_named_color_token5);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_css_named_color_token6);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_css_named_color_token7);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_css_named_color_token8);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_css_named_color_token9);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_css_named_color_token10);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(358);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_css_named_color_token11);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_css_named_color_token12);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_css_named_color_token13);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_css_named_color_token14);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_css_named_color_token15);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_css_named_color_token16);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_css_named_color_token17);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_css_named_color_token18);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_css_named_color_token19);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_css_named_color_token20);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_css_named_color_token21);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_css_named_color_token22);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_css_named_color_token23);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_css_named_color_token24);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_css_named_color_token25);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_css_named_color_token26);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_css_named_color_token27);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_css_named_color_token28);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_css_named_color_token29);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_css_named_color_token30);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_css_named_color_token31);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_css_named_color_token32);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_css_named_color_token33);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_css_named_color_token34);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_css_named_color_token35);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_css_named_color_token36);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_css_named_color_token37);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_css_named_color_token38);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_css_named_color_token39);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_css_named_color_token40);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_css_named_color_token41);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_css_named_color_token42);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_css_named_color_token43);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_css_named_color_token44);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_css_named_color_token45);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_css_named_color_token46);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_css_named_color_token47);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_css_named_color_token48);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_css_named_color_token49);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_css_named_color_token50);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_css_named_color_token51);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_css_named_color_token52);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_css_named_color_token53);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_css_named_color_token54);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_css_named_color_token55);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(260);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_css_named_color_token56);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_css_named_color_token57);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_css_named_color_token58);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_css_named_color_token59);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_css_named_color_token60);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_css_named_color_token61);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_css_named_color_token62);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_css_named_color_token63);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_css_named_color_token64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(387);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_css_named_color_token65);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_css_named_color_token66);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_css_named_color_token67);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_css_named_color_token68);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_css_named_color_token69);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_css_named_color_token70);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_css_named_color_token71);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_css_named_color_token72);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_css_named_color_token73);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_css_named_color_token74);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_css_named_color_token75);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_css_named_color_token76);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_css_named_color_token77);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_css_named_color_token78);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_css_named_color_token79);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_css_named_color_token80);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_css_named_color_token81);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_css_named_color_token82);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_css_named_color_token83);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(625);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_css_named_color_token84);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_css_named_color_token85);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_css_named_color_token86);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_css_named_color_token87);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_css_named_color_token88);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_css_named_color_token89);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_css_named_color_token90);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_css_named_color_token91);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_css_named_color_token92);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_css_named_color_token93);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_css_named_color_token94);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_css_named_color_token95);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_css_named_color_token96);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_css_named_color_token97);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_css_named_color_token98);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_css_named_color_token99);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_css_named_color_token100);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_css_named_color_token101);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_css_named_color_token102);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_css_named_color_token103);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_css_named_color_token104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(600);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_css_named_color_token105);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_css_named_color_token106);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_css_named_color_token107);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_css_named_color_token108);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_css_named_color_token109);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_css_named_color_token110);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_css_named_color_token111);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_css_named_color_token112);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_css_named_color_token113);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_css_named_color_token114);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_css_named_color_token115);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_css_named_color_token116);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_css_named_color_token117);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_css_named_color_token118);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_css_named_color_token119);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_css_named_color_token120);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_css_named_color_token121);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_css_named_color_token122);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_css_named_color_token123);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_css_named_color_token124);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_css_named_color_token125);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_css_named_color_token126);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_css_named_color_token127);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_css_named_color_token128);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_css_named_color_token129);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_css_named_color_token130);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_css_named_color_token131);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_css_named_color_token132);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_css_named_color_token133);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_css_named_color_token134);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_css_named_color_token135);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_css_named_color_token136);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_css_named_color_token137);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_css_named_color_token138);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_css_named_color_token139);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_css_named_color_token140);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_css_named_color_token141);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_css_named_color_token142);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_css_named_color_token143);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_css_named_color_token144);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_css_named_color_token145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(446);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_css_named_color_token146);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_css_named_color_token147);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(629);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_css_named_color_token148);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_css_keyword_transparent);
      END_STATE();
    case 949:
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
    [sym_source_file] = STATE(94),
    [sym_css_function_rgb] = STATE(2),
    [sym_css_function_rgba] = STATE(2),
    [sym_css_function_rgb_legacy] = STATE(6),
    [sym_css_function_rgba_legacy] = STATE(7),
    [sym_css_function_rgb_modern] = STATE(6),
    [sym_css_function_rgba_modern] = STATE(7),
    [sym_css_function_hsl] = STATE(2),
    [sym_css_function_hsl_legacy] = STATE(8),
    [sym_css_function_hsl_modern] = STATE(8),
    [sym_css_function_hsla] = STATE(2),
    [sym_css_function_hsla_legacy] = STATE(9),
    [sym_css_function_hsla_modern] = STATE(9),
    [sym_css_function_hwb] = STATE(2),
    [sym_css_hex_color] = STATE(2),
    [sym_css_named_color] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(5),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(7),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(9),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(11),
    [aux_sym_css_function_hwb_token1] = ACTIONS(13),
    [sym_css_hex_color_6_digits] = ACTIONS(15),
    [sym_css_hex_color_8_digits] = ACTIONS(17),
    [sym_css_hex_color_3_digits] = ACTIONS(15),
    [sym_css_hex_color_4_digits] = ACTIONS(15),
    [aux_sym_css_named_color_token1] = ACTIONS(19),
    [aux_sym_css_named_color_token2] = ACTIONS(19),
    [aux_sym_css_named_color_token3] = ACTIONS(21),
    [aux_sym_css_named_color_token4] = ACTIONS(19),
    [aux_sym_css_named_color_token5] = ACTIONS(19),
    [aux_sym_css_named_color_token6] = ACTIONS(19),
    [aux_sym_css_named_color_token7] = ACTIONS(19),
    [aux_sym_css_named_color_token8] = ACTIONS(19),
    [aux_sym_css_named_color_token9] = ACTIONS(19),
    [aux_sym_css_named_color_token10] = ACTIONS(21),
    [aux_sym_css_named_color_token11] = ACTIONS(19),
    [aux_sym_css_named_color_token12] = ACTIONS(19),
    [aux_sym_css_named_color_token13] = ACTIONS(19),
    [aux_sym_css_named_color_token14] = ACTIONS(19),
    [aux_sym_css_named_color_token15] = ACTIONS(19),
    [aux_sym_css_named_color_token16] = ACTIONS(19),
    [aux_sym_css_named_color_token17] = ACTIONS(19),
    [aux_sym_css_named_color_token18] = ACTIONS(19),
    [aux_sym_css_named_color_token19] = ACTIONS(19),
    [aux_sym_css_named_color_token20] = ACTIONS(19),
    [aux_sym_css_named_color_token21] = ACTIONS(19),
    [aux_sym_css_named_color_token22] = ACTIONS(19),
    [aux_sym_css_named_color_token23] = ACTIONS(19),
    [aux_sym_css_named_color_token24] = ACTIONS(19),
    [aux_sym_css_named_color_token25] = ACTIONS(19),
    [aux_sym_css_named_color_token26] = ACTIONS(19),
    [aux_sym_css_named_color_token27] = ACTIONS(19),
    [aux_sym_css_named_color_token28] = ACTIONS(19),
    [aux_sym_css_named_color_token29] = ACTIONS(19),
    [aux_sym_css_named_color_token30] = ACTIONS(19),
    [aux_sym_css_named_color_token31] = ACTIONS(19),
    [aux_sym_css_named_color_token32] = ACTIONS(19),
    [aux_sym_css_named_color_token33] = ACTIONS(19),
    [aux_sym_css_named_color_token34] = ACTIONS(19),
    [aux_sym_css_named_color_token35] = ACTIONS(19),
    [aux_sym_css_named_color_token36] = ACTIONS(19),
    [aux_sym_css_named_color_token37] = ACTIONS(19),
    [aux_sym_css_named_color_token38] = ACTIONS(19),
    [aux_sym_css_named_color_token39] = ACTIONS(19),
    [aux_sym_css_named_color_token40] = ACTIONS(19),
    [aux_sym_css_named_color_token41] = ACTIONS(19),
    [aux_sym_css_named_color_token42] = ACTIONS(19),
    [aux_sym_css_named_color_token43] = ACTIONS(19),
    [aux_sym_css_named_color_token44] = ACTIONS(19),
    [aux_sym_css_named_color_token45] = ACTIONS(19),
    [aux_sym_css_named_color_token46] = ACTIONS(19),
    [aux_sym_css_named_color_token47] = ACTIONS(19),
    [aux_sym_css_named_color_token48] = ACTIONS(19),
    [aux_sym_css_named_color_token49] = ACTIONS(19),
    [aux_sym_css_named_color_token50] = ACTIONS(19),
    [aux_sym_css_named_color_token51] = ACTIONS(19),
    [aux_sym_css_named_color_token52] = ACTIONS(21),
    [aux_sym_css_named_color_token53] = ACTIONS(19),
    [aux_sym_css_named_color_token54] = ACTIONS(19),
    [aux_sym_css_named_color_token55] = ACTIONS(21),
    [aux_sym_css_named_color_token56] = ACTIONS(19),
    [aux_sym_css_named_color_token57] = ACTIONS(19),
    [aux_sym_css_named_color_token58] = ACTIONS(19),
    [aux_sym_css_named_color_token59] = ACTIONS(19),
    [aux_sym_css_named_color_token60] = ACTIONS(19),
    [aux_sym_css_named_color_token61] = ACTIONS(19),
    [aux_sym_css_named_color_token62] = ACTIONS(19),
    [aux_sym_css_named_color_token63] = ACTIONS(19),
    [aux_sym_css_named_color_token64] = ACTIONS(21),
    [aux_sym_css_named_color_token65] = ACTIONS(19),
    [aux_sym_css_named_color_token66] = ACTIONS(19),
    [aux_sym_css_named_color_token67] = ACTIONS(19),
    [aux_sym_css_named_color_token68] = ACTIONS(19),
    [aux_sym_css_named_color_token69] = ACTIONS(19),
    [aux_sym_css_named_color_token70] = ACTIONS(19),
    [aux_sym_css_named_color_token71] = ACTIONS(19),
    [aux_sym_css_named_color_token72] = ACTIONS(19),
    [aux_sym_css_named_color_token73] = ACTIONS(19),
    [aux_sym_css_named_color_token74] = ACTIONS(19),
    [aux_sym_css_named_color_token75] = ACTIONS(19),
    [aux_sym_css_named_color_token76] = ACTIONS(19),
    [aux_sym_css_named_color_token77] = ACTIONS(19),
    [aux_sym_css_named_color_token78] = ACTIONS(19),
    [aux_sym_css_named_color_token79] = ACTIONS(19),
    [aux_sym_css_named_color_token80] = ACTIONS(19),
    [aux_sym_css_named_color_token81] = ACTIONS(19),
    [aux_sym_css_named_color_token82] = ACTIONS(19),
    [aux_sym_css_named_color_token83] = ACTIONS(21),
    [aux_sym_css_named_color_token84] = ACTIONS(19),
    [aux_sym_css_named_color_token85] = ACTIONS(19),
    [aux_sym_css_named_color_token86] = ACTIONS(19),
    [aux_sym_css_named_color_token87] = ACTIONS(19),
    [aux_sym_css_named_color_token88] = ACTIONS(19),
    [aux_sym_css_named_color_token89] = ACTIONS(19),
    [aux_sym_css_named_color_token90] = ACTIONS(19),
    [aux_sym_css_named_color_token91] = ACTIONS(19),
    [aux_sym_css_named_color_token92] = ACTIONS(19),
    [aux_sym_css_named_color_token93] = ACTIONS(19),
    [aux_sym_css_named_color_token94] = ACTIONS(19),
    [aux_sym_css_named_color_token95] = ACTIONS(19),
    [aux_sym_css_named_color_token96] = ACTIONS(19),
    [aux_sym_css_named_color_token97] = ACTIONS(19),
    [aux_sym_css_named_color_token98] = ACTIONS(19),
    [aux_sym_css_named_color_token99] = ACTIONS(19),
    [aux_sym_css_named_color_token100] = ACTIONS(19),
    [aux_sym_css_named_color_token101] = ACTIONS(19),
    [aux_sym_css_named_color_token102] = ACTIONS(19),
    [aux_sym_css_named_color_token103] = ACTIONS(19),
    [aux_sym_css_named_color_token104] = ACTIONS(21),
    [aux_sym_css_named_color_token105] = ACTIONS(19),
    [aux_sym_css_named_color_token106] = ACTIONS(21),
    [aux_sym_css_named_color_token107] = ACTIONS(19),
    [aux_sym_css_named_color_token108] = ACTIONS(19),
    [aux_sym_css_named_color_token109] = ACTIONS(19),
    [aux_sym_css_named_color_token110] = ACTIONS(19),
    [aux_sym_css_named_color_token111] = ACTIONS(19),
    [aux_sym_css_named_color_token112] = ACTIONS(19),
    [aux_sym_css_named_color_token113] = ACTIONS(19),
    [aux_sym_css_named_color_token114] = ACTIONS(19),
    [aux_sym_css_named_color_token115] = ACTIONS(19),
    [aux_sym_css_named_color_token116] = ACTIONS(19),
    [aux_sym_css_named_color_token117] = ACTIONS(19),
    [aux_sym_css_named_color_token118] = ACTIONS(19),
    [aux_sym_css_named_color_token119] = ACTIONS(19),
    [aux_sym_css_named_color_token120] = ACTIONS(19),
    [aux_sym_css_named_color_token121] = ACTIONS(19),
    [aux_sym_css_named_color_token122] = ACTIONS(19),
    [aux_sym_css_named_color_token123] = ACTIONS(19),
    [aux_sym_css_named_color_token124] = ACTIONS(19),
    [aux_sym_css_named_color_token125] = ACTIONS(19),
    [aux_sym_css_named_color_token126] = ACTIONS(19),
    [aux_sym_css_named_color_token127] = ACTIONS(19),
    [aux_sym_css_named_color_token128] = ACTIONS(19),
    [aux_sym_css_named_color_token129] = ACTIONS(19),
    [aux_sym_css_named_color_token130] = ACTIONS(19),
    [aux_sym_css_named_color_token131] = ACTIONS(19),
    [aux_sym_css_named_color_token132] = ACTIONS(19),
    [aux_sym_css_named_color_token133] = ACTIONS(19),
    [aux_sym_css_named_color_token134] = ACTIONS(19),
    [aux_sym_css_named_color_token135] = ACTIONS(19),
    [aux_sym_css_named_color_token136] = ACTIONS(19),
    [aux_sym_css_named_color_token137] = ACTIONS(19),
    [aux_sym_css_named_color_token138] = ACTIONS(19),
    [aux_sym_css_named_color_token139] = ACTIONS(19),
    [aux_sym_css_named_color_token140] = ACTIONS(19),
    [aux_sym_css_named_color_token141] = ACTIONS(19),
    [aux_sym_css_named_color_token142] = ACTIONS(19),
    [aux_sym_css_named_color_token143] = ACTIONS(19),
    [aux_sym_css_named_color_token144] = ACTIONS(19),
    [aux_sym_css_named_color_token145] = ACTIONS(21),
    [aux_sym_css_named_color_token146] = ACTIONS(19),
    [aux_sym_css_named_color_token147] = ACTIONS(21),
    [aux_sym_css_named_color_token148] = ACTIONS(19),
    [sym_css_keyword_transparent] = ACTIONS(23),
  },
  [2] = {
    [sym_css_function_rgb] = STATE(3),
    [sym_css_function_rgba] = STATE(3),
    [sym_css_function_rgb_legacy] = STATE(6),
    [sym_css_function_rgba_legacy] = STATE(7),
    [sym_css_function_rgb_modern] = STATE(6),
    [sym_css_function_rgba_modern] = STATE(7),
    [sym_css_function_hsl] = STATE(3),
    [sym_css_function_hsl_legacy] = STATE(8),
    [sym_css_function_hsl_modern] = STATE(8),
    [sym_css_function_hsla] = STATE(3),
    [sym_css_function_hsla_legacy] = STATE(9),
    [sym_css_function_hsla_modern] = STATE(9),
    [sym_css_function_hwb] = STATE(3),
    [sym_css_hex_color] = STATE(3),
    [sym_css_named_color] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(5),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(7),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(9),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(11),
    [aux_sym_css_function_hwb_token1] = ACTIONS(13),
    [sym_css_hex_color_6_digits] = ACTIONS(15),
    [sym_css_hex_color_8_digits] = ACTIONS(17),
    [sym_css_hex_color_3_digits] = ACTIONS(15),
    [sym_css_hex_color_4_digits] = ACTIONS(15),
    [aux_sym_css_named_color_token1] = ACTIONS(19),
    [aux_sym_css_named_color_token2] = ACTIONS(19),
    [aux_sym_css_named_color_token3] = ACTIONS(21),
    [aux_sym_css_named_color_token4] = ACTIONS(19),
    [aux_sym_css_named_color_token5] = ACTIONS(19),
    [aux_sym_css_named_color_token6] = ACTIONS(19),
    [aux_sym_css_named_color_token7] = ACTIONS(19),
    [aux_sym_css_named_color_token8] = ACTIONS(19),
    [aux_sym_css_named_color_token9] = ACTIONS(19),
    [aux_sym_css_named_color_token10] = ACTIONS(21),
    [aux_sym_css_named_color_token11] = ACTIONS(19),
    [aux_sym_css_named_color_token12] = ACTIONS(19),
    [aux_sym_css_named_color_token13] = ACTIONS(19),
    [aux_sym_css_named_color_token14] = ACTIONS(19),
    [aux_sym_css_named_color_token15] = ACTIONS(19),
    [aux_sym_css_named_color_token16] = ACTIONS(19),
    [aux_sym_css_named_color_token17] = ACTIONS(19),
    [aux_sym_css_named_color_token18] = ACTIONS(19),
    [aux_sym_css_named_color_token19] = ACTIONS(19),
    [aux_sym_css_named_color_token20] = ACTIONS(19),
    [aux_sym_css_named_color_token21] = ACTIONS(19),
    [aux_sym_css_named_color_token22] = ACTIONS(19),
    [aux_sym_css_named_color_token23] = ACTIONS(19),
    [aux_sym_css_named_color_token24] = ACTIONS(19),
    [aux_sym_css_named_color_token25] = ACTIONS(19),
    [aux_sym_css_named_color_token26] = ACTIONS(19),
    [aux_sym_css_named_color_token27] = ACTIONS(19),
    [aux_sym_css_named_color_token28] = ACTIONS(19),
    [aux_sym_css_named_color_token29] = ACTIONS(19),
    [aux_sym_css_named_color_token30] = ACTIONS(19),
    [aux_sym_css_named_color_token31] = ACTIONS(19),
    [aux_sym_css_named_color_token32] = ACTIONS(19),
    [aux_sym_css_named_color_token33] = ACTIONS(19),
    [aux_sym_css_named_color_token34] = ACTIONS(19),
    [aux_sym_css_named_color_token35] = ACTIONS(19),
    [aux_sym_css_named_color_token36] = ACTIONS(19),
    [aux_sym_css_named_color_token37] = ACTIONS(19),
    [aux_sym_css_named_color_token38] = ACTIONS(19),
    [aux_sym_css_named_color_token39] = ACTIONS(19),
    [aux_sym_css_named_color_token40] = ACTIONS(19),
    [aux_sym_css_named_color_token41] = ACTIONS(19),
    [aux_sym_css_named_color_token42] = ACTIONS(19),
    [aux_sym_css_named_color_token43] = ACTIONS(19),
    [aux_sym_css_named_color_token44] = ACTIONS(19),
    [aux_sym_css_named_color_token45] = ACTIONS(19),
    [aux_sym_css_named_color_token46] = ACTIONS(19),
    [aux_sym_css_named_color_token47] = ACTIONS(19),
    [aux_sym_css_named_color_token48] = ACTIONS(19),
    [aux_sym_css_named_color_token49] = ACTIONS(19),
    [aux_sym_css_named_color_token50] = ACTIONS(19),
    [aux_sym_css_named_color_token51] = ACTIONS(19),
    [aux_sym_css_named_color_token52] = ACTIONS(21),
    [aux_sym_css_named_color_token53] = ACTIONS(19),
    [aux_sym_css_named_color_token54] = ACTIONS(19),
    [aux_sym_css_named_color_token55] = ACTIONS(21),
    [aux_sym_css_named_color_token56] = ACTIONS(19),
    [aux_sym_css_named_color_token57] = ACTIONS(19),
    [aux_sym_css_named_color_token58] = ACTIONS(19),
    [aux_sym_css_named_color_token59] = ACTIONS(19),
    [aux_sym_css_named_color_token60] = ACTIONS(19),
    [aux_sym_css_named_color_token61] = ACTIONS(19),
    [aux_sym_css_named_color_token62] = ACTIONS(19),
    [aux_sym_css_named_color_token63] = ACTIONS(19),
    [aux_sym_css_named_color_token64] = ACTIONS(21),
    [aux_sym_css_named_color_token65] = ACTIONS(19),
    [aux_sym_css_named_color_token66] = ACTIONS(19),
    [aux_sym_css_named_color_token67] = ACTIONS(19),
    [aux_sym_css_named_color_token68] = ACTIONS(19),
    [aux_sym_css_named_color_token69] = ACTIONS(19),
    [aux_sym_css_named_color_token70] = ACTIONS(19),
    [aux_sym_css_named_color_token71] = ACTIONS(19),
    [aux_sym_css_named_color_token72] = ACTIONS(19),
    [aux_sym_css_named_color_token73] = ACTIONS(19),
    [aux_sym_css_named_color_token74] = ACTIONS(19),
    [aux_sym_css_named_color_token75] = ACTIONS(19),
    [aux_sym_css_named_color_token76] = ACTIONS(19),
    [aux_sym_css_named_color_token77] = ACTIONS(19),
    [aux_sym_css_named_color_token78] = ACTIONS(19),
    [aux_sym_css_named_color_token79] = ACTIONS(19),
    [aux_sym_css_named_color_token80] = ACTIONS(19),
    [aux_sym_css_named_color_token81] = ACTIONS(19),
    [aux_sym_css_named_color_token82] = ACTIONS(19),
    [aux_sym_css_named_color_token83] = ACTIONS(21),
    [aux_sym_css_named_color_token84] = ACTIONS(19),
    [aux_sym_css_named_color_token85] = ACTIONS(19),
    [aux_sym_css_named_color_token86] = ACTIONS(19),
    [aux_sym_css_named_color_token87] = ACTIONS(19),
    [aux_sym_css_named_color_token88] = ACTIONS(19),
    [aux_sym_css_named_color_token89] = ACTIONS(19),
    [aux_sym_css_named_color_token90] = ACTIONS(19),
    [aux_sym_css_named_color_token91] = ACTIONS(19),
    [aux_sym_css_named_color_token92] = ACTIONS(19),
    [aux_sym_css_named_color_token93] = ACTIONS(19),
    [aux_sym_css_named_color_token94] = ACTIONS(19),
    [aux_sym_css_named_color_token95] = ACTIONS(19),
    [aux_sym_css_named_color_token96] = ACTIONS(19),
    [aux_sym_css_named_color_token97] = ACTIONS(19),
    [aux_sym_css_named_color_token98] = ACTIONS(19),
    [aux_sym_css_named_color_token99] = ACTIONS(19),
    [aux_sym_css_named_color_token100] = ACTIONS(19),
    [aux_sym_css_named_color_token101] = ACTIONS(19),
    [aux_sym_css_named_color_token102] = ACTIONS(19),
    [aux_sym_css_named_color_token103] = ACTIONS(19),
    [aux_sym_css_named_color_token104] = ACTIONS(21),
    [aux_sym_css_named_color_token105] = ACTIONS(19),
    [aux_sym_css_named_color_token106] = ACTIONS(21),
    [aux_sym_css_named_color_token107] = ACTIONS(19),
    [aux_sym_css_named_color_token108] = ACTIONS(19),
    [aux_sym_css_named_color_token109] = ACTIONS(19),
    [aux_sym_css_named_color_token110] = ACTIONS(19),
    [aux_sym_css_named_color_token111] = ACTIONS(19),
    [aux_sym_css_named_color_token112] = ACTIONS(19),
    [aux_sym_css_named_color_token113] = ACTIONS(19),
    [aux_sym_css_named_color_token114] = ACTIONS(19),
    [aux_sym_css_named_color_token115] = ACTIONS(19),
    [aux_sym_css_named_color_token116] = ACTIONS(19),
    [aux_sym_css_named_color_token117] = ACTIONS(19),
    [aux_sym_css_named_color_token118] = ACTIONS(19),
    [aux_sym_css_named_color_token119] = ACTIONS(19),
    [aux_sym_css_named_color_token120] = ACTIONS(19),
    [aux_sym_css_named_color_token121] = ACTIONS(19),
    [aux_sym_css_named_color_token122] = ACTIONS(19),
    [aux_sym_css_named_color_token123] = ACTIONS(19),
    [aux_sym_css_named_color_token124] = ACTIONS(19),
    [aux_sym_css_named_color_token125] = ACTIONS(19),
    [aux_sym_css_named_color_token126] = ACTIONS(19),
    [aux_sym_css_named_color_token127] = ACTIONS(19),
    [aux_sym_css_named_color_token128] = ACTIONS(19),
    [aux_sym_css_named_color_token129] = ACTIONS(19),
    [aux_sym_css_named_color_token130] = ACTIONS(19),
    [aux_sym_css_named_color_token131] = ACTIONS(19),
    [aux_sym_css_named_color_token132] = ACTIONS(19),
    [aux_sym_css_named_color_token133] = ACTIONS(19),
    [aux_sym_css_named_color_token134] = ACTIONS(19),
    [aux_sym_css_named_color_token135] = ACTIONS(19),
    [aux_sym_css_named_color_token136] = ACTIONS(19),
    [aux_sym_css_named_color_token137] = ACTIONS(19),
    [aux_sym_css_named_color_token138] = ACTIONS(19),
    [aux_sym_css_named_color_token139] = ACTIONS(19),
    [aux_sym_css_named_color_token140] = ACTIONS(19),
    [aux_sym_css_named_color_token141] = ACTIONS(19),
    [aux_sym_css_named_color_token142] = ACTIONS(19),
    [aux_sym_css_named_color_token143] = ACTIONS(19),
    [aux_sym_css_named_color_token144] = ACTIONS(19),
    [aux_sym_css_named_color_token145] = ACTIONS(21),
    [aux_sym_css_named_color_token146] = ACTIONS(19),
    [aux_sym_css_named_color_token147] = ACTIONS(21),
    [aux_sym_css_named_color_token148] = ACTIONS(19),
    [sym_css_keyword_transparent] = ACTIONS(27),
  },
  [3] = {
    [sym_css_function_rgb] = STATE(3),
    [sym_css_function_rgba] = STATE(3),
    [sym_css_function_rgb_legacy] = STATE(6),
    [sym_css_function_rgba_legacy] = STATE(7),
    [sym_css_function_rgb_modern] = STATE(6),
    [sym_css_function_rgba_modern] = STATE(7),
    [sym_css_function_hsl] = STATE(3),
    [sym_css_function_hsl_legacy] = STATE(8),
    [sym_css_function_hsl_modern] = STATE(8),
    [sym_css_function_hsla] = STATE(3),
    [sym_css_function_hsla_legacy] = STATE(9),
    [sym_css_function_hsla_modern] = STATE(9),
    [sym_css_function_hwb] = STATE(3),
    [sym_css_hex_color] = STATE(3),
    [sym_css_named_color] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(31),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(34),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(37),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(40),
    [aux_sym_css_function_hwb_token1] = ACTIONS(43),
    [sym_css_hex_color_6_digits] = ACTIONS(46),
    [sym_css_hex_color_8_digits] = ACTIONS(49),
    [sym_css_hex_color_3_digits] = ACTIONS(46),
    [sym_css_hex_color_4_digits] = ACTIONS(46),
    [aux_sym_css_named_color_token1] = ACTIONS(52),
    [aux_sym_css_named_color_token2] = ACTIONS(52),
    [aux_sym_css_named_color_token3] = ACTIONS(55),
    [aux_sym_css_named_color_token4] = ACTIONS(52),
    [aux_sym_css_named_color_token5] = ACTIONS(52),
    [aux_sym_css_named_color_token6] = ACTIONS(52),
    [aux_sym_css_named_color_token7] = ACTIONS(52),
    [aux_sym_css_named_color_token8] = ACTIONS(52),
    [aux_sym_css_named_color_token9] = ACTIONS(52),
    [aux_sym_css_named_color_token10] = ACTIONS(55),
    [aux_sym_css_named_color_token11] = ACTIONS(52),
    [aux_sym_css_named_color_token12] = ACTIONS(52),
    [aux_sym_css_named_color_token13] = ACTIONS(52),
    [aux_sym_css_named_color_token14] = ACTIONS(52),
    [aux_sym_css_named_color_token15] = ACTIONS(52),
    [aux_sym_css_named_color_token16] = ACTIONS(52),
    [aux_sym_css_named_color_token17] = ACTIONS(52),
    [aux_sym_css_named_color_token18] = ACTIONS(52),
    [aux_sym_css_named_color_token19] = ACTIONS(52),
    [aux_sym_css_named_color_token20] = ACTIONS(52),
    [aux_sym_css_named_color_token21] = ACTIONS(52),
    [aux_sym_css_named_color_token22] = ACTIONS(52),
    [aux_sym_css_named_color_token23] = ACTIONS(52),
    [aux_sym_css_named_color_token24] = ACTIONS(52),
    [aux_sym_css_named_color_token25] = ACTIONS(52),
    [aux_sym_css_named_color_token26] = ACTIONS(52),
    [aux_sym_css_named_color_token27] = ACTIONS(52),
    [aux_sym_css_named_color_token28] = ACTIONS(52),
    [aux_sym_css_named_color_token29] = ACTIONS(52),
    [aux_sym_css_named_color_token30] = ACTIONS(52),
    [aux_sym_css_named_color_token31] = ACTIONS(52),
    [aux_sym_css_named_color_token32] = ACTIONS(52),
    [aux_sym_css_named_color_token33] = ACTIONS(52),
    [aux_sym_css_named_color_token34] = ACTIONS(52),
    [aux_sym_css_named_color_token35] = ACTIONS(52),
    [aux_sym_css_named_color_token36] = ACTIONS(52),
    [aux_sym_css_named_color_token37] = ACTIONS(52),
    [aux_sym_css_named_color_token38] = ACTIONS(52),
    [aux_sym_css_named_color_token39] = ACTIONS(52),
    [aux_sym_css_named_color_token40] = ACTIONS(52),
    [aux_sym_css_named_color_token41] = ACTIONS(52),
    [aux_sym_css_named_color_token42] = ACTIONS(52),
    [aux_sym_css_named_color_token43] = ACTIONS(52),
    [aux_sym_css_named_color_token44] = ACTIONS(52),
    [aux_sym_css_named_color_token45] = ACTIONS(52),
    [aux_sym_css_named_color_token46] = ACTIONS(52),
    [aux_sym_css_named_color_token47] = ACTIONS(52),
    [aux_sym_css_named_color_token48] = ACTIONS(52),
    [aux_sym_css_named_color_token49] = ACTIONS(52),
    [aux_sym_css_named_color_token50] = ACTIONS(52),
    [aux_sym_css_named_color_token51] = ACTIONS(52),
    [aux_sym_css_named_color_token52] = ACTIONS(55),
    [aux_sym_css_named_color_token53] = ACTIONS(52),
    [aux_sym_css_named_color_token54] = ACTIONS(52),
    [aux_sym_css_named_color_token55] = ACTIONS(55),
    [aux_sym_css_named_color_token56] = ACTIONS(52),
    [aux_sym_css_named_color_token57] = ACTIONS(52),
    [aux_sym_css_named_color_token58] = ACTIONS(52),
    [aux_sym_css_named_color_token59] = ACTIONS(52),
    [aux_sym_css_named_color_token60] = ACTIONS(52),
    [aux_sym_css_named_color_token61] = ACTIONS(52),
    [aux_sym_css_named_color_token62] = ACTIONS(52),
    [aux_sym_css_named_color_token63] = ACTIONS(52),
    [aux_sym_css_named_color_token64] = ACTIONS(55),
    [aux_sym_css_named_color_token65] = ACTIONS(52),
    [aux_sym_css_named_color_token66] = ACTIONS(52),
    [aux_sym_css_named_color_token67] = ACTIONS(52),
    [aux_sym_css_named_color_token68] = ACTIONS(52),
    [aux_sym_css_named_color_token69] = ACTIONS(52),
    [aux_sym_css_named_color_token70] = ACTIONS(52),
    [aux_sym_css_named_color_token71] = ACTIONS(52),
    [aux_sym_css_named_color_token72] = ACTIONS(52),
    [aux_sym_css_named_color_token73] = ACTIONS(52),
    [aux_sym_css_named_color_token74] = ACTIONS(52),
    [aux_sym_css_named_color_token75] = ACTIONS(52),
    [aux_sym_css_named_color_token76] = ACTIONS(52),
    [aux_sym_css_named_color_token77] = ACTIONS(52),
    [aux_sym_css_named_color_token78] = ACTIONS(52),
    [aux_sym_css_named_color_token79] = ACTIONS(52),
    [aux_sym_css_named_color_token80] = ACTIONS(52),
    [aux_sym_css_named_color_token81] = ACTIONS(52),
    [aux_sym_css_named_color_token82] = ACTIONS(52),
    [aux_sym_css_named_color_token83] = ACTIONS(55),
    [aux_sym_css_named_color_token84] = ACTIONS(52),
    [aux_sym_css_named_color_token85] = ACTIONS(52),
    [aux_sym_css_named_color_token86] = ACTIONS(52),
    [aux_sym_css_named_color_token87] = ACTIONS(52),
    [aux_sym_css_named_color_token88] = ACTIONS(52),
    [aux_sym_css_named_color_token89] = ACTIONS(52),
    [aux_sym_css_named_color_token90] = ACTIONS(52),
    [aux_sym_css_named_color_token91] = ACTIONS(52),
    [aux_sym_css_named_color_token92] = ACTIONS(52),
    [aux_sym_css_named_color_token93] = ACTIONS(52),
    [aux_sym_css_named_color_token94] = ACTIONS(52),
    [aux_sym_css_named_color_token95] = ACTIONS(52),
    [aux_sym_css_named_color_token96] = ACTIONS(52),
    [aux_sym_css_named_color_token97] = ACTIONS(52),
    [aux_sym_css_named_color_token98] = ACTIONS(52),
    [aux_sym_css_named_color_token99] = ACTIONS(52),
    [aux_sym_css_named_color_token100] = ACTIONS(52),
    [aux_sym_css_named_color_token101] = ACTIONS(52),
    [aux_sym_css_named_color_token102] = ACTIONS(52),
    [aux_sym_css_named_color_token103] = ACTIONS(52),
    [aux_sym_css_named_color_token104] = ACTIONS(55),
    [aux_sym_css_named_color_token105] = ACTIONS(52),
    [aux_sym_css_named_color_token106] = ACTIONS(55),
    [aux_sym_css_named_color_token107] = ACTIONS(52),
    [aux_sym_css_named_color_token108] = ACTIONS(52),
    [aux_sym_css_named_color_token109] = ACTIONS(52),
    [aux_sym_css_named_color_token110] = ACTIONS(52),
    [aux_sym_css_named_color_token111] = ACTIONS(52),
    [aux_sym_css_named_color_token112] = ACTIONS(52),
    [aux_sym_css_named_color_token113] = ACTIONS(52),
    [aux_sym_css_named_color_token114] = ACTIONS(52),
    [aux_sym_css_named_color_token115] = ACTIONS(52),
    [aux_sym_css_named_color_token116] = ACTIONS(52),
    [aux_sym_css_named_color_token117] = ACTIONS(52),
    [aux_sym_css_named_color_token118] = ACTIONS(52),
    [aux_sym_css_named_color_token119] = ACTIONS(52),
    [aux_sym_css_named_color_token120] = ACTIONS(52),
    [aux_sym_css_named_color_token121] = ACTIONS(52),
    [aux_sym_css_named_color_token122] = ACTIONS(52),
    [aux_sym_css_named_color_token123] = ACTIONS(52),
    [aux_sym_css_named_color_token124] = ACTIONS(52),
    [aux_sym_css_named_color_token125] = ACTIONS(52),
    [aux_sym_css_named_color_token126] = ACTIONS(52),
    [aux_sym_css_named_color_token127] = ACTIONS(52),
    [aux_sym_css_named_color_token128] = ACTIONS(52),
    [aux_sym_css_named_color_token129] = ACTIONS(52),
    [aux_sym_css_named_color_token130] = ACTIONS(52),
    [aux_sym_css_named_color_token131] = ACTIONS(52),
    [aux_sym_css_named_color_token132] = ACTIONS(52),
    [aux_sym_css_named_color_token133] = ACTIONS(52),
    [aux_sym_css_named_color_token134] = ACTIONS(52),
    [aux_sym_css_named_color_token135] = ACTIONS(52),
    [aux_sym_css_named_color_token136] = ACTIONS(52),
    [aux_sym_css_named_color_token137] = ACTIONS(52),
    [aux_sym_css_named_color_token138] = ACTIONS(52),
    [aux_sym_css_named_color_token139] = ACTIONS(52),
    [aux_sym_css_named_color_token140] = ACTIONS(52),
    [aux_sym_css_named_color_token141] = ACTIONS(52),
    [aux_sym_css_named_color_token142] = ACTIONS(52),
    [aux_sym_css_named_color_token143] = ACTIONS(52),
    [aux_sym_css_named_color_token144] = ACTIONS(52),
    [aux_sym_css_named_color_token145] = ACTIONS(55),
    [aux_sym_css_named_color_token146] = ACTIONS(52),
    [aux_sym_css_named_color_token147] = ACTIONS(55),
    [aux_sym_css_named_color_token148] = ACTIONS(52),
    [sym_css_keyword_transparent] = ACTIONS(58),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(63),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(61),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(63),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(61),
    [aux_sym_css_function_hwb_token1] = ACTIONS(61),
    [sym_css_hex_color_6_digits] = ACTIONS(63),
    [sym_css_hex_color_8_digits] = ACTIONS(61),
    [sym_css_hex_color_3_digits] = ACTIONS(63),
    [sym_css_hex_color_4_digits] = ACTIONS(63),
    [aux_sym_css_named_color_token1] = ACTIONS(61),
    [aux_sym_css_named_color_token2] = ACTIONS(61),
    [aux_sym_css_named_color_token3] = ACTIONS(63),
    [aux_sym_css_named_color_token4] = ACTIONS(61),
    [aux_sym_css_named_color_token5] = ACTIONS(61),
    [aux_sym_css_named_color_token6] = ACTIONS(61),
    [aux_sym_css_named_color_token7] = ACTIONS(61),
    [aux_sym_css_named_color_token8] = ACTIONS(61),
    [aux_sym_css_named_color_token9] = ACTIONS(61),
    [aux_sym_css_named_color_token10] = ACTIONS(63),
    [aux_sym_css_named_color_token11] = ACTIONS(61),
    [aux_sym_css_named_color_token12] = ACTIONS(61),
    [aux_sym_css_named_color_token13] = ACTIONS(61),
    [aux_sym_css_named_color_token14] = ACTIONS(61),
    [aux_sym_css_named_color_token15] = ACTIONS(61),
    [aux_sym_css_named_color_token16] = ACTIONS(61),
    [aux_sym_css_named_color_token17] = ACTIONS(61),
    [aux_sym_css_named_color_token18] = ACTIONS(61),
    [aux_sym_css_named_color_token19] = ACTIONS(61),
    [aux_sym_css_named_color_token20] = ACTIONS(61),
    [aux_sym_css_named_color_token21] = ACTIONS(61),
    [aux_sym_css_named_color_token22] = ACTIONS(61),
    [aux_sym_css_named_color_token23] = ACTIONS(61),
    [aux_sym_css_named_color_token24] = ACTIONS(61),
    [aux_sym_css_named_color_token25] = ACTIONS(61),
    [aux_sym_css_named_color_token26] = ACTIONS(61),
    [aux_sym_css_named_color_token27] = ACTIONS(61),
    [aux_sym_css_named_color_token28] = ACTIONS(61),
    [aux_sym_css_named_color_token29] = ACTIONS(61),
    [aux_sym_css_named_color_token30] = ACTIONS(61),
    [aux_sym_css_named_color_token31] = ACTIONS(61),
    [aux_sym_css_named_color_token32] = ACTIONS(61),
    [aux_sym_css_named_color_token33] = ACTIONS(61),
    [aux_sym_css_named_color_token34] = ACTIONS(61),
    [aux_sym_css_named_color_token35] = ACTIONS(61),
    [aux_sym_css_named_color_token36] = ACTIONS(61),
    [aux_sym_css_named_color_token37] = ACTIONS(61),
    [aux_sym_css_named_color_token38] = ACTIONS(61),
    [aux_sym_css_named_color_token39] = ACTIONS(61),
    [aux_sym_css_named_color_token40] = ACTIONS(61),
    [aux_sym_css_named_color_token41] = ACTIONS(61),
    [aux_sym_css_named_color_token42] = ACTIONS(61),
    [aux_sym_css_named_color_token43] = ACTIONS(61),
    [aux_sym_css_named_color_token44] = ACTIONS(61),
    [aux_sym_css_named_color_token45] = ACTIONS(61),
    [aux_sym_css_named_color_token46] = ACTIONS(61),
    [aux_sym_css_named_color_token47] = ACTIONS(61),
    [aux_sym_css_named_color_token48] = ACTIONS(61),
    [aux_sym_css_named_color_token49] = ACTIONS(61),
    [aux_sym_css_named_color_token50] = ACTIONS(61),
    [aux_sym_css_named_color_token51] = ACTIONS(61),
    [aux_sym_css_named_color_token52] = ACTIONS(63),
    [aux_sym_css_named_color_token53] = ACTIONS(61),
    [aux_sym_css_named_color_token54] = ACTIONS(61),
    [aux_sym_css_named_color_token55] = ACTIONS(63),
    [aux_sym_css_named_color_token56] = ACTIONS(61),
    [aux_sym_css_named_color_token57] = ACTIONS(61),
    [aux_sym_css_named_color_token58] = ACTIONS(61),
    [aux_sym_css_named_color_token59] = ACTIONS(61),
    [aux_sym_css_named_color_token60] = ACTIONS(61),
    [aux_sym_css_named_color_token61] = ACTIONS(61),
    [aux_sym_css_named_color_token62] = ACTIONS(61),
    [aux_sym_css_named_color_token63] = ACTIONS(61),
    [aux_sym_css_named_color_token64] = ACTIONS(63),
    [aux_sym_css_named_color_token65] = ACTIONS(61),
    [aux_sym_css_named_color_token66] = ACTIONS(61),
    [aux_sym_css_named_color_token67] = ACTIONS(61),
    [aux_sym_css_named_color_token68] = ACTIONS(61),
    [aux_sym_css_named_color_token69] = ACTIONS(61),
    [aux_sym_css_named_color_token70] = ACTIONS(61),
    [aux_sym_css_named_color_token71] = ACTIONS(61),
    [aux_sym_css_named_color_token72] = ACTIONS(61),
    [aux_sym_css_named_color_token73] = ACTIONS(61),
    [aux_sym_css_named_color_token74] = ACTIONS(61),
    [aux_sym_css_named_color_token75] = ACTIONS(61),
    [aux_sym_css_named_color_token76] = ACTIONS(61),
    [aux_sym_css_named_color_token77] = ACTIONS(61),
    [aux_sym_css_named_color_token78] = ACTIONS(61),
    [aux_sym_css_named_color_token79] = ACTIONS(61),
    [aux_sym_css_named_color_token80] = ACTIONS(61),
    [aux_sym_css_named_color_token81] = ACTIONS(61),
    [aux_sym_css_named_color_token82] = ACTIONS(61),
    [aux_sym_css_named_color_token83] = ACTIONS(63),
    [aux_sym_css_named_color_token84] = ACTIONS(61),
    [aux_sym_css_named_color_token85] = ACTIONS(61),
    [aux_sym_css_named_color_token86] = ACTIONS(61),
    [aux_sym_css_named_color_token87] = ACTIONS(61),
    [aux_sym_css_named_color_token88] = ACTIONS(61),
    [aux_sym_css_named_color_token89] = ACTIONS(61),
    [aux_sym_css_named_color_token90] = ACTIONS(61),
    [aux_sym_css_named_color_token91] = ACTIONS(61),
    [aux_sym_css_named_color_token92] = ACTIONS(61),
    [aux_sym_css_named_color_token93] = ACTIONS(61),
    [aux_sym_css_named_color_token94] = ACTIONS(61),
    [aux_sym_css_named_color_token95] = ACTIONS(61),
    [aux_sym_css_named_color_token96] = ACTIONS(61),
    [aux_sym_css_named_color_token97] = ACTIONS(61),
    [aux_sym_css_named_color_token98] = ACTIONS(61),
    [aux_sym_css_named_color_token99] = ACTIONS(61),
    [aux_sym_css_named_color_token100] = ACTIONS(61),
    [aux_sym_css_named_color_token101] = ACTIONS(61),
    [aux_sym_css_named_color_token102] = ACTIONS(61),
    [aux_sym_css_named_color_token103] = ACTIONS(61),
    [aux_sym_css_named_color_token104] = ACTIONS(63),
    [aux_sym_css_named_color_token105] = ACTIONS(61),
    [aux_sym_css_named_color_token106] = ACTIONS(63),
    [aux_sym_css_named_color_token107] = ACTIONS(61),
    [aux_sym_css_named_color_token108] = ACTIONS(61),
    [aux_sym_css_named_color_token109] = ACTIONS(61),
    [aux_sym_css_named_color_token110] = ACTIONS(61),
    [aux_sym_css_named_color_token111] = ACTIONS(61),
    [aux_sym_css_named_color_token112] = ACTIONS(61),
    [aux_sym_css_named_color_token113] = ACTIONS(61),
    [aux_sym_css_named_color_token114] = ACTIONS(61),
    [aux_sym_css_named_color_token115] = ACTIONS(61),
    [aux_sym_css_named_color_token116] = ACTIONS(61),
    [aux_sym_css_named_color_token117] = ACTIONS(61),
    [aux_sym_css_named_color_token118] = ACTIONS(61),
    [aux_sym_css_named_color_token119] = ACTIONS(61),
    [aux_sym_css_named_color_token120] = ACTIONS(61),
    [aux_sym_css_named_color_token121] = ACTIONS(61),
    [aux_sym_css_named_color_token122] = ACTIONS(61),
    [aux_sym_css_named_color_token123] = ACTIONS(61),
    [aux_sym_css_named_color_token124] = ACTIONS(61),
    [aux_sym_css_named_color_token125] = ACTIONS(61),
    [aux_sym_css_named_color_token126] = ACTIONS(61),
    [aux_sym_css_named_color_token127] = ACTIONS(61),
    [aux_sym_css_named_color_token128] = ACTIONS(61),
    [aux_sym_css_named_color_token129] = ACTIONS(61),
    [aux_sym_css_named_color_token130] = ACTIONS(61),
    [aux_sym_css_named_color_token131] = ACTIONS(61),
    [aux_sym_css_named_color_token132] = ACTIONS(61),
    [aux_sym_css_named_color_token133] = ACTIONS(61),
    [aux_sym_css_named_color_token134] = ACTIONS(61),
    [aux_sym_css_named_color_token135] = ACTIONS(61),
    [aux_sym_css_named_color_token136] = ACTIONS(61),
    [aux_sym_css_named_color_token137] = ACTIONS(61),
    [aux_sym_css_named_color_token138] = ACTIONS(61),
    [aux_sym_css_named_color_token139] = ACTIONS(61),
    [aux_sym_css_named_color_token140] = ACTIONS(61),
    [aux_sym_css_named_color_token141] = ACTIONS(61),
    [aux_sym_css_named_color_token142] = ACTIONS(61),
    [aux_sym_css_named_color_token143] = ACTIONS(61),
    [aux_sym_css_named_color_token144] = ACTIONS(61),
    [aux_sym_css_named_color_token145] = ACTIONS(63),
    [aux_sym_css_named_color_token146] = ACTIONS(61),
    [aux_sym_css_named_color_token147] = ACTIONS(63),
    [aux_sym_css_named_color_token148] = ACTIONS(61),
    [sym_css_keyword_transparent] = ACTIONS(61),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(67),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(65),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(67),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(65),
    [aux_sym_css_function_hwb_token1] = ACTIONS(65),
    [sym_css_hex_color_6_digits] = ACTIONS(67),
    [sym_css_hex_color_8_digits] = ACTIONS(65),
    [sym_css_hex_color_3_digits] = ACTIONS(67),
    [sym_css_hex_color_4_digits] = ACTIONS(67),
    [aux_sym_css_named_color_token1] = ACTIONS(65),
    [aux_sym_css_named_color_token2] = ACTIONS(65),
    [aux_sym_css_named_color_token3] = ACTIONS(67),
    [aux_sym_css_named_color_token4] = ACTIONS(65),
    [aux_sym_css_named_color_token5] = ACTIONS(65),
    [aux_sym_css_named_color_token6] = ACTIONS(65),
    [aux_sym_css_named_color_token7] = ACTIONS(65),
    [aux_sym_css_named_color_token8] = ACTIONS(65),
    [aux_sym_css_named_color_token9] = ACTIONS(65),
    [aux_sym_css_named_color_token10] = ACTIONS(67),
    [aux_sym_css_named_color_token11] = ACTIONS(65),
    [aux_sym_css_named_color_token12] = ACTIONS(65),
    [aux_sym_css_named_color_token13] = ACTIONS(65),
    [aux_sym_css_named_color_token14] = ACTIONS(65),
    [aux_sym_css_named_color_token15] = ACTIONS(65),
    [aux_sym_css_named_color_token16] = ACTIONS(65),
    [aux_sym_css_named_color_token17] = ACTIONS(65),
    [aux_sym_css_named_color_token18] = ACTIONS(65),
    [aux_sym_css_named_color_token19] = ACTIONS(65),
    [aux_sym_css_named_color_token20] = ACTIONS(65),
    [aux_sym_css_named_color_token21] = ACTIONS(65),
    [aux_sym_css_named_color_token22] = ACTIONS(65),
    [aux_sym_css_named_color_token23] = ACTIONS(65),
    [aux_sym_css_named_color_token24] = ACTIONS(65),
    [aux_sym_css_named_color_token25] = ACTIONS(65),
    [aux_sym_css_named_color_token26] = ACTIONS(65),
    [aux_sym_css_named_color_token27] = ACTIONS(65),
    [aux_sym_css_named_color_token28] = ACTIONS(65),
    [aux_sym_css_named_color_token29] = ACTIONS(65),
    [aux_sym_css_named_color_token30] = ACTIONS(65),
    [aux_sym_css_named_color_token31] = ACTIONS(65),
    [aux_sym_css_named_color_token32] = ACTIONS(65),
    [aux_sym_css_named_color_token33] = ACTIONS(65),
    [aux_sym_css_named_color_token34] = ACTIONS(65),
    [aux_sym_css_named_color_token35] = ACTIONS(65),
    [aux_sym_css_named_color_token36] = ACTIONS(65),
    [aux_sym_css_named_color_token37] = ACTIONS(65),
    [aux_sym_css_named_color_token38] = ACTIONS(65),
    [aux_sym_css_named_color_token39] = ACTIONS(65),
    [aux_sym_css_named_color_token40] = ACTIONS(65),
    [aux_sym_css_named_color_token41] = ACTIONS(65),
    [aux_sym_css_named_color_token42] = ACTIONS(65),
    [aux_sym_css_named_color_token43] = ACTIONS(65),
    [aux_sym_css_named_color_token44] = ACTIONS(65),
    [aux_sym_css_named_color_token45] = ACTIONS(65),
    [aux_sym_css_named_color_token46] = ACTIONS(65),
    [aux_sym_css_named_color_token47] = ACTIONS(65),
    [aux_sym_css_named_color_token48] = ACTIONS(65),
    [aux_sym_css_named_color_token49] = ACTIONS(65),
    [aux_sym_css_named_color_token50] = ACTIONS(65),
    [aux_sym_css_named_color_token51] = ACTIONS(65),
    [aux_sym_css_named_color_token52] = ACTIONS(67),
    [aux_sym_css_named_color_token53] = ACTIONS(65),
    [aux_sym_css_named_color_token54] = ACTIONS(65),
    [aux_sym_css_named_color_token55] = ACTIONS(67),
    [aux_sym_css_named_color_token56] = ACTIONS(65),
    [aux_sym_css_named_color_token57] = ACTIONS(65),
    [aux_sym_css_named_color_token58] = ACTIONS(65),
    [aux_sym_css_named_color_token59] = ACTIONS(65),
    [aux_sym_css_named_color_token60] = ACTIONS(65),
    [aux_sym_css_named_color_token61] = ACTIONS(65),
    [aux_sym_css_named_color_token62] = ACTIONS(65),
    [aux_sym_css_named_color_token63] = ACTIONS(65),
    [aux_sym_css_named_color_token64] = ACTIONS(67),
    [aux_sym_css_named_color_token65] = ACTIONS(65),
    [aux_sym_css_named_color_token66] = ACTIONS(65),
    [aux_sym_css_named_color_token67] = ACTIONS(65),
    [aux_sym_css_named_color_token68] = ACTIONS(65),
    [aux_sym_css_named_color_token69] = ACTIONS(65),
    [aux_sym_css_named_color_token70] = ACTIONS(65),
    [aux_sym_css_named_color_token71] = ACTIONS(65),
    [aux_sym_css_named_color_token72] = ACTIONS(65),
    [aux_sym_css_named_color_token73] = ACTIONS(65),
    [aux_sym_css_named_color_token74] = ACTIONS(65),
    [aux_sym_css_named_color_token75] = ACTIONS(65),
    [aux_sym_css_named_color_token76] = ACTIONS(65),
    [aux_sym_css_named_color_token77] = ACTIONS(65),
    [aux_sym_css_named_color_token78] = ACTIONS(65),
    [aux_sym_css_named_color_token79] = ACTIONS(65),
    [aux_sym_css_named_color_token80] = ACTIONS(65),
    [aux_sym_css_named_color_token81] = ACTIONS(65),
    [aux_sym_css_named_color_token82] = ACTIONS(65),
    [aux_sym_css_named_color_token83] = ACTIONS(67),
    [aux_sym_css_named_color_token84] = ACTIONS(65),
    [aux_sym_css_named_color_token85] = ACTIONS(65),
    [aux_sym_css_named_color_token86] = ACTIONS(65),
    [aux_sym_css_named_color_token87] = ACTIONS(65),
    [aux_sym_css_named_color_token88] = ACTIONS(65),
    [aux_sym_css_named_color_token89] = ACTIONS(65),
    [aux_sym_css_named_color_token90] = ACTIONS(65),
    [aux_sym_css_named_color_token91] = ACTIONS(65),
    [aux_sym_css_named_color_token92] = ACTIONS(65),
    [aux_sym_css_named_color_token93] = ACTIONS(65),
    [aux_sym_css_named_color_token94] = ACTIONS(65),
    [aux_sym_css_named_color_token95] = ACTIONS(65),
    [aux_sym_css_named_color_token96] = ACTIONS(65),
    [aux_sym_css_named_color_token97] = ACTIONS(65),
    [aux_sym_css_named_color_token98] = ACTIONS(65),
    [aux_sym_css_named_color_token99] = ACTIONS(65),
    [aux_sym_css_named_color_token100] = ACTIONS(65),
    [aux_sym_css_named_color_token101] = ACTIONS(65),
    [aux_sym_css_named_color_token102] = ACTIONS(65),
    [aux_sym_css_named_color_token103] = ACTIONS(65),
    [aux_sym_css_named_color_token104] = ACTIONS(67),
    [aux_sym_css_named_color_token105] = ACTIONS(65),
    [aux_sym_css_named_color_token106] = ACTIONS(67),
    [aux_sym_css_named_color_token107] = ACTIONS(65),
    [aux_sym_css_named_color_token108] = ACTIONS(65),
    [aux_sym_css_named_color_token109] = ACTIONS(65),
    [aux_sym_css_named_color_token110] = ACTIONS(65),
    [aux_sym_css_named_color_token111] = ACTIONS(65),
    [aux_sym_css_named_color_token112] = ACTIONS(65),
    [aux_sym_css_named_color_token113] = ACTIONS(65),
    [aux_sym_css_named_color_token114] = ACTIONS(65),
    [aux_sym_css_named_color_token115] = ACTIONS(65),
    [aux_sym_css_named_color_token116] = ACTIONS(65),
    [aux_sym_css_named_color_token117] = ACTIONS(65),
    [aux_sym_css_named_color_token118] = ACTIONS(65),
    [aux_sym_css_named_color_token119] = ACTIONS(65),
    [aux_sym_css_named_color_token120] = ACTIONS(65),
    [aux_sym_css_named_color_token121] = ACTIONS(65),
    [aux_sym_css_named_color_token122] = ACTIONS(65),
    [aux_sym_css_named_color_token123] = ACTIONS(65),
    [aux_sym_css_named_color_token124] = ACTIONS(65),
    [aux_sym_css_named_color_token125] = ACTIONS(65),
    [aux_sym_css_named_color_token126] = ACTIONS(65),
    [aux_sym_css_named_color_token127] = ACTIONS(65),
    [aux_sym_css_named_color_token128] = ACTIONS(65),
    [aux_sym_css_named_color_token129] = ACTIONS(65),
    [aux_sym_css_named_color_token130] = ACTIONS(65),
    [aux_sym_css_named_color_token131] = ACTIONS(65),
    [aux_sym_css_named_color_token132] = ACTIONS(65),
    [aux_sym_css_named_color_token133] = ACTIONS(65),
    [aux_sym_css_named_color_token134] = ACTIONS(65),
    [aux_sym_css_named_color_token135] = ACTIONS(65),
    [aux_sym_css_named_color_token136] = ACTIONS(65),
    [aux_sym_css_named_color_token137] = ACTIONS(65),
    [aux_sym_css_named_color_token138] = ACTIONS(65),
    [aux_sym_css_named_color_token139] = ACTIONS(65),
    [aux_sym_css_named_color_token140] = ACTIONS(65),
    [aux_sym_css_named_color_token141] = ACTIONS(65),
    [aux_sym_css_named_color_token142] = ACTIONS(65),
    [aux_sym_css_named_color_token143] = ACTIONS(65),
    [aux_sym_css_named_color_token144] = ACTIONS(65),
    [aux_sym_css_named_color_token145] = ACTIONS(67),
    [aux_sym_css_named_color_token146] = ACTIONS(65),
    [aux_sym_css_named_color_token147] = ACTIONS(67),
    [aux_sym_css_named_color_token148] = ACTIONS(65),
    [sym_css_keyword_transparent] = ACTIONS(65),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(71),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(69),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(71),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(69),
    [aux_sym_css_function_hwb_token1] = ACTIONS(69),
    [sym_css_hex_color_6_digits] = ACTIONS(71),
    [sym_css_hex_color_8_digits] = ACTIONS(69),
    [sym_css_hex_color_3_digits] = ACTIONS(71),
    [sym_css_hex_color_4_digits] = ACTIONS(71),
    [aux_sym_css_named_color_token1] = ACTIONS(69),
    [aux_sym_css_named_color_token2] = ACTIONS(69),
    [aux_sym_css_named_color_token3] = ACTIONS(71),
    [aux_sym_css_named_color_token4] = ACTIONS(69),
    [aux_sym_css_named_color_token5] = ACTIONS(69),
    [aux_sym_css_named_color_token6] = ACTIONS(69),
    [aux_sym_css_named_color_token7] = ACTIONS(69),
    [aux_sym_css_named_color_token8] = ACTIONS(69),
    [aux_sym_css_named_color_token9] = ACTIONS(69),
    [aux_sym_css_named_color_token10] = ACTIONS(71),
    [aux_sym_css_named_color_token11] = ACTIONS(69),
    [aux_sym_css_named_color_token12] = ACTIONS(69),
    [aux_sym_css_named_color_token13] = ACTIONS(69),
    [aux_sym_css_named_color_token14] = ACTIONS(69),
    [aux_sym_css_named_color_token15] = ACTIONS(69),
    [aux_sym_css_named_color_token16] = ACTIONS(69),
    [aux_sym_css_named_color_token17] = ACTIONS(69),
    [aux_sym_css_named_color_token18] = ACTIONS(69),
    [aux_sym_css_named_color_token19] = ACTIONS(69),
    [aux_sym_css_named_color_token20] = ACTIONS(69),
    [aux_sym_css_named_color_token21] = ACTIONS(69),
    [aux_sym_css_named_color_token22] = ACTIONS(69),
    [aux_sym_css_named_color_token23] = ACTIONS(69),
    [aux_sym_css_named_color_token24] = ACTIONS(69),
    [aux_sym_css_named_color_token25] = ACTIONS(69),
    [aux_sym_css_named_color_token26] = ACTIONS(69),
    [aux_sym_css_named_color_token27] = ACTIONS(69),
    [aux_sym_css_named_color_token28] = ACTIONS(69),
    [aux_sym_css_named_color_token29] = ACTIONS(69),
    [aux_sym_css_named_color_token30] = ACTIONS(69),
    [aux_sym_css_named_color_token31] = ACTIONS(69),
    [aux_sym_css_named_color_token32] = ACTIONS(69),
    [aux_sym_css_named_color_token33] = ACTIONS(69),
    [aux_sym_css_named_color_token34] = ACTIONS(69),
    [aux_sym_css_named_color_token35] = ACTIONS(69),
    [aux_sym_css_named_color_token36] = ACTIONS(69),
    [aux_sym_css_named_color_token37] = ACTIONS(69),
    [aux_sym_css_named_color_token38] = ACTIONS(69),
    [aux_sym_css_named_color_token39] = ACTIONS(69),
    [aux_sym_css_named_color_token40] = ACTIONS(69),
    [aux_sym_css_named_color_token41] = ACTIONS(69),
    [aux_sym_css_named_color_token42] = ACTIONS(69),
    [aux_sym_css_named_color_token43] = ACTIONS(69),
    [aux_sym_css_named_color_token44] = ACTIONS(69),
    [aux_sym_css_named_color_token45] = ACTIONS(69),
    [aux_sym_css_named_color_token46] = ACTIONS(69),
    [aux_sym_css_named_color_token47] = ACTIONS(69),
    [aux_sym_css_named_color_token48] = ACTIONS(69),
    [aux_sym_css_named_color_token49] = ACTIONS(69),
    [aux_sym_css_named_color_token50] = ACTIONS(69),
    [aux_sym_css_named_color_token51] = ACTIONS(69),
    [aux_sym_css_named_color_token52] = ACTIONS(71),
    [aux_sym_css_named_color_token53] = ACTIONS(69),
    [aux_sym_css_named_color_token54] = ACTIONS(69),
    [aux_sym_css_named_color_token55] = ACTIONS(71),
    [aux_sym_css_named_color_token56] = ACTIONS(69),
    [aux_sym_css_named_color_token57] = ACTIONS(69),
    [aux_sym_css_named_color_token58] = ACTIONS(69),
    [aux_sym_css_named_color_token59] = ACTIONS(69),
    [aux_sym_css_named_color_token60] = ACTIONS(69),
    [aux_sym_css_named_color_token61] = ACTIONS(69),
    [aux_sym_css_named_color_token62] = ACTIONS(69),
    [aux_sym_css_named_color_token63] = ACTIONS(69),
    [aux_sym_css_named_color_token64] = ACTIONS(71),
    [aux_sym_css_named_color_token65] = ACTIONS(69),
    [aux_sym_css_named_color_token66] = ACTIONS(69),
    [aux_sym_css_named_color_token67] = ACTIONS(69),
    [aux_sym_css_named_color_token68] = ACTIONS(69),
    [aux_sym_css_named_color_token69] = ACTIONS(69),
    [aux_sym_css_named_color_token70] = ACTIONS(69),
    [aux_sym_css_named_color_token71] = ACTIONS(69),
    [aux_sym_css_named_color_token72] = ACTIONS(69),
    [aux_sym_css_named_color_token73] = ACTIONS(69),
    [aux_sym_css_named_color_token74] = ACTIONS(69),
    [aux_sym_css_named_color_token75] = ACTIONS(69),
    [aux_sym_css_named_color_token76] = ACTIONS(69),
    [aux_sym_css_named_color_token77] = ACTIONS(69),
    [aux_sym_css_named_color_token78] = ACTIONS(69),
    [aux_sym_css_named_color_token79] = ACTIONS(69),
    [aux_sym_css_named_color_token80] = ACTIONS(69),
    [aux_sym_css_named_color_token81] = ACTIONS(69),
    [aux_sym_css_named_color_token82] = ACTIONS(69),
    [aux_sym_css_named_color_token83] = ACTIONS(71),
    [aux_sym_css_named_color_token84] = ACTIONS(69),
    [aux_sym_css_named_color_token85] = ACTIONS(69),
    [aux_sym_css_named_color_token86] = ACTIONS(69),
    [aux_sym_css_named_color_token87] = ACTIONS(69),
    [aux_sym_css_named_color_token88] = ACTIONS(69),
    [aux_sym_css_named_color_token89] = ACTIONS(69),
    [aux_sym_css_named_color_token90] = ACTIONS(69),
    [aux_sym_css_named_color_token91] = ACTIONS(69),
    [aux_sym_css_named_color_token92] = ACTIONS(69),
    [aux_sym_css_named_color_token93] = ACTIONS(69),
    [aux_sym_css_named_color_token94] = ACTIONS(69),
    [aux_sym_css_named_color_token95] = ACTIONS(69),
    [aux_sym_css_named_color_token96] = ACTIONS(69),
    [aux_sym_css_named_color_token97] = ACTIONS(69),
    [aux_sym_css_named_color_token98] = ACTIONS(69),
    [aux_sym_css_named_color_token99] = ACTIONS(69),
    [aux_sym_css_named_color_token100] = ACTIONS(69),
    [aux_sym_css_named_color_token101] = ACTIONS(69),
    [aux_sym_css_named_color_token102] = ACTIONS(69),
    [aux_sym_css_named_color_token103] = ACTIONS(69),
    [aux_sym_css_named_color_token104] = ACTIONS(71),
    [aux_sym_css_named_color_token105] = ACTIONS(69),
    [aux_sym_css_named_color_token106] = ACTIONS(71),
    [aux_sym_css_named_color_token107] = ACTIONS(69),
    [aux_sym_css_named_color_token108] = ACTIONS(69),
    [aux_sym_css_named_color_token109] = ACTIONS(69),
    [aux_sym_css_named_color_token110] = ACTIONS(69),
    [aux_sym_css_named_color_token111] = ACTIONS(69),
    [aux_sym_css_named_color_token112] = ACTIONS(69),
    [aux_sym_css_named_color_token113] = ACTIONS(69),
    [aux_sym_css_named_color_token114] = ACTIONS(69),
    [aux_sym_css_named_color_token115] = ACTIONS(69),
    [aux_sym_css_named_color_token116] = ACTIONS(69),
    [aux_sym_css_named_color_token117] = ACTIONS(69),
    [aux_sym_css_named_color_token118] = ACTIONS(69),
    [aux_sym_css_named_color_token119] = ACTIONS(69),
    [aux_sym_css_named_color_token120] = ACTIONS(69),
    [aux_sym_css_named_color_token121] = ACTIONS(69),
    [aux_sym_css_named_color_token122] = ACTIONS(69),
    [aux_sym_css_named_color_token123] = ACTIONS(69),
    [aux_sym_css_named_color_token124] = ACTIONS(69),
    [aux_sym_css_named_color_token125] = ACTIONS(69),
    [aux_sym_css_named_color_token126] = ACTIONS(69),
    [aux_sym_css_named_color_token127] = ACTIONS(69),
    [aux_sym_css_named_color_token128] = ACTIONS(69),
    [aux_sym_css_named_color_token129] = ACTIONS(69),
    [aux_sym_css_named_color_token130] = ACTIONS(69),
    [aux_sym_css_named_color_token131] = ACTIONS(69),
    [aux_sym_css_named_color_token132] = ACTIONS(69),
    [aux_sym_css_named_color_token133] = ACTIONS(69),
    [aux_sym_css_named_color_token134] = ACTIONS(69),
    [aux_sym_css_named_color_token135] = ACTIONS(69),
    [aux_sym_css_named_color_token136] = ACTIONS(69),
    [aux_sym_css_named_color_token137] = ACTIONS(69),
    [aux_sym_css_named_color_token138] = ACTIONS(69),
    [aux_sym_css_named_color_token139] = ACTIONS(69),
    [aux_sym_css_named_color_token140] = ACTIONS(69),
    [aux_sym_css_named_color_token141] = ACTIONS(69),
    [aux_sym_css_named_color_token142] = ACTIONS(69),
    [aux_sym_css_named_color_token143] = ACTIONS(69),
    [aux_sym_css_named_color_token144] = ACTIONS(69),
    [aux_sym_css_named_color_token145] = ACTIONS(71),
    [aux_sym_css_named_color_token146] = ACTIONS(69),
    [aux_sym_css_named_color_token147] = ACTIONS(71),
    [aux_sym_css_named_color_token148] = ACTIONS(69),
    [sym_css_keyword_transparent] = ACTIONS(69),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(75),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(73),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(75),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(73),
    [aux_sym_css_function_hwb_token1] = ACTIONS(73),
    [sym_css_hex_color_6_digits] = ACTIONS(75),
    [sym_css_hex_color_8_digits] = ACTIONS(73),
    [sym_css_hex_color_3_digits] = ACTIONS(75),
    [sym_css_hex_color_4_digits] = ACTIONS(75),
    [aux_sym_css_named_color_token1] = ACTIONS(73),
    [aux_sym_css_named_color_token2] = ACTIONS(73),
    [aux_sym_css_named_color_token3] = ACTIONS(75),
    [aux_sym_css_named_color_token4] = ACTIONS(73),
    [aux_sym_css_named_color_token5] = ACTIONS(73),
    [aux_sym_css_named_color_token6] = ACTIONS(73),
    [aux_sym_css_named_color_token7] = ACTIONS(73),
    [aux_sym_css_named_color_token8] = ACTIONS(73),
    [aux_sym_css_named_color_token9] = ACTIONS(73),
    [aux_sym_css_named_color_token10] = ACTIONS(75),
    [aux_sym_css_named_color_token11] = ACTIONS(73),
    [aux_sym_css_named_color_token12] = ACTIONS(73),
    [aux_sym_css_named_color_token13] = ACTIONS(73),
    [aux_sym_css_named_color_token14] = ACTIONS(73),
    [aux_sym_css_named_color_token15] = ACTIONS(73),
    [aux_sym_css_named_color_token16] = ACTIONS(73),
    [aux_sym_css_named_color_token17] = ACTIONS(73),
    [aux_sym_css_named_color_token18] = ACTIONS(73),
    [aux_sym_css_named_color_token19] = ACTIONS(73),
    [aux_sym_css_named_color_token20] = ACTIONS(73),
    [aux_sym_css_named_color_token21] = ACTIONS(73),
    [aux_sym_css_named_color_token22] = ACTIONS(73),
    [aux_sym_css_named_color_token23] = ACTIONS(73),
    [aux_sym_css_named_color_token24] = ACTIONS(73),
    [aux_sym_css_named_color_token25] = ACTIONS(73),
    [aux_sym_css_named_color_token26] = ACTIONS(73),
    [aux_sym_css_named_color_token27] = ACTIONS(73),
    [aux_sym_css_named_color_token28] = ACTIONS(73),
    [aux_sym_css_named_color_token29] = ACTIONS(73),
    [aux_sym_css_named_color_token30] = ACTIONS(73),
    [aux_sym_css_named_color_token31] = ACTIONS(73),
    [aux_sym_css_named_color_token32] = ACTIONS(73),
    [aux_sym_css_named_color_token33] = ACTIONS(73),
    [aux_sym_css_named_color_token34] = ACTIONS(73),
    [aux_sym_css_named_color_token35] = ACTIONS(73),
    [aux_sym_css_named_color_token36] = ACTIONS(73),
    [aux_sym_css_named_color_token37] = ACTIONS(73),
    [aux_sym_css_named_color_token38] = ACTIONS(73),
    [aux_sym_css_named_color_token39] = ACTIONS(73),
    [aux_sym_css_named_color_token40] = ACTIONS(73),
    [aux_sym_css_named_color_token41] = ACTIONS(73),
    [aux_sym_css_named_color_token42] = ACTIONS(73),
    [aux_sym_css_named_color_token43] = ACTIONS(73),
    [aux_sym_css_named_color_token44] = ACTIONS(73),
    [aux_sym_css_named_color_token45] = ACTIONS(73),
    [aux_sym_css_named_color_token46] = ACTIONS(73),
    [aux_sym_css_named_color_token47] = ACTIONS(73),
    [aux_sym_css_named_color_token48] = ACTIONS(73),
    [aux_sym_css_named_color_token49] = ACTIONS(73),
    [aux_sym_css_named_color_token50] = ACTIONS(73),
    [aux_sym_css_named_color_token51] = ACTIONS(73),
    [aux_sym_css_named_color_token52] = ACTIONS(75),
    [aux_sym_css_named_color_token53] = ACTIONS(73),
    [aux_sym_css_named_color_token54] = ACTIONS(73),
    [aux_sym_css_named_color_token55] = ACTIONS(75),
    [aux_sym_css_named_color_token56] = ACTIONS(73),
    [aux_sym_css_named_color_token57] = ACTIONS(73),
    [aux_sym_css_named_color_token58] = ACTIONS(73),
    [aux_sym_css_named_color_token59] = ACTIONS(73),
    [aux_sym_css_named_color_token60] = ACTIONS(73),
    [aux_sym_css_named_color_token61] = ACTIONS(73),
    [aux_sym_css_named_color_token62] = ACTIONS(73),
    [aux_sym_css_named_color_token63] = ACTIONS(73),
    [aux_sym_css_named_color_token64] = ACTIONS(75),
    [aux_sym_css_named_color_token65] = ACTIONS(73),
    [aux_sym_css_named_color_token66] = ACTIONS(73),
    [aux_sym_css_named_color_token67] = ACTIONS(73),
    [aux_sym_css_named_color_token68] = ACTIONS(73),
    [aux_sym_css_named_color_token69] = ACTIONS(73),
    [aux_sym_css_named_color_token70] = ACTIONS(73),
    [aux_sym_css_named_color_token71] = ACTIONS(73),
    [aux_sym_css_named_color_token72] = ACTIONS(73),
    [aux_sym_css_named_color_token73] = ACTIONS(73),
    [aux_sym_css_named_color_token74] = ACTIONS(73),
    [aux_sym_css_named_color_token75] = ACTIONS(73),
    [aux_sym_css_named_color_token76] = ACTIONS(73),
    [aux_sym_css_named_color_token77] = ACTIONS(73),
    [aux_sym_css_named_color_token78] = ACTIONS(73),
    [aux_sym_css_named_color_token79] = ACTIONS(73),
    [aux_sym_css_named_color_token80] = ACTIONS(73),
    [aux_sym_css_named_color_token81] = ACTIONS(73),
    [aux_sym_css_named_color_token82] = ACTIONS(73),
    [aux_sym_css_named_color_token83] = ACTIONS(75),
    [aux_sym_css_named_color_token84] = ACTIONS(73),
    [aux_sym_css_named_color_token85] = ACTIONS(73),
    [aux_sym_css_named_color_token86] = ACTIONS(73),
    [aux_sym_css_named_color_token87] = ACTIONS(73),
    [aux_sym_css_named_color_token88] = ACTIONS(73),
    [aux_sym_css_named_color_token89] = ACTIONS(73),
    [aux_sym_css_named_color_token90] = ACTIONS(73),
    [aux_sym_css_named_color_token91] = ACTIONS(73),
    [aux_sym_css_named_color_token92] = ACTIONS(73),
    [aux_sym_css_named_color_token93] = ACTIONS(73),
    [aux_sym_css_named_color_token94] = ACTIONS(73),
    [aux_sym_css_named_color_token95] = ACTIONS(73),
    [aux_sym_css_named_color_token96] = ACTIONS(73),
    [aux_sym_css_named_color_token97] = ACTIONS(73),
    [aux_sym_css_named_color_token98] = ACTIONS(73),
    [aux_sym_css_named_color_token99] = ACTIONS(73),
    [aux_sym_css_named_color_token100] = ACTIONS(73),
    [aux_sym_css_named_color_token101] = ACTIONS(73),
    [aux_sym_css_named_color_token102] = ACTIONS(73),
    [aux_sym_css_named_color_token103] = ACTIONS(73),
    [aux_sym_css_named_color_token104] = ACTIONS(75),
    [aux_sym_css_named_color_token105] = ACTIONS(73),
    [aux_sym_css_named_color_token106] = ACTIONS(75),
    [aux_sym_css_named_color_token107] = ACTIONS(73),
    [aux_sym_css_named_color_token108] = ACTIONS(73),
    [aux_sym_css_named_color_token109] = ACTIONS(73),
    [aux_sym_css_named_color_token110] = ACTIONS(73),
    [aux_sym_css_named_color_token111] = ACTIONS(73),
    [aux_sym_css_named_color_token112] = ACTIONS(73),
    [aux_sym_css_named_color_token113] = ACTIONS(73),
    [aux_sym_css_named_color_token114] = ACTIONS(73),
    [aux_sym_css_named_color_token115] = ACTIONS(73),
    [aux_sym_css_named_color_token116] = ACTIONS(73),
    [aux_sym_css_named_color_token117] = ACTIONS(73),
    [aux_sym_css_named_color_token118] = ACTIONS(73),
    [aux_sym_css_named_color_token119] = ACTIONS(73),
    [aux_sym_css_named_color_token120] = ACTIONS(73),
    [aux_sym_css_named_color_token121] = ACTIONS(73),
    [aux_sym_css_named_color_token122] = ACTIONS(73),
    [aux_sym_css_named_color_token123] = ACTIONS(73),
    [aux_sym_css_named_color_token124] = ACTIONS(73),
    [aux_sym_css_named_color_token125] = ACTIONS(73),
    [aux_sym_css_named_color_token126] = ACTIONS(73),
    [aux_sym_css_named_color_token127] = ACTIONS(73),
    [aux_sym_css_named_color_token128] = ACTIONS(73),
    [aux_sym_css_named_color_token129] = ACTIONS(73),
    [aux_sym_css_named_color_token130] = ACTIONS(73),
    [aux_sym_css_named_color_token131] = ACTIONS(73),
    [aux_sym_css_named_color_token132] = ACTIONS(73),
    [aux_sym_css_named_color_token133] = ACTIONS(73),
    [aux_sym_css_named_color_token134] = ACTIONS(73),
    [aux_sym_css_named_color_token135] = ACTIONS(73),
    [aux_sym_css_named_color_token136] = ACTIONS(73),
    [aux_sym_css_named_color_token137] = ACTIONS(73),
    [aux_sym_css_named_color_token138] = ACTIONS(73),
    [aux_sym_css_named_color_token139] = ACTIONS(73),
    [aux_sym_css_named_color_token140] = ACTIONS(73),
    [aux_sym_css_named_color_token141] = ACTIONS(73),
    [aux_sym_css_named_color_token142] = ACTIONS(73),
    [aux_sym_css_named_color_token143] = ACTIONS(73),
    [aux_sym_css_named_color_token144] = ACTIONS(73),
    [aux_sym_css_named_color_token145] = ACTIONS(75),
    [aux_sym_css_named_color_token146] = ACTIONS(73),
    [aux_sym_css_named_color_token147] = ACTIONS(75),
    [aux_sym_css_named_color_token148] = ACTIONS(73),
    [sym_css_keyword_transparent] = ACTIONS(73),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(79),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(77),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(79),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(77),
    [aux_sym_css_function_hwb_token1] = ACTIONS(77),
    [sym_css_hex_color_6_digits] = ACTIONS(79),
    [sym_css_hex_color_8_digits] = ACTIONS(77),
    [sym_css_hex_color_3_digits] = ACTIONS(79),
    [sym_css_hex_color_4_digits] = ACTIONS(79),
    [aux_sym_css_named_color_token1] = ACTIONS(77),
    [aux_sym_css_named_color_token2] = ACTIONS(77),
    [aux_sym_css_named_color_token3] = ACTIONS(79),
    [aux_sym_css_named_color_token4] = ACTIONS(77),
    [aux_sym_css_named_color_token5] = ACTIONS(77),
    [aux_sym_css_named_color_token6] = ACTIONS(77),
    [aux_sym_css_named_color_token7] = ACTIONS(77),
    [aux_sym_css_named_color_token8] = ACTIONS(77),
    [aux_sym_css_named_color_token9] = ACTIONS(77),
    [aux_sym_css_named_color_token10] = ACTIONS(79),
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
    [aux_sym_css_named_color_token52] = ACTIONS(79),
    [aux_sym_css_named_color_token53] = ACTIONS(77),
    [aux_sym_css_named_color_token54] = ACTIONS(77),
    [aux_sym_css_named_color_token55] = ACTIONS(79),
    [aux_sym_css_named_color_token56] = ACTIONS(77),
    [aux_sym_css_named_color_token57] = ACTIONS(77),
    [aux_sym_css_named_color_token58] = ACTIONS(77),
    [aux_sym_css_named_color_token59] = ACTIONS(77),
    [aux_sym_css_named_color_token60] = ACTIONS(77),
    [aux_sym_css_named_color_token61] = ACTIONS(77),
    [aux_sym_css_named_color_token62] = ACTIONS(77),
    [aux_sym_css_named_color_token63] = ACTIONS(77),
    [aux_sym_css_named_color_token64] = ACTIONS(79),
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
    [aux_sym_css_named_color_token83] = ACTIONS(79),
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
    [aux_sym_css_named_color_token104] = ACTIONS(79),
    [aux_sym_css_named_color_token105] = ACTIONS(77),
    [aux_sym_css_named_color_token106] = ACTIONS(79),
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
    [aux_sym_css_named_color_token145] = ACTIONS(79),
    [aux_sym_css_named_color_token146] = ACTIONS(77),
    [aux_sym_css_named_color_token147] = ACTIONS(79),
    [aux_sym_css_named_color_token148] = ACTIONS(77),
    [sym_css_keyword_transparent] = ACTIONS(77),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(83),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(81),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(83),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(81),
    [aux_sym_css_function_hwb_token1] = ACTIONS(81),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(87),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(85),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(87),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(85),
    [aux_sym_css_function_hwb_token1] = ACTIONS(85),
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
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(91),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(89),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(91),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(89),
    [aux_sym_css_function_hwb_token1] = ACTIONS(89),
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
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(95),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(93),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(95),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(93),
    [aux_sym_css_function_hwb_token1] = ACTIONS(93),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(99),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(97),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(99),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(97),
    [aux_sym_css_function_hwb_token1] = ACTIONS(97),
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
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(103),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(101),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(103),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(101),
    [aux_sym_css_function_hwb_token1] = ACTIONS(101),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(107),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(105),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(107),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(105),
    [aux_sym_css_function_hwb_token1] = ACTIONS(105),
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
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(111),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(109),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(111),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(109),
    [aux_sym_css_function_hwb_token1] = ACTIONS(109),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(115),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(113),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(115),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(113),
    [aux_sym_css_function_hwb_token1] = ACTIONS(113),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(119),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(117),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(119),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(117),
    [aux_sym_css_function_hwb_token1] = ACTIONS(117),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(123),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(121),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(123),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(121),
    [aux_sym_css_function_hwb_token1] = ACTIONS(121),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(127),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(125),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(127),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(125),
    [aux_sym_css_function_hwb_token1] = ACTIONS(125),
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
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(131),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(129),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(131),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(129),
    [aux_sym_css_function_hwb_token1] = ACTIONS(129),
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
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(135),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(133),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(135),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(133),
    [aux_sym_css_function_hwb_token1] = ACTIONS(133),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(139),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(137),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(139),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(137),
    [aux_sym_css_function_hwb_token1] = ACTIONS(137),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(143),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(141),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(143),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(141),
    [aux_sym_css_function_hwb_token1] = ACTIONS(141),
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
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(147),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(145),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(147),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(145),
    [aux_sym_css_function_hwb_token1] = ACTIONS(145),
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
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(151),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(149),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(151),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(149),
    [aux_sym_css_function_hwb_token1] = ACTIONS(149),
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
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(155),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(153),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(155),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(153),
    [aux_sym_css_function_hwb_token1] = ACTIONS(153),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      sym_css_keyword_none,
    STATE(40), 2,
      sym_css_number,
      sym_css_percentage,
  [17] = 2,
    ACTIONS(165), 1,
      sym__css_number,
    ACTIONS(167), 5,
      sym__css_percentage,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [28] = 5,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      sym_css_keyword_none,
    STATE(37), 2,
      sym_css_number,
      sym_css_percentage,
  [45] = 2,
    ACTIONS(173), 1,
      sym__css_number,
    ACTIONS(175), 5,
      sym__css_percentage,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [56] = 5,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      sym_css_keyword_none,
    STATE(38), 2,
      sym_css_number,
      sym_css_percentage,
  [73] = 5,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(171), 1,
      sym_css_keyword_none,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(37), 2,
      sym_css_number,
      sym_css_percentage,
  [90] = 5,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(179), 1,
      sym_css_keyword_none,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    STATE(38), 2,
      sym_css_number,
      sym_css_percentage,
  [107] = 5,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      sym_css_keyword_none,
    STATE(39), 2,
      sym_css_number,
      sym_css_percentage,
  [124] = 4,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(189), 1,
      sym_css_keyword_none,
    STATE(41), 2,
      sym_css_number,
      sym_css_percentage,
  [138] = 4,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(191), 1,
      sym_css_keyword_none,
    STATE(73), 2,
      sym_css_number,
      sym_css_percentage,
  [152] = 4,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(193), 1,
      sym_css_keyword_none,
    STATE(74), 2,
      sym_css_number,
      sym_css_percentage,
  [166] = 4,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(195), 1,
      sym_css_keyword_none,
    STATE(75), 2,
      sym_css_number,
      sym_css_percentage,
  [180] = 4,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(197), 1,
      sym_css_keyword_none,
    STATE(76), 2,
      sym_css_number,
      sym_css_percentage,
  [194] = 4,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(199), 1,
      sym_css_keyword_none,
    STATE(77), 2,
      sym_css_number,
      sym_css_percentage,
  [208] = 5,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(201), 1,
      sym_css_keyword_none,
    STATE(30), 1,
      sym_css_percentage,
    STATE(33), 1,
      sym_css_number,
  [224] = 5,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(203), 1,
      sym_css_keyword_none,
    STATE(32), 1,
      sym_css_percentage,
    STATE(34), 1,
      sym_css_number,
  [240] = 4,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(171), 1,
      sym_css_keyword_none,
    STATE(37), 2,
      sym_css_number,
      sym_css_percentage,
  [254] = 4,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(179), 1,
      sym_css_keyword_none,
    STATE(38), 2,
      sym_css_number,
      sym_css_percentage,
  [268] = 4,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(187), 1,
      sym_css_keyword_none,
    STATE(39), 2,
      sym_css_number,
      sym_css_percentage,
  [282] = 4,
    ACTIONS(157), 1,
      sym__css_number,
    ACTIONS(159), 1,
      sym__css_percentage,
    ACTIONS(163), 1,
      sym_css_keyword_none,
    STATE(40), 2,
      sym_css_number,
      sym_css_percentage,
  [296] = 4,
    ACTIONS(205), 1,
      sym__css_number,
    ACTIONS(207), 1,
      sym__css_percentage,
    ACTIONS(209), 1,
      sym_css_keyword_none,
    STATE(83), 1,
      sym_css_alpha_value,
  [309] = 4,
    ACTIONS(205), 1,
      sym__css_number,
    ACTIONS(207), 1,
      sym__css_percentage,
    ACTIONS(211), 1,
      sym_css_keyword_none,
    STATE(89), 1,
      sym_css_alpha_value,
  [322] = 4,
    ACTIONS(213), 1,
      sym__css_number,
    ACTIONS(215), 1,
      sym__css_angle,
    ACTIONS(217), 1,
      sym_css_keyword_none,
    STATE(35), 1,
      sym_css_hue,
  [335] = 4,
    ACTIONS(205), 1,
      sym__css_number,
    ACTIONS(207), 1,
      sym__css_percentage,
    ACTIONS(219), 1,
      sym_css_keyword_none,
    STATE(93), 1,
      sym_css_alpha_value,
  [348] = 4,
    ACTIONS(213), 1,
      sym__css_number,
    ACTIONS(215), 1,
      sym__css_angle,
    ACTIONS(221), 1,
      sym_css_keyword_none,
    STATE(28), 1,
      sym_css_hue,
  [361] = 4,
    ACTIONS(205), 1,
      sym__css_number,
    ACTIONS(207), 1,
      sym__css_percentage,
    ACTIONS(223), 1,
      sym_css_keyword_none,
    STATE(95), 1,
      sym_css_alpha_value,
  [374] = 4,
    ACTIONS(213), 1,
      sym__css_number,
    ACTIONS(215), 1,
      sym__css_angle,
    ACTIONS(225), 1,
      sym_css_keyword_none,
    STATE(36), 1,
      sym_css_hue,
  [387] = 4,
    ACTIONS(205), 1,
      sym__css_number,
    ACTIONS(207), 1,
      sym__css_percentage,
    ACTIONS(227), 1,
      sym_css_keyword_none,
    STATE(82), 1,
      sym_css_alpha_value,
  [400] = 2,
    ACTIONS(229), 1,
      sym__css_number,
    ACTIONS(231), 3,
      sym__css_percentage,
      anon_sym_COMMA,
      sym_css_keyword_none,
  [409] = 3,
    ACTIONS(205), 1,
      sym__css_number,
    ACTIONS(207), 1,
      sym__css_percentage,
    STATE(98), 1,
      sym_css_alpha_value,
  [419] = 3,
    ACTIONS(205), 1,
      sym__css_number,
    ACTIONS(207), 1,
      sym__css_percentage,
    STATE(99), 1,
      sym_css_alpha_value,
  [429] = 3,
    ACTIONS(205), 1,
      sym__css_number,
    ACTIONS(207), 1,
      sym__css_percentage,
    STATE(96), 1,
      sym_css_alpha_value,
  [439] = 3,
    ACTIONS(205), 1,
      sym__css_number,
    ACTIONS(207), 1,
      sym__css_percentage,
    STATE(97), 1,
      sym_css_alpha_value,
  [449] = 2,
    ACTIONS(159), 1,
      sym__css_percentage,
    STATE(69), 1,
      sym_css_percentage,
  [456] = 2,
    ACTIONS(233), 1,
      sym__css_number,
    STATE(70), 1,
      sym_css_number,
  [463] = 2,
    ACTIONS(159), 1,
      sym__css_percentage,
    STATE(70), 1,
      sym_css_percentage,
  [470] = 2,
    ACTIONS(159), 1,
      sym__css_percentage,
    STATE(88), 1,
      sym_css_percentage,
  [477] = 2,
    ACTIONS(159), 1,
      sym__css_percentage,
    STATE(71), 1,
      sym_css_percentage,
  [484] = 2,
    ACTIONS(159), 1,
      sym__css_percentage,
    STATE(90), 1,
      sym_css_percentage,
  [491] = 2,
    ACTIONS(159), 1,
      sym__css_percentage,
    STATE(72), 1,
      sym_css_percentage,
  [498] = 2,
    ACTIONS(159), 1,
      sym__css_percentage,
    STATE(92), 1,
      sym_css_percentage,
  [505] = 2,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
  [512] = 2,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
  [519] = 2,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
  [526] = 2,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
  [533] = 2,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(253), 1,
      anon_sym_SLASH,
  [540] = 2,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 1,
      anon_sym_SLASH,
  [547] = 2,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(261), 1,
      anon_sym_SLASH,
  [554] = 2,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    ACTIONS(265), 1,
      anon_sym_SLASH,
  [561] = 2,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(269), 1,
      anon_sym_SLASH,
  [568] = 2,
    ACTIONS(233), 1,
      sym__css_number,
    STATE(84), 1,
      sym_css_number,
  [575] = 2,
    ACTIONS(159), 1,
      sym__css_percentage,
    STATE(85), 1,
      sym_css_percentage,
  [582] = 2,
    ACTIONS(233), 1,
      sym__css_number,
    STATE(69), 1,
      sym_css_number,
  [589] = 2,
    ACTIONS(233), 1,
      sym__css_number,
    STATE(87), 1,
      sym_css_number,
  [596] = 1,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
  [600] = 1,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
  [604] = 1,
    ACTIONS(275), 1,
      anon_sym_COMMA,
  [608] = 1,
    ACTIONS(277), 1,
      anon_sym_COMMA,
  [612] = 1,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
  [616] = 1,
    ACTIONS(281), 1,
      anon_sym_COMMA,
  [620] = 1,
    ACTIONS(283), 1,
      anon_sym_COMMA,
  [624] = 1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [628] = 1,
    ACTIONS(287), 1,
      anon_sym_COMMA,
  [632] = 1,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
  [636] = 1,
    ACTIONS(291), 1,
      anon_sym_COMMA,
  [640] = 1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
  [644] = 1,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
  [648] = 1,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
  [652] = 1,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
  [656] = 1,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
  [660] = 1,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
  [664] = 1,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
  [668] = 1,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
  [672] = 1,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
  [676] = 1,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
  [680] = 1,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(28)] = 0,
  [SMALL_STATE(29)] = 17,
  [SMALL_STATE(30)] = 28,
  [SMALL_STATE(31)] = 45,
  [SMALL_STATE(32)] = 56,
  [SMALL_STATE(33)] = 73,
  [SMALL_STATE(34)] = 90,
  [SMALL_STATE(35)] = 107,
  [SMALL_STATE(36)] = 124,
  [SMALL_STATE(37)] = 138,
  [SMALL_STATE(38)] = 152,
  [SMALL_STATE(39)] = 166,
  [SMALL_STATE(40)] = 180,
  [SMALL_STATE(41)] = 194,
  [SMALL_STATE(42)] = 208,
  [SMALL_STATE(43)] = 224,
  [SMALL_STATE(44)] = 240,
  [SMALL_STATE(45)] = 254,
  [SMALL_STATE(46)] = 268,
  [SMALL_STATE(47)] = 282,
  [SMALL_STATE(48)] = 296,
  [SMALL_STATE(49)] = 309,
  [SMALL_STATE(50)] = 322,
  [SMALL_STATE(51)] = 335,
  [SMALL_STATE(52)] = 348,
  [SMALL_STATE(53)] = 361,
  [SMALL_STATE(54)] = 374,
  [SMALL_STATE(55)] = 387,
  [SMALL_STATE(56)] = 400,
  [SMALL_STATE(57)] = 409,
  [SMALL_STATE(58)] = 419,
  [SMALL_STATE(59)] = 429,
  [SMALL_STATE(60)] = 439,
  [SMALL_STATE(61)] = 449,
  [SMALL_STATE(62)] = 456,
  [SMALL_STATE(63)] = 463,
  [SMALL_STATE(64)] = 470,
  [SMALL_STATE(65)] = 477,
  [SMALL_STATE(66)] = 484,
  [SMALL_STATE(67)] = 491,
  [SMALL_STATE(68)] = 498,
  [SMALL_STATE(69)] = 505,
  [SMALL_STATE(70)] = 512,
  [SMALL_STATE(71)] = 519,
  [SMALL_STATE(72)] = 526,
  [SMALL_STATE(73)] = 533,
  [SMALL_STATE(74)] = 540,
  [SMALL_STATE(75)] = 547,
  [SMALL_STATE(76)] = 554,
  [SMALL_STATE(77)] = 561,
  [SMALL_STATE(78)] = 568,
  [SMALL_STATE(79)] = 575,
  [SMALL_STATE(80)] = 582,
  [SMALL_STATE(81)] = 589,
  [SMALL_STATE(82)] = 596,
  [SMALL_STATE(83)] = 600,
  [SMALL_STATE(84)] = 604,
  [SMALL_STATE(85)] = 608,
  [SMALL_STATE(86)] = 612,
  [SMALL_STATE(87)] = 616,
  [SMALL_STATE(88)] = 620,
  [SMALL_STATE(89)] = 624,
  [SMALL_STATE(90)] = 628,
  [SMALL_STATE(91)] = 632,
  [SMALL_STATE(92)] = 636,
  [SMALL_STATE(93)] = 640,
  [SMALL_STATE(94)] = 644,
  [SMALL_STATE(95)] = 648,
  [SMALL_STATE(96)] = 652,
  [SMALL_STATE(97)] = 656,
  [SMALL_STATE(98)] = 660,
  [SMALL_STATE(99)] = 664,
  [SMALL_STATE(100)] = 668,
  [SMALL_STATE(101)] = 672,
  [SMALL_STATE(102)] = 676,
  [SMALL_STATE(103)] = 680,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_modern, 6, 0, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_modern, 6, 0, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_modern, 6, 0, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_modern, 6, 0, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_modern, 6, 0, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_modern, 6, 0, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_modern, 6, 0, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_modern, 6, 0, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hwb, 6, 0, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hwb, 6, 0, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_modern, 8, 0, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_modern, 8, 0, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_legacy, 8, 0, 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_legacy, 8, 0, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_modern, 8, 0, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_modern, 8, 0, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_legacy, 8, 0, 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_legacy, 8, 0, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_modern, 8, 0, 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_modern, 8, 0, 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_legacy, 8, 0, 7),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_legacy, 8, 0, 7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_modern, 8, 0, 6),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_modern, 8, 0, 6),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_legacy, 8, 0, 7),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_legacy, 8, 0, 7),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hwb, 8, 0, 8),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hwb, 8, 0, 8),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_legacy, 10, 0, 9),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_legacy, 10, 0, 9),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_legacy, 10, 0, 9),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_legacy, 10, 0, 9),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_legacy, 10, 0, 10),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_legacy, 10, 0, 10),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_legacy, 10, 0, 10),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_legacy, 10, 0, 10),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_number, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_number, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_percentage, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_percentage, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_hue, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_hue, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [295] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_alpha_value, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
