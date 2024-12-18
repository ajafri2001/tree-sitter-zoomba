#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_SLASH_SLASH = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_SLASH_STAR = 4,
  aux_sym_comment_token2 = 5,
  anon_sym_SLASH = 6,
  anon_sym_def = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_COMMA = 12,
  anon_sym_EQ = 13,
  anon_sym_return = 14,
  anon_sym_println = 15,
  anon_sym_SQUOTE = 16,
  aux_sym_print_statement_token1 = 17,
  sym_source_file = 18,
  sym_comment = 19,
  sym__statement = 20,
  sym__statement_definition = 21,
  sym__function_definition = 22,
  sym_function_params = 23,
  sym_parameter = 24,
  sym_return_statement = 25,
  sym__simple_statements = 26,
  sym_print_statement = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_function_params_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_def] = "def",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_return] = "return",
  [anon_sym_println] = "println",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_print_statement_token1] = "print_statement_token1",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym__statement] = "_statement",
  [sym__statement_definition] = "_statement_definition",
  [sym__function_definition] = "_function_definition",
  [sym_function_params] = "function_params",
  [sym_parameter] = "parameter",
  [sym_return_statement] = "return_statement",
  [sym__simple_statements] = "_simple_statements",
  [sym_print_statement] = "print_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_params_repeat1] = "function_params_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_println] = anon_sym_println,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_print_statement_token1] = aux_sym_print_statement_token1,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym__statement] = sym__statement,
  [sym__statement_definition] = sym__statement_definition,
  [sym__function_definition] = sym__function_definition,
  [sym_function_params] = sym_function_params,
  [sym_parameter] = sym_parameter,
  [sym_return_statement] = sym_return_statement,
  [sym__simple_statements] = sym__simple_statements,
  [sym_print_statement] = sym_print_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_params_repeat1] = aux_sym_function_params_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
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
  [anon_sym_def] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_println] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_print_statement_token1] = {
    .visible = false,
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
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__function_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_params] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_statements] = {
    .visible = false,
    .named = true,
  },
  [sym_print_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_params_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '\'', 43,
        '(', 35,
        ')', 36,
        ',', 39,
        '/', 33,
        '=', 40,
        'd', 6,
        'p', 14,
        'r', 7,
        '{', 37,
        '}', 38,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '/') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(46);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(46);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_println);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == '/') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(46);
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
  [4] = {.lex_state = 1},
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
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 45},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {(TSStateId)(-1)},
  [41] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_println] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_comment] = STATE(1),
    [sym__statement] = STATE(6),
    [sym__statement_definition] = STATE(7),
    [sym__function_definition] = STATE(7),
    [sym__simple_statements] = STATE(8),
    [sym_print_statement] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_println] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      anon_sym_println,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(6), 1,
      sym__statement,
    STATE(8), 1,
      sym__simple_statements,
    STATE(9), 1,
      sym_print_statement,
    STATE(7), 2,
      sym__statement_definition,
      sym__function_definition,
  [35] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(20), 1,
      anon_sym_println,
    STATE(6), 1,
      sym__statement,
    STATE(8), 1,
      sym__simple_statements,
    STATE(9), 1,
      sym_print_statement,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(7), 2,
      sym__statement_definition,
      sym__function_definition,
  [68] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(10), 1,
      sym_parameter,
    STATE(21), 1,
      sym_function_params,
  [90] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      anon_sym_EQ,
    STATE(5), 1,
      sym_comment,
    ACTIONS(27), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [107] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_comment,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_println,
  [122] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 1,
      sym_comment,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_println,
  [137] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_comment,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_println,
  [152] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      sym_comment,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_println,
  [167] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_function_params_repeat1,
  [186] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    STATE(11), 2,
      sym_comment,
      aux_sym_function_params_repeat1,
  [203] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym_comment,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_println,
  [218] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_function_params_repeat1,
    STATE(13), 1,
      sym_comment,
  [237] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_println,
  [252] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_println,
  [267] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(16), 1,
      sym_comment,
    STATE(18), 1,
      sym_parameter,
  [283] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(56), 1,
      anon_sym_return,
    STATE(17), 1,
      sym_comment,
    STATE(34), 1,
      sym_return_statement,
  [299] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(43), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [313] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(58), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [327] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(56), 1,
      anon_sym_return,
    STATE(20), 1,
      sym_comment,
    STATE(32), 1,
      sym_return_statement,
  [343] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_comment,
  [356] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_comment,
  [369] = 4,
    ACTIONS(64), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(66), 1,
      aux_sym_comment_token1,
    ACTIONS(68), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
  [382] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(70), 1,
      anon_sym_SQUOTE,
    STATE(24), 1,
      sym_comment,
  [395] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(72), 1,
      sym_identifier,
    STATE(25), 1,
      sym_comment,
  [408] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_comment,
  [421] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_comment,
  [434] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(78), 1,
      anon_sym_SLASH,
    STATE(28), 1,
      sym_comment,
  [447] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_comment,
  [460] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    STATE(30), 1,
      sym_comment,
  [473] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(84), 1,
      sym_identifier,
    STATE(31), 1,
      sym_comment,
  [486] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_comment,
  [499] = 4,
    ACTIONS(64), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(68), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(88), 1,
      aux_sym_comment_token2,
    STATE(33), 1,
      sym_comment,
  [512] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_comment,
  [525] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(35), 1,
      sym_comment,
  [538] = 4,
    ACTIONS(64), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(68), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      aux_sym_print_statement_token1,
    STATE(36), 1,
      sym_comment,
  [551] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_comment,
  [564] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym_comment,
  [577] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(100), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_comment,
  [590] = 1,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
  [594] = 1,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 122,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 152,
  [SMALL_STATE(10)] = 167,
  [SMALL_STATE(11)] = 186,
  [SMALL_STATE(12)] = 203,
  [SMALL_STATE(13)] = 218,
  [SMALL_STATE(14)] = 237,
  [SMALL_STATE(15)] = 252,
  [SMALL_STATE(16)] = 267,
  [SMALL_STATE(17)] = 283,
  [SMALL_STATE(18)] = 299,
  [SMALL_STATE(19)] = 313,
  [SMALL_STATE(20)] = 327,
  [SMALL_STATE(21)] = 343,
  [SMALL_STATE(22)] = 356,
  [SMALL_STATE(23)] = 369,
  [SMALL_STATE(24)] = 382,
  [SMALL_STATE(25)] = 395,
  [SMALL_STATE(26)] = 408,
  [SMALL_STATE(27)] = 421,
  [SMALL_STATE(28)] = 434,
  [SMALL_STATE(29)] = 447,
  [SMALL_STATE(30)] = 460,
  [SMALL_STATE(31)] = 473,
  [SMALL_STATE(32)] = 486,
  [SMALL_STATE(33)] = 499,
  [SMALL_STATE(34)] = 512,
  [SMALL_STATE(35)] = 525,
  [SMALL_STATE(36)] = 538,
  [SMALL_STATE(37)] = 551,
  [SMALL_STATE(38)] = 564,
  [SMALL_STATE(39)] = 577,
  [SMALL_STATE(40)] = 590,
  [SMALL_STATE(41)] = 594,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_definition, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_params, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_params_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_params_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 6, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_params, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_definition, 7, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_definition, 8, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [62] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_zoomba(void) {
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
