#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  aux_sym_comment_token2 = 4,
  anon_sym_SLASH = 5,
  anon_sym_POUND_BANG = 6,
  anon_sym_nextflow = 7,
  anon_sym_DOT = 8,
  anon_sym_EQ = 9,
  anon_sym_include = 10,
  anon_sym_LBRACE = 11,
  anon_sym_COMMA = 12,
  anon_sym_RBRACE = 13,
  anon_sym_from = 14,
  anon_sym_as = 15,
  anon_sym_params = 16,
  sym_identifier = 17,
  aux_sym_number_token1 = 18,
  aux_sym_number_token2 = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_string_token1 = 21,
  anon_sym_SQUOTE = 22,
  aux_sym_string_token2 = 23,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 24,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 25,
  anon_sym_true = 26,
  anon_sym_false = 27,
  anon_sym_process = 28,
  anon_sym_input_COLON = 29,
  anon_sym_val = 30,
  anon_sym_path = 31,
  anon_sym_tuple = 32,
  anon_sym_env = 33,
  anon_sym_stdin = 34,
  anon_sym_SEMI = 35,
  anon_sym_output_COLON = 36,
  anon_sym_stdout = 37,
  anon_sym_into = 38,
  anon_sym_script_COLON = 39,
  anon_sym_shell_COLON = 40,
  anon_sym_exec_COLON = 41,
  aux_sym_script_content_token1 = 42,
  aux_sym_script_content_token2 = 43,
  anon_sym_directive_COLON = 44,
  anon_sym_Channel = 45,
  anon_sym_LPAREN = 46,
  anon_sym_RPAREN = 47,
  anon_sym_value = 48,
  anon_sym_of = 49,
  anon_sym_PIPE = 50,
  sym_source_file = 51,
  sym_comment = 52,
  sym_shebang = 53,
  sym_feature_flag = 54,
  sym_include = 55,
  sym_include_item = 56,
  sym_parameter = 57,
  sym__expression = 58,
  sym_number = 59,
  sym_string = 60,
  sym_boolean = 61,
  sym_process_definition = 62,
  sym_input_block = 63,
  sym_input_declaration = 64,
  sym_output_block = 65,
  sym_output_declaration = 66,
  sym_script_block = 67,
  sym_script_content = 68,
  sym_directive_block = 69,
  sym_directive = 70,
  sym_channel_expression = 71,
  sym_channel_from = 72,
  sym_channel_value = 73,
  sym_channel_of = 74,
  sym_pipe_expression = 75,
  aux_sym_source_file_repeat1 = 76,
  aux_sym_include_repeat1 = 77,
  aux_sym_process_definition_repeat1 = 78,
  aux_sym_input_block_repeat1 = 79,
  aux_sym_output_block_repeat1 = 80,
  aux_sym_directive_block_repeat1 = 81,
  aux_sym_channel_from_repeat1 = 82,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_POUND_BANG] = "#!",
  [anon_sym_nextflow] = "nextflow",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [anon_sym_include] = "include",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_from] = "from",
  [anon_sym_as] = "as",
  [anon_sym_params] = "params",
  [sym_identifier] = "identifier",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_process] = "process",
  [anon_sym_input_COLON] = "input:",
  [anon_sym_val] = "val",
  [anon_sym_path] = "path",
  [anon_sym_tuple] = "tuple",
  [anon_sym_env] = "env",
  [anon_sym_stdin] = "stdin",
  [anon_sym_SEMI] = ";",
  [anon_sym_output_COLON] = "output:",
  [anon_sym_stdout] = "stdout",
  [anon_sym_into] = "into",
  [anon_sym_script_COLON] = "script:",
  [anon_sym_shell_COLON] = "shell:",
  [anon_sym_exec_COLON] = "exec:",
  [aux_sym_script_content_token1] = "script_content_token1",
  [aux_sym_script_content_token2] = "script_content_token2",
  [anon_sym_directive_COLON] = "directive:",
  [anon_sym_Channel] = "Channel",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_value] = "value",
  [anon_sym_of] = "of",
  [anon_sym_PIPE] = "|",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_shebang] = "shebang",
  [sym_feature_flag] = "feature_flag",
  [sym_include] = "include",
  [sym_include_item] = "include_item",
  [sym_parameter] = "parameter",
  [sym__expression] = "_expression",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_process_definition] = "process_definition",
  [sym_input_block] = "input_block",
  [sym_input_declaration] = "input_declaration",
  [sym_output_block] = "output_block",
  [sym_output_declaration] = "output_declaration",
  [sym_script_block] = "script_block",
  [sym_script_content] = "script_content",
  [sym_directive_block] = "directive_block",
  [sym_directive] = "directive",
  [sym_channel_expression] = "channel_expression",
  [sym_channel_from] = "channel_from",
  [sym_channel_value] = "channel_value",
  [sym_channel_of] = "channel_of",
  [sym_pipe_expression] = "pipe_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_include_repeat1] = "include_repeat1",
  [aux_sym_process_definition_repeat1] = "process_definition_repeat1",
  [aux_sym_input_block_repeat1] = "input_block_repeat1",
  [aux_sym_output_block_repeat1] = "output_block_repeat1",
  [aux_sym_directive_block_repeat1] = "directive_block_repeat1",
  [aux_sym_channel_from_repeat1] = "channel_from_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_POUND_BANG] = anon_sym_POUND_BANG,
  [anon_sym_nextflow] = anon_sym_nextflow,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_params] = anon_sym_params,
  [sym_identifier] = sym_identifier,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_process] = anon_sym_process,
  [anon_sym_input_COLON] = anon_sym_input_COLON,
  [anon_sym_val] = anon_sym_val,
  [anon_sym_path] = anon_sym_path,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_env] = anon_sym_env,
  [anon_sym_stdin] = anon_sym_stdin,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_output_COLON] = anon_sym_output_COLON,
  [anon_sym_stdout] = anon_sym_stdout,
  [anon_sym_into] = anon_sym_into,
  [anon_sym_script_COLON] = anon_sym_script_COLON,
  [anon_sym_shell_COLON] = anon_sym_shell_COLON,
  [anon_sym_exec_COLON] = anon_sym_exec_COLON,
  [aux_sym_script_content_token1] = aux_sym_script_content_token1,
  [aux_sym_script_content_token2] = aux_sym_script_content_token2,
  [anon_sym_directive_COLON] = anon_sym_directive_COLON,
  [anon_sym_Channel] = anon_sym_Channel,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_shebang] = sym_shebang,
  [sym_feature_flag] = sym_feature_flag,
  [sym_include] = sym_include,
  [sym_include_item] = sym_include_item,
  [sym_parameter] = sym_parameter,
  [sym__expression] = sym__expression,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_process_definition] = sym_process_definition,
  [sym_input_block] = sym_input_block,
  [sym_input_declaration] = sym_input_declaration,
  [sym_output_block] = sym_output_block,
  [sym_output_declaration] = sym_output_declaration,
  [sym_script_block] = sym_script_block,
  [sym_script_content] = sym_script_content,
  [sym_directive_block] = sym_directive_block,
  [sym_directive] = sym_directive,
  [sym_channel_expression] = sym_channel_expression,
  [sym_channel_from] = sym_channel_from,
  [sym_channel_value] = sym_channel_value,
  [sym_channel_of] = sym_channel_of,
  [sym_pipe_expression] = sym_pipe_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_include_repeat1] = aux_sym_include_repeat1,
  [aux_sym_process_definition_repeat1] = aux_sym_process_definition_repeat1,
  [aux_sym_input_block_repeat1] = aux_sym_input_block_repeat1,
  [aux_sym_output_block_repeat1] = aux_sym_output_block_repeat1,
  [aux_sym_directive_block_repeat1] = aux_sym_directive_block_repeat1,
  [aux_sym_channel_from_repeat1] = aux_sym_channel_from_repeat1,
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
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nextflow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
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
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_params] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_process] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_val] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stdin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stdout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_into] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_script_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shell_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_script_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_script_content_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_directive_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Channel] = {
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
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_shebang] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_include_item] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_process_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_input_block] = {
    .visible = true,
    .named = true,
  },
  [sym_input_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_output_block] = {
    .visible = true,
    .named = true,
  },
  [sym_output_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_script_block] = {
    .visible = true,
    .named = true,
  },
  [sym_script_content] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_block] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_channel_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_channel_from] = {
    .visible = true,
    .named = true,
  },
  [sym_channel_value] = {
    .visible = true,
    .named = true,
  },
  [sym_channel_of] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_process_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_input_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_output_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_channel_from_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 10,
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
  [62] = 55,
  [63] = 63,
  [64] = 64,
  [65] = 52,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 54,
  [71] = 48,
  [72] = 40,
  [73] = 41,
  [74] = 42,
  [75] = 46,
  [76] = 47,
  [77] = 50,
  [78] = 51,
  [79] = 53,
  [80] = 39,
  [81] = 81,
  [82] = 81,
  [83] = 83,
  [84] = 83,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 86,
  [93] = 93,
  [94] = 94,
  [95] = 88,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 102,
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
  [120] = 106,
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
  [139] = 111,
  [140] = 112,
  [141] = 113,
  [142] = 114,
  [143] = 143,
  [144] = 137,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 138,
  [150] = 150,
  [151] = 150,
  [152] = 125,
  [153] = 126,
  [154] = 127,
  [155] = 129,
  [156] = 130,
  [157] = 132,
  [158] = 158,
  [159] = 131,
  [160] = 160,
  [161] = 60,
  [162] = 63,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(106);
      ADVANCE_MAP(
        '"', 187,
        '#', 1,
        '\'', 191,
        '(', 224,
        ')', 225,
        ',', 132,
        '.', 128,
        '/', 125,
        ';', 208,
        '=', 129,
        'C', 48,
        'a', 81,
        'd', 49,
        'e', 64,
        'f', 19,
        'i', 65,
        'n', 32,
        'o', 45,
        'p', 20,
        's', 26,
        't', 77,
        'v', 22,
        '{', 131,
        '|', 228,
        '}', 133,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(126);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(187);
      if (lookahead == '\'') ADVANCE(191);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'C') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 't') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(195);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(196);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '/') ADVANCE(107);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(124);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == '}') ADVANCE(133);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'v') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(202);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(213);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(209);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(212);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(221);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'h') ADVANCE(41);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(204);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 99:
      if (lookahead == 'v') ADVANCE(206);
      END_STATE();
    case 100:
      if (lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 101:
      if (lookahead == 'w') ADVANCE(127);
      END_STATE();
    case 102:
      if (lookahead == 'x') ADVANCE(86);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 104:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(217);
      END_STATE();
    case 105:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(220);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(190);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(194);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(121);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(190);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(194);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '/') ADVANCE(107);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_nextflow);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'h') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(188);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(5);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_input_COLON);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_stdin);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_output_COLON);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_stdout);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_into);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_script_COLON);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_shell_COLON);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_exec_COLON);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_script_content_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_script_content_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '/') ADVANCE(215);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_script_content_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_script_content_token2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '*') ADVANCE(119);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_script_content_token2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '/') ADVANCE(218);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_script_content_token2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_directive_COLON);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_Channel);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_Channel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
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
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
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
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 12},
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
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 189},
  [107] = {.lex_state = 11},
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
  [120] = {.lex_state = 189},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 193},
  [126] = {.lex_state = 189},
  [127] = {.lex_state = 193},
  [128] = {.lex_state = 11},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 115},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 11},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 115},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 115},
  [145] = {.lex_state = 189},
  [146] = {.lex_state = 193},
  [147] = {.lex_state = 216},
  [148] = {.lex_state = 219},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 193},
  [153] = {.lex_state = 189},
  [154] = {.lex_state = 193},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 11},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 11},
  [161] = {(TSStateId)(-1)},
  [162] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_nextflow] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_params] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_process] = ACTIONS(1),
    [anon_sym_input_COLON] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_stdin] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_output_COLON] = ACTIONS(1),
    [anon_sym_stdout] = ACTIONS(1),
    [anon_sym_into] = ACTIONS(1),
    [anon_sym_script_COLON] = ACTIONS(1),
    [anon_sym_shell_COLON] = ACTIONS(1),
    [anon_sym_exec_COLON] = ACTIONS(1),
    [anon_sym_directive_COLON] = ACTIONS(1),
    [anon_sym_Channel] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(136),
    [sym_comment] = STATE(1),
    [sym_shebang] = STATE(29),
    [sym_feature_flag] = STATE(29),
    [sym_include] = STATE(29),
    [sym_parameter] = STATE(29),
    [sym_process_definition] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(11),
    [anon_sym_POUND_BANG] = ACTIONS(13),
    [anon_sym_nextflow] = ACTIONS(15),
    [anon_sym_include] = ACTIONS(17),
    [anon_sym_params] = ACTIONS(19),
    [anon_sym_process] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(27), 1,
      aux_sym_number_token2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_Channel,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_comment,
    STATE(84), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [51] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(27), 1,
      aux_sym_number_token2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_Channel,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_comment,
    STATE(83), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [102] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(27), 1,
      aux_sym_number_token2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_Channel,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(82), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [153] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(27), 1,
      aux_sym_number_token2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_Channel,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(81), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [204] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(27), 1,
      aux_sym_number_token2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_Channel,
    STATE(6), 1,
      sym_comment,
    STATE(102), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [252] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    ACTIONS(53), 1,
      aux_sym_number_token2,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_Channel,
    STATE(7), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(49), 6,
      sym__expression,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [298] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(27), 1,
      aux_sym_number_token2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_Channel,
    STATE(8), 1,
      sym_comment,
    STATE(94), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [346] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(27), 1,
      aux_sym_number_token2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_Channel,
    STATE(9), 1,
      sym_comment,
    STATE(98), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [394] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    ACTIONS(53), 1,
      aux_sym_number_token2,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_Channel,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(10), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 6,
      sym__expression,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [440] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(27), 1,
      aux_sym_number_token2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_Channel,
    STATE(11), 1,
      sym_comment,
    STATE(105), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [488] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(27), 1,
      aux_sym_number_token2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_Channel,
    STATE(12), 1,
      sym_comment,
    STATE(103), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [536] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(27), 1,
      aux_sym_number_token2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_Channel,
    STATE(13), 1,
      sym_comment,
    STATE(101), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [584] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(27), 1,
      aux_sym_number_token2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_Channel,
    STATE(14), 1,
      sym_comment,
    STATE(87), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [632] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_number_token1,
    ACTIONS(27), 1,
      aux_sym_number_token2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(39), 1,
      anon_sym_Channel,
    STATE(15), 1,
      sym_comment,
    STATE(74), 1,
      sym__expression,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [680] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_input_block_repeat1,
    STATE(23), 1,
      sym_input_declaration,
    ACTIONS(71), 5,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
    ACTIONS(69), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [712] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_input_block_repeat1,
    STATE(23), 1,
      sym_input_declaration,
    ACTIONS(71), 5,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
    ACTIONS(73), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [744] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_input_declaration,
    STATE(18), 2,
      sym_comment,
      aux_sym_input_block_repeat1,
    ACTIONS(77), 5,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
    ACTIONS(75), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [774] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_output_block_repeat1,
    STATE(31), 1,
      sym_output_declaration,
    ACTIONS(82), 4,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdout,
    ACTIONS(80), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [805] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      aux_sym_output_block_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(31), 1,
      sym_output_declaration,
    ACTIONS(82), 4,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdout,
    ACTIONS(84), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [836] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_output_declaration,
    STATE(21), 2,
      sym_comment,
      aux_sym_output_block_repeat1,
    ACTIONS(88), 4,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdout,
    ACTIONS(86), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [865] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      anon_sym_input_COLON,
    ACTIONS(95), 1,
      anon_sym_output_COLON,
    ACTIONS(99), 1,
      anon_sym_directive_COLON,
    STATE(22), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_process_definition_repeat1,
    ACTIONS(97), 3,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
    STATE(44), 4,
      sym_input_block,
      sym_output_block,
      sym_script_block,
      sym_directive_block,
  [901] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(101), 12,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [925] = 9,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(108), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(111), 1,
      anon_sym_POUND_BANG,
    ACTIONS(114), 1,
      anon_sym_nextflow,
    ACTIONS(117), 1,
      anon_sym_include,
    ACTIONS(120), 1,
      anon_sym_params,
    ACTIONS(123), 1,
      anon_sym_process,
    STATE(24), 7,
      sym_comment,
      sym_shebang,
      sym_feature_flag,
      sym_include,
      sym_parameter,
      sym_process_definition,
      aux_sym_source_file_repeat1,
  [959] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      anon_sym_input_COLON,
    ACTIONS(131), 1,
      anon_sym_output_COLON,
    ACTIONS(137), 1,
      anon_sym_directive_COLON,
    STATE(25), 2,
      sym_comment,
      aux_sym_process_definition_repeat1,
    ACTIONS(134), 3,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
    STATE(44), 4,
      sym_input_block,
      sym_output_block,
      sym_script_block,
      sym_directive_block,
  [993] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      anon_sym_input_COLON,
    ACTIONS(95), 1,
      anon_sym_output_COLON,
    ACTIONS(99), 1,
      anon_sym_directive_COLON,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_process_definition_repeat1,
    STATE(26), 1,
      sym_comment,
    ACTIONS(97), 3,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
    STATE(44), 4,
      sym_input_block,
      sym_output_block,
      sym_script_block,
      sym_directive_block,
  [1029] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(142), 12,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [1053] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(144), 12,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [1077] = 10,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_POUND_BANG,
    ACTIONS(15), 1,
      anon_sym_nextflow,
    ACTIONS(17), 1,
      anon_sym_include,
    ACTIONS(19), 1,
      anon_sym_params,
    ACTIONS(21), 1,
      anon_sym_process,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_comment,
    STATE(24), 6,
      sym_shebang,
      sym_feature_flag,
      sym_include,
      sym_parameter,
      sym_process_definition,
      aux_sym_source_file_repeat1,
  [1113] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(148), 11,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_output_COLON,
      anon_sym_stdout,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [1136] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(150), 11,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_output_COLON,
      anon_sym_stdout,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [1159] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    ACTIONS(53), 1,
      aux_sym_number_token2,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(32), 1,
      sym_comment,
    ACTIONS(152), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 3,
      sym_number,
      sym_string,
      sym_boolean,
  [1196] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(154), 11,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_output_COLON,
      anon_sym_stdout,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [1219] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(34), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_directive_block_repeat1,
    STATE(37), 1,
      sym_directive,
    ACTIONS(156), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [1247] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(34), 1,
      aux_sym_directive_block_repeat1,
    STATE(35), 1,
      sym_comment,
    STATE(37), 1,
      sym_directive,
    ACTIONS(160), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [1275] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(37), 1,
      sym_directive,
    STATE(36), 2,
      sym_comment,
      aux_sym_directive_block_repeat1,
    ACTIONS(162), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [1301] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      sym_identifier,
    STATE(37), 1,
      sym_comment,
    ACTIONS(167), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [1323] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(38), 1,
      sym_comment,
    ACTIONS(171), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [1345] = 2,
    STATE(39), 1,
      sym_comment,
    ACTIONS(175), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
      anon_sym_PIPE,
  [1360] = 2,
    STATE(40), 1,
      sym_comment,
    ACTIONS(177), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
      anon_sym_PIPE,
  [1375] = 2,
    STATE(41), 1,
      sym_comment,
    ACTIONS(179), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
      anon_sym_PIPE,
  [1390] = 2,
    STATE(42), 1,
      sym_comment,
    ACTIONS(181), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
      anon_sym_PIPE,
  [1405] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(183), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [1424] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(185), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [1443] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(187), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [1462] = 2,
    STATE(46), 1,
      sym_comment,
    ACTIONS(189), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
      anon_sym_PIPE,
  [1477] = 2,
    STATE(47), 1,
      sym_comment,
    ACTIONS(191), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
      anon_sym_PIPE,
  [1492] = 2,
    STATE(48), 1,
      sym_comment,
    ACTIONS(193), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
      anon_sym_PIPE,
  [1507] = 3,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    STATE(49), 1,
      sym_comment,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1524] = 2,
    STATE(50), 1,
      sym_comment,
    ACTIONS(199), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
      anon_sym_PIPE,
  [1539] = 2,
    STATE(51), 1,
      sym_comment,
    ACTIONS(201), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
      anon_sym_PIPE,
  [1554] = 2,
    STATE(52), 1,
      sym_comment,
    ACTIONS(203), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
      anon_sym_PIPE,
  [1569] = 2,
    STATE(53), 1,
      sym_comment,
    ACTIONS(205), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
      anon_sym_PIPE,
  [1584] = 2,
    STATE(54), 1,
      sym_comment,
    ACTIONS(207), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
      anon_sym_PIPE,
  [1599] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      anon_sym_from,
    ACTIONS(211), 1,
      anon_sym_value,
    ACTIONS(213), 1,
      anon_sym_of,
    STATE(55), 1,
      sym_comment,
    STATE(41), 3,
      sym_channel_from,
      sym_channel_value,
      sym_channel_of,
  [1623] = 2,
    STATE(56), 1,
      sym_comment,
    ACTIONS(215), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1637] = 2,
    STATE(57), 1,
      sym_comment,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1651] = 2,
    STATE(58), 1,
      sym_comment,
    ACTIONS(219), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1665] = 2,
    STATE(59), 1,
      sym_comment,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1679] = 2,
    STATE(60), 1,
      sym_comment,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1693] = 2,
    STATE(61), 1,
      sym_comment,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1707] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(227), 1,
      anon_sym_from,
    ACTIONS(229), 1,
      anon_sym_value,
    ACTIONS(231), 1,
      anon_sym_of,
    STATE(62), 1,
      sym_comment,
    STATE(73), 3,
      sym_channel_from,
      sym_channel_value,
      sym_channel_of,
  [1731] = 2,
    STATE(63), 1,
      sym_comment,
    ACTIONS(233), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1745] = 2,
    STATE(64), 1,
      sym_comment,
    ACTIONS(235), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1759] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 1,
      sym_comment,
    ACTIONS(203), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1776] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(57), 1,
      sym_string,
    STATE(66), 1,
      sym_comment,
  [1801] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_SQUOTE,
    ACTIONS(241), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(43), 1,
      sym_script_content,
    STATE(67), 1,
      sym_comment,
  [1826] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(61), 1,
      sym_string,
    STATE(68), 1,
      sym_comment,
  [1851] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 1,
      sym_comment,
    ACTIONS(245), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1868] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(70), 1,
      sym_comment,
    ACTIONS(207), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1885] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_comment,
    ACTIONS(193), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1902] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(72), 1,
      sym_comment,
    ACTIONS(177), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1919] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      sym_comment,
    ACTIONS(179), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1936] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_comment,
    ACTIONS(181), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1953] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 1,
      sym_comment,
    ACTIONS(189), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1970] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 1,
      sym_comment,
    ACTIONS(191), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [1987] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      sym_comment,
    ACTIONS(199), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2004] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(78), 1,
      sym_comment,
    ACTIONS(201), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2021] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(79), 1,
      sym_comment,
    ACTIONS(205), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2038] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 1,
      sym_comment,
    ACTIONS(175), 5,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2055] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      anon_sym_PIPE,
    STATE(81), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym_channel_from_repeat1,
  [2077] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_PIPE,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_channel_from_repeat1,
  [2099] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_PIPE,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_channel_from_repeat1,
  [2121] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_PIPE,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym_channel_from_repeat1,
  [2143] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_include_repeat1,
  [2162] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_channel_from_repeat1,
  [2181] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      anon_sym_PIPE,
    STATE(87), 1,
      sym_comment,
    ACTIONS(265), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2198] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_channel_from_repeat1,
  [2217] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(89), 2,
      sym_comment,
      aux_sym_channel_from_repeat1,
  [2234] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(274), 1,
      anon_sym_as,
    STATE(90), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2251] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym_include_repeat1,
    STATE(91), 1,
      sym_comment,
  [2270] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_channel_from_repeat1,
    STATE(92), 1,
      sym_comment,
  [2289] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(93), 2,
      sym_comment,
      aux_sym_include_repeat1,
  [2306] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      anon_sym_PIPE,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(287), 1,
      anon_sym_into,
    STATE(94), 1,
      sym_comment,
  [2325] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_channel_from_repeat1,
    STATE(95), 1,
      sym_comment,
  [2344] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2358] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(96), 1,
      sym_include_item,
    STATE(97), 1,
      sym_comment,
  [2374] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      anon_sym_PIPE,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_comment,
  [2390] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(91), 1,
      sym_include_item,
    STATE(99), 1,
      sym_comment,
  [2406] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      anon_sym_from,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    STATE(100), 1,
      sym_comment,
  [2422] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      anon_sym_PIPE,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      sym_comment,
  [2438] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      anon_sym_PIPE,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_comment,
  [2454] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      anon_sym_PIPE,
    ACTIONS(303), 1,
      anon_sym_SEMI,
    STATE(103), 1,
      sym_comment,
  [2470] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2484] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      anon_sym_PIPE,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym_comment,
  [2500] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      aux_sym_string_token1,
    STATE(106), 1,
      sym_comment,
  [2513] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(107), 1,
      sym_comment,
  [2526] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_comment,
  [2539] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(319), 1,
      anon_sym_DOT,
    STATE(109), 1,
      sym_comment,
  [2552] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(321), 1,
      anon_sym_EQ,
    STATE(110), 1,
      sym_comment,
  [2565] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      sym_comment,
  [2578] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(323), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym_comment,
  [2591] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(323), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(113), 1,
      sym_comment,
  [2604] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(323), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(114), 1,
      sym_comment,
  [2617] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(325), 1,
      anon_sym_DOT,
    STATE(115), 1,
      sym_comment,
  [2630] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_comment,
  [2643] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(329), 1,
      anon_sym_from,
    STATE(117), 1,
      sym_comment,
  [2656] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 1,
      anon_sym_DOT,
    STATE(118), 1,
      sym_comment,
  [2669] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(333), 1,
      anon_sym_EQ,
    STATE(119), 1,
      sym_comment,
  [2682] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(335), 1,
      aux_sym_string_token1,
    STATE(120), 1,
      sym_comment,
  [2695] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym_comment,
  [2708] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
    STATE(122), 1,
      sym_comment,
  [2721] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(337), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(123), 1,
      sym_comment,
  [2734] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(337), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(124), 1,
      sym_comment,
  [2747] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(339), 1,
      aux_sym_string_token2,
    STATE(125), 1,
      sym_comment,
  [2760] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 1,
      aux_sym_string_token1,
    STATE(126), 1,
      sym_comment,
  [2773] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(343), 1,
      aux_sym_string_token2,
    STATE(127), 1,
      sym_comment,
  [2786] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(345), 1,
      sym_identifier,
    STATE(128), 1,
      sym_comment,
  [2799] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(347), 1,
      anon_sym_DOT,
    STATE(129), 1,
      sym_comment,
  [2812] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_comment,
  [2825] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_comment,
  [2838] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_comment,
  [2851] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(355), 1,
      aux_sym_comment_token1,
    STATE(133), 1,
      sym_comment,
  [2864] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 1,
      sym_identifier,
    STATE(134), 1,
      sym_comment,
  [2877] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(135), 1,
      sym_comment,
  [2890] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_comment,
  [2903] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(363), 1,
      aux_sym_comment_token1,
    STATE(137), 1,
      sym_comment,
  [2916] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(365), 1,
      anon_sym_SLASH,
    STATE(138), 1,
      sym_comment,
  [2929] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym_comment,
  [2942] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(367), 1,
      anon_sym_SQUOTE,
    STATE(140), 1,
      sym_comment,
  [2955] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(367), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(141), 1,
      sym_comment,
  [2968] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(367), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(142), 1,
      sym_comment,
  [2981] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(369), 1,
      anon_sym_from,
    STATE(143), 1,
      sym_comment,
  [2994] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 1,
      aux_sym_comment_token1,
    STATE(144), 1,
      sym_comment,
  [3007] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(373), 1,
      aux_sym_string_token1,
    STATE(145), 1,
      sym_comment,
  [3020] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      aux_sym_string_token2,
    STATE(146), 1,
      sym_comment,
  [3033] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(377), 1,
      aux_sym_script_content_token1,
    STATE(147), 1,
      sym_comment,
  [3046] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(379), 1,
      aux_sym_script_content_token2,
    STATE(148), 1,
      sym_comment,
  [3059] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 1,
      anon_sym_SLASH,
    STATE(149), 1,
      sym_comment,
  [3072] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(383), 1,
      aux_sym_comment_token2,
    STATE(150), 1,
      sym_comment,
  [3085] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 1,
      aux_sym_comment_token2,
    STATE(151), 1,
      sym_comment,
  [3098] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(387), 1,
      aux_sym_string_token2,
    STATE(152), 1,
      sym_comment,
  [3111] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 1,
      aux_sym_string_token1,
    STATE(153), 1,
      sym_comment,
  [3124] = 4,
    ACTIONS(309), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(311), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(391), 1,
      aux_sym_string_token2,
    STATE(154), 1,
      sym_comment,
  [3137] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_DOT,
    STATE(155), 1,
      sym_comment,
  [3150] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(395), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_comment,
  [3163] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_comment,
  [3176] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(158), 1,
      sym_comment,
  [3189] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_comment,
  [3202] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(160), 1,
      sym_comment,
  [3215] = 1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [3219] = 1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 252,
  [SMALL_STATE(8)] = 298,
  [SMALL_STATE(9)] = 346,
  [SMALL_STATE(10)] = 394,
  [SMALL_STATE(11)] = 440,
  [SMALL_STATE(12)] = 488,
  [SMALL_STATE(13)] = 536,
  [SMALL_STATE(14)] = 584,
  [SMALL_STATE(15)] = 632,
  [SMALL_STATE(16)] = 680,
  [SMALL_STATE(17)] = 712,
  [SMALL_STATE(18)] = 744,
  [SMALL_STATE(19)] = 774,
  [SMALL_STATE(20)] = 805,
  [SMALL_STATE(21)] = 836,
  [SMALL_STATE(22)] = 865,
  [SMALL_STATE(23)] = 901,
  [SMALL_STATE(24)] = 925,
  [SMALL_STATE(25)] = 959,
  [SMALL_STATE(26)] = 993,
  [SMALL_STATE(27)] = 1029,
  [SMALL_STATE(28)] = 1053,
  [SMALL_STATE(29)] = 1077,
  [SMALL_STATE(30)] = 1113,
  [SMALL_STATE(31)] = 1136,
  [SMALL_STATE(32)] = 1159,
  [SMALL_STATE(33)] = 1196,
  [SMALL_STATE(34)] = 1219,
  [SMALL_STATE(35)] = 1247,
  [SMALL_STATE(36)] = 1275,
  [SMALL_STATE(37)] = 1301,
  [SMALL_STATE(38)] = 1323,
  [SMALL_STATE(39)] = 1345,
  [SMALL_STATE(40)] = 1360,
  [SMALL_STATE(41)] = 1375,
  [SMALL_STATE(42)] = 1390,
  [SMALL_STATE(43)] = 1405,
  [SMALL_STATE(44)] = 1424,
  [SMALL_STATE(45)] = 1443,
  [SMALL_STATE(46)] = 1462,
  [SMALL_STATE(47)] = 1477,
  [SMALL_STATE(48)] = 1492,
  [SMALL_STATE(49)] = 1507,
  [SMALL_STATE(50)] = 1524,
  [SMALL_STATE(51)] = 1539,
  [SMALL_STATE(52)] = 1554,
  [SMALL_STATE(53)] = 1569,
  [SMALL_STATE(54)] = 1584,
  [SMALL_STATE(55)] = 1599,
  [SMALL_STATE(56)] = 1623,
  [SMALL_STATE(57)] = 1637,
  [SMALL_STATE(58)] = 1651,
  [SMALL_STATE(59)] = 1665,
  [SMALL_STATE(60)] = 1679,
  [SMALL_STATE(61)] = 1693,
  [SMALL_STATE(62)] = 1707,
  [SMALL_STATE(63)] = 1731,
  [SMALL_STATE(64)] = 1745,
  [SMALL_STATE(65)] = 1759,
  [SMALL_STATE(66)] = 1776,
  [SMALL_STATE(67)] = 1801,
  [SMALL_STATE(68)] = 1826,
  [SMALL_STATE(69)] = 1851,
  [SMALL_STATE(70)] = 1868,
  [SMALL_STATE(71)] = 1885,
  [SMALL_STATE(72)] = 1902,
  [SMALL_STATE(73)] = 1919,
  [SMALL_STATE(74)] = 1936,
  [SMALL_STATE(75)] = 1953,
  [SMALL_STATE(76)] = 1970,
  [SMALL_STATE(77)] = 1987,
  [SMALL_STATE(78)] = 2004,
  [SMALL_STATE(79)] = 2021,
  [SMALL_STATE(80)] = 2038,
  [SMALL_STATE(81)] = 2055,
  [SMALL_STATE(82)] = 2077,
  [SMALL_STATE(83)] = 2099,
  [SMALL_STATE(84)] = 2121,
  [SMALL_STATE(85)] = 2143,
  [SMALL_STATE(86)] = 2162,
  [SMALL_STATE(87)] = 2181,
  [SMALL_STATE(88)] = 2198,
  [SMALL_STATE(89)] = 2217,
  [SMALL_STATE(90)] = 2234,
  [SMALL_STATE(91)] = 2251,
  [SMALL_STATE(92)] = 2270,
  [SMALL_STATE(93)] = 2289,
  [SMALL_STATE(94)] = 2306,
  [SMALL_STATE(95)] = 2325,
  [SMALL_STATE(96)] = 2344,
  [SMALL_STATE(97)] = 2358,
  [SMALL_STATE(98)] = 2374,
  [SMALL_STATE(99)] = 2390,
  [SMALL_STATE(100)] = 2406,
  [SMALL_STATE(101)] = 2422,
  [SMALL_STATE(102)] = 2438,
  [SMALL_STATE(103)] = 2454,
  [SMALL_STATE(104)] = 2470,
  [SMALL_STATE(105)] = 2484,
  [SMALL_STATE(106)] = 2500,
  [SMALL_STATE(107)] = 2513,
  [SMALL_STATE(108)] = 2526,
  [SMALL_STATE(109)] = 2539,
  [SMALL_STATE(110)] = 2552,
  [SMALL_STATE(111)] = 2565,
  [SMALL_STATE(112)] = 2578,
  [SMALL_STATE(113)] = 2591,
  [SMALL_STATE(114)] = 2604,
  [SMALL_STATE(115)] = 2617,
  [SMALL_STATE(116)] = 2630,
  [SMALL_STATE(117)] = 2643,
  [SMALL_STATE(118)] = 2656,
  [SMALL_STATE(119)] = 2669,
  [SMALL_STATE(120)] = 2682,
  [SMALL_STATE(121)] = 2695,
  [SMALL_STATE(122)] = 2708,
  [SMALL_STATE(123)] = 2721,
  [SMALL_STATE(124)] = 2734,
  [SMALL_STATE(125)] = 2747,
  [SMALL_STATE(126)] = 2760,
  [SMALL_STATE(127)] = 2773,
  [SMALL_STATE(128)] = 2786,
  [SMALL_STATE(129)] = 2799,
  [SMALL_STATE(130)] = 2812,
  [SMALL_STATE(131)] = 2825,
  [SMALL_STATE(132)] = 2838,
  [SMALL_STATE(133)] = 2851,
  [SMALL_STATE(134)] = 2864,
  [SMALL_STATE(135)] = 2877,
  [SMALL_STATE(136)] = 2890,
  [SMALL_STATE(137)] = 2903,
  [SMALL_STATE(138)] = 2916,
  [SMALL_STATE(139)] = 2929,
  [SMALL_STATE(140)] = 2942,
  [SMALL_STATE(141)] = 2955,
  [SMALL_STATE(142)] = 2968,
  [SMALL_STATE(143)] = 2981,
  [SMALL_STATE(144)] = 2994,
  [SMALL_STATE(145)] = 3007,
  [SMALL_STATE(146)] = 3020,
  [SMALL_STATE(147)] = 3033,
  [SMALL_STATE(148)] = 3046,
  [SMALL_STATE(149)] = 3059,
  [SMALL_STATE(150)] = 3072,
  [SMALL_STATE(151)] = 3085,
  [SMALL_STATE(152)] = 3098,
  [SMALL_STATE(153)] = 3111,
  [SMALL_STATE(154)] = 3124,
  [SMALL_STATE(155)] = 3137,
  [SMALL_STATE(156)] = 3150,
  [SMALL_STATE(157)] = 3163,
  [SMALL_STATE(158)] = 3176,
  [SMALL_STATE(159)] = 3189,
  [SMALL_STATE(160)] = 3202,
  [SMALL_STATE(161)] = 3215,
  [SMALL_STATE(162)] = 3219,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_block, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_block, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_block, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_block, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_block_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_block_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_declaration, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_declaration, 5, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_declaration, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_block_repeat1, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_declaration, 5, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_block_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_block_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_block_repeat1, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_block_repeat1, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_of, 5, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_expression, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_expression, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_content, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_from, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_of, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_from, 4, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_value, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_of, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_from, 5, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_definition, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 6, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_definition, 5, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_flag, 7, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 7, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_channel_from_repeat1, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_channel_from_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_repeat1, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [361] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
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

TS_PUBLIC const TSLanguage *tree_sitter_nextflow(void) {
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
