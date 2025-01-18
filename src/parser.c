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
#define STATE_COUNT 7
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 158
#define ALIAS_COUNT 0
#define TOKEN_COUNT 154
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_css_hex_color_6_digits = 1,
  sym_css_hex_color_8_digits = 2,
  sym_css_hex_color_3_digits = 3,
  sym_css_hex_color_4_digits = 4,
  aux_sym_css_named_color_token1 = 5,
  aux_sym_css_named_color_token2 = 6,
  aux_sym_css_named_color_token3 = 7,
  aux_sym_css_named_color_token4 = 8,
  aux_sym_css_named_color_token5 = 9,
  aux_sym_css_named_color_token6 = 10,
  aux_sym_css_named_color_token7 = 11,
  aux_sym_css_named_color_token8 = 12,
  aux_sym_css_named_color_token9 = 13,
  aux_sym_css_named_color_token10 = 14,
  aux_sym_css_named_color_token11 = 15,
  aux_sym_css_named_color_token12 = 16,
  aux_sym_css_named_color_token13 = 17,
  aux_sym_css_named_color_token14 = 18,
  aux_sym_css_named_color_token15 = 19,
  aux_sym_css_named_color_token16 = 20,
  aux_sym_css_named_color_token17 = 21,
  aux_sym_css_named_color_token18 = 22,
  aux_sym_css_named_color_token19 = 23,
  aux_sym_css_named_color_token20 = 24,
  aux_sym_css_named_color_token21 = 25,
  aux_sym_css_named_color_token22 = 26,
  aux_sym_css_named_color_token23 = 27,
  aux_sym_css_named_color_token24 = 28,
  aux_sym_css_named_color_token25 = 29,
  aux_sym_css_named_color_token26 = 30,
  aux_sym_css_named_color_token27 = 31,
  aux_sym_css_named_color_token28 = 32,
  aux_sym_css_named_color_token29 = 33,
  aux_sym_css_named_color_token30 = 34,
  aux_sym_css_named_color_token31 = 35,
  aux_sym_css_named_color_token32 = 36,
  aux_sym_css_named_color_token33 = 37,
  aux_sym_css_named_color_token34 = 38,
  aux_sym_css_named_color_token35 = 39,
  aux_sym_css_named_color_token36 = 40,
  aux_sym_css_named_color_token37 = 41,
  aux_sym_css_named_color_token38 = 42,
  aux_sym_css_named_color_token39 = 43,
  aux_sym_css_named_color_token40 = 44,
  aux_sym_css_named_color_token41 = 45,
  aux_sym_css_named_color_token42 = 46,
  aux_sym_css_named_color_token43 = 47,
  aux_sym_css_named_color_token44 = 48,
  aux_sym_css_named_color_token45 = 49,
  aux_sym_css_named_color_token46 = 50,
  aux_sym_css_named_color_token47 = 51,
  aux_sym_css_named_color_token48 = 52,
  aux_sym_css_named_color_token49 = 53,
  aux_sym_css_named_color_token50 = 54,
  aux_sym_css_named_color_token51 = 55,
  aux_sym_css_named_color_token52 = 56,
  aux_sym_css_named_color_token53 = 57,
  aux_sym_css_named_color_token54 = 58,
  aux_sym_css_named_color_token55 = 59,
  aux_sym_css_named_color_token56 = 60,
  aux_sym_css_named_color_token57 = 61,
  aux_sym_css_named_color_token58 = 62,
  aux_sym_css_named_color_token59 = 63,
  aux_sym_css_named_color_token60 = 64,
  aux_sym_css_named_color_token61 = 65,
  aux_sym_css_named_color_token62 = 66,
  aux_sym_css_named_color_token63 = 67,
  aux_sym_css_named_color_token64 = 68,
  aux_sym_css_named_color_token65 = 69,
  aux_sym_css_named_color_token66 = 70,
  aux_sym_css_named_color_token67 = 71,
  aux_sym_css_named_color_token68 = 72,
  aux_sym_css_named_color_token69 = 73,
  aux_sym_css_named_color_token70 = 74,
  aux_sym_css_named_color_token71 = 75,
  aux_sym_css_named_color_token72 = 76,
  aux_sym_css_named_color_token73 = 77,
  aux_sym_css_named_color_token74 = 78,
  aux_sym_css_named_color_token75 = 79,
  aux_sym_css_named_color_token76 = 80,
  aux_sym_css_named_color_token77 = 81,
  aux_sym_css_named_color_token78 = 82,
  aux_sym_css_named_color_token79 = 83,
  aux_sym_css_named_color_token80 = 84,
  aux_sym_css_named_color_token81 = 85,
  aux_sym_css_named_color_token82 = 86,
  aux_sym_css_named_color_token83 = 87,
  aux_sym_css_named_color_token84 = 88,
  aux_sym_css_named_color_token85 = 89,
  aux_sym_css_named_color_token86 = 90,
  aux_sym_css_named_color_token87 = 91,
  aux_sym_css_named_color_token88 = 92,
  aux_sym_css_named_color_token89 = 93,
  aux_sym_css_named_color_token90 = 94,
  aux_sym_css_named_color_token91 = 95,
  aux_sym_css_named_color_token92 = 96,
  aux_sym_css_named_color_token93 = 97,
  aux_sym_css_named_color_token94 = 98,
  aux_sym_css_named_color_token95 = 99,
  aux_sym_css_named_color_token96 = 100,
  aux_sym_css_named_color_token97 = 101,
  aux_sym_css_named_color_token98 = 102,
  aux_sym_css_named_color_token99 = 103,
  aux_sym_css_named_color_token100 = 104,
  aux_sym_css_named_color_token101 = 105,
  aux_sym_css_named_color_token102 = 106,
  aux_sym_css_named_color_token103 = 107,
  aux_sym_css_named_color_token104 = 108,
  aux_sym_css_named_color_token105 = 109,
  aux_sym_css_named_color_token106 = 110,
  aux_sym_css_named_color_token107 = 111,
  aux_sym_css_named_color_token108 = 112,
  aux_sym_css_named_color_token109 = 113,
  aux_sym_css_named_color_token110 = 114,
  aux_sym_css_named_color_token111 = 115,
  aux_sym_css_named_color_token112 = 116,
  aux_sym_css_named_color_token113 = 117,
  aux_sym_css_named_color_token114 = 118,
  aux_sym_css_named_color_token115 = 119,
  aux_sym_css_named_color_token116 = 120,
  aux_sym_css_named_color_token117 = 121,
  aux_sym_css_named_color_token118 = 122,
  aux_sym_css_named_color_token119 = 123,
  aux_sym_css_named_color_token120 = 124,
  aux_sym_css_named_color_token121 = 125,
  aux_sym_css_named_color_token122 = 126,
  aux_sym_css_named_color_token123 = 127,
  aux_sym_css_named_color_token124 = 128,
  aux_sym_css_named_color_token125 = 129,
  aux_sym_css_named_color_token126 = 130,
  aux_sym_css_named_color_token127 = 131,
  aux_sym_css_named_color_token128 = 132,
  aux_sym_css_named_color_token129 = 133,
  aux_sym_css_named_color_token130 = 134,
  aux_sym_css_named_color_token131 = 135,
  aux_sym_css_named_color_token132 = 136,
  aux_sym_css_named_color_token133 = 137,
  aux_sym_css_named_color_token134 = 138,
  aux_sym_css_named_color_token135 = 139,
  aux_sym_css_named_color_token136 = 140,
  aux_sym_css_named_color_token137 = 141,
  aux_sym_css_named_color_token138 = 142,
  aux_sym_css_named_color_token139 = 143,
  aux_sym_css_named_color_token140 = 144,
  aux_sym_css_named_color_token141 = 145,
  aux_sym_css_named_color_token142 = 146,
  aux_sym_css_named_color_token143 = 147,
  aux_sym_css_named_color_token144 = 148,
  aux_sym_css_named_color_token145 = 149,
  aux_sym_css_named_color_token146 = 150,
  aux_sym_css_named_color_token147 = 151,
  aux_sym_css_named_color_token148 = 152,
  sym_css_keyword_transparent = 153,
  sym_source_file = 154,
  sym_css_hex_color = 155,
  sym_css_named_color = 156,
  aux_sym_source_file_repeat1 = 157,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_source_file] = "source_file",
  [sym_css_hex_color] = "css_hex_color",
  [sym_css_named_color] = "css_named_color",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [sym_source_file] = sym_source_file,
  [sym_css_hex_color] = sym_css_hex_color,
  [sym_css_named_color] = sym_css_named_color,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_source_file] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(764);
      ADVANCE_MAP(
        '#', 763,
        'A', 372,
        'a', 372,
        'B', 189,
        'b', 189,
        'C', 1,
        'c', 1,
        'D', 19,
        'd', 19,
        'F', 318,
        'f', 318,
        'G', 23,
        'g', 23,
        'H', 502,
        'h', 502,
        'I', 473,
        'i', 473,
        'K', 295,
        'k', 295,
        'L', 2,
        'l', 2,
        'M', 3,
        'm', 3,
        'N', 4,
        'n', 4,
        'O', 367,
        'o', 367,
        'P', 5,
        'p', 5,
        'R', 137,
        'r', 137,
        'S', 6,
        's', 6,
        'T', 15,
        't', 15,
        'V', 321,
        'v', 321,
        'W', 293,
        'w', 293,
        'Y', 187,
        'y', 187,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        'A', 121,
        'a', 121,
        'H', 29,
        'h', 29,
        'O', 569,
        'o', 569,
        'R', 319,
        'r', 319,
        'Y', 20,
        'y', 20,
      );
      END_STATE();
    case 2:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(714);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(434);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        'A', 279,
        'a', 279,
        'E', 125,
        'e', 125,
        'I', 123,
        'i', 123,
        'O', 93,
        'o', 93,
      );
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(713);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        'A', 378,
        'a', 378,
        'E', 46,
        'e', 46,
        'I', 474,
        'i', 474,
        'L', 677,
        'l', 677,
        'O', 729,
        'o', 729,
        'U', 575,
        'u', 575,
      );
      END_STATE();
    case 6:
      ADVANCE_MAP(
        'A', 122,
        'a', 122,
        'E', 8,
        'e', 8,
        'I', 194,
        'i', 194,
        'K', 736,
        'k', 736,
        'L', 21,
        'l', 21,
        'N', 508,
        'n', 508,
        'P', 580,
        'p', 580,
        'T', 230,
        't', 230,
      );
      END_STATE();
    case 7:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(771);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(354);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(870);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(897);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(817);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(854);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(797);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        'A', 442,
        'a', 442,
        'E', 24,
        'e', 24,
        'H', 334,
        'h', 334,
        'O', 435,
        'o', 435,
        'R', 51,
        'r', 51,
        'U', 595,
        'u', 595,
      );
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(737);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        'A', 564,
        'a', 564,
        'B', 407,
        'b', 407,
        'O', 604,
        'o', 604,
        'P', 705,
        'p', 705,
        'S', 265,
        's', 265,
        'T', 712,
        't', 712,
        'V', 352,
        'v', 352,
      );
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(363);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        'A', 570,
        'a', 570,
        'E', 138,
        'e', 138,
        'I', 432,
        'i', 432,
        'O', 130,
        'o', 130,
      );
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        'A', 320,
        'a', 320,
        'H', 506,
        'h', 506,
        'O', 374,
        'o', 374,
        'R', 16,
        'r', 16,
      );
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(496);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(751);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(578);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(369);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(739);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(740);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(426);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(646);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(741);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(742);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(424);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(743);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(745);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 40:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(417);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(747);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(748);
      END_STATE();
    case 42:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(500);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(503);
      END_STATE();
    case 43:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 44:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(450);
      END_STATE();
    case 45:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 47:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 48:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 50:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(643);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(660);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 54:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 55:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(674);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(605);
      END_STATE();
    case 57:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(731);
      END_STATE();
    case 58:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(499);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(302);
      END_STATE();
    case 60:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(603);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 62:
      ADVANCE_MAP(
        'A', 420,
        'a', 420,
        'E', 65,
        'e', 65,
        'K', 757,
        'k', 757,
        'L', 54,
        'l', 54,
        'T', 264,
        't', 264,
      );
      END_STATE();
    case 63:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 65:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 66:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(873);
      END_STATE();
    case 68:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(248);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(889);
      END_STATE();
    case 69:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(391);
      END_STATE();
    case 70:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(596);
      END_STATE();
    case 71:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(606);
      END_STATE();
    case 72:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(527);
      END_STATE();
    case 73:
      ADVANCE_MAP(
        'B', 393,
        'b', 393,
        'C', 754,
        'c', 754,
        'G', 523,
        'g', 523,
        'K', 306,
        'k', 306,
        'M', 53,
        'm', 53,
        'O', 380,
        'o', 380,
        'R', 193,
        'r', 193,
        'S', 40,
        's', 40,
        'T', 710,
        't', 710,
        'V', 350,
        'v', 350,
      );
      END_STATE();
    case 74:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(397);
      END_STATE();
    case 75:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(399);
      END_STATE();
    case 76:
      ADVANCE_MAP(
        'B', 401,
        'b', 401,
        'C', 542,
        'c', 542,
        'G', 551,
        'g', 551,
        'P', 340,
        'p', 340,
        'S', 62,
        's', 62,
        'Y', 254,
        'y', 254,
      );
      END_STATE();
    case 77:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(403);
      END_STATE();
    case 78:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(404);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(597);
      END_STATE();
    case 79:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(405);
      END_STATE();
    case 80:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(406);
      END_STATE();
    case 81:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(408);
      END_STATE();
    case 82:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(409);
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
          lookahead == 'b') ADVANCE(412);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(599);
      END_STATE();
    case 86:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(413);
      END_STATE();
    case 87:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(414);
      END_STATE();
    case 88:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(415);
      END_STATE();
    case 89:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(609);
      END_STATE();
    case 90:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(612);
      END_STATE();
    case 91:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 92:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(357);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 94:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(297);
      END_STATE();
    case 95:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(537);
      END_STATE();
    case 96:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(305);
      END_STATE();
    case 97:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(361);
      END_STATE();
    case 98:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 99:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(252);
      END_STATE();
    case 100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 102:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 103:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(301);
      END_STATE();
    case 104:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(591);
      END_STATE();
    case 105:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(304);
      END_STATE();
    case 106:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(820);
      END_STATE();
    case 107:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(876);
      END_STATE();
    case 108:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(801);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(781);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(821);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(828);
      END_STATE();
    case 112:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(875);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(800);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(858);
      END_STATE();
    case 115:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(792);
      END_STATE();
    case 116:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(877);
      END_STATE();
    case 117:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(880);
      END_STATE();
    case 118:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(777);
      END_STATE();
    case 119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(864);
      END_STATE();
    case 120:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(715);
      END_STATE();
    case 121:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 122:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(437);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 123:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(482);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(652);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(653);
      END_STATE();
    case 124:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 125:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 126:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(388);
      END_STATE();
    case 127:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(758);
      END_STATE();
    case 128:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 129:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 130:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(275);
      END_STATE();
    case 131:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 133:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 134:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 136:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(755);
      END_STATE();
    case 137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 139:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(778);
      END_STATE();
    case 140:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 141:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 142:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(872);
      END_STATE();
    case 145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(913);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(775);
      END_STATE();
    case 148:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 149:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(887);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 151:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(899);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(908);
      END_STATE();
    case 153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 154:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 155:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(784);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(836);
      END_STATE();
    case 158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      END_STATE();
    case 161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(910);
      END_STATE();
    case 163:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(772);
      END_STATE();
    case 164:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(857);
      END_STATE();
    case 169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(886);
      END_STATE();
    case 170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(914);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 173:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(869);
      END_STATE();
    case 174:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(770);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(846);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(859);
      END_STATE();
    case 177:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(865);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 179:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 181:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(888);
      END_STATE();
    case 182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      END_STATE();
    case 183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(863);
      END_STATE();
    case 186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(856);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 189:
      ADVANCE_MAP(
        'E', 312,
        'e', 312,
        'I', 628,
        'i', 628,
        'L', 7,
        'l', 7,
        'R', 507,
        'r', 507,
        'U', 574,
        'u', 574,
      );
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(753);
      END_STATE();
    case 191:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 192:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 193:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(484);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      END_STATE();
    case 195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(445);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(825);
      END_STATE();
    case 198:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 200:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(483);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 208:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 209:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(795);
      END_STATE();
    case 214:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 216:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(460);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(842);
      END_STATE();
    case 219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 222:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 223:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 224:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 226:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(469);
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
          lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(658);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 244:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 245:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 250:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 254:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 257:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 264:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(55);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(627);
      END_STATE();
    case 266:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(882);
      END_STATE();
    case 267:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(266);
      END_STATE();
    case 268:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(534);
      END_STATE();
    case 270:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(395);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(326);
      END_STATE();
    case 271:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(548);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(711);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(351);
      END_STATE();
    case 272:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(298);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 273:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(573);
      END_STATE();
    case 274:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 275:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(199);
      END_STATE();
    case 276:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 277:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 278:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(311);
      END_STATE();
    case 279:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(204);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 280:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(589);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(307);
      END_STATE();
    case 281:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(601);
      END_STATE();
    case 282:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 283:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(608);
      END_STATE();
    case 284:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(613);
      END_STATE();
    case 285:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(614);
      END_STATE();
    case 286:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(285);
      END_STATE();
    case 287:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(616);
      END_STATE();
    case 288:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(617);
      END_STATE();
    case 289:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(618);
      END_STATE();
    case 290:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(619);
      END_STATE();
    case 291:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(620);
      END_STATE();
    case 292:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(232);
      END_STATE();
    case 294:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(833);
      END_STATE();
    case 295:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 296:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(635);
      END_STATE();
    case 297:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(554);
      END_STATE();
    case 298:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(645);
      END_STATE();
    case 299:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(322);
      END_STATE();
    case 300:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(341);
      END_STATE();
    case 301:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(333);
      END_STATE();
    case 302:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 303:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(324);
      END_STATE();
    case 304:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(327);
      END_STATE();
    case 305:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 306:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(47);
      END_STATE();
    case 307:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(231);
      END_STATE();
    case 308:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(344);
      END_STATE();
    case 309:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(346);
      END_STATE();
    case 310:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(347);
      END_STATE();
    case 311:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(673);
      END_STATE();
    case 312:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 313:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 314:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(831);
      END_STATE();
    case 315:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(796);
      END_STATE();
    case 316:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 317:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 318:
      ADVANCE_MAP(
        'I', 577,
        'i', 577,
        'L', 513,
        'l', 513,
        'O', 579,
        'o', 579,
        'U', 91,
        'u', 91,
      );
      END_STATE();
    case 319:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 320:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 321:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 322:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 323:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 324:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(553);
      END_STATE();
    case 325:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 326:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 327:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 328:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(475);
      END_STATE();
    case 329:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 330:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 331:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 332:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(478);
      END_STATE();
    case 333:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(268);
      END_STATE();
    case 334:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 335:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 336:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 337:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 338:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 339:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(717);
      END_STATE();
    case 340:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(481);
      END_STATE();
    case 341:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 342:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 343:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 344:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(662);
      END_STATE();
    case 345:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(641);
      END_STATE();
    case 346:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(663);
      END_STATE();
    case 347:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(664);
      END_STATE();
    case 348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(565);
      END_STATE();
    case 349:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(541);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 351:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 352:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 353:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(501);
      END_STATE();
    case 354:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(550);
      END_STATE();
    case 355:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(73);
      END_STATE();
    case 356:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(884);
      END_STATE();
    case 357:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(776);
      END_STATE();
    case 358:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(827);
      END_STATE();
    case 359:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(787);
      END_STATE();
    case 360:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(809);
      END_STATE();
    case 361:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(814);
      END_STATE();
    case 362:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(843);
      END_STATE();
    case 363:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(314);
      END_STATE();
    case 364:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(315);
      END_STATE();
    case 365:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(170);
      END_STATE();
    case 366:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(756);
      END_STATE();
    case 367:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 368:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(907);
      END_STATE();
    case 369:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(785);
      END_STATE();
    case 370:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(896);
      END_STATE();
    case 371:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(837);
      END_STATE();
    case 372:
      ADVANCE_MAP(
        'L', 316,
        'l', 316,
        'N', 654,
        'n', 654,
        'Q', 679,
        'q', 679,
        'Z', 703,
        'z', 703,
      );
      END_STATE();
    case 373:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(749);
      END_STATE();
    case 374:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 375:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 376:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 377:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(680);
      END_STATE();
    case 378:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 379:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 380:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 381:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 382:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 384:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 385:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 386:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 387:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 389:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(510);
      END_STATE();
    case 390:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(685);
      END_STATE();
    case 392:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(686);
      END_STATE();
    case 394:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(512);
      END_STATE();
    case 396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 397:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(687);
      END_STATE();
    case 398:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 399:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(688);
      END_STATE();
    case 400:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(517);
      END_STATE();
    case 401:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(689);
      END_STATE();
    case 402:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(519);
      END_STATE();
    case 403:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(690);
      END_STATE();
    case 404:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(691);
      END_STATE();
    case 405:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(692);
      END_STATE();
    case 406:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(693);
      END_STATE();
    case 407:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(694);
      END_STATE();
    case 408:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(695);
      END_STATE();
    case 409:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(696);
      END_STATE();
    case 410:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(697);
      END_STATE();
    case 411:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(698);
      END_STATE();
    case 412:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(699);
      END_STATE();
    case 413:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(700);
      END_STATE();
    case 414:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(701);
      END_STATE();
    case 415:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(702);
      END_STATE();
    case 416:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 417:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(438);
      END_STATE();
    case 418:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 419:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 420:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(439);
      END_STATE();
    case 421:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 422:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 423:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 424:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(732);
      END_STATE();
    case 425:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 426:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 427:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 428:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 429:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(885);
      END_STATE();
    case 430:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 431:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(866);
      END_STATE();
    case 432:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 433:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(644);
      END_STATE();
    case 434:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(521);
      END_STATE();
    case 435:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 436:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(520);
      END_STATE();
    case 437:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(530);
      END_STATE();
    case 438:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(532);
      END_STATE();
    case 439:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(533);
      END_STATE();
    case 440:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(535);
      END_STATE();
    case 441:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 442:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(906);
      END_STATE();
    case 443:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 444:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(780);
      END_STATE();
    case 445:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(823);
      END_STATE();
    case 446:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(853);
      END_STATE();
    case 447:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(855);
      END_STATE();
    case 448:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 449:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(788);
      END_STATE();
    case 450:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(791);
      END_STATE();
    case 451:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(868);
      END_STATE();
    case 452:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(895);
      END_STATE();
    case 453:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(794);
      END_STATE();
    case 454:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 455:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(838);
      END_STATE();
    case 456:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(852);
      END_STATE();
    case 457:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(878);
      END_STATE();
    case 458:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(890);
      END_STATE();
    case 459:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(802);
      END_STATE();
    case 460:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(841);
      END_STATE();
    case 461:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(894);
      END_STATE();
    case 462:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(816);
      END_STATE();
    case 463:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(844);
      END_STATE();
    case 464:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(892);
      END_STATE();
    case 465:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(904);
      END_STATE();
    case 466:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(916);
      END_STATE();
    case 467:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(803);
      END_STATE();
    case 468:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(835);
      END_STATE();
    case 469:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(845);
      END_STATE();
    case 470:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(798);
      END_STATE();
    case 471:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(860);
      END_STATE();
    case 472:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(862);
      END_STATE();
    case 473:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(124);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(515);
      END_STATE();
    case 474:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(356);
      END_STATE();
    case 475:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 476:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(629);
      END_STATE();
    case 477:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(630);
      END_STATE();
    case 478:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 479:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(556);
      END_STATE();
    case 480:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 481:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(362);
      END_STATE();
    case 482:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 483:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(656);
      END_STATE();
    case 484:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 485:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 486:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(650);
      END_STATE();
    case 487:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(583);
      END_STATE();
    case 488:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 489:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 490:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 492:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 493:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 494:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(659);
      END_STATE();
    case 496:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 497:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 498:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 499:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(592);
      END_STATE();
    case 501:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 502:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(479);
      END_STATE();
    case 503:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(829);
      END_STATE();
    case 504:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(909);
      END_STATE();
    case 505:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(818);
      END_STATE();
    case 506:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 507:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(724);
      END_STATE();
    case 508:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(718);
      END_STATE();
    case 509:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 510:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(719);
      END_STATE();
    case 511:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(636);
      END_STATE();
    case 512:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 513:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 514:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(721);
      END_STATE();
    case 515:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 516:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 517:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(722);
      END_STATE();
    case 518:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 519:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(723);
      END_STATE();
    case 520:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 521:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      END_STATE();
    case 522:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(516);
      END_STATE();
    case 523:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(394);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 524:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 525:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 526:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 527:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(584);
      END_STATE();
    case 528:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 529:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 530:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 531:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 532:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(459);
      END_STATE();
    case 533:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 534:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 535:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(488);
      END_STATE();
    case 536:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 537:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 539:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(727);
      END_STATE();
    case 540:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(728);
      END_STATE();
    case 541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 542:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(602);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 544:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(416);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 550:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(733);
      END_STATE();
    case 551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(419);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 552:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(560);
      END_STATE();
    case 553:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(881);
      END_STATE();
    case 554:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(676);
      END_STATE();
    case 555:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 556:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(332);
      END_STATE();
    case 557:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 558:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 559:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 560:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(338);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(366);
      END_STATE();
    case 561:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(706);
      END_STATE();
    case 562:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(682);
      END_STATE();
    case 563:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(681);
      END_STATE();
    case 564:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(683);
      END_STATE();
    case 565:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(684);
      END_STATE();
    case 566:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(707);
      END_STATE();
    case 567:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(708);
      END_STATE();
    case 568:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(709);
      END_STATE();
    case 569:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 570:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 571:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(898);
      END_STATE();
    case 572:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(832);
      END_STATE();
    case 573:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 574:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(373);
      END_STATE();
    case 575:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 576:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 577:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 578:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 579:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 580:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 581:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 582:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 583:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 584:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(505);
      END_STATE();
    case 585:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 586:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 587:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 588:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 589:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 590:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 591:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 592:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 593:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 594:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(563);
      END_STATE();
    case 596:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 597:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 598:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 602:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 603:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 604:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 605:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 606:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 607:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      END_STATE();
    case 608:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 609:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 610:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 611:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 612:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 613:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 614:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 615:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 616:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 617:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 618:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 619:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 620:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 621:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 624:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(566);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 626:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 628:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(562);
      END_STATE();
    case 629:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(72);
      END_STATE();
    case 630:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(557);
      END_STATE();
    case 631:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(651);
      END_STATE();
    case 632:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(294);
      END_STATE();
    case 633:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(665);
      END_STATE();
    case 634:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(671);
      END_STATE();
    case 635:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      END_STATE();
    case 636:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(158);
      END_STATE();
    case 637:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(162);
      END_STATE();
    case 638:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      END_STATE();
    case 639:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      END_STATE();
    case 640:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(180);
      END_STATE();
    case 641:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      END_STATE();
    case 642:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(752);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 643:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(330);
      END_STATE();
    case 644:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(531);
      END_STATE();
    case 645:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      END_STATE();
    case 646:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(912);
      END_STATE();
    case 647:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(911);
      END_STATE();
    case 648:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(779);
      END_STATE();
    case 649:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(808);
      END_STATE();
    case 650:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(917);
      END_STATE();
    case 651:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(730);
      END_STATE();
    case 652:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      END_STATE();
    case 653:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(750);
      END_STATE();
    case 654:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(348);
      END_STATE();
    case 655:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(504);
      END_STATE();
    case 656:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      END_STATE();
    case 657:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 658:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(146);
      END_STATE();
    case 659:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      END_STATE();
    case 660:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 661:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(167);
      END_STATE();
    case 662:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(172);
      END_STATE();
    case 663:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      END_STATE();
    case 664:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 665:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(383);
      END_STATE();
    case 666:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(249);
      END_STATE();
    case 667:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(590);
      END_STATE();
    case 668:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(593);
      END_STATE();
    case 669:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(594);
      END_STATE();
    case 670:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      END_STATE();
    case 671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      END_STATE();
    case 672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(75);
      END_STATE();
    case 673:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      END_STATE();
    case 675:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(883);
      END_STATE();
    case 676:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(267);
      END_STATE();
    case 677:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(429);
      END_STATE();
    case 678:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(430);
      END_STATE();
    case 679:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 680:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(632);
      END_STATE();
    case 681:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(526);
      END_STATE();
    case 682:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(147);
      END_STATE();
    case 683:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 684:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 685:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 686:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 687:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 688:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 689:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 690:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 691:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 692:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 693:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 694:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 695:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 696:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 697:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 698:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 699:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 700:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 701:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 702:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 703:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(582);
      END_STATE();
    case 704:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(638);
      END_STATE();
    case 705:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(607);
      END_STATE();
    case 706:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(610);
      END_STATE();
    case 707:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(543);
      END_STATE();
    case 708:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(545);
      END_STATE();
    case 709:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(547);
      END_STATE();
    case 710:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(624);
      END_STATE();
    case 711:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(625);
      END_STATE();
    case 712:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(626);
      END_STATE();
    case 713:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(10);
      END_STATE();
    case 714:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(198);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(494);
      END_STATE();
    case 715:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 716:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(207);
      END_STATE();
    case 717:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(263);
      END_STATE();
    case 718:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(903);
      END_STATE();
    case 719:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(915);
      END_STATE();
    case 720:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(826);
      END_STATE();
    case 721:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(824);
      END_STATE();
    case 722:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(850);
      END_STATE();
    case 723:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(839);
      END_STATE();
    case 724:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(444);
      END_STATE();
    case 725:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(522);
      END_STATE();
    case 726:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(458);
      END_STATE();
    case 727:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(461);
      END_STATE();
    case 728:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(464);
      END_STATE();
    case 729:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(135);
      END_STATE();
    case 730:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(300);
      END_STATE();
    case 731:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(303);
      END_STATE();
    case 732:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(308);
      END_STATE();
    case 733:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(309);
      END_STATE();
    case 734:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(310);
      END_STATE();
    case 735:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(262);
      END_STATE();
    case 736:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 737:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(822);
      END_STATE();
    case 738:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(830);
      END_STATE();
    case 739:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(811);
      END_STATE();
    case 740:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(812);
      END_STATE();
    case 741:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(793);
      END_STATE();
    case 742:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(840);
      END_STATE();
    case 743:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(901);
      END_STATE();
    case 744:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(902);
      END_STATE();
    case 745:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(805);
      END_STATE();
    case 746:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(806);
      END_STATE();
    case 747:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(847);
      END_STATE();
    case 748:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(848);
      END_STATE();
    case 749:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(725);
      END_STATE();
    case 750:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(581);
      END_STATE();
    case 751:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 752:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 753:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 754:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 755:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 756:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 757:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(83);
      END_STATE();
    case 758:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(256);
      END_STATE();
    case 759:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(767);
      END_STATE();
    case 760:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(765);
      END_STATE();
    case 761:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(766);
      END_STATE();
    case 762:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(759);
      END_STATE();
    case 763:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(762);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_css_hex_color_6_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(761);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_css_hex_color_8_digits);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_css_hex_color_3_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(768);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_css_hex_color_4_digits);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(760);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_css_named_color_token1);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_css_named_color_token2);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_css_named_color_token3);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_css_named_color_token4);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_css_named_color_token5);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_css_named_color_token6);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_css_named_color_token7);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_css_named_color_token8);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_css_named_color_token9);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_css_named_color_token10);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(349);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_css_named_color_token11);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_css_named_color_token12);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_css_named_color_token13);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_css_named_color_token14);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_css_named_color_token15);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_css_named_color_token16);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_css_named_color_token17);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_css_named_color_token18);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_css_named_color_token19);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_css_named_color_token20);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_css_named_color_token21);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_css_named_color_token22);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_css_named_color_token23);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_css_named_color_token24);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_css_named_color_token25);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_css_named_color_token26);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_css_named_color_token27);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_css_named_color_token28);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_css_named_color_token29);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_css_named_color_token30);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_css_named_color_token31);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_css_named_color_token32);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_css_named_color_token33);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_css_named_color_token34);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_css_named_color_token35);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_css_named_color_token36);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_css_named_color_token37);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_css_named_color_token38);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_css_named_color_token39);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_css_named_color_token40);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_css_named_color_token41);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_css_named_color_token42);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_css_named_color_token43);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_css_named_color_token44);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_css_named_color_token45);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_css_named_color_token46);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_css_named_color_token47);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_css_named_color_token48);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_css_named_color_token49);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_css_named_color_token50);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_css_named_color_token51);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_css_named_color_token52);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_css_named_color_token53);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_css_named_color_token54);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_css_named_color_token55);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(253);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_css_named_color_token56);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_css_named_color_token57);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_css_named_color_token58);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_css_named_color_token59);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_css_named_color_token60);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_css_named_color_token61);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_css_named_color_token62);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_css_named_color_token63);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_css_named_color_token64);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(377);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_css_named_color_token65);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_css_named_color_token66);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_css_named_color_token67);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_css_named_color_token68);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_css_named_color_token69);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_css_named_color_token70);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_css_named_color_token71);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_css_named_color_token72);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_css_named_color_token73);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_css_named_color_token74);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_css_named_color_token75);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_css_named_color_token76);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_css_named_color_token77);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_css_named_color_token78);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_css_named_color_token79);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_css_named_color_token80);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_css_named_color_token81);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_css_named_color_token82);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_css_named_color_token83);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(611);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_css_named_color_token84);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_css_named_color_token85);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_css_named_color_token86);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_css_named_color_token87);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_css_named_color_token88);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_css_named_color_token89);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_css_named_color_token90);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_css_named_color_token91);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_css_named_color_token92);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_css_named_color_token93);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_css_named_color_token94);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_css_named_color_token95);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_css_named_color_token96);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_css_named_color_token97);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_css_named_color_token98);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_css_named_color_token99);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_css_named_color_token100);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_css_named_color_token101);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_css_named_color_token102);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_css_named_color_token103);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_css_named_color_token104);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(588);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_css_named_color_token105);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_css_named_color_token106);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_css_named_color_token107);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_css_named_color_token108);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_css_named_color_token109);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_css_named_color_token110);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_css_named_color_token111);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_css_named_color_token112);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_css_named_color_token113);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_css_named_color_token114);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_css_named_color_token115);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_css_named_color_token116);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_css_named_color_token117);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_css_named_color_token118);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_css_named_color_token119);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_css_named_color_token120);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_css_named_color_token121);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_css_named_color_token122);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_css_named_color_token123);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_css_named_color_token124);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_css_named_color_token125);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_css_named_color_token126);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_css_named_color_token127);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_css_named_color_token128);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_css_named_color_token129);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_css_named_color_token130);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_css_named_color_token131);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_css_named_color_token132);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_css_named_color_token133);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_css_named_color_token134);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_css_named_color_token135);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_css_named_color_token136);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_css_named_color_token137);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_css_named_color_token138);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_css_named_color_token139);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_css_named_color_token140);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_css_named_color_token141);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_css_named_color_token142);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_css_named_color_token143);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_css_named_color_token144);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_css_named_color_token145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(436);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_css_named_color_token146);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_css_named_color_token147);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(615);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_css_named_color_token148);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_css_keyword_transparent);
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(6),
    [sym_css_hex_color] = STATE(2),
    [sym_css_named_color] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_css_hex_color_6_digits] = ACTIONS(5),
    [sym_css_hex_color_8_digits] = ACTIONS(7),
    [sym_css_hex_color_3_digits] = ACTIONS(5),
    [sym_css_hex_color_4_digits] = ACTIONS(5),
    [aux_sym_css_named_color_token1] = ACTIONS(9),
    [aux_sym_css_named_color_token2] = ACTIONS(9),
    [aux_sym_css_named_color_token3] = ACTIONS(11),
    [aux_sym_css_named_color_token4] = ACTIONS(9),
    [aux_sym_css_named_color_token5] = ACTIONS(9),
    [aux_sym_css_named_color_token6] = ACTIONS(9),
    [aux_sym_css_named_color_token7] = ACTIONS(9),
    [aux_sym_css_named_color_token8] = ACTIONS(9),
    [aux_sym_css_named_color_token9] = ACTIONS(9),
    [aux_sym_css_named_color_token10] = ACTIONS(11),
    [aux_sym_css_named_color_token11] = ACTIONS(9),
    [aux_sym_css_named_color_token12] = ACTIONS(9),
    [aux_sym_css_named_color_token13] = ACTIONS(9),
    [aux_sym_css_named_color_token14] = ACTIONS(9),
    [aux_sym_css_named_color_token15] = ACTIONS(9),
    [aux_sym_css_named_color_token16] = ACTIONS(9),
    [aux_sym_css_named_color_token17] = ACTIONS(9),
    [aux_sym_css_named_color_token18] = ACTIONS(9),
    [aux_sym_css_named_color_token19] = ACTIONS(9),
    [aux_sym_css_named_color_token20] = ACTIONS(9),
    [aux_sym_css_named_color_token21] = ACTIONS(9),
    [aux_sym_css_named_color_token22] = ACTIONS(9),
    [aux_sym_css_named_color_token23] = ACTIONS(9),
    [aux_sym_css_named_color_token24] = ACTIONS(9),
    [aux_sym_css_named_color_token25] = ACTIONS(9),
    [aux_sym_css_named_color_token26] = ACTIONS(9),
    [aux_sym_css_named_color_token27] = ACTIONS(9),
    [aux_sym_css_named_color_token28] = ACTIONS(9),
    [aux_sym_css_named_color_token29] = ACTIONS(9),
    [aux_sym_css_named_color_token30] = ACTIONS(9),
    [aux_sym_css_named_color_token31] = ACTIONS(9),
    [aux_sym_css_named_color_token32] = ACTIONS(9),
    [aux_sym_css_named_color_token33] = ACTIONS(9),
    [aux_sym_css_named_color_token34] = ACTIONS(9),
    [aux_sym_css_named_color_token35] = ACTIONS(9),
    [aux_sym_css_named_color_token36] = ACTIONS(9),
    [aux_sym_css_named_color_token37] = ACTIONS(9),
    [aux_sym_css_named_color_token38] = ACTIONS(9),
    [aux_sym_css_named_color_token39] = ACTIONS(9),
    [aux_sym_css_named_color_token40] = ACTIONS(9),
    [aux_sym_css_named_color_token41] = ACTIONS(9),
    [aux_sym_css_named_color_token42] = ACTIONS(9),
    [aux_sym_css_named_color_token43] = ACTIONS(9),
    [aux_sym_css_named_color_token44] = ACTIONS(9),
    [aux_sym_css_named_color_token45] = ACTIONS(9),
    [aux_sym_css_named_color_token46] = ACTIONS(9),
    [aux_sym_css_named_color_token47] = ACTIONS(9),
    [aux_sym_css_named_color_token48] = ACTIONS(9),
    [aux_sym_css_named_color_token49] = ACTIONS(9),
    [aux_sym_css_named_color_token50] = ACTIONS(9),
    [aux_sym_css_named_color_token51] = ACTIONS(9),
    [aux_sym_css_named_color_token52] = ACTIONS(11),
    [aux_sym_css_named_color_token53] = ACTIONS(9),
    [aux_sym_css_named_color_token54] = ACTIONS(9),
    [aux_sym_css_named_color_token55] = ACTIONS(11),
    [aux_sym_css_named_color_token56] = ACTIONS(9),
    [aux_sym_css_named_color_token57] = ACTIONS(9),
    [aux_sym_css_named_color_token58] = ACTIONS(9),
    [aux_sym_css_named_color_token59] = ACTIONS(9),
    [aux_sym_css_named_color_token60] = ACTIONS(9),
    [aux_sym_css_named_color_token61] = ACTIONS(9),
    [aux_sym_css_named_color_token62] = ACTIONS(9),
    [aux_sym_css_named_color_token63] = ACTIONS(9),
    [aux_sym_css_named_color_token64] = ACTIONS(11),
    [aux_sym_css_named_color_token65] = ACTIONS(9),
    [aux_sym_css_named_color_token66] = ACTIONS(9),
    [aux_sym_css_named_color_token67] = ACTIONS(9),
    [aux_sym_css_named_color_token68] = ACTIONS(9),
    [aux_sym_css_named_color_token69] = ACTIONS(9),
    [aux_sym_css_named_color_token70] = ACTIONS(9),
    [aux_sym_css_named_color_token71] = ACTIONS(9),
    [aux_sym_css_named_color_token72] = ACTIONS(9),
    [aux_sym_css_named_color_token73] = ACTIONS(9),
    [aux_sym_css_named_color_token74] = ACTIONS(9),
    [aux_sym_css_named_color_token75] = ACTIONS(9),
    [aux_sym_css_named_color_token76] = ACTIONS(9),
    [aux_sym_css_named_color_token77] = ACTIONS(9),
    [aux_sym_css_named_color_token78] = ACTIONS(9),
    [aux_sym_css_named_color_token79] = ACTIONS(9),
    [aux_sym_css_named_color_token80] = ACTIONS(9),
    [aux_sym_css_named_color_token81] = ACTIONS(9),
    [aux_sym_css_named_color_token82] = ACTIONS(9),
    [aux_sym_css_named_color_token83] = ACTIONS(11),
    [aux_sym_css_named_color_token84] = ACTIONS(9),
    [aux_sym_css_named_color_token85] = ACTIONS(9),
    [aux_sym_css_named_color_token86] = ACTIONS(9),
    [aux_sym_css_named_color_token87] = ACTIONS(9),
    [aux_sym_css_named_color_token88] = ACTIONS(9),
    [aux_sym_css_named_color_token89] = ACTIONS(9),
    [aux_sym_css_named_color_token90] = ACTIONS(9),
    [aux_sym_css_named_color_token91] = ACTIONS(9),
    [aux_sym_css_named_color_token92] = ACTIONS(9),
    [aux_sym_css_named_color_token93] = ACTIONS(9),
    [aux_sym_css_named_color_token94] = ACTIONS(9),
    [aux_sym_css_named_color_token95] = ACTIONS(9),
    [aux_sym_css_named_color_token96] = ACTIONS(9),
    [aux_sym_css_named_color_token97] = ACTIONS(9),
    [aux_sym_css_named_color_token98] = ACTIONS(9),
    [aux_sym_css_named_color_token99] = ACTIONS(9),
    [aux_sym_css_named_color_token100] = ACTIONS(9),
    [aux_sym_css_named_color_token101] = ACTIONS(9),
    [aux_sym_css_named_color_token102] = ACTIONS(9),
    [aux_sym_css_named_color_token103] = ACTIONS(9),
    [aux_sym_css_named_color_token104] = ACTIONS(11),
    [aux_sym_css_named_color_token105] = ACTIONS(9),
    [aux_sym_css_named_color_token106] = ACTIONS(11),
    [aux_sym_css_named_color_token107] = ACTIONS(9),
    [aux_sym_css_named_color_token108] = ACTIONS(9),
    [aux_sym_css_named_color_token109] = ACTIONS(9),
    [aux_sym_css_named_color_token110] = ACTIONS(9),
    [aux_sym_css_named_color_token111] = ACTIONS(9),
    [aux_sym_css_named_color_token112] = ACTIONS(9),
    [aux_sym_css_named_color_token113] = ACTIONS(9),
    [aux_sym_css_named_color_token114] = ACTIONS(9),
    [aux_sym_css_named_color_token115] = ACTIONS(9),
    [aux_sym_css_named_color_token116] = ACTIONS(9),
    [aux_sym_css_named_color_token117] = ACTIONS(9),
    [aux_sym_css_named_color_token118] = ACTIONS(9),
    [aux_sym_css_named_color_token119] = ACTIONS(9),
    [aux_sym_css_named_color_token120] = ACTIONS(9),
    [aux_sym_css_named_color_token121] = ACTIONS(9),
    [aux_sym_css_named_color_token122] = ACTIONS(9),
    [aux_sym_css_named_color_token123] = ACTIONS(9),
    [aux_sym_css_named_color_token124] = ACTIONS(9),
    [aux_sym_css_named_color_token125] = ACTIONS(9),
    [aux_sym_css_named_color_token126] = ACTIONS(9),
    [aux_sym_css_named_color_token127] = ACTIONS(9),
    [aux_sym_css_named_color_token128] = ACTIONS(9),
    [aux_sym_css_named_color_token129] = ACTIONS(9),
    [aux_sym_css_named_color_token130] = ACTIONS(9),
    [aux_sym_css_named_color_token131] = ACTIONS(9),
    [aux_sym_css_named_color_token132] = ACTIONS(9),
    [aux_sym_css_named_color_token133] = ACTIONS(9),
    [aux_sym_css_named_color_token134] = ACTIONS(9),
    [aux_sym_css_named_color_token135] = ACTIONS(9),
    [aux_sym_css_named_color_token136] = ACTIONS(9),
    [aux_sym_css_named_color_token137] = ACTIONS(9),
    [aux_sym_css_named_color_token138] = ACTIONS(9),
    [aux_sym_css_named_color_token139] = ACTIONS(9),
    [aux_sym_css_named_color_token140] = ACTIONS(9),
    [aux_sym_css_named_color_token141] = ACTIONS(9),
    [aux_sym_css_named_color_token142] = ACTIONS(9),
    [aux_sym_css_named_color_token143] = ACTIONS(9),
    [aux_sym_css_named_color_token144] = ACTIONS(9),
    [aux_sym_css_named_color_token145] = ACTIONS(11),
    [aux_sym_css_named_color_token146] = ACTIONS(9),
    [aux_sym_css_named_color_token147] = ACTIONS(11),
    [aux_sym_css_named_color_token148] = ACTIONS(9),
    [sym_css_keyword_transparent] = ACTIONS(13),
  },
  [2] = {
    [sym_css_hex_color] = STATE(3),
    [sym_css_named_color] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_css_hex_color_6_digits] = ACTIONS(5),
    [sym_css_hex_color_8_digits] = ACTIONS(7),
    [sym_css_hex_color_3_digits] = ACTIONS(5),
    [sym_css_hex_color_4_digits] = ACTIONS(5),
    [aux_sym_css_named_color_token1] = ACTIONS(9),
    [aux_sym_css_named_color_token2] = ACTIONS(9),
    [aux_sym_css_named_color_token3] = ACTIONS(11),
    [aux_sym_css_named_color_token4] = ACTIONS(9),
    [aux_sym_css_named_color_token5] = ACTIONS(9),
    [aux_sym_css_named_color_token6] = ACTIONS(9),
    [aux_sym_css_named_color_token7] = ACTIONS(9),
    [aux_sym_css_named_color_token8] = ACTIONS(9),
    [aux_sym_css_named_color_token9] = ACTIONS(9),
    [aux_sym_css_named_color_token10] = ACTIONS(11),
    [aux_sym_css_named_color_token11] = ACTIONS(9),
    [aux_sym_css_named_color_token12] = ACTIONS(9),
    [aux_sym_css_named_color_token13] = ACTIONS(9),
    [aux_sym_css_named_color_token14] = ACTIONS(9),
    [aux_sym_css_named_color_token15] = ACTIONS(9),
    [aux_sym_css_named_color_token16] = ACTIONS(9),
    [aux_sym_css_named_color_token17] = ACTIONS(9),
    [aux_sym_css_named_color_token18] = ACTIONS(9),
    [aux_sym_css_named_color_token19] = ACTIONS(9),
    [aux_sym_css_named_color_token20] = ACTIONS(9),
    [aux_sym_css_named_color_token21] = ACTIONS(9),
    [aux_sym_css_named_color_token22] = ACTIONS(9),
    [aux_sym_css_named_color_token23] = ACTIONS(9),
    [aux_sym_css_named_color_token24] = ACTIONS(9),
    [aux_sym_css_named_color_token25] = ACTIONS(9),
    [aux_sym_css_named_color_token26] = ACTIONS(9),
    [aux_sym_css_named_color_token27] = ACTIONS(9),
    [aux_sym_css_named_color_token28] = ACTIONS(9),
    [aux_sym_css_named_color_token29] = ACTIONS(9),
    [aux_sym_css_named_color_token30] = ACTIONS(9),
    [aux_sym_css_named_color_token31] = ACTIONS(9),
    [aux_sym_css_named_color_token32] = ACTIONS(9),
    [aux_sym_css_named_color_token33] = ACTIONS(9),
    [aux_sym_css_named_color_token34] = ACTIONS(9),
    [aux_sym_css_named_color_token35] = ACTIONS(9),
    [aux_sym_css_named_color_token36] = ACTIONS(9),
    [aux_sym_css_named_color_token37] = ACTIONS(9),
    [aux_sym_css_named_color_token38] = ACTIONS(9),
    [aux_sym_css_named_color_token39] = ACTIONS(9),
    [aux_sym_css_named_color_token40] = ACTIONS(9),
    [aux_sym_css_named_color_token41] = ACTIONS(9),
    [aux_sym_css_named_color_token42] = ACTIONS(9),
    [aux_sym_css_named_color_token43] = ACTIONS(9),
    [aux_sym_css_named_color_token44] = ACTIONS(9),
    [aux_sym_css_named_color_token45] = ACTIONS(9),
    [aux_sym_css_named_color_token46] = ACTIONS(9),
    [aux_sym_css_named_color_token47] = ACTIONS(9),
    [aux_sym_css_named_color_token48] = ACTIONS(9),
    [aux_sym_css_named_color_token49] = ACTIONS(9),
    [aux_sym_css_named_color_token50] = ACTIONS(9),
    [aux_sym_css_named_color_token51] = ACTIONS(9),
    [aux_sym_css_named_color_token52] = ACTIONS(11),
    [aux_sym_css_named_color_token53] = ACTIONS(9),
    [aux_sym_css_named_color_token54] = ACTIONS(9),
    [aux_sym_css_named_color_token55] = ACTIONS(11),
    [aux_sym_css_named_color_token56] = ACTIONS(9),
    [aux_sym_css_named_color_token57] = ACTIONS(9),
    [aux_sym_css_named_color_token58] = ACTIONS(9),
    [aux_sym_css_named_color_token59] = ACTIONS(9),
    [aux_sym_css_named_color_token60] = ACTIONS(9),
    [aux_sym_css_named_color_token61] = ACTIONS(9),
    [aux_sym_css_named_color_token62] = ACTIONS(9),
    [aux_sym_css_named_color_token63] = ACTIONS(9),
    [aux_sym_css_named_color_token64] = ACTIONS(11),
    [aux_sym_css_named_color_token65] = ACTIONS(9),
    [aux_sym_css_named_color_token66] = ACTIONS(9),
    [aux_sym_css_named_color_token67] = ACTIONS(9),
    [aux_sym_css_named_color_token68] = ACTIONS(9),
    [aux_sym_css_named_color_token69] = ACTIONS(9),
    [aux_sym_css_named_color_token70] = ACTIONS(9),
    [aux_sym_css_named_color_token71] = ACTIONS(9),
    [aux_sym_css_named_color_token72] = ACTIONS(9),
    [aux_sym_css_named_color_token73] = ACTIONS(9),
    [aux_sym_css_named_color_token74] = ACTIONS(9),
    [aux_sym_css_named_color_token75] = ACTIONS(9),
    [aux_sym_css_named_color_token76] = ACTIONS(9),
    [aux_sym_css_named_color_token77] = ACTIONS(9),
    [aux_sym_css_named_color_token78] = ACTIONS(9),
    [aux_sym_css_named_color_token79] = ACTIONS(9),
    [aux_sym_css_named_color_token80] = ACTIONS(9),
    [aux_sym_css_named_color_token81] = ACTIONS(9),
    [aux_sym_css_named_color_token82] = ACTIONS(9),
    [aux_sym_css_named_color_token83] = ACTIONS(11),
    [aux_sym_css_named_color_token84] = ACTIONS(9),
    [aux_sym_css_named_color_token85] = ACTIONS(9),
    [aux_sym_css_named_color_token86] = ACTIONS(9),
    [aux_sym_css_named_color_token87] = ACTIONS(9),
    [aux_sym_css_named_color_token88] = ACTIONS(9),
    [aux_sym_css_named_color_token89] = ACTIONS(9),
    [aux_sym_css_named_color_token90] = ACTIONS(9),
    [aux_sym_css_named_color_token91] = ACTIONS(9),
    [aux_sym_css_named_color_token92] = ACTIONS(9),
    [aux_sym_css_named_color_token93] = ACTIONS(9),
    [aux_sym_css_named_color_token94] = ACTIONS(9),
    [aux_sym_css_named_color_token95] = ACTIONS(9),
    [aux_sym_css_named_color_token96] = ACTIONS(9),
    [aux_sym_css_named_color_token97] = ACTIONS(9),
    [aux_sym_css_named_color_token98] = ACTIONS(9),
    [aux_sym_css_named_color_token99] = ACTIONS(9),
    [aux_sym_css_named_color_token100] = ACTIONS(9),
    [aux_sym_css_named_color_token101] = ACTIONS(9),
    [aux_sym_css_named_color_token102] = ACTIONS(9),
    [aux_sym_css_named_color_token103] = ACTIONS(9),
    [aux_sym_css_named_color_token104] = ACTIONS(11),
    [aux_sym_css_named_color_token105] = ACTIONS(9),
    [aux_sym_css_named_color_token106] = ACTIONS(11),
    [aux_sym_css_named_color_token107] = ACTIONS(9),
    [aux_sym_css_named_color_token108] = ACTIONS(9),
    [aux_sym_css_named_color_token109] = ACTIONS(9),
    [aux_sym_css_named_color_token110] = ACTIONS(9),
    [aux_sym_css_named_color_token111] = ACTIONS(9),
    [aux_sym_css_named_color_token112] = ACTIONS(9),
    [aux_sym_css_named_color_token113] = ACTIONS(9),
    [aux_sym_css_named_color_token114] = ACTIONS(9),
    [aux_sym_css_named_color_token115] = ACTIONS(9),
    [aux_sym_css_named_color_token116] = ACTIONS(9),
    [aux_sym_css_named_color_token117] = ACTIONS(9),
    [aux_sym_css_named_color_token118] = ACTIONS(9),
    [aux_sym_css_named_color_token119] = ACTIONS(9),
    [aux_sym_css_named_color_token120] = ACTIONS(9),
    [aux_sym_css_named_color_token121] = ACTIONS(9),
    [aux_sym_css_named_color_token122] = ACTIONS(9),
    [aux_sym_css_named_color_token123] = ACTIONS(9),
    [aux_sym_css_named_color_token124] = ACTIONS(9),
    [aux_sym_css_named_color_token125] = ACTIONS(9),
    [aux_sym_css_named_color_token126] = ACTIONS(9),
    [aux_sym_css_named_color_token127] = ACTIONS(9),
    [aux_sym_css_named_color_token128] = ACTIONS(9),
    [aux_sym_css_named_color_token129] = ACTIONS(9),
    [aux_sym_css_named_color_token130] = ACTIONS(9),
    [aux_sym_css_named_color_token131] = ACTIONS(9),
    [aux_sym_css_named_color_token132] = ACTIONS(9),
    [aux_sym_css_named_color_token133] = ACTIONS(9),
    [aux_sym_css_named_color_token134] = ACTIONS(9),
    [aux_sym_css_named_color_token135] = ACTIONS(9),
    [aux_sym_css_named_color_token136] = ACTIONS(9),
    [aux_sym_css_named_color_token137] = ACTIONS(9),
    [aux_sym_css_named_color_token138] = ACTIONS(9),
    [aux_sym_css_named_color_token139] = ACTIONS(9),
    [aux_sym_css_named_color_token140] = ACTIONS(9),
    [aux_sym_css_named_color_token141] = ACTIONS(9),
    [aux_sym_css_named_color_token142] = ACTIONS(9),
    [aux_sym_css_named_color_token143] = ACTIONS(9),
    [aux_sym_css_named_color_token144] = ACTIONS(9),
    [aux_sym_css_named_color_token145] = ACTIONS(11),
    [aux_sym_css_named_color_token146] = ACTIONS(9),
    [aux_sym_css_named_color_token147] = ACTIONS(11),
    [aux_sym_css_named_color_token148] = ACTIONS(9),
    [sym_css_keyword_transparent] = ACTIONS(17),
  },
  [3] = {
    [sym_css_hex_color] = STATE(3),
    [sym_css_named_color] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_css_hex_color_6_digits] = ACTIONS(21),
    [sym_css_hex_color_8_digits] = ACTIONS(24),
    [sym_css_hex_color_3_digits] = ACTIONS(21),
    [sym_css_hex_color_4_digits] = ACTIONS(21),
    [aux_sym_css_named_color_token1] = ACTIONS(27),
    [aux_sym_css_named_color_token2] = ACTIONS(27),
    [aux_sym_css_named_color_token3] = ACTIONS(30),
    [aux_sym_css_named_color_token4] = ACTIONS(27),
    [aux_sym_css_named_color_token5] = ACTIONS(27),
    [aux_sym_css_named_color_token6] = ACTIONS(27),
    [aux_sym_css_named_color_token7] = ACTIONS(27),
    [aux_sym_css_named_color_token8] = ACTIONS(27),
    [aux_sym_css_named_color_token9] = ACTIONS(27),
    [aux_sym_css_named_color_token10] = ACTIONS(30),
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
    [aux_sym_css_named_color_token52] = ACTIONS(30),
    [aux_sym_css_named_color_token53] = ACTIONS(27),
    [aux_sym_css_named_color_token54] = ACTIONS(27),
    [aux_sym_css_named_color_token55] = ACTIONS(30),
    [aux_sym_css_named_color_token56] = ACTIONS(27),
    [aux_sym_css_named_color_token57] = ACTIONS(27),
    [aux_sym_css_named_color_token58] = ACTIONS(27),
    [aux_sym_css_named_color_token59] = ACTIONS(27),
    [aux_sym_css_named_color_token60] = ACTIONS(27),
    [aux_sym_css_named_color_token61] = ACTIONS(27),
    [aux_sym_css_named_color_token62] = ACTIONS(27),
    [aux_sym_css_named_color_token63] = ACTIONS(27),
    [aux_sym_css_named_color_token64] = ACTIONS(30),
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
    [aux_sym_css_named_color_token83] = ACTIONS(30),
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
    [aux_sym_css_named_color_token104] = ACTIONS(30),
    [aux_sym_css_named_color_token105] = ACTIONS(27),
    [aux_sym_css_named_color_token106] = ACTIONS(30),
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
    [aux_sym_css_named_color_token145] = ACTIONS(30),
    [aux_sym_css_named_color_token146] = ACTIONS(27),
    [aux_sym_css_named_color_token147] = ACTIONS(30),
    [aux_sym_css_named_color_token148] = ACTIONS(27),
    [sym_css_keyword_transparent] = ACTIONS(33),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_css_hex_color_6_digits] = ACTIONS(38),
    [sym_css_hex_color_8_digits] = ACTIONS(36),
    [sym_css_hex_color_3_digits] = ACTIONS(38),
    [sym_css_hex_color_4_digits] = ACTIONS(38),
    [aux_sym_css_named_color_token1] = ACTIONS(36),
    [aux_sym_css_named_color_token2] = ACTIONS(36),
    [aux_sym_css_named_color_token3] = ACTIONS(38),
    [aux_sym_css_named_color_token4] = ACTIONS(36),
    [aux_sym_css_named_color_token5] = ACTIONS(36),
    [aux_sym_css_named_color_token6] = ACTIONS(36),
    [aux_sym_css_named_color_token7] = ACTIONS(36),
    [aux_sym_css_named_color_token8] = ACTIONS(36),
    [aux_sym_css_named_color_token9] = ACTIONS(36),
    [aux_sym_css_named_color_token10] = ACTIONS(38),
    [aux_sym_css_named_color_token11] = ACTIONS(36),
    [aux_sym_css_named_color_token12] = ACTIONS(36),
    [aux_sym_css_named_color_token13] = ACTIONS(36),
    [aux_sym_css_named_color_token14] = ACTIONS(36),
    [aux_sym_css_named_color_token15] = ACTIONS(36),
    [aux_sym_css_named_color_token16] = ACTIONS(36),
    [aux_sym_css_named_color_token17] = ACTIONS(36),
    [aux_sym_css_named_color_token18] = ACTIONS(36),
    [aux_sym_css_named_color_token19] = ACTIONS(36),
    [aux_sym_css_named_color_token20] = ACTIONS(36),
    [aux_sym_css_named_color_token21] = ACTIONS(36),
    [aux_sym_css_named_color_token22] = ACTIONS(36),
    [aux_sym_css_named_color_token23] = ACTIONS(36),
    [aux_sym_css_named_color_token24] = ACTIONS(36),
    [aux_sym_css_named_color_token25] = ACTIONS(36),
    [aux_sym_css_named_color_token26] = ACTIONS(36),
    [aux_sym_css_named_color_token27] = ACTIONS(36),
    [aux_sym_css_named_color_token28] = ACTIONS(36),
    [aux_sym_css_named_color_token29] = ACTIONS(36),
    [aux_sym_css_named_color_token30] = ACTIONS(36),
    [aux_sym_css_named_color_token31] = ACTIONS(36),
    [aux_sym_css_named_color_token32] = ACTIONS(36),
    [aux_sym_css_named_color_token33] = ACTIONS(36),
    [aux_sym_css_named_color_token34] = ACTIONS(36),
    [aux_sym_css_named_color_token35] = ACTIONS(36),
    [aux_sym_css_named_color_token36] = ACTIONS(36),
    [aux_sym_css_named_color_token37] = ACTIONS(36),
    [aux_sym_css_named_color_token38] = ACTIONS(36),
    [aux_sym_css_named_color_token39] = ACTIONS(36),
    [aux_sym_css_named_color_token40] = ACTIONS(36),
    [aux_sym_css_named_color_token41] = ACTIONS(36),
    [aux_sym_css_named_color_token42] = ACTIONS(36),
    [aux_sym_css_named_color_token43] = ACTIONS(36),
    [aux_sym_css_named_color_token44] = ACTIONS(36),
    [aux_sym_css_named_color_token45] = ACTIONS(36),
    [aux_sym_css_named_color_token46] = ACTIONS(36),
    [aux_sym_css_named_color_token47] = ACTIONS(36),
    [aux_sym_css_named_color_token48] = ACTIONS(36),
    [aux_sym_css_named_color_token49] = ACTIONS(36),
    [aux_sym_css_named_color_token50] = ACTIONS(36),
    [aux_sym_css_named_color_token51] = ACTIONS(36),
    [aux_sym_css_named_color_token52] = ACTIONS(38),
    [aux_sym_css_named_color_token53] = ACTIONS(36),
    [aux_sym_css_named_color_token54] = ACTIONS(36),
    [aux_sym_css_named_color_token55] = ACTIONS(38),
    [aux_sym_css_named_color_token56] = ACTIONS(36),
    [aux_sym_css_named_color_token57] = ACTIONS(36),
    [aux_sym_css_named_color_token58] = ACTIONS(36),
    [aux_sym_css_named_color_token59] = ACTIONS(36),
    [aux_sym_css_named_color_token60] = ACTIONS(36),
    [aux_sym_css_named_color_token61] = ACTIONS(36),
    [aux_sym_css_named_color_token62] = ACTIONS(36),
    [aux_sym_css_named_color_token63] = ACTIONS(36),
    [aux_sym_css_named_color_token64] = ACTIONS(38),
    [aux_sym_css_named_color_token65] = ACTIONS(36),
    [aux_sym_css_named_color_token66] = ACTIONS(36),
    [aux_sym_css_named_color_token67] = ACTIONS(36),
    [aux_sym_css_named_color_token68] = ACTIONS(36),
    [aux_sym_css_named_color_token69] = ACTIONS(36),
    [aux_sym_css_named_color_token70] = ACTIONS(36),
    [aux_sym_css_named_color_token71] = ACTIONS(36),
    [aux_sym_css_named_color_token72] = ACTIONS(36),
    [aux_sym_css_named_color_token73] = ACTIONS(36),
    [aux_sym_css_named_color_token74] = ACTIONS(36),
    [aux_sym_css_named_color_token75] = ACTIONS(36),
    [aux_sym_css_named_color_token76] = ACTIONS(36),
    [aux_sym_css_named_color_token77] = ACTIONS(36),
    [aux_sym_css_named_color_token78] = ACTIONS(36),
    [aux_sym_css_named_color_token79] = ACTIONS(36),
    [aux_sym_css_named_color_token80] = ACTIONS(36),
    [aux_sym_css_named_color_token81] = ACTIONS(36),
    [aux_sym_css_named_color_token82] = ACTIONS(36),
    [aux_sym_css_named_color_token83] = ACTIONS(38),
    [aux_sym_css_named_color_token84] = ACTIONS(36),
    [aux_sym_css_named_color_token85] = ACTIONS(36),
    [aux_sym_css_named_color_token86] = ACTIONS(36),
    [aux_sym_css_named_color_token87] = ACTIONS(36),
    [aux_sym_css_named_color_token88] = ACTIONS(36),
    [aux_sym_css_named_color_token89] = ACTIONS(36),
    [aux_sym_css_named_color_token90] = ACTIONS(36),
    [aux_sym_css_named_color_token91] = ACTIONS(36),
    [aux_sym_css_named_color_token92] = ACTIONS(36),
    [aux_sym_css_named_color_token93] = ACTIONS(36),
    [aux_sym_css_named_color_token94] = ACTIONS(36),
    [aux_sym_css_named_color_token95] = ACTIONS(36),
    [aux_sym_css_named_color_token96] = ACTIONS(36),
    [aux_sym_css_named_color_token97] = ACTIONS(36),
    [aux_sym_css_named_color_token98] = ACTIONS(36),
    [aux_sym_css_named_color_token99] = ACTIONS(36),
    [aux_sym_css_named_color_token100] = ACTIONS(36),
    [aux_sym_css_named_color_token101] = ACTIONS(36),
    [aux_sym_css_named_color_token102] = ACTIONS(36),
    [aux_sym_css_named_color_token103] = ACTIONS(36),
    [aux_sym_css_named_color_token104] = ACTIONS(38),
    [aux_sym_css_named_color_token105] = ACTIONS(36),
    [aux_sym_css_named_color_token106] = ACTIONS(38),
    [aux_sym_css_named_color_token107] = ACTIONS(36),
    [aux_sym_css_named_color_token108] = ACTIONS(36),
    [aux_sym_css_named_color_token109] = ACTIONS(36),
    [aux_sym_css_named_color_token110] = ACTIONS(36),
    [aux_sym_css_named_color_token111] = ACTIONS(36),
    [aux_sym_css_named_color_token112] = ACTIONS(36),
    [aux_sym_css_named_color_token113] = ACTIONS(36),
    [aux_sym_css_named_color_token114] = ACTIONS(36),
    [aux_sym_css_named_color_token115] = ACTIONS(36),
    [aux_sym_css_named_color_token116] = ACTIONS(36),
    [aux_sym_css_named_color_token117] = ACTIONS(36),
    [aux_sym_css_named_color_token118] = ACTIONS(36),
    [aux_sym_css_named_color_token119] = ACTIONS(36),
    [aux_sym_css_named_color_token120] = ACTIONS(36),
    [aux_sym_css_named_color_token121] = ACTIONS(36),
    [aux_sym_css_named_color_token122] = ACTIONS(36),
    [aux_sym_css_named_color_token123] = ACTIONS(36),
    [aux_sym_css_named_color_token124] = ACTIONS(36),
    [aux_sym_css_named_color_token125] = ACTIONS(36),
    [aux_sym_css_named_color_token126] = ACTIONS(36),
    [aux_sym_css_named_color_token127] = ACTIONS(36),
    [aux_sym_css_named_color_token128] = ACTIONS(36),
    [aux_sym_css_named_color_token129] = ACTIONS(36),
    [aux_sym_css_named_color_token130] = ACTIONS(36),
    [aux_sym_css_named_color_token131] = ACTIONS(36),
    [aux_sym_css_named_color_token132] = ACTIONS(36),
    [aux_sym_css_named_color_token133] = ACTIONS(36),
    [aux_sym_css_named_color_token134] = ACTIONS(36),
    [aux_sym_css_named_color_token135] = ACTIONS(36),
    [aux_sym_css_named_color_token136] = ACTIONS(36),
    [aux_sym_css_named_color_token137] = ACTIONS(36),
    [aux_sym_css_named_color_token138] = ACTIONS(36),
    [aux_sym_css_named_color_token139] = ACTIONS(36),
    [aux_sym_css_named_color_token140] = ACTIONS(36),
    [aux_sym_css_named_color_token141] = ACTIONS(36),
    [aux_sym_css_named_color_token142] = ACTIONS(36),
    [aux_sym_css_named_color_token143] = ACTIONS(36),
    [aux_sym_css_named_color_token144] = ACTIONS(36),
    [aux_sym_css_named_color_token145] = ACTIONS(38),
    [aux_sym_css_named_color_token146] = ACTIONS(36),
    [aux_sym_css_named_color_token147] = ACTIONS(38),
    [aux_sym_css_named_color_token148] = ACTIONS(36),
    [sym_css_keyword_transparent] = ACTIONS(36),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_css_hex_color_6_digits] = ACTIONS(42),
    [sym_css_hex_color_8_digits] = ACTIONS(40),
    [sym_css_hex_color_3_digits] = ACTIONS(42),
    [sym_css_hex_color_4_digits] = ACTIONS(42),
    [aux_sym_css_named_color_token1] = ACTIONS(40),
    [aux_sym_css_named_color_token2] = ACTIONS(40),
    [aux_sym_css_named_color_token3] = ACTIONS(42),
    [aux_sym_css_named_color_token4] = ACTIONS(40),
    [aux_sym_css_named_color_token5] = ACTIONS(40),
    [aux_sym_css_named_color_token6] = ACTIONS(40),
    [aux_sym_css_named_color_token7] = ACTIONS(40),
    [aux_sym_css_named_color_token8] = ACTIONS(40),
    [aux_sym_css_named_color_token9] = ACTIONS(40),
    [aux_sym_css_named_color_token10] = ACTIONS(42),
    [aux_sym_css_named_color_token11] = ACTIONS(40),
    [aux_sym_css_named_color_token12] = ACTIONS(40),
    [aux_sym_css_named_color_token13] = ACTIONS(40),
    [aux_sym_css_named_color_token14] = ACTIONS(40),
    [aux_sym_css_named_color_token15] = ACTIONS(40),
    [aux_sym_css_named_color_token16] = ACTIONS(40),
    [aux_sym_css_named_color_token17] = ACTIONS(40),
    [aux_sym_css_named_color_token18] = ACTIONS(40),
    [aux_sym_css_named_color_token19] = ACTIONS(40),
    [aux_sym_css_named_color_token20] = ACTIONS(40),
    [aux_sym_css_named_color_token21] = ACTIONS(40),
    [aux_sym_css_named_color_token22] = ACTIONS(40),
    [aux_sym_css_named_color_token23] = ACTIONS(40),
    [aux_sym_css_named_color_token24] = ACTIONS(40),
    [aux_sym_css_named_color_token25] = ACTIONS(40),
    [aux_sym_css_named_color_token26] = ACTIONS(40),
    [aux_sym_css_named_color_token27] = ACTIONS(40),
    [aux_sym_css_named_color_token28] = ACTIONS(40),
    [aux_sym_css_named_color_token29] = ACTIONS(40),
    [aux_sym_css_named_color_token30] = ACTIONS(40),
    [aux_sym_css_named_color_token31] = ACTIONS(40),
    [aux_sym_css_named_color_token32] = ACTIONS(40),
    [aux_sym_css_named_color_token33] = ACTIONS(40),
    [aux_sym_css_named_color_token34] = ACTIONS(40),
    [aux_sym_css_named_color_token35] = ACTIONS(40),
    [aux_sym_css_named_color_token36] = ACTIONS(40),
    [aux_sym_css_named_color_token37] = ACTIONS(40),
    [aux_sym_css_named_color_token38] = ACTIONS(40),
    [aux_sym_css_named_color_token39] = ACTIONS(40),
    [aux_sym_css_named_color_token40] = ACTIONS(40),
    [aux_sym_css_named_color_token41] = ACTIONS(40),
    [aux_sym_css_named_color_token42] = ACTIONS(40),
    [aux_sym_css_named_color_token43] = ACTIONS(40),
    [aux_sym_css_named_color_token44] = ACTIONS(40),
    [aux_sym_css_named_color_token45] = ACTIONS(40),
    [aux_sym_css_named_color_token46] = ACTIONS(40),
    [aux_sym_css_named_color_token47] = ACTIONS(40),
    [aux_sym_css_named_color_token48] = ACTIONS(40),
    [aux_sym_css_named_color_token49] = ACTIONS(40),
    [aux_sym_css_named_color_token50] = ACTIONS(40),
    [aux_sym_css_named_color_token51] = ACTIONS(40),
    [aux_sym_css_named_color_token52] = ACTIONS(42),
    [aux_sym_css_named_color_token53] = ACTIONS(40),
    [aux_sym_css_named_color_token54] = ACTIONS(40),
    [aux_sym_css_named_color_token55] = ACTIONS(42),
    [aux_sym_css_named_color_token56] = ACTIONS(40),
    [aux_sym_css_named_color_token57] = ACTIONS(40),
    [aux_sym_css_named_color_token58] = ACTIONS(40),
    [aux_sym_css_named_color_token59] = ACTIONS(40),
    [aux_sym_css_named_color_token60] = ACTIONS(40),
    [aux_sym_css_named_color_token61] = ACTIONS(40),
    [aux_sym_css_named_color_token62] = ACTIONS(40),
    [aux_sym_css_named_color_token63] = ACTIONS(40),
    [aux_sym_css_named_color_token64] = ACTIONS(42),
    [aux_sym_css_named_color_token65] = ACTIONS(40),
    [aux_sym_css_named_color_token66] = ACTIONS(40),
    [aux_sym_css_named_color_token67] = ACTIONS(40),
    [aux_sym_css_named_color_token68] = ACTIONS(40),
    [aux_sym_css_named_color_token69] = ACTIONS(40),
    [aux_sym_css_named_color_token70] = ACTIONS(40),
    [aux_sym_css_named_color_token71] = ACTIONS(40),
    [aux_sym_css_named_color_token72] = ACTIONS(40),
    [aux_sym_css_named_color_token73] = ACTIONS(40),
    [aux_sym_css_named_color_token74] = ACTIONS(40),
    [aux_sym_css_named_color_token75] = ACTIONS(40),
    [aux_sym_css_named_color_token76] = ACTIONS(40),
    [aux_sym_css_named_color_token77] = ACTIONS(40),
    [aux_sym_css_named_color_token78] = ACTIONS(40),
    [aux_sym_css_named_color_token79] = ACTIONS(40),
    [aux_sym_css_named_color_token80] = ACTIONS(40),
    [aux_sym_css_named_color_token81] = ACTIONS(40),
    [aux_sym_css_named_color_token82] = ACTIONS(40),
    [aux_sym_css_named_color_token83] = ACTIONS(42),
    [aux_sym_css_named_color_token84] = ACTIONS(40),
    [aux_sym_css_named_color_token85] = ACTIONS(40),
    [aux_sym_css_named_color_token86] = ACTIONS(40),
    [aux_sym_css_named_color_token87] = ACTIONS(40),
    [aux_sym_css_named_color_token88] = ACTIONS(40),
    [aux_sym_css_named_color_token89] = ACTIONS(40),
    [aux_sym_css_named_color_token90] = ACTIONS(40),
    [aux_sym_css_named_color_token91] = ACTIONS(40),
    [aux_sym_css_named_color_token92] = ACTIONS(40),
    [aux_sym_css_named_color_token93] = ACTIONS(40),
    [aux_sym_css_named_color_token94] = ACTIONS(40),
    [aux_sym_css_named_color_token95] = ACTIONS(40),
    [aux_sym_css_named_color_token96] = ACTIONS(40),
    [aux_sym_css_named_color_token97] = ACTIONS(40),
    [aux_sym_css_named_color_token98] = ACTIONS(40),
    [aux_sym_css_named_color_token99] = ACTIONS(40),
    [aux_sym_css_named_color_token100] = ACTIONS(40),
    [aux_sym_css_named_color_token101] = ACTIONS(40),
    [aux_sym_css_named_color_token102] = ACTIONS(40),
    [aux_sym_css_named_color_token103] = ACTIONS(40),
    [aux_sym_css_named_color_token104] = ACTIONS(42),
    [aux_sym_css_named_color_token105] = ACTIONS(40),
    [aux_sym_css_named_color_token106] = ACTIONS(42),
    [aux_sym_css_named_color_token107] = ACTIONS(40),
    [aux_sym_css_named_color_token108] = ACTIONS(40),
    [aux_sym_css_named_color_token109] = ACTIONS(40),
    [aux_sym_css_named_color_token110] = ACTIONS(40),
    [aux_sym_css_named_color_token111] = ACTIONS(40),
    [aux_sym_css_named_color_token112] = ACTIONS(40),
    [aux_sym_css_named_color_token113] = ACTIONS(40),
    [aux_sym_css_named_color_token114] = ACTIONS(40),
    [aux_sym_css_named_color_token115] = ACTIONS(40),
    [aux_sym_css_named_color_token116] = ACTIONS(40),
    [aux_sym_css_named_color_token117] = ACTIONS(40),
    [aux_sym_css_named_color_token118] = ACTIONS(40),
    [aux_sym_css_named_color_token119] = ACTIONS(40),
    [aux_sym_css_named_color_token120] = ACTIONS(40),
    [aux_sym_css_named_color_token121] = ACTIONS(40),
    [aux_sym_css_named_color_token122] = ACTIONS(40),
    [aux_sym_css_named_color_token123] = ACTIONS(40),
    [aux_sym_css_named_color_token124] = ACTIONS(40),
    [aux_sym_css_named_color_token125] = ACTIONS(40),
    [aux_sym_css_named_color_token126] = ACTIONS(40),
    [aux_sym_css_named_color_token127] = ACTIONS(40),
    [aux_sym_css_named_color_token128] = ACTIONS(40),
    [aux_sym_css_named_color_token129] = ACTIONS(40),
    [aux_sym_css_named_color_token130] = ACTIONS(40),
    [aux_sym_css_named_color_token131] = ACTIONS(40),
    [aux_sym_css_named_color_token132] = ACTIONS(40),
    [aux_sym_css_named_color_token133] = ACTIONS(40),
    [aux_sym_css_named_color_token134] = ACTIONS(40),
    [aux_sym_css_named_color_token135] = ACTIONS(40),
    [aux_sym_css_named_color_token136] = ACTIONS(40),
    [aux_sym_css_named_color_token137] = ACTIONS(40),
    [aux_sym_css_named_color_token138] = ACTIONS(40),
    [aux_sym_css_named_color_token139] = ACTIONS(40),
    [aux_sym_css_named_color_token140] = ACTIONS(40),
    [aux_sym_css_named_color_token141] = ACTIONS(40),
    [aux_sym_css_named_color_token142] = ACTIONS(40),
    [aux_sym_css_named_color_token143] = ACTIONS(40),
    [aux_sym_css_named_color_token144] = ACTIONS(40),
    [aux_sym_css_named_color_token145] = ACTIONS(42),
    [aux_sym_css_named_color_token146] = ACTIONS(40),
    [aux_sym_css_named_color_token147] = ACTIONS(42),
    [aux_sym_css_named_color_token148] = ACTIONS(40),
    [sym_css_keyword_transparent] = ACTIONS(40),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_hex_color, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_css_named_color, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
