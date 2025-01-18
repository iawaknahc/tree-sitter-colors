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
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 26
#define SYMBOL_COUNT 186
#define ALIAS_COUNT 0
#define TOKEN_COUNT 166
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
  sym__css_number = 1,
  sym__css_percentage = 2,
  sym__css_angle = 3,
  anon_sym_rgb = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_rgba = 8,
  anon_sym_SLASH = 9,
  anon_sym_hsl = 10,
  anon_sym_hsla = 11,
  sym_css_hex_color_6_digits = 12,
  sym_css_hex_color_8_digits = 13,
  sym_css_hex_color_3_digits = 14,
  sym_css_hex_color_4_digits = 15,
  aux_sym_css_named_color_token1 = 16,
  aux_sym_css_named_color_token2 = 17,
  aux_sym_css_named_color_token3 = 18,
  aux_sym_css_named_color_token4 = 19,
  aux_sym_css_named_color_token5 = 20,
  aux_sym_css_named_color_token6 = 21,
  aux_sym_css_named_color_token7 = 22,
  aux_sym_css_named_color_token8 = 23,
  aux_sym_css_named_color_token9 = 24,
  aux_sym_css_named_color_token10 = 25,
  aux_sym_css_named_color_token11 = 26,
  aux_sym_css_named_color_token12 = 27,
  aux_sym_css_named_color_token13 = 28,
  aux_sym_css_named_color_token14 = 29,
  aux_sym_css_named_color_token15 = 30,
  aux_sym_css_named_color_token16 = 31,
  aux_sym_css_named_color_token17 = 32,
  aux_sym_css_named_color_token18 = 33,
  aux_sym_css_named_color_token19 = 34,
  aux_sym_css_named_color_token20 = 35,
  aux_sym_css_named_color_token21 = 36,
  aux_sym_css_named_color_token22 = 37,
  aux_sym_css_named_color_token23 = 38,
  aux_sym_css_named_color_token24 = 39,
  aux_sym_css_named_color_token25 = 40,
  aux_sym_css_named_color_token26 = 41,
  aux_sym_css_named_color_token27 = 42,
  aux_sym_css_named_color_token28 = 43,
  aux_sym_css_named_color_token29 = 44,
  aux_sym_css_named_color_token30 = 45,
  aux_sym_css_named_color_token31 = 46,
  aux_sym_css_named_color_token32 = 47,
  aux_sym_css_named_color_token33 = 48,
  aux_sym_css_named_color_token34 = 49,
  aux_sym_css_named_color_token35 = 50,
  aux_sym_css_named_color_token36 = 51,
  aux_sym_css_named_color_token37 = 52,
  aux_sym_css_named_color_token38 = 53,
  aux_sym_css_named_color_token39 = 54,
  aux_sym_css_named_color_token40 = 55,
  aux_sym_css_named_color_token41 = 56,
  aux_sym_css_named_color_token42 = 57,
  aux_sym_css_named_color_token43 = 58,
  aux_sym_css_named_color_token44 = 59,
  aux_sym_css_named_color_token45 = 60,
  aux_sym_css_named_color_token46 = 61,
  aux_sym_css_named_color_token47 = 62,
  aux_sym_css_named_color_token48 = 63,
  aux_sym_css_named_color_token49 = 64,
  aux_sym_css_named_color_token50 = 65,
  aux_sym_css_named_color_token51 = 66,
  aux_sym_css_named_color_token52 = 67,
  aux_sym_css_named_color_token53 = 68,
  aux_sym_css_named_color_token54 = 69,
  aux_sym_css_named_color_token55 = 70,
  aux_sym_css_named_color_token56 = 71,
  aux_sym_css_named_color_token57 = 72,
  aux_sym_css_named_color_token58 = 73,
  aux_sym_css_named_color_token59 = 74,
  aux_sym_css_named_color_token60 = 75,
  aux_sym_css_named_color_token61 = 76,
  aux_sym_css_named_color_token62 = 77,
  aux_sym_css_named_color_token63 = 78,
  aux_sym_css_named_color_token64 = 79,
  aux_sym_css_named_color_token65 = 80,
  aux_sym_css_named_color_token66 = 81,
  aux_sym_css_named_color_token67 = 82,
  aux_sym_css_named_color_token68 = 83,
  aux_sym_css_named_color_token69 = 84,
  aux_sym_css_named_color_token70 = 85,
  aux_sym_css_named_color_token71 = 86,
  aux_sym_css_named_color_token72 = 87,
  aux_sym_css_named_color_token73 = 88,
  aux_sym_css_named_color_token74 = 89,
  aux_sym_css_named_color_token75 = 90,
  aux_sym_css_named_color_token76 = 91,
  aux_sym_css_named_color_token77 = 92,
  aux_sym_css_named_color_token78 = 93,
  aux_sym_css_named_color_token79 = 94,
  aux_sym_css_named_color_token80 = 95,
  aux_sym_css_named_color_token81 = 96,
  aux_sym_css_named_color_token82 = 97,
  aux_sym_css_named_color_token83 = 98,
  aux_sym_css_named_color_token84 = 99,
  aux_sym_css_named_color_token85 = 100,
  aux_sym_css_named_color_token86 = 101,
  aux_sym_css_named_color_token87 = 102,
  aux_sym_css_named_color_token88 = 103,
  aux_sym_css_named_color_token89 = 104,
  aux_sym_css_named_color_token90 = 105,
  aux_sym_css_named_color_token91 = 106,
  aux_sym_css_named_color_token92 = 107,
  aux_sym_css_named_color_token93 = 108,
  aux_sym_css_named_color_token94 = 109,
  aux_sym_css_named_color_token95 = 110,
  aux_sym_css_named_color_token96 = 111,
  aux_sym_css_named_color_token97 = 112,
  aux_sym_css_named_color_token98 = 113,
  aux_sym_css_named_color_token99 = 114,
  aux_sym_css_named_color_token100 = 115,
  aux_sym_css_named_color_token101 = 116,
  aux_sym_css_named_color_token102 = 117,
  aux_sym_css_named_color_token103 = 118,
  aux_sym_css_named_color_token104 = 119,
  aux_sym_css_named_color_token105 = 120,
  aux_sym_css_named_color_token106 = 121,
  aux_sym_css_named_color_token107 = 122,
  aux_sym_css_named_color_token108 = 123,
  aux_sym_css_named_color_token109 = 124,
  aux_sym_css_named_color_token110 = 125,
  aux_sym_css_named_color_token111 = 126,
  aux_sym_css_named_color_token112 = 127,
  aux_sym_css_named_color_token113 = 128,
  aux_sym_css_named_color_token114 = 129,
  aux_sym_css_named_color_token115 = 130,
  aux_sym_css_named_color_token116 = 131,
  aux_sym_css_named_color_token117 = 132,
  aux_sym_css_named_color_token118 = 133,
  aux_sym_css_named_color_token119 = 134,
  aux_sym_css_named_color_token120 = 135,
  aux_sym_css_named_color_token121 = 136,
  aux_sym_css_named_color_token122 = 137,
  aux_sym_css_named_color_token123 = 138,
  aux_sym_css_named_color_token124 = 139,
  aux_sym_css_named_color_token125 = 140,
  aux_sym_css_named_color_token126 = 141,
  aux_sym_css_named_color_token127 = 142,
  aux_sym_css_named_color_token128 = 143,
  aux_sym_css_named_color_token129 = 144,
  aux_sym_css_named_color_token130 = 145,
  aux_sym_css_named_color_token131 = 146,
  aux_sym_css_named_color_token132 = 147,
  aux_sym_css_named_color_token133 = 148,
  aux_sym_css_named_color_token134 = 149,
  aux_sym_css_named_color_token135 = 150,
  aux_sym_css_named_color_token136 = 151,
  aux_sym_css_named_color_token137 = 152,
  aux_sym_css_named_color_token138 = 153,
  aux_sym_css_named_color_token139 = 154,
  aux_sym_css_named_color_token140 = 155,
  aux_sym_css_named_color_token141 = 156,
  aux_sym_css_named_color_token142 = 157,
  aux_sym_css_named_color_token143 = 158,
  aux_sym_css_named_color_token144 = 159,
  aux_sym_css_named_color_token145 = 160,
  aux_sym_css_named_color_token146 = 161,
  aux_sym_css_named_color_token147 = 162,
  aux_sym_css_named_color_token148 = 163,
  sym_css_keyword_transparent = 164,
  sym_css_keyword_none = 165,
  sym_source_file = 166,
  sym_css_number = 167,
  sym_css_percentage = 168,
  sym_css_alpha_value = 169,
  sym_css_hue = 170,
  sym_css_function_rgb = 171,
  sym_css_function_rgba = 172,
  sym_css_function_rgb_legacy = 173,
  sym_css_function_rgba_legacy = 174,
  sym_css_function_rgb_modern = 175,
  sym_css_function_rgba_modern = 176,
  sym_css_function_hsl = 177,
  sym_css_function_hsl_legacy = 178,
  sym_css_function_hsl_modern = 179,
  sym_css_function_hsla = 180,
  sym_css_function_hsla_legacy = 181,
  sym_css_function_hsla_modern = 182,
  sym_css_hex_color = 183,
  sym_css_named_color = 184,
  aux_sym_source_file_repeat1 = 185,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__css_number] = "_css_number",
  [sym__css_percentage] = "_css_percentage",
  [sym__css_angle] = "_css_angle",
  [anon_sym_rgb] = "rgb",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_rgba] = "rgba",
  [anon_sym_SLASH] = "/",
  [anon_sym_hsl] = "hsl",
  [anon_sym_hsla] = "hsla",
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
  [sym_css_hex_color] = "css_hex_color",
  [sym_css_named_color] = "css_named_color",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__css_number] = sym__css_number,
  [sym__css_percentage] = sym__css_percentage,
  [sym__css_angle] = sym__css_angle,
  [anon_sym_rgb] = anon_sym_rgb,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_rgba] = anon_sym_rgba,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_hsl] = anon_sym_hsl,
  [anon_sym_hsla] = anon_sym_hsla,
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
  [anon_sym_hsl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hsla] = {
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
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 3},
  [3] = {.index = 6, .length = 4},
  [4] = {.index = 10, .length = 3},
  [5] = {.index = 13, .length = 4},
  [6] = {.index = 17, .length = 3},
  [7] = {.index = 20, .length = 4},
  [8] = {.index = 24, .length = 4},
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
    {field_a, 6},
    {field_b, 4},
    {field_g, 3},
    {field_r, 2},
  [10] =
    {field_b, 6},
    {field_g, 4},
    {field_r, 2},
  [13] =
    {field_a, 6},
    {field_h, 2},
    {field_l, 4},
    {field_s, 3},
  [17] =
    {field_h, 2},
    {field_l, 6},
    {field_s, 4},
  [20] =
    {field_a, 8},
    {field_b, 6},
    {field_g, 4},
    {field_r, 2},
  [24] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(782);
      ADVANCE_MAP(
        '#', 781,
        '(', 789,
        ')', 791,
        ',', 790,
        '.', 775,
        '/', 793,
        'H', 515,
        'R', 145,
        'h', 5,
        'r', 3,
        '+', 1,
        '-', 1,
        'A', 383,
        'a', 383,
        'B', 197,
        'b', 197,
        'C', 7,
        'c', 7,
        'D', 24,
        'd', 24,
        'F', 328,
        'f', 328,
        'G', 29,
        'g', 29,
        'I', 485,
        'i', 485,
        'K', 306,
        'k', 306,
        'L', 8,
        'l', 8,
        'M', 9,
        'm', 9,
        'N', 10,
        'n', 10,
        'O', 378,
        'o', 378,
        'P', 11,
        'p', 11,
        'S', 12,
        's', 12,
        'T', 25,
        't', 25,
        'V', 331,
        'v', 331,
        'W', 304,
        'w', 304,
        'Y', 195,
        'y', 195,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 2:
      if (lookahead == 'b') ADVANCE(788);
      END_STATE();
    case 3:
      if (lookahead == 'g') ADVANCE(2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(794);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 6:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        'A', 132,
        'a', 132,
        'H', 37,
        'h', 37,
        'O', 582,
        'o', 582,
        'R', 329,
        'r', 329,
        'Y', 27,
        'y', 27,
      );
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(730);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(445);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(283);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        'A', 290,
        'a', 290,
        'E', 133,
        'e', 133,
        'I', 130,
        'i', 130,
        'O', 100,
        'o', 100,
      );
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(729);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        'A', 390,
        'a', 390,
        'E', 55,
        'e', 55,
        'I', 486,
        'i', 486,
        'L', 692,
        'l', 692,
        'O', 745,
        'o', 745,
        'U', 588,
        'u', 588,
      );
      END_STATE();
    case 12:
      ADVANCE_MAP(
        'A', 129,
        'a', 129,
        'E', 14,
        'e', 14,
        'I', 204,
        'i', 204,
        'K', 752,
        'k', 752,
        'L', 26,
        'l', 26,
        'N', 521,
        'n', 521,
        'P', 611,
        'p', 611,
        'T', 237,
        't', 237,
      );
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(802);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(901);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(928);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(848);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(885);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(828);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(753);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        'A', 577,
        'a', 577,
        'B', 418,
        'b', 418,
        'O', 617,
        'o', 617,
        'P', 721,
        'p', 721,
        'S', 275,
        's', 275,
        'T', 728,
        't', 728,
        'V', 363,
        'v', 363,
      );
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        'A', 583,
        'a', 583,
        'E', 196,
        'e', 196,
        'I', 443,
        'i', 443,
        'O', 137,
        'o', 137,
      );
      END_STATE();
    case 25:
      ADVANCE_MAP(
        'A', 453,
        'a', 453,
        'E', 30,
        'e', 30,
        'H', 344,
        'h', 344,
        'O', 446,
        'o', 446,
        'R', 41,
        'r', 41,
        'U', 608,
        'u', 608,
      );
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(672);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(454);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        'A', 332,
        'a', 332,
        'H', 519,
        'h', 519,
        'O', 384,
        'o', 384,
        'R', 21,
        'r', 21,
      );
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(767);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(508);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(590);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(755);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(756);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(490);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(757);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(758);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(759);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(428);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(761);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(763);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(764);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(513);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(516);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(468);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(675);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 62:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(680);
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(689);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(747);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(512);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(313);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(622);
      END_STATE();
    case 68:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(685);
      END_STATE();
    case 69:
      ADVANCE_MAP(
        'A', 431,
        'a', 431,
        'E', 72,
        'e', 72,
        'K', 772,
        'k', 772,
        'L', 62,
        'l', 62,
        'T', 274,
        't', 274,
      );
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 71:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 72:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 73:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(904);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(258);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(920);
      END_STATE();
    case 76:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(404);
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(620);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(609);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(542);
      END_STATE();
    case 80:
      ADVANCE_MAP(
        'B', 405,
        'b', 405,
        'C', 770,
        'c', 770,
        'G', 536,
        'g', 536,
        'K', 318,
        'k', 318,
        'M', 61,
        'm', 61,
        'O', 391,
        'o', 391,
        'R', 203,
        'r', 203,
        'S', 47,
        's', 47,
        'T', 726,
        't', 726,
        'V', 361,
        'v', 361,
      );
      END_STATE();
    case 81:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(408);
      END_STATE();
    case 82:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(410);
      END_STATE();
    case 83:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(412);
      END_STATE();
    case 84:
      ADVANCE_MAP(
        'B', 414,
        'b', 414,
        'C', 557,
        'c', 557,
        'G', 564,
        'g', 564,
        'P', 351,
        'p', 351,
        'S', 69,
        's', 69,
        'Y', 264,
        'y', 264,
      );
      END_STATE();
    case 85:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(415);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(610);
      END_STATE();
    case 86:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(416);
      END_STATE();
    case 87:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(417);
      END_STATE();
    case 88:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(419);
      END_STATE();
    case 89:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(420);
      END_STATE();
    case 90:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(421);
      END_STATE();
    case 91:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(422);
      END_STATE();
    case 92:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(423);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(613);
      END_STATE();
    case 93:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(424);
      END_STATE();
    case 94:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(425);
      END_STATE();
    case 95:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(426);
      END_STATE();
    case 96:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(624);
      END_STATE();
    case 97:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(627);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(307);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(368);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(308);
      END_STATE();
    case 102:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(316);
      END_STATE();
    case 103:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(372);
      END_STATE();
    case 104:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 105:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 106:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(531);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 110:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 111:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(604);
      END_STATE();
    case 112:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(315);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(851);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(787);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(907);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(832);
      END_STATE();
    case 117:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(812);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(852);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(859);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(906);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(831);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(889);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(823);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(908);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(911);
      END_STATE();
    case 126:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(808);
      END_STATE();
    case 127:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(895);
      END_STATE();
    case 128:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(389);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(731);
      END_STATE();
    case 129:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(138);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(448);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 130:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(494);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(667);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(668);
      END_STATE();
    case 131:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 133:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 134:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(774);
      END_STATE();
    case 135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 136:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 137:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 138:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(402);
      END_STATE();
    case 139:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 140:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 141:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 142:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 143:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 144:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(773);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(949);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(903);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(944);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(918);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(902);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(939);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(922);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(800);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(931);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(941);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(917);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(945);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(846);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(877);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(919);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(835);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(838);
      END_STATE();
    case 189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(910);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 197:
      ADVANCE_MAP(
        'E', 323,
        'e', 323,
        'I', 643,
        'i', 643,
        'L', 13,
        'l', 13,
        'R', 520,
        'r', 520,
        'U', 587,
        'u', 587,
      );
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(732);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(856);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(826);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(472);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(873);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 229:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(474);
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
          lookahead == 'e') ADVANCE(479);
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
          lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(673);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(506);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(429);
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
          lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 266:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 269:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 270:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 272:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 274:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(640);
      END_STATE();
    case 276:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(913);
      END_STATE();
    case 277:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(276);
      END_STATE();
    case 278:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(548);
      END_STATE();
    case 280:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(407);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      END_STATE();
    case 281:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(787);
      END_STATE();
    case 282:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(561);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(727);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(362);
      END_STATE();
    case 283:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(309);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 284:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(586);
      END_STATE();
    case 285:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 286:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 287:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 288:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 289:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(322);
      END_STATE();
    case 290:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(215);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 291:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(602);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(317);
      END_STATE();
    case 292:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(616);
      END_STATE();
    case 293:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 294:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(623);
      END_STATE();
    case 295:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(628);
      END_STATE();
    case 296:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(629);
      END_STATE();
    case 297:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(296);
      END_STATE();
    case 298:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(631);
      END_STATE();
    case 299:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(632);
      END_STATE();
    case 300:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(633);
      END_STATE();
    case 301:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(634);
      END_STATE();
    case 302:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(635);
      END_STATE();
    case 303:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(302);
      END_STATE();
    case 304:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(240);
      END_STATE();
    case 305:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(864);
      END_STATE();
    case 306:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 307:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(650);
      END_STATE();
    case 308:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(567);
      END_STATE();
    case 309:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(660);
      END_STATE();
    case 310:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(335);
      END_STATE();
    case 311:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(352);
      END_STATE();
    case 312:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(343);
      END_STATE();
    case 313:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(337);
      END_STATE();
    case 314:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(334);
      END_STATE();
    case 315:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(338);
      END_STATE();
    case 316:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(205);
      END_STATE();
    case 317:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(238);
      END_STATE();
    case 318:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(56);
      END_STATE();
    case 319:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 320:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(357);
      END_STATE();
    case 321:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 322:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(688);
      END_STATE();
    case 323:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 324:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 325:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(862);
      END_STATE();
    case 326:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(827);
      END_STATE();
    case 327:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 328:
      ADVANCE_MAP(
        'I', 592,
        'i', 592,
        'L', 527,
        'l', 527,
        'O', 593,
        'o', 593,
        'U', 98,
        'u', 98,
      );
      END_STATE();
    case 329:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 330:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 331:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 332:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(488);
      END_STATE();
    case 333:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 334:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(566);
      END_STATE();
    case 335:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 336:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 337:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 338:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 339:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 340:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(489);
      END_STATE();
    case 341:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(463);
      END_STATE();
    case 342:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 343:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 344:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 345:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(491);
      END_STATE();
    case 346:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(693);
      END_STATE();
    case 347:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(652);
      END_STATE();
    case 348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(504);
      END_STATE();
    case 349:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(733);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(654);
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
          lookahead == 'i') ADVANCE(656);
      END_STATE();
    case 357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 358:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(578);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 362:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 363:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 364:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 365:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(563);
      END_STATE();
    case 366:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 367:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(915);
      END_STATE();
    case 368:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(807);
      END_STATE();
    case 369:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(858);
      END_STATE();
    case 370:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(818);
      END_STATE();
    case 371:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(840);
      END_STATE();
    case 372:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(845);
      END_STATE();
    case 373:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(874);
      END_STATE();
    case 374:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(325);
      END_STATE();
    case 375:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(326);
      END_STATE();
    case 376:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(178);
      END_STATE();
    case 377:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(771);
      END_STATE();
    case 378:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 379:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(938);
      END_STATE();
    case 380:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(816);
      END_STATE();
    case 381:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(927);
      END_STATE();
    case 382:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(868);
      END_STATE();
    case 383:
      ADVANCE_MAP(
        'L', 327,
        'l', 327,
        'N', 669,
        'n', 669,
        'Q', 694,
        'q', 694,
        'Z', 719,
        'z', 719,
      );
      END_STATE();
    case 384:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 385:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(766);
      END_STATE();
    case 386:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(403);
      END_STATE();
    case 387:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(695);
      END_STATE();
    case 389:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 390:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 392:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 394:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 397:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 398:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 399:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 400:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 401:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 402:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 403:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(523);
      END_STATE();
    case 404:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(701);
      END_STATE();
    case 405:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(702);
      END_STATE();
    case 406:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 407:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(525);
      END_STATE();
    case 408:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(703);
      END_STATE();
    case 409:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 410:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(704);
      END_STATE();
    case 411:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(528);
      END_STATE();
    case 412:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 413:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(532);
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
          lookahead == 'l') ADVANCE(718);
      END_STATE();
    case 427:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 428:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 429:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(409);
      END_STATE();
    case 430:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 431:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 432:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(411);
      END_STATE();
    case 433:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(451);
      END_STATE();
    case 434:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(413);
      END_STATE();
    case 435:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 436:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(748);
      END_STATE();
    case 437:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 438:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 439:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 440:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(916);
      END_STATE();
    case 441:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 442:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(897);
      END_STATE();
    case 443:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 444:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(659);
      END_STATE();
    case 445:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(537);
      END_STATE();
    case 446:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 447:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(533);
      END_STATE();
    case 448:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(544);
      END_STATE();
    case 449:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(546);
      END_STATE();
    case 450:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(547);
      END_STATE();
    case 451:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(549);
      END_STATE();
    case 452:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 453:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(937);
      END_STATE();
    case 454:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(820);
      END_STATE();
    case 455:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(787);
      END_STATE();
    case 456:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(811);
      END_STATE();
    case 457:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(854);
      END_STATE();
    case 458:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(884);
      END_STATE();
    case 459:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(886);
      END_STATE();
    case 460:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(924);
      END_STATE();
    case 461:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(819);
      END_STATE();
    case 462:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(822);
      END_STATE();
    case 463:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(899);
      END_STATE();
    case 464:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(926);
      END_STATE();
    case 465:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(921);
      END_STATE();
    case 466:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(825);
      END_STATE();
    case 467:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(865);
      END_STATE();
    case 468:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(869);
      END_STATE();
    case 469:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(883);
      END_STATE();
    case 470:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(909);
      END_STATE();
    case 471:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(833);
      END_STATE();
    case 472:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(872);
      END_STATE();
    case 473:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(925);
      END_STATE();
    case 474:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(847);
      END_STATE();
    case 475:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(875);
      END_STATE();
    case 476:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(923);
      END_STATE();
    case 477:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(935);
      END_STATE();
    case 478:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(947);
      END_STATE();
    case 479:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 480:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(866);
      END_STATE();
    case 481:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(876);
      END_STATE();
    case 482:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(829);
      END_STATE();
    case 483:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(891);
      END_STATE();
    case 484:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 485:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(131);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(529);
      END_STATE();
    case 486:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      END_STATE();
    case 487:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
      END_STATE();
    case 488:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(644);
      END_STATE();
    case 489:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 490:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(645);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(671);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(497);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(595);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 502:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 503:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 505:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 506:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(674);
      END_STATE();
    case 507:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(612);
      END_STATE();
    case 508:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(615);
      END_STATE();
    case 510:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 511:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 514:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 515:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 516:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(860);
      END_STATE();
    case 517:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(940);
      END_STATE();
    case 518:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(849);
      END_STATE();
    case 519:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 520:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 521:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 522:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 523:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 524:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 525:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(751);
      END_STATE();
    case 526:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(737);
      END_STATE();
    case 527:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(614);
      END_STATE();
    case 528:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 529:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 530:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 531:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 532:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(739);
      END_STATE();
    case 533:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 534:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 535:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
      END_STATE();
    case 536:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(406);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 537:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 539:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(596);
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
          lookahead == 'o') ADVANCE(461);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(471);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(742);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(743);
      END_STATE();
    case 553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(744);
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
          lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 557:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(618);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(54);
      END_STATE();
    case 558:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 559:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(356);
      END_STATE();
    case 561:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(427);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 562:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 563:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(749);
      END_STATE();
    case 564:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(430);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 565:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(573);
      END_STATE();
    case 566:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(912);
      END_STATE();
    case 567:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(691);
      END_STATE();
    case 568:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(345);
      END_STATE();
    case 569:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 570:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(394);
      END_STATE();
    case 571:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(399);
      END_STATE();
    case 572:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(400);
      END_STATE();
    case 573:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(350);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(377);
      END_STATE();
    case 574:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(722);
      END_STATE();
    case 575:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(699);
      END_STATE();
    case 576:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(696);
      END_STATE();
    case 577:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(698);
      END_STATE();
    case 578:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(700);
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
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(725);
      END_STATE();
    case 582:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 583:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(366);
      END_STATE();
    case 584:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(929);
      END_STATE();
    case 585:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 586:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 587:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 588:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(570);
      END_STATE();
    case 589:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(754);
      END_STATE();
    case 590:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 591:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 592:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 593:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 594:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(534);
      END_STATE();
    case 596:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 597:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 598:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 602:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 603:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 604:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 605:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 606:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 607:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 608:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(576);
      END_STATE();
    case 609:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 610:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 611:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 612:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 613:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 614:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 615:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 616:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 617:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 618:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 619:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 620:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 621:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 624:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 626:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 628:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 629:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 630:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 631:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 632:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(254);
      END_STATE();
    case 634:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 635:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 636:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 637:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 638:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 639:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 640:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(364);
      END_STATE();
    case 641:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(580);
      END_STATE();
    case 642:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(581);
      END_STATE();
    case 643:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(575);
      END_STATE();
    case 644:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(79);
      END_STATE();
    case 645:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(569);
      END_STATE();
    case 646:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(666);
      END_STATE();
    case 647:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(305);
      END_STATE();
    case 648:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(681);
      END_STATE();
    case 649:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(686);
      END_STATE();
    case 650:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(339);
      END_STATE();
    case 651:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(167);
      END_STATE();
    case 652:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      END_STATE();
    case 653:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(172);
      END_STATE();
    case 654:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      END_STATE();
    case 655:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      END_STATE();
    case 656:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 657:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(765);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(35);
      END_STATE();
    case 658:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
      END_STATE();
    case 659:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(545);
      END_STATE();
    case 660:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 661:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(943);
      END_STATE();
    case 662:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(942);
      END_STATE();
    case 663:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(810);
      END_STATE();
    case 664:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(839);
      END_STATE();
    case 665:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(948);
      END_STATE();
    case 666:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(746);
      END_STATE();
    case 667:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      END_STATE();
    case 668:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(768);
      END_STATE();
    case 669:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      END_STATE();
    case 670:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(517);
      END_STATE();
    case 671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(19);
      END_STATE();
    case 672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 673:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 675:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(165);
      END_STATE();
    case 676:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(175);
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
          lookahead == 't') ADVANCE(182);
      END_STATE();
    case 680:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(259);
      END_STATE();
    case 681:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(395);
      END_STATE();
    case 682:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(603);
      END_STATE();
    case 683:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(606);
      END_STATE();
    case 684:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(607);
      END_STATE();
    case 685:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(257);
      END_STATE();
    case 686:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      END_STATE();
    case 687:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 688:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      END_STATE();
    case 689:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      END_STATE();
    case 690:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(914);
      END_STATE();
    case 691:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(277);
      END_STATE();
    case 692:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(440);
      END_STATE();
    case 693:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(441);
      END_STATE();
    case 694:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 695:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(647);
      END_STATE();
    case 696:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(538);
      END_STATE();
    case 697:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(600);
      END_STATE();
    case 698:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 699:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 700:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 701:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(159);
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
          lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 705:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 706:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 707:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 708:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 709:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 710:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 711:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 712:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 713:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 714:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 715:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(187);
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
          lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 719:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(597);
      END_STATE();
    case 720:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(653);
      END_STATE();
    case 721:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(621);
      END_STATE();
    case 722:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(625);
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
          lookahead == 'u') ADVANCE(560);
      END_STATE();
    case 726:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(639);
      END_STATE();
    case 727:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(641);
      END_STATE();
    case 728:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(642);
      END_STATE();
    case 729:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 730:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(208);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(505);
      END_STATE();
    case 731:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(152);
      END_STATE();
    case 732:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(216);
      END_STATE();
    case 733:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(273);
      END_STATE();
    case 734:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(934);
      END_STATE();
    case 735:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(946);
      END_STATE();
    case 736:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(857);
      END_STATE();
    case 737:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(855);
      END_STATE();
    case 738:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(881);
      END_STATE();
    case 739:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(870);
      END_STATE();
    case 740:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(535);
      END_STATE();
    case 741:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(456);
      END_STATE();
    case 742:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(465);
      END_STATE();
    case 743:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(473);
      END_STATE();
    case 744:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(476);
      END_STATE();
    case 745:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 746:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(311);
      END_STATE();
    case 747:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(314);
      END_STATE();
    case 748:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(319);
      END_STATE();
    case 749:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(320);
      END_STATE();
    case 750:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(321);
      END_STATE();
    case 751:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(272);
      END_STATE();
    case 752:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 753:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(853);
      END_STATE();
    case 754:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(861);
      END_STATE();
    case 755:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(842);
      END_STATE();
    case 756:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(843);
      END_STATE();
    case 757:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(824);
      END_STATE();
    case 758:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(871);
      END_STATE();
    case 759:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(932);
      END_STATE();
    case 760:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(933);
      END_STATE();
    case 761:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(836);
      END_STATE();
    case 762:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(837);
      END_STATE();
    case 763:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(878);
      END_STATE();
    case 764:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(879);
      END_STATE();
    case 765:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 766:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(740);
      END_STATE();
    case 767:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 768:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(594);
      END_STATE();
    case 769:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 770:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 771:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 772:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 773:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 774:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(265);
      END_STATE();
    case 775:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 776:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      END_STATE();
    case 777:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(798);
      END_STATE();
    case 778:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(796);
      END_STATE();
    case 779:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(797);
      END_STATE();
    case 780:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(777);
      END_STATE();
    case 781:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(780);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 786,
        '.', 775,
        'D', 199,
        'd', 199,
        'E', 6,
        'e', 6,
        'G', 591,
        'g', 591,
        'R', 32,
        'r', 32,
        'T', 697,
        't', 697,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 786,
        'D', 199,
        'd', 199,
        'E', 6,
        'e', 6,
        'G', 591,
        'g', 591,
        'R', 32,
        'r', 32,
        'T', 697,
        't', 697,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__css_number);
      ADVANCE_MAP(
        '%', 786,
        'D', 199,
        'd', 199,
        'G', 591,
        'g', 591,
        'R', 32,
        'r', 32,
        'T', 697,
        't', 697,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__css_percentage);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__css_angle);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_rgb);
      if (lookahead == 'a') ADVANCE(792);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_rgba);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_hsl);
      if (lookahead == 'a') ADVANCE(795);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_hsla);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_css_hex_color_6_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(779);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(778);
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
          lookahead == 'm') ADVANCE(51);
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
          lookahead == 'v') ADVANCE(360);
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
          lookahead == 'e') ADVANCE(500);
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
          lookahead == 'y') ADVANCE(262);
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
          lookahead == 'b') ADVANCE(388);
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
          lookahead == 'g') ADVANCE(626);
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
          lookahead == 'd') ADVANCE(601);
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
          lookahead == 's') ADVANCE(447);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_css_named_color_token146);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_css_named_color_token147);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(630);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__css_number] = ACTIONS(1),
    [sym__css_percentage] = ACTIONS(1),
    [sym__css_angle] = ACTIONS(1),
    [anon_sym_rgb] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_rgba] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_hsl] = ACTIONS(1),
    [anon_sym_hsla] = ACTIONS(1),
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
    [sym_source_file] = STATE(86),
    [sym_css_function_rgb] = STATE(2),
    [sym_css_function_rgba] = STATE(2),
    [sym_css_function_rgb_legacy] = STATE(5),
    [sym_css_function_rgba_legacy] = STATE(6),
    [sym_css_function_rgb_modern] = STATE(5),
    [sym_css_function_rgba_modern] = STATE(6),
    [sym_css_function_hsl] = STATE(2),
    [sym_css_function_hsl_legacy] = STATE(7),
    [sym_css_function_hsl_modern] = STATE(7),
    [sym_css_function_hsla] = STATE(2),
    [sym_css_function_hsla_legacy] = STATE(8),
    [sym_css_function_hsla_modern] = STATE(8),
    [sym_css_hex_color] = STATE(2),
    [sym_css_named_color] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_rgb] = ACTIONS(5),
    [anon_sym_rgba] = ACTIONS(7),
    [anon_sym_hsl] = ACTIONS(9),
    [anon_sym_hsla] = ACTIONS(11),
    [sym_css_hex_color_6_digits] = ACTIONS(13),
    [sym_css_hex_color_8_digits] = ACTIONS(15),
    [sym_css_hex_color_3_digits] = ACTIONS(13),
    [sym_css_hex_color_4_digits] = ACTIONS(13),
    [aux_sym_css_named_color_token1] = ACTIONS(17),
    [aux_sym_css_named_color_token2] = ACTIONS(17),
    [aux_sym_css_named_color_token3] = ACTIONS(19),
    [aux_sym_css_named_color_token4] = ACTIONS(17),
    [aux_sym_css_named_color_token5] = ACTIONS(17),
    [aux_sym_css_named_color_token6] = ACTIONS(17),
    [aux_sym_css_named_color_token7] = ACTIONS(17),
    [aux_sym_css_named_color_token8] = ACTIONS(17),
    [aux_sym_css_named_color_token9] = ACTIONS(17),
    [aux_sym_css_named_color_token10] = ACTIONS(19),
    [aux_sym_css_named_color_token11] = ACTIONS(17),
    [aux_sym_css_named_color_token12] = ACTIONS(17),
    [aux_sym_css_named_color_token13] = ACTIONS(17),
    [aux_sym_css_named_color_token14] = ACTIONS(17),
    [aux_sym_css_named_color_token15] = ACTIONS(17),
    [aux_sym_css_named_color_token16] = ACTIONS(17),
    [aux_sym_css_named_color_token17] = ACTIONS(17),
    [aux_sym_css_named_color_token18] = ACTIONS(17),
    [aux_sym_css_named_color_token19] = ACTIONS(17),
    [aux_sym_css_named_color_token20] = ACTIONS(17),
    [aux_sym_css_named_color_token21] = ACTIONS(17),
    [aux_sym_css_named_color_token22] = ACTIONS(17),
    [aux_sym_css_named_color_token23] = ACTIONS(17),
    [aux_sym_css_named_color_token24] = ACTIONS(17),
    [aux_sym_css_named_color_token25] = ACTIONS(17),
    [aux_sym_css_named_color_token26] = ACTIONS(17),
    [aux_sym_css_named_color_token27] = ACTIONS(17),
    [aux_sym_css_named_color_token28] = ACTIONS(17),
    [aux_sym_css_named_color_token29] = ACTIONS(17),
    [aux_sym_css_named_color_token30] = ACTIONS(17),
    [aux_sym_css_named_color_token31] = ACTIONS(17),
    [aux_sym_css_named_color_token32] = ACTIONS(17),
    [aux_sym_css_named_color_token33] = ACTIONS(17),
    [aux_sym_css_named_color_token34] = ACTIONS(17),
    [aux_sym_css_named_color_token35] = ACTIONS(17),
    [aux_sym_css_named_color_token36] = ACTIONS(17),
    [aux_sym_css_named_color_token37] = ACTIONS(17),
    [aux_sym_css_named_color_token38] = ACTIONS(17),
    [aux_sym_css_named_color_token39] = ACTIONS(17),
    [aux_sym_css_named_color_token40] = ACTIONS(17),
    [aux_sym_css_named_color_token41] = ACTIONS(17),
    [aux_sym_css_named_color_token42] = ACTIONS(17),
    [aux_sym_css_named_color_token43] = ACTIONS(17),
    [aux_sym_css_named_color_token44] = ACTIONS(17),
    [aux_sym_css_named_color_token45] = ACTIONS(17),
    [aux_sym_css_named_color_token46] = ACTIONS(17),
    [aux_sym_css_named_color_token47] = ACTIONS(17),
    [aux_sym_css_named_color_token48] = ACTIONS(17),
    [aux_sym_css_named_color_token49] = ACTIONS(17),
    [aux_sym_css_named_color_token50] = ACTIONS(17),
    [aux_sym_css_named_color_token51] = ACTIONS(17),
    [aux_sym_css_named_color_token52] = ACTIONS(19),
    [aux_sym_css_named_color_token53] = ACTIONS(17),
    [aux_sym_css_named_color_token54] = ACTIONS(17),
    [aux_sym_css_named_color_token55] = ACTIONS(19),
    [aux_sym_css_named_color_token56] = ACTIONS(17),
    [aux_sym_css_named_color_token57] = ACTIONS(17),
    [aux_sym_css_named_color_token58] = ACTIONS(17),
    [aux_sym_css_named_color_token59] = ACTIONS(17),
    [aux_sym_css_named_color_token60] = ACTIONS(17),
    [aux_sym_css_named_color_token61] = ACTIONS(17),
    [aux_sym_css_named_color_token62] = ACTIONS(17),
    [aux_sym_css_named_color_token63] = ACTIONS(17),
    [aux_sym_css_named_color_token64] = ACTIONS(19),
    [aux_sym_css_named_color_token65] = ACTIONS(17),
    [aux_sym_css_named_color_token66] = ACTIONS(17),
    [aux_sym_css_named_color_token67] = ACTIONS(17),
    [aux_sym_css_named_color_token68] = ACTIONS(17),
    [aux_sym_css_named_color_token69] = ACTIONS(17),
    [aux_sym_css_named_color_token70] = ACTIONS(17),
    [aux_sym_css_named_color_token71] = ACTIONS(17),
    [aux_sym_css_named_color_token72] = ACTIONS(17),
    [aux_sym_css_named_color_token73] = ACTIONS(17),
    [aux_sym_css_named_color_token74] = ACTIONS(17),
    [aux_sym_css_named_color_token75] = ACTIONS(17),
    [aux_sym_css_named_color_token76] = ACTIONS(17),
    [aux_sym_css_named_color_token77] = ACTIONS(17),
    [aux_sym_css_named_color_token78] = ACTIONS(17),
    [aux_sym_css_named_color_token79] = ACTIONS(17),
    [aux_sym_css_named_color_token80] = ACTIONS(17),
    [aux_sym_css_named_color_token81] = ACTIONS(17),
    [aux_sym_css_named_color_token82] = ACTIONS(17),
    [aux_sym_css_named_color_token83] = ACTIONS(19),
    [aux_sym_css_named_color_token84] = ACTIONS(17),
    [aux_sym_css_named_color_token85] = ACTIONS(17),
    [aux_sym_css_named_color_token86] = ACTIONS(17),
    [aux_sym_css_named_color_token87] = ACTIONS(17),
    [aux_sym_css_named_color_token88] = ACTIONS(17),
    [aux_sym_css_named_color_token89] = ACTIONS(17),
    [aux_sym_css_named_color_token90] = ACTIONS(17),
    [aux_sym_css_named_color_token91] = ACTIONS(17),
    [aux_sym_css_named_color_token92] = ACTIONS(17),
    [aux_sym_css_named_color_token93] = ACTIONS(17),
    [aux_sym_css_named_color_token94] = ACTIONS(17),
    [aux_sym_css_named_color_token95] = ACTIONS(17),
    [aux_sym_css_named_color_token96] = ACTIONS(17),
    [aux_sym_css_named_color_token97] = ACTIONS(17),
    [aux_sym_css_named_color_token98] = ACTIONS(17),
    [aux_sym_css_named_color_token99] = ACTIONS(17),
    [aux_sym_css_named_color_token100] = ACTIONS(17),
    [aux_sym_css_named_color_token101] = ACTIONS(17),
    [aux_sym_css_named_color_token102] = ACTIONS(17),
    [aux_sym_css_named_color_token103] = ACTIONS(17),
    [aux_sym_css_named_color_token104] = ACTIONS(19),
    [aux_sym_css_named_color_token105] = ACTIONS(17),
    [aux_sym_css_named_color_token106] = ACTIONS(19),
    [aux_sym_css_named_color_token107] = ACTIONS(17),
    [aux_sym_css_named_color_token108] = ACTIONS(17),
    [aux_sym_css_named_color_token109] = ACTIONS(17),
    [aux_sym_css_named_color_token110] = ACTIONS(17),
    [aux_sym_css_named_color_token111] = ACTIONS(17),
    [aux_sym_css_named_color_token112] = ACTIONS(17),
    [aux_sym_css_named_color_token113] = ACTIONS(17),
    [aux_sym_css_named_color_token114] = ACTIONS(17),
    [aux_sym_css_named_color_token115] = ACTIONS(17),
    [aux_sym_css_named_color_token116] = ACTIONS(17),
    [aux_sym_css_named_color_token117] = ACTIONS(17),
    [aux_sym_css_named_color_token118] = ACTIONS(17),
    [aux_sym_css_named_color_token119] = ACTIONS(17),
    [aux_sym_css_named_color_token120] = ACTIONS(17),
    [aux_sym_css_named_color_token121] = ACTIONS(17),
    [aux_sym_css_named_color_token122] = ACTIONS(17),
    [aux_sym_css_named_color_token123] = ACTIONS(17),
    [aux_sym_css_named_color_token124] = ACTIONS(17),
    [aux_sym_css_named_color_token125] = ACTIONS(17),
    [aux_sym_css_named_color_token126] = ACTIONS(17),
    [aux_sym_css_named_color_token127] = ACTIONS(17),
    [aux_sym_css_named_color_token128] = ACTIONS(17),
    [aux_sym_css_named_color_token129] = ACTIONS(17),
    [aux_sym_css_named_color_token130] = ACTIONS(17),
    [aux_sym_css_named_color_token131] = ACTIONS(17),
    [aux_sym_css_named_color_token132] = ACTIONS(17),
    [aux_sym_css_named_color_token133] = ACTIONS(17),
    [aux_sym_css_named_color_token134] = ACTIONS(17),
    [aux_sym_css_named_color_token135] = ACTIONS(17),
    [aux_sym_css_named_color_token136] = ACTIONS(17),
    [aux_sym_css_named_color_token137] = ACTIONS(17),
    [aux_sym_css_named_color_token138] = ACTIONS(17),
    [aux_sym_css_named_color_token139] = ACTIONS(17),
    [aux_sym_css_named_color_token140] = ACTIONS(17),
    [aux_sym_css_named_color_token141] = ACTIONS(17),
    [aux_sym_css_named_color_token142] = ACTIONS(17),
    [aux_sym_css_named_color_token143] = ACTIONS(17),
    [aux_sym_css_named_color_token144] = ACTIONS(17),
    [aux_sym_css_named_color_token145] = ACTIONS(19),
    [aux_sym_css_named_color_token146] = ACTIONS(17),
    [aux_sym_css_named_color_token147] = ACTIONS(19),
    [aux_sym_css_named_color_token148] = ACTIONS(17),
    [sym_css_keyword_transparent] = ACTIONS(21),
  },
  [2] = {
    [sym_css_function_rgb] = STATE(3),
    [sym_css_function_rgba] = STATE(3),
    [sym_css_function_rgb_legacy] = STATE(5),
    [sym_css_function_rgba_legacy] = STATE(6),
    [sym_css_function_rgb_modern] = STATE(5),
    [sym_css_function_rgba_modern] = STATE(6),
    [sym_css_function_hsl] = STATE(3),
    [sym_css_function_hsl_legacy] = STATE(7),
    [sym_css_function_hsl_modern] = STATE(7),
    [sym_css_function_hsla] = STATE(3),
    [sym_css_function_hsla_legacy] = STATE(8),
    [sym_css_function_hsla_modern] = STATE(8),
    [sym_css_hex_color] = STATE(3),
    [sym_css_named_color] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_rgb] = ACTIONS(5),
    [anon_sym_rgba] = ACTIONS(7),
    [anon_sym_hsl] = ACTIONS(9),
    [anon_sym_hsla] = ACTIONS(11),
    [sym_css_hex_color_6_digits] = ACTIONS(13),
    [sym_css_hex_color_8_digits] = ACTIONS(15),
    [sym_css_hex_color_3_digits] = ACTIONS(13),
    [sym_css_hex_color_4_digits] = ACTIONS(13),
    [aux_sym_css_named_color_token1] = ACTIONS(17),
    [aux_sym_css_named_color_token2] = ACTIONS(17),
    [aux_sym_css_named_color_token3] = ACTIONS(19),
    [aux_sym_css_named_color_token4] = ACTIONS(17),
    [aux_sym_css_named_color_token5] = ACTIONS(17),
    [aux_sym_css_named_color_token6] = ACTIONS(17),
    [aux_sym_css_named_color_token7] = ACTIONS(17),
    [aux_sym_css_named_color_token8] = ACTIONS(17),
    [aux_sym_css_named_color_token9] = ACTIONS(17),
    [aux_sym_css_named_color_token10] = ACTIONS(19),
    [aux_sym_css_named_color_token11] = ACTIONS(17),
    [aux_sym_css_named_color_token12] = ACTIONS(17),
    [aux_sym_css_named_color_token13] = ACTIONS(17),
    [aux_sym_css_named_color_token14] = ACTIONS(17),
    [aux_sym_css_named_color_token15] = ACTIONS(17),
    [aux_sym_css_named_color_token16] = ACTIONS(17),
    [aux_sym_css_named_color_token17] = ACTIONS(17),
    [aux_sym_css_named_color_token18] = ACTIONS(17),
    [aux_sym_css_named_color_token19] = ACTIONS(17),
    [aux_sym_css_named_color_token20] = ACTIONS(17),
    [aux_sym_css_named_color_token21] = ACTIONS(17),
    [aux_sym_css_named_color_token22] = ACTIONS(17),
    [aux_sym_css_named_color_token23] = ACTIONS(17),
    [aux_sym_css_named_color_token24] = ACTIONS(17),
    [aux_sym_css_named_color_token25] = ACTIONS(17),
    [aux_sym_css_named_color_token26] = ACTIONS(17),
    [aux_sym_css_named_color_token27] = ACTIONS(17),
    [aux_sym_css_named_color_token28] = ACTIONS(17),
    [aux_sym_css_named_color_token29] = ACTIONS(17),
    [aux_sym_css_named_color_token30] = ACTIONS(17),
    [aux_sym_css_named_color_token31] = ACTIONS(17),
    [aux_sym_css_named_color_token32] = ACTIONS(17),
    [aux_sym_css_named_color_token33] = ACTIONS(17),
    [aux_sym_css_named_color_token34] = ACTIONS(17),
    [aux_sym_css_named_color_token35] = ACTIONS(17),
    [aux_sym_css_named_color_token36] = ACTIONS(17),
    [aux_sym_css_named_color_token37] = ACTIONS(17),
    [aux_sym_css_named_color_token38] = ACTIONS(17),
    [aux_sym_css_named_color_token39] = ACTIONS(17),
    [aux_sym_css_named_color_token40] = ACTIONS(17),
    [aux_sym_css_named_color_token41] = ACTIONS(17),
    [aux_sym_css_named_color_token42] = ACTIONS(17),
    [aux_sym_css_named_color_token43] = ACTIONS(17),
    [aux_sym_css_named_color_token44] = ACTIONS(17),
    [aux_sym_css_named_color_token45] = ACTIONS(17),
    [aux_sym_css_named_color_token46] = ACTIONS(17),
    [aux_sym_css_named_color_token47] = ACTIONS(17),
    [aux_sym_css_named_color_token48] = ACTIONS(17),
    [aux_sym_css_named_color_token49] = ACTIONS(17),
    [aux_sym_css_named_color_token50] = ACTIONS(17),
    [aux_sym_css_named_color_token51] = ACTIONS(17),
    [aux_sym_css_named_color_token52] = ACTIONS(19),
    [aux_sym_css_named_color_token53] = ACTIONS(17),
    [aux_sym_css_named_color_token54] = ACTIONS(17),
    [aux_sym_css_named_color_token55] = ACTIONS(19),
    [aux_sym_css_named_color_token56] = ACTIONS(17),
    [aux_sym_css_named_color_token57] = ACTIONS(17),
    [aux_sym_css_named_color_token58] = ACTIONS(17),
    [aux_sym_css_named_color_token59] = ACTIONS(17),
    [aux_sym_css_named_color_token60] = ACTIONS(17),
    [aux_sym_css_named_color_token61] = ACTIONS(17),
    [aux_sym_css_named_color_token62] = ACTIONS(17),
    [aux_sym_css_named_color_token63] = ACTIONS(17),
    [aux_sym_css_named_color_token64] = ACTIONS(19),
    [aux_sym_css_named_color_token65] = ACTIONS(17),
    [aux_sym_css_named_color_token66] = ACTIONS(17),
    [aux_sym_css_named_color_token67] = ACTIONS(17),
    [aux_sym_css_named_color_token68] = ACTIONS(17),
    [aux_sym_css_named_color_token69] = ACTIONS(17),
    [aux_sym_css_named_color_token70] = ACTIONS(17),
    [aux_sym_css_named_color_token71] = ACTIONS(17),
    [aux_sym_css_named_color_token72] = ACTIONS(17),
    [aux_sym_css_named_color_token73] = ACTIONS(17),
    [aux_sym_css_named_color_token74] = ACTIONS(17),
    [aux_sym_css_named_color_token75] = ACTIONS(17),
    [aux_sym_css_named_color_token76] = ACTIONS(17),
    [aux_sym_css_named_color_token77] = ACTIONS(17),
    [aux_sym_css_named_color_token78] = ACTIONS(17),
    [aux_sym_css_named_color_token79] = ACTIONS(17),
    [aux_sym_css_named_color_token80] = ACTIONS(17),
    [aux_sym_css_named_color_token81] = ACTIONS(17),
    [aux_sym_css_named_color_token82] = ACTIONS(17),
    [aux_sym_css_named_color_token83] = ACTIONS(19),
    [aux_sym_css_named_color_token84] = ACTIONS(17),
    [aux_sym_css_named_color_token85] = ACTIONS(17),
    [aux_sym_css_named_color_token86] = ACTIONS(17),
    [aux_sym_css_named_color_token87] = ACTIONS(17),
    [aux_sym_css_named_color_token88] = ACTIONS(17),
    [aux_sym_css_named_color_token89] = ACTIONS(17),
    [aux_sym_css_named_color_token90] = ACTIONS(17),
    [aux_sym_css_named_color_token91] = ACTIONS(17),
    [aux_sym_css_named_color_token92] = ACTIONS(17),
    [aux_sym_css_named_color_token93] = ACTIONS(17),
    [aux_sym_css_named_color_token94] = ACTIONS(17),
    [aux_sym_css_named_color_token95] = ACTIONS(17),
    [aux_sym_css_named_color_token96] = ACTIONS(17),
    [aux_sym_css_named_color_token97] = ACTIONS(17),
    [aux_sym_css_named_color_token98] = ACTIONS(17),
    [aux_sym_css_named_color_token99] = ACTIONS(17),
    [aux_sym_css_named_color_token100] = ACTIONS(17),
    [aux_sym_css_named_color_token101] = ACTIONS(17),
    [aux_sym_css_named_color_token102] = ACTIONS(17),
    [aux_sym_css_named_color_token103] = ACTIONS(17),
    [aux_sym_css_named_color_token104] = ACTIONS(19),
    [aux_sym_css_named_color_token105] = ACTIONS(17),
    [aux_sym_css_named_color_token106] = ACTIONS(19),
    [aux_sym_css_named_color_token107] = ACTIONS(17),
    [aux_sym_css_named_color_token108] = ACTIONS(17),
    [aux_sym_css_named_color_token109] = ACTIONS(17),
    [aux_sym_css_named_color_token110] = ACTIONS(17),
    [aux_sym_css_named_color_token111] = ACTIONS(17),
    [aux_sym_css_named_color_token112] = ACTIONS(17),
    [aux_sym_css_named_color_token113] = ACTIONS(17),
    [aux_sym_css_named_color_token114] = ACTIONS(17),
    [aux_sym_css_named_color_token115] = ACTIONS(17),
    [aux_sym_css_named_color_token116] = ACTIONS(17),
    [aux_sym_css_named_color_token117] = ACTIONS(17),
    [aux_sym_css_named_color_token118] = ACTIONS(17),
    [aux_sym_css_named_color_token119] = ACTIONS(17),
    [aux_sym_css_named_color_token120] = ACTIONS(17),
    [aux_sym_css_named_color_token121] = ACTIONS(17),
    [aux_sym_css_named_color_token122] = ACTIONS(17),
    [aux_sym_css_named_color_token123] = ACTIONS(17),
    [aux_sym_css_named_color_token124] = ACTIONS(17),
    [aux_sym_css_named_color_token125] = ACTIONS(17),
    [aux_sym_css_named_color_token126] = ACTIONS(17),
    [aux_sym_css_named_color_token127] = ACTIONS(17),
    [aux_sym_css_named_color_token128] = ACTIONS(17),
    [aux_sym_css_named_color_token129] = ACTIONS(17),
    [aux_sym_css_named_color_token130] = ACTIONS(17),
    [aux_sym_css_named_color_token131] = ACTIONS(17),
    [aux_sym_css_named_color_token132] = ACTIONS(17),
    [aux_sym_css_named_color_token133] = ACTIONS(17),
    [aux_sym_css_named_color_token134] = ACTIONS(17),
    [aux_sym_css_named_color_token135] = ACTIONS(17),
    [aux_sym_css_named_color_token136] = ACTIONS(17),
    [aux_sym_css_named_color_token137] = ACTIONS(17),
    [aux_sym_css_named_color_token138] = ACTIONS(17),
    [aux_sym_css_named_color_token139] = ACTIONS(17),
    [aux_sym_css_named_color_token140] = ACTIONS(17),
    [aux_sym_css_named_color_token141] = ACTIONS(17),
    [aux_sym_css_named_color_token142] = ACTIONS(17),
    [aux_sym_css_named_color_token143] = ACTIONS(17),
    [aux_sym_css_named_color_token144] = ACTIONS(17),
    [aux_sym_css_named_color_token145] = ACTIONS(19),
    [aux_sym_css_named_color_token146] = ACTIONS(17),
    [aux_sym_css_named_color_token147] = ACTIONS(19),
    [aux_sym_css_named_color_token148] = ACTIONS(17),
    [sym_css_keyword_transparent] = ACTIONS(25),
  },
  [3] = {
    [sym_css_function_rgb] = STATE(3),
    [sym_css_function_rgba] = STATE(3),
    [sym_css_function_rgb_legacy] = STATE(5),
    [sym_css_function_rgba_legacy] = STATE(6),
    [sym_css_function_rgb_modern] = STATE(5),
    [sym_css_function_rgba_modern] = STATE(6),
    [sym_css_function_hsl] = STATE(3),
    [sym_css_function_hsl_legacy] = STATE(7),
    [sym_css_function_hsl_modern] = STATE(7),
    [sym_css_function_hsla] = STATE(3),
    [sym_css_function_hsla_legacy] = STATE(8),
    [sym_css_function_hsla_modern] = STATE(8),
    [sym_css_hex_color] = STATE(3),
    [sym_css_named_color] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_rgb] = ACTIONS(29),
    [anon_sym_rgba] = ACTIONS(32),
    [anon_sym_hsl] = ACTIONS(35),
    [anon_sym_hsla] = ACTIONS(38),
    [sym_css_hex_color_6_digits] = ACTIONS(41),
    [sym_css_hex_color_8_digits] = ACTIONS(44),
    [sym_css_hex_color_3_digits] = ACTIONS(41),
    [sym_css_hex_color_4_digits] = ACTIONS(41),
    [aux_sym_css_named_color_token1] = ACTIONS(47),
    [aux_sym_css_named_color_token2] = ACTIONS(47),
    [aux_sym_css_named_color_token3] = ACTIONS(50),
    [aux_sym_css_named_color_token4] = ACTIONS(47),
    [aux_sym_css_named_color_token5] = ACTIONS(47),
    [aux_sym_css_named_color_token6] = ACTIONS(47),
    [aux_sym_css_named_color_token7] = ACTIONS(47),
    [aux_sym_css_named_color_token8] = ACTIONS(47),
    [aux_sym_css_named_color_token9] = ACTIONS(47),
    [aux_sym_css_named_color_token10] = ACTIONS(50),
    [aux_sym_css_named_color_token11] = ACTIONS(47),
    [aux_sym_css_named_color_token12] = ACTIONS(47),
    [aux_sym_css_named_color_token13] = ACTIONS(47),
    [aux_sym_css_named_color_token14] = ACTIONS(47),
    [aux_sym_css_named_color_token15] = ACTIONS(47),
    [aux_sym_css_named_color_token16] = ACTIONS(47),
    [aux_sym_css_named_color_token17] = ACTIONS(47),
    [aux_sym_css_named_color_token18] = ACTIONS(47),
    [aux_sym_css_named_color_token19] = ACTIONS(47),
    [aux_sym_css_named_color_token20] = ACTIONS(47),
    [aux_sym_css_named_color_token21] = ACTIONS(47),
    [aux_sym_css_named_color_token22] = ACTIONS(47),
    [aux_sym_css_named_color_token23] = ACTIONS(47),
    [aux_sym_css_named_color_token24] = ACTIONS(47),
    [aux_sym_css_named_color_token25] = ACTIONS(47),
    [aux_sym_css_named_color_token26] = ACTIONS(47),
    [aux_sym_css_named_color_token27] = ACTIONS(47),
    [aux_sym_css_named_color_token28] = ACTIONS(47),
    [aux_sym_css_named_color_token29] = ACTIONS(47),
    [aux_sym_css_named_color_token30] = ACTIONS(47),
    [aux_sym_css_named_color_token31] = ACTIONS(47),
    [aux_sym_css_named_color_token32] = ACTIONS(47),
    [aux_sym_css_named_color_token33] = ACTIONS(47),
    [aux_sym_css_named_color_token34] = ACTIONS(47),
    [aux_sym_css_named_color_token35] = ACTIONS(47),
    [aux_sym_css_named_color_token36] = ACTIONS(47),
    [aux_sym_css_named_color_token37] = ACTIONS(47),
    [aux_sym_css_named_color_token38] = ACTIONS(47),
    [aux_sym_css_named_color_token39] = ACTIONS(47),
    [aux_sym_css_named_color_token40] = ACTIONS(47),
    [aux_sym_css_named_color_token41] = ACTIONS(47),
    [aux_sym_css_named_color_token42] = ACTIONS(47),
    [aux_sym_css_named_color_token43] = ACTIONS(47),
    [aux_sym_css_named_color_token44] = ACTIONS(47),
    [aux_sym_css_named_color_token45] = ACTIONS(47),
    [aux_sym_css_named_color_token46] = ACTIONS(47),
    [aux_sym_css_named_color_token47] = ACTIONS(47),
    [aux_sym_css_named_color_token48] = ACTIONS(47),
    [aux_sym_css_named_color_token49] = ACTIONS(47),
    [aux_sym_css_named_color_token50] = ACTIONS(47),
    [aux_sym_css_named_color_token51] = ACTIONS(47),
    [aux_sym_css_named_color_token52] = ACTIONS(50),
    [aux_sym_css_named_color_token53] = ACTIONS(47),
    [aux_sym_css_named_color_token54] = ACTIONS(47),
    [aux_sym_css_named_color_token55] = ACTIONS(50),
    [aux_sym_css_named_color_token56] = ACTIONS(47),
    [aux_sym_css_named_color_token57] = ACTIONS(47),
    [aux_sym_css_named_color_token58] = ACTIONS(47),
    [aux_sym_css_named_color_token59] = ACTIONS(47),
    [aux_sym_css_named_color_token60] = ACTIONS(47),
    [aux_sym_css_named_color_token61] = ACTIONS(47),
    [aux_sym_css_named_color_token62] = ACTIONS(47),
    [aux_sym_css_named_color_token63] = ACTIONS(47),
    [aux_sym_css_named_color_token64] = ACTIONS(50),
    [aux_sym_css_named_color_token65] = ACTIONS(47),
    [aux_sym_css_named_color_token66] = ACTIONS(47),
    [aux_sym_css_named_color_token67] = ACTIONS(47),
    [aux_sym_css_named_color_token68] = ACTIONS(47),
    [aux_sym_css_named_color_token69] = ACTIONS(47),
    [aux_sym_css_named_color_token70] = ACTIONS(47),
    [aux_sym_css_named_color_token71] = ACTIONS(47),
    [aux_sym_css_named_color_token72] = ACTIONS(47),
    [aux_sym_css_named_color_token73] = ACTIONS(47),
    [aux_sym_css_named_color_token74] = ACTIONS(47),
    [aux_sym_css_named_color_token75] = ACTIONS(47),
    [aux_sym_css_named_color_token76] = ACTIONS(47),
    [aux_sym_css_named_color_token77] = ACTIONS(47),
    [aux_sym_css_named_color_token78] = ACTIONS(47),
    [aux_sym_css_named_color_token79] = ACTIONS(47),
    [aux_sym_css_named_color_token80] = ACTIONS(47),
    [aux_sym_css_named_color_token81] = ACTIONS(47),
    [aux_sym_css_named_color_token82] = ACTIONS(47),
    [aux_sym_css_named_color_token83] = ACTIONS(50),
    [aux_sym_css_named_color_token84] = ACTIONS(47),
    [aux_sym_css_named_color_token85] = ACTIONS(47),
    [aux_sym_css_named_color_token86] = ACTIONS(47),
    [aux_sym_css_named_color_token87] = ACTIONS(47),
    [aux_sym_css_named_color_token88] = ACTIONS(47),
    [aux_sym_css_named_color_token89] = ACTIONS(47),
    [aux_sym_css_named_color_token90] = ACTIONS(47),
    [aux_sym_css_named_color_token91] = ACTIONS(47),
    [aux_sym_css_named_color_token92] = ACTIONS(47),
    [aux_sym_css_named_color_token93] = ACTIONS(47),
    [aux_sym_css_named_color_token94] = ACTIONS(47),
    [aux_sym_css_named_color_token95] = ACTIONS(47),
    [aux_sym_css_named_color_token96] = ACTIONS(47),
    [aux_sym_css_named_color_token97] = ACTIONS(47),
    [aux_sym_css_named_color_token98] = ACTIONS(47),
    [aux_sym_css_named_color_token99] = ACTIONS(47),
    [aux_sym_css_named_color_token100] = ACTIONS(47),
    [aux_sym_css_named_color_token101] = ACTIONS(47),
    [aux_sym_css_named_color_token102] = ACTIONS(47),
    [aux_sym_css_named_color_token103] = ACTIONS(47),
    [aux_sym_css_named_color_token104] = ACTIONS(50),
    [aux_sym_css_named_color_token105] = ACTIONS(47),
    [aux_sym_css_named_color_token106] = ACTIONS(50),
    [aux_sym_css_named_color_token107] = ACTIONS(47),
    [aux_sym_css_named_color_token108] = ACTIONS(47),
    [aux_sym_css_named_color_token109] = ACTIONS(47),
    [aux_sym_css_named_color_token110] = ACTIONS(47),
    [aux_sym_css_named_color_token111] = ACTIONS(47),
    [aux_sym_css_named_color_token112] = ACTIONS(47),
    [aux_sym_css_named_color_token113] = ACTIONS(47),
    [aux_sym_css_named_color_token114] = ACTIONS(47),
    [aux_sym_css_named_color_token115] = ACTIONS(47),
    [aux_sym_css_named_color_token116] = ACTIONS(47),
    [aux_sym_css_named_color_token117] = ACTIONS(47),
    [aux_sym_css_named_color_token118] = ACTIONS(47),
    [aux_sym_css_named_color_token119] = ACTIONS(47),
    [aux_sym_css_named_color_token120] = ACTIONS(47),
    [aux_sym_css_named_color_token121] = ACTIONS(47),
    [aux_sym_css_named_color_token122] = ACTIONS(47),
    [aux_sym_css_named_color_token123] = ACTIONS(47),
    [aux_sym_css_named_color_token124] = ACTIONS(47),
    [aux_sym_css_named_color_token125] = ACTIONS(47),
    [aux_sym_css_named_color_token126] = ACTIONS(47),
    [aux_sym_css_named_color_token127] = ACTIONS(47),
    [aux_sym_css_named_color_token128] = ACTIONS(47),
    [aux_sym_css_named_color_token129] = ACTIONS(47),
    [aux_sym_css_named_color_token130] = ACTIONS(47),
    [aux_sym_css_named_color_token131] = ACTIONS(47),
    [aux_sym_css_named_color_token132] = ACTIONS(47),
    [aux_sym_css_named_color_token133] = ACTIONS(47),
    [aux_sym_css_named_color_token134] = ACTIONS(47),
    [aux_sym_css_named_color_token135] = ACTIONS(47),
    [aux_sym_css_named_color_token136] = ACTIONS(47),
    [aux_sym_css_named_color_token137] = ACTIONS(47),
    [aux_sym_css_named_color_token138] = ACTIONS(47),
    [aux_sym_css_named_color_token139] = ACTIONS(47),
    [aux_sym_css_named_color_token140] = ACTIONS(47),
    [aux_sym_css_named_color_token141] = ACTIONS(47),
    [aux_sym_css_named_color_token142] = ACTIONS(47),
    [aux_sym_css_named_color_token143] = ACTIONS(47),
    [aux_sym_css_named_color_token144] = ACTIONS(47),
    [aux_sym_css_named_color_token145] = ACTIONS(50),
    [aux_sym_css_named_color_token146] = ACTIONS(47),
    [aux_sym_css_named_color_token147] = ACTIONS(50),
    [aux_sym_css_named_color_token148] = ACTIONS(47),
    [sym_css_keyword_transparent] = ACTIONS(53),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [anon_sym_rgb] = ACTIONS(58),
    [anon_sym_rgba] = ACTIONS(56),
    [anon_sym_hsl] = ACTIONS(58),
    [anon_sym_hsla] = ACTIONS(56),
    [sym_css_hex_color_6_digits] = ACTIONS(58),
    [sym_css_hex_color_8_digits] = ACTIONS(56),
    [sym_css_hex_color_3_digits] = ACTIONS(58),
    [sym_css_hex_color_4_digits] = ACTIONS(58),
    [aux_sym_css_named_color_token1] = ACTIONS(56),
    [aux_sym_css_named_color_token2] = ACTIONS(56),
    [aux_sym_css_named_color_token3] = ACTIONS(58),
    [aux_sym_css_named_color_token4] = ACTIONS(56),
    [aux_sym_css_named_color_token5] = ACTIONS(56),
    [aux_sym_css_named_color_token6] = ACTIONS(56),
    [aux_sym_css_named_color_token7] = ACTIONS(56),
    [aux_sym_css_named_color_token8] = ACTIONS(56),
    [aux_sym_css_named_color_token9] = ACTIONS(56),
    [aux_sym_css_named_color_token10] = ACTIONS(58),
    [aux_sym_css_named_color_token11] = ACTIONS(56),
    [aux_sym_css_named_color_token12] = ACTIONS(56),
    [aux_sym_css_named_color_token13] = ACTIONS(56),
    [aux_sym_css_named_color_token14] = ACTIONS(56),
    [aux_sym_css_named_color_token15] = ACTIONS(56),
    [aux_sym_css_named_color_token16] = ACTIONS(56),
    [aux_sym_css_named_color_token17] = ACTIONS(56),
    [aux_sym_css_named_color_token18] = ACTIONS(56),
    [aux_sym_css_named_color_token19] = ACTIONS(56),
    [aux_sym_css_named_color_token20] = ACTIONS(56),
    [aux_sym_css_named_color_token21] = ACTIONS(56),
    [aux_sym_css_named_color_token22] = ACTIONS(56),
    [aux_sym_css_named_color_token23] = ACTIONS(56),
    [aux_sym_css_named_color_token24] = ACTIONS(56),
    [aux_sym_css_named_color_token25] = ACTIONS(56),
    [aux_sym_css_named_color_token26] = ACTIONS(56),
    [aux_sym_css_named_color_token27] = ACTIONS(56),
    [aux_sym_css_named_color_token28] = ACTIONS(56),
    [aux_sym_css_named_color_token29] = ACTIONS(56),
    [aux_sym_css_named_color_token30] = ACTIONS(56),
    [aux_sym_css_named_color_token31] = ACTIONS(56),
    [aux_sym_css_named_color_token32] = ACTIONS(56),
    [aux_sym_css_named_color_token33] = ACTIONS(56),
    [aux_sym_css_named_color_token34] = ACTIONS(56),
    [aux_sym_css_named_color_token35] = ACTIONS(56),
    [aux_sym_css_named_color_token36] = ACTIONS(56),
    [aux_sym_css_named_color_token37] = ACTIONS(56),
    [aux_sym_css_named_color_token38] = ACTIONS(56),
    [aux_sym_css_named_color_token39] = ACTIONS(56),
    [aux_sym_css_named_color_token40] = ACTIONS(56),
    [aux_sym_css_named_color_token41] = ACTIONS(56),
    [aux_sym_css_named_color_token42] = ACTIONS(56),
    [aux_sym_css_named_color_token43] = ACTIONS(56),
    [aux_sym_css_named_color_token44] = ACTIONS(56),
    [aux_sym_css_named_color_token45] = ACTIONS(56),
    [aux_sym_css_named_color_token46] = ACTIONS(56),
    [aux_sym_css_named_color_token47] = ACTIONS(56),
    [aux_sym_css_named_color_token48] = ACTIONS(56),
    [aux_sym_css_named_color_token49] = ACTIONS(56),
    [aux_sym_css_named_color_token50] = ACTIONS(56),
    [aux_sym_css_named_color_token51] = ACTIONS(56),
    [aux_sym_css_named_color_token52] = ACTIONS(58),
    [aux_sym_css_named_color_token53] = ACTIONS(56),
    [aux_sym_css_named_color_token54] = ACTIONS(56),
    [aux_sym_css_named_color_token55] = ACTIONS(58),
    [aux_sym_css_named_color_token56] = ACTIONS(56),
    [aux_sym_css_named_color_token57] = ACTIONS(56),
    [aux_sym_css_named_color_token58] = ACTIONS(56),
    [aux_sym_css_named_color_token59] = ACTIONS(56),
    [aux_sym_css_named_color_token60] = ACTIONS(56),
    [aux_sym_css_named_color_token61] = ACTIONS(56),
    [aux_sym_css_named_color_token62] = ACTIONS(56),
    [aux_sym_css_named_color_token63] = ACTIONS(56),
    [aux_sym_css_named_color_token64] = ACTIONS(58),
    [aux_sym_css_named_color_token65] = ACTIONS(56),
    [aux_sym_css_named_color_token66] = ACTIONS(56),
    [aux_sym_css_named_color_token67] = ACTIONS(56),
    [aux_sym_css_named_color_token68] = ACTIONS(56),
    [aux_sym_css_named_color_token69] = ACTIONS(56),
    [aux_sym_css_named_color_token70] = ACTIONS(56),
    [aux_sym_css_named_color_token71] = ACTIONS(56),
    [aux_sym_css_named_color_token72] = ACTIONS(56),
    [aux_sym_css_named_color_token73] = ACTIONS(56),
    [aux_sym_css_named_color_token74] = ACTIONS(56),
    [aux_sym_css_named_color_token75] = ACTIONS(56),
    [aux_sym_css_named_color_token76] = ACTIONS(56),
    [aux_sym_css_named_color_token77] = ACTIONS(56),
    [aux_sym_css_named_color_token78] = ACTIONS(56),
    [aux_sym_css_named_color_token79] = ACTIONS(56),
    [aux_sym_css_named_color_token80] = ACTIONS(56),
    [aux_sym_css_named_color_token81] = ACTIONS(56),
    [aux_sym_css_named_color_token82] = ACTIONS(56),
    [aux_sym_css_named_color_token83] = ACTIONS(58),
    [aux_sym_css_named_color_token84] = ACTIONS(56),
    [aux_sym_css_named_color_token85] = ACTIONS(56),
    [aux_sym_css_named_color_token86] = ACTIONS(56),
    [aux_sym_css_named_color_token87] = ACTIONS(56),
    [aux_sym_css_named_color_token88] = ACTIONS(56),
    [aux_sym_css_named_color_token89] = ACTIONS(56),
    [aux_sym_css_named_color_token90] = ACTIONS(56),
    [aux_sym_css_named_color_token91] = ACTIONS(56),
    [aux_sym_css_named_color_token92] = ACTIONS(56),
    [aux_sym_css_named_color_token93] = ACTIONS(56),
    [aux_sym_css_named_color_token94] = ACTIONS(56),
    [aux_sym_css_named_color_token95] = ACTIONS(56),
    [aux_sym_css_named_color_token96] = ACTIONS(56),
    [aux_sym_css_named_color_token97] = ACTIONS(56),
    [aux_sym_css_named_color_token98] = ACTIONS(56),
    [aux_sym_css_named_color_token99] = ACTIONS(56),
    [aux_sym_css_named_color_token100] = ACTIONS(56),
    [aux_sym_css_named_color_token101] = ACTIONS(56),
    [aux_sym_css_named_color_token102] = ACTIONS(56),
    [aux_sym_css_named_color_token103] = ACTIONS(56),
    [aux_sym_css_named_color_token104] = ACTIONS(58),
    [aux_sym_css_named_color_token105] = ACTIONS(56),
    [aux_sym_css_named_color_token106] = ACTIONS(58),
    [aux_sym_css_named_color_token107] = ACTIONS(56),
    [aux_sym_css_named_color_token108] = ACTIONS(56),
    [aux_sym_css_named_color_token109] = ACTIONS(56),
    [aux_sym_css_named_color_token110] = ACTIONS(56),
    [aux_sym_css_named_color_token111] = ACTIONS(56),
    [aux_sym_css_named_color_token112] = ACTIONS(56),
    [aux_sym_css_named_color_token113] = ACTIONS(56),
    [aux_sym_css_named_color_token114] = ACTIONS(56),
    [aux_sym_css_named_color_token115] = ACTIONS(56),
    [aux_sym_css_named_color_token116] = ACTIONS(56),
    [aux_sym_css_named_color_token117] = ACTIONS(56),
    [aux_sym_css_named_color_token118] = ACTIONS(56),
    [aux_sym_css_named_color_token119] = ACTIONS(56),
    [aux_sym_css_named_color_token120] = ACTIONS(56),
    [aux_sym_css_named_color_token121] = ACTIONS(56),
    [aux_sym_css_named_color_token122] = ACTIONS(56),
    [aux_sym_css_named_color_token123] = ACTIONS(56),
    [aux_sym_css_named_color_token124] = ACTIONS(56),
    [aux_sym_css_named_color_token125] = ACTIONS(56),
    [aux_sym_css_named_color_token126] = ACTIONS(56),
    [aux_sym_css_named_color_token127] = ACTIONS(56),
    [aux_sym_css_named_color_token128] = ACTIONS(56),
    [aux_sym_css_named_color_token129] = ACTIONS(56),
    [aux_sym_css_named_color_token130] = ACTIONS(56),
    [aux_sym_css_named_color_token131] = ACTIONS(56),
    [aux_sym_css_named_color_token132] = ACTIONS(56),
    [aux_sym_css_named_color_token133] = ACTIONS(56),
    [aux_sym_css_named_color_token134] = ACTIONS(56),
    [aux_sym_css_named_color_token135] = ACTIONS(56),
    [aux_sym_css_named_color_token136] = ACTIONS(56),
    [aux_sym_css_named_color_token137] = ACTIONS(56),
    [aux_sym_css_named_color_token138] = ACTIONS(56),
    [aux_sym_css_named_color_token139] = ACTIONS(56),
    [aux_sym_css_named_color_token140] = ACTIONS(56),
    [aux_sym_css_named_color_token141] = ACTIONS(56),
    [aux_sym_css_named_color_token142] = ACTIONS(56),
    [aux_sym_css_named_color_token143] = ACTIONS(56),
    [aux_sym_css_named_color_token144] = ACTIONS(56),
    [aux_sym_css_named_color_token145] = ACTIONS(58),
    [aux_sym_css_named_color_token146] = ACTIONS(56),
    [aux_sym_css_named_color_token147] = ACTIONS(58),
    [aux_sym_css_named_color_token148] = ACTIONS(56),
    [sym_css_keyword_transparent] = ACTIONS(56),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_rgb] = ACTIONS(62),
    [anon_sym_rgba] = ACTIONS(60),
    [anon_sym_hsl] = ACTIONS(62),
    [anon_sym_hsla] = ACTIONS(60),
    [sym_css_hex_color_6_digits] = ACTIONS(62),
    [sym_css_hex_color_8_digits] = ACTIONS(60),
    [sym_css_hex_color_3_digits] = ACTIONS(62),
    [sym_css_hex_color_4_digits] = ACTIONS(62),
    [aux_sym_css_named_color_token1] = ACTIONS(60),
    [aux_sym_css_named_color_token2] = ACTIONS(60),
    [aux_sym_css_named_color_token3] = ACTIONS(62),
    [aux_sym_css_named_color_token4] = ACTIONS(60),
    [aux_sym_css_named_color_token5] = ACTIONS(60),
    [aux_sym_css_named_color_token6] = ACTIONS(60),
    [aux_sym_css_named_color_token7] = ACTIONS(60),
    [aux_sym_css_named_color_token8] = ACTIONS(60),
    [aux_sym_css_named_color_token9] = ACTIONS(60),
    [aux_sym_css_named_color_token10] = ACTIONS(62),
    [aux_sym_css_named_color_token11] = ACTIONS(60),
    [aux_sym_css_named_color_token12] = ACTIONS(60),
    [aux_sym_css_named_color_token13] = ACTIONS(60),
    [aux_sym_css_named_color_token14] = ACTIONS(60),
    [aux_sym_css_named_color_token15] = ACTIONS(60),
    [aux_sym_css_named_color_token16] = ACTIONS(60),
    [aux_sym_css_named_color_token17] = ACTIONS(60),
    [aux_sym_css_named_color_token18] = ACTIONS(60),
    [aux_sym_css_named_color_token19] = ACTIONS(60),
    [aux_sym_css_named_color_token20] = ACTIONS(60),
    [aux_sym_css_named_color_token21] = ACTIONS(60),
    [aux_sym_css_named_color_token22] = ACTIONS(60),
    [aux_sym_css_named_color_token23] = ACTIONS(60),
    [aux_sym_css_named_color_token24] = ACTIONS(60),
    [aux_sym_css_named_color_token25] = ACTIONS(60),
    [aux_sym_css_named_color_token26] = ACTIONS(60),
    [aux_sym_css_named_color_token27] = ACTIONS(60),
    [aux_sym_css_named_color_token28] = ACTIONS(60),
    [aux_sym_css_named_color_token29] = ACTIONS(60),
    [aux_sym_css_named_color_token30] = ACTIONS(60),
    [aux_sym_css_named_color_token31] = ACTIONS(60),
    [aux_sym_css_named_color_token32] = ACTIONS(60),
    [aux_sym_css_named_color_token33] = ACTIONS(60),
    [aux_sym_css_named_color_token34] = ACTIONS(60),
    [aux_sym_css_named_color_token35] = ACTIONS(60),
    [aux_sym_css_named_color_token36] = ACTIONS(60),
    [aux_sym_css_named_color_token37] = ACTIONS(60),
    [aux_sym_css_named_color_token38] = ACTIONS(60),
    [aux_sym_css_named_color_token39] = ACTIONS(60),
    [aux_sym_css_named_color_token40] = ACTIONS(60),
    [aux_sym_css_named_color_token41] = ACTIONS(60),
    [aux_sym_css_named_color_token42] = ACTIONS(60),
    [aux_sym_css_named_color_token43] = ACTIONS(60),
    [aux_sym_css_named_color_token44] = ACTIONS(60),
    [aux_sym_css_named_color_token45] = ACTIONS(60),
    [aux_sym_css_named_color_token46] = ACTIONS(60),
    [aux_sym_css_named_color_token47] = ACTIONS(60),
    [aux_sym_css_named_color_token48] = ACTIONS(60),
    [aux_sym_css_named_color_token49] = ACTIONS(60),
    [aux_sym_css_named_color_token50] = ACTIONS(60),
    [aux_sym_css_named_color_token51] = ACTIONS(60),
    [aux_sym_css_named_color_token52] = ACTIONS(62),
    [aux_sym_css_named_color_token53] = ACTIONS(60),
    [aux_sym_css_named_color_token54] = ACTIONS(60),
    [aux_sym_css_named_color_token55] = ACTIONS(62),
    [aux_sym_css_named_color_token56] = ACTIONS(60),
    [aux_sym_css_named_color_token57] = ACTIONS(60),
    [aux_sym_css_named_color_token58] = ACTIONS(60),
    [aux_sym_css_named_color_token59] = ACTIONS(60),
    [aux_sym_css_named_color_token60] = ACTIONS(60),
    [aux_sym_css_named_color_token61] = ACTIONS(60),
    [aux_sym_css_named_color_token62] = ACTIONS(60),
    [aux_sym_css_named_color_token63] = ACTIONS(60),
    [aux_sym_css_named_color_token64] = ACTIONS(62),
    [aux_sym_css_named_color_token65] = ACTIONS(60),
    [aux_sym_css_named_color_token66] = ACTIONS(60),
    [aux_sym_css_named_color_token67] = ACTIONS(60),
    [aux_sym_css_named_color_token68] = ACTIONS(60),
    [aux_sym_css_named_color_token69] = ACTIONS(60),
    [aux_sym_css_named_color_token70] = ACTIONS(60),
    [aux_sym_css_named_color_token71] = ACTIONS(60),
    [aux_sym_css_named_color_token72] = ACTIONS(60),
    [aux_sym_css_named_color_token73] = ACTIONS(60),
    [aux_sym_css_named_color_token74] = ACTIONS(60),
    [aux_sym_css_named_color_token75] = ACTIONS(60),
    [aux_sym_css_named_color_token76] = ACTIONS(60),
    [aux_sym_css_named_color_token77] = ACTIONS(60),
    [aux_sym_css_named_color_token78] = ACTIONS(60),
    [aux_sym_css_named_color_token79] = ACTIONS(60),
    [aux_sym_css_named_color_token80] = ACTIONS(60),
    [aux_sym_css_named_color_token81] = ACTIONS(60),
    [aux_sym_css_named_color_token82] = ACTIONS(60),
    [aux_sym_css_named_color_token83] = ACTIONS(62),
    [aux_sym_css_named_color_token84] = ACTIONS(60),
    [aux_sym_css_named_color_token85] = ACTIONS(60),
    [aux_sym_css_named_color_token86] = ACTIONS(60),
    [aux_sym_css_named_color_token87] = ACTIONS(60),
    [aux_sym_css_named_color_token88] = ACTIONS(60),
    [aux_sym_css_named_color_token89] = ACTIONS(60),
    [aux_sym_css_named_color_token90] = ACTIONS(60),
    [aux_sym_css_named_color_token91] = ACTIONS(60),
    [aux_sym_css_named_color_token92] = ACTIONS(60),
    [aux_sym_css_named_color_token93] = ACTIONS(60),
    [aux_sym_css_named_color_token94] = ACTIONS(60),
    [aux_sym_css_named_color_token95] = ACTIONS(60),
    [aux_sym_css_named_color_token96] = ACTIONS(60),
    [aux_sym_css_named_color_token97] = ACTIONS(60),
    [aux_sym_css_named_color_token98] = ACTIONS(60),
    [aux_sym_css_named_color_token99] = ACTIONS(60),
    [aux_sym_css_named_color_token100] = ACTIONS(60),
    [aux_sym_css_named_color_token101] = ACTIONS(60),
    [aux_sym_css_named_color_token102] = ACTIONS(60),
    [aux_sym_css_named_color_token103] = ACTIONS(60),
    [aux_sym_css_named_color_token104] = ACTIONS(62),
    [aux_sym_css_named_color_token105] = ACTIONS(60),
    [aux_sym_css_named_color_token106] = ACTIONS(62),
    [aux_sym_css_named_color_token107] = ACTIONS(60),
    [aux_sym_css_named_color_token108] = ACTIONS(60),
    [aux_sym_css_named_color_token109] = ACTIONS(60),
    [aux_sym_css_named_color_token110] = ACTIONS(60),
    [aux_sym_css_named_color_token111] = ACTIONS(60),
    [aux_sym_css_named_color_token112] = ACTIONS(60),
    [aux_sym_css_named_color_token113] = ACTIONS(60),
    [aux_sym_css_named_color_token114] = ACTIONS(60),
    [aux_sym_css_named_color_token115] = ACTIONS(60),
    [aux_sym_css_named_color_token116] = ACTIONS(60),
    [aux_sym_css_named_color_token117] = ACTIONS(60),
    [aux_sym_css_named_color_token118] = ACTIONS(60),
    [aux_sym_css_named_color_token119] = ACTIONS(60),
    [aux_sym_css_named_color_token120] = ACTIONS(60),
    [aux_sym_css_named_color_token121] = ACTIONS(60),
    [aux_sym_css_named_color_token122] = ACTIONS(60),
    [aux_sym_css_named_color_token123] = ACTIONS(60),
    [aux_sym_css_named_color_token124] = ACTIONS(60),
    [aux_sym_css_named_color_token125] = ACTIONS(60),
    [aux_sym_css_named_color_token126] = ACTIONS(60),
    [aux_sym_css_named_color_token127] = ACTIONS(60),
    [aux_sym_css_named_color_token128] = ACTIONS(60),
    [aux_sym_css_named_color_token129] = ACTIONS(60),
    [aux_sym_css_named_color_token130] = ACTIONS(60),
    [aux_sym_css_named_color_token131] = ACTIONS(60),
    [aux_sym_css_named_color_token132] = ACTIONS(60),
    [aux_sym_css_named_color_token133] = ACTIONS(60),
    [aux_sym_css_named_color_token134] = ACTIONS(60),
    [aux_sym_css_named_color_token135] = ACTIONS(60),
    [aux_sym_css_named_color_token136] = ACTIONS(60),
    [aux_sym_css_named_color_token137] = ACTIONS(60),
    [aux_sym_css_named_color_token138] = ACTIONS(60),
    [aux_sym_css_named_color_token139] = ACTIONS(60),
    [aux_sym_css_named_color_token140] = ACTIONS(60),
    [aux_sym_css_named_color_token141] = ACTIONS(60),
    [aux_sym_css_named_color_token142] = ACTIONS(60),
    [aux_sym_css_named_color_token143] = ACTIONS(60),
    [aux_sym_css_named_color_token144] = ACTIONS(60),
    [aux_sym_css_named_color_token145] = ACTIONS(62),
    [aux_sym_css_named_color_token146] = ACTIONS(60),
    [aux_sym_css_named_color_token147] = ACTIONS(62),
    [aux_sym_css_named_color_token148] = ACTIONS(60),
    [sym_css_keyword_transparent] = ACTIONS(60),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_rgb] = ACTIONS(66),
    [anon_sym_rgba] = ACTIONS(64),
    [anon_sym_hsl] = ACTIONS(66),
    [anon_sym_hsla] = ACTIONS(64),
    [sym_css_hex_color_6_digits] = ACTIONS(66),
    [sym_css_hex_color_8_digits] = ACTIONS(64),
    [sym_css_hex_color_3_digits] = ACTIONS(66),
    [sym_css_hex_color_4_digits] = ACTIONS(66),
    [aux_sym_css_named_color_token1] = ACTIONS(64),
    [aux_sym_css_named_color_token2] = ACTIONS(64),
    [aux_sym_css_named_color_token3] = ACTIONS(66),
    [aux_sym_css_named_color_token4] = ACTIONS(64),
    [aux_sym_css_named_color_token5] = ACTIONS(64),
    [aux_sym_css_named_color_token6] = ACTIONS(64),
    [aux_sym_css_named_color_token7] = ACTIONS(64),
    [aux_sym_css_named_color_token8] = ACTIONS(64),
    [aux_sym_css_named_color_token9] = ACTIONS(64),
    [aux_sym_css_named_color_token10] = ACTIONS(66),
    [aux_sym_css_named_color_token11] = ACTIONS(64),
    [aux_sym_css_named_color_token12] = ACTIONS(64),
    [aux_sym_css_named_color_token13] = ACTIONS(64),
    [aux_sym_css_named_color_token14] = ACTIONS(64),
    [aux_sym_css_named_color_token15] = ACTIONS(64),
    [aux_sym_css_named_color_token16] = ACTIONS(64),
    [aux_sym_css_named_color_token17] = ACTIONS(64),
    [aux_sym_css_named_color_token18] = ACTIONS(64),
    [aux_sym_css_named_color_token19] = ACTIONS(64),
    [aux_sym_css_named_color_token20] = ACTIONS(64),
    [aux_sym_css_named_color_token21] = ACTIONS(64),
    [aux_sym_css_named_color_token22] = ACTIONS(64),
    [aux_sym_css_named_color_token23] = ACTIONS(64),
    [aux_sym_css_named_color_token24] = ACTIONS(64),
    [aux_sym_css_named_color_token25] = ACTIONS(64),
    [aux_sym_css_named_color_token26] = ACTIONS(64),
    [aux_sym_css_named_color_token27] = ACTIONS(64),
    [aux_sym_css_named_color_token28] = ACTIONS(64),
    [aux_sym_css_named_color_token29] = ACTIONS(64),
    [aux_sym_css_named_color_token30] = ACTIONS(64),
    [aux_sym_css_named_color_token31] = ACTIONS(64),
    [aux_sym_css_named_color_token32] = ACTIONS(64),
    [aux_sym_css_named_color_token33] = ACTIONS(64),
    [aux_sym_css_named_color_token34] = ACTIONS(64),
    [aux_sym_css_named_color_token35] = ACTIONS(64),
    [aux_sym_css_named_color_token36] = ACTIONS(64),
    [aux_sym_css_named_color_token37] = ACTIONS(64),
    [aux_sym_css_named_color_token38] = ACTIONS(64),
    [aux_sym_css_named_color_token39] = ACTIONS(64),
    [aux_sym_css_named_color_token40] = ACTIONS(64),
    [aux_sym_css_named_color_token41] = ACTIONS(64),
    [aux_sym_css_named_color_token42] = ACTIONS(64),
    [aux_sym_css_named_color_token43] = ACTIONS(64),
    [aux_sym_css_named_color_token44] = ACTIONS(64),
    [aux_sym_css_named_color_token45] = ACTIONS(64),
    [aux_sym_css_named_color_token46] = ACTIONS(64),
    [aux_sym_css_named_color_token47] = ACTIONS(64),
    [aux_sym_css_named_color_token48] = ACTIONS(64),
    [aux_sym_css_named_color_token49] = ACTIONS(64),
    [aux_sym_css_named_color_token50] = ACTIONS(64),
    [aux_sym_css_named_color_token51] = ACTIONS(64),
    [aux_sym_css_named_color_token52] = ACTIONS(66),
    [aux_sym_css_named_color_token53] = ACTIONS(64),
    [aux_sym_css_named_color_token54] = ACTIONS(64),
    [aux_sym_css_named_color_token55] = ACTIONS(66),
    [aux_sym_css_named_color_token56] = ACTIONS(64),
    [aux_sym_css_named_color_token57] = ACTIONS(64),
    [aux_sym_css_named_color_token58] = ACTIONS(64),
    [aux_sym_css_named_color_token59] = ACTIONS(64),
    [aux_sym_css_named_color_token60] = ACTIONS(64),
    [aux_sym_css_named_color_token61] = ACTIONS(64),
    [aux_sym_css_named_color_token62] = ACTIONS(64),
    [aux_sym_css_named_color_token63] = ACTIONS(64),
    [aux_sym_css_named_color_token64] = ACTIONS(66),
    [aux_sym_css_named_color_token65] = ACTIONS(64),
    [aux_sym_css_named_color_token66] = ACTIONS(64),
    [aux_sym_css_named_color_token67] = ACTIONS(64),
    [aux_sym_css_named_color_token68] = ACTIONS(64),
    [aux_sym_css_named_color_token69] = ACTIONS(64),
    [aux_sym_css_named_color_token70] = ACTIONS(64),
    [aux_sym_css_named_color_token71] = ACTIONS(64),
    [aux_sym_css_named_color_token72] = ACTIONS(64),
    [aux_sym_css_named_color_token73] = ACTIONS(64),
    [aux_sym_css_named_color_token74] = ACTIONS(64),
    [aux_sym_css_named_color_token75] = ACTIONS(64),
    [aux_sym_css_named_color_token76] = ACTIONS(64),
    [aux_sym_css_named_color_token77] = ACTIONS(64),
    [aux_sym_css_named_color_token78] = ACTIONS(64),
    [aux_sym_css_named_color_token79] = ACTIONS(64),
    [aux_sym_css_named_color_token80] = ACTIONS(64),
    [aux_sym_css_named_color_token81] = ACTIONS(64),
    [aux_sym_css_named_color_token82] = ACTIONS(64),
    [aux_sym_css_named_color_token83] = ACTIONS(66),
    [aux_sym_css_named_color_token84] = ACTIONS(64),
    [aux_sym_css_named_color_token85] = ACTIONS(64),
    [aux_sym_css_named_color_token86] = ACTIONS(64),
    [aux_sym_css_named_color_token87] = ACTIONS(64),
    [aux_sym_css_named_color_token88] = ACTIONS(64),
    [aux_sym_css_named_color_token89] = ACTIONS(64),
    [aux_sym_css_named_color_token90] = ACTIONS(64),
    [aux_sym_css_named_color_token91] = ACTIONS(64),
    [aux_sym_css_named_color_token92] = ACTIONS(64),
    [aux_sym_css_named_color_token93] = ACTIONS(64),
    [aux_sym_css_named_color_token94] = ACTIONS(64),
    [aux_sym_css_named_color_token95] = ACTIONS(64),
    [aux_sym_css_named_color_token96] = ACTIONS(64),
    [aux_sym_css_named_color_token97] = ACTIONS(64),
    [aux_sym_css_named_color_token98] = ACTIONS(64),
    [aux_sym_css_named_color_token99] = ACTIONS(64),
    [aux_sym_css_named_color_token100] = ACTIONS(64),
    [aux_sym_css_named_color_token101] = ACTIONS(64),
    [aux_sym_css_named_color_token102] = ACTIONS(64),
    [aux_sym_css_named_color_token103] = ACTIONS(64),
    [aux_sym_css_named_color_token104] = ACTIONS(66),
    [aux_sym_css_named_color_token105] = ACTIONS(64),
    [aux_sym_css_named_color_token106] = ACTIONS(66),
    [aux_sym_css_named_color_token107] = ACTIONS(64),
    [aux_sym_css_named_color_token108] = ACTIONS(64),
    [aux_sym_css_named_color_token109] = ACTIONS(64),
    [aux_sym_css_named_color_token110] = ACTIONS(64),
    [aux_sym_css_named_color_token111] = ACTIONS(64),
    [aux_sym_css_named_color_token112] = ACTIONS(64),
    [aux_sym_css_named_color_token113] = ACTIONS(64),
    [aux_sym_css_named_color_token114] = ACTIONS(64),
    [aux_sym_css_named_color_token115] = ACTIONS(64),
    [aux_sym_css_named_color_token116] = ACTIONS(64),
    [aux_sym_css_named_color_token117] = ACTIONS(64),
    [aux_sym_css_named_color_token118] = ACTIONS(64),
    [aux_sym_css_named_color_token119] = ACTIONS(64),
    [aux_sym_css_named_color_token120] = ACTIONS(64),
    [aux_sym_css_named_color_token121] = ACTIONS(64),
    [aux_sym_css_named_color_token122] = ACTIONS(64),
    [aux_sym_css_named_color_token123] = ACTIONS(64),
    [aux_sym_css_named_color_token124] = ACTIONS(64),
    [aux_sym_css_named_color_token125] = ACTIONS(64),
    [aux_sym_css_named_color_token126] = ACTIONS(64),
    [aux_sym_css_named_color_token127] = ACTIONS(64),
    [aux_sym_css_named_color_token128] = ACTIONS(64),
    [aux_sym_css_named_color_token129] = ACTIONS(64),
    [aux_sym_css_named_color_token130] = ACTIONS(64),
    [aux_sym_css_named_color_token131] = ACTIONS(64),
    [aux_sym_css_named_color_token132] = ACTIONS(64),
    [aux_sym_css_named_color_token133] = ACTIONS(64),
    [aux_sym_css_named_color_token134] = ACTIONS(64),
    [aux_sym_css_named_color_token135] = ACTIONS(64),
    [aux_sym_css_named_color_token136] = ACTIONS(64),
    [aux_sym_css_named_color_token137] = ACTIONS(64),
    [aux_sym_css_named_color_token138] = ACTIONS(64),
    [aux_sym_css_named_color_token139] = ACTIONS(64),
    [aux_sym_css_named_color_token140] = ACTIONS(64),
    [aux_sym_css_named_color_token141] = ACTIONS(64),
    [aux_sym_css_named_color_token142] = ACTIONS(64),
    [aux_sym_css_named_color_token143] = ACTIONS(64),
    [aux_sym_css_named_color_token144] = ACTIONS(64),
    [aux_sym_css_named_color_token145] = ACTIONS(66),
    [aux_sym_css_named_color_token146] = ACTIONS(64),
    [aux_sym_css_named_color_token147] = ACTIONS(66),
    [aux_sym_css_named_color_token148] = ACTIONS(64),
    [sym_css_keyword_transparent] = ACTIONS(64),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_rgb] = ACTIONS(70),
    [anon_sym_rgba] = ACTIONS(68),
    [anon_sym_hsl] = ACTIONS(70),
    [anon_sym_hsla] = ACTIONS(68),
    [sym_css_hex_color_6_digits] = ACTIONS(70),
    [sym_css_hex_color_8_digits] = ACTIONS(68),
    [sym_css_hex_color_3_digits] = ACTIONS(70),
    [sym_css_hex_color_4_digits] = ACTIONS(70),
    [aux_sym_css_named_color_token1] = ACTIONS(68),
    [aux_sym_css_named_color_token2] = ACTIONS(68),
    [aux_sym_css_named_color_token3] = ACTIONS(70),
    [aux_sym_css_named_color_token4] = ACTIONS(68),
    [aux_sym_css_named_color_token5] = ACTIONS(68),
    [aux_sym_css_named_color_token6] = ACTIONS(68),
    [aux_sym_css_named_color_token7] = ACTIONS(68),
    [aux_sym_css_named_color_token8] = ACTIONS(68),
    [aux_sym_css_named_color_token9] = ACTIONS(68),
    [aux_sym_css_named_color_token10] = ACTIONS(70),
    [aux_sym_css_named_color_token11] = ACTIONS(68),
    [aux_sym_css_named_color_token12] = ACTIONS(68),
    [aux_sym_css_named_color_token13] = ACTIONS(68),
    [aux_sym_css_named_color_token14] = ACTIONS(68),
    [aux_sym_css_named_color_token15] = ACTIONS(68),
    [aux_sym_css_named_color_token16] = ACTIONS(68),
    [aux_sym_css_named_color_token17] = ACTIONS(68),
    [aux_sym_css_named_color_token18] = ACTIONS(68),
    [aux_sym_css_named_color_token19] = ACTIONS(68),
    [aux_sym_css_named_color_token20] = ACTIONS(68),
    [aux_sym_css_named_color_token21] = ACTIONS(68),
    [aux_sym_css_named_color_token22] = ACTIONS(68),
    [aux_sym_css_named_color_token23] = ACTIONS(68),
    [aux_sym_css_named_color_token24] = ACTIONS(68),
    [aux_sym_css_named_color_token25] = ACTIONS(68),
    [aux_sym_css_named_color_token26] = ACTIONS(68),
    [aux_sym_css_named_color_token27] = ACTIONS(68),
    [aux_sym_css_named_color_token28] = ACTIONS(68),
    [aux_sym_css_named_color_token29] = ACTIONS(68),
    [aux_sym_css_named_color_token30] = ACTIONS(68),
    [aux_sym_css_named_color_token31] = ACTIONS(68),
    [aux_sym_css_named_color_token32] = ACTIONS(68),
    [aux_sym_css_named_color_token33] = ACTIONS(68),
    [aux_sym_css_named_color_token34] = ACTIONS(68),
    [aux_sym_css_named_color_token35] = ACTIONS(68),
    [aux_sym_css_named_color_token36] = ACTIONS(68),
    [aux_sym_css_named_color_token37] = ACTIONS(68),
    [aux_sym_css_named_color_token38] = ACTIONS(68),
    [aux_sym_css_named_color_token39] = ACTIONS(68),
    [aux_sym_css_named_color_token40] = ACTIONS(68),
    [aux_sym_css_named_color_token41] = ACTIONS(68),
    [aux_sym_css_named_color_token42] = ACTIONS(68),
    [aux_sym_css_named_color_token43] = ACTIONS(68),
    [aux_sym_css_named_color_token44] = ACTIONS(68),
    [aux_sym_css_named_color_token45] = ACTIONS(68),
    [aux_sym_css_named_color_token46] = ACTIONS(68),
    [aux_sym_css_named_color_token47] = ACTIONS(68),
    [aux_sym_css_named_color_token48] = ACTIONS(68),
    [aux_sym_css_named_color_token49] = ACTIONS(68),
    [aux_sym_css_named_color_token50] = ACTIONS(68),
    [aux_sym_css_named_color_token51] = ACTIONS(68),
    [aux_sym_css_named_color_token52] = ACTIONS(70),
    [aux_sym_css_named_color_token53] = ACTIONS(68),
    [aux_sym_css_named_color_token54] = ACTIONS(68),
    [aux_sym_css_named_color_token55] = ACTIONS(70),
    [aux_sym_css_named_color_token56] = ACTIONS(68),
    [aux_sym_css_named_color_token57] = ACTIONS(68),
    [aux_sym_css_named_color_token58] = ACTIONS(68),
    [aux_sym_css_named_color_token59] = ACTIONS(68),
    [aux_sym_css_named_color_token60] = ACTIONS(68),
    [aux_sym_css_named_color_token61] = ACTIONS(68),
    [aux_sym_css_named_color_token62] = ACTIONS(68),
    [aux_sym_css_named_color_token63] = ACTIONS(68),
    [aux_sym_css_named_color_token64] = ACTIONS(70),
    [aux_sym_css_named_color_token65] = ACTIONS(68),
    [aux_sym_css_named_color_token66] = ACTIONS(68),
    [aux_sym_css_named_color_token67] = ACTIONS(68),
    [aux_sym_css_named_color_token68] = ACTIONS(68),
    [aux_sym_css_named_color_token69] = ACTIONS(68),
    [aux_sym_css_named_color_token70] = ACTIONS(68),
    [aux_sym_css_named_color_token71] = ACTIONS(68),
    [aux_sym_css_named_color_token72] = ACTIONS(68),
    [aux_sym_css_named_color_token73] = ACTIONS(68),
    [aux_sym_css_named_color_token74] = ACTIONS(68),
    [aux_sym_css_named_color_token75] = ACTIONS(68),
    [aux_sym_css_named_color_token76] = ACTIONS(68),
    [aux_sym_css_named_color_token77] = ACTIONS(68),
    [aux_sym_css_named_color_token78] = ACTIONS(68),
    [aux_sym_css_named_color_token79] = ACTIONS(68),
    [aux_sym_css_named_color_token80] = ACTIONS(68),
    [aux_sym_css_named_color_token81] = ACTIONS(68),
    [aux_sym_css_named_color_token82] = ACTIONS(68),
    [aux_sym_css_named_color_token83] = ACTIONS(70),
    [aux_sym_css_named_color_token84] = ACTIONS(68),
    [aux_sym_css_named_color_token85] = ACTIONS(68),
    [aux_sym_css_named_color_token86] = ACTIONS(68),
    [aux_sym_css_named_color_token87] = ACTIONS(68),
    [aux_sym_css_named_color_token88] = ACTIONS(68),
    [aux_sym_css_named_color_token89] = ACTIONS(68),
    [aux_sym_css_named_color_token90] = ACTIONS(68),
    [aux_sym_css_named_color_token91] = ACTIONS(68),
    [aux_sym_css_named_color_token92] = ACTIONS(68),
    [aux_sym_css_named_color_token93] = ACTIONS(68),
    [aux_sym_css_named_color_token94] = ACTIONS(68),
    [aux_sym_css_named_color_token95] = ACTIONS(68),
    [aux_sym_css_named_color_token96] = ACTIONS(68),
    [aux_sym_css_named_color_token97] = ACTIONS(68),
    [aux_sym_css_named_color_token98] = ACTIONS(68),
    [aux_sym_css_named_color_token99] = ACTIONS(68),
    [aux_sym_css_named_color_token100] = ACTIONS(68),
    [aux_sym_css_named_color_token101] = ACTIONS(68),
    [aux_sym_css_named_color_token102] = ACTIONS(68),
    [aux_sym_css_named_color_token103] = ACTIONS(68),
    [aux_sym_css_named_color_token104] = ACTIONS(70),
    [aux_sym_css_named_color_token105] = ACTIONS(68),
    [aux_sym_css_named_color_token106] = ACTIONS(70),
    [aux_sym_css_named_color_token107] = ACTIONS(68),
    [aux_sym_css_named_color_token108] = ACTIONS(68),
    [aux_sym_css_named_color_token109] = ACTIONS(68),
    [aux_sym_css_named_color_token110] = ACTIONS(68),
    [aux_sym_css_named_color_token111] = ACTIONS(68),
    [aux_sym_css_named_color_token112] = ACTIONS(68),
    [aux_sym_css_named_color_token113] = ACTIONS(68),
    [aux_sym_css_named_color_token114] = ACTIONS(68),
    [aux_sym_css_named_color_token115] = ACTIONS(68),
    [aux_sym_css_named_color_token116] = ACTIONS(68),
    [aux_sym_css_named_color_token117] = ACTIONS(68),
    [aux_sym_css_named_color_token118] = ACTIONS(68),
    [aux_sym_css_named_color_token119] = ACTIONS(68),
    [aux_sym_css_named_color_token120] = ACTIONS(68),
    [aux_sym_css_named_color_token121] = ACTIONS(68),
    [aux_sym_css_named_color_token122] = ACTIONS(68),
    [aux_sym_css_named_color_token123] = ACTIONS(68),
    [aux_sym_css_named_color_token124] = ACTIONS(68),
    [aux_sym_css_named_color_token125] = ACTIONS(68),
    [aux_sym_css_named_color_token126] = ACTIONS(68),
    [aux_sym_css_named_color_token127] = ACTIONS(68),
    [aux_sym_css_named_color_token128] = ACTIONS(68),
    [aux_sym_css_named_color_token129] = ACTIONS(68),
    [aux_sym_css_named_color_token130] = ACTIONS(68),
    [aux_sym_css_named_color_token131] = ACTIONS(68),
    [aux_sym_css_named_color_token132] = ACTIONS(68),
    [aux_sym_css_named_color_token133] = ACTIONS(68),
    [aux_sym_css_named_color_token134] = ACTIONS(68),
    [aux_sym_css_named_color_token135] = ACTIONS(68),
    [aux_sym_css_named_color_token136] = ACTIONS(68),
    [aux_sym_css_named_color_token137] = ACTIONS(68),
    [aux_sym_css_named_color_token138] = ACTIONS(68),
    [aux_sym_css_named_color_token139] = ACTIONS(68),
    [aux_sym_css_named_color_token140] = ACTIONS(68),
    [aux_sym_css_named_color_token141] = ACTIONS(68),
    [aux_sym_css_named_color_token142] = ACTIONS(68),
    [aux_sym_css_named_color_token143] = ACTIONS(68),
    [aux_sym_css_named_color_token144] = ACTIONS(68),
    [aux_sym_css_named_color_token145] = ACTIONS(70),
    [aux_sym_css_named_color_token146] = ACTIONS(68),
    [aux_sym_css_named_color_token147] = ACTIONS(70),
    [aux_sym_css_named_color_token148] = ACTIONS(68),
    [sym_css_keyword_transparent] = ACTIONS(68),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_rgb] = ACTIONS(74),
    [anon_sym_rgba] = ACTIONS(72),
    [anon_sym_hsl] = ACTIONS(74),
    [anon_sym_hsla] = ACTIONS(72),
    [sym_css_hex_color_6_digits] = ACTIONS(74),
    [sym_css_hex_color_8_digits] = ACTIONS(72),
    [sym_css_hex_color_3_digits] = ACTIONS(74),
    [sym_css_hex_color_4_digits] = ACTIONS(74),
    [aux_sym_css_named_color_token1] = ACTIONS(72),
    [aux_sym_css_named_color_token2] = ACTIONS(72),
    [aux_sym_css_named_color_token3] = ACTIONS(74),
    [aux_sym_css_named_color_token4] = ACTIONS(72),
    [aux_sym_css_named_color_token5] = ACTIONS(72),
    [aux_sym_css_named_color_token6] = ACTIONS(72),
    [aux_sym_css_named_color_token7] = ACTIONS(72),
    [aux_sym_css_named_color_token8] = ACTIONS(72),
    [aux_sym_css_named_color_token9] = ACTIONS(72),
    [aux_sym_css_named_color_token10] = ACTIONS(74),
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
    [aux_sym_css_named_color_token52] = ACTIONS(74),
    [aux_sym_css_named_color_token53] = ACTIONS(72),
    [aux_sym_css_named_color_token54] = ACTIONS(72),
    [aux_sym_css_named_color_token55] = ACTIONS(74),
    [aux_sym_css_named_color_token56] = ACTIONS(72),
    [aux_sym_css_named_color_token57] = ACTIONS(72),
    [aux_sym_css_named_color_token58] = ACTIONS(72),
    [aux_sym_css_named_color_token59] = ACTIONS(72),
    [aux_sym_css_named_color_token60] = ACTIONS(72),
    [aux_sym_css_named_color_token61] = ACTIONS(72),
    [aux_sym_css_named_color_token62] = ACTIONS(72),
    [aux_sym_css_named_color_token63] = ACTIONS(72),
    [aux_sym_css_named_color_token64] = ACTIONS(74),
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
    [aux_sym_css_named_color_token83] = ACTIONS(74),
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
    [aux_sym_css_named_color_token104] = ACTIONS(74),
    [aux_sym_css_named_color_token105] = ACTIONS(72),
    [aux_sym_css_named_color_token106] = ACTIONS(74),
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
    [aux_sym_css_named_color_token145] = ACTIONS(74),
    [aux_sym_css_named_color_token146] = ACTIONS(72),
    [aux_sym_css_named_color_token147] = ACTIONS(74),
    [aux_sym_css_named_color_token148] = ACTIONS(72),
    [sym_css_keyword_transparent] = ACTIONS(72),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_rgb] = ACTIONS(78),
    [anon_sym_rgba] = ACTIONS(76),
    [anon_sym_hsl] = ACTIONS(78),
    [anon_sym_hsla] = ACTIONS(76),
    [sym_css_hex_color_6_digits] = ACTIONS(78),
    [sym_css_hex_color_8_digits] = ACTIONS(76),
    [sym_css_hex_color_3_digits] = ACTIONS(78),
    [sym_css_hex_color_4_digits] = ACTIONS(78),
    [aux_sym_css_named_color_token1] = ACTIONS(76),
    [aux_sym_css_named_color_token2] = ACTIONS(76),
    [aux_sym_css_named_color_token3] = ACTIONS(78),
    [aux_sym_css_named_color_token4] = ACTIONS(76),
    [aux_sym_css_named_color_token5] = ACTIONS(76),
    [aux_sym_css_named_color_token6] = ACTIONS(76),
    [aux_sym_css_named_color_token7] = ACTIONS(76),
    [aux_sym_css_named_color_token8] = ACTIONS(76),
    [aux_sym_css_named_color_token9] = ACTIONS(76),
    [aux_sym_css_named_color_token10] = ACTIONS(78),
    [aux_sym_css_named_color_token11] = ACTIONS(76),
    [aux_sym_css_named_color_token12] = ACTIONS(76),
    [aux_sym_css_named_color_token13] = ACTIONS(76),
    [aux_sym_css_named_color_token14] = ACTIONS(76),
    [aux_sym_css_named_color_token15] = ACTIONS(76),
    [aux_sym_css_named_color_token16] = ACTIONS(76),
    [aux_sym_css_named_color_token17] = ACTIONS(76),
    [aux_sym_css_named_color_token18] = ACTIONS(76),
    [aux_sym_css_named_color_token19] = ACTIONS(76),
    [aux_sym_css_named_color_token20] = ACTIONS(76),
    [aux_sym_css_named_color_token21] = ACTIONS(76),
    [aux_sym_css_named_color_token22] = ACTIONS(76),
    [aux_sym_css_named_color_token23] = ACTIONS(76),
    [aux_sym_css_named_color_token24] = ACTIONS(76),
    [aux_sym_css_named_color_token25] = ACTIONS(76),
    [aux_sym_css_named_color_token26] = ACTIONS(76),
    [aux_sym_css_named_color_token27] = ACTIONS(76),
    [aux_sym_css_named_color_token28] = ACTIONS(76),
    [aux_sym_css_named_color_token29] = ACTIONS(76),
    [aux_sym_css_named_color_token30] = ACTIONS(76),
    [aux_sym_css_named_color_token31] = ACTIONS(76),
    [aux_sym_css_named_color_token32] = ACTIONS(76),
    [aux_sym_css_named_color_token33] = ACTIONS(76),
    [aux_sym_css_named_color_token34] = ACTIONS(76),
    [aux_sym_css_named_color_token35] = ACTIONS(76),
    [aux_sym_css_named_color_token36] = ACTIONS(76),
    [aux_sym_css_named_color_token37] = ACTIONS(76),
    [aux_sym_css_named_color_token38] = ACTIONS(76),
    [aux_sym_css_named_color_token39] = ACTIONS(76),
    [aux_sym_css_named_color_token40] = ACTIONS(76),
    [aux_sym_css_named_color_token41] = ACTIONS(76),
    [aux_sym_css_named_color_token42] = ACTIONS(76),
    [aux_sym_css_named_color_token43] = ACTIONS(76),
    [aux_sym_css_named_color_token44] = ACTIONS(76),
    [aux_sym_css_named_color_token45] = ACTIONS(76),
    [aux_sym_css_named_color_token46] = ACTIONS(76),
    [aux_sym_css_named_color_token47] = ACTIONS(76),
    [aux_sym_css_named_color_token48] = ACTIONS(76),
    [aux_sym_css_named_color_token49] = ACTIONS(76),
    [aux_sym_css_named_color_token50] = ACTIONS(76),
    [aux_sym_css_named_color_token51] = ACTIONS(76),
    [aux_sym_css_named_color_token52] = ACTIONS(78),
    [aux_sym_css_named_color_token53] = ACTIONS(76),
    [aux_sym_css_named_color_token54] = ACTIONS(76),
    [aux_sym_css_named_color_token55] = ACTIONS(78),
    [aux_sym_css_named_color_token56] = ACTIONS(76),
    [aux_sym_css_named_color_token57] = ACTIONS(76),
    [aux_sym_css_named_color_token58] = ACTIONS(76),
    [aux_sym_css_named_color_token59] = ACTIONS(76),
    [aux_sym_css_named_color_token60] = ACTIONS(76),
    [aux_sym_css_named_color_token61] = ACTIONS(76),
    [aux_sym_css_named_color_token62] = ACTIONS(76),
    [aux_sym_css_named_color_token63] = ACTIONS(76),
    [aux_sym_css_named_color_token64] = ACTIONS(78),
    [aux_sym_css_named_color_token65] = ACTIONS(76),
    [aux_sym_css_named_color_token66] = ACTIONS(76),
    [aux_sym_css_named_color_token67] = ACTIONS(76),
    [aux_sym_css_named_color_token68] = ACTIONS(76),
    [aux_sym_css_named_color_token69] = ACTIONS(76),
    [aux_sym_css_named_color_token70] = ACTIONS(76),
    [aux_sym_css_named_color_token71] = ACTIONS(76),
    [aux_sym_css_named_color_token72] = ACTIONS(76),
    [aux_sym_css_named_color_token73] = ACTIONS(76),
    [aux_sym_css_named_color_token74] = ACTIONS(76),
    [aux_sym_css_named_color_token75] = ACTIONS(76),
    [aux_sym_css_named_color_token76] = ACTIONS(76),
    [aux_sym_css_named_color_token77] = ACTIONS(76),
    [aux_sym_css_named_color_token78] = ACTIONS(76),
    [aux_sym_css_named_color_token79] = ACTIONS(76),
    [aux_sym_css_named_color_token80] = ACTIONS(76),
    [aux_sym_css_named_color_token81] = ACTIONS(76),
    [aux_sym_css_named_color_token82] = ACTIONS(76),
    [aux_sym_css_named_color_token83] = ACTIONS(78),
    [aux_sym_css_named_color_token84] = ACTIONS(76),
    [aux_sym_css_named_color_token85] = ACTIONS(76),
    [aux_sym_css_named_color_token86] = ACTIONS(76),
    [aux_sym_css_named_color_token87] = ACTIONS(76),
    [aux_sym_css_named_color_token88] = ACTIONS(76),
    [aux_sym_css_named_color_token89] = ACTIONS(76),
    [aux_sym_css_named_color_token90] = ACTIONS(76),
    [aux_sym_css_named_color_token91] = ACTIONS(76),
    [aux_sym_css_named_color_token92] = ACTIONS(76),
    [aux_sym_css_named_color_token93] = ACTIONS(76),
    [aux_sym_css_named_color_token94] = ACTIONS(76),
    [aux_sym_css_named_color_token95] = ACTIONS(76),
    [aux_sym_css_named_color_token96] = ACTIONS(76),
    [aux_sym_css_named_color_token97] = ACTIONS(76),
    [aux_sym_css_named_color_token98] = ACTIONS(76),
    [aux_sym_css_named_color_token99] = ACTIONS(76),
    [aux_sym_css_named_color_token100] = ACTIONS(76),
    [aux_sym_css_named_color_token101] = ACTIONS(76),
    [aux_sym_css_named_color_token102] = ACTIONS(76),
    [aux_sym_css_named_color_token103] = ACTIONS(76),
    [aux_sym_css_named_color_token104] = ACTIONS(78),
    [aux_sym_css_named_color_token105] = ACTIONS(76),
    [aux_sym_css_named_color_token106] = ACTIONS(78),
    [aux_sym_css_named_color_token107] = ACTIONS(76),
    [aux_sym_css_named_color_token108] = ACTIONS(76),
    [aux_sym_css_named_color_token109] = ACTIONS(76),
    [aux_sym_css_named_color_token110] = ACTIONS(76),
    [aux_sym_css_named_color_token111] = ACTIONS(76),
    [aux_sym_css_named_color_token112] = ACTIONS(76),
    [aux_sym_css_named_color_token113] = ACTIONS(76),
    [aux_sym_css_named_color_token114] = ACTIONS(76),
    [aux_sym_css_named_color_token115] = ACTIONS(76),
    [aux_sym_css_named_color_token116] = ACTIONS(76),
    [aux_sym_css_named_color_token117] = ACTIONS(76),
    [aux_sym_css_named_color_token118] = ACTIONS(76),
    [aux_sym_css_named_color_token119] = ACTIONS(76),
    [aux_sym_css_named_color_token120] = ACTIONS(76),
    [aux_sym_css_named_color_token121] = ACTIONS(76),
    [aux_sym_css_named_color_token122] = ACTIONS(76),
    [aux_sym_css_named_color_token123] = ACTIONS(76),
    [aux_sym_css_named_color_token124] = ACTIONS(76),
    [aux_sym_css_named_color_token125] = ACTIONS(76),
    [aux_sym_css_named_color_token126] = ACTIONS(76),
    [aux_sym_css_named_color_token127] = ACTIONS(76),
    [aux_sym_css_named_color_token128] = ACTIONS(76),
    [aux_sym_css_named_color_token129] = ACTIONS(76),
    [aux_sym_css_named_color_token130] = ACTIONS(76),
    [aux_sym_css_named_color_token131] = ACTIONS(76),
    [aux_sym_css_named_color_token132] = ACTIONS(76),
    [aux_sym_css_named_color_token133] = ACTIONS(76),
    [aux_sym_css_named_color_token134] = ACTIONS(76),
    [aux_sym_css_named_color_token135] = ACTIONS(76),
    [aux_sym_css_named_color_token136] = ACTIONS(76),
    [aux_sym_css_named_color_token137] = ACTIONS(76),
    [aux_sym_css_named_color_token138] = ACTIONS(76),
    [aux_sym_css_named_color_token139] = ACTIONS(76),
    [aux_sym_css_named_color_token140] = ACTIONS(76),
    [aux_sym_css_named_color_token141] = ACTIONS(76),
    [aux_sym_css_named_color_token142] = ACTIONS(76),
    [aux_sym_css_named_color_token143] = ACTIONS(76),
    [aux_sym_css_named_color_token144] = ACTIONS(76),
    [aux_sym_css_named_color_token145] = ACTIONS(78),
    [aux_sym_css_named_color_token146] = ACTIONS(76),
    [aux_sym_css_named_color_token147] = ACTIONS(78),
    [aux_sym_css_named_color_token148] = ACTIONS(76),
    [sym_css_keyword_transparent] = ACTIONS(76),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [anon_sym_rgb] = ACTIONS(82),
    [anon_sym_rgba] = ACTIONS(80),
    [anon_sym_hsl] = ACTIONS(82),
    [anon_sym_hsla] = ACTIONS(80),
    [sym_css_hex_color_6_digits] = ACTIONS(82),
    [sym_css_hex_color_8_digits] = ACTIONS(80),
    [sym_css_hex_color_3_digits] = ACTIONS(82),
    [sym_css_hex_color_4_digits] = ACTIONS(82),
    [aux_sym_css_named_color_token1] = ACTIONS(80),
    [aux_sym_css_named_color_token2] = ACTIONS(80),
    [aux_sym_css_named_color_token3] = ACTIONS(82),
    [aux_sym_css_named_color_token4] = ACTIONS(80),
    [aux_sym_css_named_color_token5] = ACTIONS(80),
    [aux_sym_css_named_color_token6] = ACTIONS(80),
    [aux_sym_css_named_color_token7] = ACTIONS(80),
    [aux_sym_css_named_color_token8] = ACTIONS(80),
    [aux_sym_css_named_color_token9] = ACTIONS(80),
    [aux_sym_css_named_color_token10] = ACTIONS(82),
    [aux_sym_css_named_color_token11] = ACTIONS(80),
    [aux_sym_css_named_color_token12] = ACTIONS(80),
    [aux_sym_css_named_color_token13] = ACTIONS(80),
    [aux_sym_css_named_color_token14] = ACTIONS(80),
    [aux_sym_css_named_color_token15] = ACTIONS(80),
    [aux_sym_css_named_color_token16] = ACTIONS(80),
    [aux_sym_css_named_color_token17] = ACTIONS(80),
    [aux_sym_css_named_color_token18] = ACTIONS(80),
    [aux_sym_css_named_color_token19] = ACTIONS(80),
    [aux_sym_css_named_color_token20] = ACTIONS(80),
    [aux_sym_css_named_color_token21] = ACTIONS(80),
    [aux_sym_css_named_color_token22] = ACTIONS(80),
    [aux_sym_css_named_color_token23] = ACTIONS(80),
    [aux_sym_css_named_color_token24] = ACTIONS(80),
    [aux_sym_css_named_color_token25] = ACTIONS(80),
    [aux_sym_css_named_color_token26] = ACTIONS(80),
    [aux_sym_css_named_color_token27] = ACTIONS(80),
    [aux_sym_css_named_color_token28] = ACTIONS(80),
    [aux_sym_css_named_color_token29] = ACTIONS(80),
    [aux_sym_css_named_color_token30] = ACTIONS(80),
    [aux_sym_css_named_color_token31] = ACTIONS(80),
    [aux_sym_css_named_color_token32] = ACTIONS(80),
    [aux_sym_css_named_color_token33] = ACTIONS(80),
    [aux_sym_css_named_color_token34] = ACTIONS(80),
    [aux_sym_css_named_color_token35] = ACTIONS(80),
    [aux_sym_css_named_color_token36] = ACTIONS(80),
    [aux_sym_css_named_color_token37] = ACTIONS(80),
    [aux_sym_css_named_color_token38] = ACTIONS(80),
    [aux_sym_css_named_color_token39] = ACTIONS(80),
    [aux_sym_css_named_color_token40] = ACTIONS(80),
    [aux_sym_css_named_color_token41] = ACTIONS(80),
    [aux_sym_css_named_color_token42] = ACTIONS(80),
    [aux_sym_css_named_color_token43] = ACTIONS(80),
    [aux_sym_css_named_color_token44] = ACTIONS(80),
    [aux_sym_css_named_color_token45] = ACTIONS(80),
    [aux_sym_css_named_color_token46] = ACTIONS(80),
    [aux_sym_css_named_color_token47] = ACTIONS(80),
    [aux_sym_css_named_color_token48] = ACTIONS(80),
    [aux_sym_css_named_color_token49] = ACTIONS(80),
    [aux_sym_css_named_color_token50] = ACTIONS(80),
    [aux_sym_css_named_color_token51] = ACTIONS(80),
    [aux_sym_css_named_color_token52] = ACTIONS(82),
    [aux_sym_css_named_color_token53] = ACTIONS(80),
    [aux_sym_css_named_color_token54] = ACTIONS(80),
    [aux_sym_css_named_color_token55] = ACTIONS(82),
    [aux_sym_css_named_color_token56] = ACTIONS(80),
    [aux_sym_css_named_color_token57] = ACTIONS(80),
    [aux_sym_css_named_color_token58] = ACTIONS(80),
    [aux_sym_css_named_color_token59] = ACTIONS(80),
    [aux_sym_css_named_color_token60] = ACTIONS(80),
    [aux_sym_css_named_color_token61] = ACTIONS(80),
    [aux_sym_css_named_color_token62] = ACTIONS(80),
    [aux_sym_css_named_color_token63] = ACTIONS(80),
    [aux_sym_css_named_color_token64] = ACTIONS(82),
    [aux_sym_css_named_color_token65] = ACTIONS(80),
    [aux_sym_css_named_color_token66] = ACTIONS(80),
    [aux_sym_css_named_color_token67] = ACTIONS(80),
    [aux_sym_css_named_color_token68] = ACTIONS(80),
    [aux_sym_css_named_color_token69] = ACTIONS(80),
    [aux_sym_css_named_color_token70] = ACTIONS(80),
    [aux_sym_css_named_color_token71] = ACTIONS(80),
    [aux_sym_css_named_color_token72] = ACTIONS(80),
    [aux_sym_css_named_color_token73] = ACTIONS(80),
    [aux_sym_css_named_color_token74] = ACTIONS(80),
    [aux_sym_css_named_color_token75] = ACTIONS(80),
    [aux_sym_css_named_color_token76] = ACTIONS(80),
    [aux_sym_css_named_color_token77] = ACTIONS(80),
    [aux_sym_css_named_color_token78] = ACTIONS(80),
    [aux_sym_css_named_color_token79] = ACTIONS(80),
    [aux_sym_css_named_color_token80] = ACTIONS(80),
    [aux_sym_css_named_color_token81] = ACTIONS(80),
    [aux_sym_css_named_color_token82] = ACTIONS(80),
    [aux_sym_css_named_color_token83] = ACTIONS(82),
    [aux_sym_css_named_color_token84] = ACTIONS(80),
    [aux_sym_css_named_color_token85] = ACTIONS(80),
    [aux_sym_css_named_color_token86] = ACTIONS(80),
    [aux_sym_css_named_color_token87] = ACTIONS(80),
    [aux_sym_css_named_color_token88] = ACTIONS(80),
    [aux_sym_css_named_color_token89] = ACTIONS(80),
    [aux_sym_css_named_color_token90] = ACTIONS(80),
    [aux_sym_css_named_color_token91] = ACTIONS(80),
    [aux_sym_css_named_color_token92] = ACTIONS(80),
    [aux_sym_css_named_color_token93] = ACTIONS(80),
    [aux_sym_css_named_color_token94] = ACTIONS(80),
    [aux_sym_css_named_color_token95] = ACTIONS(80),
    [aux_sym_css_named_color_token96] = ACTIONS(80),
    [aux_sym_css_named_color_token97] = ACTIONS(80),
    [aux_sym_css_named_color_token98] = ACTIONS(80),
    [aux_sym_css_named_color_token99] = ACTIONS(80),
    [aux_sym_css_named_color_token100] = ACTIONS(80),
    [aux_sym_css_named_color_token101] = ACTIONS(80),
    [aux_sym_css_named_color_token102] = ACTIONS(80),
    [aux_sym_css_named_color_token103] = ACTIONS(80),
    [aux_sym_css_named_color_token104] = ACTIONS(82),
    [aux_sym_css_named_color_token105] = ACTIONS(80),
    [aux_sym_css_named_color_token106] = ACTIONS(82),
    [aux_sym_css_named_color_token107] = ACTIONS(80),
    [aux_sym_css_named_color_token108] = ACTIONS(80),
    [aux_sym_css_named_color_token109] = ACTIONS(80),
    [aux_sym_css_named_color_token110] = ACTIONS(80),
    [aux_sym_css_named_color_token111] = ACTIONS(80),
    [aux_sym_css_named_color_token112] = ACTIONS(80),
    [aux_sym_css_named_color_token113] = ACTIONS(80),
    [aux_sym_css_named_color_token114] = ACTIONS(80),
    [aux_sym_css_named_color_token115] = ACTIONS(80),
    [aux_sym_css_named_color_token116] = ACTIONS(80),
    [aux_sym_css_named_color_token117] = ACTIONS(80),
    [aux_sym_css_named_color_token118] = ACTIONS(80),
    [aux_sym_css_named_color_token119] = ACTIONS(80),
    [aux_sym_css_named_color_token120] = ACTIONS(80),
    [aux_sym_css_named_color_token121] = ACTIONS(80),
    [aux_sym_css_named_color_token122] = ACTIONS(80),
    [aux_sym_css_named_color_token123] = ACTIONS(80),
    [aux_sym_css_named_color_token124] = ACTIONS(80),
    [aux_sym_css_named_color_token125] = ACTIONS(80),
    [aux_sym_css_named_color_token126] = ACTIONS(80),
    [aux_sym_css_named_color_token127] = ACTIONS(80),
    [aux_sym_css_named_color_token128] = ACTIONS(80),
    [aux_sym_css_named_color_token129] = ACTIONS(80),
    [aux_sym_css_named_color_token130] = ACTIONS(80),
    [aux_sym_css_named_color_token131] = ACTIONS(80),
    [aux_sym_css_named_color_token132] = ACTIONS(80),
    [aux_sym_css_named_color_token133] = ACTIONS(80),
    [aux_sym_css_named_color_token134] = ACTIONS(80),
    [aux_sym_css_named_color_token135] = ACTIONS(80),
    [aux_sym_css_named_color_token136] = ACTIONS(80),
    [aux_sym_css_named_color_token137] = ACTIONS(80),
    [aux_sym_css_named_color_token138] = ACTIONS(80),
    [aux_sym_css_named_color_token139] = ACTIONS(80),
    [aux_sym_css_named_color_token140] = ACTIONS(80),
    [aux_sym_css_named_color_token141] = ACTIONS(80),
    [aux_sym_css_named_color_token142] = ACTIONS(80),
    [aux_sym_css_named_color_token143] = ACTIONS(80),
    [aux_sym_css_named_color_token144] = ACTIONS(80),
    [aux_sym_css_named_color_token145] = ACTIONS(82),
    [aux_sym_css_named_color_token146] = ACTIONS(80),
    [aux_sym_css_named_color_token147] = ACTIONS(82),
    [aux_sym_css_named_color_token148] = ACTIONS(80),
    [sym_css_keyword_transparent] = ACTIONS(80),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [anon_sym_rgb] = ACTIONS(86),
    [anon_sym_rgba] = ACTIONS(84),
    [anon_sym_hsl] = ACTIONS(86),
    [anon_sym_hsla] = ACTIONS(84),
    [sym_css_hex_color_6_digits] = ACTIONS(86),
    [sym_css_hex_color_8_digits] = ACTIONS(84),
    [sym_css_hex_color_3_digits] = ACTIONS(86),
    [sym_css_hex_color_4_digits] = ACTIONS(86),
    [aux_sym_css_named_color_token1] = ACTIONS(84),
    [aux_sym_css_named_color_token2] = ACTIONS(84),
    [aux_sym_css_named_color_token3] = ACTIONS(86),
    [aux_sym_css_named_color_token4] = ACTIONS(84),
    [aux_sym_css_named_color_token5] = ACTIONS(84),
    [aux_sym_css_named_color_token6] = ACTIONS(84),
    [aux_sym_css_named_color_token7] = ACTIONS(84),
    [aux_sym_css_named_color_token8] = ACTIONS(84),
    [aux_sym_css_named_color_token9] = ACTIONS(84),
    [aux_sym_css_named_color_token10] = ACTIONS(86),
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
    [aux_sym_css_named_color_token52] = ACTIONS(86),
    [aux_sym_css_named_color_token53] = ACTIONS(84),
    [aux_sym_css_named_color_token54] = ACTIONS(84),
    [aux_sym_css_named_color_token55] = ACTIONS(86),
    [aux_sym_css_named_color_token56] = ACTIONS(84),
    [aux_sym_css_named_color_token57] = ACTIONS(84),
    [aux_sym_css_named_color_token58] = ACTIONS(84),
    [aux_sym_css_named_color_token59] = ACTIONS(84),
    [aux_sym_css_named_color_token60] = ACTIONS(84),
    [aux_sym_css_named_color_token61] = ACTIONS(84),
    [aux_sym_css_named_color_token62] = ACTIONS(84),
    [aux_sym_css_named_color_token63] = ACTIONS(84),
    [aux_sym_css_named_color_token64] = ACTIONS(86),
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
    [aux_sym_css_named_color_token83] = ACTIONS(86),
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
    [aux_sym_css_named_color_token104] = ACTIONS(86),
    [aux_sym_css_named_color_token105] = ACTIONS(84),
    [aux_sym_css_named_color_token106] = ACTIONS(86),
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
    [aux_sym_css_named_color_token145] = ACTIONS(86),
    [aux_sym_css_named_color_token146] = ACTIONS(84),
    [aux_sym_css_named_color_token147] = ACTIONS(86),
    [aux_sym_css_named_color_token148] = ACTIONS(84),
    [sym_css_keyword_transparent] = ACTIONS(84),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_rgb] = ACTIONS(90),
    [anon_sym_rgba] = ACTIONS(88),
    [anon_sym_hsl] = ACTIONS(90),
    [anon_sym_hsla] = ACTIONS(88),
    [sym_css_hex_color_6_digits] = ACTIONS(90),
    [sym_css_hex_color_8_digits] = ACTIONS(88),
    [sym_css_hex_color_3_digits] = ACTIONS(90),
    [sym_css_hex_color_4_digits] = ACTIONS(90),
    [aux_sym_css_named_color_token1] = ACTIONS(88),
    [aux_sym_css_named_color_token2] = ACTIONS(88),
    [aux_sym_css_named_color_token3] = ACTIONS(90),
    [aux_sym_css_named_color_token4] = ACTIONS(88),
    [aux_sym_css_named_color_token5] = ACTIONS(88),
    [aux_sym_css_named_color_token6] = ACTIONS(88),
    [aux_sym_css_named_color_token7] = ACTIONS(88),
    [aux_sym_css_named_color_token8] = ACTIONS(88),
    [aux_sym_css_named_color_token9] = ACTIONS(88),
    [aux_sym_css_named_color_token10] = ACTIONS(90),
    [aux_sym_css_named_color_token11] = ACTIONS(88),
    [aux_sym_css_named_color_token12] = ACTIONS(88),
    [aux_sym_css_named_color_token13] = ACTIONS(88),
    [aux_sym_css_named_color_token14] = ACTIONS(88),
    [aux_sym_css_named_color_token15] = ACTIONS(88),
    [aux_sym_css_named_color_token16] = ACTIONS(88),
    [aux_sym_css_named_color_token17] = ACTIONS(88),
    [aux_sym_css_named_color_token18] = ACTIONS(88),
    [aux_sym_css_named_color_token19] = ACTIONS(88),
    [aux_sym_css_named_color_token20] = ACTIONS(88),
    [aux_sym_css_named_color_token21] = ACTIONS(88),
    [aux_sym_css_named_color_token22] = ACTIONS(88),
    [aux_sym_css_named_color_token23] = ACTIONS(88),
    [aux_sym_css_named_color_token24] = ACTIONS(88),
    [aux_sym_css_named_color_token25] = ACTIONS(88),
    [aux_sym_css_named_color_token26] = ACTIONS(88),
    [aux_sym_css_named_color_token27] = ACTIONS(88),
    [aux_sym_css_named_color_token28] = ACTIONS(88),
    [aux_sym_css_named_color_token29] = ACTIONS(88),
    [aux_sym_css_named_color_token30] = ACTIONS(88),
    [aux_sym_css_named_color_token31] = ACTIONS(88),
    [aux_sym_css_named_color_token32] = ACTIONS(88),
    [aux_sym_css_named_color_token33] = ACTIONS(88),
    [aux_sym_css_named_color_token34] = ACTIONS(88),
    [aux_sym_css_named_color_token35] = ACTIONS(88),
    [aux_sym_css_named_color_token36] = ACTIONS(88),
    [aux_sym_css_named_color_token37] = ACTIONS(88),
    [aux_sym_css_named_color_token38] = ACTIONS(88),
    [aux_sym_css_named_color_token39] = ACTIONS(88),
    [aux_sym_css_named_color_token40] = ACTIONS(88),
    [aux_sym_css_named_color_token41] = ACTIONS(88),
    [aux_sym_css_named_color_token42] = ACTIONS(88),
    [aux_sym_css_named_color_token43] = ACTIONS(88),
    [aux_sym_css_named_color_token44] = ACTIONS(88),
    [aux_sym_css_named_color_token45] = ACTIONS(88),
    [aux_sym_css_named_color_token46] = ACTIONS(88),
    [aux_sym_css_named_color_token47] = ACTIONS(88),
    [aux_sym_css_named_color_token48] = ACTIONS(88),
    [aux_sym_css_named_color_token49] = ACTIONS(88),
    [aux_sym_css_named_color_token50] = ACTIONS(88),
    [aux_sym_css_named_color_token51] = ACTIONS(88),
    [aux_sym_css_named_color_token52] = ACTIONS(90),
    [aux_sym_css_named_color_token53] = ACTIONS(88),
    [aux_sym_css_named_color_token54] = ACTIONS(88),
    [aux_sym_css_named_color_token55] = ACTIONS(90),
    [aux_sym_css_named_color_token56] = ACTIONS(88),
    [aux_sym_css_named_color_token57] = ACTIONS(88),
    [aux_sym_css_named_color_token58] = ACTIONS(88),
    [aux_sym_css_named_color_token59] = ACTIONS(88),
    [aux_sym_css_named_color_token60] = ACTIONS(88),
    [aux_sym_css_named_color_token61] = ACTIONS(88),
    [aux_sym_css_named_color_token62] = ACTIONS(88),
    [aux_sym_css_named_color_token63] = ACTIONS(88),
    [aux_sym_css_named_color_token64] = ACTIONS(90),
    [aux_sym_css_named_color_token65] = ACTIONS(88),
    [aux_sym_css_named_color_token66] = ACTIONS(88),
    [aux_sym_css_named_color_token67] = ACTIONS(88),
    [aux_sym_css_named_color_token68] = ACTIONS(88),
    [aux_sym_css_named_color_token69] = ACTIONS(88),
    [aux_sym_css_named_color_token70] = ACTIONS(88),
    [aux_sym_css_named_color_token71] = ACTIONS(88),
    [aux_sym_css_named_color_token72] = ACTIONS(88),
    [aux_sym_css_named_color_token73] = ACTIONS(88),
    [aux_sym_css_named_color_token74] = ACTIONS(88),
    [aux_sym_css_named_color_token75] = ACTIONS(88),
    [aux_sym_css_named_color_token76] = ACTIONS(88),
    [aux_sym_css_named_color_token77] = ACTIONS(88),
    [aux_sym_css_named_color_token78] = ACTIONS(88),
    [aux_sym_css_named_color_token79] = ACTIONS(88),
    [aux_sym_css_named_color_token80] = ACTIONS(88),
    [aux_sym_css_named_color_token81] = ACTIONS(88),
    [aux_sym_css_named_color_token82] = ACTIONS(88),
    [aux_sym_css_named_color_token83] = ACTIONS(90),
    [aux_sym_css_named_color_token84] = ACTIONS(88),
    [aux_sym_css_named_color_token85] = ACTIONS(88),
    [aux_sym_css_named_color_token86] = ACTIONS(88),
    [aux_sym_css_named_color_token87] = ACTIONS(88),
    [aux_sym_css_named_color_token88] = ACTIONS(88),
    [aux_sym_css_named_color_token89] = ACTIONS(88),
    [aux_sym_css_named_color_token90] = ACTIONS(88),
    [aux_sym_css_named_color_token91] = ACTIONS(88),
    [aux_sym_css_named_color_token92] = ACTIONS(88),
    [aux_sym_css_named_color_token93] = ACTIONS(88),
    [aux_sym_css_named_color_token94] = ACTIONS(88),
    [aux_sym_css_named_color_token95] = ACTIONS(88),
    [aux_sym_css_named_color_token96] = ACTIONS(88),
    [aux_sym_css_named_color_token97] = ACTIONS(88),
    [aux_sym_css_named_color_token98] = ACTIONS(88),
    [aux_sym_css_named_color_token99] = ACTIONS(88),
    [aux_sym_css_named_color_token100] = ACTIONS(88),
    [aux_sym_css_named_color_token101] = ACTIONS(88),
    [aux_sym_css_named_color_token102] = ACTIONS(88),
    [aux_sym_css_named_color_token103] = ACTIONS(88),
    [aux_sym_css_named_color_token104] = ACTIONS(90),
    [aux_sym_css_named_color_token105] = ACTIONS(88),
    [aux_sym_css_named_color_token106] = ACTIONS(90),
    [aux_sym_css_named_color_token107] = ACTIONS(88),
    [aux_sym_css_named_color_token108] = ACTIONS(88),
    [aux_sym_css_named_color_token109] = ACTIONS(88),
    [aux_sym_css_named_color_token110] = ACTIONS(88),
    [aux_sym_css_named_color_token111] = ACTIONS(88),
    [aux_sym_css_named_color_token112] = ACTIONS(88),
    [aux_sym_css_named_color_token113] = ACTIONS(88),
    [aux_sym_css_named_color_token114] = ACTIONS(88),
    [aux_sym_css_named_color_token115] = ACTIONS(88),
    [aux_sym_css_named_color_token116] = ACTIONS(88),
    [aux_sym_css_named_color_token117] = ACTIONS(88),
    [aux_sym_css_named_color_token118] = ACTIONS(88),
    [aux_sym_css_named_color_token119] = ACTIONS(88),
    [aux_sym_css_named_color_token120] = ACTIONS(88),
    [aux_sym_css_named_color_token121] = ACTIONS(88),
    [aux_sym_css_named_color_token122] = ACTIONS(88),
    [aux_sym_css_named_color_token123] = ACTIONS(88),
    [aux_sym_css_named_color_token124] = ACTIONS(88),
    [aux_sym_css_named_color_token125] = ACTIONS(88),
    [aux_sym_css_named_color_token126] = ACTIONS(88),
    [aux_sym_css_named_color_token127] = ACTIONS(88),
    [aux_sym_css_named_color_token128] = ACTIONS(88),
    [aux_sym_css_named_color_token129] = ACTIONS(88),
    [aux_sym_css_named_color_token130] = ACTIONS(88),
    [aux_sym_css_named_color_token131] = ACTIONS(88),
    [aux_sym_css_named_color_token132] = ACTIONS(88),
    [aux_sym_css_named_color_token133] = ACTIONS(88),
    [aux_sym_css_named_color_token134] = ACTIONS(88),
    [aux_sym_css_named_color_token135] = ACTIONS(88),
    [aux_sym_css_named_color_token136] = ACTIONS(88),
    [aux_sym_css_named_color_token137] = ACTIONS(88),
    [aux_sym_css_named_color_token138] = ACTIONS(88),
    [aux_sym_css_named_color_token139] = ACTIONS(88),
    [aux_sym_css_named_color_token140] = ACTIONS(88),
    [aux_sym_css_named_color_token141] = ACTIONS(88),
    [aux_sym_css_named_color_token142] = ACTIONS(88),
    [aux_sym_css_named_color_token143] = ACTIONS(88),
    [aux_sym_css_named_color_token144] = ACTIONS(88),
    [aux_sym_css_named_color_token145] = ACTIONS(90),
    [aux_sym_css_named_color_token146] = ACTIONS(88),
    [aux_sym_css_named_color_token147] = ACTIONS(90),
    [aux_sym_css_named_color_token148] = ACTIONS(88),
    [sym_css_keyword_transparent] = ACTIONS(88),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [anon_sym_rgb] = ACTIONS(94),
    [anon_sym_rgba] = ACTIONS(92),
    [anon_sym_hsl] = ACTIONS(94),
    [anon_sym_hsla] = ACTIONS(92),
    [sym_css_hex_color_6_digits] = ACTIONS(94),
    [sym_css_hex_color_8_digits] = ACTIONS(92),
    [sym_css_hex_color_3_digits] = ACTIONS(94),
    [sym_css_hex_color_4_digits] = ACTIONS(94),
    [aux_sym_css_named_color_token1] = ACTIONS(92),
    [aux_sym_css_named_color_token2] = ACTIONS(92),
    [aux_sym_css_named_color_token3] = ACTIONS(94),
    [aux_sym_css_named_color_token4] = ACTIONS(92),
    [aux_sym_css_named_color_token5] = ACTIONS(92),
    [aux_sym_css_named_color_token6] = ACTIONS(92),
    [aux_sym_css_named_color_token7] = ACTIONS(92),
    [aux_sym_css_named_color_token8] = ACTIONS(92),
    [aux_sym_css_named_color_token9] = ACTIONS(92),
    [aux_sym_css_named_color_token10] = ACTIONS(94),
    [aux_sym_css_named_color_token11] = ACTIONS(92),
    [aux_sym_css_named_color_token12] = ACTIONS(92),
    [aux_sym_css_named_color_token13] = ACTIONS(92),
    [aux_sym_css_named_color_token14] = ACTIONS(92),
    [aux_sym_css_named_color_token15] = ACTIONS(92),
    [aux_sym_css_named_color_token16] = ACTIONS(92),
    [aux_sym_css_named_color_token17] = ACTIONS(92),
    [aux_sym_css_named_color_token18] = ACTIONS(92),
    [aux_sym_css_named_color_token19] = ACTIONS(92),
    [aux_sym_css_named_color_token20] = ACTIONS(92),
    [aux_sym_css_named_color_token21] = ACTIONS(92),
    [aux_sym_css_named_color_token22] = ACTIONS(92),
    [aux_sym_css_named_color_token23] = ACTIONS(92),
    [aux_sym_css_named_color_token24] = ACTIONS(92),
    [aux_sym_css_named_color_token25] = ACTIONS(92),
    [aux_sym_css_named_color_token26] = ACTIONS(92),
    [aux_sym_css_named_color_token27] = ACTIONS(92),
    [aux_sym_css_named_color_token28] = ACTIONS(92),
    [aux_sym_css_named_color_token29] = ACTIONS(92),
    [aux_sym_css_named_color_token30] = ACTIONS(92),
    [aux_sym_css_named_color_token31] = ACTIONS(92),
    [aux_sym_css_named_color_token32] = ACTIONS(92),
    [aux_sym_css_named_color_token33] = ACTIONS(92),
    [aux_sym_css_named_color_token34] = ACTIONS(92),
    [aux_sym_css_named_color_token35] = ACTIONS(92),
    [aux_sym_css_named_color_token36] = ACTIONS(92),
    [aux_sym_css_named_color_token37] = ACTIONS(92),
    [aux_sym_css_named_color_token38] = ACTIONS(92),
    [aux_sym_css_named_color_token39] = ACTIONS(92),
    [aux_sym_css_named_color_token40] = ACTIONS(92),
    [aux_sym_css_named_color_token41] = ACTIONS(92),
    [aux_sym_css_named_color_token42] = ACTIONS(92),
    [aux_sym_css_named_color_token43] = ACTIONS(92),
    [aux_sym_css_named_color_token44] = ACTIONS(92),
    [aux_sym_css_named_color_token45] = ACTIONS(92),
    [aux_sym_css_named_color_token46] = ACTIONS(92),
    [aux_sym_css_named_color_token47] = ACTIONS(92),
    [aux_sym_css_named_color_token48] = ACTIONS(92),
    [aux_sym_css_named_color_token49] = ACTIONS(92),
    [aux_sym_css_named_color_token50] = ACTIONS(92),
    [aux_sym_css_named_color_token51] = ACTIONS(92),
    [aux_sym_css_named_color_token52] = ACTIONS(94),
    [aux_sym_css_named_color_token53] = ACTIONS(92),
    [aux_sym_css_named_color_token54] = ACTIONS(92),
    [aux_sym_css_named_color_token55] = ACTIONS(94),
    [aux_sym_css_named_color_token56] = ACTIONS(92),
    [aux_sym_css_named_color_token57] = ACTIONS(92),
    [aux_sym_css_named_color_token58] = ACTIONS(92),
    [aux_sym_css_named_color_token59] = ACTIONS(92),
    [aux_sym_css_named_color_token60] = ACTIONS(92),
    [aux_sym_css_named_color_token61] = ACTIONS(92),
    [aux_sym_css_named_color_token62] = ACTIONS(92),
    [aux_sym_css_named_color_token63] = ACTIONS(92),
    [aux_sym_css_named_color_token64] = ACTIONS(94),
    [aux_sym_css_named_color_token65] = ACTIONS(92),
    [aux_sym_css_named_color_token66] = ACTIONS(92),
    [aux_sym_css_named_color_token67] = ACTIONS(92),
    [aux_sym_css_named_color_token68] = ACTIONS(92),
    [aux_sym_css_named_color_token69] = ACTIONS(92),
    [aux_sym_css_named_color_token70] = ACTIONS(92),
    [aux_sym_css_named_color_token71] = ACTIONS(92),
    [aux_sym_css_named_color_token72] = ACTIONS(92),
    [aux_sym_css_named_color_token73] = ACTIONS(92),
    [aux_sym_css_named_color_token74] = ACTIONS(92),
    [aux_sym_css_named_color_token75] = ACTIONS(92),
    [aux_sym_css_named_color_token76] = ACTIONS(92),
    [aux_sym_css_named_color_token77] = ACTIONS(92),
    [aux_sym_css_named_color_token78] = ACTIONS(92),
    [aux_sym_css_named_color_token79] = ACTIONS(92),
    [aux_sym_css_named_color_token80] = ACTIONS(92),
    [aux_sym_css_named_color_token81] = ACTIONS(92),
    [aux_sym_css_named_color_token82] = ACTIONS(92),
    [aux_sym_css_named_color_token83] = ACTIONS(94),
    [aux_sym_css_named_color_token84] = ACTIONS(92),
    [aux_sym_css_named_color_token85] = ACTIONS(92),
    [aux_sym_css_named_color_token86] = ACTIONS(92),
    [aux_sym_css_named_color_token87] = ACTIONS(92),
    [aux_sym_css_named_color_token88] = ACTIONS(92),
    [aux_sym_css_named_color_token89] = ACTIONS(92),
    [aux_sym_css_named_color_token90] = ACTIONS(92),
    [aux_sym_css_named_color_token91] = ACTIONS(92),
    [aux_sym_css_named_color_token92] = ACTIONS(92),
    [aux_sym_css_named_color_token93] = ACTIONS(92),
    [aux_sym_css_named_color_token94] = ACTIONS(92),
    [aux_sym_css_named_color_token95] = ACTIONS(92),
    [aux_sym_css_named_color_token96] = ACTIONS(92),
    [aux_sym_css_named_color_token97] = ACTIONS(92),
    [aux_sym_css_named_color_token98] = ACTIONS(92),
    [aux_sym_css_named_color_token99] = ACTIONS(92),
    [aux_sym_css_named_color_token100] = ACTIONS(92),
    [aux_sym_css_named_color_token101] = ACTIONS(92),
    [aux_sym_css_named_color_token102] = ACTIONS(92),
    [aux_sym_css_named_color_token103] = ACTIONS(92),
    [aux_sym_css_named_color_token104] = ACTIONS(94),
    [aux_sym_css_named_color_token105] = ACTIONS(92),
    [aux_sym_css_named_color_token106] = ACTIONS(94),
    [aux_sym_css_named_color_token107] = ACTIONS(92),
    [aux_sym_css_named_color_token108] = ACTIONS(92),
    [aux_sym_css_named_color_token109] = ACTIONS(92),
    [aux_sym_css_named_color_token110] = ACTIONS(92),
    [aux_sym_css_named_color_token111] = ACTIONS(92),
    [aux_sym_css_named_color_token112] = ACTIONS(92),
    [aux_sym_css_named_color_token113] = ACTIONS(92),
    [aux_sym_css_named_color_token114] = ACTIONS(92),
    [aux_sym_css_named_color_token115] = ACTIONS(92),
    [aux_sym_css_named_color_token116] = ACTIONS(92),
    [aux_sym_css_named_color_token117] = ACTIONS(92),
    [aux_sym_css_named_color_token118] = ACTIONS(92),
    [aux_sym_css_named_color_token119] = ACTIONS(92),
    [aux_sym_css_named_color_token120] = ACTIONS(92),
    [aux_sym_css_named_color_token121] = ACTIONS(92),
    [aux_sym_css_named_color_token122] = ACTIONS(92),
    [aux_sym_css_named_color_token123] = ACTIONS(92),
    [aux_sym_css_named_color_token124] = ACTIONS(92),
    [aux_sym_css_named_color_token125] = ACTIONS(92),
    [aux_sym_css_named_color_token126] = ACTIONS(92),
    [aux_sym_css_named_color_token127] = ACTIONS(92),
    [aux_sym_css_named_color_token128] = ACTIONS(92),
    [aux_sym_css_named_color_token129] = ACTIONS(92),
    [aux_sym_css_named_color_token130] = ACTIONS(92),
    [aux_sym_css_named_color_token131] = ACTIONS(92),
    [aux_sym_css_named_color_token132] = ACTIONS(92),
    [aux_sym_css_named_color_token133] = ACTIONS(92),
    [aux_sym_css_named_color_token134] = ACTIONS(92),
    [aux_sym_css_named_color_token135] = ACTIONS(92),
    [aux_sym_css_named_color_token136] = ACTIONS(92),
    [aux_sym_css_named_color_token137] = ACTIONS(92),
    [aux_sym_css_named_color_token138] = ACTIONS(92),
    [aux_sym_css_named_color_token139] = ACTIONS(92),
    [aux_sym_css_named_color_token140] = ACTIONS(92),
    [aux_sym_css_named_color_token141] = ACTIONS(92),
    [aux_sym_css_named_color_token142] = ACTIONS(92),
    [aux_sym_css_named_color_token143] = ACTIONS(92),
    [aux_sym_css_named_color_token144] = ACTIONS(92),
    [aux_sym_css_named_color_token145] = ACTIONS(94),
    [aux_sym_css_named_color_token146] = ACTIONS(92),
    [aux_sym_css_named_color_token147] = ACTIONS(94),
    [aux_sym_css_named_color_token148] = ACTIONS(92),
    [sym_css_keyword_transparent] = ACTIONS(92),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [anon_sym_rgb] = ACTIONS(98),
    [anon_sym_rgba] = ACTIONS(96),
    [anon_sym_hsl] = ACTIONS(98),
    [anon_sym_hsla] = ACTIONS(96),
    [sym_css_hex_color_6_digits] = ACTIONS(98),
    [sym_css_hex_color_8_digits] = ACTIONS(96),
    [sym_css_hex_color_3_digits] = ACTIONS(98),
    [sym_css_hex_color_4_digits] = ACTIONS(98),
    [aux_sym_css_named_color_token1] = ACTIONS(96),
    [aux_sym_css_named_color_token2] = ACTIONS(96),
    [aux_sym_css_named_color_token3] = ACTIONS(98),
    [aux_sym_css_named_color_token4] = ACTIONS(96),
    [aux_sym_css_named_color_token5] = ACTIONS(96),
    [aux_sym_css_named_color_token6] = ACTIONS(96),
    [aux_sym_css_named_color_token7] = ACTIONS(96),
    [aux_sym_css_named_color_token8] = ACTIONS(96),
    [aux_sym_css_named_color_token9] = ACTIONS(96),
    [aux_sym_css_named_color_token10] = ACTIONS(98),
    [aux_sym_css_named_color_token11] = ACTIONS(96),
    [aux_sym_css_named_color_token12] = ACTIONS(96),
    [aux_sym_css_named_color_token13] = ACTIONS(96),
    [aux_sym_css_named_color_token14] = ACTIONS(96),
    [aux_sym_css_named_color_token15] = ACTIONS(96),
    [aux_sym_css_named_color_token16] = ACTIONS(96),
    [aux_sym_css_named_color_token17] = ACTIONS(96),
    [aux_sym_css_named_color_token18] = ACTIONS(96),
    [aux_sym_css_named_color_token19] = ACTIONS(96),
    [aux_sym_css_named_color_token20] = ACTIONS(96),
    [aux_sym_css_named_color_token21] = ACTIONS(96),
    [aux_sym_css_named_color_token22] = ACTIONS(96),
    [aux_sym_css_named_color_token23] = ACTIONS(96),
    [aux_sym_css_named_color_token24] = ACTIONS(96),
    [aux_sym_css_named_color_token25] = ACTIONS(96),
    [aux_sym_css_named_color_token26] = ACTIONS(96),
    [aux_sym_css_named_color_token27] = ACTIONS(96),
    [aux_sym_css_named_color_token28] = ACTIONS(96),
    [aux_sym_css_named_color_token29] = ACTIONS(96),
    [aux_sym_css_named_color_token30] = ACTIONS(96),
    [aux_sym_css_named_color_token31] = ACTIONS(96),
    [aux_sym_css_named_color_token32] = ACTIONS(96),
    [aux_sym_css_named_color_token33] = ACTIONS(96),
    [aux_sym_css_named_color_token34] = ACTIONS(96),
    [aux_sym_css_named_color_token35] = ACTIONS(96),
    [aux_sym_css_named_color_token36] = ACTIONS(96),
    [aux_sym_css_named_color_token37] = ACTIONS(96),
    [aux_sym_css_named_color_token38] = ACTIONS(96),
    [aux_sym_css_named_color_token39] = ACTIONS(96),
    [aux_sym_css_named_color_token40] = ACTIONS(96),
    [aux_sym_css_named_color_token41] = ACTIONS(96),
    [aux_sym_css_named_color_token42] = ACTIONS(96),
    [aux_sym_css_named_color_token43] = ACTIONS(96),
    [aux_sym_css_named_color_token44] = ACTIONS(96),
    [aux_sym_css_named_color_token45] = ACTIONS(96),
    [aux_sym_css_named_color_token46] = ACTIONS(96),
    [aux_sym_css_named_color_token47] = ACTIONS(96),
    [aux_sym_css_named_color_token48] = ACTIONS(96),
    [aux_sym_css_named_color_token49] = ACTIONS(96),
    [aux_sym_css_named_color_token50] = ACTIONS(96),
    [aux_sym_css_named_color_token51] = ACTIONS(96),
    [aux_sym_css_named_color_token52] = ACTIONS(98),
    [aux_sym_css_named_color_token53] = ACTIONS(96),
    [aux_sym_css_named_color_token54] = ACTIONS(96),
    [aux_sym_css_named_color_token55] = ACTIONS(98),
    [aux_sym_css_named_color_token56] = ACTIONS(96),
    [aux_sym_css_named_color_token57] = ACTIONS(96),
    [aux_sym_css_named_color_token58] = ACTIONS(96),
    [aux_sym_css_named_color_token59] = ACTIONS(96),
    [aux_sym_css_named_color_token60] = ACTIONS(96),
    [aux_sym_css_named_color_token61] = ACTIONS(96),
    [aux_sym_css_named_color_token62] = ACTIONS(96),
    [aux_sym_css_named_color_token63] = ACTIONS(96),
    [aux_sym_css_named_color_token64] = ACTIONS(98),
    [aux_sym_css_named_color_token65] = ACTIONS(96),
    [aux_sym_css_named_color_token66] = ACTIONS(96),
    [aux_sym_css_named_color_token67] = ACTIONS(96),
    [aux_sym_css_named_color_token68] = ACTIONS(96),
    [aux_sym_css_named_color_token69] = ACTIONS(96),
    [aux_sym_css_named_color_token70] = ACTIONS(96),
    [aux_sym_css_named_color_token71] = ACTIONS(96),
    [aux_sym_css_named_color_token72] = ACTIONS(96),
    [aux_sym_css_named_color_token73] = ACTIONS(96),
    [aux_sym_css_named_color_token74] = ACTIONS(96),
    [aux_sym_css_named_color_token75] = ACTIONS(96),
    [aux_sym_css_named_color_token76] = ACTIONS(96),
    [aux_sym_css_named_color_token77] = ACTIONS(96),
    [aux_sym_css_named_color_token78] = ACTIONS(96),
    [aux_sym_css_named_color_token79] = ACTIONS(96),
    [aux_sym_css_named_color_token80] = ACTIONS(96),
    [aux_sym_css_named_color_token81] = ACTIONS(96),
    [aux_sym_css_named_color_token82] = ACTIONS(96),
    [aux_sym_css_named_color_token83] = ACTIONS(98),
    [aux_sym_css_named_color_token84] = ACTIONS(96),
    [aux_sym_css_named_color_token85] = ACTIONS(96),
    [aux_sym_css_named_color_token86] = ACTIONS(96),
    [aux_sym_css_named_color_token87] = ACTIONS(96),
    [aux_sym_css_named_color_token88] = ACTIONS(96),
    [aux_sym_css_named_color_token89] = ACTIONS(96),
    [aux_sym_css_named_color_token90] = ACTIONS(96),
    [aux_sym_css_named_color_token91] = ACTIONS(96),
    [aux_sym_css_named_color_token92] = ACTIONS(96),
    [aux_sym_css_named_color_token93] = ACTIONS(96),
    [aux_sym_css_named_color_token94] = ACTIONS(96),
    [aux_sym_css_named_color_token95] = ACTIONS(96),
    [aux_sym_css_named_color_token96] = ACTIONS(96),
    [aux_sym_css_named_color_token97] = ACTIONS(96),
    [aux_sym_css_named_color_token98] = ACTIONS(96),
    [aux_sym_css_named_color_token99] = ACTIONS(96),
    [aux_sym_css_named_color_token100] = ACTIONS(96),
    [aux_sym_css_named_color_token101] = ACTIONS(96),
    [aux_sym_css_named_color_token102] = ACTIONS(96),
    [aux_sym_css_named_color_token103] = ACTIONS(96),
    [aux_sym_css_named_color_token104] = ACTIONS(98),
    [aux_sym_css_named_color_token105] = ACTIONS(96),
    [aux_sym_css_named_color_token106] = ACTIONS(98),
    [aux_sym_css_named_color_token107] = ACTIONS(96),
    [aux_sym_css_named_color_token108] = ACTIONS(96),
    [aux_sym_css_named_color_token109] = ACTIONS(96),
    [aux_sym_css_named_color_token110] = ACTIONS(96),
    [aux_sym_css_named_color_token111] = ACTIONS(96),
    [aux_sym_css_named_color_token112] = ACTIONS(96),
    [aux_sym_css_named_color_token113] = ACTIONS(96),
    [aux_sym_css_named_color_token114] = ACTIONS(96),
    [aux_sym_css_named_color_token115] = ACTIONS(96),
    [aux_sym_css_named_color_token116] = ACTIONS(96),
    [aux_sym_css_named_color_token117] = ACTIONS(96),
    [aux_sym_css_named_color_token118] = ACTIONS(96),
    [aux_sym_css_named_color_token119] = ACTIONS(96),
    [aux_sym_css_named_color_token120] = ACTIONS(96),
    [aux_sym_css_named_color_token121] = ACTIONS(96),
    [aux_sym_css_named_color_token122] = ACTIONS(96),
    [aux_sym_css_named_color_token123] = ACTIONS(96),
    [aux_sym_css_named_color_token124] = ACTIONS(96),
    [aux_sym_css_named_color_token125] = ACTIONS(96),
    [aux_sym_css_named_color_token126] = ACTIONS(96),
    [aux_sym_css_named_color_token127] = ACTIONS(96),
    [aux_sym_css_named_color_token128] = ACTIONS(96),
    [aux_sym_css_named_color_token129] = ACTIONS(96),
    [aux_sym_css_named_color_token130] = ACTIONS(96),
    [aux_sym_css_named_color_token131] = ACTIONS(96),
    [aux_sym_css_named_color_token132] = ACTIONS(96),
    [aux_sym_css_named_color_token133] = ACTIONS(96),
    [aux_sym_css_named_color_token134] = ACTIONS(96),
    [aux_sym_css_named_color_token135] = ACTIONS(96),
    [aux_sym_css_named_color_token136] = ACTIONS(96),
    [aux_sym_css_named_color_token137] = ACTIONS(96),
    [aux_sym_css_named_color_token138] = ACTIONS(96),
    [aux_sym_css_named_color_token139] = ACTIONS(96),
    [aux_sym_css_named_color_token140] = ACTIONS(96),
    [aux_sym_css_named_color_token141] = ACTIONS(96),
    [aux_sym_css_named_color_token142] = ACTIONS(96),
    [aux_sym_css_named_color_token143] = ACTIONS(96),
    [aux_sym_css_named_color_token144] = ACTIONS(96),
    [aux_sym_css_named_color_token145] = ACTIONS(98),
    [aux_sym_css_named_color_token146] = ACTIONS(96),
    [aux_sym_css_named_color_token147] = ACTIONS(98),
    [aux_sym_css_named_color_token148] = ACTIONS(96),
    [sym_css_keyword_transparent] = ACTIONS(96),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_rgb] = ACTIONS(102),
    [anon_sym_rgba] = ACTIONS(100),
    [anon_sym_hsl] = ACTIONS(102),
    [anon_sym_hsla] = ACTIONS(100),
    [sym_css_hex_color_6_digits] = ACTIONS(102),
    [sym_css_hex_color_8_digits] = ACTIONS(100),
    [sym_css_hex_color_3_digits] = ACTIONS(102),
    [sym_css_hex_color_4_digits] = ACTIONS(102),
    [aux_sym_css_named_color_token1] = ACTIONS(100),
    [aux_sym_css_named_color_token2] = ACTIONS(100),
    [aux_sym_css_named_color_token3] = ACTIONS(102),
    [aux_sym_css_named_color_token4] = ACTIONS(100),
    [aux_sym_css_named_color_token5] = ACTIONS(100),
    [aux_sym_css_named_color_token6] = ACTIONS(100),
    [aux_sym_css_named_color_token7] = ACTIONS(100),
    [aux_sym_css_named_color_token8] = ACTIONS(100),
    [aux_sym_css_named_color_token9] = ACTIONS(100),
    [aux_sym_css_named_color_token10] = ACTIONS(102),
    [aux_sym_css_named_color_token11] = ACTIONS(100),
    [aux_sym_css_named_color_token12] = ACTIONS(100),
    [aux_sym_css_named_color_token13] = ACTIONS(100),
    [aux_sym_css_named_color_token14] = ACTIONS(100),
    [aux_sym_css_named_color_token15] = ACTIONS(100),
    [aux_sym_css_named_color_token16] = ACTIONS(100),
    [aux_sym_css_named_color_token17] = ACTIONS(100),
    [aux_sym_css_named_color_token18] = ACTIONS(100),
    [aux_sym_css_named_color_token19] = ACTIONS(100),
    [aux_sym_css_named_color_token20] = ACTIONS(100),
    [aux_sym_css_named_color_token21] = ACTIONS(100),
    [aux_sym_css_named_color_token22] = ACTIONS(100),
    [aux_sym_css_named_color_token23] = ACTIONS(100),
    [aux_sym_css_named_color_token24] = ACTIONS(100),
    [aux_sym_css_named_color_token25] = ACTIONS(100),
    [aux_sym_css_named_color_token26] = ACTIONS(100),
    [aux_sym_css_named_color_token27] = ACTIONS(100),
    [aux_sym_css_named_color_token28] = ACTIONS(100),
    [aux_sym_css_named_color_token29] = ACTIONS(100),
    [aux_sym_css_named_color_token30] = ACTIONS(100),
    [aux_sym_css_named_color_token31] = ACTIONS(100),
    [aux_sym_css_named_color_token32] = ACTIONS(100),
    [aux_sym_css_named_color_token33] = ACTIONS(100),
    [aux_sym_css_named_color_token34] = ACTIONS(100),
    [aux_sym_css_named_color_token35] = ACTIONS(100),
    [aux_sym_css_named_color_token36] = ACTIONS(100),
    [aux_sym_css_named_color_token37] = ACTIONS(100),
    [aux_sym_css_named_color_token38] = ACTIONS(100),
    [aux_sym_css_named_color_token39] = ACTIONS(100),
    [aux_sym_css_named_color_token40] = ACTIONS(100),
    [aux_sym_css_named_color_token41] = ACTIONS(100),
    [aux_sym_css_named_color_token42] = ACTIONS(100),
    [aux_sym_css_named_color_token43] = ACTIONS(100),
    [aux_sym_css_named_color_token44] = ACTIONS(100),
    [aux_sym_css_named_color_token45] = ACTIONS(100),
    [aux_sym_css_named_color_token46] = ACTIONS(100),
    [aux_sym_css_named_color_token47] = ACTIONS(100),
    [aux_sym_css_named_color_token48] = ACTIONS(100),
    [aux_sym_css_named_color_token49] = ACTIONS(100),
    [aux_sym_css_named_color_token50] = ACTIONS(100),
    [aux_sym_css_named_color_token51] = ACTIONS(100),
    [aux_sym_css_named_color_token52] = ACTIONS(102),
    [aux_sym_css_named_color_token53] = ACTIONS(100),
    [aux_sym_css_named_color_token54] = ACTIONS(100),
    [aux_sym_css_named_color_token55] = ACTIONS(102),
    [aux_sym_css_named_color_token56] = ACTIONS(100),
    [aux_sym_css_named_color_token57] = ACTIONS(100),
    [aux_sym_css_named_color_token58] = ACTIONS(100),
    [aux_sym_css_named_color_token59] = ACTIONS(100),
    [aux_sym_css_named_color_token60] = ACTIONS(100),
    [aux_sym_css_named_color_token61] = ACTIONS(100),
    [aux_sym_css_named_color_token62] = ACTIONS(100),
    [aux_sym_css_named_color_token63] = ACTIONS(100),
    [aux_sym_css_named_color_token64] = ACTIONS(102),
    [aux_sym_css_named_color_token65] = ACTIONS(100),
    [aux_sym_css_named_color_token66] = ACTIONS(100),
    [aux_sym_css_named_color_token67] = ACTIONS(100),
    [aux_sym_css_named_color_token68] = ACTIONS(100),
    [aux_sym_css_named_color_token69] = ACTIONS(100),
    [aux_sym_css_named_color_token70] = ACTIONS(100),
    [aux_sym_css_named_color_token71] = ACTIONS(100),
    [aux_sym_css_named_color_token72] = ACTIONS(100),
    [aux_sym_css_named_color_token73] = ACTIONS(100),
    [aux_sym_css_named_color_token74] = ACTIONS(100),
    [aux_sym_css_named_color_token75] = ACTIONS(100),
    [aux_sym_css_named_color_token76] = ACTIONS(100),
    [aux_sym_css_named_color_token77] = ACTIONS(100),
    [aux_sym_css_named_color_token78] = ACTIONS(100),
    [aux_sym_css_named_color_token79] = ACTIONS(100),
    [aux_sym_css_named_color_token80] = ACTIONS(100),
    [aux_sym_css_named_color_token81] = ACTIONS(100),
    [aux_sym_css_named_color_token82] = ACTIONS(100),
    [aux_sym_css_named_color_token83] = ACTIONS(102),
    [aux_sym_css_named_color_token84] = ACTIONS(100),
    [aux_sym_css_named_color_token85] = ACTIONS(100),
    [aux_sym_css_named_color_token86] = ACTIONS(100),
    [aux_sym_css_named_color_token87] = ACTIONS(100),
    [aux_sym_css_named_color_token88] = ACTIONS(100),
    [aux_sym_css_named_color_token89] = ACTIONS(100),
    [aux_sym_css_named_color_token90] = ACTIONS(100),
    [aux_sym_css_named_color_token91] = ACTIONS(100),
    [aux_sym_css_named_color_token92] = ACTIONS(100),
    [aux_sym_css_named_color_token93] = ACTIONS(100),
    [aux_sym_css_named_color_token94] = ACTIONS(100),
    [aux_sym_css_named_color_token95] = ACTIONS(100),
    [aux_sym_css_named_color_token96] = ACTIONS(100),
    [aux_sym_css_named_color_token97] = ACTIONS(100),
    [aux_sym_css_named_color_token98] = ACTIONS(100),
    [aux_sym_css_named_color_token99] = ACTIONS(100),
    [aux_sym_css_named_color_token100] = ACTIONS(100),
    [aux_sym_css_named_color_token101] = ACTIONS(100),
    [aux_sym_css_named_color_token102] = ACTIONS(100),
    [aux_sym_css_named_color_token103] = ACTIONS(100),
    [aux_sym_css_named_color_token104] = ACTIONS(102),
    [aux_sym_css_named_color_token105] = ACTIONS(100),
    [aux_sym_css_named_color_token106] = ACTIONS(102),
    [aux_sym_css_named_color_token107] = ACTIONS(100),
    [aux_sym_css_named_color_token108] = ACTIONS(100),
    [aux_sym_css_named_color_token109] = ACTIONS(100),
    [aux_sym_css_named_color_token110] = ACTIONS(100),
    [aux_sym_css_named_color_token111] = ACTIONS(100),
    [aux_sym_css_named_color_token112] = ACTIONS(100),
    [aux_sym_css_named_color_token113] = ACTIONS(100),
    [aux_sym_css_named_color_token114] = ACTIONS(100),
    [aux_sym_css_named_color_token115] = ACTIONS(100),
    [aux_sym_css_named_color_token116] = ACTIONS(100),
    [aux_sym_css_named_color_token117] = ACTIONS(100),
    [aux_sym_css_named_color_token118] = ACTIONS(100),
    [aux_sym_css_named_color_token119] = ACTIONS(100),
    [aux_sym_css_named_color_token120] = ACTIONS(100),
    [aux_sym_css_named_color_token121] = ACTIONS(100),
    [aux_sym_css_named_color_token122] = ACTIONS(100),
    [aux_sym_css_named_color_token123] = ACTIONS(100),
    [aux_sym_css_named_color_token124] = ACTIONS(100),
    [aux_sym_css_named_color_token125] = ACTIONS(100),
    [aux_sym_css_named_color_token126] = ACTIONS(100),
    [aux_sym_css_named_color_token127] = ACTIONS(100),
    [aux_sym_css_named_color_token128] = ACTIONS(100),
    [aux_sym_css_named_color_token129] = ACTIONS(100),
    [aux_sym_css_named_color_token130] = ACTIONS(100),
    [aux_sym_css_named_color_token131] = ACTIONS(100),
    [aux_sym_css_named_color_token132] = ACTIONS(100),
    [aux_sym_css_named_color_token133] = ACTIONS(100),
    [aux_sym_css_named_color_token134] = ACTIONS(100),
    [aux_sym_css_named_color_token135] = ACTIONS(100),
    [aux_sym_css_named_color_token136] = ACTIONS(100),
    [aux_sym_css_named_color_token137] = ACTIONS(100),
    [aux_sym_css_named_color_token138] = ACTIONS(100),
    [aux_sym_css_named_color_token139] = ACTIONS(100),
    [aux_sym_css_named_color_token140] = ACTIONS(100),
    [aux_sym_css_named_color_token141] = ACTIONS(100),
    [aux_sym_css_named_color_token142] = ACTIONS(100),
    [aux_sym_css_named_color_token143] = ACTIONS(100),
    [aux_sym_css_named_color_token144] = ACTIONS(100),
    [aux_sym_css_named_color_token145] = ACTIONS(102),
    [aux_sym_css_named_color_token146] = ACTIONS(100),
    [aux_sym_css_named_color_token147] = ACTIONS(102),
    [aux_sym_css_named_color_token148] = ACTIONS(100),
    [sym_css_keyword_transparent] = ACTIONS(100),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [anon_sym_rgb] = ACTIONS(106),
    [anon_sym_rgba] = ACTIONS(104),
    [anon_sym_hsl] = ACTIONS(106),
    [anon_sym_hsla] = ACTIONS(104),
    [sym_css_hex_color_6_digits] = ACTIONS(106),
    [sym_css_hex_color_8_digits] = ACTIONS(104),
    [sym_css_hex_color_3_digits] = ACTIONS(106),
    [sym_css_hex_color_4_digits] = ACTIONS(106),
    [aux_sym_css_named_color_token1] = ACTIONS(104),
    [aux_sym_css_named_color_token2] = ACTIONS(104),
    [aux_sym_css_named_color_token3] = ACTIONS(106),
    [aux_sym_css_named_color_token4] = ACTIONS(104),
    [aux_sym_css_named_color_token5] = ACTIONS(104),
    [aux_sym_css_named_color_token6] = ACTIONS(104),
    [aux_sym_css_named_color_token7] = ACTIONS(104),
    [aux_sym_css_named_color_token8] = ACTIONS(104),
    [aux_sym_css_named_color_token9] = ACTIONS(104),
    [aux_sym_css_named_color_token10] = ACTIONS(106),
    [aux_sym_css_named_color_token11] = ACTIONS(104),
    [aux_sym_css_named_color_token12] = ACTIONS(104),
    [aux_sym_css_named_color_token13] = ACTIONS(104),
    [aux_sym_css_named_color_token14] = ACTIONS(104),
    [aux_sym_css_named_color_token15] = ACTIONS(104),
    [aux_sym_css_named_color_token16] = ACTIONS(104),
    [aux_sym_css_named_color_token17] = ACTIONS(104),
    [aux_sym_css_named_color_token18] = ACTIONS(104),
    [aux_sym_css_named_color_token19] = ACTIONS(104),
    [aux_sym_css_named_color_token20] = ACTIONS(104),
    [aux_sym_css_named_color_token21] = ACTIONS(104),
    [aux_sym_css_named_color_token22] = ACTIONS(104),
    [aux_sym_css_named_color_token23] = ACTIONS(104),
    [aux_sym_css_named_color_token24] = ACTIONS(104),
    [aux_sym_css_named_color_token25] = ACTIONS(104),
    [aux_sym_css_named_color_token26] = ACTIONS(104),
    [aux_sym_css_named_color_token27] = ACTIONS(104),
    [aux_sym_css_named_color_token28] = ACTIONS(104),
    [aux_sym_css_named_color_token29] = ACTIONS(104),
    [aux_sym_css_named_color_token30] = ACTIONS(104),
    [aux_sym_css_named_color_token31] = ACTIONS(104),
    [aux_sym_css_named_color_token32] = ACTIONS(104),
    [aux_sym_css_named_color_token33] = ACTIONS(104),
    [aux_sym_css_named_color_token34] = ACTIONS(104),
    [aux_sym_css_named_color_token35] = ACTIONS(104),
    [aux_sym_css_named_color_token36] = ACTIONS(104),
    [aux_sym_css_named_color_token37] = ACTIONS(104),
    [aux_sym_css_named_color_token38] = ACTIONS(104),
    [aux_sym_css_named_color_token39] = ACTIONS(104),
    [aux_sym_css_named_color_token40] = ACTIONS(104),
    [aux_sym_css_named_color_token41] = ACTIONS(104),
    [aux_sym_css_named_color_token42] = ACTIONS(104),
    [aux_sym_css_named_color_token43] = ACTIONS(104),
    [aux_sym_css_named_color_token44] = ACTIONS(104),
    [aux_sym_css_named_color_token45] = ACTIONS(104),
    [aux_sym_css_named_color_token46] = ACTIONS(104),
    [aux_sym_css_named_color_token47] = ACTIONS(104),
    [aux_sym_css_named_color_token48] = ACTIONS(104),
    [aux_sym_css_named_color_token49] = ACTIONS(104),
    [aux_sym_css_named_color_token50] = ACTIONS(104),
    [aux_sym_css_named_color_token51] = ACTIONS(104),
    [aux_sym_css_named_color_token52] = ACTIONS(106),
    [aux_sym_css_named_color_token53] = ACTIONS(104),
    [aux_sym_css_named_color_token54] = ACTIONS(104),
    [aux_sym_css_named_color_token55] = ACTIONS(106),
    [aux_sym_css_named_color_token56] = ACTIONS(104),
    [aux_sym_css_named_color_token57] = ACTIONS(104),
    [aux_sym_css_named_color_token58] = ACTIONS(104),
    [aux_sym_css_named_color_token59] = ACTIONS(104),
    [aux_sym_css_named_color_token60] = ACTIONS(104),
    [aux_sym_css_named_color_token61] = ACTIONS(104),
    [aux_sym_css_named_color_token62] = ACTIONS(104),
    [aux_sym_css_named_color_token63] = ACTIONS(104),
    [aux_sym_css_named_color_token64] = ACTIONS(106),
    [aux_sym_css_named_color_token65] = ACTIONS(104),
    [aux_sym_css_named_color_token66] = ACTIONS(104),
    [aux_sym_css_named_color_token67] = ACTIONS(104),
    [aux_sym_css_named_color_token68] = ACTIONS(104),
    [aux_sym_css_named_color_token69] = ACTIONS(104),
    [aux_sym_css_named_color_token70] = ACTIONS(104),
    [aux_sym_css_named_color_token71] = ACTIONS(104),
    [aux_sym_css_named_color_token72] = ACTIONS(104),
    [aux_sym_css_named_color_token73] = ACTIONS(104),
    [aux_sym_css_named_color_token74] = ACTIONS(104),
    [aux_sym_css_named_color_token75] = ACTIONS(104),
    [aux_sym_css_named_color_token76] = ACTIONS(104),
    [aux_sym_css_named_color_token77] = ACTIONS(104),
    [aux_sym_css_named_color_token78] = ACTIONS(104),
    [aux_sym_css_named_color_token79] = ACTIONS(104),
    [aux_sym_css_named_color_token80] = ACTIONS(104),
    [aux_sym_css_named_color_token81] = ACTIONS(104),
    [aux_sym_css_named_color_token82] = ACTIONS(104),
    [aux_sym_css_named_color_token83] = ACTIONS(106),
    [aux_sym_css_named_color_token84] = ACTIONS(104),
    [aux_sym_css_named_color_token85] = ACTIONS(104),
    [aux_sym_css_named_color_token86] = ACTIONS(104),
    [aux_sym_css_named_color_token87] = ACTIONS(104),
    [aux_sym_css_named_color_token88] = ACTIONS(104),
    [aux_sym_css_named_color_token89] = ACTIONS(104),
    [aux_sym_css_named_color_token90] = ACTIONS(104),
    [aux_sym_css_named_color_token91] = ACTIONS(104),
    [aux_sym_css_named_color_token92] = ACTIONS(104),
    [aux_sym_css_named_color_token93] = ACTIONS(104),
    [aux_sym_css_named_color_token94] = ACTIONS(104),
    [aux_sym_css_named_color_token95] = ACTIONS(104),
    [aux_sym_css_named_color_token96] = ACTIONS(104),
    [aux_sym_css_named_color_token97] = ACTIONS(104),
    [aux_sym_css_named_color_token98] = ACTIONS(104),
    [aux_sym_css_named_color_token99] = ACTIONS(104),
    [aux_sym_css_named_color_token100] = ACTIONS(104),
    [aux_sym_css_named_color_token101] = ACTIONS(104),
    [aux_sym_css_named_color_token102] = ACTIONS(104),
    [aux_sym_css_named_color_token103] = ACTIONS(104),
    [aux_sym_css_named_color_token104] = ACTIONS(106),
    [aux_sym_css_named_color_token105] = ACTIONS(104),
    [aux_sym_css_named_color_token106] = ACTIONS(106),
    [aux_sym_css_named_color_token107] = ACTIONS(104),
    [aux_sym_css_named_color_token108] = ACTIONS(104),
    [aux_sym_css_named_color_token109] = ACTIONS(104),
    [aux_sym_css_named_color_token110] = ACTIONS(104),
    [aux_sym_css_named_color_token111] = ACTIONS(104),
    [aux_sym_css_named_color_token112] = ACTIONS(104),
    [aux_sym_css_named_color_token113] = ACTIONS(104),
    [aux_sym_css_named_color_token114] = ACTIONS(104),
    [aux_sym_css_named_color_token115] = ACTIONS(104),
    [aux_sym_css_named_color_token116] = ACTIONS(104),
    [aux_sym_css_named_color_token117] = ACTIONS(104),
    [aux_sym_css_named_color_token118] = ACTIONS(104),
    [aux_sym_css_named_color_token119] = ACTIONS(104),
    [aux_sym_css_named_color_token120] = ACTIONS(104),
    [aux_sym_css_named_color_token121] = ACTIONS(104),
    [aux_sym_css_named_color_token122] = ACTIONS(104),
    [aux_sym_css_named_color_token123] = ACTIONS(104),
    [aux_sym_css_named_color_token124] = ACTIONS(104),
    [aux_sym_css_named_color_token125] = ACTIONS(104),
    [aux_sym_css_named_color_token126] = ACTIONS(104),
    [aux_sym_css_named_color_token127] = ACTIONS(104),
    [aux_sym_css_named_color_token128] = ACTIONS(104),
    [aux_sym_css_named_color_token129] = ACTIONS(104),
    [aux_sym_css_named_color_token130] = ACTIONS(104),
    [aux_sym_css_named_color_token131] = ACTIONS(104),
    [aux_sym_css_named_color_token132] = ACTIONS(104),
    [aux_sym_css_named_color_token133] = ACTIONS(104),
    [aux_sym_css_named_color_token134] = ACTIONS(104),
    [aux_sym_css_named_color_token135] = ACTIONS(104),
    [aux_sym_css_named_color_token136] = ACTIONS(104),
    [aux_sym_css_named_color_token137] = ACTIONS(104),
    [aux_sym_css_named_color_token138] = ACTIONS(104),
    [aux_sym_css_named_color_token139] = ACTIONS(104),
    [aux_sym_css_named_color_token140] = ACTIONS(104),
    [aux_sym_css_named_color_token141] = ACTIONS(104),
    [aux_sym_css_named_color_token142] = ACTIONS(104),
    [aux_sym_css_named_color_token143] = ACTIONS(104),
    [aux_sym_css_named_color_token144] = ACTIONS(104),
    [aux_sym_css_named_color_token145] = ACTIONS(106),
    [aux_sym_css_named_color_token146] = ACTIONS(104),
    [aux_sym_css_named_color_token147] = ACTIONS(106),
    [aux_sym_css_named_color_token148] = ACTIONS(104),
    [sym_css_keyword_transparent] = ACTIONS(104),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_rgb] = ACTIONS(110),
    [anon_sym_rgba] = ACTIONS(108),
    [anon_sym_hsl] = ACTIONS(110),
    [anon_sym_hsla] = ACTIONS(108),
    [sym_css_hex_color_6_digits] = ACTIONS(110),
    [sym_css_hex_color_8_digits] = ACTIONS(108),
    [sym_css_hex_color_3_digits] = ACTIONS(110),
    [sym_css_hex_color_4_digits] = ACTIONS(110),
    [aux_sym_css_named_color_token1] = ACTIONS(108),
    [aux_sym_css_named_color_token2] = ACTIONS(108),
    [aux_sym_css_named_color_token3] = ACTIONS(110),
    [aux_sym_css_named_color_token4] = ACTIONS(108),
    [aux_sym_css_named_color_token5] = ACTIONS(108),
    [aux_sym_css_named_color_token6] = ACTIONS(108),
    [aux_sym_css_named_color_token7] = ACTIONS(108),
    [aux_sym_css_named_color_token8] = ACTIONS(108),
    [aux_sym_css_named_color_token9] = ACTIONS(108),
    [aux_sym_css_named_color_token10] = ACTIONS(110),
    [aux_sym_css_named_color_token11] = ACTIONS(108),
    [aux_sym_css_named_color_token12] = ACTIONS(108),
    [aux_sym_css_named_color_token13] = ACTIONS(108),
    [aux_sym_css_named_color_token14] = ACTIONS(108),
    [aux_sym_css_named_color_token15] = ACTIONS(108),
    [aux_sym_css_named_color_token16] = ACTIONS(108),
    [aux_sym_css_named_color_token17] = ACTIONS(108),
    [aux_sym_css_named_color_token18] = ACTIONS(108),
    [aux_sym_css_named_color_token19] = ACTIONS(108),
    [aux_sym_css_named_color_token20] = ACTIONS(108),
    [aux_sym_css_named_color_token21] = ACTIONS(108),
    [aux_sym_css_named_color_token22] = ACTIONS(108),
    [aux_sym_css_named_color_token23] = ACTIONS(108),
    [aux_sym_css_named_color_token24] = ACTIONS(108),
    [aux_sym_css_named_color_token25] = ACTIONS(108),
    [aux_sym_css_named_color_token26] = ACTIONS(108),
    [aux_sym_css_named_color_token27] = ACTIONS(108),
    [aux_sym_css_named_color_token28] = ACTIONS(108),
    [aux_sym_css_named_color_token29] = ACTIONS(108),
    [aux_sym_css_named_color_token30] = ACTIONS(108),
    [aux_sym_css_named_color_token31] = ACTIONS(108),
    [aux_sym_css_named_color_token32] = ACTIONS(108),
    [aux_sym_css_named_color_token33] = ACTIONS(108),
    [aux_sym_css_named_color_token34] = ACTIONS(108),
    [aux_sym_css_named_color_token35] = ACTIONS(108),
    [aux_sym_css_named_color_token36] = ACTIONS(108),
    [aux_sym_css_named_color_token37] = ACTIONS(108),
    [aux_sym_css_named_color_token38] = ACTIONS(108),
    [aux_sym_css_named_color_token39] = ACTIONS(108),
    [aux_sym_css_named_color_token40] = ACTIONS(108),
    [aux_sym_css_named_color_token41] = ACTIONS(108),
    [aux_sym_css_named_color_token42] = ACTIONS(108),
    [aux_sym_css_named_color_token43] = ACTIONS(108),
    [aux_sym_css_named_color_token44] = ACTIONS(108),
    [aux_sym_css_named_color_token45] = ACTIONS(108),
    [aux_sym_css_named_color_token46] = ACTIONS(108),
    [aux_sym_css_named_color_token47] = ACTIONS(108),
    [aux_sym_css_named_color_token48] = ACTIONS(108),
    [aux_sym_css_named_color_token49] = ACTIONS(108),
    [aux_sym_css_named_color_token50] = ACTIONS(108),
    [aux_sym_css_named_color_token51] = ACTIONS(108),
    [aux_sym_css_named_color_token52] = ACTIONS(110),
    [aux_sym_css_named_color_token53] = ACTIONS(108),
    [aux_sym_css_named_color_token54] = ACTIONS(108),
    [aux_sym_css_named_color_token55] = ACTIONS(110),
    [aux_sym_css_named_color_token56] = ACTIONS(108),
    [aux_sym_css_named_color_token57] = ACTIONS(108),
    [aux_sym_css_named_color_token58] = ACTIONS(108),
    [aux_sym_css_named_color_token59] = ACTIONS(108),
    [aux_sym_css_named_color_token60] = ACTIONS(108),
    [aux_sym_css_named_color_token61] = ACTIONS(108),
    [aux_sym_css_named_color_token62] = ACTIONS(108),
    [aux_sym_css_named_color_token63] = ACTIONS(108),
    [aux_sym_css_named_color_token64] = ACTIONS(110),
    [aux_sym_css_named_color_token65] = ACTIONS(108),
    [aux_sym_css_named_color_token66] = ACTIONS(108),
    [aux_sym_css_named_color_token67] = ACTIONS(108),
    [aux_sym_css_named_color_token68] = ACTIONS(108),
    [aux_sym_css_named_color_token69] = ACTIONS(108),
    [aux_sym_css_named_color_token70] = ACTIONS(108),
    [aux_sym_css_named_color_token71] = ACTIONS(108),
    [aux_sym_css_named_color_token72] = ACTIONS(108),
    [aux_sym_css_named_color_token73] = ACTIONS(108),
    [aux_sym_css_named_color_token74] = ACTIONS(108),
    [aux_sym_css_named_color_token75] = ACTIONS(108),
    [aux_sym_css_named_color_token76] = ACTIONS(108),
    [aux_sym_css_named_color_token77] = ACTIONS(108),
    [aux_sym_css_named_color_token78] = ACTIONS(108),
    [aux_sym_css_named_color_token79] = ACTIONS(108),
    [aux_sym_css_named_color_token80] = ACTIONS(108),
    [aux_sym_css_named_color_token81] = ACTIONS(108),
    [aux_sym_css_named_color_token82] = ACTIONS(108),
    [aux_sym_css_named_color_token83] = ACTIONS(110),
    [aux_sym_css_named_color_token84] = ACTIONS(108),
    [aux_sym_css_named_color_token85] = ACTIONS(108),
    [aux_sym_css_named_color_token86] = ACTIONS(108),
    [aux_sym_css_named_color_token87] = ACTIONS(108),
    [aux_sym_css_named_color_token88] = ACTIONS(108),
    [aux_sym_css_named_color_token89] = ACTIONS(108),
    [aux_sym_css_named_color_token90] = ACTIONS(108),
    [aux_sym_css_named_color_token91] = ACTIONS(108),
    [aux_sym_css_named_color_token92] = ACTIONS(108),
    [aux_sym_css_named_color_token93] = ACTIONS(108),
    [aux_sym_css_named_color_token94] = ACTIONS(108),
    [aux_sym_css_named_color_token95] = ACTIONS(108),
    [aux_sym_css_named_color_token96] = ACTIONS(108),
    [aux_sym_css_named_color_token97] = ACTIONS(108),
    [aux_sym_css_named_color_token98] = ACTIONS(108),
    [aux_sym_css_named_color_token99] = ACTIONS(108),
    [aux_sym_css_named_color_token100] = ACTIONS(108),
    [aux_sym_css_named_color_token101] = ACTIONS(108),
    [aux_sym_css_named_color_token102] = ACTIONS(108),
    [aux_sym_css_named_color_token103] = ACTIONS(108),
    [aux_sym_css_named_color_token104] = ACTIONS(110),
    [aux_sym_css_named_color_token105] = ACTIONS(108),
    [aux_sym_css_named_color_token106] = ACTIONS(110),
    [aux_sym_css_named_color_token107] = ACTIONS(108),
    [aux_sym_css_named_color_token108] = ACTIONS(108),
    [aux_sym_css_named_color_token109] = ACTIONS(108),
    [aux_sym_css_named_color_token110] = ACTIONS(108),
    [aux_sym_css_named_color_token111] = ACTIONS(108),
    [aux_sym_css_named_color_token112] = ACTIONS(108),
    [aux_sym_css_named_color_token113] = ACTIONS(108),
    [aux_sym_css_named_color_token114] = ACTIONS(108),
    [aux_sym_css_named_color_token115] = ACTIONS(108),
    [aux_sym_css_named_color_token116] = ACTIONS(108),
    [aux_sym_css_named_color_token117] = ACTIONS(108),
    [aux_sym_css_named_color_token118] = ACTIONS(108),
    [aux_sym_css_named_color_token119] = ACTIONS(108),
    [aux_sym_css_named_color_token120] = ACTIONS(108),
    [aux_sym_css_named_color_token121] = ACTIONS(108),
    [aux_sym_css_named_color_token122] = ACTIONS(108),
    [aux_sym_css_named_color_token123] = ACTIONS(108),
    [aux_sym_css_named_color_token124] = ACTIONS(108),
    [aux_sym_css_named_color_token125] = ACTIONS(108),
    [aux_sym_css_named_color_token126] = ACTIONS(108),
    [aux_sym_css_named_color_token127] = ACTIONS(108),
    [aux_sym_css_named_color_token128] = ACTIONS(108),
    [aux_sym_css_named_color_token129] = ACTIONS(108),
    [aux_sym_css_named_color_token130] = ACTIONS(108),
    [aux_sym_css_named_color_token131] = ACTIONS(108),
    [aux_sym_css_named_color_token132] = ACTIONS(108),
    [aux_sym_css_named_color_token133] = ACTIONS(108),
    [aux_sym_css_named_color_token134] = ACTIONS(108),
    [aux_sym_css_named_color_token135] = ACTIONS(108),
    [aux_sym_css_named_color_token136] = ACTIONS(108),
    [aux_sym_css_named_color_token137] = ACTIONS(108),
    [aux_sym_css_named_color_token138] = ACTIONS(108),
    [aux_sym_css_named_color_token139] = ACTIONS(108),
    [aux_sym_css_named_color_token140] = ACTIONS(108),
    [aux_sym_css_named_color_token141] = ACTIONS(108),
    [aux_sym_css_named_color_token142] = ACTIONS(108),
    [aux_sym_css_named_color_token143] = ACTIONS(108),
    [aux_sym_css_named_color_token144] = ACTIONS(108),
    [aux_sym_css_named_color_token145] = ACTIONS(110),
    [aux_sym_css_named_color_token146] = ACTIONS(108),
    [aux_sym_css_named_color_token147] = ACTIONS(110),
    [aux_sym_css_named_color_token148] = ACTIONS(108),
    [sym_css_keyword_transparent] = ACTIONS(108),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_rgb] = ACTIONS(114),
    [anon_sym_rgba] = ACTIONS(112),
    [anon_sym_hsl] = ACTIONS(114),
    [anon_sym_hsla] = ACTIONS(112),
    [sym_css_hex_color_6_digits] = ACTIONS(114),
    [sym_css_hex_color_8_digits] = ACTIONS(112),
    [sym_css_hex_color_3_digits] = ACTIONS(114),
    [sym_css_hex_color_4_digits] = ACTIONS(114),
    [aux_sym_css_named_color_token1] = ACTIONS(112),
    [aux_sym_css_named_color_token2] = ACTIONS(112),
    [aux_sym_css_named_color_token3] = ACTIONS(114),
    [aux_sym_css_named_color_token4] = ACTIONS(112),
    [aux_sym_css_named_color_token5] = ACTIONS(112),
    [aux_sym_css_named_color_token6] = ACTIONS(112),
    [aux_sym_css_named_color_token7] = ACTIONS(112),
    [aux_sym_css_named_color_token8] = ACTIONS(112),
    [aux_sym_css_named_color_token9] = ACTIONS(112),
    [aux_sym_css_named_color_token10] = ACTIONS(114),
    [aux_sym_css_named_color_token11] = ACTIONS(112),
    [aux_sym_css_named_color_token12] = ACTIONS(112),
    [aux_sym_css_named_color_token13] = ACTIONS(112),
    [aux_sym_css_named_color_token14] = ACTIONS(112),
    [aux_sym_css_named_color_token15] = ACTIONS(112),
    [aux_sym_css_named_color_token16] = ACTIONS(112),
    [aux_sym_css_named_color_token17] = ACTIONS(112),
    [aux_sym_css_named_color_token18] = ACTIONS(112),
    [aux_sym_css_named_color_token19] = ACTIONS(112),
    [aux_sym_css_named_color_token20] = ACTIONS(112),
    [aux_sym_css_named_color_token21] = ACTIONS(112),
    [aux_sym_css_named_color_token22] = ACTIONS(112),
    [aux_sym_css_named_color_token23] = ACTIONS(112),
    [aux_sym_css_named_color_token24] = ACTIONS(112),
    [aux_sym_css_named_color_token25] = ACTIONS(112),
    [aux_sym_css_named_color_token26] = ACTIONS(112),
    [aux_sym_css_named_color_token27] = ACTIONS(112),
    [aux_sym_css_named_color_token28] = ACTIONS(112),
    [aux_sym_css_named_color_token29] = ACTIONS(112),
    [aux_sym_css_named_color_token30] = ACTIONS(112),
    [aux_sym_css_named_color_token31] = ACTIONS(112),
    [aux_sym_css_named_color_token32] = ACTIONS(112),
    [aux_sym_css_named_color_token33] = ACTIONS(112),
    [aux_sym_css_named_color_token34] = ACTIONS(112),
    [aux_sym_css_named_color_token35] = ACTIONS(112),
    [aux_sym_css_named_color_token36] = ACTIONS(112),
    [aux_sym_css_named_color_token37] = ACTIONS(112),
    [aux_sym_css_named_color_token38] = ACTIONS(112),
    [aux_sym_css_named_color_token39] = ACTIONS(112),
    [aux_sym_css_named_color_token40] = ACTIONS(112),
    [aux_sym_css_named_color_token41] = ACTIONS(112),
    [aux_sym_css_named_color_token42] = ACTIONS(112),
    [aux_sym_css_named_color_token43] = ACTIONS(112),
    [aux_sym_css_named_color_token44] = ACTIONS(112),
    [aux_sym_css_named_color_token45] = ACTIONS(112),
    [aux_sym_css_named_color_token46] = ACTIONS(112),
    [aux_sym_css_named_color_token47] = ACTIONS(112),
    [aux_sym_css_named_color_token48] = ACTIONS(112),
    [aux_sym_css_named_color_token49] = ACTIONS(112),
    [aux_sym_css_named_color_token50] = ACTIONS(112),
    [aux_sym_css_named_color_token51] = ACTIONS(112),
    [aux_sym_css_named_color_token52] = ACTIONS(114),
    [aux_sym_css_named_color_token53] = ACTIONS(112),
    [aux_sym_css_named_color_token54] = ACTIONS(112),
    [aux_sym_css_named_color_token55] = ACTIONS(114),
    [aux_sym_css_named_color_token56] = ACTIONS(112),
    [aux_sym_css_named_color_token57] = ACTIONS(112),
    [aux_sym_css_named_color_token58] = ACTIONS(112),
    [aux_sym_css_named_color_token59] = ACTIONS(112),
    [aux_sym_css_named_color_token60] = ACTIONS(112),
    [aux_sym_css_named_color_token61] = ACTIONS(112),
    [aux_sym_css_named_color_token62] = ACTIONS(112),
    [aux_sym_css_named_color_token63] = ACTIONS(112),
    [aux_sym_css_named_color_token64] = ACTIONS(114),
    [aux_sym_css_named_color_token65] = ACTIONS(112),
    [aux_sym_css_named_color_token66] = ACTIONS(112),
    [aux_sym_css_named_color_token67] = ACTIONS(112),
    [aux_sym_css_named_color_token68] = ACTIONS(112),
    [aux_sym_css_named_color_token69] = ACTIONS(112),
    [aux_sym_css_named_color_token70] = ACTIONS(112),
    [aux_sym_css_named_color_token71] = ACTIONS(112),
    [aux_sym_css_named_color_token72] = ACTIONS(112),
    [aux_sym_css_named_color_token73] = ACTIONS(112),
    [aux_sym_css_named_color_token74] = ACTIONS(112),
    [aux_sym_css_named_color_token75] = ACTIONS(112),
    [aux_sym_css_named_color_token76] = ACTIONS(112),
    [aux_sym_css_named_color_token77] = ACTIONS(112),
    [aux_sym_css_named_color_token78] = ACTIONS(112),
    [aux_sym_css_named_color_token79] = ACTIONS(112),
    [aux_sym_css_named_color_token80] = ACTIONS(112),
    [aux_sym_css_named_color_token81] = ACTIONS(112),
    [aux_sym_css_named_color_token82] = ACTIONS(112),
    [aux_sym_css_named_color_token83] = ACTIONS(114),
    [aux_sym_css_named_color_token84] = ACTIONS(112),
    [aux_sym_css_named_color_token85] = ACTIONS(112),
    [aux_sym_css_named_color_token86] = ACTIONS(112),
    [aux_sym_css_named_color_token87] = ACTIONS(112),
    [aux_sym_css_named_color_token88] = ACTIONS(112),
    [aux_sym_css_named_color_token89] = ACTIONS(112),
    [aux_sym_css_named_color_token90] = ACTIONS(112),
    [aux_sym_css_named_color_token91] = ACTIONS(112),
    [aux_sym_css_named_color_token92] = ACTIONS(112),
    [aux_sym_css_named_color_token93] = ACTIONS(112),
    [aux_sym_css_named_color_token94] = ACTIONS(112),
    [aux_sym_css_named_color_token95] = ACTIONS(112),
    [aux_sym_css_named_color_token96] = ACTIONS(112),
    [aux_sym_css_named_color_token97] = ACTIONS(112),
    [aux_sym_css_named_color_token98] = ACTIONS(112),
    [aux_sym_css_named_color_token99] = ACTIONS(112),
    [aux_sym_css_named_color_token100] = ACTIONS(112),
    [aux_sym_css_named_color_token101] = ACTIONS(112),
    [aux_sym_css_named_color_token102] = ACTIONS(112),
    [aux_sym_css_named_color_token103] = ACTIONS(112),
    [aux_sym_css_named_color_token104] = ACTIONS(114),
    [aux_sym_css_named_color_token105] = ACTIONS(112),
    [aux_sym_css_named_color_token106] = ACTIONS(114),
    [aux_sym_css_named_color_token107] = ACTIONS(112),
    [aux_sym_css_named_color_token108] = ACTIONS(112),
    [aux_sym_css_named_color_token109] = ACTIONS(112),
    [aux_sym_css_named_color_token110] = ACTIONS(112),
    [aux_sym_css_named_color_token111] = ACTIONS(112),
    [aux_sym_css_named_color_token112] = ACTIONS(112),
    [aux_sym_css_named_color_token113] = ACTIONS(112),
    [aux_sym_css_named_color_token114] = ACTIONS(112),
    [aux_sym_css_named_color_token115] = ACTIONS(112),
    [aux_sym_css_named_color_token116] = ACTIONS(112),
    [aux_sym_css_named_color_token117] = ACTIONS(112),
    [aux_sym_css_named_color_token118] = ACTIONS(112),
    [aux_sym_css_named_color_token119] = ACTIONS(112),
    [aux_sym_css_named_color_token120] = ACTIONS(112),
    [aux_sym_css_named_color_token121] = ACTIONS(112),
    [aux_sym_css_named_color_token122] = ACTIONS(112),
    [aux_sym_css_named_color_token123] = ACTIONS(112),
    [aux_sym_css_named_color_token124] = ACTIONS(112),
    [aux_sym_css_named_color_token125] = ACTIONS(112),
    [aux_sym_css_named_color_token126] = ACTIONS(112),
    [aux_sym_css_named_color_token127] = ACTIONS(112),
    [aux_sym_css_named_color_token128] = ACTIONS(112),
    [aux_sym_css_named_color_token129] = ACTIONS(112),
    [aux_sym_css_named_color_token130] = ACTIONS(112),
    [aux_sym_css_named_color_token131] = ACTIONS(112),
    [aux_sym_css_named_color_token132] = ACTIONS(112),
    [aux_sym_css_named_color_token133] = ACTIONS(112),
    [aux_sym_css_named_color_token134] = ACTIONS(112),
    [aux_sym_css_named_color_token135] = ACTIONS(112),
    [aux_sym_css_named_color_token136] = ACTIONS(112),
    [aux_sym_css_named_color_token137] = ACTIONS(112),
    [aux_sym_css_named_color_token138] = ACTIONS(112),
    [aux_sym_css_named_color_token139] = ACTIONS(112),
    [aux_sym_css_named_color_token140] = ACTIONS(112),
    [aux_sym_css_named_color_token141] = ACTIONS(112),
    [aux_sym_css_named_color_token142] = ACTIONS(112),
    [aux_sym_css_named_color_token143] = ACTIONS(112),
    [aux_sym_css_named_color_token144] = ACTIONS(112),
    [aux_sym_css_named_color_token145] = ACTIONS(114),
    [aux_sym_css_named_color_token146] = ACTIONS(112),
    [aux_sym_css_named_color_token147] = ACTIONS(114),
    [aux_sym_css_named_color_token148] = ACTIONS(112),
    [sym_css_keyword_transparent] = ACTIONS(112),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_rgb] = ACTIONS(118),
    [anon_sym_rgba] = ACTIONS(116),
    [anon_sym_hsl] = ACTIONS(118),
    [anon_sym_hsla] = ACTIONS(116),
    [sym_css_hex_color_6_digits] = ACTIONS(118),
    [sym_css_hex_color_8_digits] = ACTIONS(116),
    [sym_css_hex_color_3_digits] = ACTIONS(118),
    [sym_css_hex_color_4_digits] = ACTIONS(118),
    [aux_sym_css_named_color_token1] = ACTIONS(116),
    [aux_sym_css_named_color_token2] = ACTIONS(116),
    [aux_sym_css_named_color_token3] = ACTIONS(118),
    [aux_sym_css_named_color_token4] = ACTIONS(116),
    [aux_sym_css_named_color_token5] = ACTIONS(116),
    [aux_sym_css_named_color_token6] = ACTIONS(116),
    [aux_sym_css_named_color_token7] = ACTIONS(116),
    [aux_sym_css_named_color_token8] = ACTIONS(116),
    [aux_sym_css_named_color_token9] = ACTIONS(116),
    [aux_sym_css_named_color_token10] = ACTIONS(118),
    [aux_sym_css_named_color_token11] = ACTIONS(116),
    [aux_sym_css_named_color_token12] = ACTIONS(116),
    [aux_sym_css_named_color_token13] = ACTIONS(116),
    [aux_sym_css_named_color_token14] = ACTIONS(116),
    [aux_sym_css_named_color_token15] = ACTIONS(116),
    [aux_sym_css_named_color_token16] = ACTIONS(116),
    [aux_sym_css_named_color_token17] = ACTIONS(116),
    [aux_sym_css_named_color_token18] = ACTIONS(116),
    [aux_sym_css_named_color_token19] = ACTIONS(116),
    [aux_sym_css_named_color_token20] = ACTIONS(116),
    [aux_sym_css_named_color_token21] = ACTIONS(116),
    [aux_sym_css_named_color_token22] = ACTIONS(116),
    [aux_sym_css_named_color_token23] = ACTIONS(116),
    [aux_sym_css_named_color_token24] = ACTIONS(116),
    [aux_sym_css_named_color_token25] = ACTIONS(116),
    [aux_sym_css_named_color_token26] = ACTIONS(116),
    [aux_sym_css_named_color_token27] = ACTIONS(116),
    [aux_sym_css_named_color_token28] = ACTIONS(116),
    [aux_sym_css_named_color_token29] = ACTIONS(116),
    [aux_sym_css_named_color_token30] = ACTIONS(116),
    [aux_sym_css_named_color_token31] = ACTIONS(116),
    [aux_sym_css_named_color_token32] = ACTIONS(116),
    [aux_sym_css_named_color_token33] = ACTIONS(116),
    [aux_sym_css_named_color_token34] = ACTIONS(116),
    [aux_sym_css_named_color_token35] = ACTIONS(116),
    [aux_sym_css_named_color_token36] = ACTIONS(116),
    [aux_sym_css_named_color_token37] = ACTIONS(116),
    [aux_sym_css_named_color_token38] = ACTIONS(116),
    [aux_sym_css_named_color_token39] = ACTIONS(116),
    [aux_sym_css_named_color_token40] = ACTIONS(116),
    [aux_sym_css_named_color_token41] = ACTIONS(116),
    [aux_sym_css_named_color_token42] = ACTIONS(116),
    [aux_sym_css_named_color_token43] = ACTIONS(116),
    [aux_sym_css_named_color_token44] = ACTIONS(116),
    [aux_sym_css_named_color_token45] = ACTIONS(116),
    [aux_sym_css_named_color_token46] = ACTIONS(116),
    [aux_sym_css_named_color_token47] = ACTIONS(116),
    [aux_sym_css_named_color_token48] = ACTIONS(116),
    [aux_sym_css_named_color_token49] = ACTIONS(116),
    [aux_sym_css_named_color_token50] = ACTIONS(116),
    [aux_sym_css_named_color_token51] = ACTIONS(116),
    [aux_sym_css_named_color_token52] = ACTIONS(118),
    [aux_sym_css_named_color_token53] = ACTIONS(116),
    [aux_sym_css_named_color_token54] = ACTIONS(116),
    [aux_sym_css_named_color_token55] = ACTIONS(118),
    [aux_sym_css_named_color_token56] = ACTIONS(116),
    [aux_sym_css_named_color_token57] = ACTIONS(116),
    [aux_sym_css_named_color_token58] = ACTIONS(116),
    [aux_sym_css_named_color_token59] = ACTIONS(116),
    [aux_sym_css_named_color_token60] = ACTIONS(116),
    [aux_sym_css_named_color_token61] = ACTIONS(116),
    [aux_sym_css_named_color_token62] = ACTIONS(116),
    [aux_sym_css_named_color_token63] = ACTIONS(116),
    [aux_sym_css_named_color_token64] = ACTIONS(118),
    [aux_sym_css_named_color_token65] = ACTIONS(116),
    [aux_sym_css_named_color_token66] = ACTIONS(116),
    [aux_sym_css_named_color_token67] = ACTIONS(116),
    [aux_sym_css_named_color_token68] = ACTIONS(116),
    [aux_sym_css_named_color_token69] = ACTIONS(116),
    [aux_sym_css_named_color_token70] = ACTIONS(116),
    [aux_sym_css_named_color_token71] = ACTIONS(116),
    [aux_sym_css_named_color_token72] = ACTIONS(116),
    [aux_sym_css_named_color_token73] = ACTIONS(116),
    [aux_sym_css_named_color_token74] = ACTIONS(116),
    [aux_sym_css_named_color_token75] = ACTIONS(116),
    [aux_sym_css_named_color_token76] = ACTIONS(116),
    [aux_sym_css_named_color_token77] = ACTIONS(116),
    [aux_sym_css_named_color_token78] = ACTIONS(116),
    [aux_sym_css_named_color_token79] = ACTIONS(116),
    [aux_sym_css_named_color_token80] = ACTIONS(116),
    [aux_sym_css_named_color_token81] = ACTIONS(116),
    [aux_sym_css_named_color_token82] = ACTIONS(116),
    [aux_sym_css_named_color_token83] = ACTIONS(118),
    [aux_sym_css_named_color_token84] = ACTIONS(116),
    [aux_sym_css_named_color_token85] = ACTIONS(116),
    [aux_sym_css_named_color_token86] = ACTIONS(116),
    [aux_sym_css_named_color_token87] = ACTIONS(116),
    [aux_sym_css_named_color_token88] = ACTIONS(116),
    [aux_sym_css_named_color_token89] = ACTIONS(116),
    [aux_sym_css_named_color_token90] = ACTIONS(116),
    [aux_sym_css_named_color_token91] = ACTIONS(116),
    [aux_sym_css_named_color_token92] = ACTIONS(116),
    [aux_sym_css_named_color_token93] = ACTIONS(116),
    [aux_sym_css_named_color_token94] = ACTIONS(116),
    [aux_sym_css_named_color_token95] = ACTIONS(116),
    [aux_sym_css_named_color_token96] = ACTIONS(116),
    [aux_sym_css_named_color_token97] = ACTIONS(116),
    [aux_sym_css_named_color_token98] = ACTIONS(116),
    [aux_sym_css_named_color_token99] = ACTIONS(116),
    [aux_sym_css_named_color_token100] = ACTIONS(116),
    [aux_sym_css_named_color_token101] = ACTIONS(116),
    [aux_sym_css_named_color_token102] = ACTIONS(116),
    [aux_sym_css_named_color_token103] = ACTIONS(116),
    [aux_sym_css_named_color_token104] = ACTIONS(118),
    [aux_sym_css_named_color_token105] = ACTIONS(116),
    [aux_sym_css_named_color_token106] = ACTIONS(118),
    [aux_sym_css_named_color_token107] = ACTIONS(116),
    [aux_sym_css_named_color_token108] = ACTIONS(116),
    [aux_sym_css_named_color_token109] = ACTIONS(116),
    [aux_sym_css_named_color_token110] = ACTIONS(116),
    [aux_sym_css_named_color_token111] = ACTIONS(116),
    [aux_sym_css_named_color_token112] = ACTIONS(116),
    [aux_sym_css_named_color_token113] = ACTIONS(116),
    [aux_sym_css_named_color_token114] = ACTIONS(116),
    [aux_sym_css_named_color_token115] = ACTIONS(116),
    [aux_sym_css_named_color_token116] = ACTIONS(116),
    [aux_sym_css_named_color_token117] = ACTIONS(116),
    [aux_sym_css_named_color_token118] = ACTIONS(116),
    [aux_sym_css_named_color_token119] = ACTIONS(116),
    [aux_sym_css_named_color_token120] = ACTIONS(116),
    [aux_sym_css_named_color_token121] = ACTIONS(116),
    [aux_sym_css_named_color_token122] = ACTIONS(116),
    [aux_sym_css_named_color_token123] = ACTIONS(116),
    [aux_sym_css_named_color_token124] = ACTIONS(116),
    [aux_sym_css_named_color_token125] = ACTIONS(116),
    [aux_sym_css_named_color_token126] = ACTIONS(116),
    [aux_sym_css_named_color_token127] = ACTIONS(116),
    [aux_sym_css_named_color_token128] = ACTIONS(116),
    [aux_sym_css_named_color_token129] = ACTIONS(116),
    [aux_sym_css_named_color_token130] = ACTIONS(116),
    [aux_sym_css_named_color_token131] = ACTIONS(116),
    [aux_sym_css_named_color_token132] = ACTIONS(116),
    [aux_sym_css_named_color_token133] = ACTIONS(116),
    [aux_sym_css_named_color_token134] = ACTIONS(116),
    [aux_sym_css_named_color_token135] = ACTIONS(116),
    [aux_sym_css_named_color_token136] = ACTIONS(116),
    [aux_sym_css_named_color_token137] = ACTIONS(116),
    [aux_sym_css_named_color_token138] = ACTIONS(116),
    [aux_sym_css_named_color_token139] = ACTIONS(116),
    [aux_sym_css_named_color_token140] = ACTIONS(116),
    [aux_sym_css_named_color_token141] = ACTIONS(116),
    [aux_sym_css_named_color_token142] = ACTIONS(116),
    [aux_sym_css_named_color_token143] = ACTIONS(116),
    [aux_sym_css_named_color_token144] = ACTIONS(116),
    [aux_sym_css_named_color_token145] = ACTIONS(118),
    [aux_sym_css_named_color_token146] = ACTIONS(116),
    [aux_sym_css_named_color_token147] = ACTIONS(118),
    [aux_sym_css_named_color_token148] = ACTIONS(116),
    [sym_css_keyword_transparent] = ACTIONS(116),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_rgb] = ACTIONS(122),
    [anon_sym_rgba] = ACTIONS(120),
    [anon_sym_hsl] = ACTIONS(122),
    [anon_sym_hsla] = ACTIONS(120),
    [sym_css_hex_color_6_digits] = ACTIONS(122),
    [sym_css_hex_color_8_digits] = ACTIONS(120),
    [sym_css_hex_color_3_digits] = ACTIONS(122),
    [sym_css_hex_color_4_digits] = ACTIONS(122),
    [aux_sym_css_named_color_token1] = ACTIONS(120),
    [aux_sym_css_named_color_token2] = ACTIONS(120),
    [aux_sym_css_named_color_token3] = ACTIONS(122),
    [aux_sym_css_named_color_token4] = ACTIONS(120),
    [aux_sym_css_named_color_token5] = ACTIONS(120),
    [aux_sym_css_named_color_token6] = ACTIONS(120),
    [aux_sym_css_named_color_token7] = ACTIONS(120),
    [aux_sym_css_named_color_token8] = ACTIONS(120),
    [aux_sym_css_named_color_token9] = ACTIONS(120),
    [aux_sym_css_named_color_token10] = ACTIONS(122),
    [aux_sym_css_named_color_token11] = ACTIONS(120),
    [aux_sym_css_named_color_token12] = ACTIONS(120),
    [aux_sym_css_named_color_token13] = ACTIONS(120),
    [aux_sym_css_named_color_token14] = ACTIONS(120),
    [aux_sym_css_named_color_token15] = ACTIONS(120),
    [aux_sym_css_named_color_token16] = ACTIONS(120),
    [aux_sym_css_named_color_token17] = ACTIONS(120),
    [aux_sym_css_named_color_token18] = ACTIONS(120),
    [aux_sym_css_named_color_token19] = ACTIONS(120),
    [aux_sym_css_named_color_token20] = ACTIONS(120),
    [aux_sym_css_named_color_token21] = ACTIONS(120),
    [aux_sym_css_named_color_token22] = ACTIONS(120),
    [aux_sym_css_named_color_token23] = ACTIONS(120),
    [aux_sym_css_named_color_token24] = ACTIONS(120),
    [aux_sym_css_named_color_token25] = ACTIONS(120),
    [aux_sym_css_named_color_token26] = ACTIONS(120),
    [aux_sym_css_named_color_token27] = ACTIONS(120),
    [aux_sym_css_named_color_token28] = ACTIONS(120),
    [aux_sym_css_named_color_token29] = ACTIONS(120),
    [aux_sym_css_named_color_token30] = ACTIONS(120),
    [aux_sym_css_named_color_token31] = ACTIONS(120),
    [aux_sym_css_named_color_token32] = ACTIONS(120),
    [aux_sym_css_named_color_token33] = ACTIONS(120),
    [aux_sym_css_named_color_token34] = ACTIONS(120),
    [aux_sym_css_named_color_token35] = ACTIONS(120),
    [aux_sym_css_named_color_token36] = ACTIONS(120),
    [aux_sym_css_named_color_token37] = ACTIONS(120),
    [aux_sym_css_named_color_token38] = ACTIONS(120),
    [aux_sym_css_named_color_token39] = ACTIONS(120),
    [aux_sym_css_named_color_token40] = ACTIONS(120),
    [aux_sym_css_named_color_token41] = ACTIONS(120),
    [aux_sym_css_named_color_token42] = ACTIONS(120),
    [aux_sym_css_named_color_token43] = ACTIONS(120),
    [aux_sym_css_named_color_token44] = ACTIONS(120),
    [aux_sym_css_named_color_token45] = ACTIONS(120),
    [aux_sym_css_named_color_token46] = ACTIONS(120),
    [aux_sym_css_named_color_token47] = ACTIONS(120),
    [aux_sym_css_named_color_token48] = ACTIONS(120),
    [aux_sym_css_named_color_token49] = ACTIONS(120),
    [aux_sym_css_named_color_token50] = ACTIONS(120),
    [aux_sym_css_named_color_token51] = ACTIONS(120),
    [aux_sym_css_named_color_token52] = ACTIONS(122),
    [aux_sym_css_named_color_token53] = ACTIONS(120),
    [aux_sym_css_named_color_token54] = ACTIONS(120),
    [aux_sym_css_named_color_token55] = ACTIONS(122),
    [aux_sym_css_named_color_token56] = ACTIONS(120),
    [aux_sym_css_named_color_token57] = ACTIONS(120),
    [aux_sym_css_named_color_token58] = ACTIONS(120),
    [aux_sym_css_named_color_token59] = ACTIONS(120),
    [aux_sym_css_named_color_token60] = ACTIONS(120),
    [aux_sym_css_named_color_token61] = ACTIONS(120),
    [aux_sym_css_named_color_token62] = ACTIONS(120),
    [aux_sym_css_named_color_token63] = ACTIONS(120),
    [aux_sym_css_named_color_token64] = ACTIONS(122),
    [aux_sym_css_named_color_token65] = ACTIONS(120),
    [aux_sym_css_named_color_token66] = ACTIONS(120),
    [aux_sym_css_named_color_token67] = ACTIONS(120),
    [aux_sym_css_named_color_token68] = ACTIONS(120),
    [aux_sym_css_named_color_token69] = ACTIONS(120),
    [aux_sym_css_named_color_token70] = ACTIONS(120),
    [aux_sym_css_named_color_token71] = ACTIONS(120),
    [aux_sym_css_named_color_token72] = ACTIONS(120),
    [aux_sym_css_named_color_token73] = ACTIONS(120),
    [aux_sym_css_named_color_token74] = ACTIONS(120),
    [aux_sym_css_named_color_token75] = ACTIONS(120),
    [aux_sym_css_named_color_token76] = ACTIONS(120),
    [aux_sym_css_named_color_token77] = ACTIONS(120),
    [aux_sym_css_named_color_token78] = ACTIONS(120),
    [aux_sym_css_named_color_token79] = ACTIONS(120),
    [aux_sym_css_named_color_token80] = ACTIONS(120),
    [aux_sym_css_named_color_token81] = ACTIONS(120),
    [aux_sym_css_named_color_token82] = ACTIONS(120),
    [aux_sym_css_named_color_token83] = ACTIONS(122),
    [aux_sym_css_named_color_token84] = ACTIONS(120),
    [aux_sym_css_named_color_token85] = ACTIONS(120),
    [aux_sym_css_named_color_token86] = ACTIONS(120),
    [aux_sym_css_named_color_token87] = ACTIONS(120),
    [aux_sym_css_named_color_token88] = ACTIONS(120),
    [aux_sym_css_named_color_token89] = ACTIONS(120),
    [aux_sym_css_named_color_token90] = ACTIONS(120),
    [aux_sym_css_named_color_token91] = ACTIONS(120),
    [aux_sym_css_named_color_token92] = ACTIONS(120),
    [aux_sym_css_named_color_token93] = ACTIONS(120),
    [aux_sym_css_named_color_token94] = ACTIONS(120),
    [aux_sym_css_named_color_token95] = ACTIONS(120),
    [aux_sym_css_named_color_token96] = ACTIONS(120),
    [aux_sym_css_named_color_token97] = ACTIONS(120),
    [aux_sym_css_named_color_token98] = ACTIONS(120),
    [aux_sym_css_named_color_token99] = ACTIONS(120),
    [aux_sym_css_named_color_token100] = ACTIONS(120),
    [aux_sym_css_named_color_token101] = ACTIONS(120),
    [aux_sym_css_named_color_token102] = ACTIONS(120),
    [aux_sym_css_named_color_token103] = ACTIONS(120),
    [aux_sym_css_named_color_token104] = ACTIONS(122),
    [aux_sym_css_named_color_token105] = ACTIONS(120),
    [aux_sym_css_named_color_token106] = ACTIONS(122),
    [aux_sym_css_named_color_token107] = ACTIONS(120),
    [aux_sym_css_named_color_token108] = ACTIONS(120),
    [aux_sym_css_named_color_token109] = ACTIONS(120),
    [aux_sym_css_named_color_token110] = ACTIONS(120),
    [aux_sym_css_named_color_token111] = ACTIONS(120),
    [aux_sym_css_named_color_token112] = ACTIONS(120),
    [aux_sym_css_named_color_token113] = ACTIONS(120),
    [aux_sym_css_named_color_token114] = ACTIONS(120),
    [aux_sym_css_named_color_token115] = ACTIONS(120),
    [aux_sym_css_named_color_token116] = ACTIONS(120),
    [aux_sym_css_named_color_token117] = ACTIONS(120),
    [aux_sym_css_named_color_token118] = ACTIONS(120),
    [aux_sym_css_named_color_token119] = ACTIONS(120),
    [aux_sym_css_named_color_token120] = ACTIONS(120),
    [aux_sym_css_named_color_token121] = ACTIONS(120),
    [aux_sym_css_named_color_token122] = ACTIONS(120),
    [aux_sym_css_named_color_token123] = ACTIONS(120),
    [aux_sym_css_named_color_token124] = ACTIONS(120),
    [aux_sym_css_named_color_token125] = ACTIONS(120),
    [aux_sym_css_named_color_token126] = ACTIONS(120),
    [aux_sym_css_named_color_token127] = ACTIONS(120),
    [aux_sym_css_named_color_token128] = ACTIONS(120),
    [aux_sym_css_named_color_token129] = ACTIONS(120),
    [aux_sym_css_named_color_token130] = ACTIONS(120),
    [aux_sym_css_named_color_token131] = ACTIONS(120),
    [aux_sym_css_named_color_token132] = ACTIONS(120),
    [aux_sym_css_named_color_token133] = ACTIONS(120),
    [aux_sym_css_named_color_token134] = ACTIONS(120),
    [aux_sym_css_named_color_token135] = ACTIONS(120),
    [aux_sym_css_named_color_token136] = ACTIONS(120),
    [aux_sym_css_named_color_token137] = ACTIONS(120),
    [aux_sym_css_named_color_token138] = ACTIONS(120),
    [aux_sym_css_named_color_token139] = ACTIONS(120),
    [aux_sym_css_named_color_token140] = ACTIONS(120),
    [aux_sym_css_named_color_token141] = ACTIONS(120),
    [aux_sym_css_named_color_token142] = ACTIONS(120),
    [aux_sym_css_named_color_token143] = ACTIONS(120),
    [aux_sym_css_named_color_token144] = ACTIONS(120),
    [aux_sym_css_named_color_token145] = ACTIONS(122),
    [aux_sym_css_named_color_token146] = ACTIONS(120),
    [aux_sym_css_named_color_token147] = ACTIONS(122),
    [aux_sym_css_named_color_token148] = ACTIONS(120),
    [sym_css_keyword_transparent] = ACTIONS(120),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_rgb] = ACTIONS(126),
    [anon_sym_rgba] = ACTIONS(124),
    [anon_sym_hsl] = ACTIONS(126),
    [anon_sym_hsla] = ACTIONS(124),
    [sym_css_hex_color_6_digits] = ACTIONS(126),
    [sym_css_hex_color_8_digits] = ACTIONS(124),
    [sym_css_hex_color_3_digits] = ACTIONS(126),
    [sym_css_hex_color_4_digits] = ACTIONS(126),
    [aux_sym_css_named_color_token1] = ACTIONS(124),
    [aux_sym_css_named_color_token2] = ACTIONS(124),
    [aux_sym_css_named_color_token3] = ACTIONS(126),
    [aux_sym_css_named_color_token4] = ACTIONS(124),
    [aux_sym_css_named_color_token5] = ACTIONS(124),
    [aux_sym_css_named_color_token6] = ACTIONS(124),
    [aux_sym_css_named_color_token7] = ACTIONS(124),
    [aux_sym_css_named_color_token8] = ACTIONS(124),
    [aux_sym_css_named_color_token9] = ACTIONS(124),
    [aux_sym_css_named_color_token10] = ACTIONS(126),
    [aux_sym_css_named_color_token11] = ACTIONS(124),
    [aux_sym_css_named_color_token12] = ACTIONS(124),
    [aux_sym_css_named_color_token13] = ACTIONS(124),
    [aux_sym_css_named_color_token14] = ACTIONS(124),
    [aux_sym_css_named_color_token15] = ACTIONS(124),
    [aux_sym_css_named_color_token16] = ACTIONS(124),
    [aux_sym_css_named_color_token17] = ACTIONS(124),
    [aux_sym_css_named_color_token18] = ACTIONS(124),
    [aux_sym_css_named_color_token19] = ACTIONS(124),
    [aux_sym_css_named_color_token20] = ACTIONS(124),
    [aux_sym_css_named_color_token21] = ACTIONS(124),
    [aux_sym_css_named_color_token22] = ACTIONS(124),
    [aux_sym_css_named_color_token23] = ACTIONS(124),
    [aux_sym_css_named_color_token24] = ACTIONS(124),
    [aux_sym_css_named_color_token25] = ACTIONS(124),
    [aux_sym_css_named_color_token26] = ACTIONS(124),
    [aux_sym_css_named_color_token27] = ACTIONS(124),
    [aux_sym_css_named_color_token28] = ACTIONS(124),
    [aux_sym_css_named_color_token29] = ACTIONS(124),
    [aux_sym_css_named_color_token30] = ACTIONS(124),
    [aux_sym_css_named_color_token31] = ACTIONS(124),
    [aux_sym_css_named_color_token32] = ACTIONS(124),
    [aux_sym_css_named_color_token33] = ACTIONS(124),
    [aux_sym_css_named_color_token34] = ACTIONS(124),
    [aux_sym_css_named_color_token35] = ACTIONS(124),
    [aux_sym_css_named_color_token36] = ACTIONS(124),
    [aux_sym_css_named_color_token37] = ACTIONS(124),
    [aux_sym_css_named_color_token38] = ACTIONS(124),
    [aux_sym_css_named_color_token39] = ACTIONS(124),
    [aux_sym_css_named_color_token40] = ACTIONS(124),
    [aux_sym_css_named_color_token41] = ACTIONS(124),
    [aux_sym_css_named_color_token42] = ACTIONS(124),
    [aux_sym_css_named_color_token43] = ACTIONS(124),
    [aux_sym_css_named_color_token44] = ACTIONS(124),
    [aux_sym_css_named_color_token45] = ACTIONS(124),
    [aux_sym_css_named_color_token46] = ACTIONS(124),
    [aux_sym_css_named_color_token47] = ACTIONS(124),
    [aux_sym_css_named_color_token48] = ACTIONS(124),
    [aux_sym_css_named_color_token49] = ACTIONS(124),
    [aux_sym_css_named_color_token50] = ACTIONS(124),
    [aux_sym_css_named_color_token51] = ACTIONS(124),
    [aux_sym_css_named_color_token52] = ACTIONS(126),
    [aux_sym_css_named_color_token53] = ACTIONS(124),
    [aux_sym_css_named_color_token54] = ACTIONS(124),
    [aux_sym_css_named_color_token55] = ACTIONS(126),
    [aux_sym_css_named_color_token56] = ACTIONS(124),
    [aux_sym_css_named_color_token57] = ACTIONS(124),
    [aux_sym_css_named_color_token58] = ACTIONS(124),
    [aux_sym_css_named_color_token59] = ACTIONS(124),
    [aux_sym_css_named_color_token60] = ACTIONS(124),
    [aux_sym_css_named_color_token61] = ACTIONS(124),
    [aux_sym_css_named_color_token62] = ACTIONS(124),
    [aux_sym_css_named_color_token63] = ACTIONS(124),
    [aux_sym_css_named_color_token64] = ACTIONS(126),
    [aux_sym_css_named_color_token65] = ACTIONS(124),
    [aux_sym_css_named_color_token66] = ACTIONS(124),
    [aux_sym_css_named_color_token67] = ACTIONS(124),
    [aux_sym_css_named_color_token68] = ACTIONS(124),
    [aux_sym_css_named_color_token69] = ACTIONS(124),
    [aux_sym_css_named_color_token70] = ACTIONS(124),
    [aux_sym_css_named_color_token71] = ACTIONS(124),
    [aux_sym_css_named_color_token72] = ACTIONS(124),
    [aux_sym_css_named_color_token73] = ACTIONS(124),
    [aux_sym_css_named_color_token74] = ACTIONS(124),
    [aux_sym_css_named_color_token75] = ACTIONS(124),
    [aux_sym_css_named_color_token76] = ACTIONS(124),
    [aux_sym_css_named_color_token77] = ACTIONS(124),
    [aux_sym_css_named_color_token78] = ACTIONS(124),
    [aux_sym_css_named_color_token79] = ACTIONS(124),
    [aux_sym_css_named_color_token80] = ACTIONS(124),
    [aux_sym_css_named_color_token81] = ACTIONS(124),
    [aux_sym_css_named_color_token82] = ACTIONS(124),
    [aux_sym_css_named_color_token83] = ACTIONS(126),
    [aux_sym_css_named_color_token84] = ACTIONS(124),
    [aux_sym_css_named_color_token85] = ACTIONS(124),
    [aux_sym_css_named_color_token86] = ACTIONS(124),
    [aux_sym_css_named_color_token87] = ACTIONS(124),
    [aux_sym_css_named_color_token88] = ACTIONS(124),
    [aux_sym_css_named_color_token89] = ACTIONS(124),
    [aux_sym_css_named_color_token90] = ACTIONS(124),
    [aux_sym_css_named_color_token91] = ACTIONS(124),
    [aux_sym_css_named_color_token92] = ACTIONS(124),
    [aux_sym_css_named_color_token93] = ACTIONS(124),
    [aux_sym_css_named_color_token94] = ACTIONS(124),
    [aux_sym_css_named_color_token95] = ACTIONS(124),
    [aux_sym_css_named_color_token96] = ACTIONS(124),
    [aux_sym_css_named_color_token97] = ACTIONS(124),
    [aux_sym_css_named_color_token98] = ACTIONS(124),
    [aux_sym_css_named_color_token99] = ACTIONS(124),
    [aux_sym_css_named_color_token100] = ACTIONS(124),
    [aux_sym_css_named_color_token101] = ACTIONS(124),
    [aux_sym_css_named_color_token102] = ACTIONS(124),
    [aux_sym_css_named_color_token103] = ACTIONS(124),
    [aux_sym_css_named_color_token104] = ACTIONS(126),
    [aux_sym_css_named_color_token105] = ACTIONS(124),
    [aux_sym_css_named_color_token106] = ACTIONS(126),
    [aux_sym_css_named_color_token107] = ACTIONS(124),
    [aux_sym_css_named_color_token108] = ACTIONS(124),
    [aux_sym_css_named_color_token109] = ACTIONS(124),
    [aux_sym_css_named_color_token110] = ACTIONS(124),
    [aux_sym_css_named_color_token111] = ACTIONS(124),
    [aux_sym_css_named_color_token112] = ACTIONS(124),
    [aux_sym_css_named_color_token113] = ACTIONS(124),
    [aux_sym_css_named_color_token114] = ACTIONS(124),
    [aux_sym_css_named_color_token115] = ACTIONS(124),
    [aux_sym_css_named_color_token116] = ACTIONS(124),
    [aux_sym_css_named_color_token117] = ACTIONS(124),
    [aux_sym_css_named_color_token118] = ACTIONS(124),
    [aux_sym_css_named_color_token119] = ACTIONS(124),
    [aux_sym_css_named_color_token120] = ACTIONS(124),
    [aux_sym_css_named_color_token121] = ACTIONS(124),
    [aux_sym_css_named_color_token122] = ACTIONS(124),
    [aux_sym_css_named_color_token123] = ACTIONS(124),
    [aux_sym_css_named_color_token124] = ACTIONS(124),
    [aux_sym_css_named_color_token125] = ACTIONS(124),
    [aux_sym_css_named_color_token126] = ACTIONS(124),
    [aux_sym_css_named_color_token127] = ACTIONS(124),
    [aux_sym_css_named_color_token128] = ACTIONS(124),
    [aux_sym_css_named_color_token129] = ACTIONS(124),
    [aux_sym_css_named_color_token130] = ACTIONS(124),
    [aux_sym_css_named_color_token131] = ACTIONS(124),
    [aux_sym_css_named_color_token132] = ACTIONS(124),
    [aux_sym_css_named_color_token133] = ACTIONS(124),
    [aux_sym_css_named_color_token134] = ACTIONS(124),
    [aux_sym_css_named_color_token135] = ACTIONS(124),
    [aux_sym_css_named_color_token136] = ACTIONS(124),
    [aux_sym_css_named_color_token137] = ACTIONS(124),
    [aux_sym_css_named_color_token138] = ACTIONS(124),
    [aux_sym_css_named_color_token139] = ACTIONS(124),
    [aux_sym_css_named_color_token140] = ACTIONS(124),
    [aux_sym_css_named_color_token141] = ACTIONS(124),
    [aux_sym_css_named_color_token142] = ACTIONS(124),
    [aux_sym_css_named_color_token143] = ACTIONS(124),
    [aux_sym_css_named_color_token144] = ACTIONS(124),
    [aux_sym_css_named_color_token145] = ACTIONS(126),
    [aux_sym_css_named_color_token146] = ACTIONS(124),
    [aux_sym_css_named_color_token147] = ACTIONS(126),
    [aux_sym_css_named_color_token148] = ACTIONS(124),
    [sym_css_keyword_transparent] = ACTIONS(124),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_rgb] = ACTIONS(130),
    [anon_sym_rgba] = ACTIONS(128),
    [anon_sym_hsl] = ACTIONS(130),
    [anon_sym_hsla] = ACTIONS(128),
    [sym_css_hex_color_6_digits] = ACTIONS(130),
    [sym_css_hex_color_8_digits] = ACTIONS(128),
    [sym_css_hex_color_3_digits] = ACTIONS(130),
    [sym_css_hex_color_4_digits] = ACTIONS(130),
    [aux_sym_css_named_color_token1] = ACTIONS(128),
    [aux_sym_css_named_color_token2] = ACTIONS(128),
    [aux_sym_css_named_color_token3] = ACTIONS(130),
    [aux_sym_css_named_color_token4] = ACTIONS(128),
    [aux_sym_css_named_color_token5] = ACTIONS(128),
    [aux_sym_css_named_color_token6] = ACTIONS(128),
    [aux_sym_css_named_color_token7] = ACTIONS(128),
    [aux_sym_css_named_color_token8] = ACTIONS(128),
    [aux_sym_css_named_color_token9] = ACTIONS(128),
    [aux_sym_css_named_color_token10] = ACTIONS(130),
    [aux_sym_css_named_color_token11] = ACTIONS(128),
    [aux_sym_css_named_color_token12] = ACTIONS(128),
    [aux_sym_css_named_color_token13] = ACTIONS(128),
    [aux_sym_css_named_color_token14] = ACTIONS(128),
    [aux_sym_css_named_color_token15] = ACTIONS(128),
    [aux_sym_css_named_color_token16] = ACTIONS(128),
    [aux_sym_css_named_color_token17] = ACTIONS(128),
    [aux_sym_css_named_color_token18] = ACTIONS(128),
    [aux_sym_css_named_color_token19] = ACTIONS(128),
    [aux_sym_css_named_color_token20] = ACTIONS(128),
    [aux_sym_css_named_color_token21] = ACTIONS(128),
    [aux_sym_css_named_color_token22] = ACTIONS(128),
    [aux_sym_css_named_color_token23] = ACTIONS(128),
    [aux_sym_css_named_color_token24] = ACTIONS(128),
    [aux_sym_css_named_color_token25] = ACTIONS(128),
    [aux_sym_css_named_color_token26] = ACTIONS(128),
    [aux_sym_css_named_color_token27] = ACTIONS(128),
    [aux_sym_css_named_color_token28] = ACTIONS(128),
    [aux_sym_css_named_color_token29] = ACTIONS(128),
    [aux_sym_css_named_color_token30] = ACTIONS(128),
    [aux_sym_css_named_color_token31] = ACTIONS(128),
    [aux_sym_css_named_color_token32] = ACTIONS(128),
    [aux_sym_css_named_color_token33] = ACTIONS(128),
    [aux_sym_css_named_color_token34] = ACTIONS(128),
    [aux_sym_css_named_color_token35] = ACTIONS(128),
    [aux_sym_css_named_color_token36] = ACTIONS(128),
    [aux_sym_css_named_color_token37] = ACTIONS(128),
    [aux_sym_css_named_color_token38] = ACTIONS(128),
    [aux_sym_css_named_color_token39] = ACTIONS(128),
    [aux_sym_css_named_color_token40] = ACTIONS(128),
    [aux_sym_css_named_color_token41] = ACTIONS(128),
    [aux_sym_css_named_color_token42] = ACTIONS(128),
    [aux_sym_css_named_color_token43] = ACTIONS(128),
    [aux_sym_css_named_color_token44] = ACTIONS(128),
    [aux_sym_css_named_color_token45] = ACTIONS(128),
    [aux_sym_css_named_color_token46] = ACTIONS(128),
    [aux_sym_css_named_color_token47] = ACTIONS(128),
    [aux_sym_css_named_color_token48] = ACTIONS(128),
    [aux_sym_css_named_color_token49] = ACTIONS(128),
    [aux_sym_css_named_color_token50] = ACTIONS(128),
    [aux_sym_css_named_color_token51] = ACTIONS(128),
    [aux_sym_css_named_color_token52] = ACTIONS(130),
    [aux_sym_css_named_color_token53] = ACTIONS(128),
    [aux_sym_css_named_color_token54] = ACTIONS(128),
    [aux_sym_css_named_color_token55] = ACTIONS(130),
    [aux_sym_css_named_color_token56] = ACTIONS(128),
    [aux_sym_css_named_color_token57] = ACTIONS(128),
    [aux_sym_css_named_color_token58] = ACTIONS(128),
    [aux_sym_css_named_color_token59] = ACTIONS(128),
    [aux_sym_css_named_color_token60] = ACTIONS(128),
    [aux_sym_css_named_color_token61] = ACTIONS(128),
    [aux_sym_css_named_color_token62] = ACTIONS(128),
    [aux_sym_css_named_color_token63] = ACTIONS(128),
    [aux_sym_css_named_color_token64] = ACTIONS(130),
    [aux_sym_css_named_color_token65] = ACTIONS(128),
    [aux_sym_css_named_color_token66] = ACTIONS(128),
    [aux_sym_css_named_color_token67] = ACTIONS(128),
    [aux_sym_css_named_color_token68] = ACTIONS(128),
    [aux_sym_css_named_color_token69] = ACTIONS(128),
    [aux_sym_css_named_color_token70] = ACTIONS(128),
    [aux_sym_css_named_color_token71] = ACTIONS(128),
    [aux_sym_css_named_color_token72] = ACTIONS(128),
    [aux_sym_css_named_color_token73] = ACTIONS(128),
    [aux_sym_css_named_color_token74] = ACTIONS(128),
    [aux_sym_css_named_color_token75] = ACTIONS(128),
    [aux_sym_css_named_color_token76] = ACTIONS(128),
    [aux_sym_css_named_color_token77] = ACTIONS(128),
    [aux_sym_css_named_color_token78] = ACTIONS(128),
    [aux_sym_css_named_color_token79] = ACTIONS(128),
    [aux_sym_css_named_color_token80] = ACTIONS(128),
    [aux_sym_css_named_color_token81] = ACTIONS(128),
    [aux_sym_css_named_color_token82] = ACTIONS(128),
    [aux_sym_css_named_color_token83] = ACTIONS(130),
    [aux_sym_css_named_color_token84] = ACTIONS(128),
    [aux_sym_css_named_color_token85] = ACTIONS(128),
    [aux_sym_css_named_color_token86] = ACTIONS(128),
    [aux_sym_css_named_color_token87] = ACTIONS(128),
    [aux_sym_css_named_color_token88] = ACTIONS(128),
    [aux_sym_css_named_color_token89] = ACTIONS(128),
    [aux_sym_css_named_color_token90] = ACTIONS(128),
    [aux_sym_css_named_color_token91] = ACTIONS(128),
    [aux_sym_css_named_color_token92] = ACTIONS(128),
    [aux_sym_css_named_color_token93] = ACTIONS(128),
    [aux_sym_css_named_color_token94] = ACTIONS(128),
    [aux_sym_css_named_color_token95] = ACTIONS(128),
    [aux_sym_css_named_color_token96] = ACTIONS(128),
    [aux_sym_css_named_color_token97] = ACTIONS(128),
    [aux_sym_css_named_color_token98] = ACTIONS(128),
    [aux_sym_css_named_color_token99] = ACTIONS(128),
    [aux_sym_css_named_color_token100] = ACTIONS(128),
    [aux_sym_css_named_color_token101] = ACTIONS(128),
    [aux_sym_css_named_color_token102] = ACTIONS(128),
    [aux_sym_css_named_color_token103] = ACTIONS(128),
    [aux_sym_css_named_color_token104] = ACTIONS(130),
    [aux_sym_css_named_color_token105] = ACTIONS(128),
    [aux_sym_css_named_color_token106] = ACTIONS(130),
    [aux_sym_css_named_color_token107] = ACTIONS(128),
    [aux_sym_css_named_color_token108] = ACTIONS(128),
    [aux_sym_css_named_color_token109] = ACTIONS(128),
    [aux_sym_css_named_color_token110] = ACTIONS(128),
    [aux_sym_css_named_color_token111] = ACTIONS(128),
    [aux_sym_css_named_color_token112] = ACTIONS(128),
    [aux_sym_css_named_color_token113] = ACTIONS(128),
    [aux_sym_css_named_color_token114] = ACTIONS(128),
    [aux_sym_css_named_color_token115] = ACTIONS(128),
    [aux_sym_css_named_color_token116] = ACTIONS(128),
    [aux_sym_css_named_color_token117] = ACTIONS(128),
    [aux_sym_css_named_color_token118] = ACTIONS(128),
    [aux_sym_css_named_color_token119] = ACTIONS(128),
    [aux_sym_css_named_color_token120] = ACTIONS(128),
    [aux_sym_css_named_color_token121] = ACTIONS(128),
    [aux_sym_css_named_color_token122] = ACTIONS(128),
    [aux_sym_css_named_color_token123] = ACTIONS(128),
    [aux_sym_css_named_color_token124] = ACTIONS(128),
    [aux_sym_css_named_color_token125] = ACTIONS(128),
    [aux_sym_css_named_color_token126] = ACTIONS(128),
    [aux_sym_css_named_color_token127] = ACTIONS(128),
    [aux_sym_css_named_color_token128] = ACTIONS(128),
    [aux_sym_css_named_color_token129] = ACTIONS(128),
    [aux_sym_css_named_color_token130] = ACTIONS(128),
    [aux_sym_css_named_color_token131] = ACTIONS(128),
    [aux_sym_css_named_color_token132] = ACTIONS(128),
    [aux_sym_css_named_color_token133] = ACTIONS(128),
    [aux_sym_css_named_color_token134] = ACTIONS(128),
    [aux_sym_css_named_color_token135] = ACTIONS(128),
    [aux_sym_css_named_color_token136] = ACTIONS(128),
    [aux_sym_css_named_color_token137] = ACTIONS(128),
    [aux_sym_css_named_color_token138] = ACTIONS(128),
    [aux_sym_css_named_color_token139] = ACTIONS(128),
    [aux_sym_css_named_color_token140] = ACTIONS(128),
    [aux_sym_css_named_color_token141] = ACTIONS(128),
    [aux_sym_css_named_color_token142] = ACTIONS(128),
    [aux_sym_css_named_color_token143] = ACTIONS(128),
    [aux_sym_css_named_color_token144] = ACTIONS(128),
    [aux_sym_css_named_color_token145] = ACTIONS(130),
    [aux_sym_css_named_color_token146] = ACTIONS(128),
    [aux_sym_css_named_color_token147] = ACTIONS(130),
    [aux_sym_css_named_color_token148] = ACTIONS(128),
    [sym_css_keyword_transparent] = ACTIONS(128),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_rgb] = ACTIONS(134),
    [anon_sym_rgba] = ACTIONS(132),
    [anon_sym_hsl] = ACTIONS(134),
    [anon_sym_hsla] = ACTIONS(132),
    [sym_css_hex_color_6_digits] = ACTIONS(134),
    [sym_css_hex_color_8_digits] = ACTIONS(132),
    [sym_css_hex_color_3_digits] = ACTIONS(134),
    [sym_css_hex_color_4_digits] = ACTIONS(134),
    [aux_sym_css_named_color_token1] = ACTIONS(132),
    [aux_sym_css_named_color_token2] = ACTIONS(132),
    [aux_sym_css_named_color_token3] = ACTIONS(134),
    [aux_sym_css_named_color_token4] = ACTIONS(132),
    [aux_sym_css_named_color_token5] = ACTIONS(132),
    [aux_sym_css_named_color_token6] = ACTIONS(132),
    [aux_sym_css_named_color_token7] = ACTIONS(132),
    [aux_sym_css_named_color_token8] = ACTIONS(132),
    [aux_sym_css_named_color_token9] = ACTIONS(132),
    [aux_sym_css_named_color_token10] = ACTIONS(134),
    [aux_sym_css_named_color_token11] = ACTIONS(132),
    [aux_sym_css_named_color_token12] = ACTIONS(132),
    [aux_sym_css_named_color_token13] = ACTIONS(132),
    [aux_sym_css_named_color_token14] = ACTIONS(132),
    [aux_sym_css_named_color_token15] = ACTIONS(132),
    [aux_sym_css_named_color_token16] = ACTIONS(132),
    [aux_sym_css_named_color_token17] = ACTIONS(132),
    [aux_sym_css_named_color_token18] = ACTIONS(132),
    [aux_sym_css_named_color_token19] = ACTIONS(132),
    [aux_sym_css_named_color_token20] = ACTIONS(132),
    [aux_sym_css_named_color_token21] = ACTIONS(132),
    [aux_sym_css_named_color_token22] = ACTIONS(132),
    [aux_sym_css_named_color_token23] = ACTIONS(132),
    [aux_sym_css_named_color_token24] = ACTIONS(132),
    [aux_sym_css_named_color_token25] = ACTIONS(132),
    [aux_sym_css_named_color_token26] = ACTIONS(132),
    [aux_sym_css_named_color_token27] = ACTIONS(132),
    [aux_sym_css_named_color_token28] = ACTIONS(132),
    [aux_sym_css_named_color_token29] = ACTIONS(132),
    [aux_sym_css_named_color_token30] = ACTIONS(132),
    [aux_sym_css_named_color_token31] = ACTIONS(132),
    [aux_sym_css_named_color_token32] = ACTIONS(132),
    [aux_sym_css_named_color_token33] = ACTIONS(132),
    [aux_sym_css_named_color_token34] = ACTIONS(132),
    [aux_sym_css_named_color_token35] = ACTIONS(132),
    [aux_sym_css_named_color_token36] = ACTIONS(132),
    [aux_sym_css_named_color_token37] = ACTIONS(132),
    [aux_sym_css_named_color_token38] = ACTIONS(132),
    [aux_sym_css_named_color_token39] = ACTIONS(132),
    [aux_sym_css_named_color_token40] = ACTIONS(132),
    [aux_sym_css_named_color_token41] = ACTIONS(132),
    [aux_sym_css_named_color_token42] = ACTIONS(132),
    [aux_sym_css_named_color_token43] = ACTIONS(132),
    [aux_sym_css_named_color_token44] = ACTIONS(132),
    [aux_sym_css_named_color_token45] = ACTIONS(132),
    [aux_sym_css_named_color_token46] = ACTIONS(132),
    [aux_sym_css_named_color_token47] = ACTIONS(132),
    [aux_sym_css_named_color_token48] = ACTIONS(132),
    [aux_sym_css_named_color_token49] = ACTIONS(132),
    [aux_sym_css_named_color_token50] = ACTIONS(132),
    [aux_sym_css_named_color_token51] = ACTIONS(132),
    [aux_sym_css_named_color_token52] = ACTIONS(134),
    [aux_sym_css_named_color_token53] = ACTIONS(132),
    [aux_sym_css_named_color_token54] = ACTIONS(132),
    [aux_sym_css_named_color_token55] = ACTIONS(134),
    [aux_sym_css_named_color_token56] = ACTIONS(132),
    [aux_sym_css_named_color_token57] = ACTIONS(132),
    [aux_sym_css_named_color_token58] = ACTIONS(132),
    [aux_sym_css_named_color_token59] = ACTIONS(132),
    [aux_sym_css_named_color_token60] = ACTIONS(132),
    [aux_sym_css_named_color_token61] = ACTIONS(132),
    [aux_sym_css_named_color_token62] = ACTIONS(132),
    [aux_sym_css_named_color_token63] = ACTIONS(132),
    [aux_sym_css_named_color_token64] = ACTIONS(134),
    [aux_sym_css_named_color_token65] = ACTIONS(132),
    [aux_sym_css_named_color_token66] = ACTIONS(132),
    [aux_sym_css_named_color_token67] = ACTIONS(132),
    [aux_sym_css_named_color_token68] = ACTIONS(132),
    [aux_sym_css_named_color_token69] = ACTIONS(132),
    [aux_sym_css_named_color_token70] = ACTIONS(132),
    [aux_sym_css_named_color_token71] = ACTIONS(132),
    [aux_sym_css_named_color_token72] = ACTIONS(132),
    [aux_sym_css_named_color_token73] = ACTIONS(132),
    [aux_sym_css_named_color_token74] = ACTIONS(132),
    [aux_sym_css_named_color_token75] = ACTIONS(132),
    [aux_sym_css_named_color_token76] = ACTIONS(132),
    [aux_sym_css_named_color_token77] = ACTIONS(132),
    [aux_sym_css_named_color_token78] = ACTIONS(132),
    [aux_sym_css_named_color_token79] = ACTIONS(132),
    [aux_sym_css_named_color_token80] = ACTIONS(132),
    [aux_sym_css_named_color_token81] = ACTIONS(132),
    [aux_sym_css_named_color_token82] = ACTIONS(132),
    [aux_sym_css_named_color_token83] = ACTIONS(134),
    [aux_sym_css_named_color_token84] = ACTIONS(132),
    [aux_sym_css_named_color_token85] = ACTIONS(132),
    [aux_sym_css_named_color_token86] = ACTIONS(132),
    [aux_sym_css_named_color_token87] = ACTIONS(132),
    [aux_sym_css_named_color_token88] = ACTIONS(132),
    [aux_sym_css_named_color_token89] = ACTIONS(132),
    [aux_sym_css_named_color_token90] = ACTIONS(132),
    [aux_sym_css_named_color_token91] = ACTIONS(132),
    [aux_sym_css_named_color_token92] = ACTIONS(132),
    [aux_sym_css_named_color_token93] = ACTIONS(132),
    [aux_sym_css_named_color_token94] = ACTIONS(132),
    [aux_sym_css_named_color_token95] = ACTIONS(132),
    [aux_sym_css_named_color_token96] = ACTIONS(132),
    [aux_sym_css_named_color_token97] = ACTIONS(132),
    [aux_sym_css_named_color_token98] = ACTIONS(132),
    [aux_sym_css_named_color_token99] = ACTIONS(132),
    [aux_sym_css_named_color_token100] = ACTIONS(132),
    [aux_sym_css_named_color_token101] = ACTIONS(132),
    [aux_sym_css_named_color_token102] = ACTIONS(132),
    [aux_sym_css_named_color_token103] = ACTIONS(132),
    [aux_sym_css_named_color_token104] = ACTIONS(134),
    [aux_sym_css_named_color_token105] = ACTIONS(132),
    [aux_sym_css_named_color_token106] = ACTIONS(134),
    [aux_sym_css_named_color_token107] = ACTIONS(132),
    [aux_sym_css_named_color_token108] = ACTIONS(132),
    [aux_sym_css_named_color_token109] = ACTIONS(132),
    [aux_sym_css_named_color_token110] = ACTIONS(132),
    [aux_sym_css_named_color_token111] = ACTIONS(132),
    [aux_sym_css_named_color_token112] = ACTIONS(132),
    [aux_sym_css_named_color_token113] = ACTIONS(132),
    [aux_sym_css_named_color_token114] = ACTIONS(132),
    [aux_sym_css_named_color_token115] = ACTIONS(132),
    [aux_sym_css_named_color_token116] = ACTIONS(132),
    [aux_sym_css_named_color_token117] = ACTIONS(132),
    [aux_sym_css_named_color_token118] = ACTIONS(132),
    [aux_sym_css_named_color_token119] = ACTIONS(132),
    [aux_sym_css_named_color_token120] = ACTIONS(132),
    [aux_sym_css_named_color_token121] = ACTIONS(132),
    [aux_sym_css_named_color_token122] = ACTIONS(132),
    [aux_sym_css_named_color_token123] = ACTIONS(132),
    [aux_sym_css_named_color_token124] = ACTIONS(132),
    [aux_sym_css_named_color_token125] = ACTIONS(132),
    [aux_sym_css_named_color_token126] = ACTIONS(132),
    [aux_sym_css_named_color_token127] = ACTIONS(132),
    [aux_sym_css_named_color_token128] = ACTIONS(132),
    [aux_sym_css_named_color_token129] = ACTIONS(132),
    [aux_sym_css_named_color_token130] = ACTIONS(132),
    [aux_sym_css_named_color_token131] = ACTIONS(132),
    [aux_sym_css_named_color_token132] = ACTIONS(132),
    [aux_sym_css_named_color_token133] = ACTIONS(132),
    [aux_sym_css_named_color_token134] = ACTIONS(132),
    [aux_sym_css_named_color_token135] = ACTIONS(132),
    [aux_sym_css_named_color_token136] = ACTIONS(132),
    [aux_sym_css_named_color_token137] = ACTIONS(132),
    [aux_sym_css_named_color_token138] = ACTIONS(132),
    [aux_sym_css_named_color_token139] = ACTIONS(132),
    [aux_sym_css_named_color_token140] = ACTIONS(132),
    [aux_sym_css_named_color_token141] = ACTIONS(132),
    [aux_sym_css_named_color_token142] = ACTIONS(132),
    [aux_sym_css_named_color_token143] = ACTIONS(132),
    [aux_sym_css_named_color_token144] = ACTIONS(132),
    [aux_sym_css_named_color_token145] = ACTIONS(134),
    [aux_sym_css_named_color_token146] = ACTIONS(132),
    [aux_sym_css_named_color_token147] = ACTIONS(134),
    [aux_sym_css_named_color_token148] = ACTIONS(132),
    [sym_css_keyword_transparent] = ACTIONS(132),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_rgb] = ACTIONS(138),
    [anon_sym_rgba] = ACTIONS(136),
    [anon_sym_hsl] = ACTIONS(138),
    [anon_sym_hsla] = ACTIONS(136),
    [sym_css_hex_color_6_digits] = ACTIONS(138),
    [sym_css_hex_color_8_digits] = ACTIONS(136),
    [sym_css_hex_color_3_digits] = ACTIONS(138),
    [sym_css_hex_color_4_digits] = ACTIONS(138),
    [aux_sym_css_named_color_token1] = ACTIONS(136),
    [aux_sym_css_named_color_token2] = ACTIONS(136),
    [aux_sym_css_named_color_token3] = ACTIONS(138),
    [aux_sym_css_named_color_token4] = ACTIONS(136),
    [aux_sym_css_named_color_token5] = ACTIONS(136),
    [aux_sym_css_named_color_token6] = ACTIONS(136),
    [aux_sym_css_named_color_token7] = ACTIONS(136),
    [aux_sym_css_named_color_token8] = ACTIONS(136),
    [aux_sym_css_named_color_token9] = ACTIONS(136),
    [aux_sym_css_named_color_token10] = ACTIONS(138),
    [aux_sym_css_named_color_token11] = ACTIONS(136),
    [aux_sym_css_named_color_token12] = ACTIONS(136),
    [aux_sym_css_named_color_token13] = ACTIONS(136),
    [aux_sym_css_named_color_token14] = ACTIONS(136),
    [aux_sym_css_named_color_token15] = ACTIONS(136),
    [aux_sym_css_named_color_token16] = ACTIONS(136),
    [aux_sym_css_named_color_token17] = ACTIONS(136),
    [aux_sym_css_named_color_token18] = ACTIONS(136),
    [aux_sym_css_named_color_token19] = ACTIONS(136),
    [aux_sym_css_named_color_token20] = ACTIONS(136),
    [aux_sym_css_named_color_token21] = ACTIONS(136),
    [aux_sym_css_named_color_token22] = ACTIONS(136),
    [aux_sym_css_named_color_token23] = ACTIONS(136),
    [aux_sym_css_named_color_token24] = ACTIONS(136),
    [aux_sym_css_named_color_token25] = ACTIONS(136),
    [aux_sym_css_named_color_token26] = ACTIONS(136),
    [aux_sym_css_named_color_token27] = ACTIONS(136),
    [aux_sym_css_named_color_token28] = ACTIONS(136),
    [aux_sym_css_named_color_token29] = ACTIONS(136),
    [aux_sym_css_named_color_token30] = ACTIONS(136),
    [aux_sym_css_named_color_token31] = ACTIONS(136),
    [aux_sym_css_named_color_token32] = ACTIONS(136),
    [aux_sym_css_named_color_token33] = ACTIONS(136),
    [aux_sym_css_named_color_token34] = ACTIONS(136),
    [aux_sym_css_named_color_token35] = ACTIONS(136),
    [aux_sym_css_named_color_token36] = ACTIONS(136),
    [aux_sym_css_named_color_token37] = ACTIONS(136),
    [aux_sym_css_named_color_token38] = ACTIONS(136),
    [aux_sym_css_named_color_token39] = ACTIONS(136),
    [aux_sym_css_named_color_token40] = ACTIONS(136),
    [aux_sym_css_named_color_token41] = ACTIONS(136),
    [aux_sym_css_named_color_token42] = ACTIONS(136),
    [aux_sym_css_named_color_token43] = ACTIONS(136),
    [aux_sym_css_named_color_token44] = ACTIONS(136),
    [aux_sym_css_named_color_token45] = ACTIONS(136),
    [aux_sym_css_named_color_token46] = ACTIONS(136),
    [aux_sym_css_named_color_token47] = ACTIONS(136),
    [aux_sym_css_named_color_token48] = ACTIONS(136),
    [aux_sym_css_named_color_token49] = ACTIONS(136),
    [aux_sym_css_named_color_token50] = ACTIONS(136),
    [aux_sym_css_named_color_token51] = ACTIONS(136),
    [aux_sym_css_named_color_token52] = ACTIONS(138),
    [aux_sym_css_named_color_token53] = ACTIONS(136),
    [aux_sym_css_named_color_token54] = ACTIONS(136),
    [aux_sym_css_named_color_token55] = ACTIONS(138),
    [aux_sym_css_named_color_token56] = ACTIONS(136),
    [aux_sym_css_named_color_token57] = ACTIONS(136),
    [aux_sym_css_named_color_token58] = ACTIONS(136),
    [aux_sym_css_named_color_token59] = ACTIONS(136),
    [aux_sym_css_named_color_token60] = ACTIONS(136),
    [aux_sym_css_named_color_token61] = ACTIONS(136),
    [aux_sym_css_named_color_token62] = ACTIONS(136),
    [aux_sym_css_named_color_token63] = ACTIONS(136),
    [aux_sym_css_named_color_token64] = ACTIONS(138),
    [aux_sym_css_named_color_token65] = ACTIONS(136),
    [aux_sym_css_named_color_token66] = ACTIONS(136),
    [aux_sym_css_named_color_token67] = ACTIONS(136),
    [aux_sym_css_named_color_token68] = ACTIONS(136),
    [aux_sym_css_named_color_token69] = ACTIONS(136),
    [aux_sym_css_named_color_token70] = ACTIONS(136),
    [aux_sym_css_named_color_token71] = ACTIONS(136),
    [aux_sym_css_named_color_token72] = ACTIONS(136),
    [aux_sym_css_named_color_token73] = ACTIONS(136),
    [aux_sym_css_named_color_token74] = ACTIONS(136),
    [aux_sym_css_named_color_token75] = ACTIONS(136),
    [aux_sym_css_named_color_token76] = ACTIONS(136),
    [aux_sym_css_named_color_token77] = ACTIONS(136),
    [aux_sym_css_named_color_token78] = ACTIONS(136),
    [aux_sym_css_named_color_token79] = ACTIONS(136),
    [aux_sym_css_named_color_token80] = ACTIONS(136),
    [aux_sym_css_named_color_token81] = ACTIONS(136),
    [aux_sym_css_named_color_token82] = ACTIONS(136),
    [aux_sym_css_named_color_token83] = ACTIONS(138),
    [aux_sym_css_named_color_token84] = ACTIONS(136),
    [aux_sym_css_named_color_token85] = ACTIONS(136),
    [aux_sym_css_named_color_token86] = ACTIONS(136),
    [aux_sym_css_named_color_token87] = ACTIONS(136),
    [aux_sym_css_named_color_token88] = ACTIONS(136),
    [aux_sym_css_named_color_token89] = ACTIONS(136),
    [aux_sym_css_named_color_token90] = ACTIONS(136),
    [aux_sym_css_named_color_token91] = ACTIONS(136),
    [aux_sym_css_named_color_token92] = ACTIONS(136),
    [aux_sym_css_named_color_token93] = ACTIONS(136),
    [aux_sym_css_named_color_token94] = ACTIONS(136),
    [aux_sym_css_named_color_token95] = ACTIONS(136),
    [aux_sym_css_named_color_token96] = ACTIONS(136),
    [aux_sym_css_named_color_token97] = ACTIONS(136),
    [aux_sym_css_named_color_token98] = ACTIONS(136),
    [aux_sym_css_named_color_token99] = ACTIONS(136),
    [aux_sym_css_named_color_token100] = ACTIONS(136),
    [aux_sym_css_named_color_token101] = ACTIONS(136),
    [aux_sym_css_named_color_token102] = ACTIONS(136),
    [aux_sym_css_named_color_token103] = ACTIONS(136),
    [aux_sym_css_named_color_token104] = ACTIONS(138),
    [aux_sym_css_named_color_token105] = ACTIONS(136),
    [aux_sym_css_named_color_token106] = ACTIONS(138),
    [aux_sym_css_named_color_token107] = ACTIONS(136),
    [aux_sym_css_named_color_token108] = ACTIONS(136),
    [aux_sym_css_named_color_token109] = ACTIONS(136),
    [aux_sym_css_named_color_token110] = ACTIONS(136),
    [aux_sym_css_named_color_token111] = ACTIONS(136),
    [aux_sym_css_named_color_token112] = ACTIONS(136),
    [aux_sym_css_named_color_token113] = ACTIONS(136),
    [aux_sym_css_named_color_token114] = ACTIONS(136),
    [aux_sym_css_named_color_token115] = ACTIONS(136),
    [aux_sym_css_named_color_token116] = ACTIONS(136),
    [aux_sym_css_named_color_token117] = ACTIONS(136),
    [aux_sym_css_named_color_token118] = ACTIONS(136),
    [aux_sym_css_named_color_token119] = ACTIONS(136),
    [aux_sym_css_named_color_token120] = ACTIONS(136),
    [aux_sym_css_named_color_token121] = ACTIONS(136),
    [aux_sym_css_named_color_token122] = ACTIONS(136),
    [aux_sym_css_named_color_token123] = ACTIONS(136),
    [aux_sym_css_named_color_token124] = ACTIONS(136),
    [aux_sym_css_named_color_token125] = ACTIONS(136),
    [aux_sym_css_named_color_token126] = ACTIONS(136),
    [aux_sym_css_named_color_token127] = ACTIONS(136),
    [aux_sym_css_named_color_token128] = ACTIONS(136),
    [aux_sym_css_named_color_token129] = ACTIONS(136),
    [aux_sym_css_named_color_token130] = ACTIONS(136),
    [aux_sym_css_named_color_token131] = ACTIONS(136),
    [aux_sym_css_named_color_token132] = ACTIONS(136),
    [aux_sym_css_named_color_token133] = ACTIONS(136),
    [aux_sym_css_named_color_token134] = ACTIONS(136),
    [aux_sym_css_named_color_token135] = ACTIONS(136),
    [aux_sym_css_named_color_token136] = ACTIONS(136),
    [aux_sym_css_named_color_token137] = ACTIONS(136),
    [aux_sym_css_named_color_token138] = ACTIONS(136),
    [aux_sym_css_named_color_token139] = ACTIONS(136),
    [aux_sym_css_named_color_token140] = ACTIONS(136),
    [aux_sym_css_named_color_token141] = ACTIONS(136),
    [aux_sym_css_named_color_token142] = ACTIONS(136),
    [aux_sym_css_named_color_token143] = ACTIONS(136),
    [aux_sym_css_named_color_token144] = ACTIONS(136),
    [aux_sym_css_named_color_token145] = ACTIONS(138),
    [aux_sym_css_named_color_token146] = ACTIONS(136),
    [aux_sym_css_named_color_token147] = ACTIONS(138),
    [aux_sym_css_named_color_token148] = ACTIONS(136),
    [sym_css_keyword_transparent] = ACTIONS(136),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_rgb] = ACTIONS(142),
    [anon_sym_rgba] = ACTIONS(140),
    [anon_sym_hsl] = ACTIONS(142),
    [anon_sym_hsla] = ACTIONS(140),
    [sym_css_hex_color_6_digits] = ACTIONS(142),
    [sym_css_hex_color_8_digits] = ACTIONS(140),
    [sym_css_hex_color_3_digits] = ACTIONS(142),
    [sym_css_hex_color_4_digits] = ACTIONS(142),
    [aux_sym_css_named_color_token1] = ACTIONS(140),
    [aux_sym_css_named_color_token2] = ACTIONS(140),
    [aux_sym_css_named_color_token3] = ACTIONS(142),
    [aux_sym_css_named_color_token4] = ACTIONS(140),
    [aux_sym_css_named_color_token5] = ACTIONS(140),
    [aux_sym_css_named_color_token6] = ACTIONS(140),
    [aux_sym_css_named_color_token7] = ACTIONS(140),
    [aux_sym_css_named_color_token8] = ACTIONS(140),
    [aux_sym_css_named_color_token9] = ACTIONS(140),
    [aux_sym_css_named_color_token10] = ACTIONS(142),
    [aux_sym_css_named_color_token11] = ACTIONS(140),
    [aux_sym_css_named_color_token12] = ACTIONS(140),
    [aux_sym_css_named_color_token13] = ACTIONS(140),
    [aux_sym_css_named_color_token14] = ACTIONS(140),
    [aux_sym_css_named_color_token15] = ACTIONS(140),
    [aux_sym_css_named_color_token16] = ACTIONS(140),
    [aux_sym_css_named_color_token17] = ACTIONS(140),
    [aux_sym_css_named_color_token18] = ACTIONS(140),
    [aux_sym_css_named_color_token19] = ACTIONS(140),
    [aux_sym_css_named_color_token20] = ACTIONS(140),
    [aux_sym_css_named_color_token21] = ACTIONS(140),
    [aux_sym_css_named_color_token22] = ACTIONS(140),
    [aux_sym_css_named_color_token23] = ACTIONS(140),
    [aux_sym_css_named_color_token24] = ACTIONS(140),
    [aux_sym_css_named_color_token25] = ACTIONS(140),
    [aux_sym_css_named_color_token26] = ACTIONS(140),
    [aux_sym_css_named_color_token27] = ACTIONS(140),
    [aux_sym_css_named_color_token28] = ACTIONS(140),
    [aux_sym_css_named_color_token29] = ACTIONS(140),
    [aux_sym_css_named_color_token30] = ACTIONS(140),
    [aux_sym_css_named_color_token31] = ACTIONS(140),
    [aux_sym_css_named_color_token32] = ACTIONS(140),
    [aux_sym_css_named_color_token33] = ACTIONS(140),
    [aux_sym_css_named_color_token34] = ACTIONS(140),
    [aux_sym_css_named_color_token35] = ACTIONS(140),
    [aux_sym_css_named_color_token36] = ACTIONS(140),
    [aux_sym_css_named_color_token37] = ACTIONS(140),
    [aux_sym_css_named_color_token38] = ACTIONS(140),
    [aux_sym_css_named_color_token39] = ACTIONS(140),
    [aux_sym_css_named_color_token40] = ACTIONS(140),
    [aux_sym_css_named_color_token41] = ACTIONS(140),
    [aux_sym_css_named_color_token42] = ACTIONS(140),
    [aux_sym_css_named_color_token43] = ACTIONS(140),
    [aux_sym_css_named_color_token44] = ACTIONS(140),
    [aux_sym_css_named_color_token45] = ACTIONS(140),
    [aux_sym_css_named_color_token46] = ACTIONS(140),
    [aux_sym_css_named_color_token47] = ACTIONS(140),
    [aux_sym_css_named_color_token48] = ACTIONS(140),
    [aux_sym_css_named_color_token49] = ACTIONS(140),
    [aux_sym_css_named_color_token50] = ACTIONS(140),
    [aux_sym_css_named_color_token51] = ACTIONS(140),
    [aux_sym_css_named_color_token52] = ACTIONS(142),
    [aux_sym_css_named_color_token53] = ACTIONS(140),
    [aux_sym_css_named_color_token54] = ACTIONS(140),
    [aux_sym_css_named_color_token55] = ACTIONS(142),
    [aux_sym_css_named_color_token56] = ACTIONS(140),
    [aux_sym_css_named_color_token57] = ACTIONS(140),
    [aux_sym_css_named_color_token58] = ACTIONS(140),
    [aux_sym_css_named_color_token59] = ACTIONS(140),
    [aux_sym_css_named_color_token60] = ACTIONS(140),
    [aux_sym_css_named_color_token61] = ACTIONS(140),
    [aux_sym_css_named_color_token62] = ACTIONS(140),
    [aux_sym_css_named_color_token63] = ACTIONS(140),
    [aux_sym_css_named_color_token64] = ACTIONS(142),
    [aux_sym_css_named_color_token65] = ACTIONS(140),
    [aux_sym_css_named_color_token66] = ACTIONS(140),
    [aux_sym_css_named_color_token67] = ACTIONS(140),
    [aux_sym_css_named_color_token68] = ACTIONS(140),
    [aux_sym_css_named_color_token69] = ACTIONS(140),
    [aux_sym_css_named_color_token70] = ACTIONS(140),
    [aux_sym_css_named_color_token71] = ACTIONS(140),
    [aux_sym_css_named_color_token72] = ACTIONS(140),
    [aux_sym_css_named_color_token73] = ACTIONS(140),
    [aux_sym_css_named_color_token74] = ACTIONS(140),
    [aux_sym_css_named_color_token75] = ACTIONS(140),
    [aux_sym_css_named_color_token76] = ACTIONS(140),
    [aux_sym_css_named_color_token77] = ACTIONS(140),
    [aux_sym_css_named_color_token78] = ACTIONS(140),
    [aux_sym_css_named_color_token79] = ACTIONS(140),
    [aux_sym_css_named_color_token80] = ACTIONS(140),
    [aux_sym_css_named_color_token81] = ACTIONS(140),
    [aux_sym_css_named_color_token82] = ACTIONS(140),
    [aux_sym_css_named_color_token83] = ACTIONS(142),
    [aux_sym_css_named_color_token84] = ACTIONS(140),
    [aux_sym_css_named_color_token85] = ACTIONS(140),
    [aux_sym_css_named_color_token86] = ACTIONS(140),
    [aux_sym_css_named_color_token87] = ACTIONS(140),
    [aux_sym_css_named_color_token88] = ACTIONS(140),
    [aux_sym_css_named_color_token89] = ACTIONS(140),
    [aux_sym_css_named_color_token90] = ACTIONS(140),
    [aux_sym_css_named_color_token91] = ACTIONS(140),
    [aux_sym_css_named_color_token92] = ACTIONS(140),
    [aux_sym_css_named_color_token93] = ACTIONS(140),
    [aux_sym_css_named_color_token94] = ACTIONS(140),
    [aux_sym_css_named_color_token95] = ACTIONS(140),
    [aux_sym_css_named_color_token96] = ACTIONS(140),
    [aux_sym_css_named_color_token97] = ACTIONS(140),
    [aux_sym_css_named_color_token98] = ACTIONS(140),
    [aux_sym_css_named_color_token99] = ACTIONS(140),
    [aux_sym_css_named_color_token100] = ACTIONS(140),
    [aux_sym_css_named_color_token101] = ACTIONS(140),
    [aux_sym_css_named_color_token102] = ACTIONS(140),
    [aux_sym_css_named_color_token103] = ACTIONS(140),
    [aux_sym_css_named_color_token104] = ACTIONS(142),
    [aux_sym_css_named_color_token105] = ACTIONS(140),
    [aux_sym_css_named_color_token106] = ACTIONS(142),
    [aux_sym_css_named_color_token107] = ACTIONS(140),
    [aux_sym_css_named_color_token108] = ACTIONS(140),
    [aux_sym_css_named_color_token109] = ACTIONS(140),
    [aux_sym_css_named_color_token110] = ACTIONS(140),
    [aux_sym_css_named_color_token111] = ACTIONS(140),
    [aux_sym_css_named_color_token112] = ACTIONS(140),
    [aux_sym_css_named_color_token113] = ACTIONS(140),
    [aux_sym_css_named_color_token114] = ACTIONS(140),
    [aux_sym_css_named_color_token115] = ACTIONS(140),
    [aux_sym_css_named_color_token116] = ACTIONS(140),
    [aux_sym_css_named_color_token117] = ACTIONS(140),
    [aux_sym_css_named_color_token118] = ACTIONS(140),
    [aux_sym_css_named_color_token119] = ACTIONS(140),
    [aux_sym_css_named_color_token120] = ACTIONS(140),
    [aux_sym_css_named_color_token121] = ACTIONS(140),
    [aux_sym_css_named_color_token122] = ACTIONS(140),
    [aux_sym_css_named_color_token123] = ACTIONS(140),
    [aux_sym_css_named_color_token124] = ACTIONS(140),
    [aux_sym_css_named_color_token125] = ACTIONS(140),
    [aux_sym_css_named_color_token126] = ACTIONS(140),
    [aux_sym_css_named_color_token127] = ACTIONS(140),
    [aux_sym_css_named_color_token128] = ACTIONS(140),
    [aux_sym_css_named_color_token129] = ACTIONS(140),
    [aux_sym_css_named_color_token130] = ACTIONS(140),
    [aux_sym_css_named_color_token131] = ACTIONS(140),
    [aux_sym_css_named_color_token132] = ACTIONS(140),
    [aux_sym_css_named_color_token133] = ACTIONS(140),
    [aux_sym_css_named_color_token134] = ACTIONS(140),
    [aux_sym_css_named_color_token135] = ACTIONS(140),
    [aux_sym_css_named_color_token136] = ACTIONS(140),
    [aux_sym_css_named_color_token137] = ACTIONS(140),
    [aux_sym_css_named_color_token138] = ACTIONS(140),
    [aux_sym_css_named_color_token139] = ACTIONS(140),
    [aux_sym_css_named_color_token140] = ACTIONS(140),
    [aux_sym_css_named_color_token141] = ACTIONS(140),
    [aux_sym_css_named_color_token142] = ACTIONS(140),
    [aux_sym_css_named_color_token143] = ACTIONS(140),
    [aux_sym_css_named_color_token144] = ACTIONS(140),
    [aux_sym_css_named_color_token145] = ACTIONS(142),
    [aux_sym_css_named_color_token146] = ACTIONS(140),
    [aux_sym_css_named_color_token147] = ACTIONS(142),
    [aux_sym_css_named_color_token148] = ACTIONS(140),
    [sym_css_keyword_transparent] = ACTIONS(140),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(144), 1,
      sym__css_number,
    ACTIONS(146), 5,
      sym__css_percentage,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [11] = 5,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      sym_css_keyword_none,
    STATE(42), 2,
      sym_css_number,
      sym_css_percentage,
  [28] = 2,
    ACTIONS(156), 1,
      sym__css_number,
    ACTIONS(158), 5,
      sym__css_percentage,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      sym_css_keyword_none,
  [39] = 5,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(154), 1,
      sym_css_keyword_none,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(42), 2,
      sym_css_number,
      sym_css_percentage,
  [56] = 5,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      sym_css_keyword_none,
    STATE(43), 2,
      sym_css_number,
      sym_css_percentage,
  [73] = 5,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(164), 1,
      sym_css_keyword_none,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    STATE(43), 2,
      sym_css_number,
      sym_css_percentage,
  [90] = 5,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(168), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      sym_css_keyword_none,
    STATE(34), 2,
      sym_css_number,
      sym_css_percentage,
  [107] = 5,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      sym_css_keyword_none,
    STATE(37), 2,
      sym_css_number,
      sym_css_percentage,
  [124] = 4,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(176), 1,
      sym_css_keyword_none,
    STATE(60), 2,
      sym_css_number,
      sym_css_percentage,
  [138] = 5,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(178), 1,
      sym_css_keyword_none,
    STATE(27), 1,
      sym_css_number,
    STATE(29), 1,
      sym_css_percentage,
  [154] = 4,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(154), 1,
      sym_css_keyword_none,
    STATE(42), 2,
      sym_css_number,
      sym_css_percentage,
  [168] = 4,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(180), 1,
      sym_css_keyword_none,
    STATE(56), 2,
      sym_css_number,
      sym_css_percentage,
  [182] = 5,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(182), 1,
      sym_css_keyword_none,
    STATE(30), 1,
      sym_css_percentage,
    STATE(31), 1,
      sym_css_number,
  [198] = 4,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(164), 1,
      sym_css_keyword_none,
    STATE(43), 2,
      sym_css_number,
      sym_css_percentage,
  [212] = 4,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(170), 1,
      sym_css_keyword_none,
    STATE(34), 2,
      sym_css_number,
      sym_css_percentage,
  [226] = 4,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(174), 1,
      sym_css_keyword_none,
    STATE(37), 2,
      sym_css_number,
      sym_css_percentage,
  [240] = 4,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(184), 1,
      sym_css_keyword_none,
    STATE(62), 2,
      sym_css_number,
      sym_css_percentage,
  [254] = 4,
    ACTIONS(148), 1,
      sym__css_number,
    ACTIONS(150), 1,
      sym__css_percentage,
    ACTIONS(186), 1,
      sym_css_keyword_none,
    STATE(73), 2,
      sym_css_number,
      sym_css_percentage,
  [268] = 4,
    ACTIONS(188), 1,
      sym__css_number,
    ACTIONS(190), 1,
      sym__css_percentage,
    ACTIONS(192), 1,
      sym_css_keyword_none,
    STATE(79), 1,
      sym_css_alpha_value,
  [281] = 4,
    ACTIONS(188), 1,
      sym__css_number,
    ACTIONS(190), 1,
      sym__css_percentage,
    ACTIONS(194), 1,
      sym_css_keyword_none,
    STATE(85), 1,
      sym_css_alpha_value,
  [294] = 4,
    ACTIONS(188), 1,
      sym__css_number,
    ACTIONS(190), 1,
      sym__css_percentage,
    ACTIONS(196), 1,
      sym_css_keyword_none,
    STATE(83), 1,
      sym_css_alpha_value,
  [307] = 4,
    ACTIONS(198), 1,
      sym__css_number,
    ACTIONS(200), 1,
      sym__css_angle,
    ACTIONS(202), 1,
      sym_css_keyword_none,
    STATE(32), 1,
      sym_css_hue,
  [320] = 4,
    ACTIONS(198), 1,
      sym__css_number,
    ACTIONS(200), 1,
      sym__css_angle,
    ACTIONS(204), 1,
      sym_css_keyword_none,
    STATE(33), 1,
      sym_css_hue,
  [333] = 4,
    ACTIONS(188), 1,
      sym__css_number,
    ACTIONS(190), 1,
      sym__css_percentage,
    ACTIONS(206), 1,
      sym_css_keyword_none,
    STATE(81), 1,
      sym_css_alpha_value,
  [346] = 2,
    ACTIONS(208), 1,
      sym__css_number,
    ACTIONS(210), 3,
      sym__css_percentage,
      anon_sym_COMMA,
      sym_css_keyword_none,
  [355] = 3,
    ACTIONS(188), 1,
      sym__css_number,
    ACTIONS(190), 1,
      sym__css_percentage,
    STATE(90), 1,
      sym_css_alpha_value,
  [365] = 3,
    ACTIONS(188), 1,
      sym__css_number,
    ACTIONS(190), 1,
      sym__css_percentage,
    STATE(89), 1,
      sym_css_alpha_value,
  [375] = 3,
    ACTIONS(188), 1,
      sym__css_number,
    ACTIONS(190), 1,
      sym__css_percentage,
    STATE(88), 1,
      sym_css_alpha_value,
  [385] = 3,
    ACTIONS(188), 1,
      sym__css_number,
    ACTIONS(190), 1,
      sym__css_percentage,
    STATE(75), 1,
      sym_css_alpha_value,
  [395] = 2,
    ACTIONS(150), 1,
      sym__css_percentage,
    STATE(64), 1,
      sym_css_percentage,
  [402] = 2,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(214), 1,
      anon_sym_SLASH,
  [409] = 2,
    ACTIONS(216), 1,
      sym__css_number,
    STATE(64), 1,
      sym_css_number,
  [416] = 2,
    ACTIONS(216), 1,
      sym__css_number,
    STATE(72), 1,
      sym_css_number,
  [423] = 2,
    ACTIONS(150), 1,
      sym__css_percentage,
    STATE(72), 1,
      sym_css_percentage,
  [430] = 2,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    ACTIONS(220), 1,
      anon_sym_SLASH,
  [437] = 2,
    ACTIONS(150), 1,
      sym__css_percentage,
    STATE(70), 1,
      sym_css_percentage,
  [444] = 2,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(224), 1,
      anon_sym_SLASH,
  [451] = 2,
    ACTIONS(150), 1,
      sym__css_percentage,
    STATE(69), 1,
      sym_css_percentage,
  [458] = 2,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
  [465] = 2,
    ACTIONS(150), 1,
      sym__css_percentage,
    STATE(94), 1,
      sym_css_percentage,
  [472] = 2,
    ACTIONS(216), 1,
      sym__css_number,
    STATE(93), 1,
      sym_css_number,
  [479] = 2,
    ACTIONS(216), 1,
      sym__css_number,
    STATE(76), 1,
      sym_css_number,
  [486] = 2,
    ACTIONS(150), 1,
      sym__css_percentage,
    STATE(91), 1,
      sym_css_percentage,
  [493] = 2,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
  [500] = 2,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RPAREN,
  [507] = 2,
    ACTIONS(150), 1,
      sym__css_percentage,
    STATE(82), 1,
      sym_css_percentage,
  [514] = 2,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
  [521] = 2,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    ACTIONS(244), 1,
      anon_sym_SLASH,
  [528] = 2,
    ACTIONS(150), 1,
      sym__css_percentage,
    STATE(92), 1,
      sym_css_percentage,
  [535] = 1,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
  [539] = 1,
    ACTIONS(248), 1,
      anon_sym_COMMA,
  [543] = 1,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
  [547] = 1,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
  [551] = 1,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
  [555] = 1,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
  [559] = 1,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
  [563] = 1,
    ACTIONS(260), 1,
      anon_sym_COMMA,
  [567] = 1,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
  [571] = 1,
    ACTIONS(264), 1,
      anon_sym_LPAREN,
  [575] = 1,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
  [579] = 1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
  [583] = 1,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
  [587] = 1,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
  [591] = 1,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
  [595] = 1,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
  [599] = 1,
    ACTIONS(278), 1,
      anon_sym_COMMA,
  [603] = 1,
    ACTIONS(280), 1,
      anon_sym_COMMA,
  [607] = 1,
    ACTIONS(282), 1,
      anon_sym_COMMA,
  [611] = 1,
    ACTIONS(284), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(26)] = 0,
  [SMALL_STATE(27)] = 11,
  [SMALL_STATE(28)] = 28,
  [SMALL_STATE(29)] = 39,
  [SMALL_STATE(30)] = 56,
  [SMALL_STATE(31)] = 73,
  [SMALL_STATE(32)] = 90,
  [SMALL_STATE(33)] = 107,
  [SMALL_STATE(34)] = 124,
  [SMALL_STATE(35)] = 138,
  [SMALL_STATE(36)] = 154,
  [SMALL_STATE(37)] = 168,
  [SMALL_STATE(38)] = 182,
  [SMALL_STATE(39)] = 198,
  [SMALL_STATE(40)] = 212,
  [SMALL_STATE(41)] = 226,
  [SMALL_STATE(42)] = 240,
  [SMALL_STATE(43)] = 254,
  [SMALL_STATE(44)] = 268,
  [SMALL_STATE(45)] = 281,
  [SMALL_STATE(46)] = 294,
  [SMALL_STATE(47)] = 307,
  [SMALL_STATE(48)] = 320,
  [SMALL_STATE(49)] = 333,
  [SMALL_STATE(50)] = 346,
  [SMALL_STATE(51)] = 355,
  [SMALL_STATE(52)] = 365,
  [SMALL_STATE(53)] = 375,
  [SMALL_STATE(54)] = 385,
  [SMALL_STATE(55)] = 395,
  [SMALL_STATE(56)] = 402,
  [SMALL_STATE(57)] = 409,
  [SMALL_STATE(58)] = 416,
  [SMALL_STATE(59)] = 423,
  [SMALL_STATE(60)] = 430,
  [SMALL_STATE(61)] = 437,
  [SMALL_STATE(62)] = 444,
  [SMALL_STATE(63)] = 451,
  [SMALL_STATE(64)] = 458,
  [SMALL_STATE(65)] = 465,
  [SMALL_STATE(66)] = 472,
  [SMALL_STATE(67)] = 479,
  [SMALL_STATE(68)] = 486,
  [SMALL_STATE(69)] = 493,
  [SMALL_STATE(70)] = 500,
  [SMALL_STATE(71)] = 507,
  [SMALL_STATE(72)] = 514,
  [SMALL_STATE(73)] = 521,
  [SMALL_STATE(74)] = 528,
  [SMALL_STATE(75)] = 535,
  [SMALL_STATE(76)] = 539,
  [SMALL_STATE(77)] = 543,
  [SMALL_STATE(78)] = 547,
  [SMALL_STATE(79)] = 551,
  [SMALL_STATE(80)] = 555,
  [SMALL_STATE(81)] = 559,
  [SMALL_STATE(82)] = 563,
  [SMALL_STATE(83)] = 567,
  [SMALL_STATE(84)] = 571,
  [SMALL_STATE(85)] = 575,
  [SMALL_STATE(86)] = 579,
  [SMALL_STATE(87)] = 583,
  [SMALL_STATE(88)] = 587,
  [SMALL_STATE(89)] = 591,
  [SMALL_STATE(90)] = 595,
  [SMALL_STATE(91)] = 599,
  [SMALL_STATE(92)] = 603,
  [SMALL_STATE(93)] = 607,
  [SMALL_STATE(94)] = 611,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_modern, 6, 0, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_modern, 6, 0, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_modern, 6, 0, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_modern, 6, 0, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_modern, 6, 0, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_modern, 6, 0, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_modern, 6, 0, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_modern, 6, 0, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_modern, 8, 0, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_modern, 8, 0, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_legacy, 8, 0, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_legacy, 8, 0, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_modern, 8, 0, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_modern, 8, 0, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_legacy, 8, 0, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_legacy, 8, 0, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_modern, 8, 0, 5),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_modern, 8, 0, 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_legacy, 8, 0, 6),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_legacy, 8, 0, 6),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_modern, 8, 0, 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_modern, 8, 0, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_legacy, 8, 0, 6),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_legacy, 8, 0, 6),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgb_legacy, 10, 0, 7),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgb_legacy, 10, 0, 7),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_rgba_legacy, 10, 0, 7),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_rgba_legacy, 10, 0, 7),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsl_legacy, 10, 0, 8),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsl_legacy, 10, 0, 8),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_function_hsla_legacy, 10, 0, 8),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_function_hsla_legacy, 10, 0, 8),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_percentage, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_percentage, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_number, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_number, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_hue, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_hue, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_alpha_value, 1, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [268] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
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
