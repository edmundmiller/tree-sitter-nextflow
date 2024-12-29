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
#define STATE_COUNT 222
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
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
  sym_process_output = 92,
  aux_sym_source_file_repeat1 = 93,
  aux_sym_include_repeat1 = 94,
  aux_sym_process_definition_repeat1 = 95,
  aux_sym_input_block_repeat1 = 96,
  aux_sym_output_block_repeat1 = 97,
  aux_sym_directive_block_repeat1 = 98,
  aux_sym_channel_from_repeat1 = 99,
  aux_sym_workflow_body_repeat1 = 100,
  aux_sym_workflow_input_repeat1 = 101,
  aux_sym_workflow_emit_repeat1 = 102,
  aux_sym_process_invocation_repeat1 = 103,
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
  [sym_process_output] = "process_output",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_include_repeat1] = "include_repeat1",
  [aux_sym_process_definition_repeat1] = "process_definition_repeat1",
  [aux_sym_input_block_repeat1] = "input_block_repeat1",
  [aux_sym_output_block_repeat1] = "output_block_repeat1",
  [aux_sym_directive_block_repeat1] = "directive_block_repeat1",
  [aux_sym_channel_from_repeat1] = "channel_from_repeat1",
  [aux_sym_workflow_body_repeat1] = "workflow_body_repeat1",
  [aux_sym_workflow_input_repeat1] = "workflow_input_repeat1",
  [aux_sym_workflow_emit_repeat1] = "workflow_emit_repeat1",
  [aux_sym_process_invocation_repeat1] = "process_invocation_repeat1",
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
  [sym_process_output] = sym_process_output,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_include_repeat1] = aux_sym_include_repeat1,
  [aux_sym_process_definition_repeat1] = aux_sym_process_definition_repeat1,
  [aux_sym_input_block_repeat1] = aux_sym_input_block_repeat1,
  [aux_sym_output_block_repeat1] = aux_sym_output_block_repeat1,
  [aux_sym_directive_block_repeat1] = aux_sym_directive_block_repeat1,
  [aux_sym_channel_from_repeat1] = aux_sym_channel_from_repeat1,
  [aux_sym_workflow_body_repeat1] = aux_sym_workflow_body_repeat1,
  [aux_sym_workflow_input_repeat1] = aux_sym_workflow_input_repeat1,
  [aux_sym_workflow_emit_repeat1] = aux_sym_workflow_emit_repeat1,
  [aux_sym_process_invocation_repeat1] = aux_sym_process_invocation_repeat1,
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
  [sym_process_output] = {
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
  [aux_sym_workflow_emit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_process_invocation_repeat1] = {
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
  [31] = 27,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 30,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 45,
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
  [75] = 19,
  [76] = 25,
  [77] = 77,
  [78] = 24,
  [79] = 23,
  [80] = 80,
  [81] = 10,
  [82] = 11,
  [83] = 14,
  [84] = 15,
  [85] = 17,
  [86] = 18,
  [87] = 20,
  [88] = 21,
  [89] = 22,
  [90] = 77,
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
  [101] = 97,
  [102] = 102,
  [103] = 103,
  [104] = 100,
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
  [122] = 108,
  [123] = 105,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 125,
  [131] = 126,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 142,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 145,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
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
  [193] = 184,
  [194] = 171,
  [195] = 172,
  [196] = 173,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 197,
  [203] = 203,
  [204] = 148,
  [205] = 205,
  [206] = 206,
  [207] = 146,
  [208] = 150,
  [209] = 155,
  [210] = 156,
  [211] = 211,
  [212] = 177,
  [213] = 167,
  [214] = 175,
  [215] = 215,
  [216] = 192,
  [217] = 166,
  [218] = 201,
  [219] = 219,
  [220] = 37,
  [221] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(135);
      ADVANCE_MAP(
        '"', 265,
        '#', 1,
        '\'', 270,
        '(', 304,
        ')', 305,
        '*', 312,
        ',', 163,
        '.', 158,
        '/', 154,
        ';', 288,
        '=', 159,
        'C', 58,
        'a', 102,
        'd', 59,
        'e', 78,
        'f', 24,
        'i', 81,
        'm', 25,
        'n', 40,
        'o', 53,
        'p', 26,
        's', 33,
        't', 27,
        'v', 29,
        'w', 92,
        '{', 162,
        '|', 308,
        '}', 164,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(155);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 265,
        '\'', 270,
        ')', 305,
        '/', 8,
        'C', 204,
        'e', 221,
        'f', 178,
        'm', 184,
        't', 181,
        '}', 164,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(274);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 264,
        '\'', 269,
        '/', 8,
        'd', 59,
        'e', 80,
        'i', 83,
        'o', 123,
        'p', 31,
        's', 33,
        't', 118,
        'v', 29,
        '}', 164,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(132);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(275);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '/') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(153);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(149);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '/', 8,
        'd', 206,
        'e', 220,
        'i', 226,
        'm', 184,
        'o', 251,
        's', 187,
        '}', 164,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'v') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(183);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(317);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(294);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(316);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(315);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(282);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(293);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(289);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(292);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(301);
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
      if (lookahead == 'r') ADVANCE(121);
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
      if (lookahead == 'a') ADVANCE(112);
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
      if (lookahead == 'p') ADVANCE(120);
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(113);
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
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(306);
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
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(307);
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(307);
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(284);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(309);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 65:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(119);
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
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(287);
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
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(125);
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
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(117);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 126:
      if (lookahead == 'v') ADVANCE(286);
      END_STATE();
    case 127:
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 128:
      if (lookahead == 'w') ADVANCE(156);
      END_STATE();
    case 129:
      if (lookahead == 'w') ADVANCE(313);
      END_STATE();
    case 130:
      if (lookahead == 'x') ADVANCE(109);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 132:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(297);
      END_STATE();
    case 133:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(300);
      END_STATE();
    case 134:
      if (eof) ADVANCE(135);
      ADVANCE_MAP(
        '"', 265,
        '#', 1,
        '\'', 270,
        '/', 8,
        'C', 204,
        'd', 206,
        'e', 259,
        'f', 178,
        'i', 222,
        'n', 195,
        'o', 251,
        'p', 182,
        's', 187,
        't', 237,
        'w', 230,
        '|', 308,
        '}', 164,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(268);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(273);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '/') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(268);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(273);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(10);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_nextflow);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_nextflow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_include);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_params);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_params);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == 'h') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(209);
      if (lookahead == 'x') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == '/') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(266);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(273);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(271);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_process);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_process);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_input_COLON);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_path);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_tuple);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_stdin);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_output_COLON);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_stdout);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_into);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_script_COLON);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_shell_COLON);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_exec_COLON);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_script_content_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_script_content_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '/') ADVANCE(295);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_script_content_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_script_content_token2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_script_content_token2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '/') ADVANCE(298);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_script_content_token2);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_directive_COLON);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_Channel);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_Channel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_it);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_workflow);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_workflow);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_take_COLON);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_main_COLON);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_emit_COLON);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 134},
  [2] = {.lex_state = 134},
  [3] = {.lex_state = 134},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 134},
  [11] = {.lex_state = 134},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 134},
  [14] = {.lex_state = 134},
  [15] = {.lex_state = 134},
  [16] = {.lex_state = 134},
  [17] = {.lex_state = 134},
  [18] = {.lex_state = 134},
  [19] = {.lex_state = 134},
  [20] = {.lex_state = 134},
  [21] = {.lex_state = 134},
  [22] = {.lex_state = 134},
  [23] = {.lex_state = 134},
  [24] = {.lex_state = 134},
  [25] = {.lex_state = 134},
  [26] = {.lex_state = 134},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 134},
  [29] = {.lex_state = 134},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 134},
  [33] = {.lex_state = 134},
  [34] = {.lex_state = 134},
  [35] = {.lex_state = 134},
  [36] = {.lex_state = 134},
  [37] = {.lex_state = 134},
  [38] = {.lex_state = 134},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 134},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 134},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 134},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 134},
  [73] = {.lex_state = 134},
  [74] = {.lex_state = 134},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 13},
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
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 272},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 267},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 272},
  [156] = {.lex_state = 267},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 272},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 144},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 267},
  [181] = {.lex_state = 272},
  [182] = {.lex_state = 296},
  [183] = {.lex_state = 299},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 144},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 12},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 267},
  [209] = {.lex_state = 272},
  [210] = {.lex_state = 267},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 144},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {(TSStateId)(-1)},
  [221] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(219),
    [sym_comment] = STATE(1),
    [sym_shebang] = STATE(2),
    [sym_feature_flag] = STATE(2),
    [sym_include] = STATE(2),
    [sym_parameter] = STATE(2),
    [sym__expression] = STATE(188),
    [sym_number] = STATE(80),
    [sym_string] = STATE(80),
    [sym_boolean] = STATE(80),
    [sym_process_definition] = STATE(2),
    [sym_channel_expression] = STATE(16),
    [sym_pipe_expression] = STATE(16),
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
    STATE(188), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_channel_expression,
      sym_pipe_expression,
    STATE(80), 3,
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
    STATE(188), 1,
      sym__expression,
    ACTIONS(86), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 2,
      sym_channel_expression,
      sym_pipe_expression,
    STATE(80), 3,
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
    STATE(96), 1,
      sym_workflow_input,
    STATE(117), 1,
      sym_workflow_main,
    STATE(141), 1,
      sym__expression,
    STATE(187), 1,
      sym_workflow_body,
    STATE(190), 1,
      sym_workflow_emit,
    STATE(191), 1,
      sym__workflow_statement,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(199), 2,
      sym_process_invocation,
      sym_process_output,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [240] = 18,
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
      aux_sym_workflow_body_repeat1,
    STATE(141), 1,
      sym__expression,
    STATE(191), 1,
      sym__workflow_statement,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(110), 2,
      anon_sym_RBRACE,
      anon_sym_emit_COLON,
    STATE(199), 2,
      sym_process_invocation,
      sym_process_output,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [302] = 17,
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
    STATE(141), 1,
      sym__expression,
    STATE(191), 1,
      sym__workflow_statement,
    ACTIONS(112), 2,
      anon_sym_RBRACE,
      anon_sym_emit_COLON,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_comment,
      aux_sym_workflow_body_repeat1,
    STATE(199), 2,
      sym_process_invocation,
      sym_process_output,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [362] = 18,
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
    STATE(6), 1,
      aux_sym_workflow_body_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(141), 1,
      sym__expression,
    STATE(191), 1,
      sym__workflow_statement,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(199), 2,
      sym_process_invocation,
      sym_process_output,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [423] = 17,
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
      aux_sym_workflow_body_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(141), 1,
      sym__expression,
    STATE(191), 1,
      sym__workflow_statement,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(199), 2,
      sym_process_invocation,
      sym_process_output,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [481] = 16,
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
    STATE(9), 1,
      sym_comment,
    STATE(141), 1,
      sym__expression,
    STATE(152), 1,
      sym__workflow_statement,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(199), 2,
      sym_process_invocation,
      sym_process_output,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [536] = 3,
    STATE(10), 1,
      sym_comment,
    ACTIONS(143), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(145), 12,
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
    ACTIONS(147), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(149), 12,
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
  [592] = 16,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      sym_comment,
    STATE(103), 1,
      sym__expression,
    STATE(111), 1,
      sym_process_output,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [646] = 4,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    STATE(13), 1,
      sym_comment,
    ACTIONS(155), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(157), 12,
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
  [676] = 3,
    STATE(14), 1,
      sym_comment,
    ACTIONS(161), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(163), 12,
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
  [704] = 3,
    STATE(15), 1,
      sym_comment,
    ACTIONS(165), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(167), 12,
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
  [732] = 4,
    ACTIONS(173), 1,
      anon_sym_PIPE,
    STATE(16), 1,
      sym_comment,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(171), 12,
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
  [762] = 3,
    STATE(17), 1,
      sym_comment,
    ACTIONS(175), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(177), 12,
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
  [790] = 3,
    STATE(18), 1,
      sym_comment,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(181), 12,
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
  [818] = 3,
    STATE(19), 1,
      sym_comment,
    ACTIONS(183), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(185), 12,
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
  [846] = 3,
    STATE(20), 1,
      sym_comment,
    ACTIONS(187), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(189), 12,
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
  [874] = 3,
    STATE(21), 1,
      sym_comment,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(193), 12,
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
  [902] = 3,
    STATE(22), 1,
      sym_comment,
    ACTIONS(195), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(197), 12,
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
  [930] = 3,
    STATE(23), 1,
      sym_comment,
    ACTIONS(199), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(201), 12,
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
  [958] = 3,
    STATE(24), 1,
      sym_comment,
    ACTIONS(203), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(205), 12,
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
  [986] = 3,
    STATE(25), 1,
      sym_comment,
    ACTIONS(207), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_PIPE,
    ACTIONS(209), 12,
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
  [1014] = 3,
    STATE(26), 1,
      sym_comment,
    ACTIONS(211), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(213), 12,
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
  [1041] = 15,
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
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_comment,
    STATE(97), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1092] = 3,
    STATE(28), 1,
      sym_comment,
    ACTIONS(217), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(219), 12,
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
  [1119] = 3,
    STATE(29), 1,
      sym_comment,
    ACTIONS(221), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(223), 12,
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
  [1146] = 15,
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
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      sym_comment,
    STATE(142), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1197] = 15,
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
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_comment,
    STATE(101), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1248] = 3,
    STATE(32), 1,
      sym_comment,
    ACTIONS(229), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(231), 12,
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
  [1275] = 3,
    STATE(33), 1,
      sym_comment,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(235), 12,
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
  [1302] = 3,
    STATE(34), 1,
      sym_comment,
    ACTIONS(237), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(239), 12,
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
  [1329] = 3,
    STATE(35), 1,
      sym_comment,
    ACTIONS(241), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(243), 12,
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
  [1356] = 3,
    STATE(36), 1,
      sym_comment,
    ACTIONS(245), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(247), 12,
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
  [1383] = 3,
    STATE(37), 1,
      sym_comment,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(251), 12,
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
  [1410] = 3,
    STATE(38), 1,
      sym_comment,
    ACTIONS(253), 7,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_POUND_BANG,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(255), 12,
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
  [1437] = 15,
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
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      sym_comment,
    STATE(143), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1488] = 15,
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
    ACTIONS(102), 1,
      anon_sym_Channel,
    ACTIONS(151), 1,
      sym_identifier,
    STATE(40), 1,
      sym_comment,
    STATE(119), 1,
      sym__expression,
    STATE(134), 1,
      sym_process_output,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1539] = 14,
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
    STATE(41), 1,
      sym_comment,
    STATE(112), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1587] = 14,
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
    STATE(42), 1,
      sym_comment,
    STATE(138), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1635] = 14,
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
    STATE(137), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1683] = 14,
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
    STATE(106), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1731] = 14,
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
    STATE(100), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1779] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      anon_sym_Channel,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(261), 1,
      aux_sym_number_token1,
    ACTIONS(263), 1,
      aux_sym_number_token2,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(46), 1,
      sym_comment,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 6,
      sym__expression,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1825] = 14,
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
    STATE(47), 1,
      sym_comment,
    STATE(136), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1873] = 14,
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
    STATE(129), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1921] = 14,
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
    STATE(104), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(80), 5,
      sym_number,
      sym_string,
      sym_boolean,
      sym_channel_expression,
      sym_pipe_expression,
  [1969] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym_input_declaration,
    STATE(50), 2,
      sym_comment,
      aux_sym_input_block_repeat1,
    ACTIONS(277), 5,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
    ACTIONS(275), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [1999] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      aux_sym_input_block_repeat1,
    STATE(51), 1,
      sym_comment,
    STATE(62), 1,
      sym_input_declaration,
    ACTIONS(282), 5,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
    ACTIONS(280), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2031] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      aux_sym_input_block_repeat1,
    STATE(52), 1,
      sym_comment,
    STATE(62), 1,
      sym_input_declaration,
    ACTIONS(282), 5,
      anon_sym_val,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdin,
    ACTIONS(284), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2063] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_output_block_repeat1,
    STATE(66), 1,
      sym_output_declaration,
    ACTIONS(288), 4,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdout,
    ACTIONS(286), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2094] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 1,
      sym_output_declaration,
    STATE(54), 2,
      sym_comment,
      aux_sym_output_block_repeat1,
    ACTIONS(292), 4,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdout,
    ACTIONS(290), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2123] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      aux_sym_output_block_repeat1,
    STATE(55), 1,
      sym_comment,
    STATE(66), 1,
      sym_output_declaration,
    ACTIONS(288), 4,
      anon_sym_path,
      anon_sym_tuple,
      anon_sym_env,
      anon_sym_stdout,
    ACTIONS(295), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2154] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_comment,
    ACTIONS(297), 12,
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
  [2178] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    ACTIONS(301), 1,
      anon_sym_input_COLON,
    ACTIONS(303), 1,
      anon_sym_output_COLON,
    ACTIONS(307), 1,
      anon_sym_directive_COLON,
    STATE(57), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_process_definition_repeat1,
    ACTIONS(305), 3,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
    STATE(74), 4,
      sym_input_block,
      sym_output_block,
      sym_script_block,
      sym_directive_block,
  [2214] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 1,
      sym_comment,
    ACTIONS(309), 12,
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
  [2238] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(313), 1,
      anon_sym_input_COLON,
    ACTIONS(316), 1,
      anon_sym_output_COLON,
    ACTIONS(322), 1,
      anon_sym_directive_COLON,
    STATE(59), 2,
      sym_comment,
      aux_sym_process_definition_repeat1,
    ACTIONS(319), 3,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
    STATE(74), 4,
      sym_input_block,
      sym_output_block,
      sym_script_block,
      sym_directive_block,
  [2272] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_comment,
    ACTIONS(112), 5,
      anon_sym_RBRACE,
      aux_sym_number_token2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      anon_sym_emit_COLON,
    ACTIONS(325), 7,
      sym_identifier,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_Channel,
  [2298] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(301), 1,
      anon_sym_input_COLON,
    ACTIONS(303), 1,
      anon_sym_output_COLON,
    ACTIONS(307), 1,
      anon_sym_directive_COLON,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_process_definition_repeat1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
    STATE(74), 4,
      sym_input_block,
      sym_output_block,
      sym_script_block,
      sym_directive_block,
  [2334] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(62), 1,
      sym_comment,
    ACTIONS(329), 12,
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
  [2358] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(261), 1,
      aux_sym_number_token1,
    ACTIONS(263), 1,
      aux_sym_number_token2,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(63), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 3,
      sym_number,
      sym_string,
      sym_boolean,
  [2395] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(64), 1,
      sym_comment,
    ACTIONS(333), 11,
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
  [2418] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 1,
      sym_comment,
    ACTIONS(335), 11,
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
  [2441] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 1,
      sym_comment,
    ACTIONS(337), 11,
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
  [2464] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 1,
      sym_identifier,
    STATE(71), 1,
      sym_directive,
    STATE(67), 2,
      sym_comment,
      aux_sym_directive_block_repeat1,
    ACTIONS(339), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2490] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(68), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_directive_block_repeat1,
    STATE(71), 1,
      sym_directive,
    ACTIONS(344), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2518] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(67), 1,
      aux_sym_directive_block_repeat1,
    STATE(69), 1,
      sym_comment,
    STATE(71), 1,
      sym_directive,
    ACTIONS(348), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2546] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(352), 1,
      sym_identifier,
    STATE(70), 1,
      sym_comment,
    ACTIONS(350), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2568] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      sym_identifier,
    STATE(71), 1,
      sym_comment,
    ACTIONS(354), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2590] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(72), 1,
      sym_comment,
    ACTIONS(358), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2609] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      sym_comment,
    ACTIONS(360), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2628] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_comment,
    ACTIONS(362), 7,
      anon_sym_RBRACE,
      anon_sym_input_COLON,
      anon_sym_output_COLON,
      anon_sym_script_COLON,
      anon_sym_shell_COLON,
      anon_sym_exec_COLON,
      anon_sym_directive_COLON,
  [2647] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 1,
      sym_comment,
    ACTIONS(183), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2665] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 1,
      sym_comment,
    ACTIONS(207), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2683] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(364), 1,
      anon_sym_from,
    ACTIONS(366), 1,
      anon_sym_value,
    ACTIONS(368), 1,
      anon_sym_of,
    STATE(77), 1,
      sym_comment,
    STATE(10), 3,
      sym_channel_from,
      sym_channel_value,
      sym_channel_of,
  [2707] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(78), 1,
      sym_comment,
    ACTIONS(203), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2725] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(79), 1,
      sym_comment,
    ACTIONS(199), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2743] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 1,
      sym_comment,
    ACTIONS(173), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2761] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
      sym_comment,
    ACTIONS(143), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2779] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(82), 1,
      sym_comment,
    ACTIONS(147), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2797] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_comment,
    ACTIONS(161), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2815] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 1,
      sym_comment,
    ACTIONS(165), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2833] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(175), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2851] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_comment,
    ACTIONS(179), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2869] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_comment,
    ACTIONS(187), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2887] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 1,
      sym_comment,
    ACTIONS(191), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2905] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 1,
      sym_comment,
    ACTIONS(195), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_into,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [2923] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(370), 1,
      anon_sym_from,
    ACTIONS(372), 1,
      anon_sym_value,
    ACTIONS(374), 1,
      anon_sym_of,
    STATE(90), 1,
      sym_comment,
    STATE(81), 3,
      sym_channel_from,
      sym_channel_value,
      sym_channel_of,
  [2947] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(26), 1,
      sym_string,
    STATE(91), 1,
      sym_comment,
  [2972] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(33), 1,
      sym_string,
    STATE(92), 1,
      sym_comment,
  [2997] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    ACTIONS(378), 1,
      anon_sym_SQUOTE,
    ACTIONS(380), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(382), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(73), 1,
      sym_script_content,
    STATE(93), 1,
      sym_comment,
  [3022] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(386), 1,
      sym_identifier,
    STATE(94), 2,
      sym_comment,
      aux_sym_workflow_input_repeat1,
    ACTIONS(384), 3,
      anon_sym_RBRACE,
      anon_sym_main_COLON,
      anon_sym_emit_COLON,
  [3041] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(94), 1,
      aux_sym_workflow_input_repeat1,
    STATE(95), 1,
      sym_comment,
    ACTIONS(389), 3,
      anon_sym_RBRACE,
      anon_sym_main_COLON,
      anon_sym_emit_COLON,
  [3062] = 8,
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
    STATE(96), 1,
      sym_comment,
    STATE(109), 1,
      sym_workflow_main,
    STATE(157), 1,
      sym_workflow_emit,
  [3087] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    STATE(97), 1,
      sym_comment,
    STATE(123), 1,
      aux_sym_channel_from_repeat1,
  [3109] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(98), 1,
      sym_comment,
    ACTIONS(384), 3,
      anon_sym_RBRACE,
      anon_sym_main_COLON,
      anon_sym_emit_COLON,
  [3127] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      anon_sym_DOT,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [3147] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym_channel_from_repeat1,
  [3169] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      sym_comment,
    STATE(105), 1,
      aux_sym_channel_from_repeat1,
  [3191] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      anon_sym_DOT,
    STATE(102), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3209] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      sym_comment,
    STATE(121), 1,
      aux_sym_process_invocation_repeat1,
  [3231] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_comment,
    STATE(122), 1,
      aux_sym_channel_from_repeat1,
  [3253] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_channel_from_repeat1,
  [3272] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    STATE(106), 1,
      sym_comment,
    ACTIONS(417), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3289] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(107), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_workflow_emit_repeat1,
  [3308] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_channel_from_repeat1,
  [3327] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      anon_sym_emit_COLON,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      sym_comment,
    STATE(168), 1,
      sym_workflow_emit,
  [3346] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    STATE(110), 2,
      sym_comment,
      aux_sym_channel_from_repeat1,
  [3363] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      sym_comment,
    STATE(121), 1,
      aux_sym_process_invocation_repeat1,
  [3382] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(430), 1,
      anon_sym_SEMI,
    ACTIONS(432), 1,
      anon_sym_into,
    STATE(112), 1,
      sym_comment,
  [3401] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    ACTIONS(436), 1,
      sym_identifier,
    STATE(113), 2,
      sym_comment,
      aux_sym_workflow_emit_repeat1,
  [3418] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(114), 2,
      sym_comment,
      aux_sym_include_repeat1,
  [3435] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(115), 1,
      sym_comment,
    ACTIONS(444), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [3450] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(448), 1,
      anon_sym_as,
    STATE(116), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3467] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      anon_sym_emit_COLON,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_comment,
    STATE(157), 1,
      sym_workflow_emit,
  [3486] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_include_repeat1,
  [3505] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    STATE(119), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3522] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    STATE(120), 2,
      sym_comment,
      aux_sym_process_invocation_repeat1,
  [3539] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_process_invocation_repeat1,
    STATE(121), 1,
      sym_comment,
  [3558] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_channel_from_repeat1,
    STATE(122), 1,
      sym_comment,
  [3577] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_channel_from_repeat1,
    STATE(123), 1,
      sym_comment,
  [3596] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      aux_sym_include_repeat1,
    STATE(124), 1,
      sym_comment,
  [3615] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(467), 1,
      sym_identifier,
    ACTIONS(469), 1,
      anon_sym_map,
    STATE(125), 1,
      sym_comment,
  [3631] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(471), 1,
      anon_sym_it,
    STATE(126), 1,
      sym_comment,
    STATE(204), 1,
      sym_map_body,
  [3647] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      sym_identifier,
    STATE(118), 1,
      sym_include_item,
    STATE(127), 1,
      sym_comment,
  [3663] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(475), 1,
      anon_sym_from,
    ACTIONS(477), 1,
      anon_sym_SEMI,
    STATE(128), 1,
      sym_comment,
  [3679] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(479), 1,
      anon_sym_SEMI,
    STATE(129), 1,
      sym_comment,
  [3695] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(481), 1,
      sym_identifier,
    ACTIONS(483), 1,
      anon_sym_map,
    STATE(130), 1,
      sym_comment,
  [3711] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(471), 1,
      anon_sym_it,
    STATE(131), 1,
      sym_comment,
    STATE(148), 1,
      sym_map_body,
  [3727] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(132), 1,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3741] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(133), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3755] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(134), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3769] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(135), 1,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3783] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      sym_comment,
  [3799] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    STATE(137), 1,
      sym_comment,
  [3815] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(493), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      sym_comment,
  [3831] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(495), 1,
      sym_identifier,
    STATE(95), 1,
      aux_sym_workflow_input_repeat1,
    STATE(139), 1,
      sym_comment,
  [3847] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(421), 1,
      sym_identifier,
    STATE(107), 1,
      aux_sym_workflow_emit_repeat1,
    STATE(140), 1,
      sym_comment,
  [3863] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      sym_comment,
  [3879] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_comment,
  [3895] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_comment,
  [3911] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      sym_identifier,
    STATE(133), 1,
      sym_include_item,
    STATE(144), 1,
      sym_comment,
  [3927] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(507), 1,
      aux_sym_string_token2,
    STATE(145), 1,
      sym_comment,
  [3940] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(509), 1,
      aux_sym_comment_token2,
    STATE(146), 1,
      sym_comment,
  [3953] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(511), 1,
      anon_sym_out,
    STATE(147), 1,
      sym_comment,
  [3966] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      sym_comment,
  [3979] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(515), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_comment,
  [3992] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(517), 1,
      aux_sym_string_token1,
    STATE(150), 1,
      sym_comment,
  [4005] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(519), 1,
      anon_sym_SEMI,
    STATE(151), 1,
      sym_comment,
  [4018] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(521), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      sym_comment,
  [4031] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(523), 1,
      anon_sym_EQ,
    STATE(153), 1,
      sym_comment,
  [4044] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(525), 1,
      anon_sym_DOT,
    STATE(154), 1,
      sym_comment,
  [4057] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(527), 1,
      aux_sym_string_token2,
    STATE(155), 1,
      sym_comment,
  [4070] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(529), 1,
      aux_sym_string_token1,
    STATE(156), 1,
      sym_comment,
  [4083] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym_comment,
  [4096] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(531), 1,
      anon_sym_EQ,
    STATE(158), 1,
      sym_comment,
  [4109] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(533), 1,
      aux_sym_string_token2,
    STATE(159), 1,
      sym_comment,
  [4122] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(160), 1,
      sym_comment,
  [4135] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(537), 1,
      anon_sym_EQ,
    STATE(161), 1,
      sym_comment,
  [4148] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(539), 1,
      anon_sym_DOT,
    STATE(162), 1,
      sym_comment,
  [4161] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(541), 1,
      sym_identifier,
    STATE(163), 1,
      sym_comment,
  [4174] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(543), 1,
      aux_sym_comment_token1,
    STATE(164), 1,
      sym_comment,
  [4187] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(545), 1,
      anon_sym_from,
    STATE(165), 1,
      sym_comment,
  [4200] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(547), 1,
      anon_sym_LPAREN,
    STATE(166), 1,
      sym_comment,
  [4213] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_comment,
  [4226] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_comment,
  [4239] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(553), 1,
      anon_sym_SEMI,
    STATE(169), 1,
      sym_comment,
  [4252] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(555), 1,
      sym_identifier,
    STATE(170), 1,
      sym_comment,
  [4265] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      sym_comment,
  [4278] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(557), 1,
      anon_sym_SQUOTE,
    STATE(172), 1,
      sym_comment,
  [4291] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(557), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(173), 1,
      sym_comment,
  [4304] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      sym_comment,
  [4317] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_comment,
  [4330] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(176), 1,
      sym_comment,
  [4343] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(565), 1,
      anon_sym_DOT,
    STATE(177), 1,
      sym_comment,
  [4356] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(178), 1,
      sym_comment,
  [4369] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym_comment,
  [4382] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(569), 1,
      aux_sym_string_token1,
    STATE(180), 1,
      sym_comment,
  [4395] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(571), 1,
      aux_sym_string_token2,
    STATE(181), 1,
      sym_comment,
  [4408] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(573), 1,
      aux_sym_script_content_token1,
    STATE(182), 1,
      sym_comment,
  [4421] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      aux_sym_script_content_token2,
    STATE(183), 1,
      sym_comment,
  [4434] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(577), 1,
      anon_sym_SLASH,
    STATE(184), 1,
      sym_comment,
  [4447] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(559), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(185), 1,
      sym_comment,
  [4460] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(559), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(186), 1,
      sym_comment,
  [4473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      sym_comment,
  [4486] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      anon_sym_PIPE,
    STATE(188), 1,
      sym_comment,
  [4499] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      anon_sym_DOT,
    STATE(189), 1,
      sym_comment,
  [4512] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      sym_comment,
  [4525] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 1,
      anon_sym_SEMI,
    STATE(191), 1,
      sym_comment,
  [4538] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(585), 1,
      aux_sym_comment_token1,
    STATE(192), 1,
      sym_comment,
  [4551] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(587), 1,
      anon_sym_SLASH,
    STATE(193), 1,
      sym_comment,
  [4564] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(589), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym_comment,
  [4577] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(589), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      sym_comment,
  [4590] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(589), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(196), 1,
      sym_comment,
  [4603] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(589), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(197), 1,
      sym_comment,
  [4616] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(591), 1,
      anon_sym_STAR,
    STATE(198), 1,
      sym_comment,
  [4629] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(199), 1,
      sym_comment,
  [4642] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(593), 1,
      anon_sym_LBRACE,
    STATE(200), 1,
      sym_comment,
  [4655] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym_comment,
  [4668] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(557), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(202), 1,
      sym_comment,
  [4681] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(597), 1,
      anon_sym_SEMI,
    STATE(203), 1,
      sym_comment,
  [4694] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym_comment,
  [4707] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(601), 1,
      sym_identifier,
    STATE(205), 1,
      sym_comment,
  [4720] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(603), 1,
      sym_identifier,
    STATE(206), 1,
      sym_comment,
  [4733] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(605), 1,
      aux_sym_comment_token2,
    STATE(207), 1,
      sym_comment,
  [4746] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(607), 1,
      aux_sym_string_token1,
    STATE(208), 1,
      sym_comment,
  [4759] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(609), 1,
      aux_sym_string_token2,
    STATE(209), 1,
      sym_comment,
  [4772] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(611), 1,
      aux_sym_string_token1,
    STATE(210), 1,
      sym_comment,
  [4785] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(613), 1,
      anon_sym_from,
    STATE(211), 1,
      sym_comment,
  [4798] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(615), 1,
      anon_sym_DOT,
    STATE(212), 1,
      sym_comment,
  [4811] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(617), 1,
      anon_sym_LPAREN,
    STATE(213), 1,
      sym_comment,
  [4824] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    STATE(214), 1,
      sym_comment,
  [4837] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      anon_sym_LBRACE,
    STATE(215), 1,
      sym_comment,
  [4850] = 4,
    ACTIONS(503), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(623), 1,
      aux_sym_comment_token1,
    STATE(216), 1,
      sym_comment,
  [4863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(625), 1,
      anon_sym_LPAREN,
    STATE(217), 1,
      sym_comment,
  [4876] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
    STATE(218), 1,
      sym_comment,
  [4889] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(629), 1,
      ts_builtin_sym_end,
    STATE(219), 1,
      sym_comment,
  [4902] = 1,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
  [4906] = 1,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 80,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 240,
  [SMALL_STATE(6)] = 302,
  [SMALL_STATE(7)] = 362,
  [SMALL_STATE(8)] = 423,
  [SMALL_STATE(9)] = 481,
  [SMALL_STATE(10)] = 536,
  [SMALL_STATE(11)] = 564,
  [SMALL_STATE(12)] = 592,
  [SMALL_STATE(13)] = 646,
  [SMALL_STATE(14)] = 676,
  [SMALL_STATE(15)] = 704,
  [SMALL_STATE(16)] = 732,
  [SMALL_STATE(17)] = 762,
  [SMALL_STATE(18)] = 790,
  [SMALL_STATE(19)] = 818,
  [SMALL_STATE(20)] = 846,
  [SMALL_STATE(21)] = 874,
  [SMALL_STATE(22)] = 902,
  [SMALL_STATE(23)] = 930,
  [SMALL_STATE(24)] = 958,
  [SMALL_STATE(25)] = 986,
  [SMALL_STATE(26)] = 1014,
  [SMALL_STATE(27)] = 1041,
  [SMALL_STATE(28)] = 1092,
  [SMALL_STATE(29)] = 1119,
  [SMALL_STATE(30)] = 1146,
  [SMALL_STATE(31)] = 1197,
  [SMALL_STATE(32)] = 1248,
  [SMALL_STATE(33)] = 1275,
  [SMALL_STATE(34)] = 1302,
  [SMALL_STATE(35)] = 1329,
  [SMALL_STATE(36)] = 1356,
  [SMALL_STATE(37)] = 1383,
  [SMALL_STATE(38)] = 1410,
  [SMALL_STATE(39)] = 1437,
  [SMALL_STATE(40)] = 1488,
  [SMALL_STATE(41)] = 1539,
  [SMALL_STATE(42)] = 1587,
  [SMALL_STATE(43)] = 1635,
  [SMALL_STATE(44)] = 1683,
  [SMALL_STATE(45)] = 1731,
  [SMALL_STATE(46)] = 1779,
  [SMALL_STATE(47)] = 1825,
  [SMALL_STATE(48)] = 1873,
  [SMALL_STATE(49)] = 1921,
  [SMALL_STATE(50)] = 1969,
  [SMALL_STATE(51)] = 1999,
  [SMALL_STATE(52)] = 2031,
  [SMALL_STATE(53)] = 2063,
  [SMALL_STATE(54)] = 2094,
  [SMALL_STATE(55)] = 2123,
  [SMALL_STATE(56)] = 2154,
  [SMALL_STATE(57)] = 2178,
  [SMALL_STATE(58)] = 2214,
  [SMALL_STATE(59)] = 2238,
  [SMALL_STATE(60)] = 2272,
  [SMALL_STATE(61)] = 2298,
  [SMALL_STATE(62)] = 2334,
  [SMALL_STATE(63)] = 2358,
  [SMALL_STATE(64)] = 2395,
  [SMALL_STATE(65)] = 2418,
  [SMALL_STATE(66)] = 2441,
  [SMALL_STATE(67)] = 2464,
  [SMALL_STATE(68)] = 2490,
  [SMALL_STATE(69)] = 2518,
  [SMALL_STATE(70)] = 2546,
  [SMALL_STATE(71)] = 2568,
  [SMALL_STATE(72)] = 2590,
  [SMALL_STATE(73)] = 2609,
  [SMALL_STATE(74)] = 2628,
  [SMALL_STATE(75)] = 2647,
  [SMALL_STATE(76)] = 2665,
  [SMALL_STATE(77)] = 2683,
  [SMALL_STATE(78)] = 2707,
  [SMALL_STATE(79)] = 2725,
  [SMALL_STATE(80)] = 2743,
  [SMALL_STATE(81)] = 2761,
  [SMALL_STATE(82)] = 2779,
  [SMALL_STATE(83)] = 2797,
  [SMALL_STATE(84)] = 2815,
  [SMALL_STATE(85)] = 2833,
  [SMALL_STATE(86)] = 2851,
  [SMALL_STATE(87)] = 2869,
  [SMALL_STATE(88)] = 2887,
  [SMALL_STATE(89)] = 2905,
  [SMALL_STATE(90)] = 2923,
  [SMALL_STATE(91)] = 2947,
  [SMALL_STATE(92)] = 2972,
  [SMALL_STATE(93)] = 2997,
  [SMALL_STATE(94)] = 3022,
  [SMALL_STATE(95)] = 3041,
  [SMALL_STATE(96)] = 3062,
  [SMALL_STATE(97)] = 3087,
  [SMALL_STATE(98)] = 3109,
  [SMALL_STATE(99)] = 3127,
  [SMALL_STATE(100)] = 3147,
  [SMALL_STATE(101)] = 3169,
  [SMALL_STATE(102)] = 3191,
  [SMALL_STATE(103)] = 3209,
  [SMALL_STATE(104)] = 3231,
  [SMALL_STATE(105)] = 3253,
  [SMALL_STATE(106)] = 3272,
  [SMALL_STATE(107)] = 3289,
  [SMALL_STATE(108)] = 3308,
  [SMALL_STATE(109)] = 3327,
  [SMALL_STATE(110)] = 3346,
  [SMALL_STATE(111)] = 3363,
  [SMALL_STATE(112)] = 3382,
  [SMALL_STATE(113)] = 3401,
  [SMALL_STATE(114)] = 3418,
  [SMALL_STATE(115)] = 3435,
  [SMALL_STATE(116)] = 3450,
  [SMALL_STATE(117)] = 3467,
  [SMALL_STATE(118)] = 3486,
  [SMALL_STATE(119)] = 3505,
  [SMALL_STATE(120)] = 3522,
  [SMALL_STATE(121)] = 3539,
  [SMALL_STATE(122)] = 3558,
  [SMALL_STATE(123)] = 3577,
  [SMALL_STATE(124)] = 3596,
  [SMALL_STATE(125)] = 3615,
  [SMALL_STATE(126)] = 3631,
  [SMALL_STATE(127)] = 3647,
  [SMALL_STATE(128)] = 3663,
  [SMALL_STATE(129)] = 3679,
  [SMALL_STATE(130)] = 3695,
  [SMALL_STATE(131)] = 3711,
  [SMALL_STATE(132)] = 3727,
  [SMALL_STATE(133)] = 3741,
  [SMALL_STATE(134)] = 3755,
  [SMALL_STATE(135)] = 3769,
  [SMALL_STATE(136)] = 3783,
  [SMALL_STATE(137)] = 3799,
  [SMALL_STATE(138)] = 3815,
  [SMALL_STATE(139)] = 3831,
  [SMALL_STATE(140)] = 3847,
  [SMALL_STATE(141)] = 3863,
  [SMALL_STATE(142)] = 3879,
  [SMALL_STATE(143)] = 3895,
  [SMALL_STATE(144)] = 3911,
  [SMALL_STATE(145)] = 3927,
  [SMALL_STATE(146)] = 3940,
  [SMALL_STATE(147)] = 3953,
  [SMALL_STATE(148)] = 3966,
  [SMALL_STATE(149)] = 3979,
  [SMALL_STATE(150)] = 3992,
  [SMALL_STATE(151)] = 4005,
  [SMALL_STATE(152)] = 4018,
  [SMALL_STATE(153)] = 4031,
  [SMALL_STATE(154)] = 4044,
  [SMALL_STATE(155)] = 4057,
  [SMALL_STATE(156)] = 4070,
  [SMALL_STATE(157)] = 4083,
  [SMALL_STATE(158)] = 4096,
  [SMALL_STATE(159)] = 4109,
  [SMALL_STATE(160)] = 4122,
  [SMALL_STATE(161)] = 4135,
  [SMALL_STATE(162)] = 4148,
  [SMALL_STATE(163)] = 4161,
  [SMALL_STATE(164)] = 4174,
  [SMALL_STATE(165)] = 4187,
  [SMALL_STATE(166)] = 4200,
  [SMALL_STATE(167)] = 4213,
  [SMALL_STATE(168)] = 4226,
  [SMALL_STATE(169)] = 4239,
  [SMALL_STATE(170)] = 4252,
  [SMALL_STATE(171)] = 4265,
  [SMALL_STATE(172)] = 4278,
  [SMALL_STATE(173)] = 4291,
  [SMALL_STATE(174)] = 4304,
  [SMALL_STATE(175)] = 4317,
  [SMALL_STATE(176)] = 4330,
  [SMALL_STATE(177)] = 4343,
  [SMALL_STATE(178)] = 4356,
  [SMALL_STATE(179)] = 4369,
  [SMALL_STATE(180)] = 4382,
  [SMALL_STATE(181)] = 4395,
  [SMALL_STATE(182)] = 4408,
  [SMALL_STATE(183)] = 4421,
  [SMALL_STATE(184)] = 4434,
  [SMALL_STATE(185)] = 4447,
  [SMALL_STATE(186)] = 4460,
  [SMALL_STATE(187)] = 4473,
  [SMALL_STATE(188)] = 4486,
  [SMALL_STATE(189)] = 4499,
  [SMALL_STATE(190)] = 4512,
  [SMALL_STATE(191)] = 4525,
  [SMALL_STATE(192)] = 4538,
  [SMALL_STATE(193)] = 4551,
  [SMALL_STATE(194)] = 4564,
  [SMALL_STATE(195)] = 4577,
  [SMALL_STATE(196)] = 4590,
  [SMALL_STATE(197)] = 4603,
  [SMALL_STATE(198)] = 4616,
  [SMALL_STATE(199)] = 4629,
  [SMALL_STATE(200)] = 4642,
  [SMALL_STATE(201)] = 4655,
  [SMALL_STATE(202)] = 4668,
  [SMALL_STATE(203)] = 4681,
  [SMALL_STATE(204)] = 4694,
  [SMALL_STATE(205)] = 4707,
  [SMALL_STATE(206)] = 4720,
  [SMALL_STATE(207)] = 4733,
  [SMALL_STATE(208)] = 4746,
  [SMALL_STATE(209)] = 4759,
  [SMALL_STATE(210)] = 4772,
  [SMALL_STATE(211)] = 4785,
  [SMALL_STATE(212)] = 4798,
  [SMALL_STATE(213)] = 4811,
  [SMALL_STATE(214)] = 4824,
  [SMALL_STATE(215)] = 4837,
  [SMALL_STATE(216)] = 4850,
  [SMALL_STATE(217)] = 4863,
  [SMALL_STATE(218)] = 4876,
  [SMALL_STATE(219)] = 4889,
  [SMALL_STATE(220)] = 4902,
  [SMALL_STATE(221)] = 4906,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_main, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_body, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_expression, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_expression, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_expression, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_expression, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 5, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 5, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_value, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_value, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_of, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_of, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_from, 4, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_from, 4, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_value, 4, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_value, 4, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_of, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_of, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipe_expression, 6, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipe_expression, 6, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_from, 5, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_from, 5, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_channel_of, 5, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_channel_of, 5, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 6, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 6, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_definition, 5, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_process_definition, 5, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shebang, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shebang, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature_flag, 7, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_feature_flag, 7, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 7, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 7, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_definition, 4, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_process_definition, 4, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_definition, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_workflow_definition, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_definition, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_workflow_definition, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_block, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_block, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_block, 2, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_block_repeat1, 2, 0, 0),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_output_block_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_block, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_declaration, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_declaration, 5, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_workflow_body_repeat1, 2, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_input_block_repeat1, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_declaration, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_declaration, 5, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_block_repeat1, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_block_repeat1, 2, 0, 0),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_block_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 1, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_block_repeat1, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_block_repeat1, 1, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_content, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 2, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_process_definition_repeat1, 1, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workflow_input_repeat1, 2, 0, 0),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_workflow_input_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_input, 2, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_workflow_input_repeat1, 2, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_channel_from_repeat1, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_emit, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_body, 2, 0, 0),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_channel_from_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workflow_emit_repeat1, 2, 0, 0),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_workflow_emit_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_repeat1, 2, 0, 0), SHIFT_REPEAT(144),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_repeat1, 2, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_output, 3, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_process_invocation_repeat1, 2, 0, 0),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_process_invocation_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_item, 3, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_workflow_emit_repeat1, 4, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_body, 3, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__workflow_statement, 1, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_invocation, 4, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_workflow_body, 3, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_invocation, 5, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_process_invocation, 3, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [629] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
