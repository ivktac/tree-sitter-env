#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LF = 1,
  anon_sym_EQ = 2,
  aux_sym_env_key_token1 = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_quoted_string_token1 = 5,
  anon_sym_SQUOTE = 6,
  aux_sym_unquoted_string_token1 = 7,
  anon_sym_BSLASH = 8,
  sym_escape_sequence = 9,
  anon_sym_DOLLAR = 10,
  anon_sym_LBRACE = 11,
  aux_sym__expansion_body_token1 = 12,
  anon_sym_RBRACE = 13,
  sym_variable = 14,
  sym_comment = 15,
  sym_source_file = 16,
  sym_env_variable = 17,
  sym_env_key = 18,
  sym_quoted_string = 19,
  sym_unquoted_string = 20,
  sym__expansion = 21,
  sym__impl_expansion = 22,
  sym__expansion_body = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_quoted_string_repeat1 = 25,
  aux_sym_unquoted_string_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_EQ] = "=",
  [aux_sym_env_key_token1] = "unquoted_string",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_unquoted_string_token1] = "unquoted_string_token1",
  [anon_sym_BSLASH] = "\\ ",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACE] = "{",
  [aux_sym__expansion_body_token1] = "variable",
  [anon_sym_RBRACE] = "}",
  [sym_variable] = "variable",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_env_variable] = "env_variable",
  [sym_env_key] = "env_key",
  [sym_quoted_string] = "quoted_string",
  [sym_unquoted_string] = "unquoted_string",
  [sym__expansion] = "_expansion",
  [sym__impl_expansion] = "expansion",
  [sym__expansion_body] = "_expansion_body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_unquoted_string_repeat1] = "unquoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_env_key_token1] = sym_unquoted_string,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_unquoted_string_token1] = aux_sym_unquoted_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym__expansion_body_token1] = sym_variable,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_variable] = sym_variable,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_env_variable] = sym_env_variable,
  [sym_env_key] = sym_env_key,
  [sym_quoted_string] = sym_quoted_string,
  [sym_unquoted_string] = sym_unquoted_string,
  [sym__expansion] = sym__expansion,
  [sym__impl_expansion] = sym__impl_expansion,
  [sym__expansion_body] = sym__expansion_body,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_unquoted_string_repeat1] = aux_sym_unquoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_env_key_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expansion_body_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_env_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_env_key] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym__expansion] = {
    .visible = false,
    .named = true,
  },
  [sym__impl_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym__expansion_body] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
    {field_value, 2},
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
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 13,
  [16] = 16,
  [17] = 16,
  [18] = 16,
  [19] = 19,
  [20] = 19,
  [21] = 19,
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
  [32] = 26,
  [33] = 26,
  [34] = 23,
  [35] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(13)
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '$') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(12)
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(15)
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead == 'U') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'U') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '\r') SKIP(29)
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 28:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '\r') SKIP(30)
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(30)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '}') ADVANCE(58);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '#') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 16},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_env_key_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym_env_variable] = STATE(29),
    [sym_env_key] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_env_key_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_comment,
    STATE(27), 2,
      sym_quoted_string,
      sym_unquoted_string,
    STATE(3), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_unquoted_string_repeat1,
  [31] = 6,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LF,
    ACTIONS(27), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    STATE(6), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_unquoted_string_repeat1,
  [52] = 6,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(34), 1,
      anon_sym_SQUOTE,
    ACTIONS(36), 1,
      sym_escape_sequence,
    ACTIONS(39), 1,
      anon_sym_DOLLAR,
    STATE(4), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_quoted_string_repeat1,
  [73] = 6,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(45), 1,
      sym_escape_sequence,
    ACTIONS(48), 1,
      anon_sym_DOLLAR,
    STATE(5), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_quoted_string_repeat1,
  [94] = 6,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(53), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(56), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      anon_sym_DOLLAR,
    STATE(6), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_unquoted_string_repeat1,
  [115] = 6,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(62), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(64), 1,
      anon_sym_SQUOTE,
    ACTIONS(66), 1,
      sym_escape_sequence,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    STATE(4), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_quoted_string_repeat1,
  [136] = 6,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(74), 1,
      sym_escape_sequence,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    STATE(10), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_quoted_string_repeat1,
  [157] = 6,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_SQUOTE,
    ACTIONS(78), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(80), 1,
      sym_escape_sequence,
    STATE(7), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_quoted_string_repeat1,
  [178] = 6,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(84), 1,
      sym_escape_sequence,
    STATE(5), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_quoted_string_repeat1,
  [199] = 6,
    ACTIONS(7), 1,
      aux_sym_env_key_token1,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    STATE(25), 1,
      sym_env_key,
    STATE(29), 1,
      sym_env_variable,
  [218] = 6,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      aux_sym_env_key_token1,
    ACTIONS(93), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    STATE(25), 1,
      sym_env_key,
    STATE(29), 1,
      sym_env_variable,
  [237] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
    ACTIONS(98), 2,
      sym_escape_sequence,
      anon_sym_DOLLAR,
  [249] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(98), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [261] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(96), 2,
      aux_sym_quoted_string_token1,
      anon_sym_SQUOTE,
    ACTIONS(98), 2,
      sym_escape_sequence,
      anon_sym_DOLLAR,
  [273] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(100), 2,
      aux_sym_quoted_string_token1,
      anon_sym_SQUOTE,
    ACTIONS(102), 2,
      sym_escape_sequence,
      anon_sym_DOLLAR,
  [285] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
    ACTIONS(102), 2,
      sym_escape_sequence,
      anon_sym_DOLLAR,
  [297] = 3,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(102), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      sym_variable,
    STATE(18), 1,
      sym__expansion_body,
  [322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      sym_variable,
    STATE(17), 1,
      sym__expansion_body,
  [335] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      sym_variable,
    STATE(16), 1,
      sym__expansion_body,
  [348] = 1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      aux_sym_env_key_token1,
      sym_comment,
  [354] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(116), 1,
      aux_sym__expansion_body_token1,
  [361] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_LF,
  [368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_EQ,
  [375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
  [382] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LF,
  [389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [396] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_LF,
  [403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_EQ,
  [410] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_LF,
  [417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
  [424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
  [431] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(138), 1,
      aux_sym__expansion_body_token1,
  [438] = 2,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(140), 1,
      aux_sym__expansion_body_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 178,
  [SMALL_STATE(11)] = 199,
  [SMALL_STATE(12)] = 218,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 249,
  [SMALL_STATE(15)] = 261,
  [SMALL_STATE(16)] = 273,
  [SMALL_STATE(17)] = 285,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 309,
  [SMALL_STATE(20)] = 322,
  [SMALL_STATE(21)] = 335,
  [SMALL_STATE(22)] = 348,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 361,
  [SMALL_STATE(25)] = 368,
  [SMALL_STATE(26)] = 375,
  [SMALL_STATE(27)] = 382,
  [SMALL_STATE(28)] = 389,
  [SMALL_STATE(29)] = 396,
  [SMALL_STATE(30)] = 403,
  [SMALL_STATE(31)] = 410,
  [SMALL_STATE(32)] = 417,
  [SMALL_STATE(33)] = 424,
  [SMALL_STATE(34)] = 431,
  [SMALL_STATE(35)] = 438,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_variable, 2, .production_id = 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(4),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(21),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(20),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(6),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(6),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(19),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__impl_expansion, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__impl_expansion, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_variable, 3, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_env(void) {
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
