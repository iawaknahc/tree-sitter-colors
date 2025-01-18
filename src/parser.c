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
#define STATE_COUNT 122
#define LARGE_STATE_COUNT 32
#define SYMBOL_COUNT 192
#define ALIAS_COUNT 0
#define TOKEN_COUNT 169
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 13

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
  sym_css_hex_color_6_digits = 15,
  sym_css_hex_color_8_digits = 16,
  sym_css_hex_color_3_digits = 17,
  sym_css_hex_color_4_digits = 18,
  aux_sym_css_named_color_token1 = 19,
  aux_sym_css_named_color_token2 = 20,
  aux_sym_css_named_color_token3 = 21,
  aux_sym_css_named_color_token4 = 22,
  aux_sym_css_named_color_token5 = 23,
  aux_sym_css_named_color_token6 = 24,
  aux_sym_css_named_color_token7 = 25,
  aux_sym_css_named_color_token8 = 26,
  aux_sym_css_named_color_token9 = 27,
  aux_sym_css_named_color_token10 = 28,
  aux_sym_css_named_color_token11 = 29,
  aux_sym_css_named_color_token12 = 30,
  aux_sym_css_named_color_token13 = 31,
  aux_sym_css_named_color_token14 = 32,
  aux_sym_css_named_color_token15 = 33,
  aux_sym_css_named_color_token16 = 34,
  aux_sym_css_named_color_token17 = 35,
  aux_sym_css_named_color_token18 = 36,
  aux_sym_css_named_color_token19 = 37,
  aux_sym_css_named_color_token20 = 38,
  aux_sym_css_named_color_token21 = 39,
  aux_sym_css_named_color_token22 = 40,
  aux_sym_css_named_color_token23 = 41,
  aux_sym_css_named_color_token24 = 42,
  aux_sym_css_named_color_token25 = 43,
  aux_sym_css_named_color_token26 = 44,
  aux_sym_css_named_color_token27 = 45,
  aux_sym_css_named_color_token28 = 46,
  aux_sym_css_named_color_token29 = 47,
  aux_sym_css_named_color_token30 = 48,
  aux_sym_css_named_color_token31 = 49,
  aux_sym_css_named_color_token32 = 50,
  aux_sym_css_named_color_token33 = 51,
  aux_sym_css_named_color_token34 = 52,
  aux_sym_css_named_color_token35 = 53,
  aux_sym_css_named_color_token36 = 54,
  aux_sym_css_named_color_token37 = 55,
  aux_sym_css_named_color_token38 = 56,
  aux_sym_css_named_color_token39 = 57,
  aux_sym_css_named_color_token40 = 58,
  aux_sym_css_named_color_token41 = 59,
  aux_sym_css_named_color_token42 = 60,
  aux_sym_css_named_color_token43 = 61,
  aux_sym_css_named_color_token44 = 62,
  aux_sym_css_named_color_token45 = 63,
  aux_sym_css_named_color_token46 = 64,
  aux_sym_css_named_color_token47 = 65,
  aux_sym_css_named_color_token48 = 66,
  aux_sym_css_named_color_token49 = 67,
  aux_sym_css_named_color_token50 = 68,
  aux_sym_css_named_color_token51 = 69,
  aux_sym_css_named_color_token52 = 70,
  aux_sym_css_named_color_token53 = 71,
  aux_sym_css_named_color_token54 = 72,
  aux_sym_css_named_color_token55 = 73,
  aux_sym_css_named_color_token56 = 74,
  aux_sym_css_named_color_token57 = 75,
  aux_sym_css_named_color_token58 = 76,
  aux_sym_css_named_color_token59 = 77,
  aux_sym_css_named_color_token60 = 78,
  aux_sym_css_named_color_token61 = 79,
  aux_sym_css_named_color_token62 = 80,
  aux_sym_css_named_color_token63 = 81,
  aux_sym_css_named_color_token64 = 82,
  aux_sym_css_named_color_token65 = 83,
  aux_sym_css_named_color_token66 = 84,
  aux_sym_css_named_color_token67 = 85,
  aux_sym_css_named_color_token68 = 86,
  aux_sym_css_named_color_token69 = 87,
  aux_sym_css_named_color_token70 = 88,
  aux_sym_css_named_color_token71 = 89,
  aux_sym_css_named_color_token72 = 90,
  aux_sym_css_named_color_token73 = 91,
  aux_sym_css_named_color_token74 = 92,
  aux_sym_css_named_color_token75 = 93,
  aux_sym_css_named_color_token76 = 94,
  aux_sym_css_named_color_token77 = 95,
  aux_sym_css_named_color_token78 = 96,
  aux_sym_css_named_color_token79 = 97,
  aux_sym_css_named_color_token80 = 98,
  aux_sym_css_named_color_token81 = 99,
  aux_sym_css_named_color_token82 = 100,
  aux_sym_css_named_color_token83 = 101,
  aux_sym_css_named_color_token84 = 102,
  aux_sym_css_named_color_token85 = 103,
  aux_sym_css_named_color_token86 = 104,
  aux_sym_css_named_color_token87 = 105,
  aux_sym_css_named_color_token88 = 106,
  aux_sym_css_named_color_token89 = 107,
  aux_sym_css_named_color_token90 = 108,
  aux_sym_css_named_color_token91 = 109,
  aux_sym_css_named_color_token92 = 110,
  aux_sym_css_named_color_token93 = 111,
  aux_sym_css_named_color_token94 = 112,
  aux_sym_css_named_color_token95 = 113,
  aux_sym_css_named_color_token96 = 114,
  aux_sym_css_named_color_token97 = 115,
  aux_sym_css_named_color_token98 = 116,
  aux_sym_css_named_color_token99 = 117,
  aux_sym_css_named_color_token100 = 118,
  aux_sym_css_named_color_token101 = 119,
  aux_sym_css_named_color_token102 = 120,
  aux_sym_css_named_color_token103 = 121,
  aux_sym_css_named_color_token104 = 122,
  aux_sym_css_named_color_token105 = 123,
  aux_sym_css_named_color_token106 = 124,
  aux_sym_css_named_color_token107 = 125,
  aux_sym_css_named_color_token108 = 126,
  aux_sym_css_named_color_token109 = 127,
  aux_sym_css_named_color_token110 = 128,
  aux_sym_css_named_color_token111 = 129,
  aux_sym_css_named_color_token112 = 130,
  aux_sym_css_named_color_token113 = 131,
  aux_sym_css_named_color_token114 = 132,
  aux_sym_css_named_color_token115 = 133,
  aux_sym_css_named_color_token116 = 134,
  aux_sym_css_named_color_token117 = 135,
  aux_sym_css_named_color_token118 = 136,
  aux_sym_css_named_color_token119 = 137,
  aux_sym_css_named_color_token120 = 138,
  aux_sym_css_named_color_token121 = 139,
  aux_sym_css_named_color_token122 = 140,
  aux_sym_css_named_color_token123 = 141,
  aux_sym_css_named_color_token124 = 142,
  aux_sym_css_named_color_token125 = 143,
  aux_sym_css_named_color_token126 = 144,
  aux_sym_css_named_color_token127 = 145,
  aux_sym_css_named_color_token128 = 146,
  aux_sym_css_named_color_token129 = 147,
  aux_sym_css_named_color_token130 = 148,
  aux_sym_css_named_color_token131 = 149,
  aux_sym_css_named_color_token132 = 150,
  aux_sym_css_named_color_token133 = 151,
  aux_sym_css_named_color_token134 = 152,
  aux_sym_css_named_color_token135 = 153,
  aux_sym_css_named_color_token136 = 154,
  aux_sym_css_named_color_token137 = 155,
  aux_sym_css_named_color_token138 = 156,
  aux_sym_css_named_color_token139 = 157,
  aux_sym_css_named_color_token140 = 158,
  aux_sym_css_named_color_token141 = 159,
  aux_sym_css_named_color_token142 = 160,
  aux_sym_css_named_color_token143 = 161,
  aux_sym_css_named_color_token144 = 162,
  aux_sym_css_named_color_token145 = 163,
  aux_sym_css_named_color_token146 = 164,
  aux_sym_css_named_color_token147 = 165,
  aux_sym_css_named_color_token148 = 166,
  sym_css_keyword_transparent = 167,
  sym_css_keyword_none = 168,
  sym_source_file = 169,
  sym_css_number = 170,
  sym_css_percentage = 171,
  sym_css_alpha_value = 172,
  sym_css_hue = 173,
  sym_css_function_rgb = 174,
  sym_css_function_rgba = 175,
  sym_css_function_rgb_legacy = 176,
  sym_css_function_rgba_legacy = 177,
  sym_css_function_rgb_modern = 178,
  sym_css_function_rgba_modern = 179,
  sym_css_function_hsl = 180,
  sym_css_function_hsl_legacy = 181,
  sym_css_function_hsl_modern = 182,
  sym_css_function_hsla = 183,
  sym_css_function_hsla_legacy = 184,
  sym_css_function_hsla_modern = 185,
  sym_css_function_hwb = 186,
  sym_css_function_lab = 187,
  sym_css_function_oklab = 188,
  sym_css_hex_color = 189,
  sym_css_named_color = 190,
  aux_sym_source_file_repeat1 = 191,
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
  field_L = 1,
  field_a = 2,
  field_alpha = 3,
  field_b = 4,
  field_g = 5,
  field_h = 6,
  field_l = 7,
  field_r = 8,
  field_s = 9,
  field_w = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
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
  [5] = {.index = 12, .length = 4},
  [6] = {.index = 16, .length = 3},
  [7] = {.index = 19, .length = 4},
  [8] = {.index = 23, .length = 3},
  [9] = {.index = 26, .length = 4},
  [10] = {.index = 30, .length = 4},
  [11] = {.index = 34, .length = 4},
  [12] = {.index = 38, .length = 4},
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
    {field_alpha, 6},
    {field_b, 4},
    {field_g, 3},
    {field_r, 2},
  [16] =
    {field_b, 6},
    {field_g, 4},
    {field_r, 2},
  [19] =
    {field_alpha, 6},
    {field_h, 2},
    {field_l, 4},
    {field_s, 3},
  [23] =
    {field_h, 2},
    {field_l, 6},
    {field_s, 4},
  [26] =
    {field_alpha, 6},
    {field_b, 4},
    {field_h, 2},
    {field_w, 3},
  [30] =
    {field_L, 2},
    {field_a, 3},
    {field_alpha, 6},
    {field_b, 4},
  [34] =
    {field_alpha, 8},
    {field_b, 6},
    {field_g, 4},
    {field_r, 2},
  [38] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(784);
      ADVANCE_MAP(
        '#', 783,
        '(', 791,
        ')', 793,
        ',', 792,
        '.', 777,
        '/', 795,
        '+', 1,
        '-', 1,
        'A', 385,
        'a', 385,
        'B', 197,
        'b', 197,
        'C', 3,
        'c', 3,
        'D', 20,
        'd', 20,
        'F', 330,
        'f', 330,
        'G', 24,
        'g', 24,
        'H', 518,
        'h', 518,
        'I', 488,
        'i', 488,
        'K', 307,
        'k', 307,
        'L', 4,
        'l', 4,
        'M', 5,
        'm', 5,
        'N', 6,
        'n', 6,
        'O', 375,
        'o', 375,
        'P', 7,
        'p', 7,
        'R', 146,
        'r', 146,
        'S', 8,
        's', 8,
        'T', 21,
        't', 21,
        'V', 329,
        'v', 329,
        'W', 305,
        'w', 305,
        'Y', 199,
        'y', 199,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      END_STATE();
    case 2:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        'A', 130,
        'a', 130,
        'H', 33,
        'h', 33,
        'O', 585,
        'o', 585,
        'R', 331,
        'r', 331,
        'Y', 23,
        'y', 23,
      );
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(448);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        'A', 291,
        'a', 291,
        'E', 133,
        'e', 133,
        'I', 131,
        'i', 131,
        'O', 101,
        'o', 101,
      );
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(732);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        'A', 392,
        'a', 392,
        'E', 52,
        'e', 52,
        'I', 489,
        'i', 489,
        'L', 695,
        'l', 695,
        'O', 747,
        'o', 747,
        'U', 590,
        'u', 590,
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
        'K', 766,
        'k', 766,
        'L', 22,
        'l', 22,
        'N', 524,
        'n', 524,
        'P', 614,
        'p', 614,
        'T', 240,
        't', 240,
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
          lookahead == 'a') ADVANCE(807);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(366);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(906);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(933);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(853);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(890);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(833);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(754);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        'A', 580,
        'a', 580,
        'B', 421,
        'b', 421,
        'O', 620,
        'o', 620,
        'P', 724,
        'p', 724,
        'S', 276,
        's', 276,
        'T', 731,
        't', 731,
        'V', 364,
        'v', 364,
      );
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        'A', 586,
        'a', 586,
        'E', 147,
        'e', 147,
        'I', 446,
        'i', 446,
        'O', 138,
        'o', 138,
      );
      END_STATE();
    case 21:
      ADVANCE_MAP(
        'A', 456,
        'a', 456,
        'E', 26,
        'e', 26,
        'H', 345,
        'h', 345,
        'O', 449,
        'o', 449,
        'R', 38,
        'r', 38,
        'U', 611,
        'u', 611,
      );
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(675);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(457);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        'A', 333,
        'a', 333,
        'H', 522,
        'h', 522,
        'O', 387,
        'o', 387,
        'R', 17,
        'r', 17,
      );
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(577);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(511);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(593);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(756);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(673);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(492);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(758);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(759);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(760);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(762);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(431);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(764);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(516);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(519);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(693);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(377);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(678);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(683);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(692);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(749);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(515);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(314);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(688);
      END_STATE();
    case 66:
      ADVANCE_MAP(
        'A', 434,
        'a', 434,
        'E', 69,
        'e', 69,
        'K', 775,
        'k', 775,
        'L', 59,
        'l', 59,
        'T', 275,
        't', 275,
      );
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
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
          lookahead == 'b') ADVANCE(798);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(799);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(211);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(508);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(790);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(800);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(909);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(407);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(259);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(925);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(612);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(623);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(544);
      END_STATE();
    case 81:
      ADVANCE_MAP(
        'B', 408,
        'b', 408,
        'C', 772,
        'c', 772,
        'G', 539,
        'g', 539,
        'K', 319,
        'k', 319,
        'M', 58,
        'm', 58,
        'O', 394,
        'o', 394,
        'R', 205,
        'r', 205,
        'S', 45,
        's', 45,
        'T', 729,
        't', 729,
        'V', 362,
        'v', 362,
      );
      END_STATE();
    case 82:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(411);
      END_STATE();
    case 83:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(413);
      END_STATE();
    case 84:
      ADVANCE_MAP(
        'B', 415,
        'b', 415,
        'C', 560,
        'c', 560,
        'G', 567,
        'g', 567,
        'P', 352,
        'p', 352,
        'S', 66,
        's', 66,
        'Y', 265,
        'y', 265,
      );
      END_STATE();
    case 85:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(417);
      END_STATE();
    case 86:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(418);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(613);
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
          lookahead == 'b') ADVANCE(422);
      END_STATE();
    case 90:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(423);
      END_STATE();
    case 91:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(424);
      END_STATE();
    case 92:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(425);
      END_STATE();
    case 93:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(426);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(616);
      END_STATE();
    case 94:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(427);
      END_STATE();
    case 95:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(428);
      END_STATE();
    case 96:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(429);
      END_STATE();
    case 97:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(627);
      END_STATE();
    case 98:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(630);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(308);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(369);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 102:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 103:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(555);
      END_STATE();
    case 104:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 105:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(373);
      END_STATE();
    case 106:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 110:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 111:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 112:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(607);
      END_STATE();
    case 113:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(316);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(856);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(789);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(912);
      END_STATE();
    case 117:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(837);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(817);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(857);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(864);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(911);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(836);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(894);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(828);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(913);
      END_STATE();
    case 126:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(916);
      END_STATE();
    case 127:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(813);
      END_STATE();
    case 128:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(900);
      END_STATE();
    case 129:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(134);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(451);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 130:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 131:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(497);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(670);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(671);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 133:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 134:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(405);
      END_STATE();
    case 135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(776);
      END_STATE();
    case 136:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 137:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 138:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 139:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(393);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(733);
      END_STATE();
    case 140:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 141:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(229);
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
          lookahead == 'd') ADVANCE(773);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(73);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(660);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(954);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(908);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(949);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(910);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(923);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(935);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(944);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(818);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(927);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(941);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(946);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(835);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(855);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(893);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(922);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(950);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(846);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(895);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(901);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(840);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(915);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(924);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(885);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(897);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 197:
      ADVANCE_MAP(
        'E', 324,
        'e', 324,
        'I', 646,
        'i', 646,
        'L', 9,
        'l', 9,
        'R', 523,
        'r', 523,
        'U', 591,
        'u', 591,
      );
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(738);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(734);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(861);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(831);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(878);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(485);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(512);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
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
          lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(641);
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
          lookahead == 'p') ADVANCE(643);
      END_STATE();
    case 277:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(918);
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
          lookahead == 'f') ADVANCE(550);
      END_STATE();
    case 281:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(409);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(337);
      END_STATE();
    case 282:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(789);
      END_STATE();
    case 283:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(564);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(730);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(363);
      END_STATE();
    case 284:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(310);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 285:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(589);
      END_STATE();
    case 286:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 287:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(213);
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
          lookahead == 'g') ADVANCE(323);
      END_STATE();
    case 291:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(218);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 292:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(605);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(318);
      END_STATE();
    case 293:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(619);
      END_STATE();
    case 294:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(242);
      END_STATE();
    case 295:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(626);
      END_STATE();
    case 296:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(631);
      END_STATE();
    case 297:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(632);
      END_STATE();
    case 298:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 299:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(634);
      END_STATE();
    case 300:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(635);
      END_STATE();
    case 301:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(636);
      END_STATE();
    case 302:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(637);
      END_STATE();
    case 303:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(638);
      END_STATE();
    case 304:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(303);
      END_STATE();
    case 305:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(208);
      END_STATE();
    case 306:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(869);
      END_STATE();
    case 307:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 308:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(653);
      END_STATE();
    case 309:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(570);
      END_STATE();
    case 310:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(663);
      END_STATE();
    case 311:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(336);
      END_STATE();
    case 312:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(353);
      END_STATE();
    case 313:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(344);
      END_STATE();
    case 314:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(338);
      END_STATE();
    case 315:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(335);
      END_STATE();
    case 316:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(339);
      END_STATE();
    case 317:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(207);
      END_STATE();
    case 318:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(241);
      END_STATE();
    case 319:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 320:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(356);
      END_STATE();
    case 321:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 322:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(359);
      END_STATE();
    case 323:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(691);
      END_STATE();
    case 324:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 325:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 326:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(867);
      END_STATE();
    case 327:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(832);
      END_STATE();
    case 328:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 329:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 330:
      ADVANCE_MAP(
        'I', 595,
        'i', 595,
        'L', 530,
        'l', 530,
        'O', 596,
        'o', 596,
        'U', 99,
        'u', 99,
      );
      END_STATE();
    case 331:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 332:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 333:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(490);
      END_STATE();
    case 334:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 335:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 336:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 337:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 338:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 339:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 340:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(491);
      END_STATE();
    case 341:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 342:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 343:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 344:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 345:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 346:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 347:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(696);
      END_STATE();
    case 348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(655);
      END_STATE();
    case 349:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(735);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(494);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 354:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(657);
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(658);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(680);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(659);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(681);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(682);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(565);
      END_STATE();
    case 365:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 366:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(566);
      END_STATE();
    case 367:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 368:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(920);
      END_STATE();
    case 369:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(812);
      END_STATE();
    case 370:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(863);
      END_STATE();
    case 371:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(823);
      END_STATE();
    case 372:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(845);
      END_STATE();
    case 373:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(850);
      END_STATE();
    case 374:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(879);
      END_STATE();
    case 375:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(389);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 376:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(326);
      END_STATE();
    case 377:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(327);
      END_STATE();
    case 378:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(180);
      END_STATE();
    case 379:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(774);
      END_STATE();
    case 380:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(796);
      END_STATE();
    case 381:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(943);
      END_STATE();
    case 382:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(821);
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(932);
      END_STATE();
    case 384:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(873);
      END_STATE();
    case 385:
      ADVANCE_MAP(
        'L', 328,
        'l', 328,
        'N', 672,
        'n', 672,
        'Q', 697,
        'q', 697,
        'Z', 722,
        'z', 722,
      );
      END_STATE();
    case 386:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(767);
      END_STATE();
    case 387:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 389:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 390:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(698);
      END_STATE();
    case 392:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 394:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(350);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 397:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 398:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 399:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 400:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 401:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 402:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 403:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 404:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 405:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 406:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(525);
      END_STATE();
    case 407:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(704);
      END_STATE();
    case 408:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 409:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(528);
      END_STATE();
    case 410:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 411:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(706);
      END_STATE();
    case 412:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(529);
      END_STATE();
    case 413:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(707);
      END_STATE();
    case 414:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(531);
      END_STATE();
    case 415:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(708);
      END_STATE();
    case 416:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(534);
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
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 431:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 432:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(412);
      END_STATE();
    case 433:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 434:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 435:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(414);
      END_STATE();
    case 436:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(454);
      END_STATE();
    case 437:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(416);
      END_STATE();
    case 438:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(750);
      END_STATE();
    case 439:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 440:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 441:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 442:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 443:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(921);
      END_STATE();
    case 444:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 445:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(902);
      END_STATE();
    case 446:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 447:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(662);
      END_STATE();
    case 448:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(538);
      END_STATE();
    case 449:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 450:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 451:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(546);
      END_STATE();
    case 452:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(548);
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
          lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 456:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(942);
      END_STATE();
    case 457:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(825);
      END_STATE();
    case 458:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 459:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(816);
      END_STATE();
    case 460:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(859);
      END_STATE();
    case 461:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(889);
      END_STATE();
    case 462:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(891);
      END_STATE();
    case 463:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(929);
      END_STATE();
    case 464:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(824);
      END_STATE();
    case 465:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(827);
      END_STATE();
    case 466:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(904);
      END_STATE();
    case 467:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(931);
      END_STATE();
    case 468:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(830);
      END_STATE();
    case 469:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(870);
      END_STATE();
    case 470:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(874);
      END_STATE();
    case 471:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(888);
      END_STATE();
    case 472:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(914);
      END_STATE();
    case 473:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(926);
      END_STATE();
    case 474:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 475:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(877);
      END_STATE();
    case 476:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(930);
      END_STATE();
    case 477:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(852);
      END_STATE();
    case 478:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(880);
      END_STATE();
    case 479:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(928);
      END_STATE();
    case 480:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(940);
      END_STATE();
    case 481:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(952);
      END_STATE();
    case 482:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(839);
      END_STATE();
    case 483:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(871);
      END_STATE();
    case 484:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(881);
      END_STATE();
    case 485:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 486:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(896);
      END_STATE();
    case 487:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(898);
      END_STATE();
    case 488:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(532);
      END_STATE();
    case 489:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 490:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(648);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(298);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(647);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(372);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(571);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(674);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(668);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(601);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 507:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 508:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(677);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(615);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 515:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 516:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 517:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 518:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(380);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(71);
      END_STATE();
    case 519:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(865);
      END_STATE();
    case 520:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(945);
      END_STATE();
    case 521:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(854);
      END_STATE();
    case 522:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(649);
      END_STATE();
    case 523:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(743);
      END_STATE();
    case 524:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(736);
      END_STATE();
    case 525:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(737);
      END_STATE();
    case 526:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(654);
      END_STATE();
    case 527:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 528:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 529:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      END_STATE();
    case 530:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(617);
      END_STATE();
    case 531:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(740);
      END_STATE();
    case 532:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 533:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 534:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 535:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 536:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 537:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 539:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(410);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(462);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(464);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(478);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(483);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(745);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(404);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(746);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(621);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 563:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 564:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(430);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 565:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 566:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 567:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(433);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 568:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(576);
      END_STATE();
    case 569:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(917);
      END_STATE();
    case 570:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(694);
      END_STATE();
    case 571:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(346);
      END_STATE();
    case 572:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 573:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(397);
      END_STATE();
    case 574:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(402);
      END_STATE();
    case 575:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(403);
      END_STATE();
    case 576:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(351);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(379);
      END_STATE();
    case 577:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(725);
      END_STATE();
    case 578:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(701);
      END_STATE();
    case 579:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(699);
      END_STATE();
    case 580:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(702);
      END_STATE();
    case 581:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(703);
      END_STATE();
    case 582:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(726);
      END_STATE();
    case 583:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(727);
      END_STATE();
    case 584:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(728);
      END_STATE();
    case 585:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 586:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 587:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(934);
      END_STATE();
    case 588:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(868);
      END_STATE();
    case 589:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 590:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 591:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(386);
      END_STATE();
    case 592:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(755);
      END_STATE();
    case 593:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 594:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 596:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 597:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(526);
      END_STATE();
    case 598:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 602:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 603:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 604:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 605:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 606:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 607:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 608:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 609:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 610:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 611:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 612:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 613:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 614:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 615:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 616:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 617:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 618:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 619:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 620:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 621:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 624:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(574);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 626:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 628:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 629:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 630:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 631:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 632:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 634:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 635:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 636:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 637:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 638:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 639:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 640:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 641:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 642:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      END_STATE();
    case 643:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 644:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 645:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 646:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(578);
      END_STATE();
    case 647:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(572);
      END_STATE();
    case 648:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(80);
      END_STATE();
    case 649:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(669);
      END_STATE();
    case 650:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(306);
      END_STATE();
    case 651:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(684);
      END_STATE();
    case 652:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(689);
      END_STATE();
    case 653:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
      END_STATE();
    case 654:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      END_STATE();
    case 655:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 656:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(174);
      END_STATE();
    case 657:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 658:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      END_STATE();
    case 659:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      END_STATE();
    case 660:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(770);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(37);
      END_STATE();
    case 661:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(342);
      END_STATE();
    case 662:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(547);
      END_STATE();
    case 663:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 664:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(948);
      END_STATE();
    case 665:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(947);
      END_STATE();
    case 666:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      END_STATE();
    case 667:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(844);
      END_STATE();
    case 668:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(953);
      END_STATE();
    case 669:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(748);
      END_STATE();
    case 670:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      END_STATE();
    case 671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(768);
      END_STATE();
    case 672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      END_STATE();
    case 673:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(520);
      END_STATE();
    case 674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(15);
      END_STATE();
    case 675:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(155);
      END_STATE();
    case 676:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 677:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      END_STATE();
    case 678:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 679:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 680:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 681:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 682:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 683:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      END_STATE();
    case 684:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(398);
      END_STATE();
    case 685:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(606);
      END_STATE();
    case 686:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(609);
      END_STATE();
    case 687:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(610);
      END_STATE();
    case 688:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      END_STATE();
    case 689:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      END_STATE();
    case 690:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 691:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 692:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(269);
      END_STATE();
    case 693:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(919);
      END_STATE();
    case 694:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 695:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(443);
      END_STATE();
    case 696:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(444);
      END_STATE();
    case 697:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 698:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(650);
      END_STATE();
    case 699:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(540);
      END_STATE();
    case 700:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(603);
      END_STATE();
    case 701:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 702:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 703:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 704:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 705:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 706:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 707:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 708:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 709:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 710:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 711:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 712:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 713:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 714:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 715:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 716:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 717:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 718:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 719:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 720:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 721:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 722:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(599);
      END_STATE();
    case 723:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(656);
      END_STATE();
    case 724:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(624);
      END_STATE();
    case 725:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(628);
      END_STATE();
    case 726:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(561);
      END_STATE();
    case 727:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(562);
      END_STATE();
    case 728:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(563);
      END_STATE();
    case 729:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(642);
      END_STATE();
    case 730:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(644);
      END_STATE();
    case 731:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(645);
      END_STATE();
    case 732:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 733:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(154);
      END_STATE();
    case 734:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(219);
      END_STATE();
    case 735:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(274);
      END_STATE();
    case 736:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(939);
      END_STATE();
    case 737:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(951);
      END_STATE();
    case 738:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(862);
      END_STATE();
    case 739:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(860);
      END_STATE();
    case 740:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(886);
      END_STATE();
    case 741:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(875);
      END_STATE();
    case 742:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(537);
      END_STATE();
    case 743:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(459);
      END_STATE();
    case 744:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(473);
      END_STATE();
    case 745:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(476);
      END_STATE();
    case 746:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(479);
      END_STATE();
    case 747:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(144);
      END_STATE();
    case 748:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(312);
      END_STATE();
    case 749:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(315);
      END_STATE();
    case 750:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(320);
      END_STATE();
    case 751:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(321);
      END_STATE();
    case 752:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(322);
      END_STATE();
    case 753:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(273);
      END_STATE();
    case 754:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(858);
      END_STATE();
    case 755:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(866);
      END_STATE();
    case 756:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(847);
      END_STATE();
    case 757:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(848);
      END_STATE();
    case 758:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(829);
      END_STATE();
    case 759:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(876);
      END_STATE();
    case 760:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(937);
      END_STATE();
    case 761:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(938);
      END_STATE();
    case 762:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(841);
      END_STATE();
    case 763:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(842);
      END_STATE();
    case 764:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(883);
      END_STATE();
    case 765:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(884);
      END_STATE();
    case 766:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 767:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(742);
      END_STATE();
    case 768:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(597);
      END_STATE();
    case 769:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 770:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 771:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 772:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 773:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 774:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 775:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 776:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(267);
      END_STATE();
    case 777:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      END_STATE();
    case 778:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      END_STATE();
    case 779:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(803);
      END_STATE();
    case 780:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(801);
      END_STATE();
    case 781:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(802);
      END_STATE();
    case 782:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(779);
      END_STATE();
    case 783:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(782);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 788,
        '.', 777,
        'D', 198,
        'd', 198,
        'E', 2,
        'e', 2,
        'G', 594,
        'g', 594,
        'R', 28,
        'r', 28,
        'T', 700,
        't', 700,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 788,
        'D', 198,
        'd', 198,
        'E', 2,
        'e', 2,
        'G', 594,
        'g', 594,
        'R', 28,
        'r', 28,
        'T', 700,
        't', 700,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 788,
        'D', 198,
        'd', 198,
        'G', 594,
        'g', 594,
        'R', 28,
        'r', 28,
        'T', 700,
        't', 700,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__css_percentage);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__css_angle);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_css_function_rgb_legacy_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_css_function_rgba_legacy_token1);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_css_function_hsl_legacy_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(797);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_css_function_hsla_legacy_token1);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_css_function_hwb_token1);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_css_function_lab_token1);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_css_function_oklab_token1);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_css_hex_color_6_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(781);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_css_hex_color_8_digits);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_css_hex_color_3_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(804);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_css_hex_color_4_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(780);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_css_named_color_token1);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_css_named_color_token2);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_css_named_color_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_css_named_color_token4);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_css_named_color_token5);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_css_named_color_token6);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_css_named_color_token7);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_css_named_color_token8);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_css_named_color_token9);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_css_named_color_token10);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(361);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_css_named_color_token11);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_css_named_color_token12);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_css_named_color_token13);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_css_named_color_token14);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_css_named_color_token15);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_css_named_color_token16);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_css_named_color_token17);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_css_named_color_token18);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_css_named_color_token19);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_css_named_color_token20);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_css_named_color_token21);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_css_named_color_token22);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_css_named_color_token23);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_css_named_color_token24);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_css_named_color_token25);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_css_named_color_token26);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_css_named_color_token27);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_css_named_color_token28);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_css_named_color_token29);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_css_named_color_token30);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_css_named_color_token31);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_css_named_color_token32);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_css_named_color_token33);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_css_named_color_token34);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_css_named_color_token35);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_css_named_color_token36);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_css_named_color_token37);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_css_named_color_token38);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_css_named_color_token39);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_css_named_color_token40);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_css_named_color_token41);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_css_named_color_token42);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_css_named_color_token43);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_css_named_color_token44);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_css_named_color_token45);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_css_named_color_token46);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_css_named_color_token47);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_css_named_color_token48);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_css_named_color_token49);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_css_named_color_token50);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_css_named_color_token51);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_css_named_color_token52);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_css_named_color_token53);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_css_named_color_token54);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_css_named_color_token55);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(264);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_css_named_color_token56);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_css_named_color_token57);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_css_named_color_token58);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_css_named_color_token59);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_css_named_color_token60);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_css_named_color_token61);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_css_named_color_token62);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_css_named_color_token63);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_css_named_color_token64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(391);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_css_named_color_token65);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_css_named_color_token66);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_css_named_color_token67);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_css_named_color_token68);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_css_named_color_token69);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_css_named_color_token70);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_css_named_color_token71);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_css_named_color_token72);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_css_named_color_token73);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_css_named_color_token74);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_css_named_color_token75);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_css_named_color_token76);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_css_named_color_token77);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_css_named_color_token78);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_css_named_color_token79);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_css_named_color_token80);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_css_named_color_token81);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_css_named_color_token82);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_css_named_color_token83);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(629);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_css_named_color_token84);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_css_named_color_token85);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_css_named_color_token86);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_css_named_color_token87);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_css_named_color_token88);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_css_named_color_token89);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_css_named_color_token90);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_css_named_color_token91);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_css_named_color_token92);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_css_named_color_token93);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_css_named_color_token94);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_css_named_color_token95);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_css_named_color_token96);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_css_named_color_token97);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_css_named_color_token98);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_css_named_color_token99);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_css_named_color_token100);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_css_named_color_token101);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_css_named_color_token102);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_css_named_color_token103);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_css_named_color_token104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(604);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_css_named_color_token105);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_css_named_color_token106);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_css_named_color_token107);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_css_named_color_token108);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_css_named_color_token109);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_css_named_color_token110);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_css_named_color_token111);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_css_named_color_token112);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_css_named_color_token113);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_css_named_color_token114);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_css_named_color_token115);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_css_named_color_token116);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_css_named_color_token117);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_css_named_color_token118);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_css_named_color_token119);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_css_named_color_token120);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_css_named_color_token121);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_css_named_color_token122);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_css_named_color_token123);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_css_named_color_token124);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_css_named_color_token125);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_css_named_color_token126);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_css_named_color_token127);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_css_named_color_token128);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_css_named_color_token129);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_css_named_color_token130);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_css_named_color_token131);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_css_named_color_token132);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_css_named_color_token133);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_css_named_color_token134);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_css_named_color_token135);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_css_named_color_token136);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_css_named_color_token137);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_css_named_color_token138);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_css_named_color_token139);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_css_named_color_token140);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_css_named_color_token141);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_css_named_color_token142);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_css_named_color_token143);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_css_named_color_token144);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_css_named_color_token145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(450);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_css_named_color_token146);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_css_named_color_token147);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(633);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_css_named_color_token148);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_css_keyword_transparent);
      END_STATE();
    case 954:
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
    [sym_source_file] = STATE(109),
    [sym_css_function_rgb] = STATE(2),
    [sym_css_function_rgba] = STATE(2),
    [sym_css_function_rgb_legacy] = STATE(6),
    [sym_css_function_rgba_legacy] = STATE(8),
    [sym_css_function_rgb_modern] = STATE(6),
    [sym_css_function_rgba_modern] = STATE(8),
    [sym_css_function_hsl] = STATE(2),
    [sym_css_function_hsl_legacy] = STATE(25),
    [sym_css_function_hsl_modern] = STATE(25),
    [sym_css_function_hsla] = STATE(2),
    [sym_css_function_hsla_legacy] = STATE(12),
    [sym_css_function_hsla_modern] = STATE(12),
    [sym_css_function_hwb] = STATE(2),
    [sym_css_function_lab] = STATE(2),
    [sym_css_function_oklab] = STATE(2),
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
    [sym_css_hex_color_6_digits] = ACTIONS(19),
    [sym_css_hex_color_8_digits] = ACTIONS(21),
    [sym_css_hex_color_3_digits] = ACTIONS(19),
    [sym_css_hex_color_4_digits] = ACTIONS(19),
    [aux_sym_css_named_color_token1] = ACTIONS(23),
    [aux_sym_css_named_color_token2] = ACTIONS(23),
    [aux_sym_css_named_color_token3] = ACTIONS(25),
    [aux_sym_css_named_color_token4] = ACTIONS(23),
    [aux_sym_css_named_color_token5] = ACTIONS(23),
    [aux_sym_css_named_color_token6] = ACTIONS(23),
    [aux_sym_css_named_color_token7] = ACTIONS(23),
    [aux_sym_css_named_color_token8] = ACTIONS(23),
    [aux_sym_css_named_color_token9] = ACTIONS(23),
    [aux_sym_css_named_color_token10] = ACTIONS(25),
    [aux_sym_css_named_color_token11] = ACTIONS(23),
    [aux_sym_css_named_color_token12] = ACTIONS(23),
    [aux_sym_css_named_color_token13] = ACTIONS(23),
    [aux_sym_css_named_color_token14] = ACTIONS(23),
    [aux_sym_css_named_color_token15] = ACTIONS(23),
    [aux_sym_css_named_color_token16] = ACTIONS(23),
    [aux_sym_css_named_color_token17] = ACTIONS(23),
    [aux_sym_css_named_color_token18] = ACTIONS(23),
    [aux_sym_css_named_color_token19] = ACTIONS(23),
    [aux_sym_css_named_color_token20] = ACTIONS(23),
    [aux_sym_css_named_color_token21] = ACTIONS(23),
    [aux_sym_css_named_color_token22] = ACTIONS(23),
    [aux_sym_css_named_color_token23] = ACTIONS(23),
    [aux_sym_css_named_color_token24] = ACTIONS(23),
    [aux_sym_css_named_color_token25] = ACTIONS(23),
    [aux_sym_css_named_color_token26] = ACTIONS(23),
    [aux_sym_css_named_color_token27] = ACTIONS(23),
    [aux_sym_css_named_color_token28] = ACTIONS(23),
    [aux_sym_css_named_color_token29] = ACTIONS(23),
    [aux_sym_css_named_color_token30] = ACTIONS(23),
    [aux_sym_css_named_color_token31] = ACTIONS(23),
    [aux_sym_css_named_color_token32] = ACTIONS(23),
    [aux_sym_css_named_color_token33] = ACTIONS(23),
    [aux_sym_css_named_color_token34] = ACTIONS(23),
    [aux_sym_css_named_color_token35] = ACTIONS(23),
    [aux_sym_css_named_color_token36] = ACTIONS(23),
    [aux_sym_css_named_color_token37] = ACTIONS(23),
    [aux_sym_css_named_color_token38] = ACTIONS(23),
    [aux_sym_css_named_color_token39] = ACTIONS(23),
    [aux_sym_css_named_color_token40] = ACTIONS(23),
    [aux_sym_css_named_color_token41] = ACTIONS(23),
    [aux_sym_css_named_color_token42] = ACTIONS(23),
    [aux_sym_css_named_color_token43] = ACTIONS(23),
    [aux_sym_css_named_color_token44] = ACTIONS(23),
    [aux_sym_css_named_color_token45] = ACTIONS(23),
    [aux_sym_css_named_color_token46] = ACTIONS(23),
    [aux_sym_css_named_color_token47] = ACTIONS(23),
    [aux_sym_css_named_color_token48] = ACTIONS(23),
    [aux_sym_css_named_color_token49] = ACTIONS(23),
    [aux_sym_css_named_color_token50] = ACTIONS(23),
    [aux_sym_css_named_color_token51] = ACTIONS(23),
    [aux_sym_css_named_color_token52] = ACTIONS(25),
    [aux_sym_css_named_color_token53] = ACTIONS(23),
    [aux_sym_css_named_color_token54] = ACTIONS(23),
    [aux_sym_css_named_color_token55] = ACTIONS(25),
    [aux_sym_css_named_color_token56] = ACTIONS(23),
    [aux_sym_css_named_color_token57] = ACTIONS(23),
    [aux_sym_css_named_color_token58] = ACTIONS(23),
    [aux_sym_css_named_color_token59] = ACTIONS(23),
    [aux_sym_css_named_color_token60] = ACTIONS(23),
    [aux_sym_css_named_color_token61] = ACTIONS(23),
    [aux_sym_css_named_color_token62] = ACTIONS(23),
    [aux_sym_css_named_color_token63] = ACTIONS(23),
    [aux_sym_css_named_color_token64] = ACTIONS(25),
    [aux_sym_css_named_color_token65] = ACTIONS(23),
    [aux_sym_css_named_color_token66] = ACTIONS(23),
    [aux_sym_css_named_color_token67] = ACTIONS(23),
    [aux_sym_css_named_color_token68] = ACTIONS(23),
    [aux_sym_css_named_color_token69] = ACTIONS(23),
    [aux_sym_css_named_color_token70] = ACTIONS(23),
    [aux_sym_css_named_color_token71] = ACTIONS(23),
    [aux_sym_css_named_color_token72] = ACTIONS(23),
    [aux_sym_css_named_color_token73] = ACTIONS(23),
    [aux_sym_css_named_color_token74] = ACTIONS(23),
    [aux_sym_css_named_color_token75] = ACTIONS(23),
    [aux_sym_css_named_color_token76] = ACTIONS(23),
    [aux_sym_css_named_color_token77] = ACTIONS(23),
    [aux_sym_css_named_color_token78] = ACTIONS(23),
    [aux_sym_css_named_color_token79] = ACTIONS(23),
    [aux_sym_css_named_color_token80] = ACTIONS(23),
    [aux_sym_css_named_color_token81] = ACTIONS(23),
    [aux_sym_css_named_color_token82] = ACTIONS(23),
    [aux_sym_css_named_color_token83] = ACTIONS(25),
    [aux_sym_css_named_color_token84] = ACTIONS(23),
    [aux_sym_css_named_color_token85] = ACTIONS(23),
    [aux_sym_css_named_color_token86] = ACTIONS(23),
    [aux_sym_css_named_color_token87] = ACTIONS(23),
    [aux_sym_css_named_color_token88] = ACTIONS(23),
    [aux_sym_css_named_color_token89] = ACTIONS(23),
    [aux_sym_css_named_color_token90] = ACTIONS(23),
    [aux_sym_css_named_color_token91] = ACTIONS(23),
    [aux_sym_css_named_color_token92] = ACTIONS(23),
    [aux_sym_css_named_color_token93] = ACTIONS(23),
    [aux_sym_css_named_color_token94] = ACTIONS(23),
    [aux_sym_css_named_color_token95] = ACTIONS(23),
    [aux_sym_css_named_color_token96] = ACTIONS(23),
    [aux_sym_css_named_color_token97] = ACTIONS(23),
    [aux_sym_css_named_color_token98] = ACTIONS(23),
    [aux_sym_css_named_color_token99] = ACTIONS(23),
    [aux_sym_css_named_color_token100] = ACTIONS(23),
    [aux_sym_css_named_color_token101] = ACTIONS(23),
    [aux_sym_css_named_color_token102] = ACTIONS(23),
    [aux_sym_css_named_color_token103] = ACTIONS(23),
    [aux_sym_css_named_color_token104] = ACTIONS(25),
    [aux_sym_css_named_color_token105] = ACTIONS(23),
    [aux_sym_css_named_color_token106] = ACTIONS(25),
    [aux_sym_css_named_color_token107] = ACTIONS(23),
    [aux_sym_css_named_color_token108] = ACTIONS(23),
    [aux_sym_css_named_color_token109] = ACTIONS(23),
    [aux_sym_css_named_color_token110] = ACTIONS(23),
    [aux_sym_css_named_color_token111] = ACTIONS(23),
    [aux_sym_css_named_color_token112] = ACTIONS(23),
    [aux_sym_css_named_color_token113] = ACTIONS(23),
    [aux_sym_css_named_color_token114] = ACTIONS(23),
    [aux_sym_css_named_color_token115] = ACTIONS(23),
    [aux_sym_css_named_color_token116] = ACTIONS(23),
    [aux_sym_css_named_color_token117] = ACTIONS(23),
    [aux_sym_css_named_color_token118] = ACTIONS(23),
    [aux_sym_css_named_color_token119] = ACTIONS(23),
    [aux_sym_css_named_color_token120] = ACTIONS(23),
    [aux_sym_css_named_color_token121] = ACTIONS(23),
    [aux_sym_css_named_color_token122] = ACTIONS(23),
    [aux_sym_css_named_color_token123] = ACTIONS(23),
    [aux_sym_css_named_color_token124] = ACTIONS(23),
    [aux_sym_css_named_color_token125] = ACTIONS(23),
    [aux_sym_css_named_color_token126] = ACTIONS(23),
    [aux_sym_css_named_color_token127] = ACTIONS(23),
    [aux_sym_css_named_color_token128] = ACTIONS(23),
    [aux_sym_css_named_color_token129] = ACTIONS(23),
    [aux_sym_css_named_color_token130] = ACTIONS(23),
    [aux_sym_css_named_color_token131] = ACTIONS(23),
    [aux_sym_css_named_color_token132] = ACTIONS(23),
    [aux_sym_css_named_color_token133] = ACTIONS(23),
    [aux_sym_css_named_color_token134] = ACTIONS(23),
    [aux_sym_css_named_color_token135] = ACTIONS(23),
    [aux_sym_css_named_color_token136] = ACTIONS(23),
    [aux_sym_css_named_color_token137] = ACTIONS(23),
    [aux_sym_css_named_color_token138] = ACTIONS(23),
    [aux_sym_css_named_color_token139] = ACTIONS(23),
    [aux_sym_css_named_color_token140] = ACTIONS(23),
    [aux_sym_css_named_color_token141] = ACTIONS(23),
    [aux_sym_css_named_color_token142] = ACTIONS(23),
    [aux_sym_css_named_color_token143] = ACTIONS(23),
    [aux_sym_css_named_color_token144] = ACTIONS(23),
    [aux_sym_css_named_color_token145] = ACTIONS(25),
    [aux_sym_css_named_color_token146] = ACTIONS(23),
    [aux_sym_css_named_color_token147] = ACTIONS(25),
    [aux_sym_css_named_color_token148] = ACTIONS(23),
    [sym_css_keyword_transparent] = ACTIONS(27),
  },
  [2] = {
    [sym_css_function_rgb] = STATE(3),
    [sym_css_function_rgba] = STATE(3),
    [sym_css_function_rgb_legacy] = STATE(6),
    [sym_css_function_rgba_legacy] = STATE(8),
    [sym_css_function_rgb_modern] = STATE(6),
    [sym_css_function_rgba_modern] = STATE(8),
    [sym_css_function_hsl] = STATE(3),
    [sym_css_function_hsl_legacy] = STATE(25),
    [sym_css_function_hsl_modern] = STATE(25),
    [sym_css_function_hsla] = STATE(3),
    [sym_css_function_hsla_legacy] = STATE(12),
    [sym_css_function_hsla_modern] = STATE(12),
    [sym_css_function_hwb] = STATE(3),
    [sym_css_function_lab] = STATE(3),
    [sym_css_function_oklab] = STATE(3),
    [sym_css_hex_color] = STATE(3),
    [sym_css_named_color] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(5),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(7),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(9),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(11),
    [aux_sym_css_function_hwb_token1] = ACTIONS(13),
    [aux_sym_css_function_lab_token1] = ACTIONS(15),
    [aux_sym_css_function_oklab_token1] = ACTIONS(17),
    [sym_css_hex_color_6_digits] = ACTIONS(19),
    [sym_css_hex_color_8_digits] = ACTIONS(21),
    [sym_css_hex_color_3_digits] = ACTIONS(19),
    [sym_css_hex_color_4_digits] = ACTIONS(19),
    [aux_sym_css_named_color_token1] = ACTIONS(23),
    [aux_sym_css_named_color_token2] = ACTIONS(23),
    [aux_sym_css_named_color_token3] = ACTIONS(25),
    [aux_sym_css_named_color_token4] = ACTIONS(23),
    [aux_sym_css_named_color_token5] = ACTIONS(23),
    [aux_sym_css_named_color_token6] = ACTIONS(23),
    [aux_sym_css_named_color_token7] = ACTIONS(23),
    [aux_sym_css_named_color_token8] = ACTIONS(23),
    [aux_sym_css_named_color_token9] = ACTIONS(23),
    [aux_sym_css_named_color_token10] = ACTIONS(25),
    [aux_sym_css_named_color_token11] = ACTIONS(23),
    [aux_sym_css_named_color_token12] = ACTIONS(23),
    [aux_sym_css_named_color_token13] = ACTIONS(23),
    [aux_sym_css_named_color_token14] = ACTIONS(23),
    [aux_sym_css_named_color_token15] = ACTIONS(23),
    [aux_sym_css_named_color_token16] = ACTIONS(23),
    [aux_sym_css_named_color_token17] = ACTIONS(23),
    [aux_sym_css_named_color_token18] = ACTIONS(23),
    [aux_sym_css_named_color_token19] = ACTIONS(23),
    [aux_sym_css_named_color_token20] = ACTIONS(23),
    [aux_sym_css_named_color_token21] = ACTIONS(23),
    [aux_sym_css_named_color_token22] = ACTIONS(23),
    [aux_sym_css_named_color_token23] = ACTIONS(23),
    [aux_sym_css_named_color_token24] = ACTIONS(23),
    [aux_sym_css_named_color_token25] = ACTIONS(23),
    [aux_sym_css_named_color_token26] = ACTIONS(23),
    [aux_sym_css_named_color_token27] = ACTIONS(23),
    [aux_sym_css_named_color_token28] = ACTIONS(23),
    [aux_sym_css_named_color_token29] = ACTIONS(23),
    [aux_sym_css_named_color_token30] = ACTIONS(23),
    [aux_sym_css_named_color_token31] = ACTIONS(23),
    [aux_sym_css_named_color_token32] = ACTIONS(23),
    [aux_sym_css_named_color_token33] = ACTIONS(23),
    [aux_sym_css_named_color_token34] = ACTIONS(23),
    [aux_sym_css_named_color_token35] = ACTIONS(23),
    [aux_sym_css_named_color_token36] = ACTIONS(23),
    [aux_sym_css_named_color_token37] = ACTIONS(23),
    [aux_sym_css_named_color_token38] = ACTIONS(23),
    [aux_sym_css_named_color_token39] = ACTIONS(23),
    [aux_sym_css_named_color_token40] = ACTIONS(23),
    [aux_sym_css_named_color_token41] = ACTIONS(23),
    [aux_sym_css_named_color_token42] = ACTIONS(23),
    [aux_sym_css_named_color_token43] = ACTIONS(23),
    [aux_sym_css_named_color_token44] = ACTIONS(23),
    [aux_sym_css_named_color_token45] = ACTIONS(23),
    [aux_sym_css_named_color_token46] = ACTIONS(23),
    [aux_sym_css_named_color_token47] = ACTIONS(23),
    [aux_sym_css_named_color_token48] = ACTIONS(23),
    [aux_sym_css_named_color_token49] = ACTIONS(23),
    [aux_sym_css_named_color_token50] = ACTIONS(23),
    [aux_sym_css_named_color_token51] = ACTIONS(23),
    [aux_sym_css_named_color_token52] = ACTIONS(25),
    [aux_sym_css_named_color_token53] = ACTIONS(23),
    [aux_sym_css_named_color_token54] = ACTIONS(23),
    [aux_sym_css_named_color_token55] = ACTIONS(25),
    [aux_sym_css_named_color_token56] = ACTIONS(23),
    [aux_sym_css_named_color_token57] = ACTIONS(23),
    [aux_sym_css_named_color_token58] = ACTIONS(23),
    [aux_sym_css_named_color_token59] = ACTIONS(23),
    [aux_sym_css_named_color_token60] = ACTIONS(23),
    [aux_sym_css_named_color_token61] = ACTIONS(23),
    [aux_sym_css_named_color_token62] = ACTIONS(23),
    [aux_sym_css_named_color_token63] = ACTIONS(23),
    [aux_sym_css_named_color_token64] = ACTIONS(25),
    [aux_sym_css_named_color_token65] = ACTIONS(23),
    [aux_sym_css_named_color_token66] = ACTIONS(23),
    [aux_sym_css_named_color_token67] = ACTIONS(23),
    [aux_sym_css_named_color_token68] = ACTIONS(23),
    [aux_sym_css_named_color_token69] = ACTIONS(23),
    [aux_sym_css_named_color_token70] = ACTIONS(23),
    [aux_sym_css_named_color_token71] = ACTIONS(23),
    [aux_sym_css_named_color_token72] = ACTIONS(23),
    [aux_sym_css_named_color_token73] = ACTIONS(23),
    [aux_sym_css_named_color_token74] = ACTIONS(23),
    [aux_sym_css_named_color_token75] = ACTIONS(23),
    [aux_sym_css_named_color_token76] = ACTIONS(23),
    [aux_sym_css_named_color_token77] = ACTIONS(23),
    [aux_sym_css_named_color_token78] = ACTIONS(23),
    [aux_sym_css_named_color_token79] = ACTIONS(23),
    [aux_sym_css_named_color_token80] = ACTIONS(23),
    [aux_sym_css_named_color_token81] = ACTIONS(23),
    [aux_sym_css_named_color_token82] = ACTIONS(23),
    [aux_sym_css_named_color_token83] = ACTIONS(25),
    [aux_sym_css_named_color_token84] = ACTIONS(23),
    [aux_sym_css_named_color_token85] = ACTIONS(23),
    [aux_sym_css_named_color_token86] = ACTIONS(23),
    [aux_sym_css_named_color_token87] = ACTIONS(23),
    [aux_sym_css_named_color_token88] = ACTIONS(23),
    [aux_sym_css_named_color_token89] = ACTIONS(23),
    [aux_sym_css_named_color_token90] = ACTIONS(23),
    [aux_sym_css_named_color_token91] = ACTIONS(23),
    [aux_sym_css_named_color_token92] = ACTIONS(23),
    [aux_sym_css_named_color_token93] = ACTIONS(23),
    [aux_sym_css_named_color_token94] = ACTIONS(23),
    [aux_sym_css_named_color_token95] = ACTIONS(23),
    [aux_sym_css_named_color_token96] = ACTIONS(23),
    [aux_sym_css_named_color_token97] = ACTIONS(23),
    [aux_sym_css_named_color_token98] = ACTIONS(23),
    [aux_sym_css_named_color_token99] = ACTIONS(23),
    [aux_sym_css_named_color_token100] = ACTIONS(23),
    [aux_sym_css_named_color_token101] = ACTIONS(23),
    [aux_sym_css_named_color_token102] = ACTIONS(23),
    [aux_sym_css_named_color_token103] = ACTIONS(23),
    [aux_sym_css_named_color_token104] = ACTIONS(25),
    [aux_sym_css_named_color_token105] = ACTIONS(23),
    [aux_sym_css_named_color_token106] = ACTIONS(25),
    [aux_sym_css_named_color_token107] = ACTIONS(23),
    [aux_sym_css_named_color_token108] = ACTIONS(23),
    [aux_sym_css_named_color_token109] = ACTIONS(23),
    [aux_sym_css_named_color_token110] = ACTIONS(23),
    [aux_sym_css_named_color_token111] = ACTIONS(23),
    [aux_sym_css_named_color_token112] = ACTIONS(23),
    [aux_sym_css_named_color_token113] = ACTIONS(23),
    [aux_sym_css_named_color_token114] = ACTIONS(23),
    [aux_sym_css_named_color_token115] = ACTIONS(23),
    [aux_sym_css_named_color_token116] = ACTIONS(23),
    [aux_sym_css_named_color_token117] = ACTIONS(23),
    [aux_sym_css_named_color_token118] = ACTIONS(23),
    [aux_sym_css_named_color_token119] = ACTIONS(23),
    [aux_sym_css_named_color_token120] = ACTIONS(23),
    [aux_sym_css_named_color_token121] = ACTIONS(23),
    [aux_sym_css_named_color_token122] = ACTIONS(23),
    [aux_sym_css_named_color_token123] = ACTIONS(23),
    [aux_sym_css_named_color_token124] = ACTIONS(23),
    [aux_sym_css_named_color_token125] = ACTIONS(23),
    [aux_sym_css_named_color_token126] = ACTIONS(23),
    [aux_sym_css_named_color_token127] = ACTIONS(23),
    [aux_sym_css_named_color_token128] = ACTIONS(23),
    [aux_sym_css_named_color_token129] = ACTIONS(23),
    [aux_sym_css_named_color_token130] = ACTIONS(23),
    [aux_sym_css_named_color_token131] = ACTIONS(23),
    [aux_sym_css_named_color_token132] = ACTIONS(23),
    [aux_sym_css_named_color_token133] = ACTIONS(23),
    [aux_sym_css_named_color_token134] = ACTIONS(23),
    [aux_sym_css_named_color_token135] = ACTIONS(23),
    [aux_sym_css_named_color_token136] = ACTIONS(23),
    [aux_sym_css_named_color_token137] = ACTIONS(23),
    [aux_sym_css_named_color_token138] = ACTIONS(23),
    [aux_sym_css_named_color_token139] = ACTIONS(23),
    [aux_sym_css_named_color_token140] = ACTIONS(23),
    [aux_sym_css_named_color_token141] = ACTIONS(23),
    [aux_sym_css_named_color_token142] = ACTIONS(23),
    [aux_sym_css_named_color_token143] = ACTIONS(23),
    [aux_sym_css_named_color_token144] = ACTIONS(23),
    [aux_sym_css_named_color_token145] = ACTIONS(25),
    [aux_sym_css_named_color_token146] = ACTIONS(23),
    [aux_sym_css_named_color_token147] = ACTIONS(25),
    [aux_sym_css_named_color_token148] = ACTIONS(23),
    [sym_css_keyword_transparent] = ACTIONS(31),
  },
  [3] = {
    [sym_css_function_rgb] = STATE(3),
    [sym_css_function_rgba] = STATE(3),
    [sym_css_function_rgb_legacy] = STATE(6),
    [sym_css_function_rgba_legacy] = STATE(8),
    [sym_css_function_rgb_modern] = STATE(6),
    [sym_css_function_rgba_modern] = STATE(8),
    [sym_css_function_hsl] = STATE(3),
    [sym_css_function_hsl_legacy] = STATE(25),
    [sym_css_function_hsl_modern] = STATE(25),
    [sym_css_function_hsla] = STATE(3),
    [sym_css_function_hsla_legacy] = STATE(12),
    [sym_css_function_hsla_modern] = STATE(12),
    [sym_css_function_hwb] = STATE(3),
    [sym_css_function_lab] = STATE(3),
    [sym_css_function_oklab] = STATE(3),
    [sym_css_hex_color] = STATE(3),
    [sym_css_named_color] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(35),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(38),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(41),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(44),
    [aux_sym_css_function_hwb_token1] = ACTIONS(47),
    [aux_sym_css_function_lab_token1] = ACTIONS(50),
    [aux_sym_css_function_oklab_token1] = ACTIONS(53),
    [sym_css_hex_color_6_digits] = ACTIONS(56),
    [sym_css_hex_color_8_digits] = ACTIONS(59),
    [sym_css_hex_color_3_digits] = ACTIONS(56),
    [sym_css_hex_color_4_digits] = ACTIONS(56),
    [aux_sym_css_named_color_token1] = ACTIONS(62),
    [aux_sym_css_named_color_token2] = ACTIONS(62),
    [aux_sym_css_named_color_token3] = ACTIONS(65),
    [aux_sym_css_named_color_token4] = ACTIONS(62),
    [aux_sym_css_named_color_token5] = ACTIONS(62),
    [aux_sym_css_named_color_token6] = ACTIONS(62),
    [aux_sym_css_named_color_token7] = ACTIONS(62),
    [aux_sym_css_named_color_token8] = ACTIONS(62),
    [aux_sym_css_named_color_token9] = ACTIONS(62),
    [aux_sym_css_named_color_token10] = ACTIONS(65),
    [aux_sym_css_named_color_token11] = ACTIONS(62),
    [aux_sym_css_named_color_token12] = ACTIONS(62),
    [aux_sym_css_named_color_token13] = ACTIONS(62),
    [aux_sym_css_named_color_token14] = ACTIONS(62),
    [aux_sym_css_named_color_token15] = ACTIONS(62),
    [aux_sym_css_named_color_token16] = ACTIONS(62),
    [aux_sym_css_named_color_token17] = ACTIONS(62),
    [aux_sym_css_named_color_token18] = ACTIONS(62),
    [aux_sym_css_named_color_token19] = ACTIONS(62),
    [aux_sym_css_named_color_token20] = ACTIONS(62),
    [aux_sym_css_named_color_token21] = ACTIONS(62),
    [aux_sym_css_named_color_token22] = ACTIONS(62),
    [aux_sym_css_named_color_token23] = ACTIONS(62),
    [aux_sym_css_named_color_token24] = ACTIONS(62),
    [aux_sym_css_named_color_token25] = ACTIONS(62),
    [aux_sym_css_named_color_token26] = ACTIONS(62),
    [aux_sym_css_named_color_token27] = ACTIONS(62),
    [aux_sym_css_named_color_token28] = ACTIONS(62),
    [aux_sym_css_named_color_token29] = ACTIONS(62),
    [aux_sym_css_named_color_token30] = ACTIONS(62),
    [aux_sym_css_named_color_token31] = ACTIONS(62),
    [aux_sym_css_named_color_token32] = ACTIONS(62),
    [aux_sym_css_named_color_token33] = ACTIONS(62),
    [aux_sym_css_named_color_token34] = ACTIONS(62),
    [aux_sym_css_named_color_token35] = ACTIONS(62),
    [aux_sym_css_named_color_token36] = ACTIONS(62),
    [aux_sym_css_named_color_token37] = ACTIONS(62),
    [aux_sym_css_named_color_token38] = ACTIONS(62),
    [aux_sym_css_named_color_token39] = ACTIONS(62),
    [aux_sym_css_named_color_token40] = ACTIONS(62),
    [aux_sym_css_named_color_token41] = ACTIONS(62),
    [aux_sym_css_named_color_token42] = ACTIONS(62),
    [aux_sym_css_named_color_token43] = ACTIONS(62),
    [aux_sym_css_named_color_token44] = ACTIONS(62),
    [aux_sym_css_named_color_token45] = ACTIONS(62),
    [aux_sym_css_named_color_token46] = ACTIONS(62),
    [aux_sym_css_named_color_token47] = ACTIONS(62),
    [aux_sym_css_named_color_token48] = ACTIONS(62),
    [aux_sym_css_named_color_token49] = ACTIONS(62),
    [aux_sym_css_named_color_token50] = ACTIONS(62),
    [aux_sym_css_named_color_token51] = ACTIONS(62),
    [aux_sym_css_named_color_token52] = ACTIONS(65),
    [aux_sym_css_named_color_token53] = ACTIONS(62),
    [aux_sym_css_named_color_token54] = ACTIONS(62),
    [aux_sym_css_named_color_token55] = ACTIONS(65),
    [aux_sym_css_named_color_token56] = ACTIONS(62),
    [aux_sym_css_named_color_token57] = ACTIONS(62),
    [aux_sym_css_named_color_token58] = ACTIONS(62),
    [aux_sym_css_named_color_token59] = ACTIONS(62),
    [aux_sym_css_named_color_token60] = ACTIONS(62),
    [aux_sym_css_named_color_token61] = ACTIONS(62),
    [aux_sym_css_named_color_token62] = ACTIONS(62),
    [aux_sym_css_named_color_token63] = ACTIONS(62),
    [aux_sym_css_named_color_token64] = ACTIONS(65),
    [aux_sym_css_named_color_token65] = ACTIONS(62),
    [aux_sym_css_named_color_token66] = ACTIONS(62),
    [aux_sym_css_named_color_token67] = ACTIONS(62),
    [aux_sym_css_named_color_token68] = ACTIONS(62),
    [aux_sym_css_named_color_token69] = ACTIONS(62),
    [aux_sym_css_named_color_token70] = ACTIONS(62),
    [aux_sym_css_named_color_token71] = ACTIONS(62),
    [aux_sym_css_named_color_token72] = ACTIONS(62),
    [aux_sym_css_named_color_token73] = ACTIONS(62),
    [aux_sym_css_named_color_token74] = ACTIONS(62),
    [aux_sym_css_named_color_token75] = ACTIONS(62),
    [aux_sym_css_named_color_token76] = ACTIONS(62),
    [aux_sym_css_named_color_token77] = ACTIONS(62),
    [aux_sym_css_named_color_token78] = ACTIONS(62),
    [aux_sym_css_named_color_token79] = ACTIONS(62),
    [aux_sym_css_named_color_token80] = ACTIONS(62),
    [aux_sym_css_named_color_token81] = ACTIONS(62),
    [aux_sym_css_named_color_token82] = ACTIONS(62),
    [aux_sym_css_named_color_token83] = ACTIONS(65),
    [aux_sym_css_named_color_token84] = ACTIONS(62),
    [aux_sym_css_named_color_token85] = ACTIONS(62),
    [aux_sym_css_named_color_token86] = ACTIONS(62),
    [aux_sym_css_named_color_token87] = ACTIONS(62),
    [aux_sym_css_named_color_token88] = ACTIONS(62),
    [aux_sym_css_named_color_token89] = ACTIONS(62),
    [aux_sym_css_named_color_token90] = ACTIONS(62),
    [aux_sym_css_named_color_token91] = ACTIONS(62),
    [aux_sym_css_named_color_token92] = ACTIONS(62),
    [aux_sym_css_named_color_token93] = ACTIONS(62),
    [aux_sym_css_named_color_token94] = ACTIONS(62),
    [aux_sym_css_named_color_token95] = ACTIONS(62),
    [aux_sym_css_named_color_token96] = ACTIONS(62),
    [aux_sym_css_named_color_token97] = ACTIONS(62),
    [aux_sym_css_named_color_token98] = ACTIONS(62),
    [aux_sym_css_named_color_token99] = ACTIONS(62),
    [aux_sym_css_named_color_token100] = ACTIONS(62),
    [aux_sym_css_named_color_token101] = ACTIONS(62),
    [aux_sym_css_named_color_token102] = ACTIONS(62),
    [aux_sym_css_named_color_token103] = ACTIONS(62),
    [aux_sym_css_named_color_token104] = ACTIONS(65),
    [aux_sym_css_named_color_token105] = ACTIONS(62),
    [aux_sym_css_named_color_token106] = ACTIONS(65),
    [aux_sym_css_named_color_token107] = ACTIONS(62),
    [aux_sym_css_named_color_token108] = ACTIONS(62),
    [aux_sym_css_named_color_token109] = ACTIONS(62),
    [aux_sym_css_named_color_token110] = ACTIONS(62),
    [aux_sym_css_named_color_token111] = ACTIONS(62),
    [aux_sym_css_named_color_token112] = ACTIONS(62),
    [aux_sym_css_named_color_token113] = ACTIONS(62),
    [aux_sym_css_named_color_token114] = ACTIONS(62),
    [aux_sym_css_named_color_token115] = ACTIONS(62),
    [aux_sym_css_named_color_token116] = ACTIONS(62),
    [aux_sym_css_named_color_token117] = ACTIONS(62),
    [aux_sym_css_named_color_token118] = ACTIONS(62),
    [aux_sym_css_named_color_token119] = ACTIONS(62),
    [aux_sym_css_named_color_token120] = ACTIONS(62),
    [aux_sym_css_named_color_token121] = ACTIONS(62),
    [aux_sym_css_named_color_token122] = ACTIONS(62),
    [aux_sym_css_named_color_token123] = ACTIONS(62),
    [aux_sym_css_named_color_token124] = ACTIONS(62),
    [aux_sym_css_named_color_token125] = ACTIONS(62),
    [aux_sym_css_named_color_token126] = ACTIONS(62),
    [aux_sym_css_named_color_token127] = ACTIONS(62),
    [aux_sym_css_named_color_token128] = ACTIONS(62),
    [aux_sym_css_named_color_token129] = ACTIONS(62),
    [aux_sym_css_named_color_token130] = ACTIONS(62),
    [aux_sym_css_named_color_token131] = ACTIONS(62),
    [aux_sym_css_named_color_token132] = ACTIONS(62),
    [aux_sym_css_named_color_token133] = ACTIONS(62),
    [aux_sym_css_named_color_token134] = ACTIONS(62),
    [aux_sym_css_named_color_token135] = ACTIONS(62),
    [aux_sym_css_named_color_token136] = ACTIONS(62),
    [aux_sym_css_named_color_token137] = ACTIONS(62),
    [aux_sym_css_named_color_token138] = ACTIONS(62),
    [aux_sym_css_named_color_token139] = ACTIONS(62),
    [aux_sym_css_named_color_token140] = ACTIONS(62),
    [aux_sym_css_named_color_token141] = ACTIONS(62),
    [aux_sym_css_named_color_token142] = ACTIONS(62),
    [aux_sym_css_named_color_token143] = ACTIONS(62),
    [aux_sym_css_named_color_token144] = ACTIONS(62),
    [aux_sym_css_named_color_token145] = ACTIONS(65),
    [aux_sym_css_named_color_token146] = ACTIONS(62),
    [aux_sym_css_named_color_token147] = ACTIONS(65),
    [aux_sym_css_named_color_token148] = ACTIONS(62),
    [sym_css_keyword_transparent] = ACTIONS(68),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(73),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(71),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(73),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(71),
    [aux_sym_css_function_hwb_token1] = ACTIONS(71),
    [aux_sym_css_function_lab_token1] = ACTIONS(71),
    [aux_sym_css_function_oklab_token1] = ACTIONS(71),
    [sym_css_hex_color_6_digits] = ACTIONS(73),
    [sym_css_hex_color_8_digits] = ACTIONS(71),
    [sym_css_hex_color_3_digits] = ACTIONS(73),
    [sym_css_hex_color_4_digits] = ACTIONS(73),
    [aux_sym_css_named_color_token1] = ACTIONS(71),
    [aux_sym_css_named_color_token2] = ACTIONS(71),
    [aux_sym_css_named_color_token3] = ACTIONS(73),
    [aux_sym_css_named_color_token4] = ACTIONS(71),
    [aux_sym_css_named_color_token5] = ACTIONS(71),
    [aux_sym_css_named_color_token6] = ACTIONS(71),
    [aux_sym_css_named_color_token7] = ACTIONS(71),
    [aux_sym_css_named_color_token8] = ACTIONS(71),
    [aux_sym_css_named_color_token9] = ACTIONS(71),
    [aux_sym_css_named_color_token10] = ACTIONS(73),
    [aux_sym_css_named_color_token11] = ACTIONS(71),
    [aux_sym_css_named_color_token12] = ACTIONS(71),
    [aux_sym_css_named_color_token13] = ACTIONS(71),
    [aux_sym_css_named_color_token14] = ACTIONS(71),
    [aux_sym_css_named_color_token15] = ACTIONS(71),
    [aux_sym_css_named_color_token16] = ACTIONS(71),
    [aux_sym_css_named_color_token17] = ACTIONS(71),
    [aux_sym_css_named_color_token18] = ACTIONS(71),
    [aux_sym_css_named_color_token19] = ACTIONS(71),
    [aux_sym_css_named_color_token20] = ACTIONS(71),
    [aux_sym_css_named_color_token21] = ACTIONS(71),
    [aux_sym_css_named_color_token22] = ACTIONS(71),
    [aux_sym_css_named_color_token23] = ACTIONS(71),
    [aux_sym_css_named_color_token24] = ACTIONS(71),
    [aux_sym_css_named_color_token25] = ACTIONS(71),
    [aux_sym_css_named_color_token26] = ACTIONS(71),
    [aux_sym_css_named_color_token27] = ACTIONS(71),
    [aux_sym_css_named_color_token28] = ACTIONS(71),
    [aux_sym_css_named_color_token29] = ACTIONS(71),
    [aux_sym_css_named_color_token30] = ACTIONS(71),
    [aux_sym_css_named_color_token31] = ACTIONS(71),
    [aux_sym_css_named_color_token32] = ACTIONS(71),
    [aux_sym_css_named_color_token33] = ACTIONS(71),
    [aux_sym_css_named_color_token34] = ACTIONS(71),
    [aux_sym_css_named_color_token35] = ACTIONS(71),
    [aux_sym_css_named_color_token36] = ACTIONS(71),
    [aux_sym_css_named_color_token37] = ACTIONS(71),
    [aux_sym_css_named_color_token38] = ACTIONS(71),
    [aux_sym_css_named_color_token39] = ACTIONS(71),
    [aux_sym_css_named_color_token40] = ACTIONS(71),
    [aux_sym_css_named_color_token41] = ACTIONS(71),
    [aux_sym_css_named_color_token42] = ACTIONS(71),
    [aux_sym_css_named_color_token43] = ACTIONS(71),
    [aux_sym_css_named_color_token44] = ACTIONS(71),
    [aux_sym_css_named_color_token45] = ACTIONS(71),
    [aux_sym_css_named_color_token46] = ACTIONS(71),
    [aux_sym_css_named_color_token47] = ACTIONS(71),
    [aux_sym_css_named_color_token48] = ACTIONS(71),
    [aux_sym_css_named_color_token49] = ACTIONS(71),
    [aux_sym_css_named_color_token50] = ACTIONS(71),
    [aux_sym_css_named_color_token51] = ACTIONS(71),
    [aux_sym_css_named_color_token52] = ACTIONS(73),
    [aux_sym_css_named_color_token53] = ACTIONS(71),
    [aux_sym_css_named_color_token54] = ACTIONS(71),
    [aux_sym_css_named_color_token55] = ACTIONS(73),
    [aux_sym_css_named_color_token56] = ACTIONS(71),
    [aux_sym_css_named_color_token57] = ACTIONS(71),
    [aux_sym_css_named_color_token58] = ACTIONS(71),
    [aux_sym_css_named_color_token59] = ACTIONS(71),
    [aux_sym_css_named_color_token60] = ACTIONS(71),
    [aux_sym_css_named_color_token61] = ACTIONS(71),
    [aux_sym_css_named_color_token62] = ACTIONS(71),
    [aux_sym_css_named_color_token63] = ACTIONS(71),
    [aux_sym_css_named_color_token64] = ACTIONS(73),
    [aux_sym_css_named_color_token65] = ACTIONS(71),
    [aux_sym_css_named_color_token66] = ACTIONS(71),
    [aux_sym_css_named_color_token67] = ACTIONS(71),
    [aux_sym_css_named_color_token68] = ACTIONS(71),
    [aux_sym_css_named_color_token69] = ACTIONS(71),
    [aux_sym_css_named_color_token70] = ACTIONS(71),
    [aux_sym_css_named_color_token71] = ACTIONS(71),
    [aux_sym_css_named_color_token72] = ACTIONS(71),
    [aux_sym_css_named_color_token73] = ACTIONS(71),
    [aux_sym_css_named_color_token74] = ACTIONS(71),
    [aux_sym_css_named_color_token75] = ACTIONS(71),
    [aux_sym_css_named_color_token76] = ACTIONS(71),
    [aux_sym_css_named_color_token77] = ACTIONS(71),
    [aux_sym_css_named_color_token78] = ACTIONS(71),
    [aux_sym_css_named_color_token79] = ACTIONS(71),
    [aux_sym_css_named_color_token80] = ACTIONS(71),
    [aux_sym_css_named_color_token81] = ACTIONS(71),
    [aux_sym_css_named_color_token82] = ACTIONS(71),
    [aux_sym_css_named_color_token83] = ACTIONS(73),
    [aux_sym_css_named_color_token84] = ACTIONS(71),
    [aux_sym_css_named_color_token85] = ACTIONS(71),
    [aux_sym_css_named_color_token86] = ACTIONS(71),
    [aux_sym_css_named_color_token87] = ACTIONS(71),
    [aux_sym_css_named_color_token88] = ACTIONS(71),
    [aux_sym_css_named_color_token89] = ACTIONS(71),
    [aux_sym_css_named_color_token90] = ACTIONS(71),
    [aux_sym_css_named_color_token91] = ACTIONS(71),
    [aux_sym_css_named_color_token92] = ACTIONS(71),
    [aux_sym_css_named_color_token93] = ACTIONS(71),
    [aux_sym_css_named_color_token94] = ACTIONS(71),
    [aux_sym_css_named_color_token95] = ACTIONS(71),
    [aux_sym_css_named_color_token96] = ACTIONS(71),
    [aux_sym_css_named_color_token97] = ACTIONS(71),
    [aux_sym_css_named_color_token98] = ACTIONS(71),
    [aux_sym_css_named_color_token99] = ACTIONS(71),
    [aux_sym_css_named_color_token100] = ACTIONS(71),
    [aux_sym_css_named_color_token101] = ACTIONS(71),
    [aux_sym_css_named_color_token102] = ACTIONS(71),
    [aux_sym_css_named_color_token103] = ACTIONS(71),
    [aux_sym_css_named_color_token104] = ACTIONS(73),
    [aux_sym_css_named_color_token105] = ACTIONS(71),
    [aux_sym_css_named_color_token106] = ACTIONS(73),
    [aux_sym_css_named_color_token107] = ACTIONS(71),
    [aux_sym_css_named_color_token108] = ACTIONS(71),
    [aux_sym_css_named_color_token109] = ACTIONS(71),
    [aux_sym_css_named_color_token110] = ACTIONS(71),
    [aux_sym_css_named_color_token111] = ACTIONS(71),
    [aux_sym_css_named_color_token112] = ACTIONS(71),
    [aux_sym_css_named_color_token113] = ACTIONS(71),
    [aux_sym_css_named_color_token114] = ACTIONS(71),
    [aux_sym_css_named_color_token115] = ACTIONS(71),
    [aux_sym_css_named_color_token116] = ACTIONS(71),
    [aux_sym_css_named_color_token117] = ACTIONS(71),
    [aux_sym_css_named_color_token118] = ACTIONS(71),
    [aux_sym_css_named_color_token119] = ACTIONS(71),
    [aux_sym_css_named_color_token120] = ACTIONS(71),
    [aux_sym_css_named_color_token121] = ACTIONS(71),
    [aux_sym_css_named_color_token122] = ACTIONS(71),
    [aux_sym_css_named_color_token123] = ACTIONS(71),
    [aux_sym_css_named_color_token124] = ACTIONS(71),
    [aux_sym_css_named_color_token125] = ACTIONS(71),
    [aux_sym_css_named_color_token126] = ACTIONS(71),
    [aux_sym_css_named_color_token127] = ACTIONS(71),
    [aux_sym_css_named_color_token128] = ACTIONS(71),
    [aux_sym_css_named_color_token129] = ACTIONS(71),
    [aux_sym_css_named_color_token130] = ACTIONS(71),
    [aux_sym_css_named_color_token131] = ACTIONS(71),
    [aux_sym_css_named_color_token132] = ACTIONS(71),
    [aux_sym_css_named_color_token133] = ACTIONS(71),
    [aux_sym_css_named_color_token134] = ACTIONS(71),
    [aux_sym_css_named_color_token135] = ACTIONS(71),
    [aux_sym_css_named_color_token136] = ACTIONS(71),
    [aux_sym_css_named_color_token137] = ACTIONS(71),
    [aux_sym_css_named_color_token138] = ACTIONS(71),
    [aux_sym_css_named_color_token139] = ACTIONS(71),
    [aux_sym_css_named_color_token140] = ACTIONS(71),
    [aux_sym_css_named_color_token141] = ACTIONS(71),
    [aux_sym_css_named_color_token142] = ACTIONS(71),
    [aux_sym_css_named_color_token143] = ACTIONS(71),
    [aux_sym_css_named_color_token144] = ACTIONS(71),
    [aux_sym_css_named_color_token145] = ACTIONS(73),
    [aux_sym_css_named_color_token146] = ACTIONS(71),
    [aux_sym_css_named_color_token147] = ACTIONS(73),
    [aux_sym_css_named_color_token148] = ACTIONS(71),
    [sym_css_keyword_transparent] = ACTIONS(71),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(77),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(75),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(77),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(75),
    [aux_sym_css_function_hwb_token1] = ACTIONS(75),
    [aux_sym_css_function_lab_token1] = ACTIONS(75),
    [aux_sym_css_function_oklab_token1] = ACTIONS(75),
    [sym_css_hex_color_6_digits] = ACTIONS(77),
    [sym_css_hex_color_8_digits] = ACTIONS(75),
    [sym_css_hex_color_3_digits] = ACTIONS(77),
    [sym_css_hex_color_4_digits] = ACTIONS(77),
    [aux_sym_css_named_color_token1] = ACTIONS(75),
    [aux_sym_css_named_color_token2] = ACTIONS(75),
    [aux_sym_css_named_color_token3] = ACTIONS(77),
    [aux_sym_css_named_color_token4] = ACTIONS(75),
    [aux_sym_css_named_color_token5] = ACTIONS(75),
    [aux_sym_css_named_color_token6] = ACTIONS(75),
    [aux_sym_css_named_color_token7] = ACTIONS(75),
    [aux_sym_css_named_color_token8] = ACTIONS(75),
    [aux_sym_css_named_color_token9] = ACTIONS(75),
    [aux_sym_css_named_color_token10] = ACTIONS(77),
    [aux_sym_css_named_color_token11] = ACTIONS(75),
    [aux_sym_css_named_color_token12] = ACTIONS(75),
    [aux_sym_css_named_color_token13] = ACTIONS(75),
    [aux_sym_css_named_color_token14] = ACTIONS(75),
    [aux_sym_css_named_color_token15] = ACTIONS(75),
    [aux_sym_css_named_color_token16] = ACTIONS(75),
    [aux_sym_css_named_color_token17] = ACTIONS(75),
    [aux_sym_css_named_color_token18] = ACTIONS(75),
    [aux_sym_css_named_color_token19] = ACTIONS(75),
    [aux_sym_css_named_color_token20] = ACTIONS(75),
    [aux_sym_css_named_color_token21] = ACTIONS(75),
    [aux_sym_css_named_color_token22] = ACTIONS(75),
    [aux_sym_css_named_color_token23] = ACTIONS(75),
    [aux_sym_css_named_color_token24] = ACTIONS(75),
    [aux_sym_css_named_color_token25] = ACTIONS(75),
    [aux_sym_css_named_color_token26] = ACTIONS(75),
    [aux_sym_css_named_color_token27] = ACTIONS(75),
    [aux_sym_css_named_color_token28] = ACTIONS(75),
    [aux_sym_css_named_color_token29] = ACTIONS(75),
    [aux_sym_css_named_color_token30] = ACTIONS(75),
    [aux_sym_css_named_color_token31] = ACTIONS(75),
    [aux_sym_css_named_color_token32] = ACTIONS(75),
    [aux_sym_css_named_color_token33] = ACTIONS(75),
    [aux_sym_css_named_color_token34] = ACTIONS(75),
    [aux_sym_css_named_color_token35] = ACTIONS(75),
    [aux_sym_css_named_color_token36] = ACTIONS(75),
    [aux_sym_css_named_color_token37] = ACTIONS(75),
    [aux_sym_css_named_color_token38] = ACTIONS(75),
    [aux_sym_css_named_color_token39] = ACTIONS(75),
    [aux_sym_css_named_color_token40] = ACTIONS(75),
    [aux_sym_css_named_color_token41] = ACTIONS(75),
    [aux_sym_css_named_color_token42] = ACTIONS(75),
    [aux_sym_css_named_color_token43] = ACTIONS(75),
    [aux_sym_css_named_color_token44] = ACTIONS(75),
    [aux_sym_css_named_color_token45] = ACTIONS(75),
    [aux_sym_css_named_color_token46] = ACTIONS(75),
    [aux_sym_css_named_color_token47] = ACTIONS(75),
    [aux_sym_css_named_color_token48] = ACTIONS(75),
    [aux_sym_css_named_color_token49] = ACTIONS(75),
    [aux_sym_css_named_color_token50] = ACTIONS(75),
    [aux_sym_css_named_color_token51] = ACTIONS(75),
    [aux_sym_css_named_color_token52] = ACTIONS(77),
    [aux_sym_css_named_color_token53] = ACTIONS(75),
    [aux_sym_css_named_color_token54] = ACTIONS(75),
    [aux_sym_css_named_color_token55] = ACTIONS(77),
    [aux_sym_css_named_color_token56] = ACTIONS(75),
    [aux_sym_css_named_color_token57] = ACTIONS(75),
    [aux_sym_css_named_color_token58] = ACTIONS(75),
    [aux_sym_css_named_color_token59] = ACTIONS(75),
    [aux_sym_css_named_color_token60] = ACTIONS(75),
    [aux_sym_css_named_color_token61] = ACTIONS(75),
    [aux_sym_css_named_color_token62] = ACTIONS(75),
    [aux_sym_css_named_color_token63] = ACTIONS(75),
    [aux_sym_css_named_color_token64] = ACTIONS(77),
    [aux_sym_css_named_color_token65] = ACTIONS(75),
    [aux_sym_css_named_color_token66] = ACTIONS(75),
    [aux_sym_css_named_color_token67] = ACTIONS(75),
    [aux_sym_css_named_color_token68] = ACTIONS(75),
    [aux_sym_css_named_color_token69] = ACTIONS(75),
    [aux_sym_css_named_color_token70] = ACTIONS(75),
    [aux_sym_css_named_color_token71] = ACTIONS(75),
    [aux_sym_css_named_color_token72] = ACTIONS(75),
    [aux_sym_css_named_color_token73] = ACTIONS(75),
    [aux_sym_css_named_color_token74] = ACTIONS(75),
    [aux_sym_css_named_color_token75] = ACTIONS(75),
    [aux_sym_css_named_color_token76] = ACTIONS(75),
    [aux_sym_css_named_color_token77] = ACTIONS(75),
    [aux_sym_css_named_color_token78] = ACTIONS(75),
    [aux_sym_css_named_color_token79] = ACTIONS(75),
    [aux_sym_css_named_color_token80] = ACTIONS(75),
    [aux_sym_css_named_color_token81] = ACTIONS(75),
    [aux_sym_css_named_color_token82] = ACTIONS(75),
    [aux_sym_css_named_color_token83] = ACTIONS(77),
    [aux_sym_css_named_color_token84] = ACTIONS(75),
    [aux_sym_css_named_color_token85] = ACTIONS(75),
    [aux_sym_css_named_color_token86] = ACTIONS(75),
    [aux_sym_css_named_color_token87] = ACTIONS(75),
    [aux_sym_css_named_color_token88] = ACTIONS(75),
    [aux_sym_css_named_color_token89] = ACTIONS(75),
    [aux_sym_css_named_color_token90] = ACTIONS(75),
    [aux_sym_css_named_color_token91] = ACTIONS(75),
    [aux_sym_css_named_color_token92] = ACTIONS(75),
    [aux_sym_css_named_color_token93] = ACTIONS(75),
    [aux_sym_css_named_color_token94] = ACTIONS(75),
    [aux_sym_css_named_color_token95] = ACTIONS(75),
    [aux_sym_css_named_color_token96] = ACTIONS(75),
    [aux_sym_css_named_color_token97] = ACTIONS(75),
    [aux_sym_css_named_color_token98] = ACTIONS(75),
    [aux_sym_css_named_color_token99] = ACTIONS(75),
    [aux_sym_css_named_color_token100] = ACTIONS(75),
    [aux_sym_css_named_color_token101] = ACTIONS(75),
    [aux_sym_css_named_color_token102] = ACTIONS(75),
    [aux_sym_css_named_color_token103] = ACTIONS(75),
    [aux_sym_css_named_color_token104] = ACTIONS(77),
    [aux_sym_css_named_color_token105] = ACTIONS(75),
    [aux_sym_css_named_color_token106] = ACTIONS(77),
    [aux_sym_css_named_color_token107] = ACTIONS(75),
    [aux_sym_css_named_color_token108] = ACTIONS(75),
    [aux_sym_css_named_color_token109] = ACTIONS(75),
    [aux_sym_css_named_color_token110] = ACTIONS(75),
    [aux_sym_css_named_color_token111] = ACTIONS(75),
    [aux_sym_css_named_color_token112] = ACTIONS(75),
    [aux_sym_css_named_color_token113] = ACTIONS(75),
    [aux_sym_css_named_color_token114] = ACTIONS(75),
    [aux_sym_css_named_color_token115] = ACTIONS(75),
    [aux_sym_css_named_color_token116] = ACTIONS(75),
    [aux_sym_css_named_color_token117] = ACTIONS(75),
    [aux_sym_css_named_color_token118] = ACTIONS(75),
    [aux_sym_css_named_color_token119] = ACTIONS(75),
    [aux_sym_css_named_color_token120] = ACTIONS(75),
    [aux_sym_css_named_color_token121] = ACTIONS(75),
    [aux_sym_css_named_color_token122] = ACTIONS(75),
    [aux_sym_css_named_color_token123] = ACTIONS(75),
    [aux_sym_css_named_color_token124] = ACTIONS(75),
    [aux_sym_css_named_color_token125] = ACTIONS(75),
    [aux_sym_css_named_color_token126] = ACTIONS(75),
    [aux_sym_css_named_color_token127] = ACTIONS(75),
    [aux_sym_css_named_color_token128] = ACTIONS(75),
    [aux_sym_css_named_color_token129] = ACTIONS(75),
    [aux_sym_css_named_color_token130] = ACTIONS(75),
    [aux_sym_css_named_color_token131] = ACTIONS(75),
    [aux_sym_css_named_color_token132] = ACTIONS(75),
    [aux_sym_css_named_color_token133] = ACTIONS(75),
    [aux_sym_css_named_color_token134] = ACTIONS(75),
    [aux_sym_css_named_color_token135] = ACTIONS(75),
    [aux_sym_css_named_color_token136] = ACTIONS(75),
    [aux_sym_css_named_color_token137] = ACTIONS(75),
    [aux_sym_css_named_color_token138] = ACTIONS(75),
    [aux_sym_css_named_color_token139] = ACTIONS(75),
    [aux_sym_css_named_color_token140] = ACTIONS(75),
    [aux_sym_css_named_color_token141] = ACTIONS(75),
    [aux_sym_css_named_color_token142] = ACTIONS(75),
    [aux_sym_css_named_color_token143] = ACTIONS(75),
    [aux_sym_css_named_color_token144] = ACTIONS(75),
    [aux_sym_css_named_color_token145] = ACTIONS(77),
    [aux_sym_css_named_color_token146] = ACTIONS(75),
    [aux_sym_css_named_color_token147] = ACTIONS(77),
    [aux_sym_css_named_color_token148] = ACTIONS(75),
    [sym_css_keyword_transparent] = ACTIONS(75),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(81),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(79),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(81),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(79),
    [aux_sym_css_function_hwb_token1] = ACTIONS(79),
    [aux_sym_css_function_lab_token1] = ACTIONS(79),
    [aux_sym_css_function_oklab_token1] = ACTIONS(79),
    [sym_css_hex_color_6_digits] = ACTIONS(81),
    [sym_css_hex_color_8_digits] = ACTIONS(79),
    [sym_css_hex_color_3_digits] = ACTIONS(81),
    [sym_css_hex_color_4_digits] = ACTIONS(81),
    [aux_sym_css_named_color_token1] = ACTIONS(79),
    [aux_sym_css_named_color_token2] = ACTIONS(79),
    [aux_sym_css_named_color_token3] = ACTIONS(81),
    [aux_sym_css_named_color_token4] = ACTIONS(79),
    [aux_sym_css_named_color_token5] = ACTIONS(79),
    [aux_sym_css_named_color_token6] = ACTIONS(79),
    [aux_sym_css_named_color_token7] = ACTIONS(79),
    [aux_sym_css_named_color_token8] = ACTIONS(79),
    [aux_sym_css_named_color_token9] = ACTIONS(79),
    [aux_sym_css_named_color_token10] = ACTIONS(81),
    [aux_sym_css_named_color_token11] = ACTIONS(79),
    [aux_sym_css_named_color_token12] = ACTIONS(79),
    [aux_sym_css_named_color_token13] = ACTIONS(79),
    [aux_sym_css_named_color_token14] = ACTIONS(79),
    [aux_sym_css_named_color_token15] = ACTIONS(79),
    [aux_sym_css_named_color_token16] = ACTIONS(79),
    [aux_sym_css_named_color_token17] = ACTIONS(79),
    [aux_sym_css_named_color_token18] = ACTIONS(79),
    [aux_sym_css_named_color_token19] = ACTIONS(79),
    [aux_sym_css_named_color_token20] = ACTIONS(79),
    [aux_sym_css_named_color_token21] = ACTIONS(79),
    [aux_sym_css_named_color_token22] = ACTIONS(79),
    [aux_sym_css_named_color_token23] = ACTIONS(79),
    [aux_sym_css_named_color_token24] = ACTIONS(79),
    [aux_sym_css_named_color_token25] = ACTIONS(79),
    [aux_sym_css_named_color_token26] = ACTIONS(79),
    [aux_sym_css_named_color_token27] = ACTIONS(79),
    [aux_sym_css_named_color_token28] = ACTIONS(79),
    [aux_sym_css_named_color_token29] = ACTIONS(79),
    [aux_sym_css_named_color_token30] = ACTIONS(79),
    [aux_sym_css_named_color_token31] = ACTIONS(79),
    [aux_sym_css_named_color_token32] = ACTIONS(79),
    [aux_sym_css_named_color_token33] = ACTIONS(79),
    [aux_sym_css_named_color_token34] = ACTIONS(79),
    [aux_sym_css_named_color_token35] = ACTIONS(79),
    [aux_sym_css_named_color_token36] = ACTIONS(79),
    [aux_sym_css_named_color_token37] = ACTIONS(79),
    [aux_sym_css_named_color_token38] = ACTIONS(79),
    [aux_sym_css_named_color_token39] = ACTIONS(79),
    [aux_sym_css_named_color_token40] = ACTIONS(79),
    [aux_sym_css_named_color_token41] = ACTIONS(79),
    [aux_sym_css_named_color_token42] = ACTIONS(79),
    [aux_sym_css_named_color_token43] = ACTIONS(79),
    [aux_sym_css_named_color_token44] = ACTIONS(79),
    [aux_sym_css_named_color_token45] = ACTIONS(79),
    [aux_sym_css_named_color_token46] = ACTIONS(79),
    [aux_sym_css_named_color_token47] = ACTIONS(79),
    [aux_sym_css_named_color_token48] = ACTIONS(79),
    [aux_sym_css_named_color_token49] = ACTIONS(79),
    [aux_sym_css_named_color_token50] = ACTIONS(79),
    [aux_sym_css_named_color_token51] = ACTIONS(79),
    [aux_sym_css_named_color_token52] = ACTIONS(81),
    [aux_sym_css_named_color_token53] = ACTIONS(79),
    [aux_sym_css_named_color_token54] = ACTIONS(79),
    [aux_sym_css_named_color_token55] = ACTIONS(81),
    [aux_sym_css_named_color_token56] = ACTIONS(79),
    [aux_sym_css_named_color_token57] = ACTIONS(79),
    [aux_sym_css_named_color_token58] = ACTIONS(79),
    [aux_sym_css_named_color_token59] = ACTIONS(79),
    [aux_sym_css_named_color_token60] = ACTIONS(79),
    [aux_sym_css_named_color_token61] = ACTIONS(79),
    [aux_sym_css_named_color_token62] = ACTIONS(79),
    [aux_sym_css_named_color_token63] = ACTIONS(79),
    [aux_sym_css_named_color_token64] = ACTIONS(81),
    [aux_sym_css_named_color_token65] = ACTIONS(79),
    [aux_sym_css_named_color_token66] = ACTIONS(79),
    [aux_sym_css_named_color_token67] = ACTIONS(79),
    [aux_sym_css_named_color_token68] = ACTIONS(79),
    [aux_sym_css_named_color_token69] = ACTIONS(79),
    [aux_sym_css_named_color_token70] = ACTIONS(79),
    [aux_sym_css_named_color_token71] = ACTIONS(79),
    [aux_sym_css_named_color_token72] = ACTIONS(79),
    [aux_sym_css_named_color_token73] = ACTIONS(79),
    [aux_sym_css_named_color_token74] = ACTIONS(79),
    [aux_sym_css_named_color_token75] = ACTIONS(79),
    [aux_sym_css_named_color_token76] = ACTIONS(79),
    [aux_sym_css_named_color_token77] = ACTIONS(79),
    [aux_sym_css_named_color_token78] = ACTIONS(79),
    [aux_sym_css_named_color_token79] = ACTIONS(79),
    [aux_sym_css_named_color_token80] = ACTIONS(79),
    [aux_sym_css_named_color_token81] = ACTIONS(79),
    [aux_sym_css_named_color_token82] = ACTIONS(79),
    [aux_sym_css_named_color_token83] = ACTIONS(81),
    [aux_sym_css_named_color_token84] = ACTIONS(79),
    [aux_sym_css_named_color_token85] = ACTIONS(79),
    [aux_sym_css_named_color_token86] = ACTIONS(79),
    [aux_sym_css_named_color_token87] = ACTIONS(79),
    [aux_sym_css_named_color_token88] = ACTIONS(79),
    [aux_sym_css_named_color_token89] = ACTIONS(79),
    [aux_sym_css_named_color_token90] = ACTIONS(79),
    [aux_sym_css_named_color_token91] = ACTIONS(79),
    [aux_sym_css_named_color_token92] = ACTIONS(79),
    [aux_sym_css_named_color_token93] = ACTIONS(79),
    [aux_sym_css_named_color_token94] = ACTIONS(79),
    [aux_sym_css_named_color_token95] = ACTIONS(79),
    [aux_sym_css_named_color_token96] = ACTIONS(79),
    [aux_sym_css_named_color_token97] = ACTIONS(79),
    [aux_sym_css_named_color_token98] = ACTIONS(79),
    [aux_sym_css_named_color_token99] = ACTIONS(79),
    [aux_sym_css_named_color_token100] = ACTIONS(79),
    [aux_sym_css_named_color_token101] = ACTIONS(79),
    [aux_sym_css_named_color_token102] = ACTIONS(79),
    [aux_sym_css_named_color_token103] = ACTIONS(79),
    [aux_sym_css_named_color_token104] = ACTIONS(81),
    [aux_sym_css_named_color_token105] = ACTIONS(79),
    [aux_sym_css_named_color_token106] = ACTIONS(81),
    [aux_sym_css_named_color_token107] = ACTIONS(79),
    [aux_sym_css_named_color_token108] = ACTIONS(79),
    [aux_sym_css_named_color_token109] = ACTIONS(79),
    [aux_sym_css_named_color_token110] = ACTIONS(79),
    [aux_sym_css_named_color_token111] = ACTIONS(79),
    [aux_sym_css_named_color_token112] = ACTIONS(79),
    [aux_sym_css_named_color_token113] = ACTIONS(79),
    [aux_sym_css_named_color_token114] = ACTIONS(79),
    [aux_sym_css_named_color_token115] = ACTIONS(79),
    [aux_sym_css_named_color_token116] = ACTIONS(79),
    [aux_sym_css_named_color_token117] = ACTIONS(79),
    [aux_sym_css_named_color_token118] = ACTIONS(79),
    [aux_sym_css_named_color_token119] = ACTIONS(79),
    [aux_sym_css_named_color_token120] = ACTIONS(79),
    [aux_sym_css_named_color_token121] = ACTIONS(79),
    [aux_sym_css_named_color_token122] = ACTIONS(79),
    [aux_sym_css_named_color_token123] = ACTIONS(79),
    [aux_sym_css_named_color_token124] = ACTIONS(79),
    [aux_sym_css_named_color_token125] = ACTIONS(79),
    [aux_sym_css_named_color_token126] = ACTIONS(79),
    [aux_sym_css_named_color_token127] = ACTIONS(79),
    [aux_sym_css_named_color_token128] = ACTIONS(79),
    [aux_sym_css_named_color_token129] = ACTIONS(79),
    [aux_sym_css_named_color_token130] = ACTIONS(79),
    [aux_sym_css_named_color_token131] = ACTIONS(79),
    [aux_sym_css_named_color_token132] = ACTIONS(79),
    [aux_sym_css_named_color_token133] = ACTIONS(79),
    [aux_sym_css_named_color_token134] = ACTIONS(79),
    [aux_sym_css_named_color_token135] = ACTIONS(79),
    [aux_sym_css_named_color_token136] = ACTIONS(79),
    [aux_sym_css_named_color_token137] = ACTIONS(79),
    [aux_sym_css_named_color_token138] = ACTIONS(79),
    [aux_sym_css_named_color_token139] = ACTIONS(79),
    [aux_sym_css_named_color_token140] = ACTIONS(79),
    [aux_sym_css_named_color_token141] = ACTIONS(79),
    [aux_sym_css_named_color_token142] = ACTIONS(79),
    [aux_sym_css_named_color_token143] = ACTIONS(79),
    [aux_sym_css_named_color_token144] = ACTIONS(79),
    [aux_sym_css_named_color_token145] = ACTIONS(81),
    [aux_sym_css_named_color_token146] = ACTIONS(79),
    [aux_sym_css_named_color_token147] = ACTIONS(81),
    [aux_sym_css_named_color_token148] = ACTIONS(79),
    [sym_css_keyword_transparent] = ACTIONS(79),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(85),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(83),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(85),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(83),
    [aux_sym_css_function_hwb_token1] = ACTIONS(83),
    [aux_sym_css_function_lab_token1] = ACTIONS(83),
    [aux_sym_css_function_oklab_token1] = ACTIONS(83),
    [sym_css_hex_color_6_digits] = ACTIONS(85),
    [sym_css_hex_color_8_digits] = ACTIONS(83),
    [sym_css_hex_color_3_digits] = ACTIONS(85),
    [sym_css_hex_color_4_digits] = ACTIONS(85),
    [aux_sym_css_named_color_token1] = ACTIONS(83),
    [aux_sym_css_named_color_token2] = ACTIONS(83),
    [aux_sym_css_named_color_token3] = ACTIONS(85),
    [aux_sym_css_named_color_token4] = ACTIONS(83),
    [aux_sym_css_named_color_token5] = ACTIONS(83),
    [aux_sym_css_named_color_token6] = ACTIONS(83),
    [aux_sym_css_named_color_token7] = ACTIONS(83),
    [aux_sym_css_named_color_token8] = ACTIONS(83),
    [aux_sym_css_named_color_token9] = ACTIONS(83),
    [aux_sym_css_named_color_token10] = ACTIONS(85),
    [aux_sym_css_named_color_token11] = ACTIONS(83),
    [aux_sym_css_named_color_token12] = ACTIONS(83),
    [aux_sym_css_named_color_token13] = ACTIONS(83),
    [aux_sym_css_named_color_token14] = ACTIONS(83),
    [aux_sym_css_named_color_token15] = ACTIONS(83),
    [aux_sym_css_named_color_token16] = ACTIONS(83),
    [aux_sym_css_named_color_token17] = ACTIONS(83),
    [aux_sym_css_named_color_token18] = ACTIONS(83),
    [aux_sym_css_named_color_token19] = ACTIONS(83),
    [aux_sym_css_named_color_token20] = ACTIONS(83),
    [aux_sym_css_named_color_token21] = ACTIONS(83),
    [aux_sym_css_named_color_token22] = ACTIONS(83),
    [aux_sym_css_named_color_token23] = ACTIONS(83),
    [aux_sym_css_named_color_token24] = ACTIONS(83),
    [aux_sym_css_named_color_token25] = ACTIONS(83),
    [aux_sym_css_named_color_token26] = ACTIONS(83),
    [aux_sym_css_named_color_token27] = ACTIONS(83),
    [aux_sym_css_named_color_token28] = ACTIONS(83),
    [aux_sym_css_named_color_token29] = ACTIONS(83),
    [aux_sym_css_named_color_token30] = ACTIONS(83),
    [aux_sym_css_named_color_token31] = ACTIONS(83),
    [aux_sym_css_named_color_token32] = ACTIONS(83),
    [aux_sym_css_named_color_token33] = ACTIONS(83),
    [aux_sym_css_named_color_token34] = ACTIONS(83),
    [aux_sym_css_named_color_token35] = ACTIONS(83),
    [aux_sym_css_named_color_token36] = ACTIONS(83),
    [aux_sym_css_named_color_token37] = ACTIONS(83),
    [aux_sym_css_named_color_token38] = ACTIONS(83),
    [aux_sym_css_named_color_token39] = ACTIONS(83),
    [aux_sym_css_named_color_token40] = ACTIONS(83),
    [aux_sym_css_named_color_token41] = ACTIONS(83),
    [aux_sym_css_named_color_token42] = ACTIONS(83),
    [aux_sym_css_named_color_token43] = ACTIONS(83),
    [aux_sym_css_named_color_token44] = ACTIONS(83),
    [aux_sym_css_named_color_token45] = ACTIONS(83),
    [aux_sym_css_named_color_token46] = ACTIONS(83),
    [aux_sym_css_named_color_token47] = ACTIONS(83),
    [aux_sym_css_named_color_token48] = ACTIONS(83),
    [aux_sym_css_named_color_token49] = ACTIONS(83),
    [aux_sym_css_named_color_token50] = ACTIONS(83),
    [aux_sym_css_named_color_token51] = ACTIONS(83),
    [aux_sym_css_named_color_token52] = ACTIONS(85),
    [aux_sym_css_named_color_token53] = ACTIONS(83),
    [aux_sym_css_named_color_token54] = ACTIONS(83),
    [aux_sym_css_named_color_token55] = ACTIONS(85),
    [aux_sym_css_named_color_token56] = ACTIONS(83),
    [aux_sym_css_named_color_token57] = ACTIONS(83),
    [aux_sym_css_named_color_token58] = ACTIONS(83),
    [aux_sym_css_named_color_token59] = ACTIONS(83),
    [aux_sym_css_named_color_token60] = ACTIONS(83),
    [aux_sym_css_named_color_token61] = ACTIONS(83),
    [aux_sym_css_named_color_token62] = ACTIONS(83),
    [aux_sym_css_named_color_token63] = ACTIONS(83),
    [aux_sym_css_named_color_token64] = ACTIONS(85),
    [aux_sym_css_named_color_token65] = ACTIONS(83),
    [aux_sym_css_named_color_token66] = ACTIONS(83),
    [aux_sym_css_named_color_token67] = ACTIONS(83),
    [aux_sym_css_named_color_token68] = ACTIONS(83),
    [aux_sym_css_named_color_token69] = ACTIONS(83),
    [aux_sym_css_named_color_token70] = ACTIONS(83),
    [aux_sym_css_named_color_token71] = ACTIONS(83),
    [aux_sym_css_named_color_token72] = ACTIONS(83),
    [aux_sym_css_named_color_token73] = ACTIONS(83),
    [aux_sym_css_named_color_token74] = ACTIONS(83),
    [aux_sym_css_named_color_token75] = ACTIONS(83),
    [aux_sym_css_named_color_token76] = ACTIONS(83),
    [aux_sym_css_named_color_token77] = ACTIONS(83),
    [aux_sym_css_named_color_token78] = ACTIONS(83),
    [aux_sym_css_named_color_token79] = ACTIONS(83),
    [aux_sym_css_named_color_token80] = ACTIONS(83),
    [aux_sym_css_named_color_token81] = ACTIONS(83),
    [aux_sym_css_named_color_token82] = ACTIONS(83),
    [aux_sym_css_named_color_token83] = ACTIONS(85),
    [aux_sym_css_named_color_token84] = ACTIONS(83),
    [aux_sym_css_named_color_token85] = ACTIONS(83),
    [aux_sym_css_named_color_token86] = ACTIONS(83),
    [aux_sym_css_named_color_token87] = ACTIONS(83),
    [aux_sym_css_named_color_token88] = ACTIONS(83),
    [aux_sym_css_named_color_token89] = ACTIONS(83),
    [aux_sym_css_named_color_token90] = ACTIONS(83),
    [aux_sym_css_named_color_token91] = ACTIONS(83),
    [aux_sym_css_named_color_token92] = ACTIONS(83),
    [aux_sym_css_named_color_token93] = ACTIONS(83),
    [aux_sym_css_named_color_token94] = ACTIONS(83),
    [aux_sym_css_named_color_token95] = ACTIONS(83),
    [aux_sym_css_named_color_token96] = ACTIONS(83),
    [aux_sym_css_named_color_token97] = ACTIONS(83),
    [aux_sym_css_named_color_token98] = ACTIONS(83),
    [aux_sym_css_named_color_token99] = ACTIONS(83),
    [aux_sym_css_named_color_token100] = ACTIONS(83),
    [aux_sym_css_named_color_token101] = ACTIONS(83),
    [aux_sym_css_named_color_token102] = ACTIONS(83),
    [aux_sym_css_named_color_token103] = ACTIONS(83),
    [aux_sym_css_named_color_token104] = ACTIONS(85),
    [aux_sym_css_named_color_token105] = ACTIONS(83),
    [aux_sym_css_named_color_token106] = ACTIONS(85),
    [aux_sym_css_named_color_token107] = ACTIONS(83),
    [aux_sym_css_named_color_token108] = ACTIONS(83),
    [aux_sym_css_named_color_token109] = ACTIONS(83),
    [aux_sym_css_named_color_token110] = ACTIONS(83),
    [aux_sym_css_named_color_token111] = ACTIONS(83),
    [aux_sym_css_named_color_token112] = ACTIONS(83),
    [aux_sym_css_named_color_token113] = ACTIONS(83),
    [aux_sym_css_named_color_token114] = ACTIONS(83),
    [aux_sym_css_named_color_token115] = ACTIONS(83),
    [aux_sym_css_named_color_token116] = ACTIONS(83),
    [aux_sym_css_named_color_token117] = ACTIONS(83),
    [aux_sym_css_named_color_token118] = ACTIONS(83),
    [aux_sym_css_named_color_token119] = ACTIONS(83),
    [aux_sym_css_named_color_token120] = ACTIONS(83),
    [aux_sym_css_named_color_token121] = ACTIONS(83),
    [aux_sym_css_named_color_token122] = ACTIONS(83),
    [aux_sym_css_named_color_token123] = ACTIONS(83),
    [aux_sym_css_named_color_token124] = ACTIONS(83),
    [aux_sym_css_named_color_token125] = ACTIONS(83),
    [aux_sym_css_named_color_token126] = ACTIONS(83),
    [aux_sym_css_named_color_token127] = ACTIONS(83),
    [aux_sym_css_named_color_token128] = ACTIONS(83),
    [aux_sym_css_named_color_token129] = ACTIONS(83),
    [aux_sym_css_named_color_token130] = ACTIONS(83),
    [aux_sym_css_named_color_token131] = ACTIONS(83),
    [aux_sym_css_named_color_token132] = ACTIONS(83),
    [aux_sym_css_named_color_token133] = ACTIONS(83),
    [aux_sym_css_named_color_token134] = ACTIONS(83),
    [aux_sym_css_named_color_token135] = ACTIONS(83),
    [aux_sym_css_named_color_token136] = ACTIONS(83),
    [aux_sym_css_named_color_token137] = ACTIONS(83),
    [aux_sym_css_named_color_token138] = ACTIONS(83),
    [aux_sym_css_named_color_token139] = ACTIONS(83),
    [aux_sym_css_named_color_token140] = ACTIONS(83),
    [aux_sym_css_named_color_token141] = ACTIONS(83),
    [aux_sym_css_named_color_token142] = ACTIONS(83),
    [aux_sym_css_named_color_token143] = ACTIONS(83),
    [aux_sym_css_named_color_token144] = ACTIONS(83),
    [aux_sym_css_named_color_token145] = ACTIONS(85),
    [aux_sym_css_named_color_token146] = ACTIONS(83),
    [aux_sym_css_named_color_token147] = ACTIONS(85),
    [aux_sym_css_named_color_token148] = ACTIONS(83),
    [sym_css_keyword_transparent] = ACTIONS(83),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(89),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(87),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(89),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(87),
    [aux_sym_css_function_hwb_token1] = ACTIONS(87),
    [aux_sym_css_function_lab_token1] = ACTIONS(87),
    [aux_sym_css_function_oklab_token1] = ACTIONS(87),
    [sym_css_hex_color_6_digits] = ACTIONS(89),
    [sym_css_hex_color_8_digits] = ACTIONS(87),
    [sym_css_hex_color_3_digits] = ACTIONS(89),
    [sym_css_hex_color_4_digits] = ACTIONS(89),
    [aux_sym_css_named_color_token1] = ACTIONS(87),
    [aux_sym_css_named_color_token2] = ACTIONS(87),
    [aux_sym_css_named_color_token3] = ACTIONS(89),
    [aux_sym_css_named_color_token4] = ACTIONS(87),
    [aux_sym_css_named_color_token5] = ACTIONS(87),
    [aux_sym_css_named_color_token6] = ACTIONS(87),
    [aux_sym_css_named_color_token7] = ACTIONS(87),
    [aux_sym_css_named_color_token8] = ACTIONS(87),
    [aux_sym_css_named_color_token9] = ACTIONS(87),
    [aux_sym_css_named_color_token10] = ACTIONS(89),
    [aux_sym_css_named_color_token11] = ACTIONS(87),
    [aux_sym_css_named_color_token12] = ACTIONS(87),
    [aux_sym_css_named_color_token13] = ACTIONS(87),
    [aux_sym_css_named_color_token14] = ACTIONS(87),
    [aux_sym_css_named_color_token15] = ACTIONS(87),
    [aux_sym_css_named_color_token16] = ACTIONS(87),
    [aux_sym_css_named_color_token17] = ACTIONS(87),
    [aux_sym_css_named_color_token18] = ACTIONS(87),
    [aux_sym_css_named_color_token19] = ACTIONS(87),
    [aux_sym_css_named_color_token20] = ACTIONS(87),
    [aux_sym_css_named_color_token21] = ACTIONS(87),
    [aux_sym_css_named_color_token22] = ACTIONS(87),
    [aux_sym_css_named_color_token23] = ACTIONS(87),
    [aux_sym_css_named_color_token24] = ACTIONS(87),
    [aux_sym_css_named_color_token25] = ACTIONS(87),
    [aux_sym_css_named_color_token26] = ACTIONS(87),
    [aux_sym_css_named_color_token27] = ACTIONS(87),
    [aux_sym_css_named_color_token28] = ACTIONS(87),
    [aux_sym_css_named_color_token29] = ACTIONS(87),
    [aux_sym_css_named_color_token30] = ACTIONS(87),
    [aux_sym_css_named_color_token31] = ACTIONS(87),
    [aux_sym_css_named_color_token32] = ACTIONS(87),
    [aux_sym_css_named_color_token33] = ACTIONS(87),
    [aux_sym_css_named_color_token34] = ACTIONS(87),
    [aux_sym_css_named_color_token35] = ACTIONS(87),
    [aux_sym_css_named_color_token36] = ACTIONS(87),
    [aux_sym_css_named_color_token37] = ACTIONS(87),
    [aux_sym_css_named_color_token38] = ACTIONS(87),
    [aux_sym_css_named_color_token39] = ACTIONS(87),
    [aux_sym_css_named_color_token40] = ACTIONS(87),
    [aux_sym_css_named_color_token41] = ACTIONS(87),
    [aux_sym_css_named_color_token42] = ACTIONS(87),
    [aux_sym_css_named_color_token43] = ACTIONS(87),
    [aux_sym_css_named_color_token44] = ACTIONS(87),
    [aux_sym_css_named_color_token45] = ACTIONS(87),
    [aux_sym_css_named_color_token46] = ACTIONS(87),
    [aux_sym_css_named_color_token47] = ACTIONS(87),
    [aux_sym_css_named_color_token48] = ACTIONS(87),
    [aux_sym_css_named_color_token49] = ACTIONS(87),
    [aux_sym_css_named_color_token50] = ACTIONS(87),
    [aux_sym_css_named_color_token51] = ACTIONS(87),
    [aux_sym_css_named_color_token52] = ACTIONS(89),
    [aux_sym_css_named_color_token53] = ACTIONS(87),
    [aux_sym_css_named_color_token54] = ACTIONS(87),
    [aux_sym_css_named_color_token55] = ACTIONS(89),
    [aux_sym_css_named_color_token56] = ACTIONS(87),
    [aux_sym_css_named_color_token57] = ACTIONS(87),
    [aux_sym_css_named_color_token58] = ACTIONS(87),
    [aux_sym_css_named_color_token59] = ACTIONS(87),
    [aux_sym_css_named_color_token60] = ACTIONS(87),
    [aux_sym_css_named_color_token61] = ACTIONS(87),
    [aux_sym_css_named_color_token62] = ACTIONS(87),
    [aux_sym_css_named_color_token63] = ACTIONS(87),
    [aux_sym_css_named_color_token64] = ACTIONS(89),
    [aux_sym_css_named_color_token65] = ACTIONS(87),
    [aux_sym_css_named_color_token66] = ACTIONS(87),
    [aux_sym_css_named_color_token67] = ACTIONS(87),
    [aux_sym_css_named_color_token68] = ACTIONS(87),
    [aux_sym_css_named_color_token69] = ACTIONS(87),
    [aux_sym_css_named_color_token70] = ACTIONS(87),
    [aux_sym_css_named_color_token71] = ACTIONS(87),
    [aux_sym_css_named_color_token72] = ACTIONS(87),
    [aux_sym_css_named_color_token73] = ACTIONS(87),
    [aux_sym_css_named_color_token74] = ACTIONS(87),
    [aux_sym_css_named_color_token75] = ACTIONS(87),
    [aux_sym_css_named_color_token76] = ACTIONS(87),
    [aux_sym_css_named_color_token77] = ACTIONS(87),
    [aux_sym_css_named_color_token78] = ACTIONS(87),
    [aux_sym_css_named_color_token79] = ACTIONS(87),
    [aux_sym_css_named_color_token80] = ACTIONS(87),
    [aux_sym_css_named_color_token81] = ACTIONS(87),
    [aux_sym_css_named_color_token82] = ACTIONS(87),
    [aux_sym_css_named_color_token83] = ACTIONS(89),
    [aux_sym_css_named_color_token84] = ACTIONS(87),
    [aux_sym_css_named_color_token85] = ACTIONS(87),
    [aux_sym_css_named_color_token86] = ACTIONS(87),
    [aux_sym_css_named_color_token87] = ACTIONS(87),
    [aux_sym_css_named_color_token88] = ACTIONS(87),
    [aux_sym_css_named_color_token89] = ACTIONS(87),
    [aux_sym_css_named_color_token90] = ACTIONS(87),
    [aux_sym_css_named_color_token91] = ACTIONS(87),
    [aux_sym_css_named_color_token92] = ACTIONS(87),
    [aux_sym_css_named_color_token93] = ACTIONS(87),
    [aux_sym_css_named_color_token94] = ACTIONS(87),
    [aux_sym_css_named_color_token95] = ACTIONS(87),
    [aux_sym_css_named_color_token96] = ACTIONS(87),
    [aux_sym_css_named_color_token97] = ACTIONS(87),
    [aux_sym_css_named_color_token98] = ACTIONS(87),
    [aux_sym_css_named_color_token99] = ACTIONS(87),
    [aux_sym_css_named_color_token100] = ACTIONS(87),
    [aux_sym_css_named_color_token101] = ACTIONS(87),
    [aux_sym_css_named_color_token102] = ACTIONS(87),
    [aux_sym_css_named_color_token103] = ACTIONS(87),
    [aux_sym_css_named_color_token104] = ACTIONS(89),
    [aux_sym_css_named_color_token105] = ACTIONS(87),
    [aux_sym_css_named_color_token106] = ACTIONS(89),
    [aux_sym_css_named_color_token107] = ACTIONS(87),
    [aux_sym_css_named_color_token108] = ACTIONS(87),
    [aux_sym_css_named_color_token109] = ACTIONS(87),
    [aux_sym_css_named_color_token110] = ACTIONS(87),
    [aux_sym_css_named_color_token111] = ACTIONS(87),
    [aux_sym_css_named_color_token112] = ACTIONS(87),
    [aux_sym_css_named_color_token113] = ACTIONS(87),
    [aux_sym_css_named_color_token114] = ACTIONS(87),
    [aux_sym_css_named_color_token115] = ACTIONS(87),
    [aux_sym_css_named_color_token116] = ACTIONS(87),
    [aux_sym_css_named_color_token117] = ACTIONS(87),
    [aux_sym_css_named_color_token118] = ACTIONS(87),
    [aux_sym_css_named_color_token119] = ACTIONS(87),
    [aux_sym_css_named_color_token120] = ACTIONS(87),
    [aux_sym_css_named_color_token121] = ACTIONS(87),
    [aux_sym_css_named_color_token122] = ACTIONS(87),
    [aux_sym_css_named_color_token123] = ACTIONS(87),
    [aux_sym_css_named_color_token124] = ACTIONS(87),
    [aux_sym_css_named_color_token125] = ACTIONS(87),
    [aux_sym_css_named_color_token126] = ACTIONS(87),
    [aux_sym_css_named_color_token127] = ACTIONS(87),
    [aux_sym_css_named_color_token128] = ACTIONS(87),
    [aux_sym_css_named_color_token129] = ACTIONS(87),
    [aux_sym_css_named_color_token130] = ACTIONS(87),
    [aux_sym_css_named_color_token131] = ACTIONS(87),
    [aux_sym_css_named_color_token132] = ACTIONS(87),
    [aux_sym_css_named_color_token133] = ACTIONS(87),
    [aux_sym_css_named_color_token134] = ACTIONS(87),
    [aux_sym_css_named_color_token135] = ACTIONS(87),
    [aux_sym_css_named_color_token136] = ACTIONS(87),
    [aux_sym_css_named_color_token137] = ACTIONS(87),
    [aux_sym_css_named_color_token138] = ACTIONS(87),
    [aux_sym_css_named_color_token139] = ACTIONS(87),
    [aux_sym_css_named_color_token140] = ACTIONS(87),
    [aux_sym_css_named_color_token141] = ACTIONS(87),
    [aux_sym_css_named_color_token142] = ACTIONS(87),
    [aux_sym_css_named_color_token143] = ACTIONS(87),
    [aux_sym_css_named_color_token144] = ACTIONS(87),
    [aux_sym_css_named_color_token145] = ACTIONS(89),
    [aux_sym_css_named_color_token146] = ACTIONS(87),
    [aux_sym_css_named_color_token147] = ACTIONS(89),
    [aux_sym_css_named_color_token148] = ACTIONS(87),
    [sym_css_keyword_transparent] = ACTIONS(87),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(93),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(91),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(93),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(91),
    [aux_sym_css_function_hwb_token1] = ACTIONS(91),
    [aux_sym_css_function_lab_token1] = ACTIONS(91),
    [aux_sym_css_function_oklab_token1] = ACTIONS(91),
    [sym_css_hex_color_6_digits] = ACTIONS(93),
    [sym_css_hex_color_8_digits] = ACTIONS(91),
    [sym_css_hex_color_3_digits] = ACTIONS(93),
    [sym_css_hex_color_4_digits] = ACTIONS(93),
    [aux_sym_css_named_color_token1] = ACTIONS(91),
    [aux_sym_css_named_color_token2] = ACTIONS(91),
    [aux_sym_css_named_color_token3] = ACTIONS(93),
    [aux_sym_css_named_color_token4] = ACTIONS(91),
    [aux_sym_css_named_color_token5] = ACTIONS(91),
    [aux_sym_css_named_color_token6] = ACTIONS(91),
    [aux_sym_css_named_color_token7] = ACTIONS(91),
    [aux_sym_css_named_color_token8] = ACTIONS(91),
    [aux_sym_css_named_color_token9] = ACTIONS(91),
    [aux_sym_css_named_color_token10] = ACTIONS(93),
    [aux_sym_css_named_color_token11] = ACTIONS(91),
    [aux_sym_css_named_color_token12] = ACTIONS(91),
    [aux_sym_css_named_color_token13] = ACTIONS(91),
    [aux_sym_css_named_color_token14] = ACTIONS(91),
    [aux_sym_css_named_color_token15] = ACTIONS(91),
    [aux_sym_css_named_color_token16] = ACTIONS(91),
    [aux_sym_css_named_color_token17] = ACTIONS(91),
    [aux_sym_css_named_color_token18] = ACTIONS(91),
    [aux_sym_css_named_color_token19] = ACTIONS(91),
    [aux_sym_css_named_color_token20] = ACTIONS(91),
    [aux_sym_css_named_color_token21] = ACTIONS(91),
    [aux_sym_css_named_color_token22] = ACTIONS(91),
    [aux_sym_css_named_color_token23] = ACTIONS(91),
    [aux_sym_css_named_color_token24] = ACTIONS(91),
    [aux_sym_css_named_color_token25] = ACTIONS(91),
    [aux_sym_css_named_color_token26] = ACTIONS(91),
    [aux_sym_css_named_color_token27] = ACTIONS(91),
    [aux_sym_css_named_color_token28] = ACTIONS(91),
    [aux_sym_css_named_color_token29] = ACTIONS(91),
    [aux_sym_css_named_color_token30] = ACTIONS(91),
    [aux_sym_css_named_color_token31] = ACTIONS(91),
    [aux_sym_css_named_color_token32] = ACTIONS(91),
    [aux_sym_css_named_color_token33] = ACTIONS(91),
    [aux_sym_css_named_color_token34] = ACTIONS(91),
    [aux_sym_css_named_color_token35] = ACTIONS(91),
    [aux_sym_css_named_color_token36] = ACTIONS(91),
    [aux_sym_css_named_color_token37] = ACTIONS(91),
    [aux_sym_css_named_color_token38] = ACTIONS(91),
    [aux_sym_css_named_color_token39] = ACTIONS(91),
    [aux_sym_css_named_color_token40] = ACTIONS(91),
    [aux_sym_css_named_color_token41] = ACTIONS(91),
    [aux_sym_css_named_color_token42] = ACTIONS(91),
    [aux_sym_css_named_color_token43] = ACTIONS(91),
    [aux_sym_css_named_color_token44] = ACTIONS(91),
    [aux_sym_css_named_color_token45] = ACTIONS(91),
    [aux_sym_css_named_color_token46] = ACTIONS(91),
    [aux_sym_css_named_color_token47] = ACTIONS(91),
    [aux_sym_css_named_color_token48] = ACTIONS(91),
    [aux_sym_css_named_color_token49] = ACTIONS(91),
    [aux_sym_css_named_color_token50] = ACTIONS(91),
    [aux_sym_css_named_color_token51] = ACTIONS(91),
    [aux_sym_css_named_color_token52] = ACTIONS(93),
    [aux_sym_css_named_color_token53] = ACTIONS(91),
    [aux_sym_css_named_color_token54] = ACTIONS(91),
    [aux_sym_css_named_color_token55] = ACTIONS(93),
    [aux_sym_css_named_color_token56] = ACTIONS(91),
    [aux_sym_css_named_color_token57] = ACTIONS(91),
    [aux_sym_css_named_color_token58] = ACTIONS(91),
    [aux_sym_css_named_color_token59] = ACTIONS(91),
    [aux_sym_css_named_color_token60] = ACTIONS(91),
    [aux_sym_css_named_color_token61] = ACTIONS(91),
    [aux_sym_css_named_color_token62] = ACTIONS(91),
    [aux_sym_css_named_color_token63] = ACTIONS(91),
    [aux_sym_css_named_color_token64] = ACTIONS(93),
    [aux_sym_css_named_color_token65] = ACTIONS(91),
    [aux_sym_css_named_color_token66] = ACTIONS(91),
    [aux_sym_css_named_color_token67] = ACTIONS(91),
    [aux_sym_css_named_color_token68] = ACTIONS(91),
    [aux_sym_css_named_color_token69] = ACTIONS(91),
    [aux_sym_css_named_color_token70] = ACTIONS(91),
    [aux_sym_css_named_color_token71] = ACTIONS(91),
    [aux_sym_css_named_color_token72] = ACTIONS(91),
    [aux_sym_css_named_color_token73] = ACTIONS(91),
    [aux_sym_css_named_color_token74] = ACTIONS(91),
    [aux_sym_css_named_color_token75] = ACTIONS(91),
    [aux_sym_css_named_color_token76] = ACTIONS(91),
    [aux_sym_css_named_color_token77] = ACTIONS(91),
    [aux_sym_css_named_color_token78] = ACTIONS(91),
    [aux_sym_css_named_color_token79] = ACTIONS(91),
    [aux_sym_css_named_color_token80] = ACTIONS(91),
    [aux_sym_css_named_color_token81] = ACTIONS(91),
    [aux_sym_css_named_color_token82] = ACTIONS(91),
    [aux_sym_css_named_color_token83] = ACTIONS(93),
    [aux_sym_css_named_color_token84] = ACTIONS(91),
    [aux_sym_css_named_color_token85] = ACTIONS(91),
    [aux_sym_css_named_color_token86] = ACTIONS(91),
    [aux_sym_css_named_color_token87] = ACTIONS(91),
    [aux_sym_css_named_color_token88] = ACTIONS(91),
    [aux_sym_css_named_color_token89] = ACTIONS(91),
    [aux_sym_css_named_color_token90] = ACTIONS(91),
    [aux_sym_css_named_color_token91] = ACTIONS(91),
    [aux_sym_css_named_color_token92] = ACTIONS(91),
    [aux_sym_css_named_color_token93] = ACTIONS(91),
    [aux_sym_css_named_color_token94] = ACTIONS(91),
    [aux_sym_css_named_color_token95] = ACTIONS(91),
    [aux_sym_css_named_color_token96] = ACTIONS(91),
    [aux_sym_css_named_color_token97] = ACTIONS(91),
    [aux_sym_css_named_color_token98] = ACTIONS(91),
    [aux_sym_css_named_color_token99] = ACTIONS(91),
    [aux_sym_css_named_color_token100] = ACTIONS(91),
    [aux_sym_css_named_color_token101] = ACTIONS(91),
    [aux_sym_css_named_color_token102] = ACTIONS(91),
    [aux_sym_css_named_color_token103] = ACTIONS(91),
    [aux_sym_css_named_color_token104] = ACTIONS(93),
    [aux_sym_css_named_color_token105] = ACTIONS(91),
    [aux_sym_css_named_color_token106] = ACTIONS(93),
    [aux_sym_css_named_color_token107] = ACTIONS(91),
    [aux_sym_css_named_color_token108] = ACTIONS(91),
    [aux_sym_css_named_color_token109] = ACTIONS(91),
    [aux_sym_css_named_color_token110] = ACTIONS(91),
    [aux_sym_css_named_color_token111] = ACTIONS(91),
    [aux_sym_css_named_color_token112] = ACTIONS(91),
    [aux_sym_css_named_color_token113] = ACTIONS(91),
    [aux_sym_css_named_color_token114] = ACTIONS(91),
    [aux_sym_css_named_color_token115] = ACTIONS(91),
    [aux_sym_css_named_color_token116] = ACTIONS(91),
    [aux_sym_css_named_color_token117] = ACTIONS(91),
    [aux_sym_css_named_color_token118] = ACTIONS(91),
    [aux_sym_css_named_color_token119] = ACTIONS(91),
    [aux_sym_css_named_color_token120] = ACTIONS(91),
    [aux_sym_css_named_color_token121] = ACTIONS(91),
    [aux_sym_css_named_color_token122] = ACTIONS(91),
    [aux_sym_css_named_color_token123] = ACTIONS(91),
    [aux_sym_css_named_color_token124] = ACTIONS(91),
    [aux_sym_css_named_color_token125] = ACTIONS(91),
    [aux_sym_css_named_color_token126] = ACTIONS(91),
    [aux_sym_css_named_color_token127] = ACTIONS(91),
    [aux_sym_css_named_color_token128] = ACTIONS(91),
    [aux_sym_css_named_color_token129] = ACTIONS(91),
    [aux_sym_css_named_color_token130] = ACTIONS(91),
    [aux_sym_css_named_color_token131] = ACTIONS(91),
    [aux_sym_css_named_color_token132] = ACTIONS(91),
    [aux_sym_css_named_color_token133] = ACTIONS(91),
    [aux_sym_css_named_color_token134] = ACTIONS(91),
    [aux_sym_css_named_color_token135] = ACTIONS(91),
    [aux_sym_css_named_color_token136] = ACTIONS(91),
    [aux_sym_css_named_color_token137] = ACTIONS(91),
    [aux_sym_css_named_color_token138] = ACTIONS(91),
    [aux_sym_css_named_color_token139] = ACTIONS(91),
    [aux_sym_css_named_color_token140] = ACTIONS(91),
    [aux_sym_css_named_color_token141] = ACTIONS(91),
    [aux_sym_css_named_color_token142] = ACTIONS(91),
    [aux_sym_css_named_color_token143] = ACTIONS(91),
    [aux_sym_css_named_color_token144] = ACTIONS(91),
    [aux_sym_css_named_color_token145] = ACTIONS(93),
    [aux_sym_css_named_color_token146] = ACTIONS(91),
    [aux_sym_css_named_color_token147] = ACTIONS(93),
    [aux_sym_css_named_color_token148] = ACTIONS(91),
    [sym_css_keyword_transparent] = ACTIONS(91),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(97),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(95),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(97),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(95),
    [aux_sym_css_function_hwb_token1] = ACTIONS(95),
    [aux_sym_css_function_lab_token1] = ACTIONS(95),
    [aux_sym_css_function_oklab_token1] = ACTIONS(95),
    [sym_css_hex_color_6_digits] = ACTIONS(97),
    [sym_css_hex_color_8_digits] = ACTIONS(95),
    [sym_css_hex_color_3_digits] = ACTIONS(97),
    [sym_css_hex_color_4_digits] = ACTIONS(97),
    [aux_sym_css_named_color_token1] = ACTIONS(95),
    [aux_sym_css_named_color_token2] = ACTIONS(95),
    [aux_sym_css_named_color_token3] = ACTIONS(97),
    [aux_sym_css_named_color_token4] = ACTIONS(95),
    [aux_sym_css_named_color_token5] = ACTIONS(95),
    [aux_sym_css_named_color_token6] = ACTIONS(95),
    [aux_sym_css_named_color_token7] = ACTIONS(95),
    [aux_sym_css_named_color_token8] = ACTIONS(95),
    [aux_sym_css_named_color_token9] = ACTIONS(95),
    [aux_sym_css_named_color_token10] = ACTIONS(97),
    [aux_sym_css_named_color_token11] = ACTIONS(95),
    [aux_sym_css_named_color_token12] = ACTIONS(95),
    [aux_sym_css_named_color_token13] = ACTIONS(95),
    [aux_sym_css_named_color_token14] = ACTIONS(95),
    [aux_sym_css_named_color_token15] = ACTIONS(95),
    [aux_sym_css_named_color_token16] = ACTIONS(95),
    [aux_sym_css_named_color_token17] = ACTIONS(95),
    [aux_sym_css_named_color_token18] = ACTIONS(95),
    [aux_sym_css_named_color_token19] = ACTIONS(95),
    [aux_sym_css_named_color_token20] = ACTIONS(95),
    [aux_sym_css_named_color_token21] = ACTIONS(95),
    [aux_sym_css_named_color_token22] = ACTIONS(95),
    [aux_sym_css_named_color_token23] = ACTIONS(95),
    [aux_sym_css_named_color_token24] = ACTIONS(95),
    [aux_sym_css_named_color_token25] = ACTIONS(95),
    [aux_sym_css_named_color_token26] = ACTIONS(95),
    [aux_sym_css_named_color_token27] = ACTIONS(95),
    [aux_sym_css_named_color_token28] = ACTIONS(95),
    [aux_sym_css_named_color_token29] = ACTIONS(95),
    [aux_sym_css_named_color_token30] = ACTIONS(95),
    [aux_sym_css_named_color_token31] = ACTIONS(95),
    [aux_sym_css_named_color_token32] = ACTIONS(95),
    [aux_sym_css_named_color_token33] = ACTIONS(95),
    [aux_sym_css_named_color_token34] = ACTIONS(95),
    [aux_sym_css_named_color_token35] = ACTIONS(95),
    [aux_sym_css_named_color_token36] = ACTIONS(95),
    [aux_sym_css_named_color_token37] = ACTIONS(95),
    [aux_sym_css_named_color_token38] = ACTIONS(95),
    [aux_sym_css_named_color_token39] = ACTIONS(95),
    [aux_sym_css_named_color_token40] = ACTIONS(95),
    [aux_sym_css_named_color_token41] = ACTIONS(95),
    [aux_sym_css_named_color_token42] = ACTIONS(95),
    [aux_sym_css_named_color_token43] = ACTIONS(95),
    [aux_sym_css_named_color_token44] = ACTIONS(95),
    [aux_sym_css_named_color_token45] = ACTIONS(95),
    [aux_sym_css_named_color_token46] = ACTIONS(95),
    [aux_sym_css_named_color_token47] = ACTIONS(95),
    [aux_sym_css_named_color_token48] = ACTIONS(95),
    [aux_sym_css_named_color_token49] = ACTIONS(95),
    [aux_sym_css_named_color_token50] = ACTIONS(95),
    [aux_sym_css_named_color_token51] = ACTIONS(95),
    [aux_sym_css_named_color_token52] = ACTIONS(97),
    [aux_sym_css_named_color_token53] = ACTIONS(95),
    [aux_sym_css_named_color_token54] = ACTIONS(95),
    [aux_sym_css_named_color_token55] = ACTIONS(97),
    [aux_sym_css_named_color_token56] = ACTIONS(95),
    [aux_sym_css_named_color_token57] = ACTIONS(95),
    [aux_sym_css_named_color_token58] = ACTIONS(95),
    [aux_sym_css_named_color_token59] = ACTIONS(95),
    [aux_sym_css_named_color_token60] = ACTIONS(95),
    [aux_sym_css_named_color_token61] = ACTIONS(95),
    [aux_sym_css_named_color_token62] = ACTIONS(95),
    [aux_sym_css_named_color_token63] = ACTIONS(95),
    [aux_sym_css_named_color_token64] = ACTIONS(97),
    [aux_sym_css_named_color_token65] = ACTIONS(95),
    [aux_sym_css_named_color_token66] = ACTIONS(95),
    [aux_sym_css_named_color_token67] = ACTIONS(95),
    [aux_sym_css_named_color_token68] = ACTIONS(95),
    [aux_sym_css_named_color_token69] = ACTIONS(95),
    [aux_sym_css_named_color_token70] = ACTIONS(95),
    [aux_sym_css_named_color_token71] = ACTIONS(95),
    [aux_sym_css_named_color_token72] = ACTIONS(95),
    [aux_sym_css_named_color_token73] = ACTIONS(95),
    [aux_sym_css_named_color_token74] = ACTIONS(95),
    [aux_sym_css_named_color_token75] = ACTIONS(95),
    [aux_sym_css_named_color_token76] = ACTIONS(95),
    [aux_sym_css_named_color_token77] = ACTIONS(95),
    [aux_sym_css_named_color_token78] = ACTIONS(95),
    [aux_sym_css_named_color_token79] = ACTIONS(95),
    [aux_sym_css_named_color_token80] = ACTIONS(95),
    [aux_sym_css_named_color_token81] = ACTIONS(95),
    [aux_sym_css_named_color_token82] = ACTIONS(95),
    [aux_sym_css_named_color_token83] = ACTIONS(97),
    [aux_sym_css_named_color_token84] = ACTIONS(95),
    [aux_sym_css_named_color_token85] = ACTIONS(95),
    [aux_sym_css_named_color_token86] = ACTIONS(95),
    [aux_sym_css_named_color_token87] = ACTIONS(95),
    [aux_sym_css_named_color_token88] = ACTIONS(95),
    [aux_sym_css_named_color_token89] = ACTIONS(95),
    [aux_sym_css_named_color_token90] = ACTIONS(95),
    [aux_sym_css_named_color_token91] = ACTIONS(95),
    [aux_sym_css_named_color_token92] = ACTIONS(95),
    [aux_sym_css_named_color_token93] = ACTIONS(95),
    [aux_sym_css_named_color_token94] = ACTIONS(95),
    [aux_sym_css_named_color_token95] = ACTIONS(95),
    [aux_sym_css_named_color_token96] = ACTIONS(95),
    [aux_sym_css_named_color_token97] = ACTIONS(95),
    [aux_sym_css_named_color_token98] = ACTIONS(95),
    [aux_sym_css_named_color_token99] = ACTIONS(95),
    [aux_sym_css_named_color_token100] = ACTIONS(95),
    [aux_sym_css_named_color_token101] = ACTIONS(95),
    [aux_sym_css_named_color_token102] = ACTIONS(95),
    [aux_sym_css_named_color_token103] = ACTIONS(95),
    [aux_sym_css_named_color_token104] = ACTIONS(97),
    [aux_sym_css_named_color_token105] = ACTIONS(95),
    [aux_sym_css_named_color_token106] = ACTIONS(97),
    [aux_sym_css_named_color_token107] = ACTIONS(95),
    [aux_sym_css_named_color_token108] = ACTIONS(95),
    [aux_sym_css_named_color_token109] = ACTIONS(95),
    [aux_sym_css_named_color_token110] = ACTIONS(95),
    [aux_sym_css_named_color_token111] = ACTIONS(95),
    [aux_sym_css_named_color_token112] = ACTIONS(95),
    [aux_sym_css_named_color_token113] = ACTIONS(95),
    [aux_sym_css_named_color_token114] = ACTIONS(95),
    [aux_sym_css_named_color_token115] = ACTIONS(95),
    [aux_sym_css_named_color_token116] = ACTIONS(95),
    [aux_sym_css_named_color_token117] = ACTIONS(95),
    [aux_sym_css_named_color_token118] = ACTIONS(95),
    [aux_sym_css_named_color_token119] = ACTIONS(95),
    [aux_sym_css_named_color_token120] = ACTIONS(95),
    [aux_sym_css_named_color_token121] = ACTIONS(95),
    [aux_sym_css_named_color_token122] = ACTIONS(95),
    [aux_sym_css_named_color_token123] = ACTIONS(95),
    [aux_sym_css_named_color_token124] = ACTIONS(95),
    [aux_sym_css_named_color_token125] = ACTIONS(95),
    [aux_sym_css_named_color_token126] = ACTIONS(95),
    [aux_sym_css_named_color_token127] = ACTIONS(95),
    [aux_sym_css_named_color_token128] = ACTIONS(95),
    [aux_sym_css_named_color_token129] = ACTIONS(95),
    [aux_sym_css_named_color_token130] = ACTIONS(95),
    [aux_sym_css_named_color_token131] = ACTIONS(95),
    [aux_sym_css_named_color_token132] = ACTIONS(95),
    [aux_sym_css_named_color_token133] = ACTIONS(95),
    [aux_sym_css_named_color_token134] = ACTIONS(95),
    [aux_sym_css_named_color_token135] = ACTIONS(95),
    [aux_sym_css_named_color_token136] = ACTIONS(95),
    [aux_sym_css_named_color_token137] = ACTIONS(95),
    [aux_sym_css_named_color_token138] = ACTIONS(95),
    [aux_sym_css_named_color_token139] = ACTIONS(95),
    [aux_sym_css_named_color_token140] = ACTIONS(95),
    [aux_sym_css_named_color_token141] = ACTIONS(95),
    [aux_sym_css_named_color_token142] = ACTIONS(95),
    [aux_sym_css_named_color_token143] = ACTIONS(95),
    [aux_sym_css_named_color_token144] = ACTIONS(95),
    [aux_sym_css_named_color_token145] = ACTIONS(97),
    [aux_sym_css_named_color_token146] = ACTIONS(95),
    [aux_sym_css_named_color_token147] = ACTIONS(97),
    [aux_sym_css_named_color_token148] = ACTIONS(95),
    [sym_css_keyword_transparent] = ACTIONS(95),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(101),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(99),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(101),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(99),
    [aux_sym_css_function_hwb_token1] = ACTIONS(99),
    [aux_sym_css_function_lab_token1] = ACTIONS(99),
    [aux_sym_css_function_oklab_token1] = ACTIONS(99),
    [sym_css_hex_color_6_digits] = ACTIONS(101),
    [sym_css_hex_color_8_digits] = ACTIONS(99),
    [sym_css_hex_color_3_digits] = ACTIONS(101),
    [sym_css_hex_color_4_digits] = ACTIONS(101),
    [aux_sym_css_named_color_token1] = ACTIONS(99),
    [aux_sym_css_named_color_token2] = ACTIONS(99),
    [aux_sym_css_named_color_token3] = ACTIONS(101),
    [aux_sym_css_named_color_token4] = ACTIONS(99),
    [aux_sym_css_named_color_token5] = ACTIONS(99),
    [aux_sym_css_named_color_token6] = ACTIONS(99),
    [aux_sym_css_named_color_token7] = ACTIONS(99),
    [aux_sym_css_named_color_token8] = ACTIONS(99),
    [aux_sym_css_named_color_token9] = ACTIONS(99),
    [aux_sym_css_named_color_token10] = ACTIONS(101),
    [aux_sym_css_named_color_token11] = ACTIONS(99),
    [aux_sym_css_named_color_token12] = ACTIONS(99),
    [aux_sym_css_named_color_token13] = ACTIONS(99),
    [aux_sym_css_named_color_token14] = ACTIONS(99),
    [aux_sym_css_named_color_token15] = ACTIONS(99),
    [aux_sym_css_named_color_token16] = ACTIONS(99),
    [aux_sym_css_named_color_token17] = ACTIONS(99),
    [aux_sym_css_named_color_token18] = ACTIONS(99),
    [aux_sym_css_named_color_token19] = ACTIONS(99),
    [aux_sym_css_named_color_token20] = ACTIONS(99),
    [aux_sym_css_named_color_token21] = ACTIONS(99),
    [aux_sym_css_named_color_token22] = ACTIONS(99),
    [aux_sym_css_named_color_token23] = ACTIONS(99),
    [aux_sym_css_named_color_token24] = ACTIONS(99),
    [aux_sym_css_named_color_token25] = ACTIONS(99),
    [aux_sym_css_named_color_token26] = ACTIONS(99),
    [aux_sym_css_named_color_token27] = ACTIONS(99),
    [aux_sym_css_named_color_token28] = ACTIONS(99),
    [aux_sym_css_named_color_token29] = ACTIONS(99),
    [aux_sym_css_named_color_token30] = ACTIONS(99),
    [aux_sym_css_named_color_token31] = ACTIONS(99),
    [aux_sym_css_named_color_token32] = ACTIONS(99),
    [aux_sym_css_named_color_token33] = ACTIONS(99),
    [aux_sym_css_named_color_token34] = ACTIONS(99),
    [aux_sym_css_named_color_token35] = ACTIONS(99),
    [aux_sym_css_named_color_token36] = ACTIONS(99),
    [aux_sym_css_named_color_token37] = ACTIONS(99),
    [aux_sym_css_named_color_token38] = ACTIONS(99),
    [aux_sym_css_named_color_token39] = ACTIONS(99),
    [aux_sym_css_named_color_token40] = ACTIONS(99),
    [aux_sym_css_named_color_token41] = ACTIONS(99),
    [aux_sym_css_named_color_token42] = ACTIONS(99),
    [aux_sym_css_named_color_token43] = ACTIONS(99),
    [aux_sym_css_named_color_token44] = ACTIONS(99),
    [aux_sym_css_named_color_token45] = ACTIONS(99),
    [aux_sym_css_named_color_token46] = ACTIONS(99),
    [aux_sym_css_named_color_token47] = ACTIONS(99),
    [aux_sym_css_named_color_token48] = ACTIONS(99),
    [aux_sym_css_named_color_token49] = ACTIONS(99),
    [aux_sym_css_named_color_token50] = ACTIONS(99),
    [aux_sym_css_named_color_token51] = ACTIONS(99),
    [aux_sym_css_named_color_token52] = ACTIONS(101),
    [aux_sym_css_named_color_token53] = ACTIONS(99),
    [aux_sym_css_named_color_token54] = ACTIONS(99),
    [aux_sym_css_named_color_token55] = ACTIONS(101),
    [aux_sym_css_named_color_token56] = ACTIONS(99),
    [aux_sym_css_named_color_token57] = ACTIONS(99),
    [aux_sym_css_named_color_token58] = ACTIONS(99),
    [aux_sym_css_named_color_token59] = ACTIONS(99),
    [aux_sym_css_named_color_token60] = ACTIONS(99),
    [aux_sym_css_named_color_token61] = ACTIONS(99),
    [aux_sym_css_named_color_token62] = ACTIONS(99),
    [aux_sym_css_named_color_token63] = ACTIONS(99),
    [aux_sym_css_named_color_token64] = ACTIONS(101),
    [aux_sym_css_named_color_token65] = ACTIONS(99),
    [aux_sym_css_named_color_token66] = ACTIONS(99),
    [aux_sym_css_named_color_token67] = ACTIONS(99),
    [aux_sym_css_named_color_token68] = ACTIONS(99),
    [aux_sym_css_named_color_token69] = ACTIONS(99),
    [aux_sym_css_named_color_token70] = ACTIONS(99),
    [aux_sym_css_named_color_token71] = ACTIONS(99),
    [aux_sym_css_named_color_token72] = ACTIONS(99),
    [aux_sym_css_named_color_token73] = ACTIONS(99),
    [aux_sym_css_named_color_token74] = ACTIONS(99),
    [aux_sym_css_named_color_token75] = ACTIONS(99),
    [aux_sym_css_named_color_token76] = ACTIONS(99),
    [aux_sym_css_named_color_token77] = ACTIONS(99),
    [aux_sym_css_named_color_token78] = ACTIONS(99),
    [aux_sym_css_named_color_token79] = ACTIONS(99),
    [aux_sym_css_named_color_token80] = ACTIONS(99),
    [aux_sym_css_named_color_token81] = ACTIONS(99),
    [aux_sym_css_named_color_token82] = ACTIONS(99),
    [aux_sym_css_named_color_token83] = ACTIONS(101),
    [aux_sym_css_named_color_token84] = ACTIONS(99),
    [aux_sym_css_named_color_token85] = ACTIONS(99),
    [aux_sym_css_named_color_token86] = ACTIONS(99),
    [aux_sym_css_named_color_token87] = ACTIONS(99),
    [aux_sym_css_named_color_token88] = ACTIONS(99),
    [aux_sym_css_named_color_token89] = ACTIONS(99),
    [aux_sym_css_named_color_token90] = ACTIONS(99),
    [aux_sym_css_named_color_token91] = ACTIONS(99),
    [aux_sym_css_named_color_token92] = ACTIONS(99),
    [aux_sym_css_named_color_token93] = ACTIONS(99),
    [aux_sym_css_named_color_token94] = ACTIONS(99),
    [aux_sym_css_named_color_token95] = ACTIONS(99),
    [aux_sym_css_named_color_token96] = ACTIONS(99),
    [aux_sym_css_named_color_token97] = ACTIONS(99),
    [aux_sym_css_named_color_token98] = ACTIONS(99),
    [aux_sym_css_named_color_token99] = ACTIONS(99),
    [aux_sym_css_named_color_token100] = ACTIONS(99),
    [aux_sym_css_named_color_token101] = ACTIONS(99),
    [aux_sym_css_named_color_token102] = ACTIONS(99),
    [aux_sym_css_named_color_token103] = ACTIONS(99),
    [aux_sym_css_named_color_token104] = ACTIONS(101),
    [aux_sym_css_named_color_token105] = ACTIONS(99),
    [aux_sym_css_named_color_token106] = ACTIONS(101),
    [aux_sym_css_named_color_token107] = ACTIONS(99),
    [aux_sym_css_named_color_token108] = ACTIONS(99),
    [aux_sym_css_named_color_token109] = ACTIONS(99),
    [aux_sym_css_named_color_token110] = ACTIONS(99),
    [aux_sym_css_named_color_token111] = ACTIONS(99),
    [aux_sym_css_named_color_token112] = ACTIONS(99),
    [aux_sym_css_named_color_token113] = ACTIONS(99),
    [aux_sym_css_named_color_token114] = ACTIONS(99),
    [aux_sym_css_named_color_token115] = ACTIONS(99),
    [aux_sym_css_named_color_token116] = ACTIONS(99),
    [aux_sym_css_named_color_token117] = ACTIONS(99),
    [aux_sym_css_named_color_token118] = ACTIONS(99),
    [aux_sym_css_named_color_token119] = ACTIONS(99),
    [aux_sym_css_named_color_token120] = ACTIONS(99),
    [aux_sym_css_named_color_token121] = ACTIONS(99),
    [aux_sym_css_named_color_token122] = ACTIONS(99),
    [aux_sym_css_named_color_token123] = ACTIONS(99),
    [aux_sym_css_named_color_token124] = ACTIONS(99),
    [aux_sym_css_named_color_token125] = ACTIONS(99),
    [aux_sym_css_named_color_token126] = ACTIONS(99),
    [aux_sym_css_named_color_token127] = ACTIONS(99),
    [aux_sym_css_named_color_token128] = ACTIONS(99),
    [aux_sym_css_named_color_token129] = ACTIONS(99),
    [aux_sym_css_named_color_token130] = ACTIONS(99),
    [aux_sym_css_named_color_token131] = ACTIONS(99),
    [aux_sym_css_named_color_token132] = ACTIONS(99),
    [aux_sym_css_named_color_token133] = ACTIONS(99),
    [aux_sym_css_named_color_token134] = ACTIONS(99),
    [aux_sym_css_named_color_token135] = ACTIONS(99),
    [aux_sym_css_named_color_token136] = ACTIONS(99),
    [aux_sym_css_named_color_token137] = ACTIONS(99),
    [aux_sym_css_named_color_token138] = ACTIONS(99),
    [aux_sym_css_named_color_token139] = ACTIONS(99),
    [aux_sym_css_named_color_token140] = ACTIONS(99),
    [aux_sym_css_named_color_token141] = ACTIONS(99),
    [aux_sym_css_named_color_token142] = ACTIONS(99),
    [aux_sym_css_named_color_token143] = ACTIONS(99),
    [aux_sym_css_named_color_token144] = ACTIONS(99),
    [aux_sym_css_named_color_token145] = ACTIONS(101),
    [aux_sym_css_named_color_token146] = ACTIONS(99),
    [aux_sym_css_named_color_token147] = ACTIONS(101),
    [aux_sym_css_named_color_token148] = ACTIONS(99),
    [sym_css_keyword_transparent] = ACTIONS(99),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(105),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(103),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(105),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(103),
    [aux_sym_css_function_hwb_token1] = ACTIONS(103),
    [aux_sym_css_function_lab_token1] = ACTIONS(103),
    [aux_sym_css_function_oklab_token1] = ACTIONS(103),
    [sym_css_hex_color_6_digits] = ACTIONS(105),
    [sym_css_hex_color_8_digits] = ACTIONS(103),
    [sym_css_hex_color_3_digits] = ACTIONS(105),
    [sym_css_hex_color_4_digits] = ACTIONS(105),
    [aux_sym_css_named_color_token1] = ACTIONS(103),
    [aux_sym_css_named_color_token2] = ACTIONS(103),
    [aux_sym_css_named_color_token3] = ACTIONS(105),
    [aux_sym_css_named_color_token4] = ACTIONS(103),
    [aux_sym_css_named_color_token5] = ACTIONS(103),
    [aux_sym_css_named_color_token6] = ACTIONS(103),
    [aux_sym_css_named_color_token7] = ACTIONS(103),
    [aux_sym_css_named_color_token8] = ACTIONS(103),
    [aux_sym_css_named_color_token9] = ACTIONS(103),
    [aux_sym_css_named_color_token10] = ACTIONS(105),
    [aux_sym_css_named_color_token11] = ACTIONS(103),
    [aux_sym_css_named_color_token12] = ACTIONS(103),
    [aux_sym_css_named_color_token13] = ACTIONS(103),
    [aux_sym_css_named_color_token14] = ACTIONS(103),
    [aux_sym_css_named_color_token15] = ACTIONS(103),
    [aux_sym_css_named_color_token16] = ACTIONS(103),
    [aux_sym_css_named_color_token17] = ACTIONS(103),
    [aux_sym_css_named_color_token18] = ACTIONS(103),
    [aux_sym_css_named_color_token19] = ACTIONS(103),
    [aux_sym_css_named_color_token20] = ACTIONS(103),
    [aux_sym_css_named_color_token21] = ACTIONS(103),
    [aux_sym_css_named_color_token22] = ACTIONS(103),
    [aux_sym_css_named_color_token23] = ACTIONS(103),
    [aux_sym_css_named_color_token24] = ACTIONS(103),
    [aux_sym_css_named_color_token25] = ACTIONS(103),
    [aux_sym_css_named_color_token26] = ACTIONS(103),
    [aux_sym_css_named_color_token27] = ACTIONS(103),
    [aux_sym_css_named_color_token28] = ACTIONS(103),
    [aux_sym_css_named_color_token29] = ACTIONS(103),
    [aux_sym_css_named_color_token30] = ACTIONS(103),
    [aux_sym_css_named_color_token31] = ACTIONS(103),
    [aux_sym_css_named_color_token32] = ACTIONS(103),
    [aux_sym_css_named_color_token33] = ACTIONS(103),
    [aux_sym_css_named_color_token34] = ACTIONS(103),
    [aux_sym_css_named_color_token35] = ACTIONS(103),
    [aux_sym_css_named_color_token36] = ACTIONS(103),
    [aux_sym_css_named_color_token37] = ACTIONS(103),
    [aux_sym_css_named_color_token38] = ACTIONS(103),
    [aux_sym_css_named_color_token39] = ACTIONS(103),
    [aux_sym_css_named_color_token40] = ACTIONS(103),
    [aux_sym_css_named_color_token41] = ACTIONS(103),
    [aux_sym_css_named_color_token42] = ACTIONS(103),
    [aux_sym_css_named_color_token43] = ACTIONS(103),
    [aux_sym_css_named_color_token44] = ACTIONS(103),
    [aux_sym_css_named_color_token45] = ACTIONS(103),
    [aux_sym_css_named_color_token46] = ACTIONS(103),
    [aux_sym_css_named_color_token47] = ACTIONS(103),
    [aux_sym_css_named_color_token48] = ACTIONS(103),
    [aux_sym_css_named_color_token49] = ACTIONS(103),
    [aux_sym_css_named_color_token50] = ACTIONS(103),
    [aux_sym_css_named_color_token51] = ACTIONS(103),
    [aux_sym_css_named_color_token52] = ACTIONS(105),
    [aux_sym_css_named_color_token53] = ACTIONS(103),
    [aux_sym_css_named_color_token54] = ACTIONS(103),
    [aux_sym_css_named_color_token55] = ACTIONS(105),
    [aux_sym_css_named_color_token56] = ACTIONS(103),
    [aux_sym_css_named_color_token57] = ACTIONS(103),
    [aux_sym_css_named_color_token58] = ACTIONS(103),
    [aux_sym_css_named_color_token59] = ACTIONS(103),
    [aux_sym_css_named_color_token60] = ACTIONS(103),
    [aux_sym_css_named_color_token61] = ACTIONS(103),
    [aux_sym_css_named_color_token62] = ACTIONS(103),
    [aux_sym_css_named_color_token63] = ACTIONS(103),
    [aux_sym_css_named_color_token64] = ACTIONS(105),
    [aux_sym_css_named_color_token65] = ACTIONS(103),
    [aux_sym_css_named_color_token66] = ACTIONS(103),
    [aux_sym_css_named_color_token67] = ACTIONS(103),
    [aux_sym_css_named_color_token68] = ACTIONS(103),
    [aux_sym_css_named_color_token69] = ACTIONS(103),
    [aux_sym_css_named_color_token70] = ACTIONS(103),
    [aux_sym_css_named_color_token71] = ACTIONS(103),
    [aux_sym_css_named_color_token72] = ACTIONS(103),
    [aux_sym_css_named_color_token73] = ACTIONS(103),
    [aux_sym_css_named_color_token74] = ACTIONS(103),
    [aux_sym_css_named_color_token75] = ACTIONS(103),
    [aux_sym_css_named_color_token76] = ACTIONS(103),
    [aux_sym_css_named_color_token77] = ACTIONS(103),
    [aux_sym_css_named_color_token78] = ACTIONS(103),
    [aux_sym_css_named_color_token79] = ACTIONS(103),
    [aux_sym_css_named_color_token80] = ACTIONS(103),
    [aux_sym_css_named_color_token81] = ACTIONS(103),
    [aux_sym_css_named_color_token82] = ACTIONS(103),
    [aux_sym_css_named_color_token83] = ACTIONS(105),
    [aux_sym_css_named_color_token84] = ACTIONS(103),
    [aux_sym_css_named_color_token85] = ACTIONS(103),
    [aux_sym_css_named_color_token86] = ACTIONS(103),
    [aux_sym_css_named_color_token87] = ACTIONS(103),
    [aux_sym_css_named_color_token88] = ACTIONS(103),
    [aux_sym_css_named_color_token89] = ACTIONS(103),
    [aux_sym_css_named_color_token90] = ACTIONS(103),
    [aux_sym_css_named_color_token91] = ACTIONS(103),
    [aux_sym_css_named_color_token92] = ACTIONS(103),
    [aux_sym_css_named_color_token93] = ACTIONS(103),
    [aux_sym_css_named_color_token94] = ACTIONS(103),
    [aux_sym_css_named_color_token95] = ACTIONS(103),
    [aux_sym_css_named_color_token96] = ACTIONS(103),
    [aux_sym_css_named_color_token97] = ACTIONS(103),
    [aux_sym_css_named_color_token98] = ACTIONS(103),
    [aux_sym_css_named_color_token99] = ACTIONS(103),
    [aux_sym_css_named_color_token100] = ACTIONS(103),
    [aux_sym_css_named_color_token101] = ACTIONS(103),
    [aux_sym_css_named_color_token102] = ACTIONS(103),
    [aux_sym_css_named_color_token103] = ACTIONS(103),
    [aux_sym_css_named_color_token104] = ACTIONS(105),
    [aux_sym_css_named_color_token105] = ACTIONS(103),
    [aux_sym_css_named_color_token106] = ACTIONS(105),
    [aux_sym_css_named_color_token107] = ACTIONS(103),
    [aux_sym_css_named_color_token108] = ACTIONS(103),
    [aux_sym_css_named_color_token109] = ACTIONS(103),
    [aux_sym_css_named_color_token110] = ACTIONS(103),
    [aux_sym_css_named_color_token111] = ACTIONS(103),
    [aux_sym_css_named_color_token112] = ACTIONS(103),
    [aux_sym_css_named_color_token113] = ACTIONS(103),
    [aux_sym_css_named_color_token114] = ACTIONS(103),
    [aux_sym_css_named_color_token115] = ACTIONS(103),
    [aux_sym_css_named_color_token116] = ACTIONS(103),
    [aux_sym_css_named_color_token117] = ACTIONS(103),
    [aux_sym_css_named_color_token118] = ACTIONS(103),
    [aux_sym_css_named_color_token119] = ACTIONS(103),
    [aux_sym_css_named_color_token120] = ACTIONS(103),
    [aux_sym_css_named_color_token121] = ACTIONS(103),
    [aux_sym_css_named_color_token122] = ACTIONS(103),
    [aux_sym_css_named_color_token123] = ACTIONS(103),
    [aux_sym_css_named_color_token124] = ACTIONS(103),
    [aux_sym_css_named_color_token125] = ACTIONS(103),
    [aux_sym_css_named_color_token126] = ACTIONS(103),
    [aux_sym_css_named_color_token127] = ACTIONS(103),
    [aux_sym_css_named_color_token128] = ACTIONS(103),
    [aux_sym_css_named_color_token129] = ACTIONS(103),
    [aux_sym_css_named_color_token130] = ACTIONS(103),
    [aux_sym_css_named_color_token131] = ACTIONS(103),
    [aux_sym_css_named_color_token132] = ACTIONS(103),
    [aux_sym_css_named_color_token133] = ACTIONS(103),
    [aux_sym_css_named_color_token134] = ACTIONS(103),
    [aux_sym_css_named_color_token135] = ACTIONS(103),
    [aux_sym_css_named_color_token136] = ACTIONS(103),
    [aux_sym_css_named_color_token137] = ACTIONS(103),
    [aux_sym_css_named_color_token138] = ACTIONS(103),
    [aux_sym_css_named_color_token139] = ACTIONS(103),
    [aux_sym_css_named_color_token140] = ACTIONS(103),
    [aux_sym_css_named_color_token141] = ACTIONS(103),
    [aux_sym_css_named_color_token142] = ACTIONS(103),
    [aux_sym_css_named_color_token143] = ACTIONS(103),
    [aux_sym_css_named_color_token144] = ACTIONS(103),
    [aux_sym_css_named_color_token145] = ACTIONS(105),
    [aux_sym_css_named_color_token146] = ACTIONS(103),
    [aux_sym_css_named_color_token147] = ACTIONS(105),
    [aux_sym_css_named_color_token148] = ACTIONS(103),
    [sym_css_keyword_transparent] = ACTIONS(103),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(109),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(107),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(109),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(107),
    [aux_sym_css_function_hwb_token1] = ACTIONS(107),
    [aux_sym_css_function_lab_token1] = ACTIONS(107),
    [aux_sym_css_function_oklab_token1] = ACTIONS(107),
    [sym_css_hex_color_6_digits] = ACTIONS(109),
    [sym_css_hex_color_8_digits] = ACTIONS(107),
    [sym_css_hex_color_3_digits] = ACTIONS(109),
    [sym_css_hex_color_4_digits] = ACTIONS(109),
    [aux_sym_css_named_color_token1] = ACTIONS(107),
    [aux_sym_css_named_color_token2] = ACTIONS(107),
    [aux_sym_css_named_color_token3] = ACTIONS(109),
    [aux_sym_css_named_color_token4] = ACTIONS(107),
    [aux_sym_css_named_color_token5] = ACTIONS(107),
    [aux_sym_css_named_color_token6] = ACTIONS(107),
    [aux_sym_css_named_color_token7] = ACTIONS(107),
    [aux_sym_css_named_color_token8] = ACTIONS(107),
    [aux_sym_css_named_color_token9] = ACTIONS(107),
    [aux_sym_css_named_color_token10] = ACTIONS(109),
    [aux_sym_css_named_color_token11] = ACTIONS(107),
    [aux_sym_css_named_color_token12] = ACTIONS(107),
    [aux_sym_css_named_color_token13] = ACTIONS(107),
    [aux_sym_css_named_color_token14] = ACTIONS(107),
    [aux_sym_css_named_color_token15] = ACTIONS(107),
    [aux_sym_css_named_color_token16] = ACTIONS(107),
    [aux_sym_css_named_color_token17] = ACTIONS(107),
    [aux_sym_css_named_color_token18] = ACTIONS(107),
    [aux_sym_css_named_color_token19] = ACTIONS(107),
    [aux_sym_css_named_color_token20] = ACTIONS(107),
    [aux_sym_css_named_color_token21] = ACTIONS(107),
    [aux_sym_css_named_color_token22] = ACTIONS(107),
    [aux_sym_css_named_color_token23] = ACTIONS(107),
    [aux_sym_css_named_color_token24] = ACTIONS(107),
    [aux_sym_css_named_color_token25] = ACTIONS(107),
    [aux_sym_css_named_color_token26] = ACTIONS(107),
    [aux_sym_css_named_color_token27] = ACTIONS(107),
    [aux_sym_css_named_color_token28] = ACTIONS(107),
    [aux_sym_css_named_color_token29] = ACTIONS(107),
    [aux_sym_css_named_color_token30] = ACTIONS(107),
    [aux_sym_css_named_color_token31] = ACTIONS(107),
    [aux_sym_css_named_color_token32] = ACTIONS(107),
    [aux_sym_css_named_color_token33] = ACTIONS(107),
    [aux_sym_css_named_color_token34] = ACTIONS(107),
    [aux_sym_css_named_color_token35] = ACTIONS(107),
    [aux_sym_css_named_color_token36] = ACTIONS(107),
    [aux_sym_css_named_color_token37] = ACTIONS(107),
    [aux_sym_css_named_color_token38] = ACTIONS(107),
    [aux_sym_css_named_color_token39] = ACTIONS(107),
    [aux_sym_css_named_color_token40] = ACTIONS(107),
    [aux_sym_css_named_color_token41] = ACTIONS(107),
    [aux_sym_css_named_color_token42] = ACTIONS(107),
    [aux_sym_css_named_color_token43] = ACTIONS(107),
    [aux_sym_css_named_color_token44] = ACTIONS(107),
    [aux_sym_css_named_color_token45] = ACTIONS(107),
    [aux_sym_css_named_color_token46] = ACTIONS(107),
    [aux_sym_css_named_color_token47] = ACTIONS(107),
    [aux_sym_css_named_color_token48] = ACTIONS(107),
    [aux_sym_css_named_color_token49] = ACTIONS(107),
    [aux_sym_css_named_color_token50] = ACTIONS(107),
    [aux_sym_css_named_color_token51] = ACTIONS(107),
    [aux_sym_css_named_color_token52] = ACTIONS(109),
    [aux_sym_css_named_color_token53] = ACTIONS(107),
    [aux_sym_css_named_color_token54] = ACTIONS(107),
    [aux_sym_css_named_color_token55] = ACTIONS(109),
    [aux_sym_css_named_color_token56] = ACTIONS(107),
    [aux_sym_css_named_color_token57] = ACTIONS(107),
    [aux_sym_css_named_color_token58] = ACTIONS(107),
    [aux_sym_css_named_color_token59] = ACTIONS(107),
    [aux_sym_css_named_color_token60] = ACTIONS(107),
    [aux_sym_css_named_color_token61] = ACTIONS(107),
    [aux_sym_css_named_color_token62] = ACTIONS(107),
    [aux_sym_css_named_color_token63] = ACTIONS(107),
    [aux_sym_css_named_color_token64] = ACTIONS(109),
    [aux_sym_css_named_color_token65] = ACTIONS(107),
    [aux_sym_css_named_color_token66] = ACTIONS(107),
    [aux_sym_css_named_color_token67] = ACTIONS(107),
    [aux_sym_css_named_color_token68] = ACTIONS(107),
    [aux_sym_css_named_color_token69] = ACTIONS(107),
    [aux_sym_css_named_color_token70] = ACTIONS(107),
    [aux_sym_css_named_color_token71] = ACTIONS(107),
    [aux_sym_css_named_color_token72] = ACTIONS(107),
    [aux_sym_css_named_color_token73] = ACTIONS(107),
    [aux_sym_css_named_color_token74] = ACTIONS(107),
    [aux_sym_css_named_color_token75] = ACTIONS(107),
    [aux_sym_css_named_color_token76] = ACTIONS(107),
    [aux_sym_css_named_color_token77] = ACTIONS(107),
    [aux_sym_css_named_color_token78] = ACTIONS(107),
    [aux_sym_css_named_color_token79] = ACTIONS(107),
    [aux_sym_css_named_color_token80] = ACTIONS(107),
    [aux_sym_css_named_color_token81] = ACTIONS(107),
    [aux_sym_css_named_color_token82] = ACTIONS(107),
    [aux_sym_css_named_color_token83] = ACTIONS(109),
    [aux_sym_css_named_color_token84] = ACTIONS(107),
    [aux_sym_css_named_color_token85] = ACTIONS(107),
    [aux_sym_css_named_color_token86] = ACTIONS(107),
    [aux_sym_css_named_color_token87] = ACTIONS(107),
    [aux_sym_css_named_color_token88] = ACTIONS(107),
    [aux_sym_css_named_color_token89] = ACTIONS(107),
    [aux_sym_css_named_color_token90] = ACTIONS(107),
    [aux_sym_css_named_color_token91] = ACTIONS(107),
    [aux_sym_css_named_color_token92] = ACTIONS(107),
    [aux_sym_css_named_color_token93] = ACTIONS(107),
    [aux_sym_css_named_color_token94] = ACTIONS(107),
    [aux_sym_css_named_color_token95] = ACTIONS(107),
    [aux_sym_css_named_color_token96] = ACTIONS(107),
    [aux_sym_css_named_color_token97] = ACTIONS(107),
    [aux_sym_css_named_color_token98] = ACTIONS(107),
    [aux_sym_css_named_color_token99] = ACTIONS(107),
    [aux_sym_css_named_color_token100] = ACTIONS(107),
    [aux_sym_css_named_color_token101] = ACTIONS(107),
    [aux_sym_css_named_color_token102] = ACTIONS(107),
    [aux_sym_css_named_color_token103] = ACTIONS(107),
    [aux_sym_css_named_color_token104] = ACTIONS(109),
    [aux_sym_css_named_color_token105] = ACTIONS(107),
    [aux_sym_css_named_color_token106] = ACTIONS(109),
    [aux_sym_css_named_color_token107] = ACTIONS(107),
    [aux_sym_css_named_color_token108] = ACTIONS(107),
    [aux_sym_css_named_color_token109] = ACTIONS(107),
    [aux_sym_css_named_color_token110] = ACTIONS(107),
    [aux_sym_css_named_color_token111] = ACTIONS(107),
    [aux_sym_css_named_color_token112] = ACTIONS(107),
    [aux_sym_css_named_color_token113] = ACTIONS(107),
    [aux_sym_css_named_color_token114] = ACTIONS(107),
    [aux_sym_css_named_color_token115] = ACTIONS(107),
    [aux_sym_css_named_color_token116] = ACTIONS(107),
    [aux_sym_css_named_color_token117] = ACTIONS(107),
    [aux_sym_css_named_color_token118] = ACTIONS(107),
    [aux_sym_css_named_color_token119] = ACTIONS(107),
    [aux_sym_css_named_color_token120] = ACTIONS(107),
    [aux_sym_css_named_color_token121] = ACTIONS(107),
    [aux_sym_css_named_color_token122] = ACTIONS(107),
    [aux_sym_css_named_color_token123] = ACTIONS(107),
    [aux_sym_css_named_color_token124] = ACTIONS(107),
    [aux_sym_css_named_color_token125] = ACTIONS(107),
    [aux_sym_css_named_color_token126] = ACTIONS(107),
    [aux_sym_css_named_color_token127] = ACTIONS(107),
    [aux_sym_css_named_color_token128] = ACTIONS(107),
    [aux_sym_css_named_color_token129] = ACTIONS(107),
    [aux_sym_css_named_color_token130] = ACTIONS(107),
    [aux_sym_css_named_color_token131] = ACTIONS(107),
    [aux_sym_css_named_color_token132] = ACTIONS(107),
    [aux_sym_css_named_color_token133] = ACTIONS(107),
    [aux_sym_css_named_color_token134] = ACTIONS(107),
    [aux_sym_css_named_color_token135] = ACTIONS(107),
    [aux_sym_css_named_color_token136] = ACTIONS(107),
    [aux_sym_css_named_color_token137] = ACTIONS(107),
    [aux_sym_css_named_color_token138] = ACTIONS(107),
    [aux_sym_css_named_color_token139] = ACTIONS(107),
    [aux_sym_css_named_color_token140] = ACTIONS(107),
    [aux_sym_css_named_color_token141] = ACTIONS(107),
    [aux_sym_css_named_color_token142] = ACTIONS(107),
    [aux_sym_css_named_color_token143] = ACTIONS(107),
    [aux_sym_css_named_color_token144] = ACTIONS(107),
    [aux_sym_css_named_color_token145] = ACTIONS(109),
    [aux_sym_css_named_color_token146] = ACTIONS(107),
    [aux_sym_css_named_color_token147] = ACTIONS(109),
    [aux_sym_css_named_color_token148] = ACTIONS(107),
    [sym_css_keyword_transparent] = ACTIONS(107),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(113),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(111),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(113),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(111),
    [aux_sym_css_function_hwb_token1] = ACTIONS(111),
    [aux_sym_css_function_lab_token1] = ACTIONS(111),
    [aux_sym_css_function_oklab_token1] = ACTIONS(111),
    [sym_css_hex_color_6_digits] = ACTIONS(113),
    [sym_css_hex_color_8_digits] = ACTIONS(111),
    [sym_css_hex_color_3_digits] = ACTIONS(113),
    [sym_css_hex_color_4_digits] = ACTIONS(113),
    [aux_sym_css_named_color_token1] = ACTIONS(111),
    [aux_sym_css_named_color_token2] = ACTIONS(111),
    [aux_sym_css_named_color_token3] = ACTIONS(113),
    [aux_sym_css_named_color_token4] = ACTIONS(111),
    [aux_sym_css_named_color_token5] = ACTIONS(111),
    [aux_sym_css_named_color_token6] = ACTIONS(111),
    [aux_sym_css_named_color_token7] = ACTIONS(111),
    [aux_sym_css_named_color_token8] = ACTIONS(111),
    [aux_sym_css_named_color_token9] = ACTIONS(111),
    [aux_sym_css_named_color_token10] = ACTIONS(113),
    [aux_sym_css_named_color_token11] = ACTIONS(111),
    [aux_sym_css_named_color_token12] = ACTIONS(111),
    [aux_sym_css_named_color_token13] = ACTIONS(111),
    [aux_sym_css_named_color_token14] = ACTIONS(111),
    [aux_sym_css_named_color_token15] = ACTIONS(111),
    [aux_sym_css_named_color_token16] = ACTIONS(111),
    [aux_sym_css_named_color_token17] = ACTIONS(111),
    [aux_sym_css_named_color_token18] = ACTIONS(111),
    [aux_sym_css_named_color_token19] = ACTIONS(111),
    [aux_sym_css_named_color_token20] = ACTIONS(111),
    [aux_sym_css_named_color_token21] = ACTIONS(111),
    [aux_sym_css_named_color_token22] = ACTIONS(111),
    [aux_sym_css_named_color_token23] = ACTIONS(111),
    [aux_sym_css_named_color_token24] = ACTIONS(111),
    [aux_sym_css_named_color_token25] = ACTIONS(111),
    [aux_sym_css_named_color_token26] = ACTIONS(111),
    [aux_sym_css_named_color_token27] = ACTIONS(111),
    [aux_sym_css_named_color_token28] = ACTIONS(111),
    [aux_sym_css_named_color_token29] = ACTIONS(111),
    [aux_sym_css_named_color_token30] = ACTIONS(111),
    [aux_sym_css_named_color_token31] = ACTIONS(111),
    [aux_sym_css_named_color_token32] = ACTIONS(111),
    [aux_sym_css_named_color_token33] = ACTIONS(111),
    [aux_sym_css_named_color_token34] = ACTIONS(111),
    [aux_sym_css_named_color_token35] = ACTIONS(111),
    [aux_sym_css_named_color_token36] = ACTIONS(111),
    [aux_sym_css_named_color_token37] = ACTIONS(111),
    [aux_sym_css_named_color_token38] = ACTIONS(111),
    [aux_sym_css_named_color_token39] = ACTIONS(111),
    [aux_sym_css_named_color_token40] = ACTIONS(111),
    [aux_sym_css_named_color_token41] = ACTIONS(111),
    [aux_sym_css_named_color_token42] = ACTIONS(111),
    [aux_sym_css_named_color_token43] = ACTIONS(111),
    [aux_sym_css_named_color_token44] = ACTIONS(111),
    [aux_sym_css_named_color_token45] = ACTIONS(111),
    [aux_sym_css_named_color_token46] = ACTIONS(111),
    [aux_sym_css_named_color_token47] = ACTIONS(111),
    [aux_sym_css_named_color_token48] = ACTIONS(111),
    [aux_sym_css_named_color_token49] = ACTIONS(111),
    [aux_sym_css_named_color_token50] = ACTIONS(111),
    [aux_sym_css_named_color_token51] = ACTIONS(111),
    [aux_sym_css_named_color_token52] = ACTIONS(113),
    [aux_sym_css_named_color_token53] = ACTIONS(111),
    [aux_sym_css_named_color_token54] = ACTIONS(111),
    [aux_sym_css_named_color_token55] = ACTIONS(113),
    [aux_sym_css_named_color_token56] = ACTIONS(111),
    [aux_sym_css_named_color_token57] = ACTIONS(111),
    [aux_sym_css_named_color_token58] = ACTIONS(111),
    [aux_sym_css_named_color_token59] = ACTIONS(111),
    [aux_sym_css_named_color_token60] = ACTIONS(111),
    [aux_sym_css_named_color_token61] = ACTIONS(111),
    [aux_sym_css_named_color_token62] = ACTIONS(111),
    [aux_sym_css_named_color_token63] = ACTIONS(111),
    [aux_sym_css_named_color_token64] = ACTIONS(113),
    [aux_sym_css_named_color_token65] = ACTIONS(111),
    [aux_sym_css_named_color_token66] = ACTIONS(111),
    [aux_sym_css_named_color_token67] = ACTIONS(111),
    [aux_sym_css_named_color_token68] = ACTIONS(111),
    [aux_sym_css_named_color_token69] = ACTIONS(111),
    [aux_sym_css_named_color_token70] = ACTIONS(111),
    [aux_sym_css_named_color_token71] = ACTIONS(111),
    [aux_sym_css_named_color_token72] = ACTIONS(111),
    [aux_sym_css_named_color_token73] = ACTIONS(111),
    [aux_sym_css_named_color_token74] = ACTIONS(111),
    [aux_sym_css_named_color_token75] = ACTIONS(111),
    [aux_sym_css_named_color_token76] = ACTIONS(111),
    [aux_sym_css_named_color_token77] = ACTIONS(111),
    [aux_sym_css_named_color_token78] = ACTIONS(111),
    [aux_sym_css_named_color_token79] = ACTIONS(111),
    [aux_sym_css_named_color_token80] = ACTIONS(111),
    [aux_sym_css_named_color_token81] = ACTIONS(111),
    [aux_sym_css_named_color_token82] = ACTIONS(111),
    [aux_sym_css_named_color_token83] = ACTIONS(113),
    [aux_sym_css_named_color_token84] = ACTIONS(111),
    [aux_sym_css_named_color_token85] = ACTIONS(111),
    [aux_sym_css_named_color_token86] = ACTIONS(111),
    [aux_sym_css_named_color_token87] = ACTIONS(111),
    [aux_sym_css_named_color_token88] = ACTIONS(111),
    [aux_sym_css_named_color_token89] = ACTIONS(111),
    [aux_sym_css_named_color_token90] = ACTIONS(111),
    [aux_sym_css_named_color_token91] = ACTIONS(111),
    [aux_sym_css_named_color_token92] = ACTIONS(111),
    [aux_sym_css_named_color_token93] = ACTIONS(111),
    [aux_sym_css_named_color_token94] = ACTIONS(111),
    [aux_sym_css_named_color_token95] = ACTIONS(111),
    [aux_sym_css_named_color_token96] = ACTIONS(111),
    [aux_sym_css_named_color_token97] = ACTIONS(111),
    [aux_sym_css_named_color_token98] = ACTIONS(111),
    [aux_sym_css_named_color_token99] = ACTIONS(111),
    [aux_sym_css_named_color_token100] = ACTIONS(111),
    [aux_sym_css_named_color_token101] = ACTIONS(111),
    [aux_sym_css_named_color_token102] = ACTIONS(111),
    [aux_sym_css_named_color_token103] = ACTIONS(111),
    [aux_sym_css_named_color_token104] = ACTIONS(113),
    [aux_sym_css_named_color_token105] = ACTIONS(111),
    [aux_sym_css_named_color_token106] = ACTIONS(113),
    [aux_sym_css_named_color_token107] = ACTIONS(111),
    [aux_sym_css_named_color_token108] = ACTIONS(111),
    [aux_sym_css_named_color_token109] = ACTIONS(111),
    [aux_sym_css_named_color_token110] = ACTIONS(111),
    [aux_sym_css_named_color_token111] = ACTIONS(111),
    [aux_sym_css_named_color_token112] = ACTIONS(111),
    [aux_sym_css_named_color_token113] = ACTIONS(111),
    [aux_sym_css_named_color_token114] = ACTIONS(111),
    [aux_sym_css_named_color_token115] = ACTIONS(111),
    [aux_sym_css_named_color_token116] = ACTIONS(111),
    [aux_sym_css_named_color_token117] = ACTIONS(111),
    [aux_sym_css_named_color_token118] = ACTIONS(111),
    [aux_sym_css_named_color_token119] = ACTIONS(111),
    [aux_sym_css_named_color_token120] = ACTIONS(111),
    [aux_sym_css_named_color_token121] = ACTIONS(111),
    [aux_sym_css_named_color_token122] = ACTIONS(111),
    [aux_sym_css_named_color_token123] = ACTIONS(111),
    [aux_sym_css_named_color_token124] = ACTIONS(111),
    [aux_sym_css_named_color_token125] = ACTIONS(111),
    [aux_sym_css_named_color_token126] = ACTIONS(111),
    [aux_sym_css_named_color_token127] = ACTIONS(111),
    [aux_sym_css_named_color_token128] = ACTIONS(111),
    [aux_sym_css_named_color_token129] = ACTIONS(111),
    [aux_sym_css_named_color_token130] = ACTIONS(111),
    [aux_sym_css_named_color_token131] = ACTIONS(111),
    [aux_sym_css_named_color_token132] = ACTIONS(111),
    [aux_sym_css_named_color_token133] = ACTIONS(111),
    [aux_sym_css_named_color_token134] = ACTIONS(111),
    [aux_sym_css_named_color_token135] = ACTIONS(111),
    [aux_sym_css_named_color_token136] = ACTIONS(111),
    [aux_sym_css_named_color_token137] = ACTIONS(111),
    [aux_sym_css_named_color_token138] = ACTIONS(111),
    [aux_sym_css_named_color_token139] = ACTIONS(111),
    [aux_sym_css_named_color_token140] = ACTIONS(111),
    [aux_sym_css_named_color_token141] = ACTIONS(111),
    [aux_sym_css_named_color_token142] = ACTIONS(111),
    [aux_sym_css_named_color_token143] = ACTIONS(111),
    [aux_sym_css_named_color_token144] = ACTIONS(111),
    [aux_sym_css_named_color_token145] = ACTIONS(113),
    [aux_sym_css_named_color_token146] = ACTIONS(111),
    [aux_sym_css_named_color_token147] = ACTIONS(113),
    [aux_sym_css_named_color_token148] = ACTIONS(111),
    [sym_css_keyword_transparent] = ACTIONS(111),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(117),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(115),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(117),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(115),
    [aux_sym_css_function_hwb_token1] = ACTIONS(115),
    [aux_sym_css_function_lab_token1] = ACTIONS(115),
    [aux_sym_css_function_oklab_token1] = ACTIONS(115),
    [sym_css_hex_color_6_digits] = ACTIONS(117),
    [sym_css_hex_color_8_digits] = ACTIONS(115),
    [sym_css_hex_color_3_digits] = ACTIONS(117),
    [sym_css_hex_color_4_digits] = ACTIONS(117),
    [aux_sym_css_named_color_token1] = ACTIONS(115),
    [aux_sym_css_named_color_token2] = ACTIONS(115),
    [aux_sym_css_named_color_token3] = ACTIONS(117),
    [aux_sym_css_named_color_token4] = ACTIONS(115),
    [aux_sym_css_named_color_token5] = ACTIONS(115),
    [aux_sym_css_named_color_token6] = ACTIONS(115),
    [aux_sym_css_named_color_token7] = ACTIONS(115),
    [aux_sym_css_named_color_token8] = ACTIONS(115),
    [aux_sym_css_named_color_token9] = ACTIONS(115),
    [aux_sym_css_named_color_token10] = ACTIONS(117),
    [aux_sym_css_named_color_token11] = ACTIONS(115),
    [aux_sym_css_named_color_token12] = ACTIONS(115),
    [aux_sym_css_named_color_token13] = ACTIONS(115),
    [aux_sym_css_named_color_token14] = ACTIONS(115),
    [aux_sym_css_named_color_token15] = ACTIONS(115),
    [aux_sym_css_named_color_token16] = ACTIONS(115),
    [aux_sym_css_named_color_token17] = ACTIONS(115),
    [aux_sym_css_named_color_token18] = ACTIONS(115),
    [aux_sym_css_named_color_token19] = ACTIONS(115),
    [aux_sym_css_named_color_token20] = ACTIONS(115),
    [aux_sym_css_named_color_token21] = ACTIONS(115),
    [aux_sym_css_named_color_token22] = ACTIONS(115),
    [aux_sym_css_named_color_token23] = ACTIONS(115),
    [aux_sym_css_named_color_token24] = ACTIONS(115),
    [aux_sym_css_named_color_token25] = ACTIONS(115),
    [aux_sym_css_named_color_token26] = ACTIONS(115),
    [aux_sym_css_named_color_token27] = ACTIONS(115),
    [aux_sym_css_named_color_token28] = ACTIONS(115),
    [aux_sym_css_named_color_token29] = ACTIONS(115),
    [aux_sym_css_named_color_token30] = ACTIONS(115),
    [aux_sym_css_named_color_token31] = ACTIONS(115),
    [aux_sym_css_named_color_token32] = ACTIONS(115),
    [aux_sym_css_named_color_token33] = ACTIONS(115),
    [aux_sym_css_named_color_token34] = ACTIONS(115),
    [aux_sym_css_named_color_token35] = ACTIONS(115),
    [aux_sym_css_named_color_token36] = ACTIONS(115),
    [aux_sym_css_named_color_token37] = ACTIONS(115),
    [aux_sym_css_named_color_token38] = ACTIONS(115),
    [aux_sym_css_named_color_token39] = ACTIONS(115),
    [aux_sym_css_named_color_token40] = ACTIONS(115),
    [aux_sym_css_named_color_token41] = ACTIONS(115),
    [aux_sym_css_named_color_token42] = ACTIONS(115),
    [aux_sym_css_named_color_token43] = ACTIONS(115),
    [aux_sym_css_named_color_token44] = ACTIONS(115),
    [aux_sym_css_named_color_token45] = ACTIONS(115),
    [aux_sym_css_named_color_token46] = ACTIONS(115),
    [aux_sym_css_named_color_token47] = ACTIONS(115),
    [aux_sym_css_named_color_token48] = ACTIONS(115),
    [aux_sym_css_named_color_token49] = ACTIONS(115),
    [aux_sym_css_named_color_token50] = ACTIONS(115),
    [aux_sym_css_named_color_token51] = ACTIONS(115),
    [aux_sym_css_named_color_token52] = ACTIONS(117),
    [aux_sym_css_named_color_token53] = ACTIONS(115),
    [aux_sym_css_named_color_token54] = ACTIONS(115),
    [aux_sym_css_named_color_token55] = ACTIONS(117),
    [aux_sym_css_named_color_token56] = ACTIONS(115),
    [aux_sym_css_named_color_token57] = ACTIONS(115),
    [aux_sym_css_named_color_token58] = ACTIONS(115),
    [aux_sym_css_named_color_token59] = ACTIONS(115),
    [aux_sym_css_named_color_token60] = ACTIONS(115),
    [aux_sym_css_named_color_token61] = ACTIONS(115),
    [aux_sym_css_named_color_token62] = ACTIONS(115),
    [aux_sym_css_named_color_token63] = ACTIONS(115),
    [aux_sym_css_named_color_token64] = ACTIONS(117),
    [aux_sym_css_named_color_token65] = ACTIONS(115),
    [aux_sym_css_named_color_token66] = ACTIONS(115),
    [aux_sym_css_named_color_token67] = ACTIONS(115),
    [aux_sym_css_named_color_token68] = ACTIONS(115),
    [aux_sym_css_named_color_token69] = ACTIONS(115),
    [aux_sym_css_named_color_token70] = ACTIONS(115),
    [aux_sym_css_named_color_token71] = ACTIONS(115),
    [aux_sym_css_named_color_token72] = ACTIONS(115),
    [aux_sym_css_named_color_token73] = ACTIONS(115),
    [aux_sym_css_named_color_token74] = ACTIONS(115),
    [aux_sym_css_named_color_token75] = ACTIONS(115),
    [aux_sym_css_named_color_token76] = ACTIONS(115),
    [aux_sym_css_named_color_token77] = ACTIONS(115),
    [aux_sym_css_named_color_token78] = ACTIONS(115),
    [aux_sym_css_named_color_token79] = ACTIONS(115),
    [aux_sym_css_named_color_token80] = ACTIONS(115),
    [aux_sym_css_named_color_token81] = ACTIONS(115),
    [aux_sym_css_named_color_token82] = ACTIONS(115),
    [aux_sym_css_named_color_token83] = ACTIONS(117),
    [aux_sym_css_named_color_token84] = ACTIONS(115),
    [aux_sym_css_named_color_token85] = ACTIONS(115),
    [aux_sym_css_named_color_token86] = ACTIONS(115),
    [aux_sym_css_named_color_token87] = ACTIONS(115),
    [aux_sym_css_named_color_token88] = ACTIONS(115),
    [aux_sym_css_named_color_token89] = ACTIONS(115),
    [aux_sym_css_named_color_token90] = ACTIONS(115),
    [aux_sym_css_named_color_token91] = ACTIONS(115),
    [aux_sym_css_named_color_token92] = ACTIONS(115),
    [aux_sym_css_named_color_token93] = ACTIONS(115),
    [aux_sym_css_named_color_token94] = ACTIONS(115),
    [aux_sym_css_named_color_token95] = ACTIONS(115),
    [aux_sym_css_named_color_token96] = ACTIONS(115),
    [aux_sym_css_named_color_token97] = ACTIONS(115),
    [aux_sym_css_named_color_token98] = ACTIONS(115),
    [aux_sym_css_named_color_token99] = ACTIONS(115),
    [aux_sym_css_named_color_token100] = ACTIONS(115),
    [aux_sym_css_named_color_token101] = ACTIONS(115),
    [aux_sym_css_named_color_token102] = ACTIONS(115),
    [aux_sym_css_named_color_token103] = ACTIONS(115),
    [aux_sym_css_named_color_token104] = ACTIONS(117),
    [aux_sym_css_named_color_token105] = ACTIONS(115),
    [aux_sym_css_named_color_token106] = ACTIONS(117),
    [aux_sym_css_named_color_token107] = ACTIONS(115),
    [aux_sym_css_named_color_token108] = ACTIONS(115),
    [aux_sym_css_named_color_token109] = ACTIONS(115),
    [aux_sym_css_named_color_token110] = ACTIONS(115),
    [aux_sym_css_named_color_token111] = ACTIONS(115),
    [aux_sym_css_named_color_token112] = ACTIONS(115),
    [aux_sym_css_named_color_token113] = ACTIONS(115),
    [aux_sym_css_named_color_token114] = ACTIONS(115),
    [aux_sym_css_named_color_token115] = ACTIONS(115),
    [aux_sym_css_named_color_token116] = ACTIONS(115),
    [aux_sym_css_named_color_token117] = ACTIONS(115),
    [aux_sym_css_named_color_token118] = ACTIONS(115),
    [aux_sym_css_named_color_token119] = ACTIONS(115),
    [aux_sym_css_named_color_token120] = ACTIONS(115),
    [aux_sym_css_named_color_token121] = ACTIONS(115),
    [aux_sym_css_named_color_token122] = ACTIONS(115),
    [aux_sym_css_named_color_token123] = ACTIONS(115),
    [aux_sym_css_named_color_token124] = ACTIONS(115),
    [aux_sym_css_named_color_token125] = ACTIONS(115),
    [aux_sym_css_named_color_token126] = ACTIONS(115),
    [aux_sym_css_named_color_token127] = ACTIONS(115),
    [aux_sym_css_named_color_token128] = ACTIONS(115),
    [aux_sym_css_named_color_token129] = ACTIONS(115),
    [aux_sym_css_named_color_token130] = ACTIONS(115),
    [aux_sym_css_named_color_token131] = ACTIONS(115),
    [aux_sym_css_named_color_token132] = ACTIONS(115),
    [aux_sym_css_named_color_token133] = ACTIONS(115),
    [aux_sym_css_named_color_token134] = ACTIONS(115),
    [aux_sym_css_named_color_token135] = ACTIONS(115),
    [aux_sym_css_named_color_token136] = ACTIONS(115),
    [aux_sym_css_named_color_token137] = ACTIONS(115),
    [aux_sym_css_named_color_token138] = ACTIONS(115),
    [aux_sym_css_named_color_token139] = ACTIONS(115),
    [aux_sym_css_named_color_token140] = ACTIONS(115),
    [aux_sym_css_named_color_token141] = ACTIONS(115),
    [aux_sym_css_named_color_token142] = ACTIONS(115),
    [aux_sym_css_named_color_token143] = ACTIONS(115),
    [aux_sym_css_named_color_token144] = ACTIONS(115),
    [aux_sym_css_named_color_token145] = ACTIONS(117),
    [aux_sym_css_named_color_token146] = ACTIONS(115),
    [aux_sym_css_named_color_token147] = ACTIONS(117),
    [aux_sym_css_named_color_token148] = ACTIONS(115),
    [sym_css_keyword_transparent] = ACTIONS(115),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(121),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(119),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(121),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(119),
    [aux_sym_css_function_hwb_token1] = ACTIONS(119),
    [aux_sym_css_function_lab_token1] = ACTIONS(119),
    [aux_sym_css_function_oklab_token1] = ACTIONS(119),
    [sym_css_hex_color_6_digits] = ACTIONS(121),
    [sym_css_hex_color_8_digits] = ACTIONS(119),
    [sym_css_hex_color_3_digits] = ACTIONS(121),
    [sym_css_hex_color_4_digits] = ACTIONS(121),
    [aux_sym_css_named_color_token1] = ACTIONS(119),
    [aux_sym_css_named_color_token2] = ACTIONS(119),
    [aux_sym_css_named_color_token3] = ACTIONS(121),
    [aux_sym_css_named_color_token4] = ACTIONS(119),
    [aux_sym_css_named_color_token5] = ACTIONS(119),
    [aux_sym_css_named_color_token6] = ACTIONS(119),
    [aux_sym_css_named_color_token7] = ACTIONS(119),
    [aux_sym_css_named_color_token8] = ACTIONS(119),
    [aux_sym_css_named_color_token9] = ACTIONS(119),
    [aux_sym_css_named_color_token10] = ACTIONS(121),
    [aux_sym_css_named_color_token11] = ACTIONS(119),
    [aux_sym_css_named_color_token12] = ACTIONS(119),
    [aux_sym_css_named_color_token13] = ACTIONS(119),
    [aux_sym_css_named_color_token14] = ACTIONS(119),
    [aux_sym_css_named_color_token15] = ACTIONS(119),
    [aux_sym_css_named_color_token16] = ACTIONS(119),
    [aux_sym_css_named_color_token17] = ACTIONS(119),
    [aux_sym_css_named_color_token18] = ACTIONS(119),
    [aux_sym_css_named_color_token19] = ACTIONS(119),
    [aux_sym_css_named_color_token20] = ACTIONS(119),
    [aux_sym_css_named_color_token21] = ACTIONS(119),
    [aux_sym_css_named_color_token22] = ACTIONS(119),
    [aux_sym_css_named_color_token23] = ACTIONS(119),
    [aux_sym_css_named_color_token24] = ACTIONS(119),
    [aux_sym_css_named_color_token25] = ACTIONS(119),
    [aux_sym_css_named_color_token26] = ACTIONS(119),
    [aux_sym_css_named_color_token27] = ACTIONS(119),
    [aux_sym_css_named_color_token28] = ACTIONS(119),
    [aux_sym_css_named_color_token29] = ACTIONS(119),
    [aux_sym_css_named_color_token30] = ACTIONS(119),
    [aux_sym_css_named_color_token31] = ACTIONS(119),
    [aux_sym_css_named_color_token32] = ACTIONS(119),
    [aux_sym_css_named_color_token33] = ACTIONS(119),
    [aux_sym_css_named_color_token34] = ACTIONS(119),
    [aux_sym_css_named_color_token35] = ACTIONS(119),
    [aux_sym_css_named_color_token36] = ACTIONS(119),
    [aux_sym_css_named_color_token37] = ACTIONS(119),
    [aux_sym_css_named_color_token38] = ACTIONS(119),
    [aux_sym_css_named_color_token39] = ACTIONS(119),
    [aux_sym_css_named_color_token40] = ACTIONS(119),
    [aux_sym_css_named_color_token41] = ACTIONS(119),
    [aux_sym_css_named_color_token42] = ACTIONS(119),
    [aux_sym_css_named_color_token43] = ACTIONS(119),
    [aux_sym_css_named_color_token44] = ACTIONS(119),
    [aux_sym_css_named_color_token45] = ACTIONS(119),
    [aux_sym_css_named_color_token46] = ACTIONS(119),
    [aux_sym_css_named_color_token47] = ACTIONS(119),
    [aux_sym_css_named_color_token48] = ACTIONS(119),
    [aux_sym_css_named_color_token49] = ACTIONS(119),
    [aux_sym_css_named_color_token50] = ACTIONS(119),
    [aux_sym_css_named_color_token51] = ACTIONS(119),
    [aux_sym_css_named_color_token52] = ACTIONS(121),
    [aux_sym_css_named_color_token53] = ACTIONS(119),
    [aux_sym_css_named_color_token54] = ACTIONS(119),
    [aux_sym_css_named_color_token55] = ACTIONS(121),
    [aux_sym_css_named_color_token56] = ACTIONS(119),
    [aux_sym_css_named_color_token57] = ACTIONS(119),
    [aux_sym_css_named_color_token58] = ACTIONS(119),
    [aux_sym_css_named_color_token59] = ACTIONS(119),
    [aux_sym_css_named_color_token60] = ACTIONS(119),
    [aux_sym_css_named_color_token61] = ACTIONS(119),
    [aux_sym_css_named_color_token62] = ACTIONS(119),
    [aux_sym_css_named_color_token63] = ACTIONS(119),
    [aux_sym_css_named_color_token64] = ACTIONS(121),
    [aux_sym_css_named_color_token65] = ACTIONS(119),
    [aux_sym_css_named_color_token66] = ACTIONS(119),
    [aux_sym_css_named_color_token67] = ACTIONS(119),
    [aux_sym_css_named_color_token68] = ACTIONS(119),
    [aux_sym_css_named_color_token69] = ACTIONS(119),
    [aux_sym_css_named_color_token70] = ACTIONS(119),
    [aux_sym_css_named_color_token71] = ACTIONS(119),
    [aux_sym_css_named_color_token72] = ACTIONS(119),
    [aux_sym_css_named_color_token73] = ACTIONS(119),
    [aux_sym_css_named_color_token74] = ACTIONS(119),
    [aux_sym_css_named_color_token75] = ACTIONS(119),
    [aux_sym_css_named_color_token76] = ACTIONS(119),
    [aux_sym_css_named_color_token77] = ACTIONS(119),
    [aux_sym_css_named_color_token78] = ACTIONS(119),
    [aux_sym_css_named_color_token79] = ACTIONS(119),
    [aux_sym_css_named_color_token80] = ACTIONS(119),
    [aux_sym_css_named_color_token81] = ACTIONS(119),
    [aux_sym_css_named_color_token82] = ACTIONS(119),
    [aux_sym_css_named_color_token83] = ACTIONS(121),
    [aux_sym_css_named_color_token84] = ACTIONS(119),
    [aux_sym_css_named_color_token85] = ACTIONS(119),
    [aux_sym_css_named_color_token86] = ACTIONS(119),
    [aux_sym_css_named_color_token87] = ACTIONS(119),
    [aux_sym_css_named_color_token88] = ACTIONS(119),
    [aux_sym_css_named_color_token89] = ACTIONS(119),
    [aux_sym_css_named_color_token90] = ACTIONS(119),
    [aux_sym_css_named_color_token91] = ACTIONS(119),
    [aux_sym_css_named_color_token92] = ACTIONS(119),
    [aux_sym_css_named_color_token93] = ACTIONS(119),
    [aux_sym_css_named_color_token94] = ACTIONS(119),
    [aux_sym_css_named_color_token95] = ACTIONS(119),
    [aux_sym_css_named_color_token96] = ACTIONS(119),
    [aux_sym_css_named_color_token97] = ACTIONS(119),
    [aux_sym_css_named_color_token98] = ACTIONS(119),
    [aux_sym_css_named_color_token99] = ACTIONS(119),
    [aux_sym_css_named_color_token100] = ACTIONS(119),
    [aux_sym_css_named_color_token101] = ACTIONS(119),
    [aux_sym_css_named_color_token102] = ACTIONS(119),
    [aux_sym_css_named_color_token103] = ACTIONS(119),
    [aux_sym_css_named_color_token104] = ACTIONS(121),
    [aux_sym_css_named_color_token105] = ACTIONS(119),
    [aux_sym_css_named_color_token106] = ACTIONS(121),
    [aux_sym_css_named_color_token107] = ACTIONS(119),
    [aux_sym_css_named_color_token108] = ACTIONS(119),
    [aux_sym_css_named_color_token109] = ACTIONS(119),
    [aux_sym_css_named_color_token110] = ACTIONS(119),
    [aux_sym_css_named_color_token111] = ACTIONS(119),
    [aux_sym_css_named_color_token112] = ACTIONS(119),
    [aux_sym_css_named_color_token113] = ACTIONS(119),
    [aux_sym_css_named_color_token114] = ACTIONS(119),
    [aux_sym_css_named_color_token115] = ACTIONS(119),
    [aux_sym_css_named_color_token116] = ACTIONS(119),
    [aux_sym_css_named_color_token117] = ACTIONS(119),
    [aux_sym_css_named_color_token118] = ACTIONS(119),
    [aux_sym_css_named_color_token119] = ACTIONS(119),
    [aux_sym_css_named_color_token120] = ACTIONS(119),
    [aux_sym_css_named_color_token121] = ACTIONS(119),
    [aux_sym_css_named_color_token122] = ACTIONS(119),
    [aux_sym_css_named_color_token123] = ACTIONS(119),
    [aux_sym_css_named_color_token124] = ACTIONS(119),
    [aux_sym_css_named_color_token125] = ACTIONS(119),
    [aux_sym_css_named_color_token126] = ACTIONS(119),
    [aux_sym_css_named_color_token127] = ACTIONS(119),
    [aux_sym_css_named_color_token128] = ACTIONS(119),
    [aux_sym_css_named_color_token129] = ACTIONS(119),
    [aux_sym_css_named_color_token130] = ACTIONS(119),
    [aux_sym_css_named_color_token131] = ACTIONS(119),
    [aux_sym_css_named_color_token132] = ACTIONS(119),
    [aux_sym_css_named_color_token133] = ACTIONS(119),
    [aux_sym_css_named_color_token134] = ACTIONS(119),
    [aux_sym_css_named_color_token135] = ACTIONS(119),
    [aux_sym_css_named_color_token136] = ACTIONS(119),
    [aux_sym_css_named_color_token137] = ACTIONS(119),
    [aux_sym_css_named_color_token138] = ACTIONS(119),
    [aux_sym_css_named_color_token139] = ACTIONS(119),
    [aux_sym_css_named_color_token140] = ACTIONS(119),
    [aux_sym_css_named_color_token141] = ACTIONS(119),
    [aux_sym_css_named_color_token142] = ACTIONS(119),
    [aux_sym_css_named_color_token143] = ACTIONS(119),
    [aux_sym_css_named_color_token144] = ACTIONS(119),
    [aux_sym_css_named_color_token145] = ACTIONS(121),
    [aux_sym_css_named_color_token146] = ACTIONS(119),
    [aux_sym_css_named_color_token147] = ACTIONS(121),
    [aux_sym_css_named_color_token148] = ACTIONS(119),
    [sym_css_keyword_transparent] = ACTIONS(119),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(125),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(123),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(125),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(123),
    [aux_sym_css_function_hwb_token1] = ACTIONS(123),
    [aux_sym_css_function_lab_token1] = ACTIONS(123),
    [aux_sym_css_function_oklab_token1] = ACTIONS(123),
    [sym_css_hex_color_6_digits] = ACTIONS(125),
    [sym_css_hex_color_8_digits] = ACTIONS(123),
    [sym_css_hex_color_3_digits] = ACTIONS(125),
    [sym_css_hex_color_4_digits] = ACTIONS(125),
    [aux_sym_css_named_color_token1] = ACTIONS(123),
    [aux_sym_css_named_color_token2] = ACTIONS(123),
    [aux_sym_css_named_color_token3] = ACTIONS(125),
    [aux_sym_css_named_color_token4] = ACTIONS(123),
    [aux_sym_css_named_color_token5] = ACTIONS(123),
    [aux_sym_css_named_color_token6] = ACTIONS(123),
    [aux_sym_css_named_color_token7] = ACTIONS(123),
    [aux_sym_css_named_color_token8] = ACTIONS(123),
    [aux_sym_css_named_color_token9] = ACTIONS(123),
    [aux_sym_css_named_color_token10] = ACTIONS(125),
    [aux_sym_css_named_color_token11] = ACTIONS(123),
    [aux_sym_css_named_color_token12] = ACTIONS(123),
    [aux_sym_css_named_color_token13] = ACTIONS(123),
    [aux_sym_css_named_color_token14] = ACTIONS(123),
    [aux_sym_css_named_color_token15] = ACTIONS(123),
    [aux_sym_css_named_color_token16] = ACTIONS(123),
    [aux_sym_css_named_color_token17] = ACTIONS(123),
    [aux_sym_css_named_color_token18] = ACTIONS(123),
    [aux_sym_css_named_color_token19] = ACTIONS(123),
    [aux_sym_css_named_color_token20] = ACTIONS(123),
    [aux_sym_css_named_color_token21] = ACTIONS(123),
    [aux_sym_css_named_color_token22] = ACTIONS(123),
    [aux_sym_css_named_color_token23] = ACTIONS(123),
    [aux_sym_css_named_color_token24] = ACTIONS(123),
    [aux_sym_css_named_color_token25] = ACTIONS(123),
    [aux_sym_css_named_color_token26] = ACTIONS(123),
    [aux_sym_css_named_color_token27] = ACTIONS(123),
    [aux_sym_css_named_color_token28] = ACTIONS(123),
    [aux_sym_css_named_color_token29] = ACTIONS(123),
    [aux_sym_css_named_color_token30] = ACTIONS(123),
    [aux_sym_css_named_color_token31] = ACTIONS(123),
    [aux_sym_css_named_color_token32] = ACTIONS(123),
    [aux_sym_css_named_color_token33] = ACTIONS(123),
    [aux_sym_css_named_color_token34] = ACTIONS(123),
    [aux_sym_css_named_color_token35] = ACTIONS(123),
    [aux_sym_css_named_color_token36] = ACTIONS(123),
    [aux_sym_css_named_color_token37] = ACTIONS(123),
    [aux_sym_css_named_color_token38] = ACTIONS(123),
    [aux_sym_css_named_color_token39] = ACTIONS(123),
    [aux_sym_css_named_color_token40] = ACTIONS(123),
    [aux_sym_css_named_color_token41] = ACTIONS(123),
    [aux_sym_css_named_color_token42] = ACTIONS(123),
    [aux_sym_css_named_color_token43] = ACTIONS(123),
    [aux_sym_css_named_color_token44] = ACTIONS(123),
    [aux_sym_css_named_color_token45] = ACTIONS(123),
    [aux_sym_css_named_color_token46] = ACTIONS(123),
    [aux_sym_css_named_color_token47] = ACTIONS(123),
    [aux_sym_css_named_color_token48] = ACTIONS(123),
    [aux_sym_css_named_color_token49] = ACTIONS(123),
    [aux_sym_css_named_color_token50] = ACTIONS(123),
    [aux_sym_css_named_color_token51] = ACTIONS(123),
    [aux_sym_css_named_color_token52] = ACTIONS(125),
    [aux_sym_css_named_color_token53] = ACTIONS(123),
    [aux_sym_css_named_color_token54] = ACTIONS(123),
    [aux_sym_css_named_color_token55] = ACTIONS(125),
    [aux_sym_css_named_color_token56] = ACTIONS(123),
    [aux_sym_css_named_color_token57] = ACTIONS(123),
    [aux_sym_css_named_color_token58] = ACTIONS(123),
    [aux_sym_css_named_color_token59] = ACTIONS(123),
    [aux_sym_css_named_color_token60] = ACTIONS(123),
    [aux_sym_css_named_color_token61] = ACTIONS(123),
    [aux_sym_css_named_color_token62] = ACTIONS(123),
    [aux_sym_css_named_color_token63] = ACTIONS(123),
    [aux_sym_css_named_color_token64] = ACTIONS(125),
    [aux_sym_css_named_color_token65] = ACTIONS(123),
    [aux_sym_css_named_color_token66] = ACTIONS(123),
    [aux_sym_css_named_color_token67] = ACTIONS(123),
    [aux_sym_css_named_color_token68] = ACTIONS(123),
    [aux_sym_css_named_color_token69] = ACTIONS(123),
    [aux_sym_css_named_color_token70] = ACTIONS(123),
    [aux_sym_css_named_color_token71] = ACTIONS(123),
    [aux_sym_css_named_color_token72] = ACTIONS(123),
    [aux_sym_css_named_color_token73] = ACTIONS(123),
    [aux_sym_css_named_color_token74] = ACTIONS(123),
    [aux_sym_css_named_color_token75] = ACTIONS(123),
    [aux_sym_css_named_color_token76] = ACTIONS(123),
    [aux_sym_css_named_color_token77] = ACTIONS(123),
    [aux_sym_css_named_color_token78] = ACTIONS(123),
    [aux_sym_css_named_color_token79] = ACTIONS(123),
    [aux_sym_css_named_color_token80] = ACTIONS(123),
    [aux_sym_css_named_color_token81] = ACTIONS(123),
    [aux_sym_css_named_color_token82] = ACTIONS(123),
    [aux_sym_css_named_color_token83] = ACTIONS(125),
    [aux_sym_css_named_color_token84] = ACTIONS(123),
    [aux_sym_css_named_color_token85] = ACTIONS(123),
    [aux_sym_css_named_color_token86] = ACTIONS(123),
    [aux_sym_css_named_color_token87] = ACTIONS(123),
    [aux_sym_css_named_color_token88] = ACTIONS(123),
    [aux_sym_css_named_color_token89] = ACTIONS(123),
    [aux_sym_css_named_color_token90] = ACTIONS(123),
    [aux_sym_css_named_color_token91] = ACTIONS(123),
    [aux_sym_css_named_color_token92] = ACTIONS(123),
    [aux_sym_css_named_color_token93] = ACTIONS(123),
    [aux_sym_css_named_color_token94] = ACTIONS(123),
    [aux_sym_css_named_color_token95] = ACTIONS(123),
    [aux_sym_css_named_color_token96] = ACTIONS(123),
    [aux_sym_css_named_color_token97] = ACTIONS(123),
    [aux_sym_css_named_color_token98] = ACTIONS(123),
    [aux_sym_css_named_color_token99] = ACTIONS(123),
    [aux_sym_css_named_color_token100] = ACTIONS(123),
    [aux_sym_css_named_color_token101] = ACTIONS(123),
    [aux_sym_css_named_color_token102] = ACTIONS(123),
    [aux_sym_css_named_color_token103] = ACTIONS(123),
    [aux_sym_css_named_color_token104] = ACTIONS(125),
    [aux_sym_css_named_color_token105] = ACTIONS(123),
    [aux_sym_css_named_color_token106] = ACTIONS(125),
    [aux_sym_css_named_color_token107] = ACTIONS(123),
    [aux_sym_css_named_color_token108] = ACTIONS(123),
    [aux_sym_css_named_color_token109] = ACTIONS(123),
    [aux_sym_css_named_color_token110] = ACTIONS(123),
    [aux_sym_css_named_color_token111] = ACTIONS(123),
    [aux_sym_css_named_color_token112] = ACTIONS(123),
    [aux_sym_css_named_color_token113] = ACTIONS(123),
    [aux_sym_css_named_color_token114] = ACTIONS(123),
    [aux_sym_css_named_color_token115] = ACTIONS(123),
    [aux_sym_css_named_color_token116] = ACTIONS(123),
    [aux_sym_css_named_color_token117] = ACTIONS(123),
    [aux_sym_css_named_color_token118] = ACTIONS(123),
    [aux_sym_css_named_color_token119] = ACTIONS(123),
    [aux_sym_css_named_color_token120] = ACTIONS(123),
    [aux_sym_css_named_color_token121] = ACTIONS(123),
    [aux_sym_css_named_color_token122] = ACTIONS(123),
    [aux_sym_css_named_color_token123] = ACTIONS(123),
    [aux_sym_css_named_color_token124] = ACTIONS(123),
    [aux_sym_css_named_color_token125] = ACTIONS(123),
    [aux_sym_css_named_color_token126] = ACTIONS(123),
    [aux_sym_css_named_color_token127] = ACTIONS(123),
    [aux_sym_css_named_color_token128] = ACTIONS(123),
    [aux_sym_css_named_color_token129] = ACTIONS(123),
    [aux_sym_css_named_color_token130] = ACTIONS(123),
    [aux_sym_css_named_color_token131] = ACTIONS(123),
    [aux_sym_css_named_color_token132] = ACTIONS(123),
    [aux_sym_css_named_color_token133] = ACTIONS(123),
    [aux_sym_css_named_color_token134] = ACTIONS(123),
    [aux_sym_css_named_color_token135] = ACTIONS(123),
    [aux_sym_css_named_color_token136] = ACTIONS(123),
    [aux_sym_css_named_color_token137] = ACTIONS(123),
    [aux_sym_css_named_color_token138] = ACTIONS(123),
    [aux_sym_css_named_color_token139] = ACTIONS(123),
    [aux_sym_css_named_color_token140] = ACTIONS(123),
    [aux_sym_css_named_color_token141] = ACTIONS(123),
    [aux_sym_css_named_color_token142] = ACTIONS(123),
    [aux_sym_css_named_color_token143] = ACTIONS(123),
    [aux_sym_css_named_color_token144] = ACTIONS(123),
    [aux_sym_css_named_color_token145] = ACTIONS(125),
    [aux_sym_css_named_color_token146] = ACTIONS(123),
    [aux_sym_css_named_color_token147] = ACTIONS(125),
    [aux_sym_css_named_color_token148] = ACTIONS(123),
    [sym_css_keyword_transparent] = ACTIONS(123),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(129),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(127),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(129),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(127),
    [aux_sym_css_function_hwb_token1] = ACTIONS(127),
    [aux_sym_css_function_lab_token1] = ACTIONS(127),
    [aux_sym_css_function_oklab_token1] = ACTIONS(127),
    [sym_css_hex_color_6_digits] = ACTIONS(129),
    [sym_css_hex_color_8_digits] = ACTIONS(127),
    [sym_css_hex_color_3_digits] = ACTIONS(129),
    [sym_css_hex_color_4_digits] = ACTIONS(129),
    [aux_sym_css_named_color_token1] = ACTIONS(127),
    [aux_sym_css_named_color_token2] = ACTIONS(127),
    [aux_sym_css_named_color_token3] = ACTIONS(129),
    [aux_sym_css_named_color_token4] = ACTIONS(127),
    [aux_sym_css_named_color_token5] = ACTIONS(127),
    [aux_sym_css_named_color_token6] = ACTIONS(127),
    [aux_sym_css_named_color_token7] = ACTIONS(127),
    [aux_sym_css_named_color_token8] = ACTIONS(127),
    [aux_sym_css_named_color_token9] = ACTIONS(127),
    [aux_sym_css_named_color_token10] = ACTIONS(129),
    [aux_sym_css_named_color_token11] = ACTIONS(127),
    [aux_sym_css_named_color_token12] = ACTIONS(127),
    [aux_sym_css_named_color_token13] = ACTIONS(127),
    [aux_sym_css_named_color_token14] = ACTIONS(127),
    [aux_sym_css_named_color_token15] = ACTIONS(127),
    [aux_sym_css_named_color_token16] = ACTIONS(127),
    [aux_sym_css_named_color_token17] = ACTIONS(127),
    [aux_sym_css_named_color_token18] = ACTIONS(127),
    [aux_sym_css_named_color_token19] = ACTIONS(127),
    [aux_sym_css_named_color_token20] = ACTIONS(127),
    [aux_sym_css_named_color_token21] = ACTIONS(127),
    [aux_sym_css_named_color_token22] = ACTIONS(127),
    [aux_sym_css_named_color_token23] = ACTIONS(127),
    [aux_sym_css_named_color_token24] = ACTIONS(127),
    [aux_sym_css_named_color_token25] = ACTIONS(127),
    [aux_sym_css_named_color_token26] = ACTIONS(127),
    [aux_sym_css_named_color_token27] = ACTIONS(127),
    [aux_sym_css_named_color_token28] = ACTIONS(127),
    [aux_sym_css_named_color_token29] = ACTIONS(127),
    [aux_sym_css_named_color_token30] = ACTIONS(127),
    [aux_sym_css_named_color_token31] = ACTIONS(127),
    [aux_sym_css_named_color_token32] = ACTIONS(127),
    [aux_sym_css_named_color_token33] = ACTIONS(127),
    [aux_sym_css_named_color_token34] = ACTIONS(127),
    [aux_sym_css_named_color_token35] = ACTIONS(127),
    [aux_sym_css_named_color_token36] = ACTIONS(127),
    [aux_sym_css_named_color_token37] = ACTIONS(127),
    [aux_sym_css_named_color_token38] = ACTIONS(127),
    [aux_sym_css_named_color_token39] = ACTIONS(127),
    [aux_sym_css_named_color_token40] = ACTIONS(127),
    [aux_sym_css_named_color_token41] = ACTIONS(127),
    [aux_sym_css_named_color_token42] = ACTIONS(127),
    [aux_sym_css_named_color_token43] = ACTIONS(127),
    [aux_sym_css_named_color_token44] = ACTIONS(127),
    [aux_sym_css_named_color_token45] = ACTIONS(127),
    [aux_sym_css_named_color_token46] = ACTIONS(127),
    [aux_sym_css_named_color_token47] = ACTIONS(127),
    [aux_sym_css_named_color_token48] = ACTIONS(127),
    [aux_sym_css_named_color_token49] = ACTIONS(127),
    [aux_sym_css_named_color_token50] = ACTIONS(127),
    [aux_sym_css_named_color_token51] = ACTIONS(127),
    [aux_sym_css_named_color_token52] = ACTIONS(129),
    [aux_sym_css_named_color_token53] = ACTIONS(127),
    [aux_sym_css_named_color_token54] = ACTIONS(127),
    [aux_sym_css_named_color_token55] = ACTIONS(129),
    [aux_sym_css_named_color_token56] = ACTIONS(127),
    [aux_sym_css_named_color_token57] = ACTIONS(127),
    [aux_sym_css_named_color_token58] = ACTIONS(127),
    [aux_sym_css_named_color_token59] = ACTIONS(127),
    [aux_sym_css_named_color_token60] = ACTIONS(127),
    [aux_sym_css_named_color_token61] = ACTIONS(127),
    [aux_sym_css_named_color_token62] = ACTIONS(127),
    [aux_sym_css_named_color_token63] = ACTIONS(127),
    [aux_sym_css_named_color_token64] = ACTIONS(129),
    [aux_sym_css_named_color_token65] = ACTIONS(127),
    [aux_sym_css_named_color_token66] = ACTIONS(127),
    [aux_sym_css_named_color_token67] = ACTIONS(127),
    [aux_sym_css_named_color_token68] = ACTIONS(127),
    [aux_sym_css_named_color_token69] = ACTIONS(127),
    [aux_sym_css_named_color_token70] = ACTIONS(127),
    [aux_sym_css_named_color_token71] = ACTIONS(127),
    [aux_sym_css_named_color_token72] = ACTIONS(127),
    [aux_sym_css_named_color_token73] = ACTIONS(127),
    [aux_sym_css_named_color_token74] = ACTIONS(127),
    [aux_sym_css_named_color_token75] = ACTIONS(127),
    [aux_sym_css_named_color_token76] = ACTIONS(127),
    [aux_sym_css_named_color_token77] = ACTIONS(127),
    [aux_sym_css_named_color_token78] = ACTIONS(127),
    [aux_sym_css_named_color_token79] = ACTIONS(127),
    [aux_sym_css_named_color_token80] = ACTIONS(127),
    [aux_sym_css_named_color_token81] = ACTIONS(127),
    [aux_sym_css_named_color_token82] = ACTIONS(127),
    [aux_sym_css_named_color_token83] = ACTIONS(129),
    [aux_sym_css_named_color_token84] = ACTIONS(127),
    [aux_sym_css_named_color_token85] = ACTIONS(127),
    [aux_sym_css_named_color_token86] = ACTIONS(127),
    [aux_sym_css_named_color_token87] = ACTIONS(127),
    [aux_sym_css_named_color_token88] = ACTIONS(127),
    [aux_sym_css_named_color_token89] = ACTIONS(127),
    [aux_sym_css_named_color_token90] = ACTIONS(127),
    [aux_sym_css_named_color_token91] = ACTIONS(127),
    [aux_sym_css_named_color_token92] = ACTIONS(127),
    [aux_sym_css_named_color_token93] = ACTIONS(127),
    [aux_sym_css_named_color_token94] = ACTIONS(127),
    [aux_sym_css_named_color_token95] = ACTIONS(127),
    [aux_sym_css_named_color_token96] = ACTIONS(127),
    [aux_sym_css_named_color_token97] = ACTIONS(127),
    [aux_sym_css_named_color_token98] = ACTIONS(127),
    [aux_sym_css_named_color_token99] = ACTIONS(127),
    [aux_sym_css_named_color_token100] = ACTIONS(127),
    [aux_sym_css_named_color_token101] = ACTIONS(127),
    [aux_sym_css_named_color_token102] = ACTIONS(127),
    [aux_sym_css_named_color_token103] = ACTIONS(127),
    [aux_sym_css_named_color_token104] = ACTIONS(129),
    [aux_sym_css_named_color_token105] = ACTIONS(127),
    [aux_sym_css_named_color_token106] = ACTIONS(129),
    [aux_sym_css_named_color_token107] = ACTIONS(127),
    [aux_sym_css_named_color_token108] = ACTIONS(127),
    [aux_sym_css_named_color_token109] = ACTIONS(127),
    [aux_sym_css_named_color_token110] = ACTIONS(127),
    [aux_sym_css_named_color_token111] = ACTIONS(127),
    [aux_sym_css_named_color_token112] = ACTIONS(127),
    [aux_sym_css_named_color_token113] = ACTIONS(127),
    [aux_sym_css_named_color_token114] = ACTIONS(127),
    [aux_sym_css_named_color_token115] = ACTIONS(127),
    [aux_sym_css_named_color_token116] = ACTIONS(127),
    [aux_sym_css_named_color_token117] = ACTIONS(127),
    [aux_sym_css_named_color_token118] = ACTIONS(127),
    [aux_sym_css_named_color_token119] = ACTIONS(127),
    [aux_sym_css_named_color_token120] = ACTIONS(127),
    [aux_sym_css_named_color_token121] = ACTIONS(127),
    [aux_sym_css_named_color_token122] = ACTIONS(127),
    [aux_sym_css_named_color_token123] = ACTIONS(127),
    [aux_sym_css_named_color_token124] = ACTIONS(127),
    [aux_sym_css_named_color_token125] = ACTIONS(127),
    [aux_sym_css_named_color_token126] = ACTIONS(127),
    [aux_sym_css_named_color_token127] = ACTIONS(127),
    [aux_sym_css_named_color_token128] = ACTIONS(127),
    [aux_sym_css_named_color_token129] = ACTIONS(127),
    [aux_sym_css_named_color_token130] = ACTIONS(127),
    [aux_sym_css_named_color_token131] = ACTIONS(127),
    [aux_sym_css_named_color_token132] = ACTIONS(127),
    [aux_sym_css_named_color_token133] = ACTIONS(127),
    [aux_sym_css_named_color_token134] = ACTIONS(127),
    [aux_sym_css_named_color_token135] = ACTIONS(127),
    [aux_sym_css_named_color_token136] = ACTIONS(127),
    [aux_sym_css_named_color_token137] = ACTIONS(127),
    [aux_sym_css_named_color_token138] = ACTIONS(127),
    [aux_sym_css_named_color_token139] = ACTIONS(127),
    [aux_sym_css_named_color_token140] = ACTIONS(127),
    [aux_sym_css_named_color_token141] = ACTIONS(127),
    [aux_sym_css_named_color_token142] = ACTIONS(127),
    [aux_sym_css_named_color_token143] = ACTIONS(127),
    [aux_sym_css_named_color_token144] = ACTIONS(127),
    [aux_sym_css_named_color_token145] = ACTIONS(129),
    [aux_sym_css_named_color_token146] = ACTIONS(127),
    [aux_sym_css_named_color_token147] = ACTIONS(129),
    [aux_sym_css_named_color_token148] = ACTIONS(127),
    [sym_css_keyword_transparent] = ACTIONS(127),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(133),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(131),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(133),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(131),
    [aux_sym_css_function_hwb_token1] = ACTIONS(131),
    [aux_sym_css_function_lab_token1] = ACTIONS(131),
    [aux_sym_css_function_oklab_token1] = ACTIONS(131),
    [sym_css_hex_color_6_digits] = ACTIONS(133),
    [sym_css_hex_color_8_digits] = ACTIONS(131),
    [sym_css_hex_color_3_digits] = ACTIONS(133),
    [sym_css_hex_color_4_digits] = ACTIONS(133),
    [aux_sym_css_named_color_token1] = ACTIONS(131),
    [aux_sym_css_named_color_token2] = ACTIONS(131),
    [aux_sym_css_named_color_token3] = ACTIONS(133),
    [aux_sym_css_named_color_token4] = ACTIONS(131),
    [aux_sym_css_named_color_token5] = ACTIONS(131),
    [aux_sym_css_named_color_token6] = ACTIONS(131),
    [aux_sym_css_named_color_token7] = ACTIONS(131),
    [aux_sym_css_named_color_token8] = ACTIONS(131),
    [aux_sym_css_named_color_token9] = ACTIONS(131),
    [aux_sym_css_named_color_token10] = ACTIONS(133),
    [aux_sym_css_named_color_token11] = ACTIONS(131),
    [aux_sym_css_named_color_token12] = ACTIONS(131),
    [aux_sym_css_named_color_token13] = ACTIONS(131),
    [aux_sym_css_named_color_token14] = ACTIONS(131),
    [aux_sym_css_named_color_token15] = ACTIONS(131),
    [aux_sym_css_named_color_token16] = ACTIONS(131),
    [aux_sym_css_named_color_token17] = ACTIONS(131),
    [aux_sym_css_named_color_token18] = ACTIONS(131),
    [aux_sym_css_named_color_token19] = ACTIONS(131),
    [aux_sym_css_named_color_token20] = ACTIONS(131),
    [aux_sym_css_named_color_token21] = ACTIONS(131),
    [aux_sym_css_named_color_token22] = ACTIONS(131),
    [aux_sym_css_named_color_token23] = ACTIONS(131),
    [aux_sym_css_named_color_token24] = ACTIONS(131),
    [aux_sym_css_named_color_token25] = ACTIONS(131),
    [aux_sym_css_named_color_token26] = ACTIONS(131),
    [aux_sym_css_named_color_token27] = ACTIONS(131),
    [aux_sym_css_named_color_token28] = ACTIONS(131),
    [aux_sym_css_named_color_token29] = ACTIONS(131),
    [aux_sym_css_named_color_token30] = ACTIONS(131),
    [aux_sym_css_named_color_token31] = ACTIONS(131),
    [aux_sym_css_named_color_token32] = ACTIONS(131),
    [aux_sym_css_named_color_token33] = ACTIONS(131),
    [aux_sym_css_named_color_token34] = ACTIONS(131),
    [aux_sym_css_named_color_token35] = ACTIONS(131),
    [aux_sym_css_named_color_token36] = ACTIONS(131),
    [aux_sym_css_named_color_token37] = ACTIONS(131),
    [aux_sym_css_named_color_token38] = ACTIONS(131),
    [aux_sym_css_named_color_token39] = ACTIONS(131),
    [aux_sym_css_named_color_token40] = ACTIONS(131),
    [aux_sym_css_named_color_token41] = ACTIONS(131),
    [aux_sym_css_named_color_token42] = ACTIONS(131),
    [aux_sym_css_named_color_token43] = ACTIONS(131),
    [aux_sym_css_named_color_token44] = ACTIONS(131),
    [aux_sym_css_named_color_token45] = ACTIONS(131),
    [aux_sym_css_named_color_token46] = ACTIONS(131),
    [aux_sym_css_named_color_token47] = ACTIONS(131),
    [aux_sym_css_named_color_token48] = ACTIONS(131),
    [aux_sym_css_named_color_token49] = ACTIONS(131),
    [aux_sym_css_named_color_token50] = ACTIONS(131),
    [aux_sym_css_named_color_token51] = ACTIONS(131),
    [aux_sym_css_named_color_token52] = ACTIONS(133),
    [aux_sym_css_named_color_token53] = ACTIONS(131),
    [aux_sym_css_named_color_token54] = ACTIONS(131),
    [aux_sym_css_named_color_token55] = ACTIONS(133),
    [aux_sym_css_named_color_token56] = ACTIONS(131),
    [aux_sym_css_named_color_token57] = ACTIONS(131),
    [aux_sym_css_named_color_token58] = ACTIONS(131),
    [aux_sym_css_named_color_token59] = ACTIONS(131),
    [aux_sym_css_named_color_token60] = ACTIONS(131),
    [aux_sym_css_named_color_token61] = ACTIONS(131),
    [aux_sym_css_named_color_token62] = ACTIONS(131),
    [aux_sym_css_named_color_token63] = ACTIONS(131),
    [aux_sym_css_named_color_token64] = ACTIONS(133),
    [aux_sym_css_named_color_token65] = ACTIONS(131),
    [aux_sym_css_named_color_token66] = ACTIONS(131),
    [aux_sym_css_named_color_token67] = ACTIONS(131),
    [aux_sym_css_named_color_token68] = ACTIONS(131),
    [aux_sym_css_named_color_token69] = ACTIONS(131),
    [aux_sym_css_named_color_token70] = ACTIONS(131),
    [aux_sym_css_named_color_token71] = ACTIONS(131),
    [aux_sym_css_named_color_token72] = ACTIONS(131),
    [aux_sym_css_named_color_token73] = ACTIONS(131),
    [aux_sym_css_named_color_token74] = ACTIONS(131),
    [aux_sym_css_named_color_token75] = ACTIONS(131),
    [aux_sym_css_named_color_token76] = ACTIONS(131),
    [aux_sym_css_named_color_token77] = ACTIONS(131),
    [aux_sym_css_named_color_token78] = ACTIONS(131),
    [aux_sym_css_named_color_token79] = ACTIONS(131),
    [aux_sym_css_named_color_token80] = ACTIONS(131),
    [aux_sym_css_named_color_token81] = ACTIONS(131),
    [aux_sym_css_named_color_token82] = ACTIONS(131),
    [aux_sym_css_named_color_token83] = ACTIONS(133),
    [aux_sym_css_named_color_token84] = ACTIONS(131),
    [aux_sym_css_named_color_token85] = ACTIONS(131),
    [aux_sym_css_named_color_token86] = ACTIONS(131),
    [aux_sym_css_named_color_token87] = ACTIONS(131),
    [aux_sym_css_named_color_token88] = ACTIONS(131),
    [aux_sym_css_named_color_token89] = ACTIONS(131),
    [aux_sym_css_named_color_token90] = ACTIONS(131),
    [aux_sym_css_named_color_token91] = ACTIONS(131),
    [aux_sym_css_named_color_token92] = ACTIONS(131),
    [aux_sym_css_named_color_token93] = ACTIONS(131),
    [aux_sym_css_named_color_token94] = ACTIONS(131),
    [aux_sym_css_named_color_token95] = ACTIONS(131),
    [aux_sym_css_named_color_token96] = ACTIONS(131),
    [aux_sym_css_named_color_token97] = ACTIONS(131),
    [aux_sym_css_named_color_token98] = ACTIONS(131),
    [aux_sym_css_named_color_token99] = ACTIONS(131),
    [aux_sym_css_named_color_token100] = ACTIONS(131),
    [aux_sym_css_named_color_token101] = ACTIONS(131),
    [aux_sym_css_named_color_token102] = ACTIONS(131),
    [aux_sym_css_named_color_token103] = ACTIONS(131),
    [aux_sym_css_named_color_token104] = ACTIONS(133),
    [aux_sym_css_named_color_token105] = ACTIONS(131),
    [aux_sym_css_named_color_token106] = ACTIONS(133),
    [aux_sym_css_named_color_token107] = ACTIONS(131),
    [aux_sym_css_named_color_token108] = ACTIONS(131),
    [aux_sym_css_named_color_token109] = ACTIONS(131),
    [aux_sym_css_named_color_token110] = ACTIONS(131),
    [aux_sym_css_named_color_token111] = ACTIONS(131),
    [aux_sym_css_named_color_token112] = ACTIONS(131),
    [aux_sym_css_named_color_token113] = ACTIONS(131),
    [aux_sym_css_named_color_token114] = ACTIONS(131),
    [aux_sym_css_named_color_token115] = ACTIONS(131),
    [aux_sym_css_named_color_token116] = ACTIONS(131),
    [aux_sym_css_named_color_token117] = ACTIONS(131),
    [aux_sym_css_named_color_token118] = ACTIONS(131),
    [aux_sym_css_named_color_token119] = ACTIONS(131),
    [aux_sym_css_named_color_token120] = ACTIONS(131),
    [aux_sym_css_named_color_token121] = ACTIONS(131),
    [aux_sym_css_named_color_token122] = ACTIONS(131),
    [aux_sym_css_named_color_token123] = ACTIONS(131),
    [aux_sym_css_named_color_token124] = ACTIONS(131),
    [aux_sym_css_named_color_token125] = ACTIONS(131),
    [aux_sym_css_named_color_token126] = ACTIONS(131),
    [aux_sym_css_named_color_token127] = ACTIONS(131),
    [aux_sym_css_named_color_token128] = ACTIONS(131),
    [aux_sym_css_named_color_token129] = ACTIONS(131),
    [aux_sym_css_named_color_token130] = ACTIONS(131),
    [aux_sym_css_named_color_token131] = ACTIONS(131),
    [aux_sym_css_named_color_token132] = ACTIONS(131),
    [aux_sym_css_named_color_token133] = ACTIONS(131),
    [aux_sym_css_named_color_token134] = ACTIONS(131),
    [aux_sym_css_named_color_token135] = ACTIONS(131),
    [aux_sym_css_named_color_token136] = ACTIONS(131),
    [aux_sym_css_named_color_token137] = ACTIONS(131),
    [aux_sym_css_named_color_token138] = ACTIONS(131),
    [aux_sym_css_named_color_token139] = ACTIONS(131),
    [aux_sym_css_named_color_token140] = ACTIONS(131),
    [aux_sym_css_named_color_token141] = ACTIONS(131),
    [aux_sym_css_named_color_token142] = ACTIONS(131),
    [aux_sym_css_named_color_token143] = ACTIONS(131),
    [aux_sym_css_named_color_token144] = ACTIONS(131),
    [aux_sym_css_named_color_token145] = ACTIONS(133),
    [aux_sym_css_named_color_token146] = ACTIONS(131),
    [aux_sym_css_named_color_token147] = ACTIONS(133),
    [aux_sym_css_named_color_token148] = ACTIONS(131),
    [sym_css_keyword_transparent] = ACTIONS(131),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(137),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(135),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(137),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(135),
    [aux_sym_css_function_hwb_token1] = ACTIONS(135),
    [aux_sym_css_function_lab_token1] = ACTIONS(135),
    [aux_sym_css_function_oklab_token1] = ACTIONS(135),
    [sym_css_hex_color_6_digits] = ACTIONS(137),
    [sym_css_hex_color_8_digits] = ACTIONS(135),
    [sym_css_hex_color_3_digits] = ACTIONS(137),
    [sym_css_hex_color_4_digits] = ACTIONS(137),
    [aux_sym_css_named_color_token1] = ACTIONS(135),
    [aux_sym_css_named_color_token2] = ACTIONS(135),
    [aux_sym_css_named_color_token3] = ACTIONS(137),
    [aux_sym_css_named_color_token4] = ACTIONS(135),
    [aux_sym_css_named_color_token5] = ACTIONS(135),
    [aux_sym_css_named_color_token6] = ACTIONS(135),
    [aux_sym_css_named_color_token7] = ACTIONS(135),
    [aux_sym_css_named_color_token8] = ACTIONS(135),
    [aux_sym_css_named_color_token9] = ACTIONS(135),
    [aux_sym_css_named_color_token10] = ACTIONS(137),
    [aux_sym_css_named_color_token11] = ACTIONS(135),
    [aux_sym_css_named_color_token12] = ACTIONS(135),
    [aux_sym_css_named_color_token13] = ACTIONS(135),
    [aux_sym_css_named_color_token14] = ACTIONS(135),
    [aux_sym_css_named_color_token15] = ACTIONS(135),
    [aux_sym_css_named_color_token16] = ACTIONS(135),
    [aux_sym_css_named_color_token17] = ACTIONS(135),
    [aux_sym_css_named_color_token18] = ACTIONS(135),
    [aux_sym_css_named_color_token19] = ACTIONS(135),
    [aux_sym_css_named_color_token20] = ACTIONS(135),
    [aux_sym_css_named_color_token21] = ACTIONS(135),
    [aux_sym_css_named_color_token22] = ACTIONS(135),
    [aux_sym_css_named_color_token23] = ACTIONS(135),
    [aux_sym_css_named_color_token24] = ACTIONS(135),
    [aux_sym_css_named_color_token25] = ACTIONS(135),
    [aux_sym_css_named_color_token26] = ACTIONS(135),
    [aux_sym_css_named_color_token27] = ACTIONS(135),
    [aux_sym_css_named_color_token28] = ACTIONS(135),
    [aux_sym_css_named_color_token29] = ACTIONS(135),
    [aux_sym_css_named_color_token30] = ACTIONS(135),
    [aux_sym_css_named_color_token31] = ACTIONS(135),
    [aux_sym_css_named_color_token32] = ACTIONS(135),
    [aux_sym_css_named_color_token33] = ACTIONS(135),
    [aux_sym_css_named_color_token34] = ACTIONS(135),
    [aux_sym_css_named_color_token35] = ACTIONS(135),
    [aux_sym_css_named_color_token36] = ACTIONS(135),
    [aux_sym_css_named_color_token37] = ACTIONS(135),
    [aux_sym_css_named_color_token38] = ACTIONS(135),
    [aux_sym_css_named_color_token39] = ACTIONS(135),
    [aux_sym_css_named_color_token40] = ACTIONS(135),
    [aux_sym_css_named_color_token41] = ACTIONS(135),
    [aux_sym_css_named_color_token42] = ACTIONS(135),
    [aux_sym_css_named_color_token43] = ACTIONS(135),
    [aux_sym_css_named_color_token44] = ACTIONS(135),
    [aux_sym_css_named_color_token45] = ACTIONS(135),
    [aux_sym_css_named_color_token46] = ACTIONS(135),
    [aux_sym_css_named_color_token47] = ACTIONS(135),
    [aux_sym_css_named_color_token48] = ACTIONS(135),
    [aux_sym_css_named_color_token49] = ACTIONS(135),
    [aux_sym_css_named_color_token50] = ACTIONS(135),
    [aux_sym_css_named_color_token51] = ACTIONS(135),
    [aux_sym_css_named_color_token52] = ACTIONS(137),
    [aux_sym_css_named_color_token53] = ACTIONS(135),
    [aux_sym_css_named_color_token54] = ACTIONS(135),
    [aux_sym_css_named_color_token55] = ACTIONS(137),
    [aux_sym_css_named_color_token56] = ACTIONS(135),
    [aux_sym_css_named_color_token57] = ACTIONS(135),
    [aux_sym_css_named_color_token58] = ACTIONS(135),
    [aux_sym_css_named_color_token59] = ACTIONS(135),
    [aux_sym_css_named_color_token60] = ACTIONS(135),
    [aux_sym_css_named_color_token61] = ACTIONS(135),
    [aux_sym_css_named_color_token62] = ACTIONS(135),
    [aux_sym_css_named_color_token63] = ACTIONS(135),
    [aux_sym_css_named_color_token64] = ACTIONS(137),
    [aux_sym_css_named_color_token65] = ACTIONS(135),
    [aux_sym_css_named_color_token66] = ACTIONS(135),
    [aux_sym_css_named_color_token67] = ACTIONS(135),
    [aux_sym_css_named_color_token68] = ACTIONS(135),
    [aux_sym_css_named_color_token69] = ACTIONS(135),
    [aux_sym_css_named_color_token70] = ACTIONS(135),
    [aux_sym_css_named_color_token71] = ACTIONS(135),
    [aux_sym_css_named_color_token72] = ACTIONS(135),
    [aux_sym_css_named_color_token73] = ACTIONS(135),
    [aux_sym_css_named_color_token74] = ACTIONS(135),
    [aux_sym_css_named_color_token75] = ACTIONS(135),
    [aux_sym_css_named_color_token76] = ACTIONS(135),
    [aux_sym_css_named_color_token77] = ACTIONS(135),
    [aux_sym_css_named_color_token78] = ACTIONS(135),
    [aux_sym_css_named_color_token79] = ACTIONS(135),
    [aux_sym_css_named_color_token80] = ACTIONS(135),
    [aux_sym_css_named_color_token81] = ACTIONS(135),
    [aux_sym_css_named_color_token82] = ACTIONS(135),
    [aux_sym_css_named_color_token83] = ACTIONS(137),
    [aux_sym_css_named_color_token84] = ACTIONS(135),
    [aux_sym_css_named_color_token85] = ACTIONS(135),
    [aux_sym_css_named_color_token86] = ACTIONS(135),
    [aux_sym_css_named_color_token87] = ACTIONS(135),
    [aux_sym_css_named_color_token88] = ACTIONS(135),
    [aux_sym_css_named_color_token89] = ACTIONS(135),
    [aux_sym_css_named_color_token90] = ACTIONS(135),
    [aux_sym_css_named_color_token91] = ACTIONS(135),
    [aux_sym_css_named_color_token92] = ACTIONS(135),
    [aux_sym_css_named_color_token93] = ACTIONS(135),
    [aux_sym_css_named_color_token94] = ACTIONS(135),
    [aux_sym_css_named_color_token95] = ACTIONS(135),
    [aux_sym_css_named_color_token96] = ACTIONS(135),
    [aux_sym_css_named_color_token97] = ACTIONS(135),
    [aux_sym_css_named_color_token98] = ACTIONS(135),
    [aux_sym_css_named_color_token99] = ACTIONS(135),
    [aux_sym_css_named_color_token100] = ACTIONS(135),
    [aux_sym_css_named_color_token101] = ACTIONS(135),
    [aux_sym_css_named_color_token102] = ACTIONS(135),
    [aux_sym_css_named_color_token103] = ACTIONS(135),
    [aux_sym_css_named_color_token104] = ACTIONS(137),
    [aux_sym_css_named_color_token105] = ACTIONS(135),
    [aux_sym_css_named_color_token106] = ACTIONS(137),
    [aux_sym_css_named_color_token107] = ACTIONS(135),
    [aux_sym_css_named_color_token108] = ACTIONS(135),
    [aux_sym_css_named_color_token109] = ACTIONS(135),
    [aux_sym_css_named_color_token110] = ACTIONS(135),
    [aux_sym_css_named_color_token111] = ACTIONS(135),
    [aux_sym_css_named_color_token112] = ACTIONS(135),
    [aux_sym_css_named_color_token113] = ACTIONS(135),
    [aux_sym_css_named_color_token114] = ACTIONS(135),
    [aux_sym_css_named_color_token115] = ACTIONS(135),
    [aux_sym_css_named_color_token116] = ACTIONS(135),
    [aux_sym_css_named_color_token117] = ACTIONS(135),
    [aux_sym_css_named_color_token118] = ACTIONS(135),
    [aux_sym_css_named_color_token119] = ACTIONS(135),
    [aux_sym_css_named_color_token120] = ACTIONS(135),
    [aux_sym_css_named_color_token121] = ACTIONS(135),
    [aux_sym_css_named_color_token122] = ACTIONS(135),
    [aux_sym_css_named_color_token123] = ACTIONS(135),
    [aux_sym_css_named_color_token124] = ACTIONS(135),
    [aux_sym_css_named_color_token125] = ACTIONS(135),
    [aux_sym_css_named_color_token126] = ACTIONS(135),
    [aux_sym_css_named_color_token127] = ACTIONS(135),
    [aux_sym_css_named_color_token128] = ACTIONS(135),
    [aux_sym_css_named_color_token129] = ACTIONS(135),
    [aux_sym_css_named_color_token130] = ACTIONS(135),
    [aux_sym_css_named_color_token131] = ACTIONS(135),
    [aux_sym_css_named_color_token132] = ACTIONS(135),
    [aux_sym_css_named_color_token133] = ACTIONS(135),
    [aux_sym_css_named_color_token134] = ACTIONS(135),
    [aux_sym_css_named_color_token135] = ACTIONS(135),
    [aux_sym_css_named_color_token136] = ACTIONS(135),
    [aux_sym_css_named_color_token137] = ACTIONS(135),
    [aux_sym_css_named_color_token138] = ACTIONS(135),
    [aux_sym_css_named_color_token139] = ACTIONS(135),
    [aux_sym_css_named_color_token140] = ACTIONS(135),
    [aux_sym_css_named_color_token141] = ACTIONS(135),
    [aux_sym_css_named_color_token142] = ACTIONS(135),
    [aux_sym_css_named_color_token143] = ACTIONS(135),
    [aux_sym_css_named_color_token144] = ACTIONS(135),
    [aux_sym_css_named_color_token145] = ACTIONS(137),
    [aux_sym_css_named_color_token146] = ACTIONS(135),
    [aux_sym_css_named_color_token147] = ACTIONS(137),
    [aux_sym_css_named_color_token148] = ACTIONS(135),
    [sym_css_keyword_transparent] = ACTIONS(135),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(141),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(139),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(141),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(139),
    [aux_sym_css_function_hwb_token1] = ACTIONS(139),
    [aux_sym_css_function_lab_token1] = ACTIONS(139),
    [aux_sym_css_function_oklab_token1] = ACTIONS(139),
    [sym_css_hex_color_6_digits] = ACTIONS(141),
    [sym_css_hex_color_8_digits] = ACTIONS(139),
    [sym_css_hex_color_3_digits] = ACTIONS(141),
    [sym_css_hex_color_4_digits] = ACTIONS(141),
    [aux_sym_css_named_color_token1] = ACTIONS(139),
    [aux_sym_css_named_color_token2] = ACTIONS(139),
    [aux_sym_css_named_color_token3] = ACTIONS(141),
    [aux_sym_css_named_color_token4] = ACTIONS(139),
    [aux_sym_css_named_color_token5] = ACTIONS(139),
    [aux_sym_css_named_color_token6] = ACTIONS(139),
    [aux_sym_css_named_color_token7] = ACTIONS(139),
    [aux_sym_css_named_color_token8] = ACTIONS(139),
    [aux_sym_css_named_color_token9] = ACTIONS(139),
    [aux_sym_css_named_color_token10] = ACTIONS(141),
    [aux_sym_css_named_color_token11] = ACTIONS(139),
    [aux_sym_css_named_color_token12] = ACTIONS(139),
    [aux_sym_css_named_color_token13] = ACTIONS(139),
    [aux_sym_css_named_color_token14] = ACTIONS(139),
    [aux_sym_css_named_color_token15] = ACTIONS(139),
    [aux_sym_css_named_color_token16] = ACTIONS(139),
    [aux_sym_css_named_color_token17] = ACTIONS(139),
    [aux_sym_css_named_color_token18] = ACTIONS(139),
    [aux_sym_css_named_color_token19] = ACTIONS(139),
    [aux_sym_css_named_color_token20] = ACTIONS(139),
    [aux_sym_css_named_color_token21] = ACTIONS(139),
    [aux_sym_css_named_color_token22] = ACTIONS(139),
    [aux_sym_css_named_color_token23] = ACTIONS(139),
    [aux_sym_css_named_color_token24] = ACTIONS(139),
    [aux_sym_css_named_color_token25] = ACTIONS(139),
    [aux_sym_css_named_color_token26] = ACTIONS(139),
    [aux_sym_css_named_color_token27] = ACTIONS(139),
    [aux_sym_css_named_color_token28] = ACTIONS(139),
    [aux_sym_css_named_color_token29] = ACTIONS(139),
    [aux_sym_css_named_color_token30] = ACTIONS(139),
    [aux_sym_css_named_color_token31] = ACTIONS(139),
    [aux_sym_css_named_color_token32] = ACTIONS(139),
    [aux_sym_css_named_color_token33] = ACTIONS(139),
    [aux_sym_css_named_color_token34] = ACTIONS(139),
    [aux_sym_css_named_color_token35] = ACTIONS(139),
    [aux_sym_css_named_color_token36] = ACTIONS(139),
    [aux_sym_css_named_color_token37] = ACTIONS(139),
    [aux_sym_css_named_color_token38] = ACTIONS(139),
    [aux_sym_css_named_color_token39] = ACTIONS(139),
    [aux_sym_css_named_color_token40] = ACTIONS(139),
    [aux_sym_css_named_color_token41] = ACTIONS(139),
    [aux_sym_css_named_color_token42] = ACTIONS(139),
    [aux_sym_css_named_color_token43] = ACTIONS(139),
    [aux_sym_css_named_color_token44] = ACTIONS(139),
    [aux_sym_css_named_color_token45] = ACTIONS(139),
    [aux_sym_css_named_color_token46] = ACTIONS(139),
    [aux_sym_css_named_color_token47] = ACTIONS(139),
    [aux_sym_css_named_color_token48] = ACTIONS(139),
    [aux_sym_css_named_color_token49] = ACTIONS(139),
    [aux_sym_css_named_color_token50] = ACTIONS(139),
    [aux_sym_css_named_color_token51] = ACTIONS(139),
    [aux_sym_css_named_color_token52] = ACTIONS(141),
    [aux_sym_css_named_color_token53] = ACTIONS(139),
    [aux_sym_css_named_color_token54] = ACTIONS(139),
    [aux_sym_css_named_color_token55] = ACTIONS(141),
    [aux_sym_css_named_color_token56] = ACTIONS(139),
    [aux_sym_css_named_color_token57] = ACTIONS(139),
    [aux_sym_css_named_color_token58] = ACTIONS(139),
    [aux_sym_css_named_color_token59] = ACTIONS(139),
    [aux_sym_css_named_color_token60] = ACTIONS(139),
    [aux_sym_css_named_color_token61] = ACTIONS(139),
    [aux_sym_css_named_color_token62] = ACTIONS(139),
    [aux_sym_css_named_color_token63] = ACTIONS(139),
    [aux_sym_css_named_color_token64] = ACTIONS(141),
    [aux_sym_css_named_color_token65] = ACTIONS(139),
    [aux_sym_css_named_color_token66] = ACTIONS(139),
    [aux_sym_css_named_color_token67] = ACTIONS(139),
    [aux_sym_css_named_color_token68] = ACTIONS(139),
    [aux_sym_css_named_color_token69] = ACTIONS(139),
    [aux_sym_css_named_color_token70] = ACTIONS(139),
    [aux_sym_css_named_color_token71] = ACTIONS(139),
    [aux_sym_css_named_color_token72] = ACTIONS(139),
    [aux_sym_css_named_color_token73] = ACTIONS(139),
    [aux_sym_css_named_color_token74] = ACTIONS(139),
    [aux_sym_css_named_color_token75] = ACTIONS(139),
    [aux_sym_css_named_color_token76] = ACTIONS(139),
    [aux_sym_css_named_color_token77] = ACTIONS(139),
    [aux_sym_css_named_color_token78] = ACTIONS(139),
    [aux_sym_css_named_color_token79] = ACTIONS(139),
    [aux_sym_css_named_color_token80] = ACTIONS(139),
    [aux_sym_css_named_color_token81] = ACTIONS(139),
    [aux_sym_css_named_color_token82] = ACTIONS(139),
    [aux_sym_css_named_color_token83] = ACTIONS(141),
    [aux_sym_css_named_color_token84] = ACTIONS(139),
    [aux_sym_css_named_color_token85] = ACTIONS(139),
    [aux_sym_css_named_color_token86] = ACTIONS(139),
    [aux_sym_css_named_color_token87] = ACTIONS(139),
    [aux_sym_css_named_color_token88] = ACTIONS(139),
    [aux_sym_css_named_color_token89] = ACTIONS(139),
    [aux_sym_css_named_color_token90] = ACTIONS(139),
    [aux_sym_css_named_color_token91] = ACTIONS(139),
    [aux_sym_css_named_color_token92] = ACTIONS(139),
    [aux_sym_css_named_color_token93] = ACTIONS(139),
    [aux_sym_css_named_color_token94] = ACTIONS(139),
    [aux_sym_css_named_color_token95] = ACTIONS(139),
    [aux_sym_css_named_color_token96] = ACTIONS(139),
    [aux_sym_css_named_color_token97] = ACTIONS(139),
    [aux_sym_css_named_color_token98] = ACTIONS(139),
    [aux_sym_css_named_color_token99] = ACTIONS(139),
    [aux_sym_css_named_color_token100] = ACTIONS(139),
    [aux_sym_css_named_color_token101] = ACTIONS(139),
    [aux_sym_css_named_color_token102] = ACTIONS(139),
    [aux_sym_css_named_color_token103] = ACTIONS(139),
    [aux_sym_css_named_color_token104] = ACTIONS(141),
    [aux_sym_css_named_color_token105] = ACTIONS(139),
    [aux_sym_css_named_color_token106] = ACTIONS(141),
    [aux_sym_css_named_color_token107] = ACTIONS(139),
    [aux_sym_css_named_color_token108] = ACTIONS(139),
    [aux_sym_css_named_color_token109] = ACTIONS(139),
    [aux_sym_css_named_color_token110] = ACTIONS(139),
    [aux_sym_css_named_color_token111] = ACTIONS(139),
    [aux_sym_css_named_color_token112] = ACTIONS(139),
    [aux_sym_css_named_color_token113] = ACTIONS(139),
    [aux_sym_css_named_color_token114] = ACTIONS(139),
    [aux_sym_css_named_color_token115] = ACTIONS(139),
    [aux_sym_css_named_color_token116] = ACTIONS(139),
    [aux_sym_css_named_color_token117] = ACTIONS(139),
    [aux_sym_css_named_color_token118] = ACTIONS(139),
    [aux_sym_css_named_color_token119] = ACTIONS(139),
    [aux_sym_css_named_color_token120] = ACTIONS(139),
    [aux_sym_css_named_color_token121] = ACTIONS(139),
    [aux_sym_css_named_color_token122] = ACTIONS(139),
    [aux_sym_css_named_color_token123] = ACTIONS(139),
    [aux_sym_css_named_color_token124] = ACTIONS(139),
    [aux_sym_css_named_color_token125] = ACTIONS(139),
    [aux_sym_css_named_color_token126] = ACTIONS(139),
    [aux_sym_css_named_color_token127] = ACTIONS(139),
    [aux_sym_css_named_color_token128] = ACTIONS(139),
    [aux_sym_css_named_color_token129] = ACTIONS(139),
    [aux_sym_css_named_color_token130] = ACTIONS(139),
    [aux_sym_css_named_color_token131] = ACTIONS(139),
    [aux_sym_css_named_color_token132] = ACTIONS(139),
    [aux_sym_css_named_color_token133] = ACTIONS(139),
    [aux_sym_css_named_color_token134] = ACTIONS(139),
    [aux_sym_css_named_color_token135] = ACTIONS(139),
    [aux_sym_css_named_color_token136] = ACTIONS(139),
    [aux_sym_css_named_color_token137] = ACTIONS(139),
    [aux_sym_css_named_color_token138] = ACTIONS(139),
    [aux_sym_css_named_color_token139] = ACTIONS(139),
    [aux_sym_css_named_color_token140] = ACTIONS(139),
    [aux_sym_css_named_color_token141] = ACTIONS(139),
    [aux_sym_css_named_color_token142] = ACTIONS(139),
    [aux_sym_css_named_color_token143] = ACTIONS(139),
    [aux_sym_css_named_color_token144] = ACTIONS(139),
    [aux_sym_css_named_color_token145] = ACTIONS(141),
    [aux_sym_css_named_color_token146] = ACTIONS(139),
    [aux_sym_css_named_color_token147] = ACTIONS(141),
    [aux_sym_css_named_color_token148] = ACTIONS(139),
    [sym_css_keyword_transparent] = ACTIONS(139),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(145),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(143),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(145),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(143),
    [aux_sym_css_function_hwb_token1] = ACTIONS(143),
    [aux_sym_css_function_lab_token1] = ACTIONS(143),
    [aux_sym_css_function_oklab_token1] = ACTIONS(143),
    [sym_css_hex_color_6_digits] = ACTIONS(145),
    [sym_css_hex_color_8_digits] = ACTIONS(143),
    [sym_css_hex_color_3_digits] = ACTIONS(145),
    [sym_css_hex_color_4_digits] = ACTIONS(145),
    [aux_sym_css_named_color_token1] = ACTIONS(143),
    [aux_sym_css_named_color_token2] = ACTIONS(143),
    [aux_sym_css_named_color_token3] = ACTIONS(145),
    [aux_sym_css_named_color_token4] = ACTIONS(143),
    [aux_sym_css_named_color_token5] = ACTIONS(143),
    [aux_sym_css_named_color_token6] = ACTIONS(143),
    [aux_sym_css_named_color_token7] = ACTIONS(143),
    [aux_sym_css_named_color_token8] = ACTIONS(143),
    [aux_sym_css_named_color_token9] = ACTIONS(143),
    [aux_sym_css_named_color_token10] = ACTIONS(145),
    [aux_sym_css_named_color_token11] = ACTIONS(143),
    [aux_sym_css_named_color_token12] = ACTIONS(143),
    [aux_sym_css_named_color_token13] = ACTIONS(143),
    [aux_sym_css_named_color_token14] = ACTIONS(143),
    [aux_sym_css_named_color_token15] = ACTIONS(143),
    [aux_sym_css_named_color_token16] = ACTIONS(143),
    [aux_sym_css_named_color_token17] = ACTIONS(143),
    [aux_sym_css_named_color_token18] = ACTIONS(143),
    [aux_sym_css_named_color_token19] = ACTIONS(143),
    [aux_sym_css_named_color_token20] = ACTIONS(143),
    [aux_sym_css_named_color_token21] = ACTIONS(143),
    [aux_sym_css_named_color_token22] = ACTIONS(143),
    [aux_sym_css_named_color_token23] = ACTIONS(143),
    [aux_sym_css_named_color_token24] = ACTIONS(143),
    [aux_sym_css_named_color_token25] = ACTIONS(143),
    [aux_sym_css_named_color_token26] = ACTIONS(143),
    [aux_sym_css_named_color_token27] = ACTIONS(143),
    [aux_sym_css_named_color_token28] = ACTIONS(143),
    [aux_sym_css_named_color_token29] = ACTIONS(143),
    [aux_sym_css_named_color_token30] = ACTIONS(143),
    [aux_sym_css_named_color_token31] = ACTIONS(143),
    [aux_sym_css_named_color_token32] = ACTIONS(143),
    [aux_sym_css_named_color_token33] = ACTIONS(143),
    [aux_sym_css_named_color_token34] = ACTIONS(143),
    [aux_sym_css_named_color_token35] = ACTIONS(143),
    [aux_sym_css_named_color_token36] = ACTIONS(143),
    [aux_sym_css_named_color_token37] = ACTIONS(143),
    [aux_sym_css_named_color_token38] = ACTIONS(143),
    [aux_sym_css_named_color_token39] = ACTIONS(143),
    [aux_sym_css_named_color_token40] = ACTIONS(143),
    [aux_sym_css_named_color_token41] = ACTIONS(143),
    [aux_sym_css_named_color_token42] = ACTIONS(143),
    [aux_sym_css_named_color_token43] = ACTIONS(143),
    [aux_sym_css_named_color_token44] = ACTIONS(143),
    [aux_sym_css_named_color_token45] = ACTIONS(143),
    [aux_sym_css_named_color_token46] = ACTIONS(143),
    [aux_sym_css_named_color_token47] = ACTIONS(143),
    [aux_sym_css_named_color_token48] = ACTIONS(143),
    [aux_sym_css_named_color_token49] = ACTIONS(143),
    [aux_sym_css_named_color_token50] = ACTIONS(143),
    [aux_sym_css_named_color_token51] = ACTIONS(143),
    [aux_sym_css_named_color_token52] = ACTIONS(145),
    [aux_sym_css_named_color_token53] = ACTIONS(143),
    [aux_sym_css_named_color_token54] = ACTIONS(143),
    [aux_sym_css_named_color_token55] = ACTIONS(145),
    [aux_sym_css_named_color_token56] = ACTIONS(143),
    [aux_sym_css_named_color_token57] = ACTIONS(143),
    [aux_sym_css_named_color_token58] = ACTIONS(143),
    [aux_sym_css_named_color_token59] = ACTIONS(143),
    [aux_sym_css_named_color_token60] = ACTIONS(143),
    [aux_sym_css_named_color_token61] = ACTIONS(143),
    [aux_sym_css_named_color_token62] = ACTIONS(143),
    [aux_sym_css_named_color_token63] = ACTIONS(143),
    [aux_sym_css_named_color_token64] = ACTIONS(145),
    [aux_sym_css_named_color_token65] = ACTIONS(143),
    [aux_sym_css_named_color_token66] = ACTIONS(143),
    [aux_sym_css_named_color_token67] = ACTIONS(143),
    [aux_sym_css_named_color_token68] = ACTIONS(143),
    [aux_sym_css_named_color_token69] = ACTIONS(143),
    [aux_sym_css_named_color_token70] = ACTIONS(143),
    [aux_sym_css_named_color_token71] = ACTIONS(143),
    [aux_sym_css_named_color_token72] = ACTIONS(143),
    [aux_sym_css_named_color_token73] = ACTIONS(143),
    [aux_sym_css_named_color_token74] = ACTIONS(143),
    [aux_sym_css_named_color_token75] = ACTIONS(143),
    [aux_sym_css_named_color_token76] = ACTIONS(143),
    [aux_sym_css_named_color_token77] = ACTIONS(143),
    [aux_sym_css_named_color_token78] = ACTIONS(143),
    [aux_sym_css_named_color_token79] = ACTIONS(143),
    [aux_sym_css_named_color_token80] = ACTIONS(143),
    [aux_sym_css_named_color_token81] = ACTIONS(143),
    [aux_sym_css_named_color_token82] = ACTIONS(143),
    [aux_sym_css_named_color_token83] = ACTIONS(145),
    [aux_sym_css_named_color_token84] = ACTIONS(143),
    [aux_sym_css_named_color_token85] = ACTIONS(143),
    [aux_sym_css_named_color_token86] = ACTIONS(143),
    [aux_sym_css_named_color_token87] = ACTIONS(143),
    [aux_sym_css_named_color_token88] = ACTIONS(143),
    [aux_sym_css_named_color_token89] = ACTIONS(143),
    [aux_sym_css_named_color_token90] = ACTIONS(143),
    [aux_sym_css_named_color_token91] = ACTIONS(143),
    [aux_sym_css_named_color_token92] = ACTIONS(143),
    [aux_sym_css_named_color_token93] = ACTIONS(143),
    [aux_sym_css_named_color_token94] = ACTIONS(143),
    [aux_sym_css_named_color_token95] = ACTIONS(143),
    [aux_sym_css_named_color_token96] = ACTIONS(143),
    [aux_sym_css_named_color_token97] = ACTIONS(143),
    [aux_sym_css_named_color_token98] = ACTIONS(143),
    [aux_sym_css_named_color_token99] = ACTIONS(143),
    [aux_sym_css_named_color_token100] = ACTIONS(143),
    [aux_sym_css_named_color_token101] = ACTIONS(143),
    [aux_sym_css_named_color_token102] = ACTIONS(143),
    [aux_sym_css_named_color_token103] = ACTIONS(143),
    [aux_sym_css_named_color_token104] = ACTIONS(145),
    [aux_sym_css_named_color_token105] = ACTIONS(143),
    [aux_sym_css_named_color_token106] = ACTIONS(145),
    [aux_sym_css_named_color_token107] = ACTIONS(143),
    [aux_sym_css_named_color_token108] = ACTIONS(143),
    [aux_sym_css_named_color_token109] = ACTIONS(143),
    [aux_sym_css_named_color_token110] = ACTIONS(143),
    [aux_sym_css_named_color_token111] = ACTIONS(143),
    [aux_sym_css_named_color_token112] = ACTIONS(143),
    [aux_sym_css_named_color_token113] = ACTIONS(143),
    [aux_sym_css_named_color_token114] = ACTIONS(143),
    [aux_sym_css_named_color_token115] = ACTIONS(143),
    [aux_sym_css_named_color_token116] = ACTIONS(143),
    [aux_sym_css_named_color_token117] = ACTIONS(143),
    [aux_sym_css_named_color_token118] = ACTIONS(143),
    [aux_sym_css_named_color_token119] = ACTIONS(143),
    [aux_sym_css_named_color_token120] = ACTIONS(143),
    [aux_sym_css_named_color_token121] = ACTIONS(143),
    [aux_sym_css_named_color_token122] = ACTIONS(143),
    [aux_sym_css_named_color_token123] = ACTIONS(143),
    [aux_sym_css_named_color_token124] = ACTIONS(143),
    [aux_sym_css_named_color_token125] = ACTIONS(143),
    [aux_sym_css_named_color_token126] = ACTIONS(143),
    [aux_sym_css_named_color_token127] = ACTIONS(143),
    [aux_sym_css_named_color_token128] = ACTIONS(143),
    [aux_sym_css_named_color_token129] = ACTIONS(143),
    [aux_sym_css_named_color_token130] = ACTIONS(143),
    [aux_sym_css_named_color_token131] = ACTIONS(143),
    [aux_sym_css_named_color_token132] = ACTIONS(143),
    [aux_sym_css_named_color_token133] = ACTIONS(143),
    [aux_sym_css_named_color_token134] = ACTIONS(143),
    [aux_sym_css_named_color_token135] = ACTIONS(143),
    [aux_sym_css_named_color_token136] = ACTIONS(143),
    [aux_sym_css_named_color_token137] = ACTIONS(143),
    [aux_sym_css_named_color_token138] = ACTIONS(143),
    [aux_sym_css_named_color_token139] = ACTIONS(143),
    [aux_sym_css_named_color_token140] = ACTIONS(143),
    [aux_sym_css_named_color_token141] = ACTIONS(143),
    [aux_sym_css_named_color_token142] = ACTIONS(143),
    [aux_sym_css_named_color_token143] = ACTIONS(143),
    [aux_sym_css_named_color_token144] = ACTIONS(143),
    [aux_sym_css_named_color_token145] = ACTIONS(145),
    [aux_sym_css_named_color_token146] = ACTIONS(143),
    [aux_sym_css_named_color_token147] = ACTIONS(145),
    [aux_sym_css_named_color_token148] = ACTIONS(143),
    [sym_css_keyword_transparent] = ACTIONS(143),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(149),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(147),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(149),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(147),
    [aux_sym_css_function_hwb_token1] = ACTIONS(147),
    [aux_sym_css_function_lab_token1] = ACTIONS(147),
    [aux_sym_css_function_oklab_token1] = ACTIONS(147),
    [sym_css_hex_color_6_digits] = ACTIONS(149),
    [sym_css_hex_color_8_digits] = ACTIONS(147),
    [sym_css_hex_color_3_digits] = ACTIONS(149),
    [sym_css_hex_color_4_digits] = ACTIONS(149),
    [aux_sym_css_named_color_token1] = ACTIONS(147),
    [aux_sym_css_named_color_token2] = ACTIONS(147),
    [aux_sym_css_named_color_token3] = ACTIONS(149),
    [aux_sym_css_named_color_token4] = ACTIONS(147),
    [aux_sym_css_named_color_token5] = ACTIONS(147),
    [aux_sym_css_named_color_token6] = ACTIONS(147),
    [aux_sym_css_named_color_token7] = ACTIONS(147),
    [aux_sym_css_named_color_token8] = ACTIONS(147),
    [aux_sym_css_named_color_token9] = ACTIONS(147),
    [aux_sym_css_named_color_token10] = ACTIONS(149),
    [aux_sym_css_named_color_token11] = ACTIONS(147),
    [aux_sym_css_named_color_token12] = ACTIONS(147),
    [aux_sym_css_named_color_token13] = ACTIONS(147),
    [aux_sym_css_named_color_token14] = ACTIONS(147),
    [aux_sym_css_named_color_token15] = ACTIONS(147),
    [aux_sym_css_named_color_token16] = ACTIONS(147),
    [aux_sym_css_named_color_token17] = ACTIONS(147),
    [aux_sym_css_named_color_token18] = ACTIONS(147),
    [aux_sym_css_named_color_token19] = ACTIONS(147),
    [aux_sym_css_named_color_token20] = ACTIONS(147),
    [aux_sym_css_named_color_token21] = ACTIONS(147),
    [aux_sym_css_named_color_token22] = ACTIONS(147),
    [aux_sym_css_named_color_token23] = ACTIONS(147),
    [aux_sym_css_named_color_token24] = ACTIONS(147),
    [aux_sym_css_named_color_token25] = ACTIONS(147),
    [aux_sym_css_named_color_token26] = ACTIONS(147),
    [aux_sym_css_named_color_token27] = ACTIONS(147),
    [aux_sym_css_named_color_token28] = ACTIONS(147),
    [aux_sym_css_named_color_token29] = ACTIONS(147),
    [aux_sym_css_named_color_token30] = ACTIONS(147),
    [aux_sym_css_named_color_token31] = ACTIONS(147),
    [aux_sym_css_named_color_token32] = ACTIONS(147),
    [aux_sym_css_named_color_token33] = ACTIONS(147),
    [aux_sym_css_named_color_token34] = ACTIONS(147),
    [aux_sym_css_named_color_token35] = ACTIONS(147),
    [aux_sym_css_named_color_token36] = ACTIONS(147),
    [aux_sym_css_named_color_token37] = ACTIONS(147),
    [aux_sym_css_named_color_token38] = ACTIONS(147),
    [aux_sym_css_named_color_token39] = ACTIONS(147),
    [aux_sym_css_named_color_token40] = ACTIONS(147),
    [aux_sym_css_named_color_token41] = ACTIONS(147),
    [aux_sym_css_named_color_token42] = ACTIONS(147),
    [aux_sym_css_named_color_token43] = ACTIONS(147),
    [aux_sym_css_named_color_token44] = ACTIONS(147),
    [aux_sym_css_named_color_token45] = ACTIONS(147),
    [aux_sym_css_named_color_token46] = ACTIONS(147),
    [aux_sym_css_named_color_token47] = ACTIONS(147),
    [aux_sym_css_named_color_token48] = ACTIONS(147),
    [aux_sym_css_named_color_token49] = ACTIONS(147),
    [aux_sym_css_named_color_token50] = ACTIONS(147),
    [aux_sym_css_named_color_token51] = ACTIONS(147),
    [aux_sym_css_named_color_token52] = ACTIONS(149),
    [aux_sym_css_named_color_token53] = ACTIONS(147),
    [aux_sym_css_named_color_token54] = ACTIONS(147),
    [aux_sym_css_named_color_token55] = ACTIONS(149),
    [aux_sym_css_named_color_token56] = ACTIONS(147),
    [aux_sym_css_named_color_token57] = ACTIONS(147),
    [aux_sym_css_named_color_token58] = ACTIONS(147),
    [aux_sym_css_named_color_token59] = ACTIONS(147),
    [aux_sym_css_named_color_token60] = ACTIONS(147),
    [aux_sym_css_named_color_token61] = ACTIONS(147),
    [aux_sym_css_named_color_token62] = ACTIONS(147),
    [aux_sym_css_named_color_token63] = ACTIONS(147),
    [aux_sym_css_named_color_token64] = ACTIONS(149),
    [aux_sym_css_named_color_token65] = ACTIONS(147),
    [aux_sym_css_named_color_token66] = ACTIONS(147),
    [aux_sym_css_named_color_token67] = ACTIONS(147),
    [aux_sym_css_named_color_token68] = ACTIONS(147),
    [aux_sym_css_named_color_token69] = ACTIONS(147),
    [aux_sym_css_named_color_token70] = ACTIONS(147),
    [aux_sym_css_named_color_token71] = ACTIONS(147),
    [aux_sym_css_named_color_token72] = ACTIONS(147),
    [aux_sym_css_named_color_token73] = ACTIONS(147),
    [aux_sym_css_named_color_token74] = ACTIONS(147),
    [aux_sym_css_named_color_token75] = ACTIONS(147),
    [aux_sym_css_named_color_token76] = ACTIONS(147),
    [aux_sym_css_named_color_token77] = ACTIONS(147),
    [aux_sym_css_named_color_token78] = ACTIONS(147),
    [aux_sym_css_named_color_token79] = ACTIONS(147),
    [aux_sym_css_named_color_token80] = ACTIONS(147),
    [aux_sym_css_named_color_token81] = ACTIONS(147),
    [aux_sym_css_named_color_token82] = ACTIONS(147),
    [aux_sym_css_named_color_token83] = ACTIONS(149),
    [aux_sym_css_named_color_token84] = ACTIONS(147),
    [aux_sym_css_named_color_token85] = ACTIONS(147),
    [aux_sym_css_named_color_token86] = ACTIONS(147),
    [aux_sym_css_named_color_token87] = ACTIONS(147),
    [aux_sym_css_named_color_token88] = ACTIONS(147),
    [aux_sym_css_named_color_token89] = ACTIONS(147),
    [aux_sym_css_named_color_token90] = ACTIONS(147),
    [aux_sym_css_named_color_token91] = ACTIONS(147),
    [aux_sym_css_named_color_token92] = ACTIONS(147),
    [aux_sym_css_named_color_token93] = ACTIONS(147),
    [aux_sym_css_named_color_token94] = ACTIONS(147),
    [aux_sym_css_named_color_token95] = ACTIONS(147),
    [aux_sym_css_named_color_token96] = ACTIONS(147),
    [aux_sym_css_named_color_token97] = ACTIONS(147),
    [aux_sym_css_named_color_token98] = ACTIONS(147),
    [aux_sym_css_named_color_token99] = ACTIONS(147),
    [aux_sym_css_named_color_token100] = ACTIONS(147),
    [aux_sym_css_named_color_token101] = ACTIONS(147),
    [aux_sym_css_named_color_token102] = ACTIONS(147),
    [aux_sym_css_named_color_token103] = ACTIONS(147),
    [aux_sym_css_named_color_token104] = ACTIONS(149),
    [aux_sym_css_named_color_token105] = ACTIONS(147),
    [aux_sym_css_named_color_token106] = ACTIONS(149),
    [aux_sym_css_named_color_token107] = ACTIONS(147),
    [aux_sym_css_named_color_token108] = ACTIONS(147),
    [aux_sym_css_named_color_token109] = ACTIONS(147),
    [aux_sym_css_named_color_token110] = ACTIONS(147),
    [aux_sym_css_named_color_token111] = ACTIONS(147),
    [aux_sym_css_named_color_token112] = ACTIONS(147),
    [aux_sym_css_named_color_token113] = ACTIONS(147),
    [aux_sym_css_named_color_token114] = ACTIONS(147),
    [aux_sym_css_named_color_token115] = ACTIONS(147),
    [aux_sym_css_named_color_token116] = ACTIONS(147),
    [aux_sym_css_named_color_token117] = ACTIONS(147),
    [aux_sym_css_named_color_token118] = ACTIONS(147),
    [aux_sym_css_named_color_token119] = ACTIONS(147),
    [aux_sym_css_named_color_token120] = ACTIONS(147),
    [aux_sym_css_named_color_token121] = ACTIONS(147),
    [aux_sym_css_named_color_token122] = ACTIONS(147),
    [aux_sym_css_named_color_token123] = ACTIONS(147),
    [aux_sym_css_named_color_token124] = ACTIONS(147),
    [aux_sym_css_named_color_token125] = ACTIONS(147),
    [aux_sym_css_named_color_token126] = ACTIONS(147),
    [aux_sym_css_named_color_token127] = ACTIONS(147),
    [aux_sym_css_named_color_token128] = ACTIONS(147),
    [aux_sym_css_named_color_token129] = ACTIONS(147),
    [aux_sym_css_named_color_token130] = ACTIONS(147),
    [aux_sym_css_named_color_token131] = ACTIONS(147),
    [aux_sym_css_named_color_token132] = ACTIONS(147),
    [aux_sym_css_named_color_token133] = ACTIONS(147),
    [aux_sym_css_named_color_token134] = ACTIONS(147),
    [aux_sym_css_named_color_token135] = ACTIONS(147),
    [aux_sym_css_named_color_token136] = ACTIONS(147),
    [aux_sym_css_named_color_token137] = ACTIONS(147),
    [aux_sym_css_named_color_token138] = ACTIONS(147),
    [aux_sym_css_named_color_token139] = ACTIONS(147),
    [aux_sym_css_named_color_token140] = ACTIONS(147),
    [aux_sym_css_named_color_token141] = ACTIONS(147),
    [aux_sym_css_named_color_token142] = ACTIONS(147),
    [aux_sym_css_named_color_token143] = ACTIONS(147),
    [aux_sym_css_named_color_token144] = ACTIONS(147),
    [aux_sym_css_named_color_token145] = ACTIONS(149),
    [aux_sym_css_named_color_token146] = ACTIONS(147),
    [aux_sym_css_named_color_token147] = ACTIONS(149),
    [aux_sym_css_named_color_token148] = ACTIONS(147),
    [sym_css_keyword_transparent] = ACTIONS(147),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(153),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(151),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(153),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(151),
    [aux_sym_css_function_hwb_token1] = ACTIONS(151),
    [aux_sym_css_function_lab_token1] = ACTIONS(151),
    [aux_sym_css_function_oklab_token1] = ACTIONS(151),
    [sym_css_hex_color_6_digits] = ACTIONS(153),
    [sym_css_hex_color_8_digits] = ACTIONS(151),
    [sym_css_hex_color_3_digits] = ACTIONS(153),
    [sym_css_hex_color_4_digits] = ACTIONS(153),
    [aux_sym_css_named_color_token1] = ACTIONS(151),
    [aux_sym_css_named_color_token2] = ACTIONS(151),
    [aux_sym_css_named_color_token3] = ACTIONS(153),
    [aux_sym_css_named_color_token4] = ACTIONS(151),
    [aux_sym_css_named_color_token5] = ACTIONS(151),
    [aux_sym_css_named_color_token6] = ACTIONS(151),
    [aux_sym_css_named_color_token7] = ACTIONS(151),
    [aux_sym_css_named_color_token8] = ACTIONS(151),
    [aux_sym_css_named_color_token9] = ACTIONS(151),
    [aux_sym_css_named_color_token10] = ACTIONS(153),
    [aux_sym_css_named_color_token11] = ACTIONS(151),
    [aux_sym_css_named_color_token12] = ACTIONS(151),
    [aux_sym_css_named_color_token13] = ACTIONS(151),
    [aux_sym_css_named_color_token14] = ACTIONS(151),
    [aux_sym_css_named_color_token15] = ACTIONS(151),
    [aux_sym_css_named_color_token16] = ACTIONS(151),
    [aux_sym_css_named_color_token17] = ACTIONS(151),
    [aux_sym_css_named_color_token18] = ACTIONS(151),
    [aux_sym_css_named_color_token19] = ACTIONS(151),
    [aux_sym_css_named_color_token20] = ACTIONS(151),
    [aux_sym_css_named_color_token21] = ACTIONS(151),
    [aux_sym_css_named_color_token22] = ACTIONS(151),
    [aux_sym_css_named_color_token23] = ACTIONS(151),
    [aux_sym_css_named_color_token24] = ACTIONS(151),
    [aux_sym_css_named_color_token25] = ACTIONS(151),
    [aux_sym_css_named_color_token26] = ACTIONS(151),
    [aux_sym_css_named_color_token27] = ACTIONS(151),
    [aux_sym_css_named_color_token28] = ACTIONS(151),
    [aux_sym_css_named_color_token29] = ACTIONS(151),
    [aux_sym_css_named_color_token30] = ACTIONS(151),
    [aux_sym_css_named_color_token31] = ACTIONS(151),
    [aux_sym_css_named_color_token32] = ACTIONS(151),
    [aux_sym_css_named_color_token33] = ACTIONS(151),
    [aux_sym_css_named_color_token34] = ACTIONS(151),
    [aux_sym_css_named_color_token35] = ACTIONS(151),
    [aux_sym_css_named_color_token36] = ACTIONS(151),
    [aux_sym_css_named_color_token37] = ACTIONS(151),
    [aux_sym_css_named_color_token38] = ACTIONS(151),
    [aux_sym_css_named_color_token39] = ACTIONS(151),
    [aux_sym_css_named_color_token40] = ACTIONS(151),
    [aux_sym_css_named_color_token41] = ACTIONS(151),
    [aux_sym_css_named_color_token42] = ACTIONS(151),
    [aux_sym_css_named_color_token43] = ACTIONS(151),
    [aux_sym_css_named_color_token44] = ACTIONS(151),
    [aux_sym_css_named_color_token45] = ACTIONS(151),
    [aux_sym_css_named_color_token46] = ACTIONS(151),
    [aux_sym_css_named_color_token47] = ACTIONS(151),
    [aux_sym_css_named_color_token48] = ACTIONS(151),
    [aux_sym_css_named_color_token49] = ACTIONS(151),
    [aux_sym_css_named_color_token50] = ACTIONS(151),
    [aux_sym_css_named_color_token51] = ACTIONS(151),
    [aux_sym_css_named_color_token52] = ACTIONS(153),
    [aux_sym_css_named_color_token53] = ACTIONS(151),
    [aux_sym_css_named_color_token54] = ACTIONS(151),
    [aux_sym_css_named_color_token55] = ACTIONS(153),
    [aux_sym_css_named_color_token56] = ACTIONS(151),
    [aux_sym_css_named_color_token57] = ACTIONS(151),
    [aux_sym_css_named_color_token58] = ACTIONS(151),
    [aux_sym_css_named_color_token59] = ACTIONS(151),
    [aux_sym_css_named_color_token60] = ACTIONS(151),
    [aux_sym_css_named_color_token61] = ACTIONS(151),
    [aux_sym_css_named_color_token62] = ACTIONS(151),
    [aux_sym_css_named_color_token63] = ACTIONS(151),
    [aux_sym_css_named_color_token64] = ACTIONS(153),
    [aux_sym_css_named_color_token65] = ACTIONS(151),
    [aux_sym_css_named_color_token66] = ACTIONS(151),
    [aux_sym_css_named_color_token67] = ACTIONS(151),
    [aux_sym_css_named_color_token68] = ACTIONS(151),
    [aux_sym_css_named_color_token69] = ACTIONS(151),
    [aux_sym_css_named_color_token70] = ACTIONS(151),
    [aux_sym_css_named_color_token71] = ACTIONS(151),
    [aux_sym_css_named_color_token72] = ACTIONS(151),
    [aux_sym_css_named_color_token73] = ACTIONS(151),
    [aux_sym_css_named_color_token74] = ACTIONS(151),
    [aux_sym_css_named_color_token75] = ACTIONS(151),
    [aux_sym_css_named_color_token76] = ACTIONS(151),
    [aux_sym_css_named_color_token77] = ACTIONS(151),
    [aux_sym_css_named_color_token78] = ACTIONS(151),
    [aux_sym_css_named_color_token79] = ACTIONS(151),
    [aux_sym_css_named_color_token80] = ACTIONS(151),
    [aux_sym_css_named_color_token81] = ACTIONS(151),
    [aux_sym_css_named_color_token82] = ACTIONS(151),
    [aux_sym_css_named_color_token83] = ACTIONS(153),
    [aux_sym_css_named_color_token84] = ACTIONS(151),
    [aux_sym_css_named_color_token85] = ACTIONS(151),
    [aux_sym_css_named_color_token86] = ACTIONS(151),
    [aux_sym_css_named_color_token87] = ACTIONS(151),
    [aux_sym_css_named_color_token88] = ACTIONS(151),
    [aux_sym_css_named_color_token89] = ACTIONS(151),
    [aux_sym_css_named_color_token90] = ACTIONS(151),
    [aux_sym_css_named_color_token91] = ACTIONS(151),
    [aux_sym_css_named_color_token92] = ACTIONS(151),
    [aux_sym_css_named_color_token93] = ACTIONS(151),
    [aux_sym_css_named_color_token94] = ACTIONS(151),
    [aux_sym_css_named_color_token95] = ACTIONS(151),
    [aux_sym_css_named_color_token96] = ACTIONS(151),
    [aux_sym_css_named_color_token97] = ACTIONS(151),
    [aux_sym_css_named_color_token98] = ACTIONS(151),
    [aux_sym_css_named_color_token99] = ACTIONS(151),
    [aux_sym_css_named_color_token100] = ACTIONS(151),
    [aux_sym_css_named_color_token101] = ACTIONS(151),
    [aux_sym_css_named_color_token102] = ACTIONS(151),
    [aux_sym_css_named_color_token103] = ACTIONS(151),
    [aux_sym_css_named_color_token104] = ACTIONS(153),
    [aux_sym_css_named_color_token105] = ACTIONS(151),
    [aux_sym_css_named_color_token106] = ACTIONS(153),
    [aux_sym_css_named_color_token107] = ACTIONS(151),
    [aux_sym_css_named_color_token108] = ACTIONS(151),
    [aux_sym_css_named_color_token109] = ACTIONS(151),
    [aux_sym_css_named_color_token110] = ACTIONS(151),
    [aux_sym_css_named_color_token111] = ACTIONS(151),
    [aux_sym_css_named_color_token112] = ACTIONS(151),
    [aux_sym_css_named_color_token113] = ACTIONS(151),
    [aux_sym_css_named_color_token114] = ACTIONS(151),
    [aux_sym_css_named_color_token115] = ACTIONS(151),
    [aux_sym_css_named_color_token116] = ACTIONS(151),
    [aux_sym_css_named_color_token117] = ACTIONS(151),
    [aux_sym_css_named_color_token118] = ACTIONS(151),
    [aux_sym_css_named_color_token119] = ACTIONS(151),
    [aux_sym_css_named_color_token120] = ACTIONS(151),
    [aux_sym_css_named_color_token121] = ACTIONS(151),
    [aux_sym_css_named_color_token122] = ACTIONS(151),
    [aux_sym_css_named_color_token123] = ACTIONS(151),
    [aux_sym_css_named_color_token124] = ACTIONS(151),
    [aux_sym_css_named_color_token125] = ACTIONS(151),
    [aux_sym_css_named_color_token126] = ACTIONS(151),
    [aux_sym_css_named_color_token127] = ACTIONS(151),
    [aux_sym_css_named_color_token128] = ACTIONS(151),
    [aux_sym_css_named_color_token129] = ACTIONS(151),
    [aux_sym_css_named_color_token130] = ACTIONS(151),
    [aux_sym_css_named_color_token131] = ACTIONS(151),
    [aux_sym_css_named_color_token132] = ACTIONS(151),
    [aux_sym_css_named_color_token133] = ACTIONS(151),
    [aux_sym_css_named_color_token134] = ACTIONS(151),
    [aux_sym_css_named_color_token135] = ACTIONS(151),
    [aux_sym_css_named_color_token136] = ACTIONS(151),
    [aux_sym_css_named_color_token137] = ACTIONS(151),
    [aux_sym_css_named_color_token138] = ACTIONS(151),
    [aux_sym_css_named_color_token139] = ACTIONS(151),
    [aux_sym_css_named_color_token140] = ACTIONS(151),
    [aux_sym_css_named_color_token141] = ACTIONS(151),
    [aux_sym_css_named_color_token142] = ACTIONS(151),
    [aux_sym_css_named_color_token143] = ACTIONS(151),
    [aux_sym_css_named_color_token144] = ACTIONS(151),
    [aux_sym_css_named_color_token145] = ACTIONS(153),
    [aux_sym_css_named_color_token146] = ACTIONS(151),
    [aux_sym_css_named_color_token147] = ACTIONS(153),
    [aux_sym_css_named_color_token148] = ACTIONS(151),
    [sym_css_keyword_transparent] = ACTIONS(151),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(157),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(155),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(157),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(155),
    [aux_sym_css_function_hwb_token1] = ACTIONS(155),
    [aux_sym_css_function_lab_token1] = ACTIONS(155),
    [aux_sym_css_function_oklab_token1] = ACTIONS(155),
    [sym_css_hex_color_6_digits] = ACTIONS(157),
    [sym_css_hex_color_8_digits] = ACTIONS(155),
    [sym_css_hex_color_3_digits] = ACTIONS(157),
    [sym_css_hex_color_4_digits] = ACTIONS(157),
    [aux_sym_css_named_color_token1] = ACTIONS(155),
    [aux_sym_css_named_color_token2] = ACTIONS(155),
    [aux_sym_css_named_color_token3] = ACTIONS(157),
    [aux_sym_css_named_color_token4] = ACTIONS(155),
    [aux_sym_css_named_color_token5] = ACTIONS(155),
    [aux_sym_css_named_color_token6] = ACTIONS(155),
    [aux_sym_css_named_color_token7] = ACTIONS(155),
    [aux_sym_css_named_color_token8] = ACTIONS(155),
    [aux_sym_css_named_color_token9] = ACTIONS(155),
    [aux_sym_css_named_color_token10] = ACTIONS(157),
    [aux_sym_css_named_color_token11] = ACTIONS(155),
    [aux_sym_css_named_color_token12] = ACTIONS(155),
    [aux_sym_css_named_color_token13] = ACTIONS(155),
    [aux_sym_css_named_color_token14] = ACTIONS(155),
    [aux_sym_css_named_color_token15] = ACTIONS(155),
    [aux_sym_css_named_color_token16] = ACTIONS(155),
    [aux_sym_css_named_color_token17] = ACTIONS(155),
    [aux_sym_css_named_color_token18] = ACTIONS(155),
    [aux_sym_css_named_color_token19] = ACTIONS(155),
    [aux_sym_css_named_color_token20] = ACTIONS(155),
    [aux_sym_css_named_color_token21] = ACTIONS(155),
    [aux_sym_css_named_color_token22] = ACTIONS(155),
    [aux_sym_css_named_color_token23] = ACTIONS(155),
    [aux_sym_css_named_color_token24] = ACTIONS(155),
    [aux_sym_css_named_color_token25] = ACTIONS(155),
    [aux_sym_css_named_color_token26] = ACTIONS(155),
    [aux_sym_css_named_color_token27] = ACTIONS(155),
    [aux_sym_css_named_color_token28] = ACTIONS(155),
    [aux_sym_css_named_color_token29] = ACTIONS(155),
    [aux_sym_css_named_color_token30] = ACTIONS(155),
    [aux_sym_css_named_color_token31] = ACTIONS(155),
    [aux_sym_css_named_color_token32] = ACTIONS(155),
    [aux_sym_css_named_color_token33] = ACTIONS(155),
    [aux_sym_css_named_color_token34] = ACTIONS(155),
    [aux_sym_css_named_color_token35] = ACTIONS(155),
    [aux_sym_css_named_color_token36] = ACTIONS(155),
    [aux_sym_css_named_color_token37] = ACTIONS(155),
    [aux_sym_css_named_color_token38] = ACTIONS(155),
    [aux_sym_css_named_color_token39] = ACTIONS(155),
    [aux_sym_css_named_color_token40] = ACTIONS(155),
    [aux_sym_css_named_color_token41] = ACTIONS(155),
    [aux_sym_css_named_color_token42] = ACTIONS(155),
    [aux_sym_css_named_color_token43] = ACTIONS(155),
    [aux_sym_css_named_color_token44] = ACTIONS(155),
    [aux_sym_css_named_color_token45] = ACTIONS(155),
    [aux_sym_css_named_color_token46] = ACTIONS(155),
    [aux_sym_css_named_color_token47] = ACTIONS(155),
    [aux_sym_css_named_color_token48] = ACTIONS(155),
    [aux_sym_css_named_color_token49] = ACTIONS(155),
    [aux_sym_css_named_color_token50] = ACTIONS(155),
    [aux_sym_css_named_color_token51] = ACTIONS(155),
    [aux_sym_css_named_color_token52] = ACTIONS(157),
    [aux_sym_css_named_color_token53] = ACTIONS(155),
    [aux_sym_css_named_color_token54] = ACTIONS(155),
    [aux_sym_css_named_color_token55] = ACTIONS(157),
    [aux_sym_css_named_color_token56] = ACTIONS(155),
    [aux_sym_css_named_color_token57] = ACTIONS(155),
    [aux_sym_css_named_color_token58] = ACTIONS(155),
    [aux_sym_css_named_color_token59] = ACTIONS(155),
    [aux_sym_css_named_color_token60] = ACTIONS(155),
    [aux_sym_css_named_color_token61] = ACTIONS(155),
    [aux_sym_css_named_color_token62] = ACTIONS(155),
    [aux_sym_css_named_color_token63] = ACTIONS(155),
    [aux_sym_css_named_color_token64] = ACTIONS(157),
    [aux_sym_css_named_color_token65] = ACTIONS(155),
    [aux_sym_css_named_color_token66] = ACTIONS(155),
    [aux_sym_css_named_color_token67] = ACTIONS(155),
    [aux_sym_css_named_color_token68] = ACTIONS(155),
    [aux_sym_css_named_color_token69] = ACTIONS(155),
    [aux_sym_css_named_color_token70] = ACTIONS(155),
    [aux_sym_css_named_color_token71] = ACTIONS(155),
    [aux_sym_css_named_color_token72] = ACTIONS(155),
    [aux_sym_css_named_color_token73] = ACTIONS(155),
    [aux_sym_css_named_color_token74] = ACTIONS(155),
    [aux_sym_css_named_color_token75] = ACTIONS(155),
    [aux_sym_css_named_color_token76] = ACTIONS(155),
    [aux_sym_css_named_color_token77] = ACTIONS(155),
    [aux_sym_css_named_color_token78] = ACTIONS(155),
    [aux_sym_css_named_color_token79] = ACTIONS(155),
    [aux_sym_css_named_color_token80] = ACTIONS(155),
    [aux_sym_css_named_color_token81] = ACTIONS(155),
    [aux_sym_css_named_color_token82] = ACTIONS(155),
    [aux_sym_css_named_color_token83] = ACTIONS(157),
    [aux_sym_css_named_color_token84] = ACTIONS(155),
    [aux_sym_css_named_color_token85] = ACTIONS(155),
    [aux_sym_css_named_color_token86] = ACTIONS(155),
    [aux_sym_css_named_color_token87] = ACTIONS(155),
    [aux_sym_css_named_color_token88] = ACTIONS(155),
    [aux_sym_css_named_color_token89] = ACTIONS(155),
    [aux_sym_css_named_color_token90] = ACTIONS(155),
    [aux_sym_css_named_color_token91] = ACTIONS(155),
    [aux_sym_css_named_color_token92] = ACTIONS(155),
    [aux_sym_css_named_color_token93] = ACTIONS(155),
    [aux_sym_css_named_color_token94] = ACTIONS(155),
    [aux_sym_css_named_color_token95] = ACTIONS(155),
    [aux_sym_css_named_color_token96] = ACTIONS(155),
    [aux_sym_css_named_color_token97] = ACTIONS(155),
    [aux_sym_css_named_color_token98] = ACTIONS(155),
    [aux_sym_css_named_color_token99] = ACTIONS(155),
    [aux_sym_css_named_color_token100] = ACTIONS(155),
    [aux_sym_css_named_color_token101] = ACTIONS(155),
    [aux_sym_css_named_color_token102] = ACTIONS(155),
    [aux_sym_css_named_color_token103] = ACTIONS(155),
    [aux_sym_css_named_color_token104] = ACTIONS(157),
    [aux_sym_css_named_color_token105] = ACTIONS(155),
    [aux_sym_css_named_color_token106] = ACTIONS(157),
    [aux_sym_css_named_color_token107] = ACTIONS(155),
    [aux_sym_css_named_color_token108] = ACTIONS(155),
    [aux_sym_css_named_color_token109] = ACTIONS(155),
    [aux_sym_css_named_color_token110] = ACTIONS(155),
    [aux_sym_css_named_color_token111] = ACTIONS(155),
    [aux_sym_css_named_color_token112] = ACTIONS(155),
    [aux_sym_css_named_color_token113] = ACTIONS(155),
    [aux_sym_css_named_color_token114] = ACTIONS(155),
    [aux_sym_css_named_color_token115] = ACTIONS(155),
    [aux_sym_css_named_color_token116] = ACTIONS(155),
    [aux_sym_css_named_color_token117] = ACTIONS(155),
    [aux_sym_css_named_color_token118] = ACTIONS(155),
    [aux_sym_css_named_color_token119] = ACTIONS(155),
    [aux_sym_css_named_color_token120] = ACTIONS(155),
    [aux_sym_css_named_color_token121] = ACTIONS(155),
    [aux_sym_css_named_color_token122] = ACTIONS(155),
    [aux_sym_css_named_color_token123] = ACTIONS(155),
    [aux_sym_css_named_color_token124] = ACTIONS(155),
    [aux_sym_css_named_color_token125] = ACTIONS(155),
    [aux_sym_css_named_color_token126] = ACTIONS(155),
    [aux_sym_css_named_color_token127] = ACTIONS(155),
    [aux_sym_css_named_color_token128] = ACTIONS(155),
    [aux_sym_css_named_color_token129] = ACTIONS(155),
    [aux_sym_css_named_color_token130] = ACTIONS(155),
    [aux_sym_css_named_color_token131] = ACTIONS(155),
    [aux_sym_css_named_color_token132] = ACTIONS(155),
    [aux_sym_css_named_color_token133] = ACTIONS(155),
    [aux_sym_css_named_color_token134] = ACTIONS(155),
    [aux_sym_css_named_color_token135] = ACTIONS(155),
    [aux_sym_css_named_color_token136] = ACTIONS(155),
    [aux_sym_css_named_color_token137] = ACTIONS(155),
    [aux_sym_css_named_color_token138] = ACTIONS(155),
    [aux_sym_css_named_color_token139] = ACTIONS(155),
    [aux_sym_css_named_color_token140] = ACTIONS(155),
    [aux_sym_css_named_color_token141] = ACTIONS(155),
    [aux_sym_css_named_color_token142] = ACTIONS(155),
    [aux_sym_css_named_color_token143] = ACTIONS(155),
    [aux_sym_css_named_color_token144] = ACTIONS(155),
    [aux_sym_css_named_color_token145] = ACTIONS(157),
    [aux_sym_css_named_color_token146] = ACTIONS(155),
    [aux_sym_css_named_color_token147] = ACTIONS(157),
    [aux_sym_css_named_color_token148] = ACTIONS(155),
    [sym_css_keyword_transparent] = ACTIONS(155),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(161),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(159),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(161),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(159),
    [aux_sym_css_function_hwb_token1] = ACTIONS(159),
    [aux_sym_css_function_lab_token1] = ACTIONS(159),
    [aux_sym_css_function_oklab_token1] = ACTIONS(159),
    [sym_css_hex_color_6_digits] = ACTIONS(161),
    [sym_css_hex_color_8_digits] = ACTIONS(159),
    [sym_css_hex_color_3_digits] = ACTIONS(161),
    [sym_css_hex_color_4_digits] = ACTIONS(161),
    [aux_sym_css_named_color_token1] = ACTIONS(159),
    [aux_sym_css_named_color_token2] = ACTIONS(159),
    [aux_sym_css_named_color_token3] = ACTIONS(161),
    [aux_sym_css_named_color_token4] = ACTIONS(159),
    [aux_sym_css_named_color_token5] = ACTIONS(159),
    [aux_sym_css_named_color_token6] = ACTIONS(159),
    [aux_sym_css_named_color_token7] = ACTIONS(159),
    [aux_sym_css_named_color_token8] = ACTIONS(159),
    [aux_sym_css_named_color_token9] = ACTIONS(159),
    [aux_sym_css_named_color_token10] = ACTIONS(161),
    [aux_sym_css_named_color_token11] = ACTIONS(159),
    [aux_sym_css_named_color_token12] = ACTIONS(159),
    [aux_sym_css_named_color_token13] = ACTIONS(159),
    [aux_sym_css_named_color_token14] = ACTIONS(159),
    [aux_sym_css_named_color_token15] = ACTIONS(159),
    [aux_sym_css_named_color_token16] = ACTIONS(159),
    [aux_sym_css_named_color_token17] = ACTIONS(159),
    [aux_sym_css_named_color_token18] = ACTIONS(159),
    [aux_sym_css_named_color_token19] = ACTIONS(159),
    [aux_sym_css_named_color_token20] = ACTIONS(159),
    [aux_sym_css_named_color_token21] = ACTIONS(159),
    [aux_sym_css_named_color_token22] = ACTIONS(159),
    [aux_sym_css_named_color_token23] = ACTIONS(159),
    [aux_sym_css_named_color_token24] = ACTIONS(159),
    [aux_sym_css_named_color_token25] = ACTIONS(159),
    [aux_sym_css_named_color_token26] = ACTIONS(159),
    [aux_sym_css_named_color_token27] = ACTIONS(159),
    [aux_sym_css_named_color_token28] = ACTIONS(159),
    [aux_sym_css_named_color_token29] = ACTIONS(159),
    [aux_sym_css_named_color_token30] = ACTIONS(159),
    [aux_sym_css_named_color_token31] = ACTIONS(159),
    [aux_sym_css_named_color_token32] = ACTIONS(159),
    [aux_sym_css_named_color_token33] = ACTIONS(159),
    [aux_sym_css_named_color_token34] = ACTIONS(159),
    [aux_sym_css_named_color_token35] = ACTIONS(159),
    [aux_sym_css_named_color_token36] = ACTIONS(159),
    [aux_sym_css_named_color_token37] = ACTIONS(159),
    [aux_sym_css_named_color_token38] = ACTIONS(159),
    [aux_sym_css_named_color_token39] = ACTIONS(159),
    [aux_sym_css_named_color_token40] = ACTIONS(159),
    [aux_sym_css_named_color_token41] = ACTIONS(159),
    [aux_sym_css_named_color_token42] = ACTIONS(159),
    [aux_sym_css_named_color_token43] = ACTIONS(159),
    [aux_sym_css_named_color_token44] = ACTIONS(159),
    [aux_sym_css_named_color_token45] = ACTIONS(159),
    [aux_sym_css_named_color_token46] = ACTIONS(159),
    [aux_sym_css_named_color_token47] = ACTIONS(159),
    [aux_sym_css_named_color_token48] = ACTIONS(159),
    [aux_sym_css_named_color_token49] = ACTIONS(159),
    [aux_sym_css_named_color_token50] = ACTIONS(159),
    [aux_sym_css_named_color_token51] = ACTIONS(159),
    [aux_sym_css_named_color_token52] = ACTIONS(161),
    [aux_sym_css_named_color_token53] = ACTIONS(159),
    [aux_sym_css_named_color_token54] = ACTIONS(159),
    [aux_sym_css_named_color_token55] = ACTIONS(161),
    [aux_sym_css_named_color_token56] = ACTIONS(159),
    [aux_sym_css_named_color_token57] = ACTIONS(159),
    [aux_sym_css_named_color_token58] = ACTIONS(159),
    [aux_sym_css_named_color_token59] = ACTIONS(159),
    [aux_sym_css_named_color_token60] = ACTIONS(159),
    [aux_sym_css_named_color_token61] = ACTIONS(159),
    [aux_sym_css_named_color_token62] = ACTIONS(159),
    [aux_sym_css_named_color_token63] = ACTIONS(159),
    [aux_sym_css_named_color_token64] = ACTIONS(161),
    [aux_sym_css_named_color_token65] = ACTIONS(159),
    [aux_sym_css_named_color_token66] = ACTIONS(159),
    [aux_sym_css_named_color_token67] = ACTIONS(159),
    [aux_sym_css_named_color_token68] = ACTIONS(159),
    [aux_sym_css_named_color_token69] = ACTIONS(159),
    [aux_sym_css_named_color_token70] = ACTIONS(159),
    [aux_sym_css_named_color_token71] = ACTIONS(159),
    [aux_sym_css_named_color_token72] = ACTIONS(159),
    [aux_sym_css_named_color_token73] = ACTIONS(159),
    [aux_sym_css_named_color_token74] = ACTIONS(159),
    [aux_sym_css_named_color_token75] = ACTIONS(159),
    [aux_sym_css_named_color_token76] = ACTIONS(159),
    [aux_sym_css_named_color_token77] = ACTIONS(159),
    [aux_sym_css_named_color_token78] = ACTIONS(159),
    [aux_sym_css_named_color_token79] = ACTIONS(159),
    [aux_sym_css_named_color_token80] = ACTIONS(159),
    [aux_sym_css_named_color_token81] = ACTIONS(159),
    [aux_sym_css_named_color_token82] = ACTIONS(159),
    [aux_sym_css_named_color_token83] = ACTIONS(161),
    [aux_sym_css_named_color_token84] = ACTIONS(159),
    [aux_sym_css_named_color_token85] = ACTIONS(159),
    [aux_sym_css_named_color_token86] = ACTIONS(159),
    [aux_sym_css_named_color_token87] = ACTIONS(159),
    [aux_sym_css_named_color_token88] = ACTIONS(159),
    [aux_sym_css_named_color_token89] = ACTIONS(159),
    [aux_sym_css_named_color_token90] = ACTIONS(159),
    [aux_sym_css_named_color_token91] = ACTIONS(159),
    [aux_sym_css_named_color_token92] = ACTIONS(159),
    [aux_sym_css_named_color_token93] = ACTIONS(159),
    [aux_sym_css_named_color_token94] = ACTIONS(159),
    [aux_sym_css_named_color_token95] = ACTIONS(159),
    [aux_sym_css_named_color_token96] = ACTIONS(159),
    [aux_sym_css_named_color_token97] = ACTIONS(159),
    [aux_sym_css_named_color_token98] = ACTIONS(159),
    [aux_sym_css_named_color_token99] = ACTIONS(159),
    [aux_sym_css_named_color_token100] = ACTIONS(159),
    [aux_sym_css_named_color_token101] = ACTIONS(159),
    [aux_sym_css_named_color_token102] = ACTIONS(159),
    [aux_sym_css_named_color_token103] = ACTIONS(159),
    [aux_sym_css_named_color_token104] = ACTIONS(161),
    [aux_sym_css_named_color_token105] = ACTIONS(159),
    [aux_sym_css_named_color_token106] = ACTIONS(161),
    [aux_sym_css_named_color_token107] = ACTIONS(159),
    [aux_sym_css_named_color_token108] = ACTIONS(159),
    [aux_sym_css_named_color_token109] = ACTIONS(159),
    [aux_sym_css_named_color_token110] = ACTIONS(159),
    [aux_sym_css_named_color_token111] = ACTIONS(159),
    [aux_sym_css_named_color_token112] = ACTIONS(159),
    [aux_sym_css_named_color_token113] = ACTIONS(159),
    [aux_sym_css_named_color_token114] = ACTIONS(159),
    [aux_sym_css_named_color_token115] = ACTIONS(159),
    [aux_sym_css_named_color_token116] = ACTIONS(159),
    [aux_sym_css_named_color_token117] = ACTIONS(159),
    [aux_sym_css_named_color_token118] = ACTIONS(159),
    [aux_sym_css_named_color_token119] = ACTIONS(159),
    [aux_sym_css_named_color_token120] = ACTIONS(159),
    [aux_sym_css_named_color_token121] = ACTIONS(159),
    [aux_sym_css_named_color_token122] = ACTIONS(159),
    [aux_sym_css_named_color_token123] = ACTIONS(159),
    [aux_sym_css_named_color_token124] = ACTIONS(159),
    [aux_sym_css_named_color_token125] = ACTIONS(159),
    [aux_sym_css_named_color_token126] = ACTIONS(159),
    [aux_sym_css_named_color_token127] = ACTIONS(159),
    [aux_sym_css_named_color_token128] = ACTIONS(159),
    [aux_sym_css_named_color_token129] = ACTIONS(159),
    [aux_sym_css_named_color_token130] = ACTIONS(159),
    [aux_sym_css_named_color_token131] = ACTIONS(159),
    [aux_sym_css_named_color_token132] = ACTIONS(159),
    [aux_sym_css_named_color_token133] = ACTIONS(159),
    [aux_sym_css_named_color_token134] = ACTIONS(159),
    [aux_sym_css_named_color_token135] = ACTIONS(159),
    [aux_sym_css_named_color_token136] = ACTIONS(159),
    [aux_sym_css_named_color_token137] = ACTIONS(159),
    [aux_sym_css_named_color_token138] = ACTIONS(159),
    [aux_sym_css_named_color_token139] = ACTIONS(159),
    [aux_sym_css_named_color_token140] = ACTIONS(159),
    [aux_sym_css_named_color_token141] = ACTIONS(159),
    [aux_sym_css_named_color_token142] = ACTIONS(159),
    [aux_sym_css_named_color_token143] = ACTIONS(159),
    [aux_sym_css_named_color_token144] = ACTIONS(159),
    [aux_sym_css_named_color_token145] = ACTIONS(161),
    [aux_sym_css_named_color_token146] = ACTIONS(159),
    [aux_sym_css_named_color_token147] = ACTIONS(161),
    [aux_sym_css_named_color_token148] = ACTIONS(159),
    [sym_css_keyword_transparent] = ACTIONS(159),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(165),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(163),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(165),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(163),
    [aux_sym_css_function_hwb_token1] = ACTIONS(163),
    [aux_sym_css_function_lab_token1] = ACTIONS(163),
    [aux_sym_css_function_oklab_token1] = ACTIONS(163),
    [sym_css_hex_color_6_digits] = ACTIONS(165),
    [sym_css_hex_color_8_digits] = ACTIONS(163),
    [sym_css_hex_color_3_digits] = ACTIONS(165),
    [sym_css_hex_color_4_digits] = ACTIONS(165),
    [aux_sym_css_named_color_token1] = ACTIONS(163),
    [aux_sym_css_named_color_token2] = ACTIONS(163),
    [aux_sym_css_named_color_token3] = ACTIONS(165),
    [aux_sym_css_named_color_token4] = ACTIONS(163),
    [aux_sym_css_named_color_token5] = ACTIONS(163),
    [aux_sym_css_named_color_token6] = ACTIONS(163),
    [aux_sym_css_named_color_token7] = ACTIONS(163),
    [aux_sym_css_named_color_token8] = ACTIONS(163),
    [aux_sym_css_named_color_token9] = ACTIONS(163),
    [aux_sym_css_named_color_token10] = ACTIONS(165),
    [aux_sym_css_named_color_token11] = ACTIONS(163),
    [aux_sym_css_named_color_token12] = ACTIONS(163),
    [aux_sym_css_named_color_token13] = ACTIONS(163),
    [aux_sym_css_named_color_token14] = ACTIONS(163),
    [aux_sym_css_named_color_token15] = ACTIONS(163),
    [aux_sym_css_named_color_token16] = ACTIONS(163),
    [aux_sym_css_named_color_token17] = ACTIONS(163),
    [aux_sym_css_named_color_token18] = ACTIONS(163),
    [aux_sym_css_named_color_token19] = ACTIONS(163),
    [aux_sym_css_named_color_token20] = ACTIONS(163),
    [aux_sym_css_named_color_token21] = ACTIONS(163),
    [aux_sym_css_named_color_token22] = ACTIONS(163),
    [aux_sym_css_named_color_token23] = ACTIONS(163),
    [aux_sym_css_named_color_token24] = ACTIONS(163),
    [aux_sym_css_named_color_token25] = ACTIONS(163),
    [aux_sym_css_named_color_token26] = ACTIONS(163),
    [aux_sym_css_named_color_token27] = ACTIONS(163),
    [aux_sym_css_named_color_token28] = ACTIONS(163),
    [aux_sym_css_named_color_token29] = ACTIONS(163),
    [aux_sym_css_named_color_token30] = ACTIONS(163),
    [aux_sym_css_named_color_token31] = ACTIONS(163),
    [aux_sym_css_named_color_token32] = ACTIONS(163),
    [aux_sym_css_named_color_token33] = ACTIONS(163),
    [aux_sym_css_named_color_token34] = ACTIONS(163),
    [aux_sym_css_named_color_token35] = ACTIONS(163),
    [aux_sym_css_named_color_token36] = ACTIONS(163),
    [aux_sym_css_named_color_token37] = ACTIONS(163),
    [aux_sym_css_named_color_token38] = ACTIONS(163),
    [aux_sym_css_named_color_token39] = ACTIONS(163),
    [aux_sym_css_named_color_token40] = ACTIONS(163),
    [aux_sym_css_named_color_token41] = ACTIONS(163),
    [aux_sym_css_named_color_token42] = ACTIONS(163),
    [aux_sym_css_named_color_token43] = ACTIONS(163),
    [aux_sym_css_named_color_token44] = ACTIONS(163),
    [aux_sym_css_named_color_token45] = ACTIONS(163),
    [aux_sym_css_named_color_token46] = ACTIONS(163),
    [aux_sym_css_named_color_token47] = ACTIONS(163),
    [aux_sym_css_named_color_token48] = ACTIONS(163),
    [aux_sym_css_named_color_token49] = ACTIONS(163),
    [aux_sym_css_named_color_token50] = ACTIONS(163),
    [aux_sym_css_named_color_token51] = ACTIONS(163),
    [aux_sym_css_named_color_token52] = ACTIONS(165),
    [aux_sym_css_named_color_token53] = ACTIONS(163),
    [aux_sym_css_named_color_token54] = ACTIONS(163),
    [aux_sym_css_named_color_token55] = ACTIONS(165),
    [aux_sym_css_named_color_token56] = ACTIONS(163),
    [aux_sym_css_named_color_token57] = ACTIONS(163),
    [aux_sym_css_named_color_token58] = ACTIONS(163),
    [aux_sym_css_named_color_token59] = ACTIONS(163),
    [aux_sym_css_named_color_token60] = ACTIONS(163),
    [aux_sym_css_named_color_token61] = ACTIONS(163),
    [aux_sym_css_named_color_token62] = ACTIONS(163),
    [aux_sym_css_named_color_token63] = ACTIONS(163),
    [aux_sym_css_named_color_token64] = ACTIONS(165),
    [aux_sym_css_named_color_token65] = ACTIONS(163),
    [aux_sym_css_named_color_token66] = ACTIONS(163),
    [aux_sym_css_named_color_token67] = ACTIONS(163),
    [aux_sym_css_named_color_token68] = ACTIONS(163),
    [aux_sym_css_named_color_token69] = ACTIONS(163),
    [aux_sym_css_named_color_token70] = ACTIONS(163),
    [aux_sym_css_named_color_token71] = ACTIONS(163),
    [aux_sym_css_named_color_token72] = ACTIONS(163),
    [aux_sym_css_named_color_token73] = ACTIONS(163),
    [aux_sym_css_named_color_token74] = ACTIONS(163),
    [aux_sym_css_named_color_token75] = ACTIONS(163),
    [aux_sym_css_named_color_token76] = ACTIONS(163),
    [aux_sym_css_named_color_token77] = ACTIONS(163),
    [aux_sym_css_named_color_token78] = ACTIONS(163),
    [aux_sym_css_named_color_token79] = ACTIONS(163),
    [aux_sym_css_named_color_token80] = ACTIONS(163),
    [aux_sym_css_named_color_token81] = ACTIONS(163),
    [aux_sym_css_named_color_token82] = ACTIONS(163),
    [aux_sym_css_named_color_token83] = ACTIONS(165),
    [aux_sym_css_named_color_token84] = ACTIONS(163),
    [aux_sym_css_named_color_token85] = ACTIONS(163),
    [aux_sym_css_named_color_token86] = ACTIONS(163),
    [aux_sym_css_named_color_token87] = ACTIONS(163),
    [aux_sym_css_named_color_token88] = ACTIONS(163),
    [aux_sym_css_named_color_token89] = ACTIONS(163),
    [aux_sym_css_named_color_token90] = ACTIONS(163),
    [aux_sym_css_named_color_token91] = ACTIONS(163),
    [aux_sym_css_named_color_token92] = ACTIONS(163),
    [aux_sym_css_named_color_token93] = ACTIONS(163),
    [aux_sym_css_named_color_token94] = ACTIONS(163),
    [aux_sym_css_named_color_token95] = ACTIONS(163),
    [aux_sym_css_named_color_token96] = ACTIONS(163),
    [aux_sym_css_named_color_token97] = ACTIONS(163),
    [aux_sym_css_named_color_token98] = ACTIONS(163),
    [aux_sym_css_named_color_token99] = ACTIONS(163),
    [aux_sym_css_named_color_token100] = ACTIONS(163),
    [aux_sym_css_named_color_token101] = ACTIONS(163),
    [aux_sym_css_named_color_token102] = ACTIONS(163),
    [aux_sym_css_named_color_token103] = ACTIONS(163),
    [aux_sym_css_named_color_token104] = ACTIONS(165),
    [aux_sym_css_named_color_token105] = ACTIONS(163),
    [aux_sym_css_named_color_token106] = ACTIONS(165),
    [aux_sym_css_named_color_token107] = ACTIONS(163),
    [aux_sym_css_named_color_token108] = ACTIONS(163),
    [aux_sym_css_named_color_token109] = ACTIONS(163),
    [aux_sym_css_named_color_token110] = ACTIONS(163),
    [aux_sym_css_named_color_token111] = ACTIONS(163),
    [aux_sym_css_named_color_token112] = ACTIONS(163),
    [aux_sym_css_named_color_token113] = ACTIONS(163),
    [aux_sym_css_named_color_token114] = ACTIONS(163),
    [aux_sym_css_named_color_token115] = ACTIONS(163),
    [aux_sym_css_named_color_token116] = ACTIONS(163),
    [aux_sym_css_named_color_token117] = ACTIONS(163),
    [aux_sym_css_named_color_token118] = ACTIONS(163),
    [aux_sym_css_named_color_token119] = ACTIONS(163),
    [aux_sym_css_named_color_token120] = ACTIONS(163),
    [aux_sym_css_named_color_token121] = ACTIONS(163),
    [aux_sym_css_named_color_token122] = ACTIONS(163),
    [aux_sym_css_named_color_token123] = ACTIONS(163),
    [aux_sym_css_named_color_token124] = ACTIONS(163),
    [aux_sym_css_named_color_token125] = ACTIONS(163),
    [aux_sym_css_named_color_token126] = ACTIONS(163),
    [aux_sym_css_named_color_token127] = ACTIONS(163),
    [aux_sym_css_named_color_token128] = ACTIONS(163),
    [aux_sym_css_named_color_token129] = ACTIONS(163),
    [aux_sym_css_named_color_token130] = ACTIONS(163),
    [aux_sym_css_named_color_token131] = ACTIONS(163),
    [aux_sym_css_named_color_token132] = ACTIONS(163),
    [aux_sym_css_named_color_token133] = ACTIONS(163),
    [aux_sym_css_named_color_token134] = ACTIONS(163),
    [aux_sym_css_named_color_token135] = ACTIONS(163),
    [aux_sym_css_named_color_token136] = ACTIONS(163),
    [aux_sym_css_named_color_token137] = ACTIONS(163),
    [aux_sym_css_named_color_token138] = ACTIONS(163),
    [aux_sym_css_named_color_token139] = ACTIONS(163),
    [aux_sym_css_named_color_token140] = ACTIONS(163),
    [aux_sym_css_named_color_token141] = ACTIONS(163),
    [aux_sym_css_named_color_token142] = ACTIONS(163),
    [aux_sym_css_named_color_token143] = ACTIONS(163),
    [aux_sym_css_named_color_token144] = ACTIONS(163),
    [aux_sym_css_named_color_token145] = ACTIONS(165),
    [aux_sym_css_named_color_token146] = ACTIONS(163),
    [aux_sym_css_named_color_token147] = ACTIONS(165),
    [aux_sym_css_named_color_token148] = ACTIONS(163),
    [sym_css_keyword_transparent] = ACTIONS(163),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(169),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(167),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(169),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(167),
    [aux_sym_css_function_hwb_token1] = ACTIONS(167),
    [aux_sym_css_function_lab_token1] = ACTIONS(167),
    [aux_sym_css_function_oklab_token1] = ACTIONS(167),
    [sym_css_hex_color_6_digits] = ACTIONS(169),
    [sym_css_hex_color_8_digits] = ACTIONS(167),
    [sym_css_hex_color_3_digits] = ACTIONS(169),
    [sym_css_hex_color_4_digits] = ACTIONS(169),
    [aux_sym_css_named_color_token1] = ACTIONS(167),
    [aux_sym_css_named_color_token2] = ACTIONS(167),
    [aux_sym_css_named_color_token3] = ACTIONS(169),
    [aux_sym_css_named_color_token4] = ACTIONS(167),
    [aux_sym_css_named_color_token5] = ACTIONS(167),
    [aux_sym_css_named_color_token6] = ACTIONS(167),
    [aux_sym_css_named_color_token7] = ACTIONS(167),
    [aux_sym_css_named_color_token8] = ACTIONS(167),
    [aux_sym_css_named_color_token9] = ACTIONS(167),
    [aux_sym_css_named_color_token10] = ACTIONS(169),
    [aux_sym_css_named_color_token11] = ACTIONS(167),
    [aux_sym_css_named_color_token12] = ACTIONS(167),
    [aux_sym_css_named_color_token13] = ACTIONS(167),
    [aux_sym_css_named_color_token14] = ACTIONS(167),
    [aux_sym_css_named_color_token15] = ACTIONS(167),
    [aux_sym_css_named_color_token16] = ACTIONS(167),
    [aux_sym_css_named_color_token17] = ACTIONS(167),
    [aux_sym_css_named_color_token18] = ACTIONS(167),
    [aux_sym_css_named_color_token19] = ACTIONS(167),
    [aux_sym_css_named_color_token20] = ACTIONS(167),
    [aux_sym_css_named_color_token21] = ACTIONS(167),
    [aux_sym_css_named_color_token22] = ACTIONS(167),
    [aux_sym_css_named_color_token23] = ACTIONS(167),
    [aux_sym_css_named_color_token24] = ACTIONS(167),
    [aux_sym_css_named_color_token25] = ACTIONS(167),
    [aux_sym_css_named_color_token26] = ACTIONS(167),
    [aux_sym_css_named_color_token27] = ACTIONS(167),
    [aux_sym_css_named_color_token28] = ACTIONS(167),
    [aux_sym_css_named_color_token29] = ACTIONS(167),
    [aux_sym_css_named_color_token30] = ACTIONS(167),
    [aux_sym_css_named_color_token31] = ACTIONS(167),
    [aux_sym_css_named_color_token32] = ACTIONS(167),
    [aux_sym_css_named_color_token33] = ACTIONS(167),
    [aux_sym_css_named_color_token34] = ACTIONS(167),
    [aux_sym_css_named_color_token35] = ACTIONS(167),
    [aux_sym_css_named_color_token36] = ACTIONS(167),
    [aux_sym_css_named_color_token37] = ACTIONS(167),
    [aux_sym_css_named_color_token38] = ACTIONS(167),
    [aux_sym_css_named_color_token39] = ACTIONS(167),
    [aux_sym_css_named_color_token40] = ACTIONS(167),
    [aux_sym_css_named_color_token41] = ACTIONS(167),
    [aux_sym_css_named_color_token42] = ACTIONS(167),
    [aux_sym_css_named_color_token43] = ACTIONS(167),
    [aux_sym_css_named_color_token44] = ACTIONS(167),
    [aux_sym_css_named_color_token45] = ACTIONS(167),
    [aux_sym_css_named_color_token46] = ACTIONS(167),
    [aux_sym_css_named_color_token47] = ACTIONS(167),
    [aux_sym_css_named_color_token48] = ACTIONS(167),
    [aux_sym_css_named_color_token49] = ACTIONS(167),
    [aux_sym_css_named_color_token50] = ACTIONS(167),
    [aux_sym_css_named_color_token51] = ACTIONS(167),
    [aux_sym_css_named_color_token52] = ACTIONS(169),
    [aux_sym_css_named_color_token53] = ACTIONS(167),
    [aux_sym_css_named_color_token54] = ACTIONS(167),
    [aux_sym_css_named_color_token55] = ACTIONS(169),
    [aux_sym_css_named_color_token56] = ACTIONS(167),
    [aux_sym_css_named_color_token57] = ACTIONS(167),
    [aux_sym_css_named_color_token58] = ACTIONS(167),
    [aux_sym_css_named_color_token59] = ACTIONS(167),
    [aux_sym_css_named_color_token60] = ACTIONS(167),
    [aux_sym_css_named_color_token61] = ACTIONS(167),
    [aux_sym_css_named_color_token62] = ACTIONS(167),
    [aux_sym_css_named_color_token63] = ACTIONS(167),
    [aux_sym_css_named_color_token64] = ACTIONS(169),
    [aux_sym_css_named_color_token65] = ACTIONS(167),
    [aux_sym_css_named_color_token66] = ACTIONS(167),
    [aux_sym_css_named_color_token67] = ACTIONS(167),
    [aux_sym_css_named_color_token68] = ACTIONS(167),
    [aux_sym_css_named_color_token69] = ACTIONS(167),
    [aux_sym_css_named_color_token70] = ACTIONS(167),
    [aux_sym_css_named_color_token71] = ACTIONS(167),
    [aux_sym_css_named_color_token72] = ACTIONS(167),
    [aux_sym_css_named_color_token73] = ACTIONS(167),
    [aux_sym_css_named_color_token74] = ACTIONS(167),
    [aux_sym_css_named_color_token75] = ACTIONS(167),
    [aux_sym_css_named_color_token76] = ACTIONS(167),
    [aux_sym_css_named_color_token77] = ACTIONS(167),
    [aux_sym_css_named_color_token78] = ACTIONS(167),
    [aux_sym_css_named_color_token79] = ACTIONS(167),
    [aux_sym_css_named_color_token80] = ACTIONS(167),
    [aux_sym_css_named_color_token81] = ACTIONS(167),
    [aux_sym_css_named_color_token82] = ACTIONS(167),
    [aux_sym_css_named_color_token83] = ACTIONS(169),
    [aux_sym_css_named_color_token84] = ACTIONS(167),
    [aux_sym_css_named_color_token85] = ACTIONS(167),
    [aux_sym_css_named_color_token86] = ACTIONS(167),
    [aux_sym_css_named_color_token87] = ACTIONS(167),
    [aux_sym_css_named_color_token88] = ACTIONS(167),
    [aux_sym_css_named_color_token89] = ACTIONS(167),
    [aux_sym_css_named_color_token90] = ACTIONS(167),
    [aux_sym_css_named_color_token91] = ACTIONS(167),
    [aux_sym_css_named_color_token92] = ACTIONS(167),
    [aux_sym_css_named_color_token93] = ACTIONS(167),
    [aux_sym_css_named_color_token94] = ACTIONS(167),
    [aux_sym_css_named_color_token95] = ACTIONS(167),
    [aux_sym_css_named_color_token96] = ACTIONS(167),
    [aux_sym_css_named_color_token97] = ACTIONS(167),
    [aux_sym_css_named_color_token98] = ACTIONS(167),
    [aux_sym_css_named_color_token99] = ACTIONS(167),
    [aux_sym_css_named_color_token100] = ACTIONS(167),
    [aux_sym_css_named_color_token101] = ACTIONS(167),
    [aux_sym_css_named_color_token102] = ACTIONS(167),
    [aux_sym_css_named_color_token103] = ACTIONS(167),
    [aux_sym_css_named_color_token104] = ACTIONS(169),
    [aux_sym_css_named_color_token105] = ACTIONS(167),
    [aux_sym_css_named_color_token106] = ACTIONS(169),
    [aux_sym_css_named_color_token107] = ACTIONS(167),
    [aux_sym_css_named_color_token108] = ACTIONS(167),
    [aux_sym_css_named_color_token109] = ACTIONS(167),
    [aux_sym_css_named_color_token110] = ACTIONS(167),
    [aux_sym_css_named_color_token111] = ACTIONS(167),
    [aux_sym_css_named_color_token112] = ACTIONS(167),
    [aux_sym_css_named_color_token113] = ACTIONS(167),
    [aux_sym_css_named_color_token114] = ACTIONS(167),
    [aux_sym_css_named_color_token115] = ACTIONS(167),
    [aux_sym_css_named_color_token116] = ACTIONS(167),
    [aux_sym_css_named_color_token117] = ACTIONS(167),
    [aux_sym_css_named_color_token118] = ACTIONS(167),
    [aux_sym_css_named_color_token119] = ACTIONS(167),
    [aux_sym_css_named_color_token120] = ACTIONS(167),
    [aux_sym_css_named_color_token121] = ACTIONS(167),
    [aux_sym_css_named_color_token122] = ACTIONS(167),
    [aux_sym_css_named_color_token123] = ACTIONS(167),
    [aux_sym_css_named_color_token124] = ACTIONS(167),
    [aux_sym_css_named_color_token125] = ACTIONS(167),
    [aux_sym_css_named_color_token126] = ACTIONS(167),
    [aux_sym_css_named_color_token127] = ACTIONS(167),
    [aux_sym_css_named_color_token128] = ACTIONS(167),
    [aux_sym_css_named_color_token129] = ACTIONS(167),
    [aux_sym_css_named_color_token130] = ACTIONS(167),
    [aux_sym_css_named_color_token131] = ACTIONS(167),
    [aux_sym_css_named_color_token132] = ACTIONS(167),
    [aux_sym_css_named_color_token133] = ACTIONS(167),
    [aux_sym_css_named_color_token134] = ACTIONS(167),
    [aux_sym_css_named_color_token135] = ACTIONS(167),
    [aux_sym_css_named_color_token136] = ACTIONS(167),
    [aux_sym_css_named_color_token137] = ACTIONS(167),
    [aux_sym_css_named_color_token138] = ACTIONS(167),
    [aux_sym_css_named_color_token139] = ACTIONS(167),
    [aux_sym_css_named_color_token140] = ACTIONS(167),
    [aux_sym_css_named_color_token141] = ACTIONS(167),
    [aux_sym_css_named_color_token142] = ACTIONS(167),
    [aux_sym_css_named_color_token143] = ACTIONS(167),
    [aux_sym_css_named_color_token144] = ACTIONS(167),
    [aux_sym_css_named_color_token145] = ACTIONS(169),
    [aux_sym_css_named_color_token146] = ACTIONS(167),
    [aux_sym_css_named_color_token147] = ACTIONS(169),
    [aux_sym_css_named_color_token148] = ACTIONS(167),
    [sym_css_keyword_transparent] = ACTIONS(167),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(173),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(171),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(173),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(171),
    [aux_sym_css_function_hwb_token1] = ACTIONS(171),
    [aux_sym_css_function_lab_token1] = ACTIONS(171),
    [aux_sym_css_function_oklab_token1] = ACTIONS(171),
    [sym_css_hex_color_6_digits] = ACTIONS(173),
    [sym_css_hex_color_8_digits] = ACTIONS(171),
    [sym_css_hex_color_3_digits] = ACTIONS(173),
    [sym_css_hex_color_4_digits] = ACTIONS(173),
    [aux_sym_css_named_color_token1] = ACTIONS(171),
    [aux_sym_css_named_color_token2] = ACTIONS(171),
    [aux_sym_css_named_color_token3] = ACTIONS(173),
    [aux_sym_css_named_color_token4] = ACTIONS(171),
    [aux_sym_css_named_color_token5] = ACTIONS(171),
    [aux_sym_css_named_color_token6] = ACTIONS(171),
    [aux_sym_css_named_color_token7] = ACTIONS(171),
    [aux_sym_css_named_color_token8] = ACTIONS(171),
    [aux_sym_css_named_color_token9] = ACTIONS(171),
    [aux_sym_css_named_color_token10] = ACTIONS(173),
    [aux_sym_css_named_color_token11] = ACTIONS(171),
    [aux_sym_css_named_color_token12] = ACTIONS(171),
    [aux_sym_css_named_color_token13] = ACTIONS(171),
    [aux_sym_css_named_color_token14] = ACTIONS(171),
    [aux_sym_css_named_color_token15] = ACTIONS(171),
    [aux_sym_css_named_color_token16] = ACTIONS(171),
    [aux_sym_css_named_color_token17] = ACTIONS(171),
    [aux_sym_css_named_color_token18] = ACTIONS(171),
    [aux_sym_css_named_color_token19] = ACTIONS(171),
    [aux_sym_css_named_color_token20] = ACTIONS(171),
    [aux_sym_css_named_color_token21] = ACTIONS(171),
    [aux_sym_css_named_color_token22] = ACTIONS(171),
    [aux_sym_css_named_color_token23] = ACTIONS(171),
    [aux_sym_css_named_color_token24] = ACTIONS(171),
    [aux_sym_css_named_color_token25] = ACTIONS(171),
    [aux_sym_css_named_color_token26] = ACTIONS(171),
    [aux_sym_css_named_color_token27] = ACTIONS(171),
    [aux_sym_css_named_color_token28] = ACTIONS(171),
    [aux_sym_css_named_color_token29] = ACTIONS(171),
    [aux_sym_css_named_color_token30] = ACTIONS(171),
    [aux_sym_css_named_color_token31] = ACTIONS(171),
    [aux_sym_css_named_color_token32] = ACTIONS(171),
    [aux_sym_css_named_color_token33] = ACTIONS(171),
    [aux_sym_css_named_color_token34] = ACTIONS(171),
    [aux_sym_css_named_color_token35] = ACTIONS(171),
    [aux_sym_css_named_color_token36] = ACTIONS(171),
    [aux_sym_css_named_color_token37] = ACTIONS(171),
    [aux_sym_css_named_color_token38] = ACTIONS(171),
    [aux_sym_css_named_color_token39] = ACTIONS(171),
    [aux_sym_css_named_color_token40] = ACTIONS(171),
    [aux_sym_css_named_color_token41] = ACTIONS(171),
    [aux_sym_css_named_color_token42] = ACTIONS(171),
    [aux_sym_css_named_color_token43] = ACTIONS(171),
    [aux_sym_css_named_color_token44] = ACTIONS(171),
    [aux_sym_css_named_color_token45] = ACTIONS(171),
    [aux_sym_css_named_color_token46] = ACTIONS(171),
    [aux_sym_css_named_color_token47] = ACTIONS(171),
    [aux_sym_css_named_color_token48] = ACTIONS(171),
    [aux_sym_css_named_color_token49] = ACTIONS(171),
    [aux_sym_css_named_color_token50] = ACTIONS(171),
    [aux_sym_css_named_color_token51] = ACTIONS(171),
    [aux_sym_css_named_color_token52] = ACTIONS(173),
    [aux_sym_css_named_color_token53] = ACTIONS(171),
    [aux_sym_css_named_color_token54] = ACTIONS(171),
    [aux_sym_css_named_color_token55] = ACTIONS(173),
    [aux_sym_css_named_color_token56] = ACTIONS(171),
    [aux_sym_css_named_color_token57] = ACTIONS(171),
    [aux_sym_css_named_color_token58] = ACTIONS(171),
    [aux_sym_css_named_color_token59] = ACTIONS(171),
    [aux_sym_css_named_color_token60] = ACTIONS(171),
    [aux_sym_css_named_color_token61] = ACTIONS(171),
    [aux_sym_css_named_color_token62] = ACTIONS(171),
    [aux_sym_css_named_color_token63] = ACTIONS(171),
    [aux_sym_css_named_color_token64] = ACTIONS(173),
    [aux_sym_css_named_color_token65] = ACTIONS(171),
    [aux_sym_css_named_color_token66] = ACTIONS(171),
    [aux_sym_css_named_color_token67] = ACTIONS(171),
    [aux_sym_css_named_color_token68] = ACTIONS(171),
    [aux_sym_css_named_color_token69] = ACTIONS(171),
    [aux_sym_css_named_color_token70] = ACTIONS(171),
    [aux_sym_css_named_color_token71] = ACTIONS(171),
    [aux_sym_css_named_color_token72] = ACTIONS(171),
    [aux_sym_css_named_color_token73] = ACTIONS(171),
    [aux_sym_css_named_color_token74] = ACTIONS(171),
    [aux_sym_css_named_color_token75] = ACTIONS(171),
    [aux_sym_css_named_color_token76] = ACTIONS(171),
    [aux_sym_css_named_color_token77] = ACTIONS(171),
    [aux_sym_css_named_color_token78] = ACTIONS(171),
    [aux_sym_css_named_color_token79] = ACTIONS(171),
    [aux_sym_css_named_color_token80] = ACTIONS(171),
    [aux_sym_css_named_color_token81] = ACTIONS(171),
    [aux_sym_css_named_color_token82] = ACTIONS(171),
    [aux_sym_css_named_color_token83] = ACTIONS(173),
    [aux_sym_css_named_color_token84] = ACTIONS(171),
    [aux_sym_css_named_color_token85] = ACTIONS(171),
    [aux_sym_css_named_color_token86] = ACTIONS(171),
    [aux_sym_css_named_color_token87] = ACTIONS(171),
    [aux_sym_css_named_color_token88] = ACTIONS(171),
    [aux_sym_css_named_color_token89] = ACTIONS(171),
    [aux_sym_css_named_color_token90] = ACTIONS(171),
    [aux_sym_css_named_color_token91] = ACTIONS(171),
    [aux_sym_css_named_color_token92] = ACTIONS(171),
    [aux_sym_css_named_color_token93] = ACTIONS(171),
    [aux_sym_css_named_color_token94] = ACTIONS(171),
    [aux_sym_css_named_color_token95] = ACTIONS(171),
    [aux_sym_css_named_color_token96] = ACTIONS(171),
    [aux_sym_css_named_color_token97] = ACTIONS(171),
    [aux_sym_css_named_color_token98] = ACTIONS(171),
    [aux_sym_css_named_color_token99] = ACTIONS(171),
    [aux_sym_css_named_color_token100] = ACTIONS(171),
    [aux_sym_css_named_color_token101] = ACTIONS(171),
    [aux_sym_css_named_color_token102] = ACTIONS(171),
    [aux_sym_css_named_color_token103] = ACTIONS(171),
    [aux_sym_css_named_color_token104] = ACTIONS(173),
    [aux_sym_css_named_color_token105] = ACTIONS(171),
    [aux_sym_css_named_color_token106] = ACTIONS(173),
    [aux_sym_css_named_color_token107] = ACTIONS(171),
    [aux_sym_css_named_color_token108] = ACTIONS(171),
    [aux_sym_css_named_color_token109] = ACTIONS(171),
    [aux_sym_css_named_color_token110] = ACTIONS(171),
    [aux_sym_css_named_color_token111] = ACTIONS(171),
    [aux_sym_css_named_color_token112] = ACTIONS(171),
    [aux_sym_css_named_color_token113] = ACTIONS(171),
    [aux_sym_css_named_color_token114] = ACTIONS(171),
    [aux_sym_css_named_color_token115] = ACTIONS(171),
    [aux_sym_css_named_color_token116] = ACTIONS(171),
    [aux_sym_css_named_color_token117] = ACTIONS(171),
    [aux_sym_css_named_color_token118] = ACTIONS(171),
    [aux_sym_css_named_color_token119] = ACTIONS(171),
    [aux_sym_css_named_color_token120] = ACTIONS(171),
    [aux_sym_css_named_color_token121] = ACTIONS(171),
    [aux_sym_css_named_color_token122] = ACTIONS(171),
    [aux_sym_css_named_color_token123] = ACTIONS(171),
    [aux_sym_css_named_color_token124] = ACTIONS(171),
    [aux_sym_css_named_color_token125] = ACTIONS(171),
    [aux_sym_css_named_color_token126] = ACTIONS(171),
    [aux_sym_css_named_color_token127] = ACTIONS(171),
    [aux_sym_css_named_color_token128] = ACTIONS(171),
    [aux_sym_css_named_color_token129] = ACTIONS(171),
    [aux_sym_css_named_color_token130] = ACTIONS(171),
    [aux_sym_css_named_color_token131] = ACTIONS(171),
    [aux_sym_css_named_color_token132] = ACTIONS(171),
    [aux_sym_css_named_color_token133] = ACTIONS(171),
    [aux_sym_css_named_color_token134] = ACTIONS(171),
    [aux_sym_css_named_color_token135] = ACTIONS(171),
    [aux_sym_css_named_color_token136] = ACTIONS(171),
    [aux_sym_css_named_color_token137] = ACTIONS(171),
    [aux_sym_css_named_color_token138] = ACTIONS(171),
    [aux_sym_css_named_color_token139] = ACTIONS(171),
    [aux_sym_css_named_color_token140] = ACTIONS(171),
    [aux_sym_css_named_color_token141] = ACTIONS(171),
    [aux_sym_css_named_color_token142] = ACTIONS(171),
    [aux_sym_css_named_color_token143] = ACTIONS(171),
    [aux_sym_css_named_color_token144] = ACTIONS(171),
    [aux_sym_css_named_color_token145] = ACTIONS(173),
    [aux_sym_css_named_color_token146] = ACTIONS(171),
    [aux_sym_css_named_color_token147] = ACTIONS(173),
    [aux_sym_css_named_color_token148] = ACTIONS(171),
    [sym_css_keyword_transparent] = ACTIONS(171),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(177),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(175),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(177),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(175),
    [aux_sym_css_function_hwb_token1] = ACTIONS(175),
    [aux_sym_css_function_lab_token1] = ACTIONS(175),
    [aux_sym_css_function_oklab_token1] = ACTIONS(175),
    [sym_css_hex_color_6_digits] = ACTIONS(177),
    [sym_css_hex_color_8_digits] = ACTIONS(175),
    [sym_css_hex_color_3_digits] = ACTIONS(177),
    [sym_css_hex_color_4_digits] = ACTIONS(177),
    [aux_sym_css_named_color_token1] = ACTIONS(175),
    [aux_sym_css_named_color_token2] = ACTIONS(175),
    [aux_sym_css_named_color_token3] = ACTIONS(177),
    [aux_sym_css_named_color_token4] = ACTIONS(175),
    [aux_sym_css_named_color_token5] = ACTIONS(175),
    [aux_sym_css_named_color_token6] = ACTIONS(175),
    [aux_sym_css_named_color_token7] = ACTIONS(175),
    [aux_sym_css_named_color_token8] = ACTIONS(175),
    [aux_sym_css_named_color_token9] = ACTIONS(175),
    [aux_sym_css_named_color_token10] = ACTIONS(177),
    [aux_sym_css_named_color_token11] = ACTIONS(175),
    [aux_sym_css_named_color_token12] = ACTIONS(175),
    [aux_sym_css_named_color_token13] = ACTIONS(175),
    [aux_sym_css_named_color_token14] = ACTIONS(175),
    [aux_sym_css_named_color_token15] = ACTIONS(175),
    [aux_sym_css_named_color_token16] = ACTIONS(175),
    [aux_sym_css_named_color_token17] = ACTIONS(175),
    [aux_sym_css_named_color_token18] = ACTIONS(175),
    [aux_sym_css_named_color_token19] = ACTIONS(175),
    [aux_sym_css_named_color_token20] = ACTIONS(175),
    [aux_sym_css_named_color_token21] = ACTIONS(175),
    [aux_sym_css_named_color_token22] = ACTIONS(175),
    [aux_sym_css_named_color_token23] = ACTIONS(175),
    [aux_sym_css_named_color_token24] = ACTIONS(175),
    [aux_sym_css_named_color_token25] = ACTIONS(175),
    [aux_sym_css_named_color_token26] = ACTIONS(175),
    [aux_sym_css_named_color_token27] = ACTIONS(175),
    [aux_sym_css_named_color_token28] = ACTIONS(175),
    [aux_sym_css_named_color_token29] = ACTIONS(175),
    [aux_sym_css_named_color_token30] = ACTIONS(175),
    [aux_sym_css_named_color_token31] = ACTIONS(175),
    [aux_sym_css_named_color_token32] = ACTIONS(175),
    [aux_sym_css_named_color_token33] = ACTIONS(175),
    [aux_sym_css_named_color_token34] = ACTIONS(175),
    [aux_sym_css_named_color_token35] = ACTIONS(175),
    [aux_sym_css_named_color_token36] = ACTIONS(175),
    [aux_sym_css_named_color_token37] = ACTIONS(175),
    [aux_sym_css_named_color_token38] = ACTIONS(175),
    [aux_sym_css_named_color_token39] = ACTIONS(175),
    [aux_sym_css_named_color_token40] = ACTIONS(175),
    [aux_sym_css_named_color_token41] = ACTIONS(175),
    [aux_sym_css_named_color_token42] = ACTIONS(175),
    [aux_sym_css_named_color_token43] = ACTIONS(175),
    [aux_sym_css_named_color_token44] = ACTIONS(175),
    [aux_sym_css_named_color_token45] = ACTIONS(175),
    [aux_sym_css_named_color_token46] = ACTIONS(175),
    [aux_sym_css_named_color_token47] = ACTIONS(175),
    [aux_sym_css_named_color_token48] = ACTIONS(175),
    [aux_sym_css_named_color_token49] = ACTIONS(175),
    [aux_sym_css_named_color_token50] = ACTIONS(175),
    [aux_sym_css_named_color_token51] = ACTIONS(175),
    [aux_sym_css_named_color_token52] = ACTIONS(177),
    [aux_sym_css_named_color_token53] = ACTIONS(175),
    [aux_sym_css_named_color_token54] = ACTIONS(175),
    [aux_sym_css_named_color_token55] = ACTIONS(177),
    [aux_sym_css_named_color_token56] = ACTIONS(175),
    [aux_sym_css_named_color_token57] = ACTIONS(175),
    [aux_sym_css_named_color_token58] = ACTIONS(175),
    [aux_sym_css_named_color_token59] = ACTIONS(175),
    [aux_sym_css_named_color_token60] = ACTIONS(175),
    [aux_sym_css_named_color_token61] = ACTIONS(175),
    [aux_sym_css_named_color_token62] = ACTIONS(175),
    [aux_sym_css_named_color_token63] = ACTIONS(175),
    [aux_sym_css_named_color_token64] = ACTIONS(177),
    [aux_sym_css_named_color_token65] = ACTIONS(175),
    [aux_sym_css_named_color_token66] = ACTIONS(175),
    [aux_sym_css_named_color_token67] = ACTIONS(175),
    [aux_sym_css_named_color_token68] = ACTIONS(175),
    [aux_sym_css_named_color_token69] = ACTIONS(175),
    [aux_sym_css_named_color_token70] = ACTIONS(175),
    [aux_sym_css_named_color_token71] = ACTIONS(175),
    [aux_sym_css_named_color_token72] = ACTIONS(175),
    [aux_sym_css_named_color_token73] = ACTIONS(175),
    [aux_sym_css_named_color_token74] = ACTIONS(175),
    [aux_sym_css_named_color_token75] = ACTIONS(175),
    [aux_sym_css_named_color_token76] = ACTIONS(175),
    [aux_sym_css_named_color_token77] = ACTIONS(175),
    [aux_sym_css_named_color_token78] = ACTIONS(175),
    [aux_sym_css_named_color_token79] = ACTIONS(175),
    [aux_sym_css_named_color_token80] = ACTIONS(175),
    [aux_sym_css_named_color_token81] = ACTIONS(175),
    [aux_sym_css_named_color_token82] = ACTIONS(175),
    [aux_sym_css_named_color_token83] = ACTIONS(177),
    [aux_sym_css_named_color_token84] = ACTIONS(175),
    [aux_sym_css_named_color_token85] = ACTIONS(175),
    [aux_sym_css_named_color_token86] = ACTIONS(175),
    [aux_sym_css_named_color_token87] = ACTIONS(175),
    [aux_sym_css_named_color_token88] = ACTIONS(175),
    [aux_sym_css_named_color_token89] = ACTIONS(175),
    [aux_sym_css_named_color_token90] = ACTIONS(175),
    [aux_sym_css_named_color_token91] = ACTIONS(175),
    [aux_sym_css_named_color_token92] = ACTIONS(175),
    [aux_sym_css_named_color_token93] = ACTIONS(175),
    [aux_sym_css_named_color_token94] = ACTIONS(175),
    [aux_sym_css_named_color_token95] = ACTIONS(175),
    [aux_sym_css_named_color_token96] = ACTIONS(175),
    [aux_sym_css_named_color_token97] = ACTIONS(175),
    [aux_sym_css_named_color_token98] = ACTIONS(175),
    [aux_sym_css_named_color_token99] = ACTIONS(175),
    [aux_sym_css_named_color_token100] = ACTIONS(175),
    [aux_sym_css_named_color_token101] = ACTIONS(175),
    [aux_sym_css_named_color_token102] = ACTIONS(175),
    [aux_sym_css_named_color_token103] = ACTIONS(175),
    [aux_sym_css_named_color_token104] = ACTIONS(177),
    [aux_sym_css_named_color_token105] = ACTIONS(175),
    [aux_sym_css_named_color_token106] = ACTIONS(177),
    [aux_sym_css_named_color_token107] = ACTIONS(175),
    [aux_sym_css_named_color_token108] = ACTIONS(175),
    [aux_sym_css_named_color_token109] = ACTIONS(175),
    [aux_sym_css_named_color_token110] = ACTIONS(175),
    [aux_sym_css_named_color_token111] = ACTIONS(175),
    [aux_sym_css_named_color_token112] = ACTIONS(175),
    [aux_sym_css_named_color_token113] = ACTIONS(175),
    [aux_sym_css_named_color_token114] = ACTIONS(175),
    [aux_sym_css_named_color_token115] = ACTIONS(175),
    [aux_sym_css_named_color_token116] = ACTIONS(175),
    [aux_sym_css_named_color_token117] = ACTIONS(175),
    [aux_sym_css_named_color_token118] = ACTIONS(175),
    [aux_sym_css_named_color_token119] = ACTIONS(175),
    [aux_sym_css_named_color_token120] = ACTIONS(175),
    [aux_sym_css_named_color_token121] = ACTIONS(175),
    [aux_sym_css_named_color_token122] = ACTIONS(175),
    [aux_sym_css_named_color_token123] = ACTIONS(175),
    [aux_sym_css_named_color_token124] = ACTIONS(175),
    [aux_sym_css_named_color_token125] = ACTIONS(175),
    [aux_sym_css_named_color_token126] = ACTIONS(175),
    [aux_sym_css_named_color_token127] = ACTIONS(175),
    [aux_sym_css_named_color_token128] = ACTIONS(175),
    [aux_sym_css_named_color_token129] = ACTIONS(175),
    [aux_sym_css_named_color_token130] = ACTIONS(175),
    [aux_sym_css_named_color_token131] = ACTIONS(175),
    [aux_sym_css_named_color_token132] = ACTIONS(175),
    [aux_sym_css_named_color_token133] = ACTIONS(175),
    [aux_sym_css_named_color_token134] = ACTIONS(175),
    [aux_sym_css_named_color_token135] = ACTIONS(175),
    [aux_sym_css_named_color_token136] = ACTIONS(175),
    [aux_sym_css_named_color_token137] = ACTIONS(175),
    [aux_sym_css_named_color_token138] = ACTIONS(175),
    [aux_sym_css_named_color_token139] = ACTIONS(175),
    [aux_sym_css_named_color_token140] = ACTIONS(175),
    [aux_sym_css_named_color_token141] = ACTIONS(175),
    [aux_sym_css_named_color_token142] = ACTIONS(175),
    [aux_sym_css_named_color_token143] = ACTIONS(175),
    [aux_sym_css_named_color_token144] = ACTIONS(175),
    [aux_sym_css_named_color_token145] = ACTIONS(177),
    [aux_sym_css_named_color_token146] = ACTIONS(175),
    [aux_sym_css_named_color_token147] = ACTIONS(177),
    [aux_sym_css_named_color_token148] = ACTIONS(175),
    [sym_css_keyword_transparent] = ACTIONS(175),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [aux_sym_css_function_rgb_legacy_token1] = ACTIONS(181),
    [aux_sym_css_function_rgba_legacy_token1] = ACTIONS(179),
    [aux_sym_css_function_hsl_legacy_token1] = ACTIONS(181),
    [aux_sym_css_function_hsla_legacy_token1] = ACTIONS(179),
    [aux_sym_css_function_hwb_token1] = ACTIONS(179),
    [aux_sym_css_function_lab_token1] = ACTIONS(179),
    [aux_sym_css_function_oklab_token1] = ACTIONS(179),
    [sym_css_hex_color_6_digits] = ACTIONS(181),
    [sym_css_hex_color_8_digits] = ACTIONS(179),
    [sym_css_hex_color_3_digits] = ACTIONS(181),
    [sym_css_hex_color_4_digits] = ACTIONS(181),
    [aux_sym_css_named_color_token1] = ACTIONS(179),
    [aux_sym_css_named_color_token2] = ACTIONS(179),
    [aux_sym_css_named_color_token3] = ACTIONS(181),
    [aux_sym_css_named_color_token4] = ACTIONS(179),
    [aux_sym_css_named_color_token5] = ACTIONS(179),
    [aux_sym_css_named_color_token6] = ACTIONS(179),
    [aux_sym_css_named_color_token7] = ACTIONS(179),
    [aux_sym_css_named_color_token8] = ACTIONS(179),
    [aux_sym_css_named_color_token9] = ACTIONS(179),
    [aux_sym_css_named_color_token10] = ACTIONS(181),
    [aux_sym_css_named_color_token11] = ACTIONS(179),
    [aux_sym_css_named_color_token12] = ACTIONS(179),
    [aux_sym_css_named_color_token13] = ACTIONS(179),
    [aux_sym_css_named_color_token14] = ACTIONS(179),
    [aux_sym_css_named_color_token15] = ACTIONS(179),
    [aux_sym_css_named_color_token16] = ACTIONS(179),
    [aux_sym_css_named_color_token17] = ACTIONS(179),
    [aux_sym_css_named_color_token18] = ACTIONS(179),
    [aux_sym_css_named_color_token19] = ACTIONS(179),
    [aux_sym_css_named_color_token20] = ACTIONS(179),
    [aux_sym_css_named_color_token21] = ACTIONS(179),
    [aux_sym_css_named_color_token22] = ACTIONS(179),
    [aux_sym_css_named_color_token23] = ACTIONS(179),
    [aux_sym_css_named_color_token24] = ACTIONS(179),
    [aux_sym_css_named_color_token25] = ACTIONS(179),
    [aux_sym_css_named_color_token26] = ACTIONS(179),
    [aux_sym_css_named_color_token27] = ACTIONS(179),
    [aux_sym_css_named_color_token28] = ACTIONS(179),
    [aux_sym_css_named_color_token29] = ACTIONS(179),
    [aux_sym_css_named_color_token30] = ACTIONS(179),
    [aux_sym_css_named_color_token31] = ACTIONS(179),
    [aux_sym_css_named_color_token32] = ACTIONS(179),
    [aux_sym_css_named_color_token33] = ACTIONS(179),
    [aux_sym_css_named_color_token34] = ACTIONS(179),
    [aux_sym_css_named_color_token35] = ACTIONS(179),
    [aux_sym_css_named_color_token36] = ACTIONS(179),
    [aux_sym_css_named_color_token37] = ACTIONS(179),
    [aux_sym_css_named_color_token38] = ACTIONS(179),
    [aux_sym_css_named_color_token39] = ACTIONS(179),
    [aux_sym_css_named_color_token40] = ACTIONS(179),
    [aux_sym_css_named_color_token41] = ACTIONS(179),
    [aux_sym_css_named_color_token42] = ACTIONS(179),
    [aux_sym_css_named_color_token43] = ACTIONS(179),
    [aux_sym_css_named_color_token44] = ACTIONS(179),
    [aux_sym_css_named_color_token45] = ACTIONS(179),
    [aux_sym_css_named_color_token46] = ACTIONS(179),
    [aux_sym_css_named_color_token47] = ACTIONS(179),
    [aux_sym_css_named_color_token48] = ACTIONS(179),
    [aux_sym_css_named_color_token49] = ACTIONS(179),
    [aux_sym_css_named_color_token50] = ACTIONS(179),
    [aux_sym_css_named_color_token51] = ACTIONS(179),
    [aux_sym_css_named_color_token52] = ACTIONS(181),
    [aux_sym_css_named_color_token53] = ACTIONS(179),
    [aux_sym_css_named_color_token54] = ACTIONS(179),
    [aux_sym_css_named_color_token55] = ACTIONS(181),
    [aux_sym_css_named_color_token56] = ACTIONS(179),
    [aux_sym_css_named_color_token57] = ACTIONS(179),
    [aux_sym_css_named_color_token58] = ACTIONS(179),
    [aux_sym_css_named_color_token59] = ACTIONS(179),
    [aux_sym_css_named_color_token60] = ACTIONS(179),
    [aux_sym_css_named_color_token61] = ACTIONS(179),
    [aux_sym_css_named_color_token62] = ACTIONS(179),
    [aux_sym_css_named_color_token63] = ACTIONS(179),
    [aux_sym_css_named_color_token64] = ACTIONS(181),
    [aux_sym_css_named_color_token65] = ACTIONS(179),
    [aux_sym_css_named_color_token66] = ACTIONS(179),
    [aux_sym_css_named_color_token67] = ACTIONS(179),
    [aux_sym_css_named_color_token68] = ACTIONS(179),
    [aux_sym_css_named_color_token69] = ACTIONS(179),
    [aux_sym_css_named_color_token70] = ACTIONS(179),
    [aux_sym_css_named_color_token71] = ACTIONS(179),
    [aux_sym_css_named_color_token72] = ACTIONS(179),
    [aux_sym_css_named_color_token73] = ACTIONS(179),
    [aux_sym_css_named_color_token74] = ACTIONS(179),
    [aux_sym_css_named_color_token75] = ACTIONS(179),
    [aux_sym_css_named_color_token76] = ACTIONS(179),
    [aux_sym_css_named_color_token77] = ACTIONS(179),
    [aux_sym_css_named_color_token78] = ACTIONS(179),
    [aux_sym_css_named_color_token79] = ACTIONS(179),
    [aux_sym_css_named_color_token80] = ACTIONS(179),
    [aux_sym_css_named_color_token81] = ACTIONS(179),
    [aux_sym_css_named_color_token82] = ACTIONS(179),
    [aux_sym_css_named_color_token83] = ACTIONS(181),
    [aux_sym_css_named_color_token84] = ACTIONS(179),
    [aux_sym_css_named_color_token85] = ACTIONS(179),
    [aux_sym_css_named_color_token86] = ACTIONS(179),
    [aux_sym_css_named_color_token87] = ACTIONS(179),
    [aux_sym_css_named_color_token88] = ACTIONS(179),
    [aux_sym_css_named_color_token89] = ACTIONS(179),
    [aux_sym_css_named_color_token90] = ACTIONS(179),
    [aux_sym_css_named_color_token91] = ACTIONS(179),
    [aux_sym_css_named_color_token92] = ACTIONS(179),
    [aux_sym_css_named_color_token93] = ACTIONS(179),
    [aux_sym_css_named_color_token94] = ACTIONS(179),
    [aux_sym_css_named_color_token95] = ACTIONS(179),
    [aux_sym_css_named_color_token96] = ACTIONS(179),
    [aux_sym_css_named_color_token97] = ACTIONS(179),
    [aux_sym_css_named_color_token98] = ACTIONS(179),
    [aux_sym_css_named_color_token99] = ACTIONS(179),
    [aux_sym_css_named_color_token100] = ACTIONS(179),
    [aux_sym_css_named_color_token101] = ACTIONS(179),
    [aux_sym_css_named_color_token102] = ACTIONS(179),
    [aux_sym_css_named_color_token103] = ACTIONS(179),
    [aux_sym_css_named_color_token104] = ACTIONS(181),
    [aux_sym_css_named_color_token105] = ACTIONS(179),
    [aux_sym_css_named_color_token106] = ACTIONS(181),
    [aux_sym_css_named_color_token107] = ACTIONS(179),
    [aux_sym_css_named_color_token108] = ACTIONS(179),
    [aux_sym_css_named_color_token109] = ACTIONS(179),
    [aux_sym_css_named_color_token110] = ACTIONS(179),
    [aux_sym_css_named_color_token111] = ACTIONS(179),
    [aux_sym_css_named_color_token112] = ACTIONS(179),
    [aux_sym_css_named_color_token113] = ACTIONS(179),
    [aux_sym_css_named_color_token114] = ACTIONS(179),
    [aux_sym_css_named_color_token115] = ACTIONS(179),
    [aux_sym_css_named_color_token116] = ACTIONS(179),
    [aux_sym_css_named_color_token117] = ACTIONS(179),
    [aux_sym_css_named_color_token118] = ACTIONS(179),
    [aux_sym_css_named_color_token119] = ACTIONS(179),
    [aux_sym_css_named_color_token120] = ACTIONS(179),
    [aux_sym_css_named_color_token121] = ACTIONS(179),
    [aux_sym_css_named_color_token122] = ACTIONS(179),
    [aux_sym_css_named_color_token123] = ACTIONS(179),
    [aux_sym_css_named_color_token124] = ACTIONS(179),
    [aux_sym_css_named_color_token125] = ACTIONS(179),
    [aux_sym_css_named_color_token126] = ACTIONS(179),
    [aux_sym_css_named_color_token127] = ACTIONS(179),
    [aux_sym_css_named_color_token128] = ACTIONS(179),
    [aux_sym_css_named_color_token129] = ACTIONS(179),
    [aux_sym_css_named_color_token130] = ACTIONS(179),
    [aux_sym_css_named_color_token131] = ACTIONS(179),
    [aux_sym_css_named_color_token132] = ACTIONS(179),
    [aux_sym_css_named_color_token133] = ACTIONS(179),
    [aux_sym_css_named_color_token134] = ACTIONS(179),
    [aux_sym_css_named_color_token135] = ACTIONS(179),
    [aux_sym_css_named_color_token136] = ACTIONS(179),
    [aux_sym_css_named_color_token137] = ACTIONS(179),
    [aux_sym_css_named_color_token138] = ACTIONS(179),
    [aux_sym_css_named_color_token139] = ACTIONS(179),
    [aux_sym_css_named_color_token140] = ACTIONS(179),
    [aux_sym_css_named_color_token141] = ACTIONS(179),
    [aux_sym_css_named_color_token142] = ACTIONS(179),
    [aux_sym_css_named_color_token143] = ACTIONS(179),
    [aux_sym_css_named_color_token144] = ACTIONS(179),
    [aux_sym_css_named_color_token145] = ACTIONS(181),
    [aux_sym_css_named_color_token146] = ACTIONS(179),
    [aux_sym_css_named_color_token147] = ACTIONS(181),
    [aux_sym_css_named_color_token148] = ACTIONS(179),
    [sym_css_keyword_transparent] = ACTIONS(179),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(183), 1,
      sym__css_number,
    ACTIONS(185), 5,
      sym__css_percentage,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [11] = 2,
    ACTIONS(187), 1,
      sym__css_number,
    ACTIONS(189), 5,
      sym__css_percentage,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [22] = 5,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      sym_css_keyword_none,
    STATE(53), 2,
      sym_css_number,
      sym_css_percentage,
  [39] = 5,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(197), 1,
      sym_css_keyword_none,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    STATE(53), 2,
      sym_css_number,
      sym_css_percentage,
  [56] = 5,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      sym_css_keyword_none,
    STATE(55), 2,
      sym_css_number,
      sym_css_percentage,
  [73] = 5,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(203), 1,
      sym_css_keyword_none,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    STATE(55), 2,
      sym_css_number,
      sym_css_percentage,
  [90] = 5,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      sym_css_keyword_none,
    STATE(54), 2,
      sym_css_number,
      sym_css_percentage,
  [107] = 5,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      sym_css_keyword_none,
    STATE(48), 2,
      sym_css_number,
      sym_css_percentage,
  [124] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(215), 1,
      sym_css_keyword_none,
    STATE(88), 2,
      sym_css_number,
      sym_css_percentage,
  [138] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(209), 1,
      sym_css_keyword_none,
    STATE(54), 2,
      sym_css_number,
      sym_css_percentage,
  [152] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(203), 1,
      sym_css_keyword_none,
    STATE(55), 2,
      sym_css_number,
      sym_css_percentage,
  [166] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(217), 1,
      sym_css_keyword_none,
    STATE(50), 2,
      sym_css_number,
      sym_css_percentage,
  [180] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(219), 1,
      sym_css_keyword_none,
    STATE(52), 2,
      sym_css_number,
      sym_css_percentage,
  [194] = 5,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(221), 1,
      sym_css_keyword_none,
    STATE(34), 1,
      sym_css_number,
    STATE(35), 1,
      sym_css_percentage,
  [210] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(213), 1,
      sym_css_keyword_none,
    STATE(48), 2,
      sym_css_number,
      sym_css_percentage,
  [224] = 5,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(223), 1,
      sym_css_keyword_none,
    STATE(36), 1,
      sym_css_number,
    STATE(37), 1,
      sym_css_percentage,
  [240] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(225), 1,
      sym_css_keyword_none,
    STATE(87), 2,
      sym_css_number,
      sym_css_percentage,
  [254] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(227), 1,
      sym_css_keyword_none,
    STATE(51), 2,
      sym_css_number,
      sym_css_percentage,
  [268] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(229), 1,
      sym_css_keyword_none,
    STATE(40), 2,
      sym_css_number,
      sym_css_percentage,
  [282] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(231), 1,
      sym_css_keyword_none,
    STATE(73), 2,
      sym_css_number,
      sym_css_percentage,
  [296] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(233), 1,
      sym_css_keyword_none,
    STATE(56), 2,
      sym_css_number,
      sym_css_percentage,
  [310] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(235), 1,
      sym_css_keyword_none,
    STATE(80), 2,
      sym_css_number,
      sym_css_percentage,
  [324] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(237), 1,
      sym_css_keyword_none,
    STATE(86), 2,
      sym_css_number,
      sym_css_percentage,
  [338] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(239), 1,
      sym_css_keyword_none,
    STATE(85), 2,
      sym_css_number,
      sym_css_percentage,
  [352] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(241), 1,
      sym_css_keyword_none,
    STATE(89), 2,
      sym_css_number,
      sym_css_percentage,
  [366] = 4,
    ACTIONS(191), 1,
      sym__css_number,
    ACTIONS(193), 1,
      sym__css_percentage,
    ACTIONS(197), 1,
      sym_css_keyword_none,
    STATE(53), 2,
      sym_css_number,
      sym_css_percentage,
  [380] = 4,
    ACTIONS(243), 1,
      sym__css_number,
    ACTIONS(245), 1,
      sym__css_percentage,
    ACTIONS(247), 1,
      sym_css_keyword_none,
    STATE(110), 1,
      sym_css_alpha_value,
  [393] = 4,
    ACTIONS(249), 1,
      sym__css_number,
    ACTIONS(251), 1,
      sym__css_angle,
    ACTIONS(253), 1,
      sym_css_keyword_none,
    STATE(49), 1,
      sym_css_hue,
  [406] = 4,
    ACTIONS(243), 1,
      sym__css_number,
    ACTIONS(245), 1,
      sym__css_percentage,
    ACTIONS(255), 1,
      sym_css_keyword_none,
    STATE(118), 1,
      sym_css_alpha_value,
  [419] = 4,
    ACTIONS(243), 1,
      sym__css_number,
    ACTIONS(245), 1,
      sym__css_percentage,
    ACTIONS(257), 1,
      sym_css_keyword_none,
    STATE(106), 1,
      sym_css_alpha_value,
  [432] = 4,
    ACTIONS(243), 1,
      sym__css_number,
    ACTIONS(245), 1,
      sym__css_percentage,
    ACTIONS(259), 1,
      sym_css_keyword_none,
    STATE(121), 1,
      sym_css_alpha_value,
  [445] = 2,
    ACTIONS(261), 1,
      sym__css_number,
    ACTIONS(263), 3,
      sym__css_percentage,
      anon_sym_COMMA,
      sym_css_keyword_none,
  [454] = 4,
    ACTIONS(243), 1,
      sym__css_number,
    ACTIONS(245), 1,
      sym__css_percentage,
    ACTIONS(265), 1,
      sym_css_keyword_none,
    STATE(97), 1,
      sym_css_alpha_value,
  [467] = 4,
    ACTIONS(243), 1,
      sym__css_number,
    ACTIONS(245), 1,
      sym__css_percentage,
    ACTIONS(267), 1,
      sym_css_keyword_none,
    STATE(113), 1,
      sym_css_alpha_value,
  [480] = 4,
    ACTIONS(243), 1,
      sym__css_number,
    ACTIONS(245), 1,
      sym__css_percentage,
    ACTIONS(269), 1,
      sym_css_keyword_none,
    STATE(98), 1,
      sym_css_alpha_value,
  [493] = 4,
    ACTIONS(249), 1,
      sym__css_number,
    ACTIONS(251), 1,
      sym__css_angle,
    ACTIONS(271), 1,
      sym_css_keyword_none,
    STATE(38), 1,
      sym_css_hue,
  [506] = 4,
    ACTIONS(249), 1,
      sym__css_number,
    ACTIONS(251), 1,
      sym__css_angle,
    ACTIONS(273), 1,
      sym_css_keyword_none,
    STATE(39), 1,
      sym_css_hue,
  [519] = 3,
    ACTIONS(243), 1,
      sym__css_number,
    ACTIONS(245), 1,
      sym__css_percentage,
    STATE(114), 1,
      sym_css_alpha_value,
  [529] = 3,
    ACTIONS(243), 1,
      sym__css_number,
    ACTIONS(245), 1,
      sym__css_percentage,
    STATE(117), 1,
      sym_css_alpha_value,
  [539] = 3,
    ACTIONS(243), 1,
      sym__css_number,
    ACTIONS(245), 1,
      sym__css_percentage,
    STATE(115), 1,
      sym_css_alpha_value,
  [549] = 3,
    ACTIONS(243), 1,
      sym__css_number,
    ACTIONS(245), 1,
      sym__css_percentage,
    STATE(96), 1,
      sym_css_alpha_value,
  [559] = 2,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      anon_sym_SLASH,
  [566] = 2,
    ACTIONS(279), 1,
      sym__css_number,
    STATE(102), 1,
      sym_css_number,
  [573] = 2,
    ACTIONS(193), 1,
      sym__css_percentage,
    STATE(103), 1,
      sym_css_percentage,
  [580] = 2,
    ACTIONS(193), 1,
      sym__css_percentage,
    STATE(83), 1,
      sym_css_percentage,
  [587] = 2,
    ACTIONS(193), 1,
      sym__css_percentage,
    STATE(105), 1,
      sym_css_percentage,
  [594] = 2,
    ACTIONS(193), 1,
      sym__css_percentage,
    STATE(84), 1,
      sym_css_percentage,
  [601] = 2,
    ACTIONS(193), 1,
      sym__css_percentage,
    STATE(107), 1,
      sym_css_percentage,
  [608] = 2,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 1,
      anon_sym_SLASH,
  [615] = 2,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
  [622] = 2,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
  [629] = 2,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
  [636] = 2,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
  [643] = 2,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(303), 1,
      anon_sym_SLASH,
  [650] = 2,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 1,
      anon_sym_SLASH,
  [657] = 2,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    ACTIONS(311), 1,
      anon_sym_SLASH,
  [664] = 2,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(315), 1,
      anon_sym_SLASH,
  [671] = 2,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(319), 1,
      anon_sym_SLASH,
  [678] = 2,
    ACTIONS(279), 1,
      sym__css_number,
    STATE(99), 1,
      sym_css_number,
  [685] = 2,
    ACTIONS(279), 1,
      sym__css_number,
    STATE(81), 1,
      sym_css_number,
  [692] = 2,
    ACTIONS(193), 1,
      sym__css_percentage,
    STATE(82), 1,
      sym_css_percentage,
  [699] = 2,
    ACTIONS(193), 1,
      sym__css_percentage,
    STATE(81), 1,
      sym_css_percentage,
  [706] = 2,
    ACTIONS(193), 1,
      sym__css_percentage,
    STATE(100), 1,
      sym_css_percentage,
  [713] = 2,
    ACTIONS(279), 1,
      sym__css_number,
    STATE(82), 1,
      sym_css_number,
  [720] = 1,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
  [724] = 1,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
  [728] = 1,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
  [732] = 1,
    ACTIONS(327), 1,
      anon_sym_COMMA,
  [736] = 1,
    ACTIONS(329), 1,
      anon_sym_COMMA,
  [740] = 1,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
  [744] = 1,
    ACTIONS(333), 1,
      anon_sym_COMMA,
  [748] = 1,
    ACTIONS(335), 1,
      anon_sym_COMMA,
  [752] = 1,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
  [756] = 1,
    ACTIONS(339), 1,
      anon_sym_COMMA,
  [760] = 1,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
  [764] = 1,
    ACTIONS(343), 1,
      anon_sym_COMMA,
  [768] = 1,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
  [772] = 1,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
  [776] = 1,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
  [780] = 1,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
  [784] = 1,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
  [788] = 1,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [792] = 1,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
  [796] = 1,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
  [800] = 1,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
  [804] = 1,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
  [808] = 1,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
  [812] = 1,
    ACTIONS(367), 1,
      anon_sym_LPAREN,
  [816] = 1,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
  [820] = 1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(32)] = 0,
  [SMALL_STATE(33)] = 11,
  [SMALL_STATE(34)] = 22,
  [SMALL_STATE(35)] = 39,
  [SMALL_STATE(36)] = 56,
  [SMALL_STATE(37)] = 73,
  [SMALL_STATE(38)] = 90,
  [SMALL_STATE(39)] = 107,
  [SMALL_STATE(40)] = 124,
  [SMALL_STATE(41)] = 138,
  [SMALL_STATE(42)] = 152,
  [SMALL_STATE(43)] = 166,
  [SMALL_STATE(44)] = 180,
  [SMALL_STATE(45)] = 194,
  [SMALL_STATE(46)] = 210,
  [SMALL_STATE(47)] = 224,
  [SMALL_STATE(48)] = 240,
  [SMALL_STATE(49)] = 254,
  [SMALL_STATE(50)] = 268,
  [SMALL_STATE(51)] = 282,
  [SMALL_STATE(52)] = 296,
  [SMALL_STATE(53)] = 310,
  [SMALL_STATE(54)] = 324,
  [SMALL_STATE(55)] = 338,
  [SMALL_STATE(56)] = 352,
  [SMALL_STATE(57)] = 366,
  [SMALL_STATE(58)] = 380,
  [SMALL_STATE(59)] = 393,
  [SMALL_STATE(60)] = 406,
  [SMALL_STATE(61)] = 419,
  [SMALL_STATE(62)] = 432,
  [SMALL_STATE(63)] = 445,
  [SMALL_STATE(64)] = 454,
  [SMALL_STATE(65)] = 467,
  [SMALL_STATE(66)] = 480,
  [SMALL_STATE(67)] = 493,
  [SMALL_STATE(68)] = 506,
  [SMALL_STATE(69)] = 519,
  [SMALL_STATE(70)] = 529,
  [SMALL_STATE(71)] = 539,
  [SMALL_STATE(72)] = 549,
  [SMALL_STATE(73)] = 559,
  [SMALL_STATE(74)] = 566,
  [SMALL_STATE(75)] = 573,
  [SMALL_STATE(76)] = 580,
  [SMALL_STATE(77)] = 587,
  [SMALL_STATE(78)] = 594,
  [SMALL_STATE(79)] = 601,
  [SMALL_STATE(80)] = 608,
  [SMALL_STATE(81)] = 615,
  [SMALL_STATE(82)] = 622,
  [SMALL_STATE(83)] = 629,
  [SMALL_STATE(84)] = 636,
  [SMALL_STATE(85)] = 643,
  [SMALL_STATE(86)] = 650,
  [SMALL_STATE(87)] = 657,
  [SMALL_STATE(88)] = 664,
  [SMALL_STATE(89)] = 671,
  [SMALL_STATE(90)] = 678,
  [SMALL_STATE(91)] = 685,
  [SMALL_STATE(92)] = 692,
  [SMALL_STATE(93)] = 699,
  [SMALL_STATE(94)] = 706,
  [SMALL_STATE(95)] = 713,
  [SMALL_STATE(96)] = 720,
  [SMALL_STATE(97)] = 724,
  [SMALL_STATE(98)] = 728,
  [SMALL_STATE(99)] = 732,
  [SMALL_STATE(100)] = 736,
  [SMALL_STATE(101)] = 740,
  [SMALL_STATE(102)] = 744,
  [SMALL_STATE(103)] = 748,
  [SMALL_STATE(104)] = 752,
  [SMALL_STATE(105)] = 756,
  [SMALL_STATE(106)] = 760,
  [SMALL_STATE(107)] = 764,
  [SMALL_STATE(108)] = 768,
  [SMALL_STATE(109)] = 772,
  [SMALL_STATE(110)] = 776,
  [SMALL_STATE(111)] = 780,
  [SMALL_STATE(112)] = 784,
  [SMALL_STATE(113)] = 788,
  [SMALL_STATE(114)] = 792,
  [SMALL_STATE(115)] = 796,
  [SMALL_STATE(116)] = 800,
  [SMALL_STATE(117)] = 804,
  [SMALL_STATE(118)] = 808,
  [SMALL_STATE(119)] = 812,
  [SMALL_STATE(120)] = 816,
  [SMALL_STATE(121)] = 820,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_lab, 8, 0, 10),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_lab, 8, 0, 10),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_modern, 6, 0, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_modern, 6, 0, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_modern, 6, 0, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_modern, 6, 0, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_modern, 6, 0, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_modern, 6, 0, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hwb, 6, 0, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hwb, 6, 0, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_lab, 6, 0, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_lab, 6, 0, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_oklab, 6, 0, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_oklab, 6, 0, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_modern, 8, 0, 5),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_modern, 8, 0, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_legacy, 8, 0, 6),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_legacy, 8, 0, 6),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_modern, 8, 0, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_modern, 8, 0, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_legacy, 8, 0, 6),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_legacy, 8, 0, 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_modern, 8, 0, 7),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_modern, 8, 0, 7),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_legacy, 8, 0, 8),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_legacy, 8, 0, 8),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_modern, 8, 0, 7),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_modern, 8, 0, 7),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_legacy, 8, 0, 8),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_legacy, 8, 0, 8),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hwb, 8, 0, 9),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hwb, 8, 0, 9),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_oklab, 8, 0, 10),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_oklab, 8, 0, 10),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_legacy, 10, 0, 11),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_legacy, 10, 0, 11),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_legacy, 10, 0, 11),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_legacy, 10, 0, 11),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_legacy, 10, 0, 12),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_legacy, 10, 0, 12),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_legacy, 10, 0, 12),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_legacy, 10, 0, 12),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_modern, 6, 0, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_modern, 6, 0, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_number, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_number, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_percentage, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_percentage, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_hue, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_hue, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_alpha_value, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [347] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
