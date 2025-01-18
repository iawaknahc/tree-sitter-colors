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
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 176
#define ALIAS_COUNT 0
#define TOKEN_COUNT 163
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym__css_number = 1,
  sym__css_percentage = 2,
  anon_sym_rgb = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_rgba = 7,
  anon_sym_SLASH = 8,
  sym_css_hex_color_6_digits = 9,
  sym_css_hex_color_8_digits = 10,
  sym_css_hex_color_3_digits = 11,
  sym_css_hex_color_4_digits = 12,
  aux_sym_css_named_color_token1 = 13,
  aux_sym_css_named_color_token2 = 14,
  aux_sym_css_named_color_token3 = 15,
  aux_sym_css_named_color_token4 = 16,
  aux_sym_css_named_color_token5 = 17,
  aux_sym_css_named_color_token6 = 18,
  aux_sym_css_named_color_token7 = 19,
  aux_sym_css_named_color_token8 = 20,
  aux_sym_css_named_color_token9 = 21,
  aux_sym_css_named_color_token10 = 22,
  aux_sym_css_named_color_token11 = 23,
  aux_sym_css_named_color_token12 = 24,
  aux_sym_css_named_color_token13 = 25,
  aux_sym_css_named_color_token14 = 26,
  aux_sym_css_named_color_token15 = 27,
  aux_sym_css_named_color_token16 = 28,
  aux_sym_css_named_color_token17 = 29,
  aux_sym_css_named_color_token18 = 30,
  aux_sym_css_named_color_token19 = 31,
  aux_sym_css_named_color_token20 = 32,
  aux_sym_css_named_color_token21 = 33,
  aux_sym_css_named_color_token22 = 34,
  aux_sym_css_named_color_token23 = 35,
  aux_sym_css_named_color_token24 = 36,
  aux_sym_css_named_color_token25 = 37,
  aux_sym_css_named_color_token26 = 38,
  aux_sym_css_named_color_token27 = 39,
  aux_sym_css_named_color_token28 = 40,
  aux_sym_css_named_color_token29 = 41,
  aux_sym_css_named_color_token30 = 42,
  aux_sym_css_named_color_token31 = 43,
  aux_sym_css_named_color_token32 = 44,
  aux_sym_css_named_color_token33 = 45,
  aux_sym_css_named_color_token34 = 46,
  aux_sym_css_named_color_token35 = 47,
  aux_sym_css_named_color_token36 = 48,
  aux_sym_css_named_color_token37 = 49,
  aux_sym_css_named_color_token38 = 50,
  aux_sym_css_named_color_token39 = 51,
  aux_sym_css_named_color_token40 = 52,
  aux_sym_css_named_color_token41 = 53,
  aux_sym_css_named_color_token42 = 54,
  aux_sym_css_named_color_token43 = 55,
  aux_sym_css_named_color_token44 = 56,
  aux_sym_css_named_color_token45 = 57,
  aux_sym_css_named_color_token46 = 58,
  aux_sym_css_named_color_token47 = 59,
  aux_sym_css_named_color_token48 = 60,
  aux_sym_css_named_color_token49 = 61,
  aux_sym_css_named_color_token50 = 62,
  aux_sym_css_named_color_token51 = 63,
  aux_sym_css_named_color_token52 = 64,
  aux_sym_css_named_color_token53 = 65,
  aux_sym_css_named_color_token54 = 66,
  aux_sym_css_named_color_token55 = 67,
  aux_sym_css_named_color_token56 = 68,
  aux_sym_css_named_color_token57 = 69,
  aux_sym_css_named_color_token58 = 70,
  aux_sym_css_named_color_token59 = 71,
  aux_sym_css_named_color_token60 = 72,
  aux_sym_css_named_color_token61 = 73,
  aux_sym_css_named_color_token62 = 74,
  aux_sym_css_named_color_token63 = 75,
  aux_sym_css_named_color_token64 = 76,
  aux_sym_css_named_color_token65 = 77,
  aux_sym_css_named_color_token66 = 78,
  aux_sym_css_named_color_token67 = 79,
  aux_sym_css_named_color_token68 = 80,
  aux_sym_css_named_color_token69 = 81,
  aux_sym_css_named_color_token70 = 82,
  aux_sym_css_named_color_token71 = 83,
  aux_sym_css_named_color_token72 = 84,
  aux_sym_css_named_color_token73 = 85,
  aux_sym_css_named_color_token74 = 86,
  aux_sym_css_named_color_token75 = 87,
  aux_sym_css_named_color_token76 = 88,
  aux_sym_css_named_color_token77 = 89,
  aux_sym_css_named_color_token78 = 90,
  aux_sym_css_named_color_token79 = 91,
  aux_sym_css_named_color_token80 = 92,
  aux_sym_css_named_color_token81 = 93,
  aux_sym_css_named_color_token82 = 94,
  aux_sym_css_named_color_token83 = 95,
  aux_sym_css_named_color_token84 = 96,
  aux_sym_css_named_color_token85 = 97,
  aux_sym_css_named_color_token86 = 98,
  aux_sym_css_named_color_token87 = 99,
  aux_sym_css_named_color_token88 = 100,
  aux_sym_css_named_color_token89 = 101,
  aux_sym_css_named_color_token90 = 102,
  aux_sym_css_named_color_token91 = 103,
  aux_sym_css_named_color_token92 = 104,
  aux_sym_css_named_color_token93 = 105,
  aux_sym_css_named_color_token94 = 106,
  aux_sym_css_named_color_token95 = 107,
  aux_sym_css_named_color_token96 = 108,
  aux_sym_css_named_color_token97 = 109,
  aux_sym_css_named_color_token98 = 110,
  aux_sym_css_named_color_token99 = 111,
  aux_sym_css_named_color_token100 = 112,
  aux_sym_css_named_color_token101 = 113,
  aux_sym_css_named_color_token102 = 114,
  aux_sym_css_named_color_token103 = 115,
  aux_sym_css_named_color_token104 = 116,
  aux_sym_css_named_color_token105 = 117,
  aux_sym_css_named_color_token106 = 118,
  aux_sym_css_named_color_token107 = 119,
  aux_sym_css_named_color_token108 = 120,
  aux_sym_css_named_color_token109 = 121,
  aux_sym_css_named_color_token110 = 122,
  aux_sym_css_named_color_token111 = 123,
  aux_sym_css_named_color_token112 = 124,
  aux_sym_css_named_color_token113 = 125,
  aux_sym_css_named_color_token114 = 126,
  aux_sym_css_named_color_token115 = 127,
  aux_sym_css_named_color_token116 = 128,
  aux_sym_css_named_color_token117 = 129,
  aux_sym_css_named_color_token118 = 130,
  aux_sym_css_named_color_token119 = 131,
  aux_sym_css_named_color_token120 = 132,
  aux_sym_css_named_color_token121 = 133,
  aux_sym_css_named_color_token122 = 134,
  aux_sym_css_named_color_token123 = 135,
  aux_sym_css_named_color_token124 = 136,
  aux_sym_css_named_color_token125 = 137,
  aux_sym_css_named_color_token126 = 138,
  aux_sym_css_named_color_token127 = 139,
  aux_sym_css_named_color_token128 = 140,
  aux_sym_css_named_color_token129 = 141,
  aux_sym_css_named_color_token130 = 142,
  aux_sym_css_named_color_token131 = 143,
  aux_sym_css_named_color_token132 = 144,
  aux_sym_css_named_color_token133 = 145,
  aux_sym_css_named_color_token134 = 146,
  aux_sym_css_named_color_token135 = 147,
  aux_sym_css_named_color_token136 = 148,
  aux_sym_css_named_color_token137 = 149,
  aux_sym_css_named_color_token138 = 150,
  aux_sym_css_named_color_token139 = 151,
  aux_sym_css_named_color_token140 = 152,
  aux_sym_css_named_color_token141 = 153,
  aux_sym_css_named_color_token142 = 154,
  aux_sym_css_named_color_token143 = 155,
  aux_sym_css_named_color_token144 = 156,
  aux_sym_css_named_color_token145 = 157,
  aux_sym_css_named_color_token146 = 158,
  aux_sym_css_named_color_token147 = 159,
  aux_sym_css_named_color_token148 = 160,
  sym_css_keyword_transparent = 161,
  sym_css_keyword_none = 162,
  sym_source_file = 163,
  sym_css_number = 164,
  sym_css_percentage = 165,
  sym_css_alpha_value = 166,
  sym_css_function_rgb = 167,
  sym_css_function_rgba = 168,
  sym_css_function_rgb_legacy = 169,
  sym_css_function_rgba_legacy = 170,
  sym_css_function_rgb_modern = 171,
  sym_css_function_rgba_modern = 172,
  sym_css_hex_color = 173,
  sym_css_named_color = 174,
  aux_sym_source_file_repeat1 = 175,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__css_number] = "_css_number",
  [sym__css_percentage] = "_css_percentage",
  [anon_sym_rgb] = "rgb",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_rgba] = "rgba",
  [anon_sym_SLASH] = "/",
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
  [sym_css_function_rgb] = "css_function_rgb",
  [sym_css_function_rgba] = "css_function_rgba",
  [sym_css_function_rgb_legacy] = "css_function_rgb_legacy",
  [sym_css_function_rgba_legacy] = "css_function_rgba_legacy",
  [sym_css_function_rgb_modern] = "css_function_rgb_modern",
  [sym_css_function_rgba_modern] = "css_function_rgba_modern",
  [sym_css_hex_color] = "css_hex_color",
  [sym_css_named_color] = "css_named_color",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__css_number] = sym__css_number,
  [sym__css_percentage] = sym__css_percentage,
  [anon_sym_rgb] = anon_sym_rgb,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_rgba] = anon_sym_rgba,
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [sym_css_function_rgb] = sym_css_function_rgb,
  [sym_css_function_rgba] = sym_css_function_rgba,
  [sym_css_function_rgb_legacy] = sym_css_function_rgb_legacy,
  [sym_css_function_rgba_legacy] = sym_css_function_rgba_legacy,
  [sym_css_function_rgb_modern] = sym_css_function_rgb_modern,
  [sym_css_function_rgba_modern] = sym_css_function_rgba_modern,
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
  [anon_sym_rgb] = {
    .visible = true,
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
  [anon_sym_rgba] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
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
  field_r = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_a] = "a",
  [field_b] = "b",
  [field_g] = "g",
  [field_r] = "r",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 4},
  [3] = {.index = 7, .length = 3},
  [4] = {.index = 10, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_b, 4},
    {field_g, 3},
    {field_r, 2},
  [3] =
    {field_a, 6},
    {field_b, 4},
    {field_g, 3},
    {field_r, 2},
  [7] =
    {field_b, 6},
    {field_g, 4},
    {field_r, 2},
  [10] =
    {field_a, 8},
    {field_b, 6},
    {field_g, 4},
    {field_r, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(772);
      ADVANCE_MAP(
        '#', 771,
        '(', 778,
        ')', 780,
        ',', 779,
        '.', 765,
        '/', 782,
        'R', 141,
        'r', 3,
        '+', 1,
        '-', 1,
        'A', 377,
        'a', 377,
        'B', 193,
        'b', 193,
        'C', 5,
        'c', 5,
        'D', 22,
        'd', 22,
        'F', 323,
        'f', 323,
        'G', 27,
        'g', 27,
        'H', 508,
        'h', 508,
        'I', 478,
        'i', 478,
        'K', 300,
        'k', 300,
        'L', 6,
        'l', 6,
        'M', 7,
        'm', 7,
        'N', 8,
        'n', 8,
        'O', 372,
        'o', 372,
        'P', 9,
        'p', 9,
        'S', 10,
        's', 10,
        'T', 23,
        't', 23,
        'V', 325,
        'v', 325,
        'W', 298,
        'w', 298,
        'Y', 192,
        'y', 192,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      END_STATE();
    case 2:
      if (lookahead == 'b') ADVANCE(777);
      END_STATE();
    case 3:
      if (lookahead == 'g') ADVANCE(2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(648);
      END_STATE();
    case 4:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(775);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        'A', 126,
        'a', 126,
        'H', 32,
        'h', 32,
        'O', 575,
        'o', 575,
        'R', 324,
        'r', 324,
        'Y', 25,
        'y', 25,
      );
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(720);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        'A', 284,
        'a', 284,
        'E', 129,
        'e', 129,
        'I', 127,
        'i', 127,
        'O', 97,
        'o', 97,
      );
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(719);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        'A', 384,
        'a', 384,
        'E', 52,
        'e', 52,
        'I', 479,
        'i', 479,
        'L', 683,
        'l', 683,
        'O', 735,
        'o', 735,
        'U', 581,
        'u', 581,
      );
      END_STATE();
    case 10:
      ADVANCE_MAP(
        'A', 125,
        'a', 125,
        'E', 12,
        'e', 12,
        'I', 200,
        'i', 200,
        'K', 742,
        'k', 742,
        'L', 24,
        'l', 24,
        'N', 514,
        'n', 514,
        'P', 604,
        'p', 604,
        'T', 234,
        't', 234,
      );
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(789);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(359);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(888);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(915);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(835);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(872);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(815);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(743);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        'A', 570,
        'a', 570,
        'B', 412,
        'b', 412,
        'O', 608,
        'o', 608,
        'P', 711,
        'p', 711,
        'S', 270,
        's', 270,
        'T', 718,
        't', 718,
        'V', 357,
        'v', 357,
      );
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        'A', 576,
        'a', 576,
        'E', 142,
        'e', 142,
        'I', 437,
        'i', 437,
        'O', 133,
        'o', 133,
      );
      END_STATE();
    case 23:
      ADVANCE_MAP(
        'A', 447,
        'a', 447,
        'E', 28,
        'e', 28,
        'H', 338,
        'h', 338,
        'O', 440,
        'o', 440,
        'R', 38,
        'r', 38,
        'U', 601,
        'u', 601,
      );
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(448);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        'A', 326,
        'a', 326,
        'H', 512,
        'h', 512,
        'O', 379,
        'o', 379,
        'R', 19,
        'r', 19,
      );
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(373);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(757);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(583);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(502);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(374);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(745);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(747);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(748);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(749);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(422);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(751);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(752);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(753);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(506);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(509);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(649);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(671);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(610);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(737);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(505);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 65:
      ADVANCE_MAP(
        'A', 425,
        'a', 425,
        'E', 69,
        'e', 69,
        'K', 762,
        'k', 762,
        'L', 59,
        'l', 59,
        'T', 269,
        't', 269,
      );
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(613);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(891);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(253);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(907);
      END_STATE();
    case 73:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(398);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(611);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(602);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(534);
      END_STATE();
    case 77:
      ADVANCE_MAP(
        'B', 399,
        'b', 399,
        'C', 760,
        'c', 760,
        'G', 529,
        'g', 529,
        'K', 312,
        'k', 312,
        'M', 58,
        'm', 58,
        'O', 385,
        'o', 385,
        'R', 197,
        'r', 197,
        'S', 44,
        's', 44,
        'T', 716,
        't', 716,
        'V', 355,
        'v', 355,
      );
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(402);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(404);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(406);
      END_STATE();
    case 81:
      ADVANCE_MAP(
        'B', 408,
        'b', 408,
        'C', 550,
        'c', 550,
        'G', 557,
        'g', 557,
        'P', 345,
        'p', 345,
        'S', 65,
        's', 65,
        'Y', 259,
        'y', 259,
      );
      END_STATE();
    case 82:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(409);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(603);
      END_STATE();
    case 83:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(410);
      END_STATE();
    case 84:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(411);
      END_STATE();
    case 85:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(413);
      END_STATE();
    case 86:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(414);
      END_STATE();
    case 87:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(415);
      END_STATE();
    case 88:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(416);
      END_STATE();
    case 89:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(417);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(605);
      END_STATE();
    case 90:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(418);
      END_STATE();
    case 91:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(419);
      END_STATE();
    case 92:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(420);
      END_STATE();
    case 93:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(615);
      END_STATE();
    case 94:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(618);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(301);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(362);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(302);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 102:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 103:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 104:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 105:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(525);
      END_STATE();
    case 106:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(306);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(597);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(838);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(894);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(819);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(799);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(839);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(846);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(893);
      END_STATE();
    case 117:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(818);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(876);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(810);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(895);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(898);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(795);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(882);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(721);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(134);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(442);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 126:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 127:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(487);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(658);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(659);
      END_STATE();
    case 128:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(318);
      END_STATE();
    case 129:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(340);
      END_STATE();
    case 130:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(764);
      END_STATE();
    case 131:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 133:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 134:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(396);
      END_STATE();
    case 135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 136:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 137:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 138:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 139:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 140:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(763);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(648);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(796);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(869);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(931);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(793);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(889);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(917);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(926);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(909);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(800);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(854);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(885);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(918);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(923);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(928);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(831);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(837);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(875);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(932);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(828);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(877);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(883);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(906);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(825);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(897);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(881);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 193:
      ADVANCE_MAP(
        'E', 317,
        'e', 317,
        'I', 634,
        'i', 634,
        'L', 11,
        'l', 11,
        'R', 513,
        'r', 513,
        'U', 580,
        'u', 580,
      );
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(759);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(722);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(450);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(843);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(503);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(813);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(860);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(664);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
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
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(631);
      END_STATE();
    case 271:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(900);
      END_STATE();
    case 272:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(271);
      END_STATE();
    case 273:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(541);
      END_STATE();
    case 275:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(401);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      END_STATE();
    case 276:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(554);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(717);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(356);
      END_STATE();
    case 277:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(303);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(144);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 278:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(579);
      END_STATE();
    case 279:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 280:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(203);
      END_STATE();
    case 281:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 282:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 283:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(316);
      END_STATE();
    case 284:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 285:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(311);
      END_STATE();
    case 286:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(607);
      END_STATE();
    case 287:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 288:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(614);
      END_STATE();
    case 289:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(619);
      END_STATE();
    case 290:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(620);
      END_STATE();
    case 291:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 292:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(622);
      END_STATE();
    case 293:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(623);
      END_STATE();
    case 294:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(624);
      END_STATE();
    case 295:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(625);
      END_STATE();
    case 296:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(626);
      END_STATE();
    case 297:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(296);
      END_STATE();
    case 298:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(237);
      END_STATE();
    case 299:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(851);
      END_STATE();
    case 300:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 301:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(641);
      END_STATE();
    case 302:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(560);
      END_STATE();
    case 303:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(651);
      END_STATE();
    case 304:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(327);
      END_STATE();
    case 305:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(346);
      END_STATE();
    case 306:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(337);
      END_STATE();
    case 307:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(331);
      END_STATE();
    case 308:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(329);
      END_STATE();
    case 309:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(332);
      END_STATE();
    case 310:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(199);
      END_STATE();
    case 311:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(235);
      END_STATE();
    case 312:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(53);
      END_STATE();
    case 313:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(349);
      END_STATE();
    case 314:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(351);
      END_STATE();
    case 315:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(352);
      END_STATE();
    case 316:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(679);
      END_STATE();
    case 317:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 318:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 319:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(849);
      END_STATE();
    case 320:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(814);
      END_STATE();
    case 321:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 322:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 323:
      ADVANCE_MAP(
        'I', 584,
        'i', 584,
        'L', 519,
        'l', 519,
        'O', 585,
        'o', 585,
        'U', 95,
        'u', 95,
      );
      END_STATE();
    case 324:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 325:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 326:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(481);
      END_STATE();
    case 327:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 328:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 329:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 330:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 331:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 332:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 333:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 334:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 335:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 336:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(498);
      END_STATE();
    case 337:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 338:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 339:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(483);
      END_STATE();
    case 340:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(685);
      END_STATE();
    case 341:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(643);
      END_STATE();
    case 342:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(499);
      END_STATE();
    case 343:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(723);
      END_STATE();
    case 344:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(484);
      END_STATE();
    case 345:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(486);
      END_STATE();
    case 346:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(667);
      END_STATE();
    case 347:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(645);
      END_STATE();
    case 348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(646);
      END_STATE();
    case 349:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(668);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(647);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(669);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(670);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(571);
      END_STATE();
    case 354:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 355:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 359:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(556);
      END_STATE();
    case 360:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 361:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(902);
      END_STATE();
    case 362:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(794);
      END_STATE();
    case 363:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(845);
      END_STATE();
    case 364:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(805);
      END_STATE();
    case 365:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(827);
      END_STATE();
    case 366:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(832);
      END_STATE();
    case 367:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(861);
      END_STATE();
    case 368:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(319);
      END_STATE();
    case 369:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(320);
      END_STATE();
    case 370:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(175);
      END_STATE();
    case 371:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(761);
      END_STATE();
    case 372:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 373:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(925);
      END_STATE();
    case 374:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(803);
      END_STATE();
    case 375:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(914);
      END_STATE();
    case 376:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(855);
      END_STATE();
    case 377:
      ADVANCE_MAP(
        'L', 321,
        'l', 321,
        'N', 660,
        'n', 660,
        'Q', 684,
        'q', 684,
        'Z', 709,
        'z', 709,
      );
      END_STATE();
    case 378:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(756);
      END_STATE();
    case 379:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 380:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(397);
      END_STATE();
    case 381:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 382:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(686);
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 384:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 385:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(343);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 386:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      END_STATE();
    case 387:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 389:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 390:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 392:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 394:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 397:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(516);
      END_STATE();
    case 398:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(691);
      END_STATE();
    case 399:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(692);
      END_STATE();
    case 400:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 401:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(518);
      END_STATE();
    case 402:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(693);
      END_STATE();
    case 403:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(520);
      END_STATE();
    case 404:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(694);
      END_STATE();
    case 405:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(523);
      END_STATE();
    case 406:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(695);
      END_STATE();
    case 407:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 408:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(696);
      END_STATE();
    case 409:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(697);
      END_STATE();
    case 410:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(698);
      END_STATE();
    case 411:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(699);
      END_STATE();
    case 412:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(700);
      END_STATE();
    case 413:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(701);
      END_STATE();
    case 414:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(702);
      END_STATE();
    case 415:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(703);
      END_STATE();
    case 416:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(704);
      END_STATE();
    case 417:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 418:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(706);
      END_STATE();
    case 419:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(707);
      END_STATE();
    case 420:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(708);
      END_STATE();
    case 421:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 422:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 423:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(403);
      END_STATE();
    case 424:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 425:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(444);
      END_STATE();
    case 426:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 427:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 428:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 429:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 430:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(738);
      END_STATE();
    case 431:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 432:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 433:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 434:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(903);
      END_STATE();
    case 435:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 436:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(884);
      END_STATE();
    case 437:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(278);
      END_STATE();
    case 438:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(650);
      END_STATE();
    case 439:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(530);
      END_STATE();
    case 440:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 441:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(527);
      END_STATE();
    case 442:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(537);
      END_STATE();
    case 443:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(539);
      END_STATE();
    case 444:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(540);
      END_STATE();
    case 445:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(542);
      END_STATE();
    case 446:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 447:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(924);
      END_STATE();
    case 448:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(807);
      END_STATE();
    case 449:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(798);
      END_STATE();
    case 450:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(841);
      END_STATE();
    case 451:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(871);
      END_STATE();
    case 452:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(873);
      END_STATE();
    case 453:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(911);
      END_STATE();
    case 454:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(806);
      END_STATE();
    case 455:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(809);
      END_STATE();
    case 456:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(886);
      END_STATE();
    case 457:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      END_STATE();
    case 458:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(908);
      END_STATE();
    case 459:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(812);
      END_STATE();
    case 460:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(852);
      END_STATE();
    case 461:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(856);
      END_STATE();
    case 462:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(870);
      END_STATE();
    case 463:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(896);
      END_STATE();
    case 464:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(820);
      END_STATE();
    case 465:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(859);
      END_STATE();
    case 466:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(912);
      END_STATE();
    case 467:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 468:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(862);
      END_STATE();
    case 469:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(910);
      END_STATE();
    case 470:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(922);
      END_STATE();
    case 471:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(934);
      END_STATE();
    case 472:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(821);
      END_STATE();
    case 473:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(853);
      END_STATE();
    case 474:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(863);
      END_STATE();
    case 475:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(816);
      END_STATE();
    case 476:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(878);
      END_STATE();
    case 477:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(880);
      END_STATE();
    case 478:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(128);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(521);
      END_STATE();
    case 479:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 480:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 481:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(635);
      END_STATE();
    case 482:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(636);
      END_STATE();
    case 483:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 484:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 485:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(561);
      END_STATE();
    case 486:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 487:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 488:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 489:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(662);
      END_STATE();
    case 490:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(656);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(490);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(593);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 507:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 508:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(485);
      END_STATE();
    case 509:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(847);
      END_STATE();
    case 510:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(927);
      END_STATE();
    case 511:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(836);
      END_STATE();
    case 512:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(637);
      END_STATE();
    case 513:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(731);
      END_STATE();
    case 514:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(724);
      END_STATE();
    case 515:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 516:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 517:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 518:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 519:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(606);
      END_STATE();
    case 520:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(727);
      END_STATE();
    case 521:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(582);
      END_STATE();
    case 522:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 523:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(728);
      END_STATE();
    case 524:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 525:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(395);
      END_STATE();
    case 526:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(729);
      END_STATE();
    case 527:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 528:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 529:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(400);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 530:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 531:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 532:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 533:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 534:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 535:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 536:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 537:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 539:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(464);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(732);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(536);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(733);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(609);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 554:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(421);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 555:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 556:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(424);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 558:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(566);
      END_STATE();
    case 559:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(899);
      END_STATE();
    case 560:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(682);
      END_STATE();
    case 561:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 562:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 563:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(388);
      END_STATE();
    case 564:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(393);
      END_STATE();
    case 565:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(394);
      END_STATE();
    case 566:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(344);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(371);
      END_STATE();
    case 567:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(712);
      END_STATE();
    case 568:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(689);
      END_STATE();
    case 569:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(687);
      END_STATE();
    case 570:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(688);
      END_STATE();
    case 571:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(690);
      END_STATE();
    case 572:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(713);
      END_STATE();
    case 573:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(714);
      END_STATE();
    case 574:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(715);
      END_STATE();
    case 575:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 576:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 577:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(916);
      END_STATE();
    case 578:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(850);
      END_STATE();
    case 579:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 580:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 581:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(563);
      END_STATE();
    case 582:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 583:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(673);
      END_STATE();
    case 584:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 585:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 586:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 587:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 588:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 589:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 590:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(531);
      END_STATE();
    case 591:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(533);
      END_STATE();
    case 592:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 593:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 594:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 596:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 597:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 598:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(569);
      END_STATE();
    case 602:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 603:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 604:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 605:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 606:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 607:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 608:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 609:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 610:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 611:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 612:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 613:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 614:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 615:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 616:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 617:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 618:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 619:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 620:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 621:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 624:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 626:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 628:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 629:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 630:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 631:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      END_STATE();
    case 632:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(574);
      END_STATE();
    case 634:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(568);
      END_STATE();
    case 635:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(76);
      END_STATE();
    case 636:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(562);
      END_STATE();
    case 637:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(657);
      END_STATE();
    case 638:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(299);
      END_STATE();
    case 639:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(672);
      END_STATE();
    case 640:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(677);
      END_STATE();
    case 641:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      END_STATE();
    case 642:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 643:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      END_STATE();
    case 644:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(169);
      END_STATE();
    case 645:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      END_STATE();
    case 646:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      END_STATE();
    case 647:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      END_STATE();
    case 648:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(755);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 649:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(335);
      END_STATE();
    case 650:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(538);
      END_STATE();
    case 651:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(81);
      END_STATE();
    case 652:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(930);
      END_STATE();
    case 653:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(929);
      END_STATE();
    case 654:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(797);
      END_STATE();
    case 655:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(826);
      END_STATE();
    case 656:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(935);
      END_STATE();
    case 657:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(736);
      END_STATE();
    case 658:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 659:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(758);
      END_STATE();
    case 660:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(353);
      END_STATE();
    case 661:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(510);
      END_STATE();
    case 662:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 663:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      END_STATE();
    case 664:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 665:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(18);
      END_STATE();
    case 666:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(162);
      END_STATE();
    case 667:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 668:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(177);
      END_STATE();
    case 669:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      END_STATE();
    case 670:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      END_STATE();
    case 671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      END_STATE();
    case 672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      END_STATE();
    case 673:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(596);
      END_STATE();
    case 674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(599);
      END_STATE();
    case 675:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(600);
      END_STATE();
    case 676:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 677:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      END_STATE();
    case 678:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      END_STATE();
    case 679:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 680:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(262);
      END_STATE();
    case 681:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(901);
      END_STATE();
    case 682:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 683:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(434);
      END_STATE();
    case 684:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 685:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(435);
      END_STATE();
    case 686:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(638);
      END_STATE();
    case 687:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 688:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 689:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 690:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 691:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 692:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 693:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 694:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 695:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 696:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 697:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 698:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 699:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 700:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 701:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 702:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 703:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 704:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 705:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 706:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 707:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 708:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 709:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(588);
      END_STATE();
    case 710:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(644);
      END_STATE();
    case 711:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(612);
      END_STATE();
    case 712:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(616);
      END_STATE();
    case 713:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(551);
      END_STATE();
    case 714:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(552);
      END_STATE();
    case 715:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(553);
      END_STATE();
    case 716:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(630);
      END_STATE();
    case 717:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(632);
      END_STATE();
    case 718:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(633);
      END_STATE();
    case 719:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 720:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(205);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(500);
      END_STATE();
    case 721:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(149);
      END_STATE();
    case 722:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(210);
      END_STATE();
    case 723:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(268);
      END_STATE();
    case 724:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(921);
      END_STATE();
    case 725:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(933);
      END_STATE();
    case 726:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(844);
      END_STATE();
    case 727:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(842);
      END_STATE();
    case 728:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(868);
      END_STATE();
    case 729:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(857);
      END_STATE();
    case 730:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(528);
      END_STATE();
    case 731:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(449);
      END_STATE();
    case 732:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(458);
      END_STATE();
    case 733:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(466);
      END_STATE();
    case 734:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(469);
      END_STATE();
    case 735:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 736:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(305);
      END_STATE();
    case 737:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(308);
      END_STATE();
    case 738:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(313);
      END_STATE();
    case 739:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(314);
      END_STATE();
    case 740:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(315);
      END_STATE();
    case 741:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(267);
      END_STATE();
    case 742:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 743:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(840);
      END_STATE();
    case 744:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(848);
      END_STATE();
    case 745:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(829);
      END_STATE();
    case 746:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(830);
      END_STATE();
    case 747:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(811);
      END_STATE();
    case 748:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(858);
      END_STATE();
    case 749:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(919);
      END_STATE();
    case 750:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(920);
      END_STATE();
    case 751:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(823);
      END_STATE();
    case 752:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(824);
      END_STATE();
    case 753:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(865);
      END_STATE();
    case 754:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(866);
      END_STATE();
    case 755:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 756:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(730);
      END_STATE();
    case 757:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 758:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(586);
      END_STATE();
    case 759:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 760:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 761:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 762:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 763:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 764:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(260);
      END_STATE();
    case 765:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(774);
      END_STATE();
    case 766:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(775);
      END_STATE();
    case 767:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(785);
      END_STATE();
    case 768:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(783);
      END_STATE();
    case 769:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(784);
      END_STATE();
    case 770:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(767);
      END_STATE();
    case 771:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(770);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__css_number);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == '.') ADVANCE(765);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__css_number);
      if (lookahead == '%') ADVANCE(776);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(774);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__css_number);
      if (lookahead == '%') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(775);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__css_percentage);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_rgb);
      if (lookahead == 'a') ADVANCE(781);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_rgba);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_css_hex_color_6_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_css_hex_color_8_digits);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_css_hex_color_3_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_css_hex_color_4_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(768);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_css_named_color_token1);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_css_named_color_token2);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_css_named_color_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_css_named_color_token4);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_css_named_color_token5);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_css_named_color_token6);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_css_named_color_token7);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_css_named_color_token8);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_css_named_color_token9);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_css_named_color_token10);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(354);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_css_named_color_token11);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_css_named_color_token12);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_css_named_color_token13);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_css_named_color_token14);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_css_named_color_token15);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_css_named_color_token16);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_css_named_color_token17);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_css_named_color_token18);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_css_named_color_token19);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_css_named_color_token20);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_css_named_color_token21);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_css_named_color_token22);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_css_named_color_token23);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_css_named_color_token24);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_css_named_color_token25);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_css_named_color_token26);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_css_named_color_token27);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_css_named_color_token28);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_css_named_color_token29);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_css_named_color_token30);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_css_named_color_token31);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_css_named_color_token32);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_css_named_color_token33);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_css_named_color_token34);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_css_named_color_token35);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_css_named_color_token36);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_css_named_color_token37);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_css_named_color_token38);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_css_named_color_token39);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_css_named_color_token40);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_css_named_color_token41);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_css_named_color_token42);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_css_named_color_token43);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_css_named_color_token44);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_css_named_color_token45);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_css_named_color_token46);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_css_named_color_token47);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_css_named_color_token48);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_css_named_color_token49);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_css_named_color_token50);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_css_named_color_token51);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_css_named_color_token52);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_css_named_color_token53);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_css_named_color_token54);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_css_named_color_token55);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(257);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_css_named_color_token56);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_css_named_color_token57);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_css_named_color_token58);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_css_named_color_token59);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_css_named_color_token60);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_css_named_color_token61);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_css_named_color_token62);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_css_named_color_token63);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_css_named_color_token64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(382);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_css_named_color_token65);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_css_named_color_token66);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_css_named_color_token67);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_css_named_color_token68);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_css_named_color_token69);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_css_named_color_token70);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_css_named_color_token71);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_css_named_color_token72);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_css_named_color_token73);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_css_named_color_token74);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_css_named_color_token75);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_css_named_color_token76);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_css_named_color_token77);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_css_named_color_token78);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_css_named_color_token79);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_css_named_color_token80);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_css_named_color_token81);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_css_named_color_token82);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_css_named_color_token83);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(617);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_css_named_color_token84);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_css_named_color_token85);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_css_named_color_token86);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_css_named_color_token87);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_css_named_color_token88);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_css_named_color_token89);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_css_named_color_token90);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_css_named_color_token91);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_css_named_color_token92);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_css_named_color_token93);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_css_named_color_token94);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_css_named_color_token95);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_css_named_color_token96);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_css_named_color_token97);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_css_named_color_token98);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_css_named_color_token99);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_css_named_color_token100);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_css_named_color_token101);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_css_named_color_token102);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_css_named_color_token103);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_css_named_color_token104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(594);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_css_named_color_token105);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_css_named_color_token106);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_css_named_color_token107);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_css_named_color_token108);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_css_named_color_token109);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_css_named_color_token110);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_css_named_color_token111);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_css_named_color_token112);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_css_named_color_token113);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_css_named_color_token114);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_css_named_color_token115);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_css_named_color_token116);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_css_named_color_token117);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_css_named_color_token118);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_css_named_color_token119);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_css_named_color_token120);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_css_named_color_token121);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_css_named_color_token122);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_css_named_color_token123);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_css_named_color_token124);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_css_named_color_token125);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_css_named_color_token126);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_css_named_color_token127);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_css_named_color_token128);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_css_named_color_token129);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_css_named_color_token130);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_css_named_color_token131);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_css_named_color_token132);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_css_named_color_token133);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_css_named_color_token134);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_css_named_color_token135);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_css_named_color_token136);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_css_named_color_token137);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_css_named_color_token138);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_css_named_color_token139);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_css_named_color_token140);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_css_named_color_token141);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_css_named_color_token142);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_css_named_color_token143);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_css_named_color_token144);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_css_named_color_token145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(441);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_css_named_color_token146);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_css_named_color_token147);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(621);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_css_named_color_token148);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_css_keyword_transparent);
      END_STATE();
    case 936:
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__css_number] = ACTIONS(1),
    [sym__css_percentage] = ACTIONS(1),
    [anon_sym_rgb] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_rgba] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
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
    [sym_source_file] = STATE(45),
    [sym_css_function_rgb] = STATE(2),
    [sym_css_function_rgba] = STATE(2),
    [sym_css_function_rgb_legacy] = STATE(6),
    [sym_css_function_rgba_legacy] = STATE(7),
    [sym_css_function_rgb_modern] = STATE(6),
    [sym_css_function_rgba_modern] = STATE(7),
    [sym_css_hex_color] = STATE(2),
    [sym_css_named_color] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_rgb] = ACTIONS(5),
    [anon_sym_rgba] = ACTIONS(7),
    [sym_css_hex_color_6_digits] = ACTIONS(9),
    [sym_css_hex_color_8_digits] = ACTIONS(11),
    [sym_css_hex_color_3_digits] = ACTIONS(9),
    [sym_css_hex_color_4_digits] = ACTIONS(9),
    [aux_sym_css_named_color_token1] = ACTIONS(13),
    [aux_sym_css_named_color_token2] = ACTIONS(13),
    [aux_sym_css_named_color_token3] = ACTIONS(15),
    [aux_sym_css_named_color_token4] = ACTIONS(13),
    [aux_sym_css_named_color_token5] = ACTIONS(13),
    [aux_sym_css_named_color_token6] = ACTIONS(13),
    [aux_sym_css_named_color_token7] = ACTIONS(13),
    [aux_sym_css_named_color_token8] = ACTIONS(13),
    [aux_sym_css_named_color_token9] = ACTIONS(13),
    [aux_sym_css_named_color_token10] = ACTIONS(15),
    [aux_sym_css_named_color_token11] = ACTIONS(13),
    [aux_sym_css_named_color_token12] = ACTIONS(13),
    [aux_sym_css_named_color_token13] = ACTIONS(13),
    [aux_sym_css_named_color_token14] = ACTIONS(13),
    [aux_sym_css_named_color_token15] = ACTIONS(13),
    [aux_sym_css_named_color_token16] = ACTIONS(13),
    [aux_sym_css_named_color_token17] = ACTIONS(13),
    [aux_sym_css_named_color_token18] = ACTIONS(13),
    [aux_sym_css_named_color_token19] = ACTIONS(13),
    [aux_sym_css_named_color_token20] = ACTIONS(13),
    [aux_sym_css_named_color_token21] = ACTIONS(13),
    [aux_sym_css_named_color_token22] = ACTIONS(13),
    [aux_sym_css_named_color_token23] = ACTIONS(13),
    [aux_sym_css_named_color_token24] = ACTIONS(13),
    [aux_sym_css_named_color_token25] = ACTIONS(13),
    [aux_sym_css_named_color_token26] = ACTIONS(13),
    [aux_sym_css_named_color_token27] = ACTIONS(13),
    [aux_sym_css_named_color_token28] = ACTIONS(13),
    [aux_sym_css_named_color_token29] = ACTIONS(13),
    [aux_sym_css_named_color_token30] = ACTIONS(13),
    [aux_sym_css_named_color_token31] = ACTIONS(13),
    [aux_sym_css_named_color_token32] = ACTIONS(13),
    [aux_sym_css_named_color_token33] = ACTIONS(13),
    [aux_sym_css_named_color_token34] = ACTIONS(13),
    [aux_sym_css_named_color_token35] = ACTIONS(13),
    [aux_sym_css_named_color_token36] = ACTIONS(13),
    [aux_sym_css_named_color_token37] = ACTIONS(13),
    [aux_sym_css_named_color_token38] = ACTIONS(13),
    [aux_sym_css_named_color_token39] = ACTIONS(13),
    [aux_sym_css_named_color_token40] = ACTIONS(13),
    [aux_sym_css_named_color_token41] = ACTIONS(13),
    [aux_sym_css_named_color_token42] = ACTIONS(13),
    [aux_sym_css_named_color_token43] = ACTIONS(13),
    [aux_sym_css_named_color_token44] = ACTIONS(13),
    [aux_sym_css_named_color_token45] = ACTIONS(13),
    [aux_sym_css_named_color_token46] = ACTIONS(13),
    [aux_sym_css_named_color_token47] = ACTIONS(13),
    [aux_sym_css_named_color_token48] = ACTIONS(13),
    [aux_sym_css_named_color_token49] = ACTIONS(13),
    [aux_sym_css_named_color_token50] = ACTIONS(13),
    [aux_sym_css_named_color_token51] = ACTIONS(13),
    [aux_sym_css_named_color_token52] = ACTIONS(15),
    [aux_sym_css_named_color_token53] = ACTIONS(13),
    [aux_sym_css_named_color_token54] = ACTIONS(13),
    [aux_sym_css_named_color_token55] = ACTIONS(15),
    [aux_sym_css_named_color_token56] = ACTIONS(13),
    [aux_sym_css_named_color_token57] = ACTIONS(13),
    [aux_sym_css_named_color_token58] = ACTIONS(13),
    [aux_sym_css_named_color_token59] = ACTIONS(13),
    [aux_sym_css_named_color_token60] = ACTIONS(13),
    [aux_sym_css_named_color_token61] = ACTIONS(13),
    [aux_sym_css_named_color_token62] = ACTIONS(13),
    [aux_sym_css_named_color_token63] = ACTIONS(13),
    [aux_sym_css_named_color_token64] = ACTIONS(15),
    [aux_sym_css_named_color_token65] = ACTIONS(13),
    [aux_sym_css_named_color_token66] = ACTIONS(13),
    [aux_sym_css_named_color_token67] = ACTIONS(13),
    [aux_sym_css_named_color_token68] = ACTIONS(13),
    [aux_sym_css_named_color_token69] = ACTIONS(13),
    [aux_sym_css_named_color_token70] = ACTIONS(13),
    [aux_sym_css_named_color_token71] = ACTIONS(13),
    [aux_sym_css_named_color_token72] = ACTIONS(13),
    [aux_sym_css_named_color_token73] = ACTIONS(13),
    [aux_sym_css_named_color_token74] = ACTIONS(13),
    [aux_sym_css_named_color_token75] = ACTIONS(13),
    [aux_sym_css_named_color_token76] = ACTIONS(13),
    [aux_sym_css_named_color_token77] = ACTIONS(13),
    [aux_sym_css_named_color_token78] = ACTIONS(13),
    [aux_sym_css_named_color_token79] = ACTIONS(13),
    [aux_sym_css_named_color_token80] = ACTIONS(13),
    [aux_sym_css_named_color_token81] = ACTIONS(13),
    [aux_sym_css_named_color_token82] = ACTIONS(13),
    [aux_sym_css_named_color_token83] = ACTIONS(15),
    [aux_sym_css_named_color_token84] = ACTIONS(13),
    [aux_sym_css_named_color_token85] = ACTIONS(13),
    [aux_sym_css_named_color_token86] = ACTIONS(13),
    [aux_sym_css_named_color_token87] = ACTIONS(13),
    [aux_sym_css_named_color_token88] = ACTIONS(13),
    [aux_sym_css_named_color_token89] = ACTIONS(13),
    [aux_sym_css_named_color_token90] = ACTIONS(13),
    [aux_sym_css_named_color_token91] = ACTIONS(13),
    [aux_sym_css_named_color_token92] = ACTIONS(13),
    [aux_sym_css_named_color_token93] = ACTIONS(13),
    [aux_sym_css_named_color_token94] = ACTIONS(13),
    [aux_sym_css_named_color_token95] = ACTIONS(13),
    [aux_sym_css_named_color_token96] = ACTIONS(13),
    [aux_sym_css_named_color_token97] = ACTIONS(13),
    [aux_sym_css_named_color_token98] = ACTIONS(13),
    [aux_sym_css_named_color_token99] = ACTIONS(13),
    [aux_sym_css_named_color_token100] = ACTIONS(13),
    [aux_sym_css_named_color_token101] = ACTIONS(13),
    [aux_sym_css_named_color_token102] = ACTIONS(13),
    [aux_sym_css_named_color_token103] = ACTIONS(13),
    [aux_sym_css_named_color_token104] = ACTIONS(15),
    [aux_sym_css_named_color_token105] = ACTIONS(13),
    [aux_sym_css_named_color_token106] = ACTIONS(15),
    [aux_sym_css_named_color_token107] = ACTIONS(13),
    [aux_sym_css_named_color_token108] = ACTIONS(13),
    [aux_sym_css_named_color_token109] = ACTIONS(13),
    [aux_sym_css_named_color_token110] = ACTIONS(13),
    [aux_sym_css_named_color_token111] = ACTIONS(13),
    [aux_sym_css_named_color_token112] = ACTIONS(13),
    [aux_sym_css_named_color_token113] = ACTIONS(13),
    [aux_sym_css_named_color_token114] = ACTIONS(13),
    [aux_sym_css_named_color_token115] = ACTIONS(13),
    [aux_sym_css_named_color_token116] = ACTIONS(13),
    [aux_sym_css_named_color_token117] = ACTIONS(13),
    [aux_sym_css_named_color_token118] = ACTIONS(13),
    [aux_sym_css_named_color_token119] = ACTIONS(13),
    [aux_sym_css_named_color_token120] = ACTIONS(13),
    [aux_sym_css_named_color_token121] = ACTIONS(13),
    [aux_sym_css_named_color_token122] = ACTIONS(13),
    [aux_sym_css_named_color_token123] = ACTIONS(13),
    [aux_sym_css_named_color_token124] = ACTIONS(13),
    [aux_sym_css_named_color_token125] = ACTIONS(13),
    [aux_sym_css_named_color_token126] = ACTIONS(13),
    [aux_sym_css_named_color_token127] = ACTIONS(13),
    [aux_sym_css_named_color_token128] = ACTIONS(13),
    [aux_sym_css_named_color_token129] = ACTIONS(13),
    [aux_sym_css_named_color_token130] = ACTIONS(13),
    [aux_sym_css_named_color_token131] = ACTIONS(13),
    [aux_sym_css_named_color_token132] = ACTIONS(13),
    [aux_sym_css_named_color_token133] = ACTIONS(13),
    [aux_sym_css_named_color_token134] = ACTIONS(13),
    [aux_sym_css_named_color_token135] = ACTIONS(13),
    [aux_sym_css_named_color_token136] = ACTIONS(13),
    [aux_sym_css_named_color_token137] = ACTIONS(13),
    [aux_sym_css_named_color_token138] = ACTIONS(13),
    [aux_sym_css_named_color_token139] = ACTIONS(13),
    [aux_sym_css_named_color_token140] = ACTIONS(13),
    [aux_sym_css_named_color_token141] = ACTIONS(13),
    [aux_sym_css_named_color_token142] = ACTIONS(13),
    [aux_sym_css_named_color_token143] = ACTIONS(13),
    [aux_sym_css_named_color_token144] = ACTIONS(13),
    [aux_sym_css_named_color_token145] = ACTIONS(15),
    [aux_sym_css_named_color_token146] = ACTIONS(13),
    [aux_sym_css_named_color_token147] = ACTIONS(15),
    [aux_sym_css_named_color_token148] = ACTIONS(13),
    [sym_css_keyword_transparent] = ACTIONS(17),
  },
  [2] = {
    [sym_css_function_rgb] = STATE(3),
    [sym_css_function_rgba] = STATE(3),
    [sym_css_function_rgb_legacy] = STATE(6),
    [sym_css_function_rgba_legacy] = STATE(7),
    [sym_css_function_rgb_modern] = STATE(6),
    [sym_css_function_rgba_modern] = STATE(7),
    [sym_css_hex_color] = STATE(3),
    [sym_css_named_color] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_rgb] = ACTIONS(5),
    [anon_sym_rgba] = ACTIONS(7),
    [sym_css_hex_color_6_digits] = ACTIONS(9),
    [sym_css_hex_color_8_digits] = ACTIONS(11),
    [sym_css_hex_color_3_digits] = ACTIONS(9),
    [sym_css_hex_color_4_digits] = ACTIONS(9),
    [aux_sym_css_named_color_token1] = ACTIONS(13),
    [aux_sym_css_named_color_token2] = ACTIONS(13),
    [aux_sym_css_named_color_token3] = ACTIONS(15),
    [aux_sym_css_named_color_token4] = ACTIONS(13),
    [aux_sym_css_named_color_token5] = ACTIONS(13),
    [aux_sym_css_named_color_token6] = ACTIONS(13),
    [aux_sym_css_named_color_token7] = ACTIONS(13),
    [aux_sym_css_named_color_token8] = ACTIONS(13),
    [aux_sym_css_named_color_token9] = ACTIONS(13),
    [aux_sym_css_named_color_token10] = ACTIONS(15),
    [aux_sym_css_named_color_token11] = ACTIONS(13),
    [aux_sym_css_named_color_token12] = ACTIONS(13),
    [aux_sym_css_named_color_token13] = ACTIONS(13),
    [aux_sym_css_named_color_token14] = ACTIONS(13),
    [aux_sym_css_named_color_token15] = ACTIONS(13),
    [aux_sym_css_named_color_token16] = ACTIONS(13),
    [aux_sym_css_named_color_token17] = ACTIONS(13),
    [aux_sym_css_named_color_token18] = ACTIONS(13),
    [aux_sym_css_named_color_token19] = ACTIONS(13),
    [aux_sym_css_named_color_token20] = ACTIONS(13),
    [aux_sym_css_named_color_token21] = ACTIONS(13),
    [aux_sym_css_named_color_token22] = ACTIONS(13),
    [aux_sym_css_named_color_token23] = ACTIONS(13),
    [aux_sym_css_named_color_token24] = ACTIONS(13),
    [aux_sym_css_named_color_token25] = ACTIONS(13),
    [aux_sym_css_named_color_token26] = ACTIONS(13),
    [aux_sym_css_named_color_token27] = ACTIONS(13),
    [aux_sym_css_named_color_token28] = ACTIONS(13),
    [aux_sym_css_named_color_token29] = ACTIONS(13),
    [aux_sym_css_named_color_token30] = ACTIONS(13),
    [aux_sym_css_named_color_token31] = ACTIONS(13),
    [aux_sym_css_named_color_token32] = ACTIONS(13),
    [aux_sym_css_named_color_token33] = ACTIONS(13),
    [aux_sym_css_named_color_token34] = ACTIONS(13),
    [aux_sym_css_named_color_token35] = ACTIONS(13),
    [aux_sym_css_named_color_token36] = ACTIONS(13),
    [aux_sym_css_named_color_token37] = ACTIONS(13),
    [aux_sym_css_named_color_token38] = ACTIONS(13),
    [aux_sym_css_named_color_token39] = ACTIONS(13),
    [aux_sym_css_named_color_token40] = ACTIONS(13),
    [aux_sym_css_named_color_token41] = ACTIONS(13),
    [aux_sym_css_named_color_token42] = ACTIONS(13),
    [aux_sym_css_named_color_token43] = ACTIONS(13),
    [aux_sym_css_named_color_token44] = ACTIONS(13),
    [aux_sym_css_named_color_token45] = ACTIONS(13),
    [aux_sym_css_named_color_token46] = ACTIONS(13),
    [aux_sym_css_named_color_token47] = ACTIONS(13),
    [aux_sym_css_named_color_token48] = ACTIONS(13),
    [aux_sym_css_named_color_token49] = ACTIONS(13),
    [aux_sym_css_named_color_token50] = ACTIONS(13),
    [aux_sym_css_named_color_token51] = ACTIONS(13),
    [aux_sym_css_named_color_token52] = ACTIONS(15),
    [aux_sym_css_named_color_token53] = ACTIONS(13),
    [aux_sym_css_named_color_token54] = ACTIONS(13),
    [aux_sym_css_named_color_token55] = ACTIONS(15),
    [aux_sym_css_named_color_token56] = ACTIONS(13),
    [aux_sym_css_named_color_token57] = ACTIONS(13),
    [aux_sym_css_named_color_token58] = ACTIONS(13),
    [aux_sym_css_named_color_token59] = ACTIONS(13),
    [aux_sym_css_named_color_token60] = ACTIONS(13),
    [aux_sym_css_named_color_token61] = ACTIONS(13),
    [aux_sym_css_named_color_token62] = ACTIONS(13),
    [aux_sym_css_named_color_token63] = ACTIONS(13),
    [aux_sym_css_named_color_token64] = ACTIONS(15),
    [aux_sym_css_named_color_token65] = ACTIONS(13),
    [aux_sym_css_named_color_token66] = ACTIONS(13),
    [aux_sym_css_named_color_token67] = ACTIONS(13),
    [aux_sym_css_named_color_token68] = ACTIONS(13),
    [aux_sym_css_named_color_token69] = ACTIONS(13),
    [aux_sym_css_named_color_token70] = ACTIONS(13),
    [aux_sym_css_named_color_token71] = ACTIONS(13),
    [aux_sym_css_named_color_token72] = ACTIONS(13),
    [aux_sym_css_named_color_token73] = ACTIONS(13),
    [aux_sym_css_named_color_token74] = ACTIONS(13),
    [aux_sym_css_named_color_token75] = ACTIONS(13),
    [aux_sym_css_named_color_token76] = ACTIONS(13),
    [aux_sym_css_named_color_token77] = ACTIONS(13),
    [aux_sym_css_named_color_token78] = ACTIONS(13),
    [aux_sym_css_named_color_token79] = ACTIONS(13),
    [aux_sym_css_named_color_token80] = ACTIONS(13),
    [aux_sym_css_named_color_token81] = ACTIONS(13),
    [aux_sym_css_named_color_token82] = ACTIONS(13),
    [aux_sym_css_named_color_token83] = ACTIONS(15),
    [aux_sym_css_named_color_token84] = ACTIONS(13),
    [aux_sym_css_named_color_token85] = ACTIONS(13),
    [aux_sym_css_named_color_token86] = ACTIONS(13),
    [aux_sym_css_named_color_token87] = ACTIONS(13),
    [aux_sym_css_named_color_token88] = ACTIONS(13),
    [aux_sym_css_named_color_token89] = ACTIONS(13),
    [aux_sym_css_named_color_token90] = ACTIONS(13),
    [aux_sym_css_named_color_token91] = ACTIONS(13),
    [aux_sym_css_named_color_token92] = ACTIONS(13),
    [aux_sym_css_named_color_token93] = ACTIONS(13),
    [aux_sym_css_named_color_token94] = ACTIONS(13),
    [aux_sym_css_named_color_token95] = ACTIONS(13),
    [aux_sym_css_named_color_token96] = ACTIONS(13),
    [aux_sym_css_named_color_token97] = ACTIONS(13),
    [aux_sym_css_named_color_token98] = ACTIONS(13),
    [aux_sym_css_named_color_token99] = ACTIONS(13),
    [aux_sym_css_named_color_token100] = ACTIONS(13),
    [aux_sym_css_named_color_token101] = ACTIONS(13),
    [aux_sym_css_named_color_token102] = ACTIONS(13),
    [aux_sym_css_named_color_token103] = ACTIONS(13),
    [aux_sym_css_named_color_token104] = ACTIONS(15),
    [aux_sym_css_named_color_token105] = ACTIONS(13),
    [aux_sym_css_named_color_token106] = ACTIONS(15),
    [aux_sym_css_named_color_token107] = ACTIONS(13),
    [aux_sym_css_named_color_token108] = ACTIONS(13),
    [aux_sym_css_named_color_token109] = ACTIONS(13),
    [aux_sym_css_named_color_token110] = ACTIONS(13),
    [aux_sym_css_named_color_token111] = ACTIONS(13),
    [aux_sym_css_named_color_token112] = ACTIONS(13),
    [aux_sym_css_named_color_token113] = ACTIONS(13),
    [aux_sym_css_named_color_token114] = ACTIONS(13),
    [aux_sym_css_named_color_token115] = ACTIONS(13),
    [aux_sym_css_named_color_token116] = ACTIONS(13),
    [aux_sym_css_named_color_token117] = ACTIONS(13),
    [aux_sym_css_named_color_token118] = ACTIONS(13),
    [aux_sym_css_named_color_token119] = ACTIONS(13),
    [aux_sym_css_named_color_token120] = ACTIONS(13),
    [aux_sym_css_named_color_token121] = ACTIONS(13),
    [aux_sym_css_named_color_token122] = ACTIONS(13),
    [aux_sym_css_named_color_token123] = ACTIONS(13),
    [aux_sym_css_named_color_token124] = ACTIONS(13),
    [aux_sym_css_named_color_token125] = ACTIONS(13),
    [aux_sym_css_named_color_token126] = ACTIONS(13),
    [aux_sym_css_named_color_token127] = ACTIONS(13),
    [aux_sym_css_named_color_token128] = ACTIONS(13),
    [aux_sym_css_named_color_token129] = ACTIONS(13),
    [aux_sym_css_named_color_token130] = ACTIONS(13),
    [aux_sym_css_named_color_token131] = ACTIONS(13),
    [aux_sym_css_named_color_token132] = ACTIONS(13),
    [aux_sym_css_named_color_token133] = ACTIONS(13),
    [aux_sym_css_named_color_token134] = ACTIONS(13),
    [aux_sym_css_named_color_token135] = ACTIONS(13),
    [aux_sym_css_named_color_token136] = ACTIONS(13),
    [aux_sym_css_named_color_token137] = ACTIONS(13),
    [aux_sym_css_named_color_token138] = ACTIONS(13),
    [aux_sym_css_named_color_token139] = ACTIONS(13),
    [aux_sym_css_named_color_token140] = ACTIONS(13),
    [aux_sym_css_named_color_token141] = ACTIONS(13),
    [aux_sym_css_named_color_token142] = ACTIONS(13),
    [aux_sym_css_named_color_token143] = ACTIONS(13),
    [aux_sym_css_named_color_token144] = ACTIONS(13),
    [aux_sym_css_named_color_token145] = ACTIONS(15),
    [aux_sym_css_named_color_token146] = ACTIONS(13),
    [aux_sym_css_named_color_token147] = ACTIONS(15),
    [aux_sym_css_named_color_token148] = ACTIONS(13),
    [sym_css_keyword_transparent] = ACTIONS(21),
  },
  [3] = {
    [sym_css_function_rgb] = STATE(3),
    [sym_css_function_rgba] = STATE(3),
    [sym_css_function_rgb_legacy] = STATE(6),
    [sym_css_function_rgba_legacy] = STATE(7),
    [sym_css_function_rgb_modern] = STATE(6),
    [sym_css_function_rgba_modern] = STATE(7),
    [sym_css_hex_color] = STATE(3),
    [sym_css_named_color] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_rgb] = ACTIONS(25),
    [anon_sym_rgba] = ACTIONS(28),
    [sym_css_hex_color_6_digits] = ACTIONS(31),
    [sym_css_hex_color_8_digits] = ACTIONS(34),
    [sym_css_hex_color_3_digits] = ACTIONS(31),
    [sym_css_hex_color_4_digits] = ACTIONS(31),
    [aux_sym_css_named_color_token1] = ACTIONS(37),
    [aux_sym_css_named_color_token2] = ACTIONS(37),
    [aux_sym_css_named_color_token3] = ACTIONS(40),
    [aux_sym_css_named_color_token4] = ACTIONS(37),
    [aux_sym_css_named_color_token5] = ACTIONS(37),
    [aux_sym_css_named_color_token6] = ACTIONS(37),
    [aux_sym_css_named_color_token7] = ACTIONS(37),
    [aux_sym_css_named_color_token8] = ACTIONS(37),
    [aux_sym_css_named_color_token9] = ACTIONS(37),
    [aux_sym_css_named_color_token10] = ACTIONS(40),
    [aux_sym_css_named_color_token11] = ACTIONS(37),
    [aux_sym_css_named_color_token12] = ACTIONS(37),
    [aux_sym_css_named_color_token13] = ACTIONS(37),
    [aux_sym_css_named_color_token14] = ACTIONS(37),
    [aux_sym_css_named_color_token15] = ACTIONS(37),
    [aux_sym_css_named_color_token16] = ACTIONS(37),
    [aux_sym_css_named_color_token17] = ACTIONS(37),
    [aux_sym_css_named_color_token18] = ACTIONS(37),
    [aux_sym_css_named_color_token19] = ACTIONS(37),
    [aux_sym_css_named_color_token20] = ACTIONS(37),
    [aux_sym_css_named_color_token21] = ACTIONS(37),
    [aux_sym_css_named_color_token22] = ACTIONS(37),
    [aux_sym_css_named_color_token23] = ACTIONS(37),
    [aux_sym_css_named_color_token24] = ACTIONS(37),
    [aux_sym_css_named_color_token25] = ACTIONS(37),
    [aux_sym_css_named_color_token26] = ACTIONS(37),
    [aux_sym_css_named_color_token27] = ACTIONS(37),
    [aux_sym_css_named_color_token28] = ACTIONS(37),
    [aux_sym_css_named_color_token29] = ACTIONS(37),
    [aux_sym_css_named_color_token30] = ACTIONS(37),
    [aux_sym_css_named_color_token31] = ACTIONS(37),
    [aux_sym_css_named_color_token32] = ACTIONS(37),
    [aux_sym_css_named_color_token33] = ACTIONS(37),
    [aux_sym_css_named_color_token34] = ACTIONS(37),
    [aux_sym_css_named_color_token35] = ACTIONS(37),
    [aux_sym_css_named_color_token36] = ACTIONS(37),
    [aux_sym_css_named_color_token37] = ACTIONS(37),
    [aux_sym_css_named_color_token38] = ACTIONS(37),
    [aux_sym_css_named_color_token39] = ACTIONS(37),
    [aux_sym_css_named_color_token40] = ACTIONS(37),
    [aux_sym_css_named_color_token41] = ACTIONS(37),
    [aux_sym_css_named_color_token42] = ACTIONS(37),
    [aux_sym_css_named_color_token43] = ACTIONS(37),
    [aux_sym_css_named_color_token44] = ACTIONS(37),
    [aux_sym_css_named_color_token45] = ACTIONS(37),
    [aux_sym_css_named_color_token46] = ACTIONS(37),
    [aux_sym_css_named_color_token47] = ACTIONS(37),
    [aux_sym_css_named_color_token48] = ACTIONS(37),
    [aux_sym_css_named_color_token49] = ACTIONS(37),
    [aux_sym_css_named_color_token50] = ACTIONS(37),
    [aux_sym_css_named_color_token51] = ACTIONS(37),
    [aux_sym_css_named_color_token52] = ACTIONS(40),
    [aux_sym_css_named_color_token53] = ACTIONS(37),
    [aux_sym_css_named_color_token54] = ACTIONS(37),
    [aux_sym_css_named_color_token55] = ACTIONS(40),
    [aux_sym_css_named_color_token56] = ACTIONS(37),
    [aux_sym_css_named_color_token57] = ACTIONS(37),
    [aux_sym_css_named_color_token58] = ACTIONS(37),
    [aux_sym_css_named_color_token59] = ACTIONS(37),
    [aux_sym_css_named_color_token60] = ACTIONS(37),
    [aux_sym_css_named_color_token61] = ACTIONS(37),
    [aux_sym_css_named_color_token62] = ACTIONS(37),
    [aux_sym_css_named_color_token63] = ACTIONS(37),
    [aux_sym_css_named_color_token64] = ACTIONS(40),
    [aux_sym_css_named_color_token65] = ACTIONS(37),
    [aux_sym_css_named_color_token66] = ACTIONS(37),
    [aux_sym_css_named_color_token67] = ACTIONS(37),
    [aux_sym_css_named_color_token68] = ACTIONS(37),
    [aux_sym_css_named_color_token69] = ACTIONS(37),
    [aux_sym_css_named_color_token70] = ACTIONS(37),
    [aux_sym_css_named_color_token71] = ACTIONS(37),
    [aux_sym_css_named_color_token72] = ACTIONS(37),
    [aux_sym_css_named_color_token73] = ACTIONS(37),
    [aux_sym_css_named_color_token74] = ACTIONS(37),
    [aux_sym_css_named_color_token75] = ACTIONS(37),
    [aux_sym_css_named_color_token76] = ACTIONS(37),
    [aux_sym_css_named_color_token77] = ACTIONS(37),
    [aux_sym_css_named_color_token78] = ACTIONS(37),
    [aux_sym_css_named_color_token79] = ACTIONS(37),
    [aux_sym_css_named_color_token80] = ACTIONS(37),
    [aux_sym_css_named_color_token81] = ACTIONS(37),
    [aux_sym_css_named_color_token82] = ACTIONS(37),
    [aux_sym_css_named_color_token83] = ACTIONS(40),
    [aux_sym_css_named_color_token84] = ACTIONS(37),
    [aux_sym_css_named_color_token85] = ACTIONS(37),
    [aux_sym_css_named_color_token86] = ACTIONS(37),
    [aux_sym_css_named_color_token87] = ACTIONS(37),
    [aux_sym_css_named_color_token88] = ACTIONS(37),
    [aux_sym_css_named_color_token89] = ACTIONS(37),
    [aux_sym_css_named_color_token90] = ACTIONS(37),
    [aux_sym_css_named_color_token91] = ACTIONS(37),
    [aux_sym_css_named_color_token92] = ACTIONS(37),
    [aux_sym_css_named_color_token93] = ACTIONS(37),
    [aux_sym_css_named_color_token94] = ACTIONS(37),
    [aux_sym_css_named_color_token95] = ACTIONS(37),
    [aux_sym_css_named_color_token96] = ACTIONS(37),
    [aux_sym_css_named_color_token97] = ACTIONS(37),
    [aux_sym_css_named_color_token98] = ACTIONS(37),
    [aux_sym_css_named_color_token99] = ACTIONS(37),
    [aux_sym_css_named_color_token100] = ACTIONS(37),
    [aux_sym_css_named_color_token101] = ACTIONS(37),
    [aux_sym_css_named_color_token102] = ACTIONS(37),
    [aux_sym_css_named_color_token103] = ACTIONS(37),
    [aux_sym_css_named_color_token104] = ACTIONS(40),
    [aux_sym_css_named_color_token105] = ACTIONS(37),
    [aux_sym_css_named_color_token106] = ACTIONS(40),
    [aux_sym_css_named_color_token107] = ACTIONS(37),
    [aux_sym_css_named_color_token108] = ACTIONS(37),
    [aux_sym_css_named_color_token109] = ACTIONS(37),
    [aux_sym_css_named_color_token110] = ACTIONS(37),
    [aux_sym_css_named_color_token111] = ACTIONS(37),
    [aux_sym_css_named_color_token112] = ACTIONS(37),
    [aux_sym_css_named_color_token113] = ACTIONS(37),
    [aux_sym_css_named_color_token114] = ACTIONS(37),
    [aux_sym_css_named_color_token115] = ACTIONS(37),
    [aux_sym_css_named_color_token116] = ACTIONS(37),
    [aux_sym_css_named_color_token117] = ACTIONS(37),
    [aux_sym_css_named_color_token118] = ACTIONS(37),
    [aux_sym_css_named_color_token119] = ACTIONS(37),
    [aux_sym_css_named_color_token120] = ACTIONS(37),
    [aux_sym_css_named_color_token121] = ACTIONS(37),
    [aux_sym_css_named_color_token122] = ACTIONS(37),
    [aux_sym_css_named_color_token123] = ACTIONS(37),
    [aux_sym_css_named_color_token124] = ACTIONS(37),
    [aux_sym_css_named_color_token125] = ACTIONS(37),
    [aux_sym_css_named_color_token126] = ACTIONS(37),
    [aux_sym_css_named_color_token127] = ACTIONS(37),
    [aux_sym_css_named_color_token128] = ACTIONS(37),
    [aux_sym_css_named_color_token129] = ACTIONS(37),
    [aux_sym_css_named_color_token130] = ACTIONS(37),
    [aux_sym_css_named_color_token131] = ACTIONS(37),
    [aux_sym_css_named_color_token132] = ACTIONS(37),
    [aux_sym_css_named_color_token133] = ACTIONS(37),
    [aux_sym_css_named_color_token134] = ACTIONS(37),
    [aux_sym_css_named_color_token135] = ACTIONS(37),
    [aux_sym_css_named_color_token136] = ACTIONS(37),
    [aux_sym_css_named_color_token137] = ACTIONS(37),
    [aux_sym_css_named_color_token138] = ACTIONS(37),
    [aux_sym_css_named_color_token139] = ACTIONS(37),
    [aux_sym_css_named_color_token140] = ACTIONS(37),
    [aux_sym_css_named_color_token141] = ACTIONS(37),
    [aux_sym_css_named_color_token142] = ACTIONS(37),
    [aux_sym_css_named_color_token143] = ACTIONS(37),
    [aux_sym_css_named_color_token144] = ACTIONS(37),
    [aux_sym_css_named_color_token145] = ACTIONS(40),
    [aux_sym_css_named_color_token146] = ACTIONS(37),
    [aux_sym_css_named_color_token147] = ACTIONS(40),
    [aux_sym_css_named_color_token148] = ACTIONS(37),
    [sym_css_keyword_transparent] = ACTIONS(43),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_rgb] = ACTIONS(48),
    [anon_sym_rgba] = ACTIONS(46),
    [sym_css_hex_color_6_digits] = ACTIONS(48),
    [sym_css_hex_color_8_digits] = ACTIONS(46),
    [sym_css_hex_color_3_digits] = ACTIONS(48),
    [sym_css_hex_color_4_digits] = ACTIONS(48),
    [aux_sym_css_named_color_token1] = ACTIONS(46),
    [aux_sym_css_named_color_token2] = ACTIONS(46),
    [aux_sym_css_named_color_token3] = ACTIONS(48),
    [aux_sym_css_named_color_token4] = ACTIONS(46),
    [aux_sym_css_named_color_token5] = ACTIONS(46),
    [aux_sym_css_named_color_token6] = ACTIONS(46),
    [aux_sym_css_named_color_token7] = ACTIONS(46),
    [aux_sym_css_named_color_token8] = ACTIONS(46),
    [aux_sym_css_named_color_token9] = ACTIONS(46),
    [aux_sym_css_named_color_token10] = ACTIONS(48),
    [aux_sym_css_named_color_token11] = ACTIONS(46),
    [aux_sym_css_named_color_token12] = ACTIONS(46),
    [aux_sym_css_named_color_token13] = ACTIONS(46),
    [aux_sym_css_named_color_token14] = ACTIONS(46),
    [aux_sym_css_named_color_token15] = ACTIONS(46),
    [aux_sym_css_named_color_token16] = ACTIONS(46),
    [aux_sym_css_named_color_token17] = ACTIONS(46),
    [aux_sym_css_named_color_token18] = ACTIONS(46),
    [aux_sym_css_named_color_token19] = ACTIONS(46),
    [aux_sym_css_named_color_token20] = ACTIONS(46),
    [aux_sym_css_named_color_token21] = ACTIONS(46),
    [aux_sym_css_named_color_token22] = ACTIONS(46),
    [aux_sym_css_named_color_token23] = ACTIONS(46),
    [aux_sym_css_named_color_token24] = ACTIONS(46),
    [aux_sym_css_named_color_token25] = ACTIONS(46),
    [aux_sym_css_named_color_token26] = ACTIONS(46),
    [aux_sym_css_named_color_token27] = ACTIONS(46),
    [aux_sym_css_named_color_token28] = ACTIONS(46),
    [aux_sym_css_named_color_token29] = ACTIONS(46),
    [aux_sym_css_named_color_token30] = ACTIONS(46),
    [aux_sym_css_named_color_token31] = ACTIONS(46),
    [aux_sym_css_named_color_token32] = ACTIONS(46),
    [aux_sym_css_named_color_token33] = ACTIONS(46),
    [aux_sym_css_named_color_token34] = ACTIONS(46),
    [aux_sym_css_named_color_token35] = ACTIONS(46),
    [aux_sym_css_named_color_token36] = ACTIONS(46),
    [aux_sym_css_named_color_token37] = ACTIONS(46),
    [aux_sym_css_named_color_token38] = ACTIONS(46),
    [aux_sym_css_named_color_token39] = ACTIONS(46),
    [aux_sym_css_named_color_token40] = ACTIONS(46),
    [aux_sym_css_named_color_token41] = ACTIONS(46),
    [aux_sym_css_named_color_token42] = ACTIONS(46),
    [aux_sym_css_named_color_token43] = ACTIONS(46),
    [aux_sym_css_named_color_token44] = ACTIONS(46),
    [aux_sym_css_named_color_token45] = ACTIONS(46),
    [aux_sym_css_named_color_token46] = ACTIONS(46),
    [aux_sym_css_named_color_token47] = ACTIONS(46),
    [aux_sym_css_named_color_token48] = ACTIONS(46),
    [aux_sym_css_named_color_token49] = ACTIONS(46),
    [aux_sym_css_named_color_token50] = ACTIONS(46),
    [aux_sym_css_named_color_token51] = ACTIONS(46),
    [aux_sym_css_named_color_token52] = ACTIONS(48),
    [aux_sym_css_named_color_token53] = ACTIONS(46),
    [aux_sym_css_named_color_token54] = ACTIONS(46),
    [aux_sym_css_named_color_token55] = ACTIONS(48),
    [aux_sym_css_named_color_token56] = ACTIONS(46),
    [aux_sym_css_named_color_token57] = ACTIONS(46),
    [aux_sym_css_named_color_token58] = ACTIONS(46),
    [aux_sym_css_named_color_token59] = ACTIONS(46),
    [aux_sym_css_named_color_token60] = ACTIONS(46),
    [aux_sym_css_named_color_token61] = ACTIONS(46),
    [aux_sym_css_named_color_token62] = ACTIONS(46),
    [aux_sym_css_named_color_token63] = ACTIONS(46),
    [aux_sym_css_named_color_token64] = ACTIONS(48),
    [aux_sym_css_named_color_token65] = ACTIONS(46),
    [aux_sym_css_named_color_token66] = ACTIONS(46),
    [aux_sym_css_named_color_token67] = ACTIONS(46),
    [aux_sym_css_named_color_token68] = ACTIONS(46),
    [aux_sym_css_named_color_token69] = ACTIONS(46),
    [aux_sym_css_named_color_token70] = ACTIONS(46),
    [aux_sym_css_named_color_token71] = ACTIONS(46),
    [aux_sym_css_named_color_token72] = ACTIONS(46),
    [aux_sym_css_named_color_token73] = ACTIONS(46),
    [aux_sym_css_named_color_token74] = ACTIONS(46),
    [aux_sym_css_named_color_token75] = ACTIONS(46),
    [aux_sym_css_named_color_token76] = ACTIONS(46),
    [aux_sym_css_named_color_token77] = ACTIONS(46),
    [aux_sym_css_named_color_token78] = ACTIONS(46),
    [aux_sym_css_named_color_token79] = ACTIONS(46),
    [aux_sym_css_named_color_token80] = ACTIONS(46),
    [aux_sym_css_named_color_token81] = ACTIONS(46),
    [aux_sym_css_named_color_token82] = ACTIONS(46),
    [aux_sym_css_named_color_token83] = ACTIONS(48),
    [aux_sym_css_named_color_token84] = ACTIONS(46),
    [aux_sym_css_named_color_token85] = ACTIONS(46),
    [aux_sym_css_named_color_token86] = ACTIONS(46),
    [aux_sym_css_named_color_token87] = ACTIONS(46),
    [aux_sym_css_named_color_token88] = ACTIONS(46),
    [aux_sym_css_named_color_token89] = ACTIONS(46),
    [aux_sym_css_named_color_token90] = ACTIONS(46),
    [aux_sym_css_named_color_token91] = ACTIONS(46),
    [aux_sym_css_named_color_token92] = ACTIONS(46),
    [aux_sym_css_named_color_token93] = ACTIONS(46),
    [aux_sym_css_named_color_token94] = ACTIONS(46),
    [aux_sym_css_named_color_token95] = ACTIONS(46),
    [aux_sym_css_named_color_token96] = ACTIONS(46),
    [aux_sym_css_named_color_token97] = ACTIONS(46),
    [aux_sym_css_named_color_token98] = ACTIONS(46),
    [aux_sym_css_named_color_token99] = ACTIONS(46),
    [aux_sym_css_named_color_token100] = ACTIONS(46),
    [aux_sym_css_named_color_token101] = ACTIONS(46),
    [aux_sym_css_named_color_token102] = ACTIONS(46),
    [aux_sym_css_named_color_token103] = ACTIONS(46),
    [aux_sym_css_named_color_token104] = ACTIONS(48),
    [aux_sym_css_named_color_token105] = ACTIONS(46),
    [aux_sym_css_named_color_token106] = ACTIONS(48),
    [aux_sym_css_named_color_token107] = ACTIONS(46),
    [aux_sym_css_named_color_token108] = ACTIONS(46),
    [aux_sym_css_named_color_token109] = ACTIONS(46),
    [aux_sym_css_named_color_token110] = ACTIONS(46),
    [aux_sym_css_named_color_token111] = ACTIONS(46),
    [aux_sym_css_named_color_token112] = ACTIONS(46),
    [aux_sym_css_named_color_token113] = ACTIONS(46),
    [aux_sym_css_named_color_token114] = ACTIONS(46),
    [aux_sym_css_named_color_token115] = ACTIONS(46),
    [aux_sym_css_named_color_token116] = ACTIONS(46),
    [aux_sym_css_named_color_token117] = ACTIONS(46),
    [aux_sym_css_named_color_token118] = ACTIONS(46),
    [aux_sym_css_named_color_token119] = ACTIONS(46),
    [aux_sym_css_named_color_token120] = ACTIONS(46),
    [aux_sym_css_named_color_token121] = ACTIONS(46),
    [aux_sym_css_named_color_token122] = ACTIONS(46),
    [aux_sym_css_named_color_token123] = ACTIONS(46),
    [aux_sym_css_named_color_token124] = ACTIONS(46),
    [aux_sym_css_named_color_token125] = ACTIONS(46),
    [aux_sym_css_named_color_token126] = ACTIONS(46),
    [aux_sym_css_named_color_token127] = ACTIONS(46),
    [aux_sym_css_named_color_token128] = ACTIONS(46),
    [aux_sym_css_named_color_token129] = ACTIONS(46),
    [aux_sym_css_named_color_token130] = ACTIONS(46),
    [aux_sym_css_named_color_token131] = ACTIONS(46),
    [aux_sym_css_named_color_token132] = ACTIONS(46),
    [aux_sym_css_named_color_token133] = ACTIONS(46),
    [aux_sym_css_named_color_token134] = ACTIONS(46),
    [aux_sym_css_named_color_token135] = ACTIONS(46),
    [aux_sym_css_named_color_token136] = ACTIONS(46),
    [aux_sym_css_named_color_token137] = ACTIONS(46),
    [aux_sym_css_named_color_token138] = ACTIONS(46),
    [aux_sym_css_named_color_token139] = ACTIONS(46),
    [aux_sym_css_named_color_token140] = ACTIONS(46),
    [aux_sym_css_named_color_token141] = ACTIONS(46),
    [aux_sym_css_named_color_token142] = ACTIONS(46),
    [aux_sym_css_named_color_token143] = ACTIONS(46),
    [aux_sym_css_named_color_token144] = ACTIONS(46),
    [aux_sym_css_named_color_token145] = ACTIONS(48),
    [aux_sym_css_named_color_token146] = ACTIONS(46),
    [aux_sym_css_named_color_token147] = ACTIONS(48),
    [aux_sym_css_named_color_token148] = ACTIONS(46),
    [sym_css_keyword_transparent] = ACTIONS(46),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_rgb] = ACTIONS(52),
    [anon_sym_rgba] = ACTIONS(50),
    [sym_css_hex_color_6_digits] = ACTIONS(52),
    [sym_css_hex_color_8_digits] = ACTIONS(50),
    [sym_css_hex_color_3_digits] = ACTIONS(52),
    [sym_css_hex_color_4_digits] = ACTIONS(52),
    [aux_sym_css_named_color_token1] = ACTIONS(50),
    [aux_sym_css_named_color_token2] = ACTIONS(50),
    [aux_sym_css_named_color_token3] = ACTIONS(52),
    [aux_sym_css_named_color_token4] = ACTIONS(50),
    [aux_sym_css_named_color_token5] = ACTIONS(50),
    [aux_sym_css_named_color_token6] = ACTIONS(50),
    [aux_sym_css_named_color_token7] = ACTIONS(50),
    [aux_sym_css_named_color_token8] = ACTIONS(50),
    [aux_sym_css_named_color_token9] = ACTIONS(50),
    [aux_sym_css_named_color_token10] = ACTIONS(52),
    [aux_sym_css_named_color_token11] = ACTIONS(50),
    [aux_sym_css_named_color_token12] = ACTIONS(50),
    [aux_sym_css_named_color_token13] = ACTIONS(50),
    [aux_sym_css_named_color_token14] = ACTIONS(50),
    [aux_sym_css_named_color_token15] = ACTIONS(50),
    [aux_sym_css_named_color_token16] = ACTIONS(50),
    [aux_sym_css_named_color_token17] = ACTIONS(50),
    [aux_sym_css_named_color_token18] = ACTIONS(50),
    [aux_sym_css_named_color_token19] = ACTIONS(50),
    [aux_sym_css_named_color_token20] = ACTIONS(50),
    [aux_sym_css_named_color_token21] = ACTIONS(50),
    [aux_sym_css_named_color_token22] = ACTIONS(50),
    [aux_sym_css_named_color_token23] = ACTIONS(50),
    [aux_sym_css_named_color_token24] = ACTIONS(50),
    [aux_sym_css_named_color_token25] = ACTIONS(50),
    [aux_sym_css_named_color_token26] = ACTIONS(50),
    [aux_sym_css_named_color_token27] = ACTIONS(50),
    [aux_sym_css_named_color_token28] = ACTIONS(50),
    [aux_sym_css_named_color_token29] = ACTIONS(50),
    [aux_sym_css_named_color_token30] = ACTIONS(50),
    [aux_sym_css_named_color_token31] = ACTIONS(50),
    [aux_sym_css_named_color_token32] = ACTIONS(50),
    [aux_sym_css_named_color_token33] = ACTIONS(50),
    [aux_sym_css_named_color_token34] = ACTIONS(50),
    [aux_sym_css_named_color_token35] = ACTIONS(50),
    [aux_sym_css_named_color_token36] = ACTIONS(50),
    [aux_sym_css_named_color_token37] = ACTIONS(50),
    [aux_sym_css_named_color_token38] = ACTIONS(50),
    [aux_sym_css_named_color_token39] = ACTIONS(50),
    [aux_sym_css_named_color_token40] = ACTIONS(50),
    [aux_sym_css_named_color_token41] = ACTIONS(50),
    [aux_sym_css_named_color_token42] = ACTIONS(50),
    [aux_sym_css_named_color_token43] = ACTIONS(50),
    [aux_sym_css_named_color_token44] = ACTIONS(50),
    [aux_sym_css_named_color_token45] = ACTIONS(50),
    [aux_sym_css_named_color_token46] = ACTIONS(50),
    [aux_sym_css_named_color_token47] = ACTIONS(50),
    [aux_sym_css_named_color_token48] = ACTIONS(50),
    [aux_sym_css_named_color_token49] = ACTIONS(50),
    [aux_sym_css_named_color_token50] = ACTIONS(50),
    [aux_sym_css_named_color_token51] = ACTIONS(50),
    [aux_sym_css_named_color_token52] = ACTIONS(52),
    [aux_sym_css_named_color_token53] = ACTIONS(50),
    [aux_sym_css_named_color_token54] = ACTIONS(50),
    [aux_sym_css_named_color_token55] = ACTIONS(52),
    [aux_sym_css_named_color_token56] = ACTIONS(50),
    [aux_sym_css_named_color_token57] = ACTIONS(50),
    [aux_sym_css_named_color_token58] = ACTIONS(50),
    [aux_sym_css_named_color_token59] = ACTIONS(50),
    [aux_sym_css_named_color_token60] = ACTIONS(50),
    [aux_sym_css_named_color_token61] = ACTIONS(50),
    [aux_sym_css_named_color_token62] = ACTIONS(50),
    [aux_sym_css_named_color_token63] = ACTIONS(50),
    [aux_sym_css_named_color_token64] = ACTIONS(52),
    [aux_sym_css_named_color_token65] = ACTIONS(50),
    [aux_sym_css_named_color_token66] = ACTIONS(50),
    [aux_sym_css_named_color_token67] = ACTIONS(50),
    [aux_sym_css_named_color_token68] = ACTIONS(50),
    [aux_sym_css_named_color_token69] = ACTIONS(50),
    [aux_sym_css_named_color_token70] = ACTIONS(50),
    [aux_sym_css_named_color_token71] = ACTIONS(50),
    [aux_sym_css_named_color_token72] = ACTIONS(50),
    [aux_sym_css_named_color_token73] = ACTIONS(50),
    [aux_sym_css_named_color_token74] = ACTIONS(50),
    [aux_sym_css_named_color_token75] = ACTIONS(50),
    [aux_sym_css_named_color_token76] = ACTIONS(50),
    [aux_sym_css_named_color_token77] = ACTIONS(50),
    [aux_sym_css_named_color_token78] = ACTIONS(50),
    [aux_sym_css_named_color_token79] = ACTIONS(50),
    [aux_sym_css_named_color_token80] = ACTIONS(50),
    [aux_sym_css_named_color_token81] = ACTIONS(50),
    [aux_sym_css_named_color_token82] = ACTIONS(50),
    [aux_sym_css_named_color_token83] = ACTIONS(52),
    [aux_sym_css_named_color_token84] = ACTIONS(50),
    [aux_sym_css_named_color_token85] = ACTIONS(50),
    [aux_sym_css_named_color_token86] = ACTIONS(50),
    [aux_sym_css_named_color_token87] = ACTIONS(50),
    [aux_sym_css_named_color_token88] = ACTIONS(50),
    [aux_sym_css_named_color_token89] = ACTIONS(50),
    [aux_sym_css_named_color_token90] = ACTIONS(50),
    [aux_sym_css_named_color_token91] = ACTIONS(50),
    [aux_sym_css_named_color_token92] = ACTIONS(50),
    [aux_sym_css_named_color_token93] = ACTIONS(50),
    [aux_sym_css_named_color_token94] = ACTIONS(50),
    [aux_sym_css_named_color_token95] = ACTIONS(50),
    [aux_sym_css_named_color_token96] = ACTIONS(50),
    [aux_sym_css_named_color_token97] = ACTIONS(50),
    [aux_sym_css_named_color_token98] = ACTIONS(50),
    [aux_sym_css_named_color_token99] = ACTIONS(50),
    [aux_sym_css_named_color_token100] = ACTIONS(50),
    [aux_sym_css_named_color_token101] = ACTIONS(50),
    [aux_sym_css_named_color_token102] = ACTIONS(50),
    [aux_sym_css_named_color_token103] = ACTIONS(50),
    [aux_sym_css_named_color_token104] = ACTIONS(52),
    [aux_sym_css_named_color_token105] = ACTIONS(50),
    [aux_sym_css_named_color_token106] = ACTIONS(52),
    [aux_sym_css_named_color_token107] = ACTIONS(50),
    [aux_sym_css_named_color_token108] = ACTIONS(50),
    [aux_sym_css_named_color_token109] = ACTIONS(50),
    [aux_sym_css_named_color_token110] = ACTIONS(50),
    [aux_sym_css_named_color_token111] = ACTIONS(50),
    [aux_sym_css_named_color_token112] = ACTIONS(50),
    [aux_sym_css_named_color_token113] = ACTIONS(50),
    [aux_sym_css_named_color_token114] = ACTIONS(50),
    [aux_sym_css_named_color_token115] = ACTIONS(50),
    [aux_sym_css_named_color_token116] = ACTIONS(50),
    [aux_sym_css_named_color_token117] = ACTIONS(50),
    [aux_sym_css_named_color_token118] = ACTIONS(50),
    [aux_sym_css_named_color_token119] = ACTIONS(50),
    [aux_sym_css_named_color_token120] = ACTIONS(50),
    [aux_sym_css_named_color_token121] = ACTIONS(50),
    [aux_sym_css_named_color_token122] = ACTIONS(50),
    [aux_sym_css_named_color_token123] = ACTIONS(50),
    [aux_sym_css_named_color_token124] = ACTIONS(50),
    [aux_sym_css_named_color_token125] = ACTIONS(50),
    [aux_sym_css_named_color_token126] = ACTIONS(50),
    [aux_sym_css_named_color_token127] = ACTIONS(50),
    [aux_sym_css_named_color_token128] = ACTIONS(50),
    [aux_sym_css_named_color_token129] = ACTIONS(50),
    [aux_sym_css_named_color_token130] = ACTIONS(50),
    [aux_sym_css_named_color_token131] = ACTIONS(50),
    [aux_sym_css_named_color_token132] = ACTIONS(50),
    [aux_sym_css_named_color_token133] = ACTIONS(50),
    [aux_sym_css_named_color_token134] = ACTIONS(50),
    [aux_sym_css_named_color_token135] = ACTIONS(50),
    [aux_sym_css_named_color_token136] = ACTIONS(50),
    [aux_sym_css_named_color_token137] = ACTIONS(50),
    [aux_sym_css_named_color_token138] = ACTIONS(50),
    [aux_sym_css_named_color_token139] = ACTIONS(50),
    [aux_sym_css_named_color_token140] = ACTIONS(50),
    [aux_sym_css_named_color_token141] = ACTIONS(50),
    [aux_sym_css_named_color_token142] = ACTIONS(50),
    [aux_sym_css_named_color_token143] = ACTIONS(50),
    [aux_sym_css_named_color_token144] = ACTIONS(50),
    [aux_sym_css_named_color_token145] = ACTIONS(52),
    [aux_sym_css_named_color_token146] = ACTIONS(50),
    [aux_sym_css_named_color_token147] = ACTIONS(52),
    [aux_sym_css_named_color_token148] = ACTIONS(50),
    [sym_css_keyword_transparent] = ACTIONS(50),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_rgb] = ACTIONS(56),
    [anon_sym_rgba] = ACTIONS(54),
    [sym_css_hex_color_6_digits] = ACTIONS(56),
    [sym_css_hex_color_8_digits] = ACTIONS(54),
    [sym_css_hex_color_3_digits] = ACTIONS(56),
    [sym_css_hex_color_4_digits] = ACTIONS(56),
    [aux_sym_css_named_color_token1] = ACTIONS(54),
    [aux_sym_css_named_color_token2] = ACTIONS(54),
    [aux_sym_css_named_color_token3] = ACTIONS(56),
    [aux_sym_css_named_color_token4] = ACTIONS(54),
    [aux_sym_css_named_color_token5] = ACTIONS(54),
    [aux_sym_css_named_color_token6] = ACTIONS(54),
    [aux_sym_css_named_color_token7] = ACTIONS(54),
    [aux_sym_css_named_color_token8] = ACTIONS(54),
    [aux_sym_css_named_color_token9] = ACTIONS(54),
    [aux_sym_css_named_color_token10] = ACTIONS(56),
    [aux_sym_css_named_color_token11] = ACTIONS(54),
    [aux_sym_css_named_color_token12] = ACTIONS(54),
    [aux_sym_css_named_color_token13] = ACTIONS(54),
    [aux_sym_css_named_color_token14] = ACTIONS(54),
    [aux_sym_css_named_color_token15] = ACTIONS(54),
    [aux_sym_css_named_color_token16] = ACTIONS(54),
    [aux_sym_css_named_color_token17] = ACTIONS(54),
    [aux_sym_css_named_color_token18] = ACTIONS(54),
    [aux_sym_css_named_color_token19] = ACTIONS(54),
    [aux_sym_css_named_color_token20] = ACTIONS(54),
    [aux_sym_css_named_color_token21] = ACTIONS(54),
    [aux_sym_css_named_color_token22] = ACTIONS(54),
    [aux_sym_css_named_color_token23] = ACTIONS(54),
    [aux_sym_css_named_color_token24] = ACTIONS(54),
    [aux_sym_css_named_color_token25] = ACTIONS(54),
    [aux_sym_css_named_color_token26] = ACTIONS(54),
    [aux_sym_css_named_color_token27] = ACTIONS(54),
    [aux_sym_css_named_color_token28] = ACTIONS(54),
    [aux_sym_css_named_color_token29] = ACTIONS(54),
    [aux_sym_css_named_color_token30] = ACTIONS(54),
    [aux_sym_css_named_color_token31] = ACTIONS(54),
    [aux_sym_css_named_color_token32] = ACTIONS(54),
    [aux_sym_css_named_color_token33] = ACTIONS(54),
    [aux_sym_css_named_color_token34] = ACTIONS(54),
    [aux_sym_css_named_color_token35] = ACTIONS(54),
    [aux_sym_css_named_color_token36] = ACTIONS(54),
    [aux_sym_css_named_color_token37] = ACTIONS(54),
    [aux_sym_css_named_color_token38] = ACTIONS(54),
    [aux_sym_css_named_color_token39] = ACTIONS(54),
    [aux_sym_css_named_color_token40] = ACTIONS(54),
    [aux_sym_css_named_color_token41] = ACTIONS(54),
    [aux_sym_css_named_color_token42] = ACTIONS(54),
    [aux_sym_css_named_color_token43] = ACTIONS(54),
    [aux_sym_css_named_color_token44] = ACTIONS(54),
    [aux_sym_css_named_color_token45] = ACTIONS(54),
    [aux_sym_css_named_color_token46] = ACTIONS(54),
    [aux_sym_css_named_color_token47] = ACTIONS(54),
    [aux_sym_css_named_color_token48] = ACTIONS(54),
    [aux_sym_css_named_color_token49] = ACTIONS(54),
    [aux_sym_css_named_color_token50] = ACTIONS(54),
    [aux_sym_css_named_color_token51] = ACTIONS(54),
    [aux_sym_css_named_color_token52] = ACTIONS(56),
    [aux_sym_css_named_color_token53] = ACTIONS(54),
    [aux_sym_css_named_color_token54] = ACTIONS(54),
    [aux_sym_css_named_color_token55] = ACTIONS(56),
    [aux_sym_css_named_color_token56] = ACTIONS(54),
    [aux_sym_css_named_color_token57] = ACTIONS(54),
    [aux_sym_css_named_color_token58] = ACTIONS(54),
    [aux_sym_css_named_color_token59] = ACTIONS(54),
    [aux_sym_css_named_color_token60] = ACTIONS(54),
    [aux_sym_css_named_color_token61] = ACTIONS(54),
    [aux_sym_css_named_color_token62] = ACTIONS(54),
    [aux_sym_css_named_color_token63] = ACTIONS(54),
    [aux_sym_css_named_color_token64] = ACTIONS(56),
    [aux_sym_css_named_color_token65] = ACTIONS(54),
    [aux_sym_css_named_color_token66] = ACTIONS(54),
    [aux_sym_css_named_color_token67] = ACTIONS(54),
    [aux_sym_css_named_color_token68] = ACTIONS(54),
    [aux_sym_css_named_color_token69] = ACTIONS(54),
    [aux_sym_css_named_color_token70] = ACTIONS(54),
    [aux_sym_css_named_color_token71] = ACTIONS(54),
    [aux_sym_css_named_color_token72] = ACTIONS(54),
    [aux_sym_css_named_color_token73] = ACTIONS(54),
    [aux_sym_css_named_color_token74] = ACTIONS(54),
    [aux_sym_css_named_color_token75] = ACTIONS(54),
    [aux_sym_css_named_color_token76] = ACTIONS(54),
    [aux_sym_css_named_color_token77] = ACTIONS(54),
    [aux_sym_css_named_color_token78] = ACTIONS(54),
    [aux_sym_css_named_color_token79] = ACTIONS(54),
    [aux_sym_css_named_color_token80] = ACTIONS(54),
    [aux_sym_css_named_color_token81] = ACTIONS(54),
    [aux_sym_css_named_color_token82] = ACTIONS(54),
    [aux_sym_css_named_color_token83] = ACTIONS(56),
    [aux_sym_css_named_color_token84] = ACTIONS(54),
    [aux_sym_css_named_color_token85] = ACTIONS(54),
    [aux_sym_css_named_color_token86] = ACTIONS(54),
    [aux_sym_css_named_color_token87] = ACTIONS(54),
    [aux_sym_css_named_color_token88] = ACTIONS(54),
    [aux_sym_css_named_color_token89] = ACTIONS(54),
    [aux_sym_css_named_color_token90] = ACTIONS(54),
    [aux_sym_css_named_color_token91] = ACTIONS(54),
    [aux_sym_css_named_color_token92] = ACTIONS(54),
    [aux_sym_css_named_color_token93] = ACTIONS(54),
    [aux_sym_css_named_color_token94] = ACTIONS(54),
    [aux_sym_css_named_color_token95] = ACTIONS(54),
    [aux_sym_css_named_color_token96] = ACTIONS(54),
    [aux_sym_css_named_color_token97] = ACTIONS(54),
    [aux_sym_css_named_color_token98] = ACTIONS(54),
    [aux_sym_css_named_color_token99] = ACTIONS(54),
    [aux_sym_css_named_color_token100] = ACTIONS(54),
    [aux_sym_css_named_color_token101] = ACTIONS(54),
    [aux_sym_css_named_color_token102] = ACTIONS(54),
    [aux_sym_css_named_color_token103] = ACTIONS(54),
    [aux_sym_css_named_color_token104] = ACTIONS(56),
    [aux_sym_css_named_color_token105] = ACTIONS(54),
    [aux_sym_css_named_color_token106] = ACTIONS(56),
    [aux_sym_css_named_color_token107] = ACTIONS(54),
    [aux_sym_css_named_color_token108] = ACTIONS(54),
    [aux_sym_css_named_color_token109] = ACTIONS(54),
    [aux_sym_css_named_color_token110] = ACTIONS(54),
    [aux_sym_css_named_color_token111] = ACTIONS(54),
    [aux_sym_css_named_color_token112] = ACTIONS(54),
    [aux_sym_css_named_color_token113] = ACTIONS(54),
    [aux_sym_css_named_color_token114] = ACTIONS(54),
    [aux_sym_css_named_color_token115] = ACTIONS(54),
    [aux_sym_css_named_color_token116] = ACTIONS(54),
    [aux_sym_css_named_color_token117] = ACTIONS(54),
    [aux_sym_css_named_color_token118] = ACTIONS(54),
    [aux_sym_css_named_color_token119] = ACTIONS(54),
    [aux_sym_css_named_color_token120] = ACTIONS(54),
    [aux_sym_css_named_color_token121] = ACTIONS(54),
    [aux_sym_css_named_color_token122] = ACTIONS(54),
    [aux_sym_css_named_color_token123] = ACTIONS(54),
    [aux_sym_css_named_color_token124] = ACTIONS(54),
    [aux_sym_css_named_color_token125] = ACTIONS(54),
    [aux_sym_css_named_color_token126] = ACTIONS(54),
    [aux_sym_css_named_color_token127] = ACTIONS(54),
    [aux_sym_css_named_color_token128] = ACTIONS(54),
    [aux_sym_css_named_color_token129] = ACTIONS(54),
    [aux_sym_css_named_color_token130] = ACTIONS(54),
    [aux_sym_css_named_color_token131] = ACTIONS(54),
    [aux_sym_css_named_color_token132] = ACTIONS(54),
    [aux_sym_css_named_color_token133] = ACTIONS(54),
    [aux_sym_css_named_color_token134] = ACTIONS(54),
    [aux_sym_css_named_color_token135] = ACTIONS(54),
    [aux_sym_css_named_color_token136] = ACTIONS(54),
    [aux_sym_css_named_color_token137] = ACTIONS(54),
    [aux_sym_css_named_color_token138] = ACTIONS(54),
    [aux_sym_css_named_color_token139] = ACTIONS(54),
    [aux_sym_css_named_color_token140] = ACTIONS(54),
    [aux_sym_css_named_color_token141] = ACTIONS(54),
    [aux_sym_css_named_color_token142] = ACTIONS(54),
    [aux_sym_css_named_color_token143] = ACTIONS(54),
    [aux_sym_css_named_color_token144] = ACTIONS(54),
    [aux_sym_css_named_color_token145] = ACTIONS(56),
    [aux_sym_css_named_color_token146] = ACTIONS(54),
    [aux_sym_css_named_color_token147] = ACTIONS(56),
    [aux_sym_css_named_color_token148] = ACTIONS(54),
    [sym_css_keyword_transparent] = ACTIONS(54),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_rgb] = ACTIONS(60),
    [anon_sym_rgba] = ACTIONS(58),
    [sym_css_hex_color_6_digits] = ACTIONS(60),
    [sym_css_hex_color_8_digits] = ACTIONS(58),
    [sym_css_hex_color_3_digits] = ACTIONS(60),
    [sym_css_hex_color_4_digits] = ACTIONS(60),
    [aux_sym_css_named_color_token1] = ACTIONS(58),
    [aux_sym_css_named_color_token2] = ACTIONS(58),
    [aux_sym_css_named_color_token3] = ACTIONS(60),
    [aux_sym_css_named_color_token4] = ACTIONS(58),
    [aux_sym_css_named_color_token5] = ACTIONS(58),
    [aux_sym_css_named_color_token6] = ACTIONS(58),
    [aux_sym_css_named_color_token7] = ACTIONS(58),
    [aux_sym_css_named_color_token8] = ACTIONS(58),
    [aux_sym_css_named_color_token9] = ACTIONS(58),
    [aux_sym_css_named_color_token10] = ACTIONS(60),
    [aux_sym_css_named_color_token11] = ACTIONS(58),
    [aux_sym_css_named_color_token12] = ACTIONS(58),
    [aux_sym_css_named_color_token13] = ACTIONS(58),
    [aux_sym_css_named_color_token14] = ACTIONS(58),
    [aux_sym_css_named_color_token15] = ACTIONS(58),
    [aux_sym_css_named_color_token16] = ACTIONS(58),
    [aux_sym_css_named_color_token17] = ACTIONS(58),
    [aux_sym_css_named_color_token18] = ACTIONS(58),
    [aux_sym_css_named_color_token19] = ACTIONS(58),
    [aux_sym_css_named_color_token20] = ACTIONS(58),
    [aux_sym_css_named_color_token21] = ACTIONS(58),
    [aux_sym_css_named_color_token22] = ACTIONS(58),
    [aux_sym_css_named_color_token23] = ACTIONS(58),
    [aux_sym_css_named_color_token24] = ACTIONS(58),
    [aux_sym_css_named_color_token25] = ACTIONS(58),
    [aux_sym_css_named_color_token26] = ACTIONS(58),
    [aux_sym_css_named_color_token27] = ACTIONS(58),
    [aux_sym_css_named_color_token28] = ACTIONS(58),
    [aux_sym_css_named_color_token29] = ACTIONS(58),
    [aux_sym_css_named_color_token30] = ACTIONS(58),
    [aux_sym_css_named_color_token31] = ACTIONS(58),
    [aux_sym_css_named_color_token32] = ACTIONS(58),
    [aux_sym_css_named_color_token33] = ACTIONS(58),
    [aux_sym_css_named_color_token34] = ACTIONS(58),
    [aux_sym_css_named_color_token35] = ACTIONS(58),
    [aux_sym_css_named_color_token36] = ACTIONS(58),
    [aux_sym_css_named_color_token37] = ACTIONS(58),
    [aux_sym_css_named_color_token38] = ACTIONS(58),
    [aux_sym_css_named_color_token39] = ACTIONS(58),
    [aux_sym_css_named_color_token40] = ACTIONS(58),
    [aux_sym_css_named_color_token41] = ACTIONS(58),
    [aux_sym_css_named_color_token42] = ACTIONS(58),
    [aux_sym_css_named_color_token43] = ACTIONS(58),
    [aux_sym_css_named_color_token44] = ACTIONS(58),
    [aux_sym_css_named_color_token45] = ACTIONS(58),
    [aux_sym_css_named_color_token46] = ACTIONS(58),
    [aux_sym_css_named_color_token47] = ACTIONS(58),
    [aux_sym_css_named_color_token48] = ACTIONS(58),
    [aux_sym_css_named_color_token49] = ACTIONS(58),
    [aux_sym_css_named_color_token50] = ACTIONS(58),
    [aux_sym_css_named_color_token51] = ACTIONS(58),
    [aux_sym_css_named_color_token52] = ACTIONS(60),
    [aux_sym_css_named_color_token53] = ACTIONS(58),
    [aux_sym_css_named_color_token54] = ACTIONS(58),
    [aux_sym_css_named_color_token55] = ACTIONS(60),
    [aux_sym_css_named_color_token56] = ACTIONS(58),
    [aux_sym_css_named_color_token57] = ACTIONS(58),
    [aux_sym_css_named_color_token58] = ACTIONS(58),
    [aux_sym_css_named_color_token59] = ACTIONS(58),
    [aux_sym_css_named_color_token60] = ACTIONS(58),
    [aux_sym_css_named_color_token61] = ACTIONS(58),
    [aux_sym_css_named_color_token62] = ACTIONS(58),
    [aux_sym_css_named_color_token63] = ACTIONS(58),
    [aux_sym_css_named_color_token64] = ACTIONS(60),
    [aux_sym_css_named_color_token65] = ACTIONS(58),
    [aux_sym_css_named_color_token66] = ACTIONS(58),
    [aux_sym_css_named_color_token67] = ACTIONS(58),
    [aux_sym_css_named_color_token68] = ACTIONS(58),
    [aux_sym_css_named_color_token69] = ACTIONS(58),
    [aux_sym_css_named_color_token70] = ACTIONS(58),
    [aux_sym_css_named_color_token71] = ACTIONS(58),
    [aux_sym_css_named_color_token72] = ACTIONS(58),
    [aux_sym_css_named_color_token73] = ACTIONS(58),
    [aux_sym_css_named_color_token74] = ACTIONS(58),
    [aux_sym_css_named_color_token75] = ACTIONS(58),
    [aux_sym_css_named_color_token76] = ACTIONS(58),
    [aux_sym_css_named_color_token77] = ACTIONS(58),
    [aux_sym_css_named_color_token78] = ACTIONS(58),
    [aux_sym_css_named_color_token79] = ACTIONS(58),
    [aux_sym_css_named_color_token80] = ACTIONS(58),
    [aux_sym_css_named_color_token81] = ACTIONS(58),
    [aux_sym_css_named_color_token82] = ACTIONS(58),
    [aux_sym_css_named_color_token83] = ACTIONS(60),
    [aux_sym_css_named_color_token84] = ACTIONS(58),
    [aux_sym_css_named_color_token85] = ACTIONS(58),
    [aux_sym_css_named_color_token86] = ACTIONS(58),
    [aux_sym_css_named_color_token87] = ACTIONS(58),
    [aux_sym_css_named_color_token88] = ACTIONS(58),
    [aux_sym_css_named_color_token89] = ACTIONS(58),
    [aux_sym_css_named_color_token90] = ACTIONS(58),
    [aux_sym_css_named_color_token91] = ACTIONS(58),
    [aux_sym_css_named_color_token92] = ACTIONS(58),
    [aux_sym_css_named_color_token93] = ACTIONS(58),
    [aux_sym_css_named_color_token94] = ACTIONS(58),
    [aux_sym_css_named_color_token95] = ACTIONS(58),
    [aux_sym_css_named_color_token96] = ACTIONS(58),
    [aux_sym_css_named_color_token97] = ACTIONS(58),
    [aux_sym_css_named_color_token98] = ACTIONS(58),
    [aux_sym_css_named_color_token99] = ACTIONS(58),
    [aux_sym_css_named_color_token100] = ACTIONS(58),
    [aux_sym_css_named_color_token101] = ACTIONS(58),
    [aux_sym_css_named_color_token102] = ACTIONS(58),
    [aux_sym_css_named_color_token103] = ACTIONS(58),
    [aux_sym_css_named_color_token104] = ACTIONS(60),
    [aux_sym_css_named_color_token105] = ACTIONS(58),
    [aux_sym_css_named_color_token106] = ACTIONS(60),
    [aux_sym_css_named_color_token107] = ACTIONS(58),
    [aux_sym_css_named_color_token108] = ACTIONS(58),
    [aux_sym_css_named_color_token109] = ACTIONS(58),
    [aux_sym_css_named_color_token110] = ACTIONS(58),
    [aux_sym_css_named_color_token111] = ACTIONS(58),
    [aux_sym_css_named_color_token112] = ACTIONS(58),
    [aux_sym_css_named_color_token113] = ACTIONS(58),
    [aux_sym_css_named_color_token114] = ACTIONS(58),
    [aux_sym_css_named_color_token115] = ACTIONS(58),
    [aux_sym_css_named_color_token116] = ACTIONS(58),
    [aux_sym_css_named_color_token117] = ACTIONS(58),
    [aux_sym_css_named_color_token118] = ACTIONS(58),
    [aux_sym_css_named_color_token119] = ACTIONS(58),
    [aux_sym_css_named_color_token120] = ACTIONS(58),
    [aux_sym_css_named_color_token121] = ACTIONS(58),
    [aux_sym_css_named_color_token122] = ACTIONS(58),
    [aux_sym_css_named_color_token123] = ACTIONS(58),
    [aux_sym_css_named_color_token124] = ACTIONS(58),
    [aux_sym_css_named_color_token125] = ACTIONS(58),
    [aux_sym_css_named_color_token126] = ACTIONS(58),
    [aux_sym_css_named_color_token127] = ACTIONS(58),
    [aux_sym_css_named_color_token128] = ACTIONS(58),
    [aux_sym_css_named_color_token129] = ACTIONS(58),
    [aux_sym_css_named_color_token130] = ACTIONS(58),
    [aux_sym_css_named_color_token131] = ACTIONS(58),
    [aux_sym_css_named_color_token132] = ACTIONS(58),
    [aux_sym_css_named_color_token133] = ACTIONS(58),
    [aux_sym_css_named_color_token134] = ACTIONS(58),
    [aux_sym_css_named_color_token135] = ACTIONS(58),
    [aux_sym_css_named_color_token136] = ACTIONS(58),
    [aux_sym_css_named_color_token137] = ACTIONS(58),
    [aux_sym_css_named_color_token138] = ACTIONS(58),
    [aux_sym_css_named_color_token139] = ACTIONS(58),
    [aux_sym_css_named_color_token140] = ACTIONS(58),
    [aux_sym_css_named_color_token141] = ACTIONS(58),
    [aux_sym_css_named_color_token142] = ACTIONS(58),
    [aux_sym_css_named_color_token143] = ACTIONS(58),
    [aux_sym_css_named_color_token144] = ACTIONS(58),
    [aux_sym_css_named_color_token145] = ACTIONS(60),
    [aux_sym_css_named_color_token146] = ACTIONS(58),
    [aux_sym_css_named_color_token147] = ACTIONS(60),
    [aux_sym_css_named_color_token148] = ACTIONS(58),
    [sym_css_keyword_transparent] = ACTIONS(58),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [anon_sym_rgb] = ACTIONS(64),
    [anon_sym_rgba] = ACTIONS(62),
    [sym_css_hex_color_6_digits] = ACTIONS(64),
    [sym_css_hex_color_8_digits] = ACTIONS(62),
    [sym_css_hex_color_3_digits] = ACTIONS(64),
    [sym_css_hex_color_4_digits] = ACTIONS(64),
    [aux_sym_css_named_color_token1] = ACTIONS(62),
    [aux_sym_css_named_color_token2] = ACTIONS(62),
    [aux_sym_css_named_color_token3] = ACTIONS(64),
    [aux_sym_css_named_color_token4] = ACTIONS(62),
    [aux_sym_css_named_color_token5] = ACTIONS(62),
    [aux_sym_css_named_color_token6] = ACTIONS(62),
    [aux_sym_css_named_color_token7] = ACTIONS(62),
    [aux_sym_css_named_color_token8] = ACTIONS(62),
    [aux_sym_css_named_color_token9] = ACTIONS(62),
    [aux_sym_css_named_color_token10] = ACTIONS(64),
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
    [aux_sym_css_named_color_token52] = ACTIONS(64),
    [aux_sym_css_named_color_token53] = ACTIONS(62),
    [aux_sym_css_named_color_token54] = ACTIONS(62),
    [aux_sym_css_named_color_token55] = ACTIONS(64),
    [aux_sym_css_named_color_token56] = ACTIONS(62),
    [aux_sym_css_named_color_token57] = ACTIONS(62),
    [aux_sym_css_named_color_token58] = ACTIONS(62),
    [aux_sym_css_named_color_token59] = ACTIONS(62),
    [aux_sym_css_named_color_token60] = ACTIONS(62),
    [aux_sym_css_named_color_token61] = ACTIONS(62),
    [aux_sym_css_named_color_token62] = ACTIONS(62),
    [aux_sym_css_named_color_token63] = ACTIONS(62),
    [aux_sym_css_named_color_token64] = ACTIONS(64),
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
    [aux_sym_css_named_color_token83] = ACTIONS(64),
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
    [aux_sym_css_named_color_token104] = ACTIONS(64),
    [aux_sym_css_named_color_token105] = ACTIONS(62),
    [aux_sym_css_named_color_token106] = ACTIONS(64),
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
    [aux_sym_css_named_color_token145] = ACTIONS(64),
    [aux_sym_css_named_color_token146] = ACTIONS(62),
    [aux_sym_css_named_color_token147] = ACTIONS(64),
    [aux_sym_css_named_color_token148] = ACTIONS(62),
    [sym_css_keyword_transparent] = ACTIONS(62),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [anon_sym_rgb] = ACTIONS(68),
    [anon_sym_rgba] = ACTIONS(66),
    [sym_css_hex_color_6_digits] = ACTIONS(68),
    [sym_css_hex_color_8_digits] = ACTIONS(66),
    [sym_css_hex_color_3_digits] = ACTIONS(68),
    [sym_css_hex_color_4_digits] = ACTIONS(68),
    [aux_sym_css_named_color_token1] = ACTIONS(66),
    [aux_sym_css_named_color_token2] = ACTIONS(66),
    [aux_sym_css_named_color_token3] = ACTIONS(68),
    [aux_sym_css_named_color_token4] = ACTIONS(66),
    [aux_sym_css_named_color_token5] = ACTIONS(66),
    [aux_sym_css_named_color_token6] = ACTIONS(66),
    [aux_sym_css_named_color_token7] = ACTIONS(66),
    [aux_sym_css_named_color_token8] = ACTIONS(66),
    [aux_sym_css_named_color_token9] = ACTIONS(66),
    [aux_sym_css_named_color_token10] = ACTIONS(68),
    [aux_sym_css_named_color_token11] = ACTIONS(66),
    [aux_sym_css_named_color_token12] = ACTIONS(66),
    [aux_sym_css_named_color_token13] = ACTIONS(66),
    [aux_sym_css_named_color_token14] = ACTIONS(66),
    [aux_sym_css_named_color_token15] = ACTIONS(66),
    [aux_sym_css_named_color_token16] = ACTIONS(66),
    [aux_sym_css_named_color_token17] = ACTIONS(66),
    [aux_sym_css_named_color_token18] = ACTIONS(66),
    [aux_sym_css_named_color_token19] = ACTIONS(66),
    [aux_sym_css_named_color_token20] = ACTIONS(66),
    [aux_sym_css_named_color_token21] = ACTIONS(66),
    [aux_sym_css_named_color_token22] = ACTIONS(66),
    [aux_sym_css_named_color_token23] = ACTIONS(66),
    [aux_sym_css_named_color_token24] = ACTIONS(66),
    [aux_sym_css_named_color_token25] = ACTIONS(66),
    [aux_sym_css_named_color_token26] = ACTIONS(66),
    [aux_sym_css_named_color_token27] = ACTIONS(66),
    [aux_sym_css_named_color_token28] = ACTIONS(66),
    [aux_sym_css_named_color_token29] = ACTIONS(66),
    [aux_sym_css_named_color_token30] = ACTIONS(66),
    [aux_sym_css_named_color_token31] = ACTIONS(66),
    [aux_sym_css_named_color_token32] = ACTIONS(66),
    [aux_sym_css_named_color_token33] = ACTIONS(66),
    [aux_sym_css_named_color_token34] = ACTIONS(66),
    [aux_sym_css_named_color_token35] = ACTIONS(66),
    [aux_sym_css_named_color_token36] = ACTIONS(66),
    [aux_sym_css_named_color_token37] = ACTIONS(66),
    [aux_sym_css_named_color_token38] = ACTIONS(66),
    [aux_sym_css_named_color_token39] = ACTIONS(66),
    [aux_sym_css_named_color_token40] = ACTIONS(66),
    [aux_sym_css_named_color_token41] = ACTIONS(66),
    [aux_sym_css_named_color_token42] = ACTIONS(66),
    [aux_sym_css_named_color_token43] = ACTIONS(66),
    [aux_sym_css_named_color_token44] = ACTIONS(66),
    [aux_sym_css_named_color_token45] = ACTIONS(66),
    [aux_sym_css_named_color_token46] = ACTIONS(66),
    [aux_sym_css_named_color_token47] = ACTIONS(66),
    [aux_sym_css_named_color_token48] = ACTIONS(66),
    [aux_sym_css_named_color_token49] = ACTIONS(66),
    [aux_sym_css_named_color_token50] = ACTIONS(66),
    [aux_sym_css_named_color_token51] = ACTIONS(66),
    [aux_sym_css_named_color_token52] = ACTIONS(68),
    [aux_sym_css_named_color_token53] = ACTIONS(66),
    [aux_sym_css_named_color_token54] = ACTIONS(66),
    [aux_sym_css_named_color_token55] = ACTIONS(68),
    [aux_sym_css_named_color_token56] = ACTIONS(66),
    [aux_sym_css_named_color_token57] = ACTIONS(66),
    [aux_sym_css_named_color_token58] = ACTIONS(66),
    [aux_sym_css_named_color_token59] = ACTIONS(66),
    [aux_sym_css_named_color_token60] = ACTIONS(66),
    [aux_sym_css_named_color_token61] = ACTIONS(66),
    [aux_sym_css_named_color_token62] = ACTIONS(66),
    [aux_sym_css_named_color_token63] = ACTIONS(66),
    [aux_sym_css_named_color_token64] = ACTIONS(68),
    [aux_sym_css_named_color_token65] = ACTIONS(66),
    [aux_sym_css_named_color_token66] = ACTIONS(66),
    [aux_sym_css_named_color_token67] = ACTIONS(66),
    [aux_sym_css_named_color_token68] = ACTIONS(66),
    [aux_sym_css_named_color_token69] = ACTIONS(66),
    [aux_sym_css_named_color_token70] = ACTIONS(66),
    [aux_sym_css_named_color_token71] = ACTIONS(66),
    [aux_sym_css_named_color_token72] = ACTIONS(66),
    [aux_sym_css_named_color_token73] = ACTIONS(66),
    [aux_sym_css_named_color_token74] = ACTIONS(66),
    [aux_sym_css_named_color_token75] = ACTIONS(66),
    [aux_sym_css_named_color_token76] = ACTIONS(66),
    [aux_sym_css_named_color_token77] = ACTIONS(66),
    [aux_sym_css_named_color_token78] = ACTIONS(66),
    [aux_sym_css_named_color_token79] = ACTIONS(66),
    [aux_sym_css_named_color_token80] = ACTIONS(66),
    [aux_sym_css_named_color_token81] = ACTIONS(66),
    [aux_sym_css_named_color_token82] = ACTIONS(66),
    [aux_sym_css_named_color_token83] = ACTIONS(68),
    [aux_sym_css_named_color_token84] = ACTIONS(66),
    [aux_sym_css_named_color_token85] = ACTIONS(66),
    [aux_sym_css_named_color_token86] = ACTIONS(66),
    [aux_sym_css_named_color_token87] = ACTIONS(66),
    [aux_sym_css_named_color_token88] = ACTIONS(66),
    [aux_sym_css_named_color_token89] = ACTIONS(66),
    [aux_sym_css_named_color_token90] = ACTIONS(66),
    [aux_sym_css_named_color_token91] = ACTIONS(66),
    [aux_sym_css_named_color_token92] = ACTIONS(66),
    [aux_sym_css_named_color_token93] = ACTIONS(66),
    [aux_sym_css_named_color_token94] = ACTIONS(66),
    [aux_sym_css_named_color_token95] = ACTIONS(66),
    [aux_sym_css_named_color_token96] = ACTIONS(66),
    [aux_sym_css_named_color_token97] = ACTIONS(66),
    [aux_sym_css_named_color_token98] = ACTIONS(66),
    [aux_sym_css_named_color_token99] = ACTIONS(66),
    [aux_sym_css_named_color_token100] = ACTIONS(66),
    [aux_sym_css_named_color_token101] = ACTIONS(66),
    [aux_sym_css_named_color_token102] = ACTIONS(66),
    [aux_sym_css_named_color_token103] = ACTIONS(66),
    [aux_sym_css_named_color_token104] = ACTIONS(68),
    [aux_sym_css_named_color_token105] = ACTIONS(66),
    [aux_sym_css_named_color_token106] = ACTIONS(68),
    [aux_sym_css_named_color_token107] = ACTIONS(66),
    [aux_sym_css_named_color_token108] = ACTIONS(66),
    [aux_sym_css_named_color_token109] = ACTIONS(66),
    [aux_sym_css_named_color_token110] = ACTIONS(66),
    [aux_sym_css_named_color_token111] = ACTIONS(66),
    [aux_sym_css_named_color_token112] = ACTIONS(66),
    [aux_sym_css_named_color_token113] = ACTIONS(66),
    [aux_sym_css_named_color_token114] = ACTIONS(66),
    [aux_sym_css_named_color_token115] = ACTIONS(66),
    [aux_sym_css_named_color_token116] = ACTIONS(66),
    [aux_sym_css_named_color_token117] = ACTIONS(66),
    [aux_sym_css_named_color_token118] = ACTIONS(66),
    [aux_sym_css_named_color_token119] = ACTIONS(66),
    [aux_sym_css_named_color_token120] = ACTIONS(66),
    [aux_sym_css_named_color_token121] = ACTIONS(66),
    [aux_sym_css_named_color_token122] = ACTIONS(66),
    [aux_sym_css_named_color_token123] = ACTIONS(66),
    [aux_sym_css_named_color_token124] = ACTIONS(66),
    [aux_sym_css_named_color_token125] = ACTIONS(66),
    [aux_sym_css_named_color_token126] = ACTIONS(66),
    [aux_sym_css_named_color_token127] = ACTIONS(66),
    [aux_sym_css_named_color_token128] = ACTIONS(66),
    [aux_sym_css_named_color_token129] = ACTIONS(66),
    [aux_sym_css_named_color_token130] = ACTIONS(66),
    [aux_sym_css_named_color_token131] = ACTIONS(66),
    [aux_sym_css_named_color_token132] = ACTIONS(66),
    [aux_sym_css_named_color_token133] = ACTIONS(66),
    [aux_sym_css_named_color_token134] = ACTIONS(66),
    [aux_sym_css_named_color_token135] = ACTIONS(66),
    [aux_sym_css_named_color_token136] = ACTIONS(66),
    [aux_sym_css_named_color_token137] = ACTIONS(66),
    [aux_sym_css_named_color_token138] = ACTIONS(66),
    [aux_sym_css_named_color_token139] = ACTIONS(66),
    [aux_sym_css_named_color_token140] = ACTIONS(66),
    [aux_sym_css_named_color_token141] = ACTIONS(66),
    [aux_sym_css_named_color_token142] = ACTIONS(66),
    [aux_sym_css_named_color_token143] = ACTIONS(66),
    [aux_sym_css_named_color_token144] = ACTIONS(66),
    [aux_sym_css_named_color_token145] = ACTIONS(68),
    [aux_sym_css_named_color_token146] = ACTIONS(66),
    [aux_sym_css_named_color_token147] = ACTIONS(68),
    [aux_sym_css_named_color_token148] = ACTIONS(66),
    [sym_css_keyword_transparent] = ACTIONS(66),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_rgb] = ACTIONS(72),
    [anon_sym_rgba] = ACTIONS(70),
    [sym_css_hex_color_6_digits] = ACTIONS(72),
    [sym_css_hex_color_8_digits] = ACTIONS(70),
    [sym_css_hex_color_3_digits] = ACTIONS(72),
    [sym_css_hex_color_4_digits] = ACTIONS(72),
    [aux_sym_css_named_color_token1] = ACTIONS(70),
    [aux_sym_css_named_color_token2] = ACTIONS(70),
    [aux_sym_css_named_color_token3] = ACTIONS(72),
    [aux_sym_css_named_color_token4] = ACTIONS(70),
    [aux_sym_css_named_color_token5] = ACTIONS(70),
    [aux_sym_css_named_color_token6] = ACTIONS(70),
    [aux_sym_css_named_color_token7] = ACTIONS(70),
    [aux_sym_css_named_color_token8] = ACTIONS(70),
    [aux_sym_css_named_color_token9] = ACTIONS(70),
    [aux_sym_css_named_color_token10] = ACTIONS(72),
    [aux_sym_css_named_color_token11] = ACTIONS(70),
    [aux_sym_css_named_color_token12] = ACTIONS(70),
    [aux_sym_css_named_color_token13] = ACTIONS(70),
    [aux_sym_css_named_color_token14] = ACTIONS(70),
    [aux_sym_css_named_color_token15] = ACTIONS(70),
    [aux_sym_css_named_color_token16] = ACTIONS(70),
    [aux_sym_css_named_color_token17] = ACTIONS(70),
    [aux_sym_css_named_color_token18] = ACTIONS(70),
    [aux_sym_css_named_color_token19] = ACTIONS(70),
    [aux_sym_css_named_color_token20] = ACTIONS(70),
    [aux_sym_css_named_color_token21] = ACTIONS(70),
    [aux_sym_css_named_color_token22] = ACTIONS(70),
    [aux_sym_css_named_color_token23] = ACTIONS(70),
    [aux_sym_css_named_color_token24] = ACTIONS(70),
    [aux_sym_css_named_color_token25] = ACTIONS(70),
    [aux_sym_css_named_color_token26] = ACTIONS(70),
    [aux_sym_css_named_color_token27] = ACTIONS(70),
    [aux_sym_css_named_color_token28] = ACTIONS(70),
    [aux_sym_css_named_color_token29] = ACTIONS(70),
    [aux_sym_css_named_color_token30] = ACTIONS(70),
    [aux_sym_css_named_color_token31] = ACTIONS(70),
    [aux_sym_css_named_color_token32] = ACTIONS(70),
    [aux_sym_css_named_color_token33] = ACTIONS(70),
    [aux_sym_css_named_color_token34] = ACTIONS(70),
    [aux_sym_css_named_color_token35] = ACTIONS(70),
    [aux_sym_css_named_color_token36] = ACTIONS(70),
    [aux_sym_css_named_color_token37] = ACTIONS(70),
    [aux_sym_css_named_color_token38] = ACTIONS(70),
    [aux_sym_css_named_color_token39] = ACTIONS(70),
    [aux_sym_css_named_color_token40] = ACTIONS(70),
    [aux_sym_css_named_color_token41] = ACTIONS(70),
    [aux_sym_css_named_color_token42] = ACTIONS(70),
    [aux_sym_css_named_color_token43] = ACTIONS(70),
    [aux_sym_css_named_color_token44] = ACTIONS(70),
    [aux_sym_css_named_color_token45] = ACTIONS(70),
    [aux_sym_css_named_color_token46] = ACTIONS(70),
    [aux_sym_css_named_color_token47] = ACTIONS(70),
    [aux_sym_css_named_color_token48] = ACTIONS(70),
    [aux_sym_css_named_color_token49] = ACTIONS(70),
    [aux_sym_css_named_color_token50] = ACTIONS(70),
    [aux_sym_css_named_color_token51] = ACTIONS(70),
    [aux_sym_css_named_color_token52] = ACTIONS(72),
    [aux_sym_css_named_color_token53] = ACTIONS(70),
    [aux_sym_css_named_color_token54] = ACTIONS(70),
    [aux_sym_css_named_color_token55] = ACTIONS(72),
    [aux_sym_css_named_color_token56] = ACTIONS(70),
    [aux_sym_css_named_color_token57] = ACTIONS(70),
    [aux_sym_css_named_color_token58] = ACTIONS(70),
    [aux_sym_css_named_color_token59] = ACTIONS(70),
    [aux_sym_css_named_color_token60] = ACTIONS(70),
    [aux_sym_css_named_color_token61] = ACTIONS(70),
    [aux_sym_css_named_color_token62] = ACTIONS(70),
    [aux_sym_css_named_color_token63] = ACTIONS(70),
    [aux_sym_css_named_color_token64] = ACTIONS(72),
    [aux_sym_css_named_color_token65] = ACTIONS(70),
    [aux_sym_css_named_color_token66] = ACTIONS(70),
    [aux_sym_css_named_color_token67] = ACTIONS(70),
    [aux_sym_css_named_color_token68] = ACTIONS(70),
    [aux_sym_css_named_color_token69] = ACTIONS(70),
    [aux_sym_css_named_color_token70] = ACTIONS(70),
    [aux_sym_css_named_color_token71] = ACTIONS(70),
    [aux_sym_css_named_color_token72] = ACTIONS(70),
    [aux_sym_css_named_color_token73] = ACTIONS(70),
    [aux_sym_css_named_color_token74] = ACTIONS(70),
    [aux_sym_css_named_color_token75] = ACTIONS(70),
    [aux_sym_css_named_color_token76] = ACTIONS(70),
    [aux_sym_css_named_color_token77] = ACTIONS(70),
    [aux_sym_css_named_color_token78] = ACTIONS(70),
    [aux_sym_css_named_color_token79] = ACTIONS(70),
    [aux_sym_css_named_color_token80] = ACTIONS(70),
    [aux_sym_css_named_color_token81] = ACTIONS(70),
    [aux_sym_css_named_color_token82] = ACTIONS(70),
    [aux_sym_css_named_color_token83] = ACTIONS(72),
    [aux_sym_css_named_color_token84] = ACTIONS(70),
    [aux_sym_css_named_color_token85] = ACTIONS(70),
    [aux_sym_css_named_color_token86] = ACTIONS(70),
    [aux_sym_css_named_color_token87] = ACTIONS(70),
    [aux_sym_css_named_color_token88] = ACTIONS(70),
    [aux_sym_css_named_color_token89] = ACTIONS(70),
    [aux_sym_css_named_color_token90] = ACTIONS(70),
    [aux_sym_css_named_color_token91] = ACTIONS(70),
    [aux_sym_css_named_color_token92] = ACTIONS(70),
    [aux_sym_css_named_color_token93] = ACTIONS(70),
    [aux_sym_css_named_color_token94] = ACTIONS(70),
    [aux_sym_css_named_color_token95] = ACTIONS(70),
    [aux_sym_css_named_color_token96] = ACTIONS(70),
    [aux_sym_css_named_color_token97] = ACTIONS(70),
    [aux_sym_css_named_color_token98] = ACTIONS(70),
    [aux_sym_css_named_color_token99] = ACTIONS(70),
    [aux_sym_css_named_color_token100] = ACTIONS(70),
    [aux_sym_css_named_color_token101] = ACTIONS(70),
    [aux_sym_css_named_color_token102] = ACTIONS(70),
    [aux_sym_css_named_color_token103] = ACTIONS(70),
    [aux_sym_css_named_color_token104] = ACTIONS(72),
    [aux_sym_css_named_color_token105] = ACTIONS(70),
    [aux_sym_css_named_color_token106] = ACTIONS(72),
    [aux_sym_css_named_color_token107] = ACTIONS(70),
    [aux_sym_css_named_color_token108] = ACTIONS(70),
    [aux_sym_css_named_color_token109] = ACTIONS(70),
    [aux_sym_css_named_color_token110] = ACTIONS(70),
    [aux_sym_css_named_color_token111] = ACTIONS(70),
    [aux_sym_css_named_color_token112] = ACTIONS(70),
    [aux_sym_css_named_color_token113] = ACTIONS(70),
    [aux_sym_css_named_color_token114] = ACTIONS(70),
    [aux_sym_css_named_color_token115] = ACTIONS(70),
    [aux_sym_css_named_color_token116] = ACTIONS(70),
    [aux_sym_css_named_color_token117] = ACTIONS(70),
    [aux_sym_css_named_color_token118] = ACTIONS(70),
    [aux_sym_css_named_color_token119] = ACTIONS(70),
    [aux_sym_css_named_color_token120] = ACTIONS(70),
    [aux_sym_css_named_color_token121] = ACTIONS(70),
    [aux_sym_css_named_color_token122] = ACTIONS(70),
    [aux_sym_css_named_color_token123] = ACTIONS(70),
    [aux_sym_css_named_color_token124] = ACTIONS(70),
    [aux_sym_css_named_color_token125] = ACTIONS(70),
    [aux_sym_css_named_color_token126] = ACTIONS(70),
    [aux_sym_css_named_color_token127] = ACTIONS(70),
    [aux_sym_css_named_color_token128] = ACTIONS(70),
    [aux_sym_css_named_color_token129] = ACTIONS(70),
    [aux_sym_css_named_color_token130] = ACTIONS(70),
    [aux_sym_css_named_color_token131] = ACTIONS(70),
    [aux_sym_css_named_color_token132] = ACTIONS(70),
    [aux_sym_css_named_color_token133] = ACTIONS(70),
    [aux_sym_css_named_color_token134] = ACTIONS(70),
    [aux_sym_css_named_color_token135] = ACTIONS(70),
    [aux_sym_css_named_color_token136] = ACTIONS(70),
    [aux_sym_css_named_color_token137] = ACTIONS(70),
    [aux_sym_css_named_color_token138] = ACTIONS(70),
    [aux_sym_css_named_color_token139] = ACTIONS(70),
    [aux_sym_css_named_color_token140] = ACTIONS(70),
    [aux_sym_css_named_color_token141] = ACTIONS(70),
    [aux_sym_css_named_color_token142] = ACTIONS(70),
    [aux_sym_css_named_color_token143] = ACTIONS(70),
    [aux_sym_css_named_color_token144] = ACTIONS(70),
    [aux_sym_css_named_color_token145] = ACTIONS(72),
    [aux_sym_css_named_color_token146] = ACTIONS(70),
    [aux_sym_css_named_color_token147] = ACTIONS(72),
    [aux_sym_css_named_color_token148] = ACTIONS(70),
    [sym_css_keyword_transparent] = ACTIONS(70),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_rgb] = ACTIONS(76),
    [anon_sym_rgba] = ACTIONS(74),
    [sym_css_hex_color_6_digits] = ACTIONS(76),
    [sym_css_hex_color_8_digits] = ACTIONS(74),
    [sym_css_hex_color_3_digits] = ACTIONS(76),
    [sym_css_hex_color_4_digits] = ACTIONS(76),
    [aux_sym_css_named_color_token1] = ACTIONS(74),
    [aux_sym_css_named_color_token2] = ACTIONS(74),
    [aux_sym_css_named_color_token3] = ACTIONS(76),
    [aux_sym_css_named_color_token4] = ACTIONS(74),
    [aux_sym_css_named_color_token5] = ACTIONS(74),
    [aux_sym_css_named_color_token6] = ACTIONS(74),
    [aux_sym_css_named_color_token7] = ACTIONS(74),
    [aux_sym_css_named_color_token8] = ACTIONS(74),
    [aux_sym_css_named_color_token9] = ACTIONS(74),
    [aux_sym_css_named_color_token10] = ACTIONS(76),
    [aux_sym_css_named_color_token11] = ACTIONS(74),
    [aux_sym_css_named_color_token12] = ACTIONS(74),
    [aux_sym_css_named_color_token13] = ACTIONS(74),
    [aux_sym_css_named_color_token14] = ACTIONS(74),
    [aux_sym_css_named_color_token15] = ACTIONS(74),
    [aux_sym_css_named_color_token16] = ACTIONS(74),
    [aux_sym_css_named_color_token17] = ACTIONS(74),
    [aux_sym_css_named_color_token18] = ACTIONS(74),
    [aux_sym_css_named_color_token19] = ACTIONS(74),
    [aux_sym_css_named_color_token20] = ACTIONS(74),
    [aux_sym_css_named_color_token21] = ACTIONS(74),
    [aux_sym_css_named_color_token22] = ACTIONS(74),
    [aux_sym_css_named_color_token23] = ACTIONS(74),
    [aux_sym_css_named_color_token24] = ACTIONS(74),
    [aux_sym_css_named_color_token25] = ACTIONS(74),
    [aux_sym_css_named_color_token26] = ACTIONS(74),
    [aux_sym_css_named_color_token27] = ACTIONS(74),
    [aux_sym_css_named_color_token28] = ACTIONS(74),
    [aux_sym_css_named_color_token29] = ACTIONS(74),
    [aux_sym_css_named_color_token30] = ACTIONS(74),
    [aux_sym_css_named_color_token31] = ACTIONS(74),
    [aux_sym_css_named_color_token32] = ACTIONS(74),
    [aux_sym_css_named_color_token33] = ACTIONS(74),
    [aux_sym_css_named_color_token34] = ACTIONS(74),
    [aux_sym_css_named_color_token35] = ACTIONS(74),
    [aux_sym_css_named_color_token36] = ACTIONS(74),
    [aux_sym_css_named_color_token37] = ACTIONS(74),
    [aux_sym_css_named_color_token38] = ACTIONS(74),
    [aux_sym_css_named_color_token39] = ACTIONS(74),
    [aux_sym_css_named_color_token40] = ACTIONS(74),
    [aux_sym_css_named_color_token41] = ACTIONS(74),
    [aux_sym_css_named_color_token42] = ACTIONS(74),
    [aux_sym_css_named_color_token43] = ACTIONS(74),
    [aux_sym_css_named_color_token44] = ACTIONS(74),
    [aux_sym_css_named_color_token45] = ACTIONS(74),
    [aux_sym_css_named_color_token46] = ACTIONS(74),
    [aux_sym_css_named_color_token47] = ACTIONS(74),
    [aux_sym_css_named_color_token48] = ACTIONS(74),
    [aux_sym_css_named_color_token49] = ACTIONS(74),
    [aux_sym_css_named_color_token50] = ACTIONS(74),
    [aux_sym_css_named_color_token51] = ACTIONS(74),
    [aux_sym_css_named_color_token52] = ACTIONS(76),
    [aux_sym_css_named_color_token53] = ACTIONS(74),
    [aux_sym_css_named_color_token54] = ACTIONS(74),
    [aux_sym_css_named_color_token55] = ACTIONS(76),
    [aux_sym_css_named_color_token56] = ACTIONS(74),
    [aux_sym_css_named_color_token57] = ACTIONS(74),
    [aux_sym_css_named_color_token58] = ACTIONS(74),
    [aux_sym_css_named_color_token59] = ACTIONS(74),
    [aux_sym_css_named_color_token60] = ACTIONS(74),
    [aux_sym_css_named_color_token61] = ACTIONS(74),
    [aux_sym_css_named_color_token62] = ACTIONS(74),
    [aux_sym_css_named_color_token63] = ACTIONS(74),
    [aux_sym_css_named_color_token64] = ACTIONS(76),
    [aux_sym_css_named_color_token65] = ACTIONS(74),
    [aux_sym_css_named_color_token66] = ACTIONS(74),
    [aux_sym_css_named_color_token67] = ACTIONS(74),
    [aux_sym_css_named_color_token68] = ACTIONS(74),
    [aux_sym_css_named_color_token69] = ACTIONS(74),
    [aux_sym_css_named_color_token70] = ACTIONS(74),
    [aux_sym_css_named_color_token71] = ACTIONS(74),
    [aux_sym_css_named_color_token72] = ACTIONS(74),
    [aux_sym_css_named_color_token73] = ACTIONS(74),
    [aux_sym_css_named_color_token74] = ACTIONS(74),
    [aux_sym_css_named_color_token75] = ACTIONS(74),
    [aux_sym_css_named_color_token76] = ACTIONS(74),
    [aux_sym_css_named_color_token77] = ACTIONS(74),
    [aux_sym_css_named_color_token78] = ACTIONS(74),
    [aux_sym_css_named_color_token79] = ACTIONS(74),
    [aux_sym_css_named_color_token80] = ACTIONS(74),
    [aux_sym_css_named_color_token81] = ACTIONS(74),
    [aux_sym_css_named_color_token82] = ACTIONS(74),
    [aux_sym_css_named_color_token83] = ACTIONS(76),
    [aux_sym_css_named_color_token84] = ACTIONS(74),
    [aux_sym_css_named_color_token85] = ACTIONS(74),
    [aux_sym_css_named_color_token86] = ACTIONS(74),
    [aux_sym_css_named_color_token87] = ACTIONS(74),
    [aux_sym_css_named_color_token88] = ACTIONS(74),
    [aux_sym_css_named_color_token89] = ACTIONS(74),
    [aux_sym_css_named_color_token90] = ACTIONS(74),
    [aux_sym_css_named_color_token91] = ACTIONS(74),
    [aux_sym_css_named_color_token92] = ACTIONS(74),
    [aux_sym_css_named_color_token93] = ACTIONS(74),
    [aux_sym_css_named_color_token94] = ACTIONS(74),
    [aux_sym_css_named_color_token95] = ACTIONS(74),
    [aux_sym_css_named_color_token96] = ACTIONS(74),
    [aux_sym_css_named_color_token97] = ACTIONS(74),
    [aux_sym_css_named_color_token98] = ACTIONS(74),
    [aux_sym_css_named_color_token99] = ACTIONS(74),
    [aux_sym_css_named_color_token100] = ACTIONS(74),
    [aux_sym_css_named_color_token101] = ACTIONS(74),
    [aux_sym_css_named_color_token102] = ACTIONS(74),
    [aux_sym_css_named_color_token103] = ACTIONS(74),
    [aux_sym_css_named_color_token104] = ACTIONS(76),
    [aux_sym_css_named_color_token105] = ACTIONS(74),
    [aux_sym_css_named_color_token106] = ACTIONS(76),
    [aux_sym_css_named_color_token107] = ACTIONS(74),
    [aux_sym_css_named_color_token108] = ACTIONS(74),
    [aux_sym_css_named_color_token109] = ACTIONS(74),
    [aux_sym_css_named_color_token110] = ACTIONS(74),
    [aux_sym_css_named_color_token111] = ACTIONS(74),
    [aux_sym_css_named_color_token112] = ACTIONS(74),
    [aux_sym_css_named_color_token113] = ACTIONS(74),
    [aux_sym_css_named_color_token114] = ACTIONS(74),
    [aux_sym_css_named_color_token115] = ACTIONS(74),
    [aux_sym_css_named_color_token116] = ACTIONS(74),
    [aux_sym_css_named_color_token117] = ACTIONS(74),
    [aux_sym_css_named_color_token118] = ACTIONS(74),
    [aux_sym_css_named_color_token119] = ACTIONS(74),
    [aux_sym_css_named_color_token120] = ACTIONS(74),
    [aux_sym_css_named_color_token121] = ACTIONS(74),
    [aux_sym_css_named_color_token122] = ACTIONS(74),
    [aux_sym_css_named_color_token123] = ACTIONS(74),
    [aux_sym_css_named_color_token124] = ACTIONS(74),
    [aux_sym_css_named_color_token125] = ACTIONS(74),
    [aux_sym_css_named_color_token126] = ACTIONS(74),
    [aux_sym_css_named_color_token127] = ACTIONS(74),
    [aux_sym_css_named_color_token128] = ACTIONS(74),
    [aux_sym_css_named_color_token129] = ACTIONS(74),
    [aux_sym_css_named_color_token130] = ACTIONS(74),
    [aux_sym_css_named_color_token131] = ACTIONS(74),
    [aux_sym_css_named_color_token132] = ACTIONS(74),
    [aux_sym_css_named_color_token133] = ACTIONS(74),
    [aux_sym_css_named_color_token134] = ACTIONS(74),
    [aux_sym_css_named_color_token135] = ACTIONS(74),
    [aux_sym_css_named_color_token136] = ACTIONS(74),
    [aux_sym_css_named_color_token137] = ACTIONS(74),
    [aux_sym_css_named_color_token138] = ACTIONS(74),
    [aux_sym_css_named_color_token139] = ACTIONS(74),
    [aux_sym_css_named_color_token140] = ACTIONS(74),
    [aux_sym_css_named_color_token141] = ACTIONS(74),
    [aux_sym_css_named_color_token142] = ACTIONS(74),
    [aux_sym_css_named_color_token143] = ACTIONS(74),
    [aux_sym_css_named_color_token144] = ACTIONS(74),
    [aux_sym_css_named_color_token145] = ACTIONS(76),
    [aux_sym_css_named_color_token146] = ACTIONS(74),
    [aux_sym_css_named_color_token147] = ACTIONS(76),
    [aux_sym_css_named_color_token148] = ACTIONS(74),
    [sym_css_keyword_transparent] = ACTIONS(74),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_rgb] = ACTIONS(80),
    [anon_sym_rgba] = ACTIONS(78),
    [sym_css_hex_color_6_digits] = ACTIONS(80),
    [sym_css_hex_color_8_digits] = ACTIONS(78),
    [sym_css_hex_color_3_digits] = ACTIONS(80),
    [sym_css_hex_color_4_digits] = ACTIONS(80),
    [aux_sym_css_named_color_token1] = ACTIONS(78),
    [aux_sym_css_named_color_token2] = ACTIONS(78),
    [aux_sym_css_named_color_token3] = ACTIONS(80),
    [aux_sym_css_named_color_token4] = ACTIONS(78),
    [aux_sym_css_named_color_token5] = ACTIONS(78),
    [aux_sym_css_named_color_token6] = ACTIONS(78),
    [aux_sym_css_named_color_token7] = ACTIONS(78),
    [aux_sym_css_named_color_token8] = ACTIONS(78),
    [aux_sym_css_named_color_token9] = ACTIONS(78),
    [aux_sym_css_named_color_token10] = ACTIONS(80),
    [aux_sym_css_named_color_token11] = ACTIONS(78),
    [aux_sym_css_named_color_token12] = ACTIONS(78),
    [aux_sym_css_named_color_token13] = ACTIONS(78),
    [aux_sym_css_named_color_token14] = ACTIONS(78),
    [aux_sym_css_named_color_token15] = ACTIONS(78),
    [aux_sym_css_named_color_token16] = ACTIONS(78),
    [aux_sym_css_named_color_token17] = ACTIONS(78),
    [aux_sym_css_named_color_token18] = ACTIONS(78),
    [aux_sym_css_named_color_token19] = ACTIONS(78),
    [aux_sym_css_named_color_token20] = ACTIONS(78),
    [aux_sym_css_named_color_token21] = ACTIONS(78),
    [aux_sym_css_named_color_token22] = ACTIONS(78),
    [aux_sym_css_named_color_token23] = ACTIONS(78),
    [aux_sym_css_named_color_token24] = ACTIONS(78),
    [aux_sym_css_named_color_token25] = ACTIONS(78),
    [aux_sym_css_named_color_token26] = ACTIONS(78),
    [aux_sym_css_named_color_token27] = ACTIONS(78),
    [aux_sym_css_named_color_token28] = ACTIONS(78),
    [aux_sym_css_named_color_token29] = ACTIONS(78),
    [aux_sym_css_named_color_token30] = ACTIONS(78),
    [aux_sym_css_named_color_token31] = ACTIONS(78),
    [aux_sym_css_named_color_token32] = ACTIONS(78),
    [aux_sym_css_named_color_token33] = ACTIONS(78),
    [aux_sym_css_named_color_token34] = ACTIONS(78),
    [aux_sym_css_named_color_token35] = ACTIONS(78),
    [aux_sym_css_named_color_token36] = ACTIONS(78),
    [aux_sym_css_named_color_token37] = ACTIONS(78),
    [aux_sym_css_named_color_token38] = ACTIONS(78),
    [aux_sym_css_named_color_token39] = ACTIONS(78),
    [aux_sym_css_named_color_token40] = ACTIONS(78),
    [aux_sym_css_named_color_token41] = ACTIONS(78),
    [aux_sym_css_named_color_token42] = ACTIONS(78),
    [aux_sym_css_named_color_token43] = ACTIONS(78),
    [aux_sym_css_named_color_token44] = ACTIONS(78),
    [aux_sym_css_named_color_token45] = ACTIONS(78),
    [aux_sym_css_named_color_token46] = ACTIONS(78),
    [aux_sym_css_named_color_token47] = ACTIONS(78),
    [aux_sym_css_named_color_token48] = ACTIONS(78),
    [aux_sym_css_named_color_token49] = ACTIONS(78),
    [aux_sym_css_named_color_token50] = ACTIONS(78),
    [aux_sym_css_named_color_token51] = ACTIONS(78),
    [aux_sym_css_named_color_token52] = ACTIONS(80),
    [aux_sym_css_named_color_token53] = ACTIONS(78),
    [aux_sym_css_named_color_token54] = ACTIONS(78),
    [aux_sym_css_named_color_token55] = ACTIONS(80),
    [aux_sym_css_named_color_token56] = ACTIONS(78),
    [aux_sym_css_named_color_token57] = ACTIONS(78),
    [aux_sym_css_named_color_token58] = ACTIONS(78),
    [aux_sym_css_named_color_token59] = ACTIONS(78),
    [aux_sym_css_named_color_token60] = ACTIONS(78),
    [aux_sym_css_named_color_token61] = ACTIONS(78),
    [aux_sym_css_named_color_token62] = ACTIONS(78),
    [aux_sym_css_named_color_token63] = ACTIONS(78),
    [aux_sym_css_named_color_token64] = ACTIONS(80),
    [aux_sym_css_named_color_token65] = ACTIONS(78),
    [aux_sym_css_named_color_token66] = ACTIONS(78),
    [aux_sym_css_named_color_token67] = ACTIONS(78),
    [aux_sym_css_named_color_token68] = ACTIONS(78),
    [aux_sym_css_named_color_token69] = ACTIONS(78),
    [aux_sym_css_named_color_token70] = ACTIONS(78),
    [aux_sym_css_named_color_token71] = ACTIONS(78),
    [aux_sym_css_named_color_token72] = ACTIONS(78),
    [aux_sym_css_named_color_token73] = ACTIONS(78),
    [aux_sym_css_named_color_token74] = ACTIONS(78),
    [aux_sym_css_named_color_token75] = ACTIONS(78),
    [aux_sym_css_named_color_token76] = ACTIONS(78),
    [aux_sym_css_named_color_token77] = ACTIONS(78),
    [aux_sym_css_named_color_token78] = ACTIONS(78),
    [aux_sym_css_named_color_token79] = ACTIONS(78),
    [aux_sym_css_named_color_token80] = ACTIONS(78),
    [aux_sym_css_named_color_token81] = ACTIONS(78),
    [aux_sym_css_named_color_token82] = ACTIONS(78),
    [aux_sym_css_named_color_token83] = ACTIONS(80),
    [aux_sym_css_named_color_token84] = ACTIONS(78),
    [aux_sym_css_named_color_token85] = ACTIONS(78),
    [aux_sym_css_named_color_token86] = ACTIONS(78),
    [aux_sym_css_named_color_token87] = ACTIONS(78),
    [aux_sym_css_named_color_token88] = ACTIONS(78),
    [aux_sym_css_named_color_token89] = ACTIONS(78),
    [aux_sym_css_named_color_token90] = ACTIONS(78),
    [aux_sym_css_named_color_token91] = ACTIONS(78),
    [aux_sym_css_named_color_token92] = ACTIONS(78),
    [aux_sym_css_named_color_token93] = ACTIONS(78),
    [aux_sym_css_named_color_token94] = ACTIONS(78),
    [aux_sym_css_named_color_token95] = ACTIONS(78),
    [aux_sym_css_named_color_token96] = ACTIONS(78),
    [aux_sym_css_named_color_token97] = ACTIONS(78),
    [aux_sym_css_named_color_token98] = ACTIONS(78),
    [aux_sym_css_named_color_token99] = ACTIONS(78),
    [aux_sym_css_named_color_token100] = ACTIONS(78),
    [aux_sym_css_named_color_token101] = ACTIONS(78),
    [aux_sym_css_named_color_token102] = ACTIONS(78),
    [aux_sym_css_named_color_token103] = ACTIONS(78),
    [aux_sym_css_named_color_token104] = ACTIONS(80),
    [aux_sym_css_named_color_token105] = ACTIONS(78),
    [aux_sym_css_named_color_token106] = ACTIONS(80),
    [aux_sym_css_named_color_token107] = ACTIONS(78),
    [aux_sym_css_named_color_token108] = ACTIONS(78),
    [aux_sym_css_named_color_token109] = ACTIONS(78),
    [aux_sym_css_named_color_token110] = ACTIONS(78),
    [aux_sym_css_named_color_token111] = ACTIONS(78),
    [aux_sym_css_named_color_token112] = ACTIONS(78),
    [aux_sym_css_named_color_token113] = ACTIONS(78),
    [aux_sym_css_named_color_token114] = ACTIONS(78),
    [aux_sym_css_named_color_token115] = ACTIONS(78),
    [aux_sym_css_named_color_token116] = ACTIONS(78),
    [aux_sym_css_named_color_token117] = ACTIONS(78),
    [aux_sym_css_named_color_token118] = ACTIONS(78),
    [aux_sym_css_named_color_token119] = ACTIONS(78),
    [aux_sym_css_named_color_token120] = ACTIONS(78),
    [aux_sym_css_named_color_token121] = ACTIONS(78),
    [aux_sym_css_named_color_token122] = ACTIONS(78),
    [aux_sym_css_named_color_token123] = ACTIONS(78),
    [aux_sym_css_named_color_token124] = ACTIONS(78),
    [aux_sym_css_named_color_token125] = ACTIONS(78),
    [aux_sym_css_named_color_token126] = ACTIONS(78),
    [aux_sym_css_named_color_token127] = ACTIONS(78),
    [aux_sym_css_named_color_token128] = ACTIONS(78),
    [aux_sym_css_named_color_token129] = ACTIONS(78),
    [aux_sym_css_named_color_token130] = ACTIONS(78),
    [aux_sym_css_named_color_token131] = ACTIONS(78),
    [aux_sym_css_named_color_token132] = ACTIONS(78),
    [aux_sym_css_named_color_token133] = ACTIONS(78),
    [aux_sym_css_named_color_token134] = ACTIONS(78),
    [aux_sym_css_named_color_token135] = ACTIONS(78),
    [aux_sym_css_named_color_token136] = ACTIONS(78),
    [aux_sym_css_named_color_token137] = ACTIONS(78),
    [aux_sym_css_named_color_token138] = ACTIONS(78),
    [aux_sym_css_named_color_token139] = ACTIONS(78),
    [aux_sym_css_named_color_token140] = ACTIONS(78),
    [aux_sym_css_named_color_token141] = ACTIONS(78),
    [aux_sym_css_named_color_token142] = ACTIONS(78),
    [aux_sym_css_named_color_token143] = ACTIONS(78),
    [aux_sym_css_named_color_token144] = ACTIONS(78),
    [aux_sym_css_named_color_token145] = ACTIONS(80),
    [aux_sym_css_named_color_token146] = ACTIONS(78),
    [aux_sym_css_named_color_token147] = ACTIONS(80),
    [aux_sym_css_named_color_token148] = ACTIONS(78),
    [sym_css_keyword_transparent] = ACTIONS(78),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_rgb] = ACTIONS(84),
    [anon_sym_rgba] = ACTIONS(82),
    [sym_css_hex_color_6_digits] = ACTIONS(84),
    [sym_css_hex_color_8_digits] = ACTIONS(82),
    [sym_css_hex_color_3_digits] = ACTIONS(84),
    [sym_css_hex_color_4_digits] = ACTIONS(84),
    [aux_sym_css_named_color_token1] = ACTIONS(82),
    [aux_sym_css_named_color_token2] = ACTIONS(82),
    [aux_sym_css_named_color_token3] = ACTIONS(84),
    [aux_sym_css_named_color_token4] = ACTIONS(82),
    [aux_sym_css_named_color_token5] = ACTIONS(82),
    [aux_sym_css_named_color_token6] = ACTIONS(82),
    [aux_sym_css_named_color_token7] = ACTIONS(82),
    [aux_sym_css_named_color_token8] = ACTIONS(82),
    [aux_sym_css_named_color_token9] = ACTIONS(82),
    [aux_sym_css_named_color_token10] = ACTIONS(84),
    [aux_sym_css_named_color_token11] = ACTIONS(82),
    [aux_sym_css_named_color_token12] = ACTIONS(82),
    [aux_sym_css_named_color_token13] = ACTIONS(82),
    [aux_sym_css_named_color_token14] = ACTIONS(82),
    [aux_sym_css_named_color_token15] = ACTIONS(82),
    [aux_sym_css_named_color_token16] = ACTIONS(82),
    [aux_sym_css_named_color_token17] = ACTIONS(82),
    [aux_sym_css_named_color_token18] = ACTIONS(82),
    [aux_sym_css_named_color_token19] = ACTIONS(82),
    [aux_sym_css_named_color_token20] = ACTIONS(82),
    [aux_sym_css_named_color_token21] = ACTIONS(82),
    [aux_sym_css_named_color_token22] = ACTIONS(82),
    [aux_sym_css_named_color_token23] = ACTIONS(82),
    [aux_sym_css_named_color_token24] = ACTIONS(82),
    [aux_sym_css_named_color_token25] = ACTIONS(82),
    [aux_sym_css_named_color_token26] = ACTIONS(82),
    [aux_sym_css_named_color_token27] = ACTIONS(82),
    [aux_sym_css_named_color_token28] = ACTIONS(82),
    [aux_sym_css_named_color_token29] = ACTIONS(82),
    [aux_sym_css_named_color_token30] = ACTIONS(82),
    [aux_sym_css_named_color_token31] = ACTIONS(82),
    [aux_sym_css_named_color_token32] = ACTIONS(82),
    [aux_sym_css_named_color_token33] = ACTIONS(82),
    [aux_sym_css_named_color_token34] = ACTIONS(82),
    [aux_sym_css_named_color_token35] = ACTIONS(82),
    [aux_sym_css_named_color_token36] = ACTIONS(82),
    [aux_sym_css_named_color_token37] = ACTIONS(82),
    [aux_sym_css_named_color_token38] = ACTIONS(82),
    [aux_sym_css_named_color_token39] = ACTIONS(82),
    [aux_sym_css_named_color_token40] = ACTIONS(82),
    [aux_sym_css_named_color_token41] = ACTIONS(82),
    [aux_sym_css_named_color_token42] = ACTIONS(82),
    [aux_sym_css_named_color_token43] = ACTIONS(82),
    [aux_sym_css_named_color_token44] = ACTIONS(82),
    [aux_sym_css_named_color_token45] = ACTIONS(82),
    [aux_sym_css_named_color_token46] = ACTIONS(82),
    [aux_sym_css_named_color_token47] = ACTIONS(82),
    [aux_sym_css_named_color_token48] = ACTIONS(82),
    [aux_sym_css_named_color_token49] = ACTIONS(82),
    [aux_sym_css_named_color_token50] = ACTIONS(82),
    [aux_sym_css_named_color_token51] = ACTIONS(82),
    [aux_sym_css_named_color_token52] = ACTIONS(84),
    [aux_sym_css_named_color_token53] = ACTIONS(82),
    [aux_sym_css_named_color_token54] = ACTIONS(82),
    [aux_sym_css_named_color_token55] = ACTIONS(84),
    [aux_sym_css_named_color_token56] = ACTIONS(82),
    [aux_sym_css_named_color_token57] = ACTIONS(82),
    [aux_sym_css_named_color_token58] = ACTIONS(82),
    [aux_sym_css_named_color_token59] = ACTIONS(82),
    [aux_sym_css_named_color_token60] = ACTIONS(82),
    [aux_sym_css_named_color_token61] = ACTIONS(82),
    [aux_sym_css_named_color_token62] = ACTIONS(82),
    [aux_sym_css_named_color_token63] = ACTIONS(82),
    [aux_sym_css_named_color_token64] = ACTIONS(84),
    [aux_sym_css_named_color_token65] = ACTIONS(82),
    [aux_sym_css_named_color_token66] = ACTIONS(82),
    [aux_sym_css_named_color_token67] = ACTIONS(82),
    [aux_sym_css_named_color_token68] = ACTIONS(82),
    [aux_sym_css_named_color_token69] = ACTIONS(82),
    [aux_sym_css_named_color_token70] = ACTIONS(82),
    [aux_sym_css_named_color_token71] = ACTIONS(82),
    [aux_sym_css_named_color_token72] = ACTIONS(82),
    [aux_sym_css_named_color_token73] = ACTIONS(82),
    [aux_sym_css_named_color_token74] = ACTIONS(82),
    [aux_sym_css_named_color_token75] = ACTIONS(82),
    [aux_sym_css_named_color_token76] = ACTIONS(82),
    [aux_sym_css_named_color_token77] = ACTIONS(82),
    [aux_sym_css_named_color_token78] = ACTIONS(82),
    [aux_sym_css_named_color_token79] = ACTIONS(82),
    [aux_sym_css_named_color_token80] = ACTIONS(82),
    [aux_sym_css_named_color_token81] = ACTIONS(82),
    [aux_sym_css_named_color_token82] = ACTIONS(82),
    [aux_sym_css_named_color_token83] = ACTIONS(84),
    [aux_sym_css_named_color_token84] = ACTIONS(82),
    [aux_sym_css_named_color_token85] = ACTIONS(82),
    [aux_sym_css_named_color_token86] = ACTIONS(82),
    [aux_sym_css_named_color_token87] = ACTIONS(82),
    [aux_sym_css_named_color_token88] = ACTIONS(82),
    [aux_sym_css_named_color_token89] = ACTIONS(82),
    [aux_sym_css_named_color_token90] = ACTIONS(82),
    [aux_sym_css_named_color_token91] = ACTIONS(82),
    [aux_sym_css_named_color_token92] = ACTIONS(82),
    [aux_sym_css_named_color_token93] = ACTIONS(82),
    [aux_sym_css_named_color_token94] = ACTIONS(82),
    [aux_sym_css_named_color_token95] = ACTIONS(82),
    [aux_sym_css_named_color_token96] = ACTIONS(82),
    [aux_sym_css_named_color_token97] = ACTIONS(82),
    [aux_sym_css_named_color_token98] = ACTIONS(82),
    [aux_sym_css_named_color_token99] = ACTIONS(82),
    [aux_sym_css_named_color_token100] = ACTIONS(82),
    [aux_sym_css_named_color_token101] = ACTIONS(82),
    [aux_sym_css_named_color_token102] = ACTIONS(82),
    [aux_sym_css_named_color_token103] = ACTIONS(82),
    [aux_sym_css_named_color_token104] = ACTIONS(84),
    [aux_sym_css_named_color_token105] = ACTIONS(82),
    [aux_sym_css_named_color_token106] = ACTIONS(84),
    [aux_sym_css_named_color_token107] = ACTIONS(82),
    [aux_sym_css_named_color_token108] = ACTIONS(82),
    [aux_sym_css_named_color_token109] = ACTIONS(82),
    [aux_sym_css_named_color_token110] = ACTIONS(82),
    [aux_sym_css_named_color_token111] = ACTIONS(82),
    [aux_sym_css_named_color_token112] = ACTIONS(82),
    [aux_sym_css_named_color_token113] = ACTIONS(82),
    [aux_sym_css_named_color_token114] = ACTIONS(82),
    [aux_sym_css_named_color_token115] = ACTIONS(82),
    [aux_sym_css_named_color_token116] = ACTIONS(82),
    [aux_sym_css_named_color_token117] = ACTIONS(82),
    [aux_sym_css_named_color_token118] = ACTIONS(82),
    [aux_sym_css_named_color_token119] = ACTIONS(82),
    [aux_sym_css_named_color_token120] = ACTIONS(82),
    [aux_sym_css_named_color_token121] = ACTIONS(82),
    [aux_sym_css_named_color_token122] = ACTIONS(82),
    [aux_sym_css_named_color_token123] = ACTIONS(82),
    [aux_sym_css_named_color_token124] = ACTIONS(82),
    [aux_sym_css_named_color_token125] = ACTIONS(82),
    [aux_sym_css_named_color_token126] = ACTIONS(82),
    [aux_sym_css_named_color_token127] = ACTIONS(82),
    [aux_sym_css_named_color_token128] = ACTIONS(82),
    [aux_sym_css_named_color_token129] = ACTIONS(82),
    [aux_sym_css_named_color_token130] = ACTIONS(82),
    [aux_sym_css_named_color_token131] = ACTIONS(82),
    [aux_sym_css_named_color_token132] = ACTIONS(82),
    [aux_sym_css_named_color_token133] = ACTIONS(82),
    [aux_sym_css_named_color_token134] = ACTIONS(82),
    [aux_sym_css_named_color_token135] = ACTIONS(82),
    [aux_sym_css_named_color_token136] = ACTIONS(82),
    [aux_sym_css_named_color_token137] = ACTIONS(82),
    [aux_sym_css_named_color_token138] = ACTIONS(82),
    [aux_sym_css_named_color_token139] = ACTIONS(82),
    [aux_sym_css_named_color_token140] = ACTIONS(82),
    [aux_sym_css_named_color_token141] = ACTIONS(82),
    [aux_sym_css_named_color_token142] = ACTIONS(82),
    [aux_sym_css_named_color_token143] = ACTIONS(82),
    [aux_sym_css_named_color_token144] = ACTIONS(82),
    [aux_sym_css_named_color_token145] = ACTIONS(84),
    [aux_sym_css_named_color_token146] = ACTIONS(82),
    [aux_sym_css_named_color_token147] = ACTIONS(84),
    [aux_sym_css_named_color_token148] = ACTIONS(82),
    [sym_css_keyword_transparent] = ACTIONS(82),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_rgb] = ACTIONS(88),
    [anon_sym_rgba] = ACTIONS(86),
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
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_rgb] = ACTIONS(92),
    [anon_sym_rgba] = ACTIONS(90),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(94), 1,
      sym__css_number,
    ACTIONS(96), 5,
      sym__css_percentage,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [11] = 5,
    ACTIONS(98), 1,
      sym__css_number,
    ACTIONS(100), 1,
      sym__css_percentage,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      sym_css_keyword_none,
    STATE(26), 2,
      sym_css_number,
      sym_css_percentage,
  [28] = 2,
    ACTIONS(106), 1,
      sym__css_number,
    ACTIONS(108), 5,
      sym__css_percentage,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [39] = 5,
    ACTIONS(98), 1,
      sym__css_number,
    ACTIONS(100), 1,
      sym__css_percentage,
    ACTIONS(104), 1,
      sym_css_keyword_none,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(26), 2,
      sym_css_number,
      sym_css_percentage,
  [56] = 5,
    ACTIONS(98), 1,
      sym__css_number,
    ACTIONS(100), 1,
      sym__css_percentage,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      sym_css_keyword_none,
    STATE(27), 2,
      sym_css_number,
      sym_css_percentage,
  [73] = 5,
    ACTIONS(98), 1,
      sym__css_number,
    ACTIONS(100), 1,
      sym__css_percentage,
    ACTIONS(114), 1,
      sym_css_keyword_none,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(27), 2,
      sym_css_number,
      sym_css_percentage,
  [90] = 5,
    ACTIONS(98), 1,
      sym__css_number,
    ACTIONS(100), 1,
      sym__css_percentage,
    ACTIONS(118), 1,
      sym_css_keyword_none,
    STATE(17), 1,
      sym_css_number,
    STATE(19), 1,
      sym_css_percentage,
  [106] = 4,
    ACTIONS(98), 1,
      sym__css_number,
    ACTIONS(100), 1,
      sym__css_percentage,
    ACTIONS(104), 1,
      sym_css_keyword_none,
    STATE(26), 2,
      sym_css_number,
      sym_css_percentage,
  [120] = 5,
    ACTIONS(98), 1,
      sym__css_number,
    ACTIONS(100), 1,
      sym__css_percentage,
    ACTIONS(120), 1,
      sym_css_keyword_none,
    STATE(20), 1,
      sym_css_number,
    STATE(21), 1,
      sym_css_percentage,
  [136] = 4,
    ACTIONS(98), 1,
      sym__css_number,
    ACTIONS(100), 1,
      sym__css_percentage,
    ACTIONS(114), 1,
      sym_css_keyword_none,
    STATE(27), 2,
      sym_css_number,
      sym_css_percentage,
  [150] = 4,
    ACTIONS(98), 1,
      sym__css_number,
    ACTIONS(100), 1,
      sym__css_percentage,
    ACTIONS(122), 1,
      sym_css_keyword_none,
    STATE(39), 2,
      sym_css_number,
      sym_css_percentage,
  [164] = 4,
    ACTIONS(98), 1,
      sym__css_number,
    ACTIONS(100), 1,
      sym__css_percentage,
    ACTIONS(124), 1,
      sym_css_keyword_none,
    STATE(32), 2,
      sym_css_number,
      sym_css_percentage,
  [178] = 3,
    ACTIONS(126), 1,
      sym__css_number,
    ACTIONS(128), 1,
      sym__css_percentage,
    STATE(52), 1,
      sym_css_alpha_value,
  [188] = 3,
    ACTIONS(126), 1,
      sym__css_number,
    ACTIONS(128), 1,
      sym__css_percentage,
    STATE(50), 1,
      sym_css_alpha_value,
  [198] = 3,
    ACTIONS(126), 1,
      sym__css_number,
    ACTIONS(128), 1,
      sym__css_percentage,
    STATE(51), 1,
      sym_css_alpha_value,
  [208] = 3,
    ACTIONS(126), 1,
      sym__css_number,
    ACTIONS(128), 1,
      sym__css_percentage,
    STATE(53), 1,
      sym_css_alpha_value,
  [218] = 2,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 1,
      anon_sym_SLASH,
  [225] = 2,
    ACTIONS(100), 1,
      sym__css_percentage,
    STATE(41), 1,
      sym_css_percentage,
  [232] = 2,
    ACTIONS(134), 1,
      sym__css_number,
    STATE(41), 1,
      sym_css_number,
  [239] = 2,
    ACTIONS(100), 1,
      sym__css_percentage,
    STATE(40), 1,
      sym_css_percentage,
  [246] = 2,
    ACTIONS(134), 1,
      sym__css_number,
    STATE(40), 1,
      sym_css_number,
  [253] = 2,
    ACTIONS(134), 1,
      sym__css_number,
    STATE(54), 1,
      sym_css_number,
  [260] = 2,
    ACTIONS(100), 1,
      sym__css_percentage,
    STATE(55), 1,
      sym_css_percentage,
  [267] = 2,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(138), 1,
      anon_sym_SLASH,
  [274] = 2,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
  [281] = 2,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
  [288] = 2,
    ACTIONS(100), 1,
      sym__css_percentage,
    STATE(44), 1,
      sym_css_percentage,
  [295] = 2,
    ACTIONS(134), 1,
      sym__css_number,
    STATE(46), 1,
      sym_css_number,
  [302] = 1,
    ACTIONS(148), 1,
      anon_sym_COMMA,
  [306] = 1,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
  [310] = 1,
    ACTIONS(152), 1,
      anon_sym_COMMA,
  [314] = 1,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
  [318] = 1,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
  [322] = 1,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
  [326] = 1,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
  [330] = 1,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
  [334] = 1,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
  [338] = 1,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
  [342] = 1,
    ACTIONS(168), 1,
      anon_sym_COMMA,
  [346] = 1,
    ACTIONS(170), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 11,
  [SMALL_STATE(18)] = 28,
  [SMALL_STATE(19)] = 39,
  [SMALL_STATE(20)] = 56,
  [SMALL_STATE(21)] = 73,
  [SMALL_STATE(22)] = 90,
  [SMALL_STATE(23)] = 106,
  [SMALL_STATE(24)] = 120,
  [SMALL_STATE(25)] = 136,
  [SMALL_STATE(26)] = 150,
  [SMALL_STATE(27)] = 164,
  [SMALL_STATE(28)] = 178,
  [SMALL_STATE(29)] = 188,
  [SMALL_STATE(30)] = 198,
  [SMALL_STATE(31)] = 208,
  [SMALL_STATE(32)] = 218,
  [SMALL_STATE(33)] = 225,
  [SMALL_STATE(34)] = 232,
  [SMALL_STATE(35)] = 239,
  [SMALL_STATE(36)] = 246,
  [SMALL_STATE(37)] = 253,
  [SMALL_STATE(38)] = 260,
  [SMALL_STATE(39)] = 267,
  [SMALL_STATE(40)] = 274,
  [SMALL_STATE(41)] = 281,
  [SMALL_STATE(42)] = 288,
  [SMALL_STATE(43)] = 295,
  [SMALL_STATE(44)] = 302,
  [SMALL_STATE(45)] = 306,
  [SMALL_STATE(46)] = 310,
  [SMALL_STATE(47)] = 314,
  [SMALL_STATE(48)] = 318,
  [SMALL_STATE(49)] = 322,
  [SMALL_STATE(50)] = 326,
  [SMALL_STATE(51)] = 330,
  [SMALL_STATE(52)] = 334,
  [SMALL_STATE(53)] = 338,
  [SMALL_STATE(54)] = 342,
  [SMALL_STATE(55)] = 346,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_modern, 8, 0, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_modern, 8, 0, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_legacy, 10, 0, 4),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_legacy, 10, 0, 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_modern, 6, 0, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_modern, 6, 0, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_modern, 6, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_modern, 6, 0, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_legacy, 8, 0, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_legacy, 8, 0, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_modern, 8, 0, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_modern, 8, 0, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_legacy, 8, 0, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_legacy, 8, 0, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_legacy, 10, 0, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_legacy, 10, 0, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_percentage, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_percentage, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_number, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_number, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [150] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_alpha_value, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
