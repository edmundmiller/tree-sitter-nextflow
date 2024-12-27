#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
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
  sym_source_file = 28,
  sym_comment = 29,
  sym_shebang = 30,
  sym_feature_flag = 31,
  sym_include = 32,
  sym_include_item = 33,
  sym_parameter = 34,
  sym__expression = 35,
  sym_number = 36,
  sym_string = 37,
  sym_boolean = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_include_repeat1 = 40,
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_include_repeat1] = "include_repeat1",
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_include_repeat1] = aux_sym_include_repeat1,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_repeat1] = {
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
  [50] = 38,
  [51] = 51,
  [52] = 34,
  [53] = 30,
  [54] = 7,
  [55] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      ADVANCE_MAP(
        '"', 76,
        '#', 1,
        '\'', 80,
        ',', 61,
        '.', 57,
        '/', 54,
        '=', 58,
        'a', 30,
        'f', 10,
        'i', 25,
        'n', 15,
        'p', 11,
        't', 28,
        '{', 60,
        '}', 62,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 't') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(84);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(85);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '/') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '/') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(53);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == 'w') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(83);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(83);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(7);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '/') ADVANCE(40);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_nextflow);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
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
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 82},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 78},
  [36] = {.lex_state = 82},
  [37] = {.lex_state = 78},
  [38] = {.lex_state = 46},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 46},
  [51] = {.lex_state = 46},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {(TSStateId)(-1)},
  [55] = {(TSStateId)(-1)},
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
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym_comment] = STATE(1),
    [sym_shebang] = STATE(4),
    [sym_feature_flag] = STATE(4),
    [sym_include] = STATE(4),
    [sym_parameter] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(11),
    [anon_sym_POUND_BANG] = ACTIONS(13),
    [anon_sym_nextflow] = ACTIONS(15),
    [anon_sym_include] = ACTIONS(17),
    [anon_sym_params] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(25), 1,
      aux_sym_number_token2,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(2), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 4,
      sym__expression,
      sym_number,
      sym_string,
      sym_boolean,
  [41] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(25), 1,
      aux_sym_number_token2,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(3), 1,
      sym_comment,
    ACTIONS(37), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 3,
      sym_number,
      sym_string,
      sym_boolean,
  [78] = 9,
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
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_comment,
    STATE(5), 5,
      sym_shebang,
      sym_feature_flag,
      sym_include,
      sym_parameter,
      aux_sym_source_file_repeat1,
  [110] = 8,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(46), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(49), 1,
      anon_sym_POUND_BANG,
    ACTIONS(52), 1,
      anon_sym_nextflow,
    ACTIONS(55), 1,
      anon_sym_include,
    ACTIONS(58), 1,
      anon_sym_params,
    STATE(5), 6,
      sym_comment,
      sym_shebang,
      sym_feature_flag,
      sym_include,
      sym_parameter,
      aux_sym_source_file_repeat1,
  [140] = 2,
    STATE(6), 1,
      sym_comment,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
  [153] = 2,
    STATE(7), 1,
      sym_comment,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
  [166] = 2,
    STATE(8), 1,
      sym_comment,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
  [179] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(9), 1,
      sym_comment,
    STATE(14), 1,
      sym_string,
  [204] = 2,
    STATE(10), 1,
      sym_comment,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
  [217] = 2,
    STATE(11), 1,
      sym_comment,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
  [230] = 2,
    STATE(12), 1,
      sym_comment,
    ACTIONS(71), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
  [243] = 2,
    STATE(13), 1,
      sym_comment,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
  [256] = 2,
    STATE(14), 1,
      sym_comment,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
  [269] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(6), 1,
      sym_string,
    STATE(15), 1,
      sym_comment,
  [294] = 2,
    STATE(16), 1,
      sym_comment,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
  [307] = 2,
    STATE(17), 1,
      sym_comment,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
  [320] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_include_repeat1,
  [339] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(87), 1,
      anon_sym_as,
    STATE(19), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [356] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_include_repeat1,
  [375] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_comment,
      aux_sym_include_repeat1,
  [392] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(18), 1,
      sym_include_item,
    STATE(22), 1,
      sym_comment,
  [408] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(23), 1,
      sym_comment,
    STATE(25), 1,
      sym_include_item,
  [424] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [438] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [452] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_comment,
  [465] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_comment,
  [478] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(104), 1,
      anon_sym_EQ,
    STATE(28), 1,
      sym_comment,
  [491] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(106), 1,
      sym_identifier,
    STATE(29), 1,
      sym_comment,
  [504] = 4,
    ACTIONS(108), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      aux_sym_comment_token2,
    STATE(30), 1,
      sym_comment,
  [517] = 4,
    ACTIONS(108), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(114), 1,
      aux_sym_string_token2,
    STATE(31), 1,
      sym_comment,
  [530] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      anon_sym_from,
    STATE(32), 1,
      sym_comment,
  [543] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(118), 1,
      anon_sym_DOT,
    STATE(33), 1,
      sym_comment,
  [556] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    STATE(34), 1,
      sym_comment,
  [569] = 4,
    ACTIONS(108), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(122), 1,
      aux_sym_string_token1,
    STATE(35), 1,
      sym_comment,
  [582] = 4,
    ACTIONS(108), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(124), 1,
      aux_sym_string_token2,
    STATE(36), 1,
      sym_comment,
  [595] = 4,
    ACTIONS(108), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      aux_sym_string_token1,
    STATE(37), 1,
      sym_comment,
  [608] = 4,
    ACTIONS(108), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
  [621] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_EQ,
    STATE(39), 1,
      sym_comment,
  [634] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(132), 1,
      anon_sym_DOT,
    STATE(40), 1,
      sym_comment,
  [647] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(41), 1,
      sym_comment,
  [660] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(42), 1,
      sym_comment,
  [673] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_comment,
  [686] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    STATE(44), 1,
      sym_comment,
  [699] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(45), 1,
      sym_comment,
  [712] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(46), 1,
      sym_comment,
  [725] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(47), 1,
      sym_comment,
  [738] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      anon_sym_DOT,
    STATE(48), 1,
      sym_comment,
  [751] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(144), 1,
      anon_sym_from,
    STATE(49), 1,
      sym_comment,
  [764] = 4,
    ACTIONS(108), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
  [777] = 4,
    ACTIONS(108), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
  [790] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      sym_comment,
  [803] = 4,
    ACTIONS(108), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(152), 1,
      aux_sym_comment_token2,
    STATE(53), 1,
      sym_comment,
  [816] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [820] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 153,
  [SMALL_STATE(8)] = 166,
  [SMALL_STATE(9)] = 179,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 217,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 243,
  [SMALL_STATE(14)] = 256,
  [SMALL_STATE(15)] = 269,
  [SMALL_STATE(16)] = 294,
  [SMALL_STATE(17)] = 307,
  [SMALL_STATE(18)] = 320,
  [SMALL_STATE(19)] = 339,
  [SMALL_STATE(20)] = 356,
  [SMALL_STATE(21)] = 375,
  [SMALL_STATE(22)] = 392,
  [SMALL_STATE(23)] = 408,
  [SMALL_STATE(24)] = 424,
  [SMALL_STATE(25)] = 438,
  [SMALL_STATE(26)] = 452,
  [SMALL_STATE(27)] = 465,
  [SMALL_STATE(28)] = 478,
  [SMALL_STATE(29)] = 491,
  [SMALL_STATE(30)] = 504,
  [SMALL_STATE(31)] = 517,
  [SMALL_STATE(32)] = 530,
  [SMALL_STATE(33)] = 543,
  [SMALL_STATE(34)] = 556,
  [SMALL_STATE(35)] = 569,
  [SMALL_STATE(36)] = 582,
  [SMALL_STATE(37)] = 595,
  [SMALL_STATE(38)] = 608,
  [SMALL_STATE(39)] = 621,
  [SMALL_STATE(40)] = 634,
  [SMALL_STATE(41)] = 647,
  [SMALL_STATE(42)] = 660,
  [SMALL_STATE(43)] = 673,
  [SMALL_STATE(44)] = 686,
  [SMALL_STATE(45)] = 699,
  [SMALL_STATE(46)] = 712,
  [SMALL_STATE(47)] = 725,
  [SMALL_STATE(48)] = 738,
  [SMALL_STATE(49)] = 751,
  [SMALL_STATE(50)] = 764,
  [SMALL_STATE(51)] = 777,
  [SMALL_STATE(52)] = 790,
  [SMALL_STATE(53)] = 803,
  [SMALL_STATE(54)] = 816,
  [SMALL_STATE(55)] = 820,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 7, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_flag, 7, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 6, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [102] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
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
