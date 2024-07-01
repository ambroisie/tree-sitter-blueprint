#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 18

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  aux_sym_comment_token2 = 4,
  anon_sym_SLASH = 5,
  anon_sym_EQ = 6,
  anon_sym_PLUS_EQ = 7,
  anon_sym_LBRACE = 8,
  anon_sym_COMMA = 9,
  anon_sym_RBRACE = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  sym_identifier = 13,
  anon_sym_true = 14,
  anon_sym_false = 15,
  anon_sym_DASH = 16,
  aux_sym_integer_literal_token1 = 17,
  sym_raw_string_literal = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_interpreted_string_literal_token1 = 20,
  anon_sym_DQUOTE2 = 21,
  sym_escape_sequence = 22,
  anon_sym_select = 23,
  anon_sym_COLON = 24,
  anon_sym_any = 25,
  anon_sym_default = 26,
  anon_sym_unset = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  anon_sym_PLUS = 30,
  sym_source_file = 31,
  sym__definition = 32,
  sym_comment = 33,
  sym_assignment = 34,
  sym_module = 35,
  sym__old_module = 36,
  sym__new_module = 37,
  sym__expr = 38,
  sym_boolean_literal = 39,
  sym_integer_literal = 40,
  sym__string_literal = 41,
  sym_interpreted_string_literal = 42,
  sym_select_expression = 43,
  sym_select_value = 44,
  sym_condition = 45,
  sym_select_cases = 46,
  sym_select_case = 47,
  sym_select_pattern = 48,
  sym__select_pattern = 49,
  sym__case_value = 50,
  sym_list_expression = 51,
  sym_map_expression = 52,
  sym_binary_expression = 53,
  sym__colon_property = 54,
  sym__equal_property = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym__old_module_repeat1 = 57,
  aux_sym__new_module_repeat1 = 58,
  aux_sym_interpreted_string_literal_repeat1 = 59,
  aux_sym_select_value_repeat1 = 60,
  aux_sym_condition_repeat1 = 61,
  aux_sym_select_cases_repeat1 = 62,
  aux_sym_select_pattern_repeat1 = 63,
  aux_sym_list_expression_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "operator",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DASH] = "-",
  [aux_sym_integer_literal_token1] = "integer_literal_token1",
  [sym_raw_string_literal] = "raw_string_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_interpreted_string_literal_token1] = "interpreted_string_literal_token1",
  [anon_sym_DQUOTE2] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_select] = "select",
  [anon_sym_COLON] = ":",
  [anon_sym_any] = "any",
  [anon_sym_default] = "default",
  [anon_sym_unset] = "unset",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PLUS] = "operator",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_comment] = "comment",
  [sym_assignment] = "assignment",
  [sym_module] = "module",
  [sym__old_module] = "_old_module",
  [sym__new_module] = "_new_module",
  [sym__expr] = "_expr",
  [sym_boolean_literal] = "boolean_literal",
  [sym_integer_literal] = "integer_literal",
  [sym__string_literal] = "_string_literal",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [sym_select_expression] = "select_expression",
  [sym_select_value] = "select_value",
  [sym_condition] = "condition",
  [sym_select_cases] = "select_cases",
  [sym_select_case] = "select_case",
  [sym_select_pattern] = "select_pattern",
  [sym__select_pattern] = "_select_pattern",
  [sym__case_value] = "_case_value",
  [sym_list_expression] = "list_expression",
  [sym_map_expression] = "map_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__colon_property] = "property",
  [sym__equal_property] = "property",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__old_module_repeat1] = "_old_module_repeat1",
  [aux_sym__new_module_repeat1] = "_new_module_repeat1",
  [aux_sym_interpreted_string_literal_repeat1] = "interpreted_string_literal_repeat1",
  [aux_sym_select_value_repeat1] = "select_value_repeat1",
  [aux_sym_condition_repeat1] = "condition_repeat1",
  [aux_sym_select_cases_repeat1] = "select_cases_repeat1",
  [aux_sym_select_pattern_repeat1] = "select_pattern_repeat1",
  [aux_sym_list_expression_repeat1] = "list_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_integer_literal_token1] = aux_sym_integer_literal_token1,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_interpreted_string_literal_token1] = aux_sym_interpreted_string_literal_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_unset] = anon_sym_unset,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS_EQ,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_comment] = sym_comment,
  [sym_assignment] = sym_assignment,
  [sym_module] = sym_module,
  [sym__old_module] = sym__old_module,
  [sym__new_module] = sym__new_module,
  [sym__expr] = sym__expr,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym__string_literal] = sym__string_literal,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [sym_select_expression] = sym_select_expression,
  [sym_select_value] = sym_select_value,
  [sym_condition] = sym_condition,
  [sym_select_cases] = sym_select_cases,
  [sym_select_case] = sym_select_case,
  [sym_select_pattern] = sym_select_pattern,
  [sym__select_pattern] = sym__select_pattern,
  [sym__case_value] = sym__case_value,
  [sym_list_expression] = sym_list_expression,
  [sym_map_expression] = sym_map_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__colon_property] = sym__colon_property,
  [sym__equal_property] = sym__colon_property,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__old_module_repeat1] = aux_sym__old_module_repeat1,
  [aux_sym__new_module_repeat1] = aux_sym__new_module_repeat1,
  [aux_sym_interpreted_string_literal_repeat1] = aux_sym_interpreted_string_literal_repeat1,
  [aux_sym_select_value_repeat1] = aux_sym_select_value_repeat1,
  [aux_sym_condition_repeat1] = aux_sym_condition_repeat1,
  [aux_sym_select_cases_repeat1] = aux_sym_select_cases_repeat1,
  [aux_sym_select_pattern_repeat1] = aux_sym_select_pattern_repeat1,
  [aux_sym_list_expression_repeat1] = aux_sym_list_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unset] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym__old_module] = {
    .visible = false,
    .named = true,
  },
  [sym__new_module] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_interpreted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_select_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_select_value] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_select_cases] = {
    .visible = true,
    .named = true,
  },
  [sym_select_case] = {
    .visible = true,
    .named = true,
  },
  [sym_select_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__select_pattern] = {
    .visible = false,
    .named = true,
  },
  [sym__case_value] = {
    .visible = false,
    .named = true,
  },
  [sym_list_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_map_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__colon_property] = {
    .visible = true,
    .named = true,
  },
  [sym__equal_property] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__old_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__new_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_cases_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_element = 2,
  field_field = 3,
  field_left = 4,
  field_name = 5,
  field_operator = 6,
  field_pattern = 7,
  field_property = 8,
  field_right = 9,
  field_type = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_element] = "element",
  [field_field] = "field",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_pattern] = "pattern",
  [field_property] = "property",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 1},
  [4] = {.index = 6, .length = 4},
  [5] = {.index = 10, .length = 3},
  [6] = {.index = 13, .length = 1},
  [7] = {.index = 2, .length = 3},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 5},
  [10] = {.index = 21, .length = 2},
  [11] = {.index = 23, .length = 4},
  [12] = {.index = 27, .length = 2},
  [13] = {.index = 29, .length = 2},
  [14] = {.index = 31, .length = 1},
  [15] = {.index = 32, .length = 2},
  [16] = {.index = 34, .length = 3},
  [17] = {.index = 37, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_property, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [5] =
    {field_type, 0},
  [6] =
    {field_field, 2, .inherited = true},
    {field_property, 2},
    {field_type, 0},
    {field_value, 2, .inherited = true},
  [10] =
    {field_field, 1, .inherited = true},
    {field_property, 1},
    {field_value, 1, .inherited = true},
  [13] =
    {field_element, 1},
  [14] =
    {field_field, 0},
    {field_value, 2},
  [16] =
    {field_field, 2, .inherited = true},
    {field_property, 2},
    {field_property, 3, .inherited = true},
    {field_type, 0},
    {field_value, 2, .inherited = true},
  [21] =
    {field_property, 0, .inherited = true},
    {field_property, 1, .inherited = true},
  [23] =
    {field_field, 1, .inherited = true},
    {field_property, 1},
    {field_property, 2, .inherited = true},
    {field_value, 1, .inherited = true},
  [27] =
    {field_element, 1},
    {field_element, 2, .inherited = true},
  [29] =
    {field_element, 0, .inherited = true},
    {field_element, 1, .inherited = true},
  [31] =
    {field_name, 0},
  [32] =
    {field_arguments, 2},
    {field_name, 0},
  [34] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_name, 0},
  [37] =
    {field_pattern, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = anon_sym_PLUS_EQ,
  },
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
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '`') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '}') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(98);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '`') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '}') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == '`') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == '{') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '`') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '{') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '/') ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '/') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(54);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 'x') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(94);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(47);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(48);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(12);
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '[') ADVANCE(110);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '`') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '}') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == ']') ADVANCE(111);
      if (lookahead == '`') ADVANCE(37);
      if (lookahead == '}') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(98);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(47);
      if (lookahead == '\r') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(36);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(98);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(8);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '/') ADVANCE(41);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(75);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(84);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(87);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(82);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(72);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(89);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(81);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(73);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(64);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(67);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(83);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(80);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(86);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(79);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(85);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(69);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(70);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(109);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(103);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(108);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(74);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(68);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(106);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_select);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_any);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_default);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_unset);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(87);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 39},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 39},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 39},
  [31] = {.lex_state = 39},
  [32] = {.lex_state = 39},
  [33] = {.lex_state = 39},
  [34] = {.lex_state = 39},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 39},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 39},
  [39] = {.lex_state = 39},
  [40] = {.lex_state = 39},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 39},
  [44] = {.lex_state = 39},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 39},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 39},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 39},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 39},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 39},
  [72] = {.lex_state = 39},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 39},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 39},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 39},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 39},
  [89] = {.lex_state = 39},
  [90] = {.lex_state = 39},
  [91] = {.lex_state = 39},
  [92] = {.lex_state = 39},
  [93] = {.lex_state = 39},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 39},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 39},
  [98] = {.lex_state = 39},
  [99] = {.lex_state = 39},
  [100] = {.lex_state = 39},
  [101] = {.lex_state = 39},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 39},
  [105] = {.lex_state = 39},
  [106] = {.lex_state = 39},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 39},
  [110] = {.lex_state = 39},
  [111] = {.lex_state = 39},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 46},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 7},
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
  [137] = {(TSStateId)(-1)},
  [138] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_integer_literal_token1] = ACTIONS(1),
    [sym_raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_unset] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(136),
    [sym__definition] = STATE(93),
    [sym_comment] = STATE(1),
    [sym_assignment] = STATE(99),
    [sym_module] = STATE(99),
    [sym__old_module] = STATE(100),
    [sym__new_module] = STATE(101),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [sym_identifier] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_select,
    ACTIONS(27), 1,
      anon_sym_unset,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(2), 1,
      sym_comment,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(98), 1,
      sym__expr,
    STATE(132), 1,
      sym__case_value,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 7,
      sym_boolean_literal,
      sym_integer_literal,
      sym__string_literal,
      sym_select_expression,
      sym_list_expression,
      sym_map_expression,
      sym_binary_expression,
  [59] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_select,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(80), 1,
      sym__expr,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 7,
      sym_boolean_literal,
      sym_integer_literal,
      sym__string_literal,
      sym_select_expression,
      sym_list_expression,
      sym_map_expression,
      sym_binary_expression,
  [115] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_select,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(43), 1,
      sym__expr,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 7,
      sym_boolean_literal,
      sym_integer_literal,
      sym__string_literal,
      sym_select_expression,
      sym_list_expression,
      sym_map_expression,
      sym_binary_expression,
  [171] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_select,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_comment,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(80), 1,
      sym__expr,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 7,
      sym_boolean_literal,
      sym_integer_literal,
      sym__string_literal,
      sym_select_expression,
      sym_list_expression,
      sym_map_expression,
      sym_binary_expression,
  [227] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_select,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_comment,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(49), 1,
      sym__expr,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 7,
      sym_boolean_literal,
      sym_integer_literal,
      sym__string_literal,
      sym_select_expression,
      sym_list_expression,
      sym_map_expression,
      sym_binary_expression,
  [280] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_select,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(7), 1,
      sym_comment,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(56), 1,
      sym__expr,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 7,
      sym_boolean_literal,
      sym_integer_literal,
      sym__string_literal,
      sym_select_expression,
      sym_list_expression,
      sym_map_expression,
      sym_binary_expression,
  [333] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_select,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_comment,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(80), 1,
      sym__expr,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 7,
      sym_boolean_literal,
      sym_integer_literal,
      sym__string_literal,
      sym_select_expression,
      sym_list_expression,
      sym_map_expression,
      sym_binary_expression,
  [386] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_select,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_comment,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(71), 1,
      sym__expr,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 7,
      sym_boolean_literal,
      sym_integer_literal,
      sym__string_literal,
      sym_select_expression,
      sym_list_expression,
      sym_map_expression,
      sym_binary_expression,
  [439] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_DASH,
    ACTIONS(19), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_select,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    STATE(10), 1,
      sym_comment,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(38), 1,
      sym__expr,
    ACTIONS(15), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 7,
      sym_boolean_literal,
      sym_integer_literal,
      sym__string_literal,
      sym_select_expression,
      sym_list_expression,
      sym_map_expression,
      sym_binary_expression,
  [492] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_raw_string_literal,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(114), 1,
      sym__select_pattern,
    STATE(118), 1,
      sym_select_case,
    STATE(125), 1,
      sym_select_pattern,
    ACTIONS(42), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 2,
      anon_sym_any,
      anon_sym_default,
    STATE(11), 2,
      sym_comment,
      aux_sym_select_cases_repeat1,
    STATE(82), 2,
      sym_boolean_literal,
      sym__string_literal,
  [539] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_select_cases_repeat1,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(114), 1,
      sym__select_pattern,
    STATE(118), 1,
      sym_select_case,
    STATE(125), 1,
      sym_select_pattern,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 2,
      anon_sym_any,
      anon_sym_default,
    STATE(82), 2,
      sym_boolean_literal,
      sym__string_literal,
  [588] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym_select_cases_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(114), 1,
      sym__select_pattern,
    STATE(118), 1,
      sym_select_case,
    STATE(125), 1,
      sym_select_pattern,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 2,
      anon_sym_any,
      anon_sym_default,
    STATE(82), 2,
      sym_boolean_literal,
      sym__string_literal,
  [637] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_comment,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(94), 1,
      sym__select_pattern,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 2,
      anon_sym_any,
      anon_sym_default,
    STATE(82), 2,
      sym_boolean_literal,
      sym__string_literal,
  [674] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_comment,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(94), 1,
      sym__select_pattern,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 2,
      anon_sym_any,
      anon_sym_default,
    STATE(82), 2,
      sym_boolean_literal,
      sym__string_literal,
  [711] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_comment,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(94), 1,
      sym__select_pattern,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 2,
      anon_sym_any,
      anon_sym_default,
    STATE(82), 2,
      sym_boolean_literal,
      sym__string_literal,
  [745] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_comment,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(61), 1,
      sym__select_pattern,
    ACTIONS(58), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 2,
      anon_sym_any,
      anon_sym_default,
    STATE(82), 2,
      sym_boolean_literal,
      sym__string_literal,
  [779] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_source_file_repeat1,
    STATE(93), 1,
      sym__definition,
    STATE(100), 1,
      sym__old_module,
    STATE(101), 1,
      sym__new_module,
    STATE(99), 2,
      sym_assignment,
      sym_module,
  [811] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(37), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_true,
      anon_sym_false,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_any,
      anon_sym_default,
  [831] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(70), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [851] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      sym_identifier,
    STATE(93), 1,
      sym__definition,
    STATE(100), 1,
      sym__old_module,
    STATE(101), 1,
      sym__new_module,
    STATE(21), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(99), 2,
      sym_assignment,
      sym_module,
  [881] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [901] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(79), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [921] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(81), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [941] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(83), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [960] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [979] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [998] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [1017] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [1036] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [1055] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [1074] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [1093] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [1112] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [1131] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [1150] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [1169] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [1188] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(109), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [1207] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_identifier,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [1226] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(40), 1,
      sym_comment,
    STATE(60), 1,
      sym__string_literal,
  [1251] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(41), 1,
      sym_comment,
    STATE(129), 1,
      sym_select_value,
    STATE(134), 1,
      sym_condition,
  [1273] = 7,
    ACTIONS(119), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      aux_sym_interpreted_string_literal_token1,
    ACTIONS(125), 1,
      anon_sym_DQUOTE2,
    ACTIONS(127), 1,
      sym_escape_sequence,
    STATE(42), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_interpreted_string_literal_repeat1,
  [1295] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    ACTIONS(133), 1,
      anon_sym_PLUS,
    STATE(43), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_list_expression_repeat1,
  [1317] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_raw_string_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_interpreted_string_literal,
    STATE(44), 1,
      sym_comment,
    STATE(108), 1,
      sym__string_literal,
  [1339] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
  [1359] = 6,
    ACTIONS(119), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 1,
      aux_sym_interpreted_string_literal_token1,
    ACTIONS(144), 1,
      anon_sym_DQUOTE2,
    ACTIONS(146), 1,
      sym_escape_sequence,
    STATE(46), 2,
      sym_comment,
      aux_sym_interpreted_string_literal_repeat1,
  [1379] = 7,
    ACTIONS(119), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      aux_sym_interpreted_string_literal_token1,
    ACTIONS(127), 1,
      sym_escape_sequence,
    ACTIONS(149), 1,
      anon_sym_DQUOTE2,
    STATE(42), 1,
      aux_sym_interpreted_string_literal_repeat1,
    STATE(47), 1,
      sym_comment,
  [1401] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym__old_module_repeat1,
  [1420] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      anon_sym_PLUS,
    STATE(49), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1437] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(50), 1,
      sym_comment,
    STATE(76), 1,
      sym__colon_property,
  [1456] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(51), 1,
      sym_comment,
    STATE(87), 1,
      sym__equal_property,
  [1475] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_comment,
    STATE(103), 1,
      sym_condition,
  [1494] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym__new_module_repeat1,
  [1513] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_comment,
    STATE(84), 1,
      sym__colon_property,
  [1532] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(55), 2,
      sym_comment,
      aux_sym_condition_repeat1,
  [1549] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      anon_sym_PLUS,
    STATE(56), 1,
      sym_comment,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [1566] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_comment,
    STATE(78), 1,
      sym__equal_property,
  [1585] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    STATE(58), 2,
      sym_comment,
      aux_sym_select_value_repeat1,
  [1602] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_comment,
    STATE(81), 1,
      sym__colon_property,
  [1621] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_condition_repeat1,
  [1640] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_select_pattern_repeat1,
  [1659] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_comment,
    STATE(84), 1,
      sym__colon_property,
  [1678] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_list_expression_repeat1,
  [1697] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(64), 2,
      sym_comment,
      aux_sym_select_pattern_repeat1,
  [1714] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym__old_module_repeat1,
  [1733] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_select_value_repeat1,
    STATE(66), 1,
      sym_comment,
  [1752] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(66), 1,
      anon_sym_RPAREN,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_select_pattern_repeat1,
    STATE(67), 1,
      sym_comment,
  [1771] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_comment,
    STATE(84), 1,
      sym__colon_property,
  [1790] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym_comment,
    STATE(103), 1,
      sym_condition,
  [1809] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(70), 2,
      sym_comment,
      aux_sym__old_module_repeat1,
  [1826] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      anon_sym_PLUS,
    STATE(71), 1,
      sym_comment,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1843] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym_comment,
    STATE(87), 1,
      sym__equal_property,
  [1862] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
    STATE(73), 2,
      sym_comment,
      aux_sym__new_module_repeat1,
  [1879] = 5,
    ACTIONS(119), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(234), 1,
      aux_sym_interpreted_string_literal_token1,
    STATE(74), 1,
      sym_comment,
    ACTIONS(236), 2,
      anon_sym_DQUOTE2,
      sym_escape_sequence,
  [1896] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_comment,
    STATE(84), 1,
      sym__colon_property,
  [1915] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym__old_module_repeat1,
    STATE(76), 1,
      sym_comment,
  [1934] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_select_value_repeat1,
    STATE(77), 1,
      sym_comment,
  [1953] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym__new_module_repeat1,
    STATE(78), 1,
      sym_comment,
  [1972] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_condition_repeat1,
    STATE(79), 1,
      sym_comment,
  [1991] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      anon_sym_PLUS,
    STATE(80), 1,
      sym_comment,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2008] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym__old_module_repeat1,
    STATE(81), 1,
      sym_comment,
  [2027] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 1,
      sym_comment,
    ACTIONS(260), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [2042] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(83), 2,
      sym_comment,
      aux_sym_list_expression_repeat1,
  [2059] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2073] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [2087] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_comment,
    STATE(131), 1,
      sym_select_cases,
  [2103] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_comment,
    ACTIONS(273), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2117] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 1,
      sym_comment,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [2131] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(84), 1,
      sym__colon_property,
    STATE(89), 1,
      sym_comment,
  [2147] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 1,
      sym_comment,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [2161] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      sym_identifier,
    STATE(87), 1,
      sym__equal_property,
    STATE(91), 1,
      sym_comment,
  [2177] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 1,
      sym_comment,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [2191] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      sym_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [2205] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2219] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_comment,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [2233] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2247] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_comment,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [2261] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      anon_sym_PLUS,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      sym_comment,
  [2277] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [2291] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [2305] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_comment,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [2319] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2333] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2347] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(77), 1,
      sym_condition,
    STATE(104), 1,
      sym_comment,
  [2363] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [2377] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(106), 1,
      sym_comment,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [2391] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(107), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2405] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(108), 1,
      sym_comment,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2419] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(103), 1,
      sym_condition,
    STATE(109), 1,
      sym_comment,
  [2435] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(110), 1,
      sym_comment,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [2449] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(111), 1,
      sym_comment,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [2463] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(307), 1,
      anon_sym_COLON,
    STATE(112), 1,
      sym_comment,
  [2476] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_comment,
  [2489] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      anon_sym_COLON,
    STATE(114), 1,
      sym_comment,
  [2502] = 4,
    ACTIONS(119), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      aux_sym_comment_token1,
    STATE(115), 1,
      sym_comment,
  [2515] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_comment,
  [2528] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      sym_comment,
  [2541] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      sym_comment,
  [2554] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
  [2567] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(323), 1,
      anon_sym_EQ,
    STATE(120), 1,
      sym_comment,
  [2580] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(325), 1,
      aux_sym_integer_literal_token1,
    STATE(121), 1,
      sym_comment,
  [2593] = 4,
    ACTIONS(119), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      aux_sym_comment_token2,
    STATE(122), 1,
      sym_comment,
  [2606] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(329), 1,
      anon_sym_SLASH,
    STATE(123), 1,
      sym_comment,
  [2619] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 1,
      anon_sym_COLON,
    STATE(124), 1,
      sym_comment,
  [2632] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(333), 1,
      anon_sym_COLON,
    STATE(125), 1,
      sym_comment,
  [2645] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      sym_comment,
  [2658] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_comment,
  [2671] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(339), 1,
      anon_sym_COLON,
    STATE(128), 1,
      sym_comment,
  [2684] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      sym_comment,
  [2697] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      sym_comment,
  [2710] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_comment,
  [2723] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      sym_comment,
  [2736] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(347), 1,
      anon_sym_COLON,
    STATE(133), 1,
      sym_comment,
  [2749] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      sym_comment,
  [2762] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      sym_comment,
  [2775] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_comment,
  [2788] = 1,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
  [2792] = 1,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 115,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 227,
  [SMALL_STATE(7)] = 280,
  [SMALL_STATE(8)] = 333,
  [SMALL_STATE(9)] = 386,
  [SMALL_STATE(10)] = 439,
  [SMALL_STATE(11)] = 492,
  [SMALL_STATE(12)] = 539,
  [SMALL_STATE(13)] = 588,
  [SMALL_STATE(14)] = 637,
  [SMALL_STATE(15)] = 674,
  [SMALL_STATE(16)] = 711,
  [SMALL_STATE(17)] = 745,
  [SMALL_STATE(18)] = 779,
  [SMALL_STATE(19)] = 811,
  [SMALL_STATE(20)] = 831,
  [SMALL_STATE(21)] = 851,
  [SMALL_STATE(22)] = 881,
  [SMALL_STATE(23)] = 901,
  [SMALL_STATE(24)] = 921,
  [SMALL_STATE(25)] = 941,
  [SMALL_STATE(26)] = 960,
  [SMALL_STATE(27)] = 979,
  [SMALL_STATE(28)] = 998,
  [SMALL_STATE(29)] = 1017,
  [SMALL_STATE(30)] = 1036,
  [SMALL_STATE(31)] = 1055,
  [SMALL_STATE(32)] = 1074,
  [SMALL_STATE(33)] = 1093,
  [SMALL_STATE(34)] = 1112,
  [SMALL_STATE(35)] = 1131,
  [SMALL_STATE(36)] = 1150,
  [SMALL_STATE(37)] = 1169,
  [SMALL_STATE(38)] = 1188,
  [SMALL_STATE(39)] = 1207,
  [SMALL_STATE(40)] = 1226,
  [SMALL_STATE(41)] = 1251,
  [SMALL_STATE(42)] = 1273,
  [SMALL_STATE(43)] = 1295,
  [SMALL_STATE(44)] = 1317,
  [SMALL_STATE(45)] = 1339,
  [SMALL_STATE(46)] = 1359,
  [SMALL_STATE(47)] = 1379,
  [SMALL_STATE(48)] = 1401,
  [SMALL_STATE(49)] = 1420,
  [SMALL_STATE(50)] = 1437,
  [SMALL_STATE(51)] = 1456,
  [SMALL_STATE(52)] = 1475,
  [SMALL_STATE(53)] = 1494,
  [SMALL_STATE(54)] = 1513,
  [SMALL_STATE(55)] = 1532,
  [SMALL_STATE(56)] = 1549,
  [SMALL_STATE(57)] = 1566,
  [SMALL_STATE(58)] = 1585,
  [SMALL_STATE(59)] = 1602,
  [SMALL_STATE(60)] = 1621,
  [SMALL_STATE(61)] = 1640,
  [SMALL_STATE(62)] = 1659,
  [SMALL_STATE(63)] = 1678,
  [SMALL_STATE(64)] = 1697,
  [SMALL_STATE(65)] = 1714,
  [SMALL_STATE(66)] = 1733,
  [SMALL_STATE(67)] = 1752,
  [SMALL_STATE(68)] = 1771,
  [SMALL_STATE(69)] = 1790,
  [SMALL_STATE(70)] = 1809,
  [SMALL_STATE(71)] = 1826,
  [SMALL_STATE(72)] = 1843,
  [SMALL_STATE(73)] = 1862,
  [SMALL_STATE(74)] = 1879,
  [SMALL_STATE(75)] = 1896,
  [SMALL_STATE(76)] = 1915,
  [SMALL_STATE(77)] = 1934,
  [SMALL_STATE(78)] = 1953,
  [SMALL_STATE(79)] = 1972,
  [SMALL_STATE(80)] = 1991,
  [SMALL_STATE(81)] = 2008,
  [SMALL_STATE(82)] = 2027,
  [SMALL_STATE(83)] = 2042,
  [SMALL_STATE(84)] = 2059,
  [SMALL_STATE(85)] = 2073,
  [SMALL_STATE(86)] = 2087,
  [SMALL_STATE(87)] = 2103,
  [SMALL_STATE(88)] = 2117,
  [SMALL_STATE(89)] = 2131,
  [SMALL_STATE(90)] = 2147,
  [SMALL_STATE(91)] = 2161,
  [SMALL_STATE(92)] = 2177,
  [SMALL_STATE(93)] = 2191,
  [SMALL_STATE(94)] = 2205,
  [SMALL_STATE(95)] = 2219,
  [SMALL_STATE(96)] = 2233,
  [SMALL_STATE(97)] = 2247,
  [SMALL_STATE(98)] = 2261,
  [SMALL_STATE(99)] = 2277,
  [SMALL_STATE(100)] = 2291,
  [SMALL_STATE(101)] = 2305,
  [SMALL_STATE(102)] = 2319,
  [SMALL_STATE(103)] = 2333,
  [SMALL_STATE(104)] = 2347,
  [SMALL_STATE(105)] = 2363,
  [SMALL_STATE(106)] = 2377,
  [SMALL_STATE(107)] = 2391,
  [SMALL_STATE(108)] = 2405,
  [SMALL_STATE(109)] = 2419,
  [SMALL_STATE(110)] = 2435,
  [SMALL_STATE(111)] = 2449,
  [SMALL_STATE(112)] = 2463,
  [SMALL_STATE(113)] = 2476,
  [SMALL_STATE(114)] = 2489,
  [SMALL_STATE(115)] = 2502,
  [SMALL_STATE(116)] = 2515,
  [SMALL_STATE(117)] = 2528,
  [SMALL_STATE(118)] = 2541,
  [SMALL_STATE(119)] = 2554,
  [SMALL_STATE(120)] = 2567,
  [SMALL_STATE(121)] = 2580,
  [SMALL_STATE(122)] = 2593,
  [SMALL_STATE(123)] = 2606,
  [SMALL_STATE(124)] = 2619,
  [SMALL_STATE(125)] = 2632,
  [SMALL_STATE(126)] = 2645,
  [SMALL_STATE(127)] = 2658,
  [SMALL_STATE(128)] = 2671,
  [SMALL_STATE(129)] = 2684,
  [SMALL_STATE(130)] = 2697,
  [SMALL_STATE(131)] = 2710,
  [SMALL_STATE(132)] = 2723,
  [SMALL_STATE(133)] = 2736,
  [SMALL_STATE(134)] = 2749,
  [SMALL_STATE(135)] = 2762,
  [SMALL_STATE(136)] = 2775,
  [SMALL_STATE(137)] = 2788,
  [SMALL_STATE(138)] = 2792,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_cases_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_cases_repeat1, 2), SHIFT_REPEAT(17),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_cases_repeat1, 2), SHIFT_REPEAT(22),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_cases_repeat1, 2), SHIFT_REPEAT(23),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_cases_repeat1, 2), SHIFT_REPEAT(47),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_cases_repeat1, 2), SHIFT_REPEAT(82),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 4, .production_id = 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 3, .production_id = 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 4, .production_id = 12),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 5, .production_id = 12),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 4, .production_id = 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 3, .production_id = 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 4, .production_id = 11),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 6),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 5, .production_id = 11),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(74),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(74),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon_property, 3, .production_id = 8),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2), SHIFT_REPEAT(44),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_condition_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_value_repeat1, 2), SHIFT_REPEAT(109),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_value_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_pattern_repeat1, 2), SHIFT_REPEAT(16),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_pattern_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__old_module_repeat1, 2, .production_id = 10), SHIFT_REPEAT(89),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__old_module_repeat1, 2, .production_id = 10),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equal_property, 3, .production_id = 8),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__new_module_repeat1, 2, .production_id = 10), SHIFT_REPEAT(91),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__new_module_repeat1, 2, .production_id = 10),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_expression_repeat1, 2, .production_id = 6),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__select_pattern, 1),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_expression_repeat1, 2, .production_id = 13), SHIFT_REPEAT(8),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_expression_repeat1, 2, .production_id = 13),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__old_module_repeat1, 2, .production_id = 5),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__old_module, 5, .production_id = 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__new_module_repeat1, 2, .production_id = 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__old_module, 6, .production_id = 9),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 6, .production_id = 9),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 5, .production_id = 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__old_module, 5, .production_id = 9),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, .production_id = 14),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__old_module, 3, .production_id = 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__case_value, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1, .production_id = 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, .production_id = 16),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 4, .production_id = 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__old_module, 4, .production_id = 4),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4, .production_id = 15),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 3, .production_id = 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__new_module, 5, .production_id = 9),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_cases, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_pattern, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_value, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_cases, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_pattern, 5),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_value, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_pattern, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_case, 3, .production_id = 17),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_pattern, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_value, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_value, 3),
  [353] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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

TS_PUBLIC const TSLanguage *tree_sitter_bp() {
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
