#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  aux_sym_comment_token2 = 4,
  anon_sym_SLASH = 5,
  anon_sym_println = 6,
  anon_sym_LPAREN = 7,
  anon_sym_SQUOTE = 8,
  aux_sym_print_statement_token1 = 9,
  anon_sym_RPAREN = 10,
  sym_source_file = 11,
  sym_comment = 12,
  sym__statement = 13,
  sym__statement_definition = 14,
  sym__simple_statements = 15,
  sym_print_statement = 16,
  aux_sym_source_file_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [anon_sym_println] = "println",
  [anon_sym_LPAREN] = "(",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_print_statement_token1] = "print_statement_token1",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym__statement] = "_statement",
  [sym__statement_definition] = "_statement_definition",
  [sym__simple_statements] = "_simple_statements",
  [sym_print_statement] = "print_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_println] = anon_sym_println,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_print_statement_token1] = aux_sym_print_statement_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym__statement] = sym__statement,
  [sym__statement_definition] = sym__statement_definition,
  [sym__simple_statements] = sym__simple_statements,
  [sym_print_statement] = sym_print_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_println] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
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
  [anon_sym_RPAREN] = {
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
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_definition] = {
    .visible = false,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(2);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(2);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(11);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_println);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == '/') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {(TSStateId)(-1)},
  [19] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_println] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym_comment] = STATE(1),
    [sym__statement] = STATE(4),
    [sym__statement_definition] = STATE(5),
    [sym__simple_statements] = STATE(6),
    [sym_print_statement] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_println] = ACTIONS(9),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [sym__statement] = STATE(4),
    [sym__statement_definition] = STATE(5),
    [sym__simple_statements] = STATE(6),
    [sym_print_statement] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_println] = ACTIONS(9),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [sym__statement] = STATE(4),
    [sym__statement_definition] = STATE(5),
    [sym__simple_statements] = STATE(6),
    [sym_print_statement] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_println] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(4), 1,
      sym_comment,
    ACTIONS(18), 2,
      ts_builtin_sym_end,
      anon_sym_println,
  [14] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(5), 1,
      sym_comment,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      anon_sym_println,
  [28] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_comment,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      anon_sym_println,
  [42] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(7), 1,
      sym_comment,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      anon_sym_println,
  [56] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_comment,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      anon_sym_println,
  [70] = 4,
    ACTIONS(28), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(30), 1,
      aux_sym_comment_token1,
    ACTIONS(32), 1,
      anon_sym_SLASH_STAR,
    STATE(9), 1,
      sym_comment,
  [83] = 4,
    ACTIONS(28), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(32), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(34), 1,
      aux_sym_comment_token2,
    STATE(10), 1,
      sym_comment,
  [96] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(36), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_comment,
  [109] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_comment,
  [122] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(40), 1,
      anon_sym_SLASH,
    STATE(13), 1,
      sym_comment,
  [135] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(42), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym_comment,
  [148] = 4,
    ACTIONS(28), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(32), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(44), 1,
      aux_sym_print_statement_token1,
    STATE(15), 1,
      sym_comment,
  [161] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(46), 1,
      anon_sym_SQUOTE,
    STATE(16), 1,
      sym_comment,
  [174] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_comment,
  [187] = 1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
  [191] = 1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 56,
  [SMALL_STATE(9)] = 70,
  [SMALL_STATE(10)] = 83,
  [SMALL_STATE(11)] = 96,
  [SMALL_STATE(12)] = 109,
  [SMALL_STATE(13)] = 122,
  [SMALL_STATE(14)] = 135,
  [SMALL_STATE(15)] = 148,
  [SMALL_STATE(16)] = 161,
  [SMALL_STATE(17)] = 174,
  [SMALL_STATE(18)] = 187,
  [SMALL_STATE(19)] = 191,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_definition, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statements, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 6, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [38] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
