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
#define STATE_COUNT 261
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
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
  anon_sym_map = 51,
  anon_sym_it = 52,
  anon_sym_STAR = 53,
  anon_sym_workflow = 54,
  anon_sym_take_COLON = 55,
  anon_sym_main_COLON = 56,
  anon_sym_emit_COLON = 57,
  anon_sym_out = 58,
  sym_source_file = 59,
  sym_comment = 60,
  sym_shebang = 61,
  sym_feature_flag = 62,
  sym_include = 63,
  sym_include_item = 64,
  sym_parameter = 65,
  sym__expression = 66,
  sym_number = 67,
  sym_string = 68,
  sym_boolean = 69,
  sym_process_definition = 70,
  sym_input_block = 71,
  sym_input_declaration = 72,
  sym_output_block = 73,
  sym_output_declaration = 74,
  sym_script_block = 75,
  sym_script_content = 76,
  sym_directive_block = 77,
  sym_directive = 78,
  sym_channel_expression = 79,
  sym_channel_from = 80,
  sym_channel_value = 81,
  sym_channel_of = 82,
  sym_pipe_expression = 83,
  sym_map_body = 84,
  sym_workflow_definition = 85,
  sym_workflow_body = 86,
  sym_workflow_input = 87,
  sym_workflow_main = 88,
  sym_workflow_emit = 89,
  sym__workflow_statement = 90,
  sym_process_invocation = 91,
  aux_sym_source_file_repeat1 = 92,
  aux_sym_include_repeat1 = 93,
  aux_sym_process_definition_repeat1 = 94,
  aux_sym_input_block_repeat1 = 95,
  aux_sym_output_block_repeat1 = 96,
  aux_sym_directive_block_repeat1 = 97,
  aux_sym_channel_from_repeat1 = 98,
  aux_sym_workflow_body_repeat1 = 99,
  aux_sym_workflow_input_repeat1 = 100,
  aux_sym_workflow_main_repeat1 = 101,
  aux_sym_workflow_emit_repeat1 = 102,
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
  [anon_sym_map] = "map",
  [anon_sym_it] = "it",
  [anon_sym_STAR] = "*",
  [anon_sym_workflow] = "workflow",
  [anon_sym_take_COLON] = "take:",
  [anon_sym_main_COLON] = "main:",
  [anon_sym_emit_COLON] = "emit:",
  [anon_sym_out] = "out",
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
  [sym_map_body] = "map_body",
  [sym_workflow_definition] = "workflow_definition",
  [sym_workflow_body] = "workflow_body",
  [sym_workflow_input] = "workflow_input",
  [sym_workflow_main] = "workflow_main",
  [sym_workflow_emit] = "workflow_emit",
  [sym__workflow_statement] = "_workflow_statement",
  [sym_process_invocation] = "process_invocation",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_include_repeat1] = "include_repeat1",
  [aux_sym_process_definition_repeat1] = "process_definition_repeat1",
  [aux_sym_input_block_repeat1] = "input_block_repeat1",
  [aux_sym_output_block_repeat1] = "output_block_repeat1",
  [aux_sym_directive_block_repeat1] = "directive_block_repeat1",
  [aux_sym_channel_from_repeat1] = "channel_from_repeat1",
  [aux_sym_workflow_body_repeat1] = "workflow_body_repeat1",
  [aux_sym_workflow_input_repeat1] = "workflow_input_repeat1",
  [aux_sym_workflow_main_repeat1] = "workflow_main_repeat1",
  [aux_sym_workflow_emit_repeat1] = "workflow_emit_repeat1",
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
  [anon_sym_map] = anon_sym_map,
  [anon_sym_it] = anon_sym_it,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_workflow] = anon_sym_workflow,
  [anon_sym_take_COLON] = anon_sym_take_COLON,
  [anon_sym_main_COLON] = anon_sym_main_COLON,
  [anon_sym_emit_COLON] = anon_sym_emit_COLON,
  [anon_sym_out] = anon_sym_out,
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
  [sym_map_body] = sym_map_body,
  [sym_workflow_definition] = sym_workflow_definition,
  [sym_workflow_body] = sym_workflow_body,
  [sym_workflow_input] = sym_workflow_input,
  [sym_workflow_main] = sym_workflow_main,
  [sym_workflow_emit] = sym_workflow_emit,
  [sym__workflow_statement] = sym__workflow_statement,
  [sym_process_invocation] = sym_process_invocation,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_include_repeat1] = aux_sym_include_repeat1,
  [aux_sym_process_definition_repeat1] = aux_sym_process_definition_repeat1,
  [aux_sym_input_block_repeat1] = aux_sym_input_block_repeat1,
  [aux_sym_output_block_repeat1] = aux_sym_output_block_repeat1,
  [aux_sym_directive_block_repeat1] = aux_sym_directive_block_repeat1,
  [aux_sym_channel_from_repeat1] = aux_sym_channel_from_repeat1,
  [aux_sym_workflow_body_repeat1] = aux_sym_workflow_body_repeat1,
  [aux_sym_workflow_input_repeat1] = aux_sym_workflow_input_repeat1,
  [aux_sym_workflow_main_repeat1] = aux_sym_workflow_main_repeat1,
  [aux_sym_workflow_emit_repeat1] = aux_sym_workflow_emit_repeat1,
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
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_it] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workflow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_take_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_main_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emit_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
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
  [sym_map_body] = {
    .visible = true,
    .named = true,
  },
  [sym_workflow_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_workflow_body] = {
    .visible = true,
    .named = true,
  },
  [sym_workflow_input] = {
    .visible = true,
    .named = true,
  },
  [sym_workflow_main] = {
    .visible = true,
    .named = true,
  },
  [sym_workflow_emit] = {
    .visible = true,
    .named = true,
  },
  [sym__workflow_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_process_invocation] = {
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
  [aux_sym_workflow_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workflow_input_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workflow_main_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_workflow_emit_repeat1] = {
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
  [37] = 28,
  [38] = 27,
  [39] = 27,
  [40] = 40,
  [41] = 41,
  [42] = 28,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 48,
  [52] = 48,
  [53] = 24,
  [54] = 22,
  [55] = 55,
  [56] = 23,
  [57] = 14,
  [58] = 11,
  [59] = 12,
  [60] = 19,
  [61] = 25,
  [62] = 16,
  [63] = 17,
  [64] = 18,
  [65] = 20,
  [66] = 21,
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
  [103] = 102,
  [104] = 102,
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
  [115] = 111,
  [116] = 112,
  [117] = 111,
  [118] = 112,
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
  [129] = 55,
  [130] = 22,
  [131] = 23,
  [132] = 24,
  [133] = 11,
  [134] = 12,
  [135] = 14,
  [136] = 25,
  [137] = 16,
  [138] = 17,
  [139] = 18,
  [140] = 19,
  [141] = 20,
  [142] = 21,
  [143] = 128,
  [144] = 126,
  [145] = 145,
  [146] = 146,
  [147] = 128,
  [148] = 126,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 154,
  [159] = 156,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 154,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 156,
  [168] = 168,
  [169] = 152,
  [170] = 170,
  [171] = 152,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 172,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 203,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 205,
  [220] = 220,
  [221] = 207,
  [222] = 208,
  [223] = 209,
  [224] = 210,
  [225] = 207,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 208,
  [231] = 231,
  [232] = 185,
  [233] = 233,
  [234] = 234,
  [235] = 218,
  [236] = 173,
  [237] = 237,
  [238] = 176,
  [239] = 178,
  [240] = 182,
  [241] = 189,
  [242] = 191,
  [243] = 209,
  [244] = 244,
  [245] = 173,
  [246] = 172,
  [247] = 176,
  [248] = 178,
  [249] = 182,
  [250] = 189,
  [251] = 191,
  [252] = 210,
  [253] = 253,
  [254] = 187,
  [255] = 231,
  [256] = 187,
  [257] = 231,
  [258] = 185,
  [259] = 36,
  [260] = 41,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(134);
      ADVANCE_MAP(
        '"', 264,
        '#', 1,
        '\'', 269,
        '(', 303,
        ')', 304,
        '*', 311,
        ',', 162,
        '.', 157,
        '/', 153,
        ';', 287,
        '=', 158,
        'C', 58,
        'a', 102,
        'd', 59,
        'e', 78,
        'f', 24,
        'i', 81,
        'm', 25,
        'n', 40,
        'o', 54,
        'p', 26,
        's', 33,
        't', 27,
        'v', 29,
        'w', 92,
        '{', 161,
        '|', 307,
        '}', 163,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(154);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 264,
        '\'', 269,
        '(', 303,
        ')', 304,
        ',', 162,
        '.', 157,
        '/', 8,
        ';', 287,
        'C', 203,
        'e', 220,
        'f', 177,
        'm', 183,
        't', 180,
        '|', 307,
        '}', 163,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(273);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 263,
        '\'', 268,
        '/', 8,
        'd', 59,
        'e', 80,
        'i', 83,
        'o', 122,
        'p', 31,
        's', 33,
        't', 117,
        'v', 29,
        '}', 163,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(131);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(274);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '/') ADVANCE(135);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '/') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(152);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '/', 8,
        'd', 205,
        'e', 219,
        'i', 225,
        'm', 183,
        'o', 250,
        's', 186,
        '}', 163,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'v') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(182);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(316);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(293);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(315);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(314);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(281);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(292);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(291);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(300);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(288);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'h') ADVANCE(49);
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(306);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(283);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(308);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 65:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 125:
      if (lookahead == 'v') ADVANCE(285);
      END_STATE();
    case 126:
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 127:
      if (lookahead == 'w') ADVANCE(155);
      END_STATE();
    case 128:
      if (lookahead == 'w') ADVANCE(312);
      END_STATE();
    case 129:
      if (lookahead == 'x') ADVANCE(109);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 131:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(296);
      END_STATE();
    case 132:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(299);
      END_STATE();
    case 133:
      if (eof) ADVANCE(134);
      ADVANCE_MAP(
        '"', 264,
        '#', 1,
        '\'', 269,
        '/', 8,
        'C', 203,
        'd', 205,
        'e', 258,
        'f', 177,
        'i', 221,
        'n', 194,
        'o', 250,
        'p', 181,
        's', 186,
        't', 236,
        'w', 229,
        '|', 307,
        '}', 163,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(267);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(272);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(267);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(272);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '/') ADVANCE(135);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_nextflow);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_nextflow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_params);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'p') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == 'h') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(208);
      if (lookahead == 'x') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(265);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(272);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(270);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_process);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_input_COLON);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_stdin);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_output_COLON);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_stdout);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_into);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_script_COLON);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_shell_COLON);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_exec_COLON);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_script_content_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_script_content_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '/') ADVANCE(294);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_script_content_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_script_content_token2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_script_content_token2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '/') ADVANCE(297);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_script_content_token2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead != 0) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_directive_COLON);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_Channel);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_Channel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_workflow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_take_COLON);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_main_COLON);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_emit_COLON);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 133},
  [2] = {.lex_state = 133},
  [3] = {.lex_state = 133},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 133},
  [11] = {.lex_state = 133},
  [12] = {.lex_state = 133},
  [13] = {.lex_state = 133},
  [14] = {.lex_state = 133},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 133},
  [17] = {.lex_state = 133},
  [18] = {.lex_state = 133},
  [19] = {.lex_state = 133},
  [20] = {.lex_state = 133},
  [21] = {.lex_state = 133},
  [22] = {.lex_state = 133},
  [23] = {.lex_state = 133},
  [24] = {.lex_state = 133},
  [25] = {.lex_state = 133},
  [26] = {.lex_state = 133},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 133},
  [30] = {.lex_state = 133},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 133},
  [33] = {.lex_state = 133},
  [34] = {.lex_state = 133},
  [35] = {.lex_state = 133},
  [36] = {.lex_state = 133},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 133},
  [41] = {.lex_state = 133},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 133},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 133},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 133},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 133},
  [100] = {.lex_state = 133},
  [101] = {.lex_state = 133},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 13},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 12},
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
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 271},
  [173] = {.lex_state = 266},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 271},
  [176] = {.lex_state = 266},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 271},
  [179] = {.lex_state = 143},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 143},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 143},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 266},
  [227] = {.lex_state = 271},
  [228] = {.lex_state = 295},
  [229] = {.lex_state = 298},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 12},
  [235] = {.lex_state = 9},
  [236] = {.lex_state = 266},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 266},
  [239] = {.lex_state = 271},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 266},
  [246] = {.lex_state = 271},
  [247] = {.lex_state = 266},
  [248] = {.lex_state = 271},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {(TSStateId)(-1)},
  [260] = {(TSStateId)(-1)},
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
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_it] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_workflow] = ACTIONS(1),
    [anon_sym_take_COLON] = ACTIONS(1),
    [anon_sym_main_COLON] = ACTIONS(1),
    [anon_sym_emit_COLON] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(197),
    [sym_comment] = STATE(1),
    [sym_shebang] = STATE(2),
    [sym_feature_flag] = STATE(2),
    [sym_include] = STATE(2),
    [sym_parameter] = STATE(2),
    [sym__expression] = STATE(199),
    [sym_number] = STATE(55),
    [sym_string] = STATE(55),
    [sym_boolean] = STATE(55),
    [sym_process_definition] = STATE(2),
    [sym_channel_expression] = STATE(10),
    [sym_pipe_expression] = STATE(10),
    [sym_workflow_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(11),
    [anon_sym_POUND_BANG] = ACTIONS(13),
    [anon_sym_nextflow] = ACTIONS(15),
    [anon_sym_include] = ACTIONS(17),
    [anon_sym_params] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [aux_sym_number_token1] = ACTIONS(23),
    [aux_sym_number_token2] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_SQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_process] = ACTIONS(37),
    [anon_sym_Channel] = ACTIONS(39),
    [anon_sym_workflow] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
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
    ACTIONS(37), 1,
      anon_sym_process,
    ACTIONS(39), 1,
      anon_sym_Channel,
    ACTIONS(41), 1,
      anon_sym_workflow,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(199), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 2,
      sym_channel_expression,
      sym_pipe_expression,
    STATE(55), 3,
      sym_number,
      sym_string,
      sym_boolean,
    STATE(3), 7,
      sym_shebang,
      sym_feature_flag,
      sym_include,
      sym_parameter,
      sym_process_definition,
      sym_workflow_definition,
      aux_sym_source_file_repeat1,
  [80] = 22,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(50), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(53), 1,
      anon_sym_POUND_BANG,
    ACTIONS(56), 1,
      anon_sym_nextflow,
    ACTIONS(59), 1,
      anon_sym_include,
    ACTIONS(62), 1,
      anon_sym_params,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(68), 1,
      aux_sym_number_token1,
    ACTIONS(71), 1,
      aux_sym_number_token2,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(89), 1,
      anon_sym_process,
    ACTIONS(92), 1,
      anon_sym_Channel,
    ACTIONS(95), 1,
      anon_sym_workflow,
    STATE(199), 1,
      sym__expression,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 2,
      sym_channel_expression,
      sym_pipe_expression,
    STATE(55), 3,
      sym_number,
      sym_string,
      sym_boolean,
    STATE(3), 8,
      sym_comment,
      sym_shebang,
      sym_feature_flag,
      sym_include,
      sym_parameter,
      sym_process_definition,
      sym_workflow_definition,
      aux_sym_source_file_repeat1,
  [158] = 25,
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
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_Channel,
    ACTIONS(104), 1,
      anon_sym_take_COLON,
    ACTIONS(106), 1,
      anon_sym_main_COLON,
    ACTIONS(108), 1,
      anon_sym_emit_COLON,
    STATE(4), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_workflow_body_repeat1,
    STATE(77), 1,
      sym__expression,
    STATE(84), 1,
      sym_process_invocation,
    STATE(91), 1,
      sym__workflow_statement,
    STATE(108), 1,
      sym_workflow_input,
    STATE(125), 1,
      sym_workflow_main,
    STATE(212), 1,
      sym_workflow_body,
    STATE(217), 1,
      sym_workflow_emit,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [239] = 18,
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
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_Channel,
    STATE(5), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_workflow_main_repeat1,
    STATE(77), 1,
      sym__expression,
    STATE(84), 1,
      sym_process_invocation,
    STATE(188), 1,
      sym__workflow_statement,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(110), 2,
      anon_sym_RBRACE,
      anon_sym_emit_COLON,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [300] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    ACTIONS(120), 1,
      aux_sym_number_token2,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(138), 1,
      anon_sym_Channel,
    STATE(77), 1,
      sym__expression,
    STATE(84), 1,
      sym_process_invocation,
    STATE(188), 1,
      sym__workflow_statement,
    ACTIONS(112), 2,
      anon_sym_RBRACE,
      anon_sym_emit_COLON,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_comment,
      aux_sym_workflow_main_repeat1,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [359] = 18,
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
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_Channel,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_workflow_body_repeat1,
    STATE(77), 1,
      sym__expression,
    STATE(84), 1,
      sym_process_invocation,
    STATE(91), 1,
      sym__workflow_statement,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [419] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(148), 1,
      aux_sym_number_token1,
    ACTIONS(151), 1,
      aux_sym_number_token2,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(169), 1,
      anon_sym_Channel,
    STATE(77), 1,
      sym__expression,
    STATE(84), 1,
      sym_process_invocation,
    STATE(91), 1,
      sym__workflow_statement,
    ACTIONS(166), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_comment,
      aux_sym_workflow_body_repeat1,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [477] = 17,
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
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_Channel,
    STATE(5), 1,
      aux_sym_workflow_main_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(77), 1,
      sym__expression,
    STATE(84), 1,
      sym_process_invocation,
    STATE(188), 1,
      sym__workflow_statement,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [534] = 4,
    ACTIONS(176), 1,
      anon_sym_PIPE,
    STATE(10), 1,
      sym_comment,
    ACTIONS(172), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(174), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [564] = 3,
    STATE(11), 1,
      sym_comment,
    ACTIONS(178), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(180), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [592] = 3,
    STATE(12), 1,
      sym_comment,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(184), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [620] = 4,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    STATE(13), 1,
      sym_comment,
    ACTIONS(186), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(188), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [650] = 3,
    STATE(14), 1,
      sym_comment,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(194), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [678] = 16,
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
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_Channel,
    STATE(15), 1,
      sym_comment,
    STATE(77), 1,
      sym__expression,
    STATE(84), 1,
      sym_process_invocation,
    STATE(213), 1,
      sym__workflow_statement,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [732] = 3,
    STATE(16), 1,
      sym_comment,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(198), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [760] = 3,
    STATE(17), 1,
      sym_comment,
    ACTIONS(200), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(202), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [788] = 3,
    STATE(18), 1,
      sym_comment,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(206), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [816] = 3,
    STATE(19), 1,
      sym_comment,
    ACTIONS(208), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(210), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [844] = 3,
    STATE(20), 1,
      sym_comment,
    ACTIONS(212), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(214), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [872] = 3,
    STATE(21), 1,
      sym_comment,
    ACTIONS(216), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(218), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [900] = 3,
    STATE(22), 1,
      sym_comment,
    ACTIONS(220), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(222), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [928] = 3,
    STATE(23), 1,
      sym_comment,
    ACTIONS(224), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(226), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [956] = 3,
    STATE(24), 1,
      sym_comment,
    ACTIONS(228), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(230), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [984] = 3,
    STATE(25), 1,
      sym_comment,
    ACTIONS(232), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(234), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [1012] = 3,
    STATE(26), 1,
      sym_comment,
    ACTIONS(236), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(238), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [1039] = 15,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_comment,
    STATE(158), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1090] = 15,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_comment,
    STATE(112), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1141] = 3,
    STATE(29), 1,
      sym_comment,
    ACTIONS(244), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(246), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [1168] = 3,
    STATE(30), 1,
      sym_comment,
    ACTIONS(248), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(250), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [1195] = 15,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_comment,
    STATE(113), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1246] = 3,
    STATE(32), 1,
      sym_comment,
    ACTIONS(254), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(256), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [1273] = 3,
    STATE(33), 1,
      sym_comment,
    ACTIONS(258), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(260), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [1300] = 3,
    STATE(34), 1,
      sym_comment,
    ACTIONS(262), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(264), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [1327] = 3,
    STATE(35), 1,
      sym_comment,
    ACTIONS(266), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(268), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [1354] = 3,
    STATE(36), 1,
      sym_comment,
    ACTIONS(270), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(272), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [1381] = 15,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comment,
    STATE(118), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1432] = 15,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_comment,
    STATE(163), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1483] = 15,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_comment,
    STATE(154), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1534] = 3,
    STATE(40), 1,
      sym_comment,
    ACTIONS(280), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(282), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [1561] = 3,
    STATE(41), 1,
      sym_comment,
    ACTIONS(284), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(286), 12,
      anon_sym_nextflow,
      anon_sym_include,
      anon_sym_params,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_process,
      anon_sym_Channel,
      anon_sym_workflow,
  [1588] = 15,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym_comment,
    STATE(116), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1639] = 14,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    STATE(43), 1,
      sym_comment,
    STATE(146), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1687] = 14,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    STATE(44), 1,
      sym_comment,
    STATE(166), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1735] = 14,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    STATE(45), 1,
      sym_comment,
    STATE(153), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1783] = 14,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    STATE(46), 1,
      sym_comment,
    STATE(155), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1831] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      anon_sym_Channel,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(292), 1,
      aux_sym_number_token1,
    ACTIONS(294), 1,
      aux_sym_number_token2,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(302), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(47), 1,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 6,
      sym__expression,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1877] = 14,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    STATE(48), 1,
      sym_comment,
    STATE(117), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1925] = 14,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    STATE(49), 1,
      sym_comment,
    STATE(164), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1973] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(308), 1,
      aux_sym_number_token1,
    ACTIONS(310), 1,
      aux_sym_number_token2,
    ACTIONS(312), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      anon_sym_SQUOTE,
    ACTIONS(316), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(318), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(322), 1,
      anon_sym_Channel,
    STATE(50), 1,
      sym_comment,
    STATE(127), 1,
      sym__expression,
    ACTIONS(320), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(129), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [2021] = 14,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    STATE(51), 1,
      sym_comment,
    STATE(111), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [2069] = 14,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    STATE(52), 1,
      sym_comment,
    STATE(115), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [2117] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(230), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
    ACTIONS(228), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2146] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_comment,
    ACTIONS(222), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
    ACTIONS(220), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2175] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 1,
      sym_comment,
    ACTIONS(324), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
    ACTIONS(176), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2204] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_comment,
    ACTIONS(226), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
    ACTIONS(224), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2233] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(57), 1,
      sym_comment,
    ACTIONS(194), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
    ACTIONS(192), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2262] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 1,
      sym_comment,
    ACTIONS(180), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
    ACTIONS(178), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2291] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(59), 1,
      sym_comment,
    ACTIONS(184), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
    ACTIONS(182), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2320] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_comment,
    ACTIONS(210), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
    ACTIONS(208), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2349] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(61), 1,
      sym_comment,
    ACTIONS(234), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
    ACTIONS(232), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2378] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym_comment,
    ACTIONS(198), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
    ACTIONS(196), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2407] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
      sym_comment,
    ACTIONS(202), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
    ACTIONS(200), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2436] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(64), 1,
      sym_comment,
    ACTIONS(206), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
    ACTIONS(204), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2465] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 1,
      sym_comment,
    ACTIONS(214), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
    ACTIONS(212), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2494] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 1,
      sym_comment,
    ACTIONS(218), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
    ACTIONS(216), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2523] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 1,
      sym_input_declaration,
    STATE(67), 2,
      sym_comment,
      aux_sym_input_block_repeat1,
    ACTIONS(328), 5,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
    ACTIONS(326), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2553] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(67), 1,
      aux_sym_input_block_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(80), 1,
      sym_input_declaration,
    ACTIONS(333), 5,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
    ACTIONS(331), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2585] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      aux_sym_input_block_repeat1,
    STATE(69), 1,
      sym_comment,
    STATE(80), 1,
      sym_input_declaration,
    ACTIONS(333), 5,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
    ACTIONS(335), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2617] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_comment,
    ACTIONS(176), 6,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
      anon_sym_PIPE,
    ACTIONS(324), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
  [2647] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(339), 1,
      anon_sym_DOT,
    STATE(71), 1,
      sym_comment,
    ACTIONS(341), 5,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
    ACTIONS(343), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
  [2676] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 1,
      sym_output_declaration,
    STATE(72), 2,
      sym_comment,
      aux_sym_output_block_repeat1,
    ACTIONS(347), 4,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdout,
    ACTIONS(345), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2705] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(72), 1,
      aux_sym_output_block_repeat1,
    STATE(73), 1,
      sym_comment,
    STATE(89), 1,
      sym_output_declaration,
    ACTIONS(352), 4,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdout,
    ACTIONS(350), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2736] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      aux_sym_output_block_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(89), 1,
      sym_output_declaration,
    ACTIONS(352), 4,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdout,
    ACTIONS(354), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2767] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      anon_sym_DOT,
    STATE(75), 1,
      sym_comment,
    ACTIONS(358), 5,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
    ACTIONS(360), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
  [2796] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(362), 1,
      anon_sym_DOT,
    STATE(76), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
    ACTIONS(366), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
  [2825] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    STATE(77), 1,
      sym_comment,
    ACTIONS(368), 5,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
    ACTIONS(370), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
  [2854] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(78), 1,
      sym_comment,
    ACTIONS(374), 12,
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
  [2878] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_input_COLON,
    ACTIONS(380), 1,
      anon_sym_output_COLON,
    ACTIONS(384), 1,
      anon_sym_directive_COLON,
    STATE(79), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_process_definition_repeat1,
    ACTIONS(382), 3,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
    STATE(99), 4,
      sym_input_block,
      sym_output_block,
      sym_script_block,
      sym_directive_block,
  [2914] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 1,
      sym_comment,
    ACTIONS(386), 12,
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
  [2938] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
      sym_comment,
    ACTIONS(112), 5,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_emit_COLON,
    ACTIONS(388), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
  [2964] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(392), 1,
      anon_sym_input_COLON,
    ACTIONS(395), 1,
      anon_sym_output_COLON,
    ACTIONS(401), 1,
      anon_sym_directive_COLON,
    STATE(82), 2,
      sym_comment,
      aux_sym_process_definition_repeat1,
    ACTIONS(398), 3,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
    STATE(99), 4,
      sym_input_block,
      sym_output_block,
      sym_script_block,
      sym_directive_block,
  [2998] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
    ACTIONS(366), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
  [3024] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 1,
      sym_comment,
    ACTIONS(368), 5,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
    ACTIONS(370), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
  [3050] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(404), 5,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
    ACTIONS(406), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
  [3076] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_comment,
    ACTIONS(408), 12,
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
  [3100] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_comment,
    ACTIONS(410), 5,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_SEMI,
    ACTIONS(412), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
  [3126] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(378), 1,
      anon_sym_input_COLON,
    ACTIONS(380), 1,
      anon_sym_output_COLON,
    ACTIONS(384), 1,
      anon_sym_directive_COLON,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      aux_sym_process_definition_repeat1,
    STATE(88), 1,
      sym_comment,
    ACTIONS(382), 3,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
    STATE(99), 4,
      sym_input_block,
      sym_output_block,
      sym_script_block,
      sym_directive_block,
  [3162] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 1,
      sym_comment,
    ACTIONS(416), 11,
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
  [3185] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 1,
      sym_comment,
    ACTIONS(418), 11,
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
  [3208] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 1,
      sym_comment,
    ACTIONS(420), 4,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(422), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
  [3233] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 1,
      sym_comment,
    ACTIONS(424), 11,
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
  [3256] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(292), 1,
      aux_sym_number_token1,
    ACTIONS(294), 1,
      aux_sym_number_token2,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(302), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(93), 1,
      sym_comment,
    ACTIONS(426), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 3,
      sym_number,
      sym_string,
      sym_boolean,
  [3293] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(94), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_directive_block_repeat1,
    STATE(97), 1,
      sym_directive,
    ACTIONS(428), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [3321] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(97), 1,
      sym_directive,
    STATE(95), 2,
      sym_comment,
      aux_sym_directive_block_repeat1,
    ACTIONS(432), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [3347] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(430), 1,
      sym_identifier,
    STATE(95), 1,
      aux_sym_directive_block_repeat1,
    STATE(96), 1,
      sym_comment,
    STATE(97), 1,
      sym_directive,
    ACTIONS(437), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [3375] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(97), 1,
      sym_comment,
    ACTIONS(439), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [3397] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(445), 1,
      sym_identifier,
    STATE(98), 1,
      sym_comment,
    ACTIONS(443), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [3419] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(447), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [3438] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    ACTIONS(449), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [3457] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_comment,
    ACTIONS(451), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [3476] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(453), 1,
      anon_sym_from,
    ACTIONS(455), 1,
      anon_sym_value,
    ACTIONS(457), 1,
      anon_sym_of,
    STATE(102), 1,
      sym_comment,
    STATE(11), 3,
      sym_channel_from,
      sym_channel_value,
      sym_channel_of,
  [3500] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(459), 1,
      anon_sym_from,
    ACTIONS(461), 1,
      anon_sym_value,
    ACTIONS(463), 1,
      anon_sym_of,
    STATE(103), 1,
      sym_comment,
    STATE(58), 3,
      sym_channel_from,
      sym_channel_value,
      sym_channel_of,
  [3524] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(465), 1,
      anon_sym_from,
    ACTIONS(467), 1,
      anon_sym_value,
    ACTIONS(469), 1,
      anon_sym_of,
    STATE(104), 1,
      sym_comment,
    STATE(133), 3,
      sym_channel_from,
      sym_channel_value,
      sym_channel_of,
  [3548] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(471), 1,
      anon_sym_DQUOTE,
    ACTIONS(473), 1,
      anon_sym_SQUOTE,
    ACTIONS(475), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(477), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(101), 1,
      sym_script_content,
    STATE(105), 1,
      sym_comment,
  [3573] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(481), 1,
      sym_identifier,
    STATE(106), 2,
      sym_comment,
      aux_sym_workflow_input_repeat1,
    ACTIONS(479), 3,
      anon_sym_RBRACE,
      anon_sym_main_COLON,
      anon_sym_emit_COLON,
  [3592] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(486), 1,
      sym_identifier,
    STATE(106), 1,
      aux_sym_workflow_input_repeat1,
    STATE(107), 1,
      sym_comment,
    ACTIONS(484), 3,
      anon_sym_RBRACE,
      anon_sym_main_COLON,
      anon_sym_emit_COLON,
  [3613] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(106), 1,
      anon_sym_main_COLON,
    ACTIONS(108), 1,
      anon_sym_emit_COLON,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_comment,
    STATE(122), 1,
      sym_workflow_main,
    STATE(198), 1,
      sym_workflow_emit,
  [3638] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(302), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(33), 1,
      sym_string,
    STATE(109), 1,
      sym_comment,
  [3663] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(302), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(29), 1,
      sym_string,
    STATE(110), 1,
      sym_comment,
  [3688] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_comment,
    STATE(128), 1,
      aux_sym_channel_from_repeat1,
  [3710] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym_channel_from_repeat1,
  [3732] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym_channel_from_repeat1,
  [3754] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(496), 1,
      sym_identifier,
    STATE(114), 1,
      sym_comment,
    ACTIONS(479), 3,
      anon_sym_RBRACE,
      anon_sym_main_COLON,
      anon_sym_emit_COLON,
  [3772] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym_channel_from_repeat1,
  [3794] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      sym_comment,
    STATE(144), 1,
      aux_sym_channel_from_repeat1,
  [3816] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_comment,
    STATE(147), 1,
      aux_sym_channel_from_repeat1,
  [3838] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_channel_from_repeat1,
  [3860] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_include_repeat1,
  [3879] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(120), 2,
      sym_comment,
      aux_sym_include_repeat1,
  [3896] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    ACTIONS(517), 1,
      sym_identifier,
    STATE(121), 1,
      sym_comment,
    STATE(149), 1,
      aux_sym_workflow_emit_repeat1,
  [3915] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      anon_sym_emit_COLON,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      sym_comment,
    STATE(183), 1,
      sym_workflow_emit,
  [3934] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(123), 2,
      sym_comment,
      aux_sym_channel_from_repeat1,
  [3951] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym_include_repeat1,
    STATE(124), 1,
      sym_comment,
  [3970] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      anon_sym_emit_COLON,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      sym_comment,
    STATE(198), 1,
      sym_workflow_emit,
  [3989] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_channel_from_repeat1,
    STATE(126), 1,
      sym_comment,
  [4008] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(530), 1,
      anon_sym_SEMI,
    ACTIONS(532), 1,
      anon_sym_into,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    STATE(127), 1,
      sym_comment,
  [4027] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_channel_from_repeat1,
    STATE(128), 1,
      sym_comment,
  [4046] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(129), 1,
      sym_comment,
    ACTIONS(176), 3,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_PIPE,
  [4061] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(130), 1,
      sym_comment,
    ACTIONS(220), 3,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_PIPE,
  [4076] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(131), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_PIPE,
  [4091] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(132), 1,
      sym_comment,
    ACTIONS(228), 3,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_PIPE,
  [4106] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(133), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_PIPE,
  [4121] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(134), 1,
      sym_comment,
    ACTIONS(182), 3,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_PIPE,
  [4136] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(135), 1,
      sym_comment,
    ACTIONS(192), 3,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_PIPE,
  [4151] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(136), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_PIPE,
  [4166] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(137), 1,
      sym_comment,
    ACTIONS(196), 3,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_PIPE,
  [4181] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(138), 1,
      sym_comment,
    ACTIONS(200), 3,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_PIPE,
  [4196] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(139), 1,
      sym_comment,
    ACTIONS(204), 3,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_PIPE,
  [4211] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(140), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_PIPE,
  [4226] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(141), 1,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_PIPE,
  [4241] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(142), 1,
      sym_comment,
    ACTIONS(216), 3,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_PIPE,
  [4256] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_channel_from_repeat1,
    STATE(143), 1,
      sym_comment,
  [4275] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_channel_from_repeat1,
    STATE(144), 1,
      sym_comment,
  [4294] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(544), 1,
      anon_sym_as,
    STATE(145), 1,
      sym_comment,
    ACTIONS(542), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4311] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    STATE(146), 1,
      sym_comment,
    ACTIONS(524), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4328] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_channel_from_repeat1,
    STATE(147), 1,
      sym_comment,
  [4347] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_channel_from_repeat1,
    STATE(148), 1,
      sym_comment,
  [4366] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    ACTIONS(552), 1,
      sym_identifier,
    STATE(149), 2,
      sym_comment,
      aux_sym_workflow_emit_repeat1,
  [4383] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_channel_from_repeat1,
    STATE(150), 1,
      sym_comment,
  [4402] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(107), 1,
      aux_sym_workflow_input_repeat1,
    STATE(151), 1,
      sym_comment,
  [4418] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(559), 1,
      anon_sym_it,
    STATE(152), 1,
      sym_comment,
    STATE(185), 1,
      sym_map_body,
  [4434] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(561), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      sym_comment,
  [4450] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      sym_comment,
  [4466] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(565), 1,
      anon_sym_SEMI,
    STATE(155), 1,
      sym_comment,
  [4482] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(567), 1,
      sym_identifier,
    ACTIONS(569), 1,
      anon_sym_map,
    STATE(156), 1,
      sym_comment,
  [4498] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(571), 1,
      anon_sym_from,
    ACTIONS(573), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      sym_comment,
  [4514] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym_comment,
  [4530] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_map,
    STATE(159), 1,
      sym_comment,
  [4546] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(160), 1,
      sym_comment,
    ACTIONS(581), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4560] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(161), 1,
      sym_comment,
    ACTIONS(513), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4574] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(161), 1,
      sym_include_item,
    STATE(162), 1,
      sym_comment,
  [4590] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      sym_comment,
  [4606] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(587), 1,
      anon_sym_SEMI,
    STATE(164), 1,
      sym_comment,
  [4622] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(165), 1,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [4636] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym_comment,
  [4652] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(593), 1,
      sym_identifier,
    ACTIONS(595), 1,
      anon_sym_map,
    STATE(167), 1,
      sym_comment,
  [4668] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(517), 1,
      sym_identifier,
    STATE(121), 1,
      aux_sym_workflow_emit_repeat1,
    STATE(168), 1,
      sym_comment,
  [4684] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(559), 1,
      anon_sym_it,
    STATE(169), 1,
      sym_comment,
    STATE(258), 1,
      sym_map_body,
  [4700] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(119), 1,
      sym_include_item,
    STATE(170), 1,
      sym_comment,
  [4716] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(559), 1,
      anon_sym_it,
    STATE(171), 1,
      sym_comment,
    STATE(232), 1,
      sym_map_body,
  [4732] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(601), 1,
      aux_sym_string_token2,
    STATE(172), 1,
      sym_comment,
  [4745] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(603), 1,
      aux_sym_string_token1,
    STATE(173), 1,
      sym_comment,
  [4758] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(605), 1,
      anon_sym_out,
    STATE(174), 1,
      sym_comment,
  [4771] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(607), 1,
      aux_sym_string_token2,
    STATE(175), 1,
      sym_comment,
  [4784] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(609), 1,
      aux_sym_string_token1,
    STATE(176), 1,
      sym_comment,
  [4797] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(611), 1,
      anon_sym_DOT,
    STATE(177), 1,
      sym_comment,
  [4810] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(613), 1,
      aux_sym_string_token2,
    STATE(178), 1,
      sym_comment,
  [4823] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(615), 1,
      aux_sym_comment_token1,
    STATE(179), 1,
      sym_comment,
  [4836] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(617), 1,
      anon_sym_EQ,
    STATE(180), 1,
      sym_comment,
  [4849] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(619), 1,
      sym_identifier,
    STATE(181), 1,
      sym_comment,
  [4862] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      anon_sym_DOT,
    STATE(182), 1,
      sym_comment,
  [4875] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      sym_comment,
  [4888] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(625), 1,
      anon_sym_STAR,
    STATE(184), 1,
      sym_comment,
  [4901] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_comment,
  [4914] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(629), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      sym_comment,
  [4927] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_comment,
  [4940] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(633), 1,
      anon_sym_SEMI,
    STATE(188), 1,
      sym_comment,
  [4953] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(635), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_comment,
  [4966] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(637), 1,
      anon_sym_EQ,
    STATE(190), 1,
      sym_comment,
  [4979] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_comment,
  [4992] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    STATE(192), 1,
      sym_comment,
  [5005] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_comment,
  [5018] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(643), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym_comment,
  [5031] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(643), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(195), 1,
      sym_comment,
  [5044] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(643), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(196), 1,
      sym_comment,
  [5057] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(645), 1,
      ts_builtin_sym_end,
    STATE(197), 1,
      sym_comment,
  [5070] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_comment,
  [5083] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(190), 1,
      anon_sym_PIPE,
    STATE(199), 1,
      sym_comment,
  [5096] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(647), 1,
      anon_sym_DOT,
    STATE(200), 1,
      sym_comment,
  [5109] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(649), 1,
      anon_sym_EQ,
    STATE(201), 1,
      sym_comment,
  [5122] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(651), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym_comment,
  [5135] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(653), 1,
      anon_sym_SLASH,
    STATE(203), 1,
      sym_comment,
  [5148] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(655), 1,
      anon_sym_out,
    STATE(204), 1,
      sym_comment,
  [5161] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(657), 1,
      aux_sym_comment_token1,
    STATE(205), 1,
      sym_comment,
  [5174] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(659), 1,
      anon_sym_SLASH,
    STATE(206), 1,
      sym_comment,
  [5187] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      anon_sym_DQUOTE,
    STATE(207), 1,
      sym_comment,
  [5200] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      anon_sym_SQUOTE,
    STATE(208), 1,
      sym_comment,
  [5213] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(209), 1,
      sym_comment,
  [5226] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(210), 1,
      sym_comment,
  [5239] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(663), 1,
      anon_sym_from,
    STATE(211), 1,
      sym_comment,
  [5252] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      sym_comment,
  [5265] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(667), 1,
      anon_sym_SEMI,
    STATE(213), 1,
      sym_comment,
  [5278] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(669), 1,
      anon_sym_DOT,
    STATE(214), 1,
      sym_comment,
  [5291] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(671), 1,
      sym_identifier,
    STATE(215), 1,
      sym_comment,
  [5304] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(673), 1,
      sym_identifier,
    STATE(216), 1,
      sym_comment,
  [5317] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(217), 1,
      sym_comment,
  [5330] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(675), 1,
      aux_sym_comment_token2,
    STATE(218), 1,
      sym_comment,
  [5343] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(677), 1,
      aux_sym_comment_token1,
    STATE(219), 1,
      sym_comment,
  [5356] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(679), 1,
      sym_identifier,
    STATE(220), 1,
      sym_comment,
  [5369] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(681), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      sym_comment,
  [5382] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(681), 1,
      anon_sym_SQUOTE,
    STATE(222), 1,
      sym_comment,
  [5395] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(681), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(223), 1,
      sym_comment,
  [5408] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(681), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(224), 1,
      sym_comment,
  [5421] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(683), 1,
      anon_sym_DQUOTE,
    STATE(225), 1,
      sym_comment,
  [5434] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(685), 1,
      aux_sym_string_token1,
    STATE(226), 1,
      sym_comment,
  [5447] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(687), 1,
      aux_sym_string_token2,
    STATE(227), 1,
      sym_comment,
  [5460] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(689), 1,
      aux_sym_script_content_token1,
    STATE(228), 1,
      sym_comment,
  [5473] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(691), 1,
      aux_sym_script_content_token2,
    STATE(229), 1,
      sym_comment,
  [5486] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(683), 1,
      anon_sym_SQUOTE,
    STATE(230), 1,
      sym_comment,
  [5499] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(693), 1,
      anon_sym_LBRACE,
    STATE(231), 1,
      sym_comment,
  [5512] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_comment,
  [5525] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(697), 1,
      sym_identifier,
    STATE(233), 1,
      sym_comment,
  [5538] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(699), 1,
      sym_identifier,
    STATE(234), 1,
      sym_comment,
  [5551] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(701), 1,
      aux_sym_comment_token2,
    STATE(235), 1,
      sym_comment,
  [5564] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(703), 1,
      aux_sym_string_token1,
    STATE(236), 1,
      sym_comment,
  [5577] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(705), 1,
      anon_sym_out,
    STATE(237), 1,
      sym_comment,
  [5590] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(707), 1,
      aux_sym_string_token1,
    STATE(238), 1,
      sym_comment,
  [5603] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(709), 1,
      aux_sym_string_token2,
    STATE(239), 1,
      sym_comment,
  [5616] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(711), 1,
      anon_sym_DOT,
    STATE(240), 1,
      sym_comment,
  [5629] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(713), 1,
      anon_sym_LPAREN,
    STATE(241), 1,
      sym_comment,
  [5642] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(715), 1,
      anon_sym_LPAREN,
    STATE(242), 1,
      sym_comment,
  [5655] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(683), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(243), 1,
      sym_comment,
  [5668] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(717), 1,
      anon_sym_from,
    STATE(244), 1,
      sym_comment,
  [5681] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(719), 1,
      aux_sym_string_token1,
    STATE(245), 1,
      sym_comment,
  [5694] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(721), 1,
      aux_sym_string_token2,
    STATE(246), 1,
      sym_comment,
  [5707] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(723), 1,
      aux_sym_string_token1,
    STATE(247), 1,
      sym_comment,
  [5720] = 4,
    ACTIONS(597), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(599), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(725), 1,
      aux_sym_string_token2,
    STATE(248), 1,
      sym_comment,
  [5733] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(727), 1,
      anon_sym_DOT,
    STATE(249), 1,
      sym_comment,
  [5746] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(729), 1,
      anon_sym_LPAREN,
    STATE(250), 1,
      sym_comment,
  [5759] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    STATE(251), 1,
      sym_comment,
  [5772] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(683), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(252), 1,
      sym_comment,
  [5785] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(733), 1,
      anon_sym_LBRACE,
    STATE(253), 1,
      sym_comment,
  [5798] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(735), 1,
      anon_sym_LPAREN,
    STATE(254), 1,
      sym_comment,
  [5811] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(737), 1,
      anon_sym_LBRACE,
    STATE(255), 1,
      sym_comment,
  [5824] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(739), 1,
      anon_sym_LPAREN,
    STATE(256), 1,
      sym_comment,
  [5837] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(741), 1,
      anon_sym_LBRACE,
    STATE(257), 1,
      sym_comment,
  [5850] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    STATE(258), 1,
      sym_comment,
  [5863] = 1,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
  [5867] = 1,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 80,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 239,
  [SMALL_STATE(6)] = 300,
  [SMALL_STATE(7)] = 359,
  [SMALL_STATE(8)] = 419,
  [SMALL_STATE(9)] = 477,
  [SMALL_STATE(10)] = 534,
  [SMALL_STATE(11)] = 564,
  [SMALL_STATE(12)] = 592,
  [SMALL_STATE(13)] = 620,
  [SMALL_STATE(14)] = 650,
  [SMALL_STATE(15)] = 678,
  [SMALL_STATE(16)] = 732,
  [SMALL_STATE(17)] = 760,
  [SMALL_STATE(18)] = 788,
  [SMALL_STATE(19)] = 816,
  [SMALL_STATE(20)] = 844,
  [SMALL_STATE(21)] = 872,
  [SMALL_STATE(22)] = 900,
  [SMALL_STATE(23)] = 928,
  [SMALL_STATE(24)] = 956,
  [SMALL_STATE(25)] = 984,
  [SMALL_STATE(26)] = 1012,
  [SMALL_STATE(27)] = 1039,
  [SMALL_STATE(28)] = 1090,
  [SMALL_STATE(29)] = 1141,
  [SMALL_STATE(30)] = 1168,
  [SMALL_STATE(31)] = 1195,
  [SMALL_STATE(32)] = 1246,
  [SMALL_STATE(33)] = 1273,
  [SMALL_STATE(34)] = 1300,
  [SMALL_STATE(35)] = 1327,
  [SMALL_STATE(36)] = 1354,
  [SMALL_STATE(37)] = 1381,
  [SMALL_STATE(38)] = 1432,
  [SMALL_STATE(39)] = 1483,
  [SMALL_STATE(40)] = 1534,
  [SMALL_STATE(41)] = 1561,
  [SMALL_STATE(42)] = 1588,
  [SMALL_STATE(43)] = 1639,
  [SMALL_STATE(44)] = 1687,
  [SMALL_STATE(45)] = 1735,
  [SMALL_STATE(46)] = 1783,
  [SMALL_STATE(47)] = 1831,
  [SMALL_STATE(48)] = 1877,
  [SMALL_STATE(49)] = 1925,
  [SMALL_STATE(50)] = 1973,
  [SMALL_STATE(51)] = 2021,
  [SMALL_STATE(52)] = 2069,
  [SMALL_STATE(53)] = 2117,
  [SMALL_STATE(54)] = 2146,
  [SMALL_STATE(55)] = 2175,
  [SMALL_STATE(56)] = 2204,
  [SMALL_STATE(57)] = 2233,
  [SMALL_STATE(58)] = 2262,
  [SMALL_STATE(59)] = 2291,
  [SMALL_STATE(60)] = 2320,
  [SMALL_STATE(61)] = 2349,
  [SMALL_STATE(62)] = 2378,
  [SMALL_STATE(63)] = 2407,
  [SMALL_STATE(64)] = 2436,
  [SMALL_STATE(65)] = 2465,
  [SMALL_STATE(66)] = 2494,
  [SMALL_STATE(67)] = 2523,
  [SMALL_STATE(68)] = 2553,
  [SMALL_STATE(69)] = 2585,
  [SMALL_STATE(70)] = 2617,
  [SMALL_STATE(71)] = 2647,
  [SMALL_STATE(72)] = 2676,
  [SMALL_STATE(73)] = 2705,
  [SMALL_STATE(74)] = 2736,
  [SMALL_STATE(75)] = 2767,
  [SMALL_STATE(76)] = 2796,
  [SMALL_STATE(77)] = 2825,
  [SMALL_STATE(78)] = 2854,
  [SMALL_STATE(79)] = 2878,
  [SMALL_STATE(80)] = 2914,
  [SMALL_STATE(81)] = 2938,
  [SMALL_STATE(82)] = 2964,
  [SMALL_STATE(83)] = 2998,
  [SMALL_STATE(84)] = 3024,
  [SMALL_STATE(85)] = 3050,
  [SMALL_STATE(86)] = 3076,
  [SMALL_STATE(87)] = 3100,
  [SMALL_STATE(88)] = 3126,
  [SMALL_STATE(89)] = 3162,
  [SMALL_STATE(90)] = 3185,
  [SMALL_STATE(91)] = 3208,
  [SMALL_STATE(92)] = 3233,
  [SMALL_STATE(93)] = 3256,
  [SMALL_STATE(94)] = 3293,
  [SMALL_STATE(95)] = 3321,
  [SMALL_STATE(96)] = 3347,
  [SMALL_STATE(97)] = 3375,
  [SMALL_STATE(98)] = 3397,
  [SMALL_STATE(99)] = 3419,
  [SMALL_STATE(100)] = 3438,
  [SMALL_STATE(101)] = 3457,
  [SMALL_STATE(102)] = 3476,
  [SMALL_STATE(103)] = 3500,
  [SMALL_STATE(104)] = 3524,
  [SMALL_STATE(105)] = 3548,
  [SMALL_STATE(106)] = 3573,
  [SMALL_STATE(107)] = 3592,
  [SMALL_STATE(108)] = 3613,
  [SMALL_STATE(109)] = 3638,
  [SMALL_STATE(110)] = 3663,
  [SMALL_STATE(111)] = 3688,
  [SMALL_STATE(112)] = 3710,
  [SMALL_STATE(113)] = 3732,
  [SMALL_STATE(114)] = 3754,
  [SMALL_STATE(115)] = 3772,
  [SMALL_STATE(116)] = 3794,
  [SMALL_STATE(117)] = 3816,
  [SMALL_STATE(118)] = 3838,
  [SMALL_STATE(119)] = 3860,
  [SMALL_STATE(120)] = 3879,
  [SMALL_STATE(121)] = 3896,
  [SMALL_STATE(122)] = 3915,
  [SMALL_STATE(123)] = 3934,
  [SMALL_STATE(124)] = 3951,
  [SMALL_STATE(125)] = 3970,
  [SMALL_STATE(126)] = 3989,
  [SMALL_STATE(127)] = 4008,
  [SMALL_STATE(128)] = 4027,
  [SMALL_STATE(129)] = 4046,
  [SMALL_STATE(130)] = 4061,
  [SMALL_STATE(131)] = 4076,
  [SMALL_STATE(132)] = 4091,
  [SMALL_STATE(133)] = 4106,
  [SMALL_STATE(134)] = 4121,
  [SMALL_STATE(135)] = 4136,
  [SMALL_STATE(136)] = 4151,
  [SMALL_STATE(137)] = 4166,
  [SMALL_STATE(138)] = 4181,
  [SMALL_STATE(139)] = 4196,
  [SMALL_STATE(140)] = 4211,
  [SMALL_STATE(141)] = 4226,
  [SMALL_STATE(142)] = 4241,
  [SMALL_STATE(143)] = 4256,
  [SMALL_STATE(144)] = 4275,
  [SMALL_STATE(145)] = 4294,
  [SMALL_STATE(146)] = 4311,
  [SMALL_STATE(147)] = 4328,
  [SMALL_STATE(148)] = 4347,
  [SMALL_STATE(149)] = 4366,
  [SMALL_STATE(150)] = 4383,
  [SMALL_STATE(151)] = 4402,
  [SMALL_STATE(152)] = 4418,
  [SMALL_STATE(153)] = 4434,
  [SMALL_STATE(154)] = 4450,
  [SMALL_STATE(155)] = 4466,
  [SMALL_STATE(156)] = 4482,
  [SMALL_STATE(157)] = 4498,
  [SMALL_STATE(158)] = 4514,
  [SMALL_STATE(159)] = 4530,
  [SMALL_STATE(160)] = 4546,
  [SMALL_STATE(161)] = 4560,
  [SMALL_STATE(162)] = 4574,
  [SMALL_STATE(163)] = 4590,
  [SMALL_STATE(164)] = 4606,
  [SMALL_STATE(165)] = 4622,
  [SMALL_STATE(166)] = 4636,
  [SMALL_STATE(167)] = 4652,
  [SMALL_STATE(168)] = 4668,
  [SMALL_STATE(169)] = 4684,
  [SMALL_STATE(170)] = 4700,
  [SMALL_STATE(171)] = 4716,
  [SMALL_STATE(172)] = 4732,
  [SMALL_STATE(173)] = 4745,
  [SMALL_STATE(174)] = 4758,
  [SMALL_STATE(175)] = 4771,
  [SMALL_STATE(176)] = 4784,
  [SMALL_STATE(177)] = 4797,
  [SMALL_STATE(178)] = 4810,
  [SMALL_STATE(179)] = 4823,
  [SMALL_STATE(180)] = 4836,
  [SMALL_STATE(181)] = 4849,
  [SMALL_STATE(182)] = 4862,
  [SMALL_STATE(183)] = 4875,
  [SMALL_STATE(184)] = 4888,
  [SMALL_STATE(185)] = 4901,
  [SMALL_STATE(186)] = 4914,
  [SMALL_STATE(187)] = 4927,
  [SMALL_STATE(188)] = 4940,
  [SMALL_STATE(189)] = 4953,
  [SMALL_STATE(190)] = 4966,
  [SMALL_STATE(191)] = 4979,
  [SMALL_STATE(192)] = 4992,
  [SMALL_STATE(193)] = 5005,
  [SMALL_STATE(194)] = 5018,
  [SMALL_STATE(195)] = 5031,
  [SMALL_STATE(196)] = 5044,
  [SMALL_STATE(197)] = 5057,
  [SMALL_STATE(198)] = 5070,
  [SMALL_STATE(199)] = 5083,
  [SMALL_STATE(200)] = 5096,
  [SMALL_STATE(201)] = 5109,
  [SMALL_STATE(202)] = 5122,
  [SMALL_STATE(203)] = 5135,
  [SMALL_STATE(204)] = 5148,
  [SMALL_STATE(205)] = 5161,
  [SMALL_STATE(206)] = 5174,
  [SMALL_STATE(207)] = 5187,
  [SMALL_STATE(208)] = 5200,
  [SMALL_STATE(209)] = 5213,
  [SMALL_STATE(210)] = 5226,
  [SMALL_STATE(211)] = 5239,
  [SMALL_STATE(212)] = 5252,
  [SMALL_STATE(213)] = 5265,
  [SMALL_STATE(214)] = 5278,
  [SMALL_STATE(215)] = 5291,
  [SMALL_STATE(216)] = 5304,
  [SMALL_STATE(217)] = 5317,
  [SMALL_STATE(218)] = 5330,
  [SMALL_STATE(219)] = 5343,
  [SMALL_STATE(220)] = 5356,
  [SMALL_STATE(221)] = 5369,
  [SMALL_STATE(222)] = 5382,
  [SMALL_STATE(223)] = 5395,
  [SMALL_STATE(224)] = 5408,
  [SMALL_STATE(225)] = 5421,
  [SMALL_STATE(226)] = 5434,
  [SMALL_STATE(227)] = 5447,
  [SMALL_STATE(228)] = 5460,
  [SMALL_STATE(229)] = 5473,
  [SMALL_STATE(230)] = 5486,
  [SMALL_STATE(231)] = 5499,
  [SMALL_STATE(232)] = 5512,
  [SMALL_STATE(233)] = 5525,
  [SMALL_STATE(234)] = 5538,
  [SMALL_STATE(235)] = 5551,
  [SMALL_STATE(236)] = 5564,
  [SMALL_STATE(237)] = 5577,
  [SMALL_STATE(238)] = 5590,
  [SMALL_STATE(239)] = 5603,
  [SMALL_STATE(240)] = 5616,
  [SMALL_STATE(241)] = 5629,
  [SMALL_STATE(242)] = 5642,
  [SMALL_STATE(243)] = 5655,
  [SMALL_STATE(244)] = 5668,
  [SMALL_STATE(245)] = 5681,
  [SMALL_STATE(246)] = 5694,
  [SMALL_STATE(247)] = 5707,
  [SMALL_STATE(248)] = 5720,
  [SMALL_STATE(249)] = 5733,
  [SMALL_STATE(250)] = 5746,
  [SMALL_STATE(251)] = 5759,
  [SMALL_STATE(252)] = 5772,
  [SMALL_STATE(253)] = 5785,
  [SMALL_STATE(254)] = 5798,
  [SMALL_STATE(255)] = 5811,
  [SMALL_STATE(256)] = 5824,
  [SMALL_STATE(257)] = 5837,
  [SMALL_STATE(258)] = 5850,
  [SMALL_STATE(259)] = 5863,
  [SMALL_STATE(260)] = 5867,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(205),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_main, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workflow_main_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_main_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_main_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_main_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_main_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_main_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_main_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_main_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_main_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_main_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_body, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(240),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_expression, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_expression, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_expression, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_expression, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 5, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_value, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_value, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_from, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_from, 4, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_value, 4, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_value, 4, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_of, 4, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_of, 4, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_expression, 6, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_expression, 6, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_from, 5, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_from, 5, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_of, 5, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_of, 5, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_of, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_of, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_definition, 5, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_process_definition, 5, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 6, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 6, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_definition, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_workflow_definition, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_definition, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_workflow_definition, 3, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 7, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 7, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_flag, 7, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_flag, 7, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_definition, 4, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_process_definition, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 2, 0, 0),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 2, 0, 0), SHIFT_REPEAT(215),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_block, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_block, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_invocation, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_process_invocation, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_block_repeat1, 2, 0, 0),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_block_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_block, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_block, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_invocation, 4, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_process_invocation, 4, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_invocation, 5, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_process_invocation, 5, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workflow_statement, 1, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__workflow_statement, 1, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_declaration, 3, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 1, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_workflow_main_repeat1, 2, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_invocation, 6, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_process_invocation, 6, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_declaration, 5, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_invocation, 7, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_process_invocation, 7, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_block_repeat1, 1, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_declaration, 3, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workflow_body_repeat1, 1, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_workflow_body_repeat1, 1, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_declaration, 5, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 1, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_block_repeat1, 2, 0, 0),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_block_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 2, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_block_repeat1, 1, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_block_repeat1, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 1, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_content, 3, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 2, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workflow_input_repeat1, 2, 0, 0),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_input_repeat1, 2, 0, 0), SHIFT_REPEAT(186),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_input, 2, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_workflow_input_repeat1, 2, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_repeat1, 2, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_emit, 2, 0, 0),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_body, 2, 0, 0),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_channel_from_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_channel_from_repeat1, 2, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 1, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workflow_emit_repeat1, 2, 0, 0),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_emit_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 3, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workflow_emit_repeat1, 4, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_body, 3, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_body, 3, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [645] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
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
