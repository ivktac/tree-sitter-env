#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
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
  aux_sym_unquoted_string_token1 = 6,
  anon_sym_BSLASH = 7,
  sym_escape_sequence = 8,
  anon_sym_DOLLAR = 9,
  anon_sym_LBRACE = 10,
  aux_sym__expansion_body_token1 = 11,
  anon_sym_RBRACE = 12,
  sym_variable = 13,
  sym_comment = 14,
  sym_source_file = 15,
  sym_env_variable = 16,
  sym_env_key = 17,
  sym_quoted_string = 18,
  sym_unquoted_string = 19,
  sym__expansion = 20,
  sym__impl_expansion = 21,
  sym__expansion_body = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_quoted_string_repeat1 = 24,
  aux_sym_unquoted_string_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_EQ] = "=",
  [aux_sym_env_key_token1] = "unquoted_string",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 11,
  [14] = 14,
  [15] = 14,
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
  [26] = 21,
  [27] = 18,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '$') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(9)
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == 'U') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'U') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
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
      if (eof) ADVANCE(27);
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(25)
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 24:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(26)
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(25)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_env_key_token1);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\r') ADVANCE(32);
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(45);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__expansion_body_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 12},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_env_key_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym_env_variable] = STATE(25),
    [sym_env_key] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_env_key_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      anon_sym_LF,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      sym_comment,
    STATE(22), 2,
      sym_quoted_string,
      sym_unquoted_string,
    STATE(6), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_unquoted_string_repeat1,
  [28] = 6,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LF,
    ACTIONS(25), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(28), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    STATE(3), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_unquoted_string_repeat1,
  [49] = 6,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(38), 1,
      sym_escape_sequence,
    ACTIONS(40), 1,
      anon_sym_DOLLAR,
    STATE(7), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_quoted_string_repeat1,
  [70] = 6,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(47), 1,
      sym_escape_sequence,
    ACTIONS(50), 1,
      anon_sym_DOLLAR,
    STATE(5), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_quoted_string_repeat1,
  [91] = 6,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_LF,
    ACTIONS(55), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    STATE(3), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_unquoted_string_repeat1,
  [112] = 6,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_DOLLAR,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(63), 1,
      sym_escape_sequence,
    STATE(5), 3,
      sym__expansion,
      sym__impl_expansion,
      aux_sym_quoted_string_repeat1,
  [133] = 6,
    ACTIONS(7), 1,
      aux_sym_env_key_token1,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(23), 1,
      sym_env_key,
    STATE(25), 1,
      sym_env_variable,
  [152] = 6,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      aux_sym_env_key_token1,
    ACTIONS(72), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(23), 1,
      sym_env_key,
    STATE(25), 1,
      sym_env_variable,
  [171] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(75), 2,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
    ACTIONS(77), 2,
      sym_escape_sequence,
      anon_sym_DOLLAR,
  [183] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_DQUOTE,
      aux_sym_quoted_string_token1,
    ACTIONS(81), 2,
      sym_escape_sequence,
      anon_sym_DOLLAR,
  [195] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(77), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [207] = 3,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_unquoted_string_token1,
    ACTIONS(81), 3,
      anon_sym_LF,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
  [219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      sym_variable,
    STATE(11), 1,
      sym__expansion_body,
  [232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      sym_variable,
    STATE(13), 1,
      sym__expansion_body,
  [245] = 1,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      aux_sym_env_key_token1,
      sym_comment,
  [251] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LF,
  [258] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym__expansion_body_token1,
  [265] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LF,
  [272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_EQ,
  [279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
  [286] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LF,
  [293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_EQ,
  [300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [307] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LF,
  [314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
  [321] = 2,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(111), 1,
      aux_sym__expansion_body_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 49,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 91,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 133,
  [SMALL_STATE(9)] = 152,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 195,
  [SMALL_STATE(13)] = 207,
  [SMALL_STATE(14)] = 219,
  [SMALL_STATE(15)] = 232,
  [SMALL_STATE(16)] = 245,
  [SMALL_STATE(17)] = 251,
  [SMALL_STATE(18)] = 258,
  [SMALL_STATE(19)] = 265,
  [SMALL_STATE(20)] = 272,
  [SMALL_STATE(21)] = 279,
  [SMALL_STATE(22)] = 286,
  [SMALL_STATE(23)] = 293,
  [SMALL_STATE(24)] = 300,
  [SMALL_STATE(25)] = 307,
  [SMALL_STATE(26)] = 314,
  [SMALL_STATE(27)] = 321,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_variable, 2, .production_id = 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(3),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unquoted_string_repeat1, 2), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(5),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(5),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquoted_string, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expansion_body, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expansion_body, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__impl_expansion, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__impl_expansion, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_key, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_variable, 3, .production_id = 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
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
