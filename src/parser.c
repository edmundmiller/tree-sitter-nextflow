#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 114
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
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
  sym_source_file = 45,
  sym_comment = 46,
  sym_shebang = 47,
  sym_feature_flag = 48,
  sym_include = 49,
  sym_include_item = 50,
  sym_parameter = 51,
  sym__expression = 52,
  sym_number = 53,
  sym_string = 54,
  sym_boolean = 55,
  sym_process_definition = 56,
  sym_input_block = 57,
  sym_input_declaration = 58,
  sym_output_block = 59,
  sym_output_declaration = 60,
  sym_script_block = 61,
  sym_script_content = 62,
  sym_directive_block = 63,
  sym_directive = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_include_repeat1 = 66,
  aux_sym_process_definition_repeat1 = 67,
  aux_sym_input_block_repeat1 = 68,
  aux_sym_output_block_repeat1 = 69,
  aux_sym_directive_block_repeat1 = 70,
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_include_repeat1] = "include_repeat1",
  [aux_sym_process_definition_repeat1] = "process_definition_repeat1",
  [aux_sym_input_block_repeat1] = "input_block_repeat1",
  [aux_sym_output_block_repeat1] = "output_block_repeat1",
  [aux_sym_directive_block_repeat1] = "directive_block_repeat1",
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_include_repeat1] = aux_sym_include_repeat1,
  [aux_sym_process_definition_repeat1] = aux_sym_process_definition_repeat1,
  [aux_sym_input_block_repeat1] = aux_sym_input_block_repeat1,
  [aux_sym_output_block_repeat1] = aux_sym_output_block_repeat1,
  [aux_sym_directive_block_repeat1] = aux_sym_directive_block_repeat1,
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
  [52] = 37,
  [53] = 34,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 41,
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
  [100] = 64,
  [101] = 65,
  [102] = 68,
  [103] = 69,
  [104] = 70,
  [105] = 71,
  [106] = 66,
  [107] = 87,
  [108] = 88,
  [109] = 89,
  [110] = 92,
  [111] = 111,
  [112] = 42,
  [113] = 44,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(93);
      ADVANCE_MAP(
        '"', 168,
        '#', 1,
        '\'', 172,
        ',', 119,
        '.', 115,
        '/', 112,
        ';', 189,
        '=', 116,
        'a', 68,
        'd', 41,
        'e', 54,
        'f', 18,
        'i', 55,
        'n', 29,
        'o', 80,
        'p', 19,
        's', 23,
        't', 65,
        'v', 20,
        '{', 118,
        '}', 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(113);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(172);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 't') ADVANCE(150);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(176);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(91);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(177);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(111);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == '}') ADVANCE(120);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(195);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(183);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(194);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(190);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(193);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(202);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(82);
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(185);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 86:
      if (lookahead == 'v') ADVANCE(187);
      END_STATE();
    case 87:
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 88:
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 'x') ADVANCE(73);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 91:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(198);
      END_STATE();
    case 92:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(201);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(175);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(175);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '/') ADVANCE(94);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_nextflow);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(151);
      if (lookahead == 'h') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(169);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(5);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(173);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_input_COLON);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_stdin);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_output_COLON);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_stdout);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_into);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_script_COLON);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_shell_COLON);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_exec_COLON);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_script_content_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(95);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_script_content_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '/') ADVANCE(196);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_script_content_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_script_content_token2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_script_content_token2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '/') ADVANCE(199);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(200);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_script_content_token2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_directive_COLON);
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
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
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
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
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
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 102},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 170},
  [74] = {.lex_state = 174},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 197},
  [83] = {.lex_state = 200},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 102},
  [87] = {.lex_state = 170},
  [88] = {.lex_state = 174},
  [89] = {.lex_state = 170},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 174},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 102},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 170},
  [108] = {.lex_state = 174},
  [109] = {.lex_state = 170},
  [110] = {.lex_state = 174},
  [111] = {.lex_state = 0},
  [112] = {(TSStateId)(-1)},
  [113] = {(TSStateId)(-1)},
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
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym_comment] = STATE(1),
    [sym_shebang] = STATE(17),
    [sym_feature_flag] = STATE(17),
    [sym_include] = STATE(17),
    [sym_parameter] = STATE(17),
    [sym_process_definition] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
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
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_input_declaration,
    STATE(2), 2,
      sym_comment,
      aux_sym_input_block_repeat1,
    ACTIONS(25), 5,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
    ACTIONS(23), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [30] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(2), 1,
      aux_sym_input_block_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_input_declaration,
    ACTIONS(30), 5,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
    ACTIONS(28), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [62] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(3), 1,
      aux_sym_input_block_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(15), 1,
      sym_input_declaration,
    ACTIONS(30), 5,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
    ACTIONS(32), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [94] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(5), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_output_block_repeat1,
    STATE(21), 1,
      sym_output_declaration,
    ACTIONS(36), 4,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdout,
    ACTIONS(34), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [125] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(40), 1,
      aux_sym_number_token1,
    ACTIONS(42), 1,
      aux_sym_number_token2,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(6), 1,
      sym_comment,
    ACTIONS(52), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 4,
      sym__expression,
      sym_number,
      sym_string,
      sym_boolean,
  [166] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(56), 1,
      aux_sym_number_token1,
    ACTIONS(58), 1,
      aux_sym_number_token2,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(66), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(7), 1,
      sym_comment,
    STATE(80), 1,
      sym__expression,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 3,
      sym_number,
      sym_string,
      sym_boolean,
  [209] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_output_block_repeat1,
    STATE(21), 1,
      sym_output_declaration,
    ACTIONS(36), 4,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdout,
    ACTIONS(70), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [240] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_output_declaration,
    STATE(9), 2,
      sym_comment,
      aux_sym_output_block_repeat1,
    ACTIONS(74), 4,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdout,
    ACTIONS(72), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [269] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(56), 1,
      aux_sym_number_token1,
    ACTIONS(58), 1,
      aux_sym_number_token2,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(66), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(10), 1,
      sym_comment,
    STATE(90), 1,
      sym__expression,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 3,
      sym_number,
      sym_string,
      sym_boolean,
  [312] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(56), 1,
      aux_sym_number_token1,
    ACTIONS(58), 1,
      aux_sym_number_token2,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(66), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(11), 1,
      sym_comment,
    STATE(57), 1,
      sym__expression,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 3,
      sym_number,
      sym_string,
      sym_boolean,
  [355] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(56), 1,
      aux_sym_number_token1,
    ACTIONS(58), 1,
      aux_sym_number_token2,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_SQUOTE,
    ACTIONS(64), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(66), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(12), 1,
      sym_comment,
    STATE(91), 1,
      sym__expression,
    ACTIONS(68), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(60), 3,
      sym_number,
      sym_string,
      sym_boolean,
  [398] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      sym_comment,
    ACTIONS(77), 12,
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
  [422] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      anon_sym_input_COLON,
    ACTIONS(83), 1,
      anon_sym_output_COLON,
    ACTIONS(87), 1,
      anon_sym_directive_COLON,
    STATE(14), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_process_definition_repeat1,
    ACTIONS(85), 3,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
    STATE(32), 4,
      sym_input_block,
      sym_output_block,
      sym_script_block,
      sym_directive_block,
  [458] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(89), 12,
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
  [482] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(81), 1,
      anon_sym_input_COLON,
    ACTIONS(83), 1,
      anon_sym_output_COLON,
    ACTIONS(87), 1,
      anon_sym_directive_COLON,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_process_definition_repeat1,
    STATE(16), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
    STATE(32), 4,
      sym_input_block,
      sym_output_block,
      sym_script_block,
      sym_directive_block,
  [518] = 10,
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
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_comment,
    STATE(20), 6,
      sym_shebang,
      sym_feature_flag,
      sym_include,
      sym_parameter,
      sym_process_definition,
      aux_sym_source_file_repeat1,
  [554] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      anon_sym_input_COLON,
    ACTIONS(100), 1,
      anon_sym_output_COLON,
    ACTIONS(106), 1,
      anon_sym_directive_COLON,
    STATE(18), 2,
      sym_comment,
      aux_sym_process_definition_repeat1,
    ACTIONS(103), 3,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
    STATE(32), 4,
      sym_input_block,
      sym_output_block,
      sym_script_block,
      sym_directive_block,
  [588] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(109), 12,
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
  [612] = 9,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(116), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(119), 1,
      anon_sym_POUND_BANG,
    ACTIONS(122), 1,
      anon_sym_nextflow,
    ACTIONS(125), 1,
      anon_sym_include,
    ACTIONS(128), 1,
      anon_sym_params,
    ACTIONS(131), 1,
      anon_sym_process,
    STATE(20), 7,
      sym_comment,
      sym_shebang,
      sym_feature_flag,
      sym_include,
      sym_parameter,
      sym_process_definition,
      aux_sym_source_file_repeat1,
  [646] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(134), 11,
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
  [669] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(136), 11,
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
  [692] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(138), 11,
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
  [715] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(40), 1,
      aux_sym_number_token1,
    ACTIONS(42), 1,
      aux_sym_number_token2,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(24), 1,
      sym_comment,
    ACTIONS(140), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 3,
      sym_number,
      sym_string,
      sym_boolean,
  [752] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(25), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_directive_block_repeat1,
    STATE(28), 1,
      sym_directive,
    ACTIONS(142), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [780] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(28), 1,
      sym_directive,
    STATE(26), 2,
      sym_comment,
      aux_sym_directive_block_repeat1,
    ACTIONS(146), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [806] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_directive_block_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(28), 1,
      sym_directive,
    ACTIONS(151), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [834] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(28), 1,
      sym_comment,
    ACTIONS(153), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [856] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      sym_identifier,
    STATE(29), 1,
      sym_comment,
    ACTIONS(157), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [878] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(161), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [897] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(163), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [916] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(165), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [935] = 2,
    STATE(33), 1,
      sym_comment,
    ACTIONS(167), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [949] = 2,
    STATE(34), 1,
      sym_comment,
    ACTIONS(169), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [963] = 2,
    STATE(35), 1,
      sym_comment,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [977] = 2,
    STATE(36), 1,
      sym_comment,
    ACTIONS(173), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [991] = 2,
    STATE(37), 1,
      sym_comment,
    ACTIONS(175), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1005] = 2,
    STATE(38), 1,
      sym_comment,
    ACTIONS(177), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1019] = 2,
    STATE(39), 1,
      sym_comment,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1033] = 2,
    STATE(40), 1,
      sym_comment,
    ACTIONS(181), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1047] = 2,
    STATE(41), 1,
      sym_comment,
    ACTIONS(183), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1061] = 2,
    STATE(42), 1,
      sym_comment,
    ACTIONS(185), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1075] = 2,
    STATE(43), 1,
      sym_comment,
    ACTIONS(187), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1089] = 2,
    STATE(44), 1,
      sym_comment,
    ACTIONS(189), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      anon_sym_process,
  [1103] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(36), 1,
      sym_string,
    STATE(45), 1,
      sym_comment,
  [1128] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(197), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(30), 1,
      sym_script_content,
    STATE(46), 1,
      sym_comment,
  [1153] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    ACTIONS(48), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(43), 1,
      sym_string,
    STATE(47), 1,
      sym_comment,
  [1178] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_include_repeat1,
  [1197] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(205), 1,
      anon_sym_as,
    STATE(49), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1214] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_include_repeat1,
    STATE(50), 1,
      sym_comment,
  [1233] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(51), 2,
      sym_comment,
      aux_sym_include_repeat1,
  [1250] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_SEMI,
      anon_sym_into,
  [1264] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_SEMI,
      anon_sym_into,
  [1278] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(214), 1,
      sym_identifier,
    STATE(54), 1,
      sym_comment,
    STATE(59), 1,
      sym_include_item,
  [1294] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(216), 1,
      anon_sym_from,
    ACTIONS(218), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_comment,
  [1310] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(214), 1,
      sym_identifier,
    STATE(50), 1,
      sym_include_item,
    STATE(56), 1,
      sym_comment,
  [1326] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    ACTIONS(222), 1,
      anon_sym_into,
    STATE(57), 1,
      sym_comment,
  [1342] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1356] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(59), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1370] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_SEMI,
      anon_sym_into,
  [1384] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_SEMI,
      anon_sym_into,
  [1398] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(62), 1,
      sym_comment,
  [1411] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      sym_comment,
  [1424] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(234), 1,
      aux_sym_comment_token1,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    STATE(64), 1,
      sym_comment,
  [1437] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(238), 1,
      anon_sym_SLASH,
    STATE(65), 1,
      sym_comment,
  [1450] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(240), 1,
      aux_sym_comment_token2,
    STATE(66), 1,
      sym_comment,
  [1463] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(67), 1,
      sym_comment,
  [1476] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_comment,
  [1489] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    STATE(69), 1,
      sym_comment,
  [1502] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(244), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(70), 1,
      sym_comment,
  [1515] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(244), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(71), 1,
      sym_comment,
  [1528] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(72), 1,
      sym_comment,
  [1541] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(248), 1,
      aux_sym_string_token1,
    STATE(73), 1,
      sym_comment,
  [1554] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(250), 1,
      aux_sym_string_token2,
    STATE(74), 1,
      sym_comment,
  [1567] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(252), 1,
      sym_identifier,
    STATE(75), 1,
      sym_comment,
  [1580] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_comment,
  [1593] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      sym_comment,
  [1606] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(78), 1,
      sym_comment,
  [1619] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(254), 1,
      anon_sym_EQ,
    STATE(79), 1,
      sym_comment,
  [1632] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      sym_comment,
  [1645] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(258), 1,
      anon_sym_EQ,
    STATE(81), 1,
      sym_comment,
  [1658] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(260), 1,
      aux_sym_script_content_token1,
    STATE(82), 1,
      sym_comment,
  [1671] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(262), 1,
      aux_sym_script_content_token2,
    STATE(83), 1,
      sym_comment,
  [1684] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_comment,
  [1697] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(266), 1,
      anon_sym_DOT,
    STATE(85), 1,
      sym_comment,
  [1710] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(268), 1,
      aux_sym_comment_token1,
    STATE(86), 1,
      sym_comment,
  [1723] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(270), 1,
      aux_sym_string_token1,
    STATE(87), 1,
      sym_comment,
  [1736] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(272), 1,
      aux_sym_string_token2,
    STATE(88), 1,
      sym_comment,
  [1749] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(274), 1,
      aux_sym_string_token1,
    STATE(89), 1,
      sym_comment,
  [1762] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      sym_comment,
  [1775] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(278), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_comment,
  [1788] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(280), 1,
      aux_sym_string_token2,
    STATE(92), 1,
      sym_comment,
  [1801] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(282), 1,
      anon_sym_DOT,
    STATE(93), 1,
      sym_comment,
  [1814] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(284), 1,
      anon_sym_DOT,
    STATE(94), 1,
      sym_comment,
  [1827] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(95), 1,
      sym_comment,
  [1840] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(288), 1,
      sym_identifier,
    STATE(96), 1,
      sym_comment,
  [1853] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(290), 1,
      anon_sym_from,
    STATE(97), 1,
      sym_comment,
  [1866] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      sym_identifier,
    STATE(98), 1,
      sym_comment,
  [1879] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_comment,
  [1892] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(296), 1,
      aux_sym_comment_token1,
    STATE(100), 1,
      sym_comment,
  [1905] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(298), 1,
      anon_sym_SLASH,
    STATE(101), 1,
      sym_comment,
  [1918] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym_comment,
  [1931] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    STATE(103), 1,
      sym_comment,
  [1944] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(300), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(104), 1,
      sym_comment,
  [1957] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(300), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(105), 1,
      sym_comment,
  [1970] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(302), 1,
      aux_sym_comment_token2,
    STATE(106), 1,
      sym_comment,
  [1983] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_string_token1,
    STATE(107), 1,
      sym_comment,
  [1996] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(306), 1,
      aux_sym_string_token2,
    STATE(108), 1,
      sym_comment,
  [2009] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(308), 1,
      aux_sym_string_token1,
    STATE(109), 1,
      sym_comment,
  [2022] = 4,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(236), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(310), 1,
      aux_sym_string_token2,
    STATE(110), 1,
      sym_comment,
  [2035] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(312), 1,
      anon_sym_from,
    STATE(111), 1,
      sym_comment,
  [2048] = 1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
  [2052] = 1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 125,
  [SMALL_STATE(7)] = 166,
  [SMALL_STATE(8)] = 209,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 269,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 355,
  [SMALL_STATE(13)] = 398,
  [SMALL_STATE(14)] = 422,
  [SMALL_STATE(15)] = 458,
  [SMALL_STATE(16)] = 482,
  [SMALL_STATE(17)] = 518,
  [SMALL_STATE(18)] = 554,
  [SMALL_STATE(19)] = 588,
  [SMALL_STATE(20)] = 612,
  [SMALL_STATE(21)] = 646,
  [SMALL_STATE(22)] = 669,
  [SMALL_STATE(23)] = 692,
  [SMALL_STATE(24)] = 715,
  [SMALL_STATE(25)] = 752,
  [SMALL_STATE(26)] = 780,
  [SMALL_STATE(27)] = 806,
  [SMALL_STATE(28)] = 834,
  [SMALL_STATE(29)] = 856,
  [SMALL_STATE(30)] = 878,
  [SMALL_STATE(31)] = 897,
  [SMALL_STATE(32)] = 916,
  [SMALL_STATE(33)] = 935,
  [SMALL_STATE(34)] = 949,
  [SMALL_STATE(35)] = 963,
  [SMALL_STATE(36)] = 977,
  [SMALL_STATE(37)] = 991,
  [SMALL_STATE(38)] = 1005,
  [SMALL_STATE(39)] = 1019,
  [SMALL_STATE(40)] = 1033,
  [SMALL_STATE(41)] = 1047,
  [SMALL_STATE(42)] = 1061,
  [SMALL_STATE(43)] = 1075,
  [SMALL_STATE(44)] = 1089,
  [SMALL_STATE(45)] = 1103,
  [SMALL_STATE(46)] = 1128,
  [SMALL_STATE(47)] = 1153,
  [SMALL_STATE(48)] = 1178,
  [SMALL_STATE(49)] = 1197,
  [SMALL_STATE(50)] = 1214,
  [SMALL_STATE(51)] = 1233,
  [SMALL_STATE(52)] = 1250,
  [SMALL_STATE(53)] = 1264,
  [SMALL_STATE(54)] = 1278,
  [SMALL_STATE(55)] = 1294,
  [SMALL_STATE(56)] = 1310,
  [SMALL_STATE(57)] = 1326,
  [SMALL_STATE(58)] = 1342,
  [SMALL_STATE(59)] = 1356,
  [SMALL_STATE(60)] = 1370,
  [SMALL_STATE(61)] = 1384,
  [SMALL_STATE(62)] = 1398,
  [SMALL_STATE(63)] = 1411,
  [SMALL_STATE(64)] = 1424,
  [SMALL_STATE(65)] = 1437,
  [SMALL_STATE(66)] = 1450,
  [SMALL_STATE(67)] = 1463,
  [SMALL_STATE(68)] = 1476,
  [SMALL_STATE(69)] = 1489,
  [SMALL_STATE(70)] = 1502,
  [SMALL_STATE(71)] = 1515,
  [SMALL_STATE(72)] = 1528,
  [SMALL_STATE(73)] = 1541,
  [SMALL_STATE(74)] = 1554,
  [SMALL_STATE(75)] = 1567,
  [SMALL_STATE(76)] = 1580,
  [SMALL_STATE(77)] = 1593,
  [SMALL_STATE(78)] = 1606,
  [SMALL_STATE(79)] = 1619,
  [SMALL_STATE(80)] = 1632,
  [SMALL_STATE(81)] = 1645,
  [SMALL_STATE(82)] = 1658,
  [SMALL_STATE(83)] = 1671,
  [SMALL_STATE(84)] = 1684,
  [SMALL_STATE(85)] = 1697,
  [SMALL_STATE(86)] = 1710,
  [SMALL_STATE(87)] = 1723,
  [SMALL_STATE(88)] = 1736,
  [SMALL_STATE(89)] = 1749,
  [SMALL_STATE(90)] = 1762,
  [SMALL_STATE(91)] = 1775,
  [SMALL_STATE(92)] = 1788,
  [SMALL_STATE(93)] = 1801,
  [SMALL_STATE(94)] = 1814,
  [SMALL_STATE(95)] = 1827,
  [SMALL_STATE(96)] = 1840,
  [SMALL_STATE(97)] = 1853,
  [SMALL_STATE(98)] = 1866,
  [SMALL_STATE(99)] = 1879,
  [SMALL_STATE(100)] = 1892,
  [SMALL_STATE(101)] = 1905,
  [SMALL_STATE(102)] = 1918,
  [SMALL_STATE(103)] = 1931,
  [SMALL_STATE(104)] = 1944,
  [SMALL_STATE(105)] = 1957,
  [SMALL_STATE(106)] = 1970,
  [SMALL_STATE(107)] = 1983,
  [SMALL_STATE(108)] = 1996,
  [SMALL_STATE(109)] = 2009,
  [SMALL_STATE(110)] = 2022,
  [SMALL_STATE(111)] = 2035,
  [SMALL_STATE(112)] = 2048,
  [SMALL_STATE(113)] = 2052,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_block, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_block, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_block, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_block, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_block_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_block_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_declaration, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_declaration, 5, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_block_repeat1, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_declaration, 5, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_declaration, 3, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_block_repeat1, 2, 0, 0),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_block_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_block_repeat1, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_block_repeat1, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_content, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_definition, 5, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_definition, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 7, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_flag, 7, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 6, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_repeat1, 2, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
