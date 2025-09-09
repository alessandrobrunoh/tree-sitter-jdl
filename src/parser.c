#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_line_comment = 1,
  sym_block_comment = 2,
  anon_sym_entity = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_COMMA = 6,
  anon_sym_String = 7,
  anon_sym_Integer = 8,
  anon_sym_Long = 9,
  anon_sym_BigDecimal = 10,
  anon_sym_Float = 11,
  anon_sym_Double = 12,
  anon_sym_Boolean = 13,
  anon_sym_LocalDate = 14,
  anon_sym_ZonedDateTime = 15,
  anon_sym_Instant = 16,
  anon_sym_Duration = 17,
  anon_sym_UUID = 18,
  anon_sym_Blob = 19,
  anon_sym_AnyBlob = 20,
  anon_sym_ImageBlob = 21,
  anon_sym_TextBlob = 22,
  sym_required_validation = 23,
  anon_sym_min = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_max = 27,
  anon_sym_pattern = 28,
  anon_sym_enum = 29,
  anon_sym_relationship = 30,
  anon_sym_OneToMany = 31,
  anon_sym_ManyToOne = 32,
  anon_sym_OneToOne = 33,
  anon_sym_ManyToMany = 34,
  anon_sym_to = 35,
  anon_sym_application = 36,
  anon_sym_EQ = 37,
  anon_sym_DQUOTE = 38,
  aux_sym_string_token1 = 39,
  anon_sym_SQUOTE = 40,
  aux_sym_string_token2 = 41,
  sym_number = 42,
  anon_sym_true = 43,
  anon_sym_false = 44,
  sym_identifier = 45,
  sym_source_file = 46,
  sym__definition = 47,
  sym_entity_declaration = 48,
  sym_entity_body = 49,
  sym_field_declaration = 50,
  sym_field_type = 51,
  sym_validation = 52,
  sym_min_validation = 53,
  sym_max_validation = 54,
  sym_pattern_validation = 55,
  sym_enum_declaration = 56,
  sym_relationship_declaration = 57,
  sym_relationship_type = 58,
  sym_relationship_mapping = 59,
  sym_relationship_side = 60,
  sym_application_declaration = 61,
  sym_application_option = 62,
  sym_block_value = 63,
  sym_value = 64,
  sym_string = 65,
  sym_boolean = 66,
  aux_sym_source_file_repeat1 = 67,
  aux_sym_entity_body_repeat1 = 68,
  aux_sym_field_declaration_repeat1 = 69,
  aux_sym_enum_declaration_repeat1 = 70,
  aux_sym_relationship_declaration_repeat1 = 71,
  aux_sym_application_declaration_repeat1 = 72,
  aux_sym_string_repeat1 = 73,
  aux_sym_string_repeat2 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [anon_sym_entity] = "entity",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_String] = "String",
  [anon_sym_Integer] = "Integer",
  [anon_sym_Long] = "Long",
  [anon_sym_BigDecimal] = "BigDecimal",
  [anon_sym_Float] = "Float",
  [anon_sym_Double] = "Double",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_LocalDate] = "LocalDate",
  [anon_sym_ZonedDateTime] = "ZonedDateTime",
  [anon_sym_Instant] = "Instant",
  [anon_sym_Duration] = "Duration",
  [anon_sym_UUID] = "UUID",
  [anon_sym_Blob] = "Blob",
  [anon_sym_AnyBlob] = "AnyBlob",
  [anon_sym_ImageBlob] = "ImageBlob",
  [anon_sym_TextBlob] = "TextBlob",
  [sym_required_validation] = "required_validation",
  [anon_sym_min] = "min",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_max] = "max",
  [anon_sym_pattern] = "pattern",
  [anon_sym_enum] = "enum",
  [anon_sym_relationship] = "relationship",
  [anon_sym_OneToMany] = "OneToMany",
  [anon_sym_ManyToOne] = "ManyToOne",
  [anon_sym_OneToOne] = "OneToOne",
  [anon_sym_ManyToMany] = "ManyToMany",
  [anon_sym_to] = "to",
  [anon_sym_application] = "application",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_entity_declaration] = "entity_declaration",
  [sym_entity_body] = "entity_body",
  [sym_field_declaration] = "field_declaration",
  [sym_field_type] = "field_type",
  [sym_validation] = "validation",
  [sym_min_validation] = "min_validation",
  [sym_max_validation] = "max_validation",
  [sym_pattern_validation] = "pattern_validation",
  [sym_enum_declaration] = "enum_declaration",
  [sym_relationship_declaration] = "relationship_declaration",
  [sym_relationship_type] = "relationship_type",
  [sym_relationship_mapping] = "relationship_mapping",
  [sym_relationship_side] = "relationship_side",
  [sym_application_declaration] = "application_declaration",
  [sym_application_option] = "application_option",
  [sym_block_value] = "block_value",
  [sym_value] = "value",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_entity_body_repeat1] = "entity_body_repeat1",
  [aux_sym_field_declaration_repeat1] = "field_declaration_repeat1",
  [aux_sym_enum_declaration_repeat1] = "enum_declaration_repeat1",
  [aux_sym_relationship_declaration_repeat1] = "relationship_declaration_repeat1",
  [aux_sym_application_declaration_repeat1] = "application_declaration_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_Integer] = anon_sym_Integer,
  [anon_sym_Long] = anon_sym_Long,
  [anon_sym_BigDecimal] = anon_sym_BigDecimal,
  [anon_sym_Float] = anon_sym_Float,
  [anon_sym_Double] = anon_sym_Double,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_LocalDate] = anon_sym_LocalDate,
  [anon_sym_ZonedDateTime] = anon_sym_ZonedDateTime,
  [anon_sym_Instant] = anon_sym_Instant,
  [anon_sym_Duration] = anon_sym_Duration,
  [anon_sym_UUID] = anon_sym_UUID,
  [anon_sym_Blob] = anon_sym_Blob,
  [anon_sym_AnyBlob] = anon_sym_AnyBlob,
  [anon_sym_ImageBlob] = anon_sym_ImageBlob,
  [anon_sym_TextBlob] = anon_sym_TextBlob,
  [sym_required_validation] = sym_required_validation,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_pattern] = anon_sym_pattern,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_relationship] = anon_sym_relationship,
  [anon_sym_OneToMany] = anon_sym_OneToMany,
  [anon_sym_ManyToOne] = anon_sym_ManyToOne,
  [anon_sym_OneToOne] = anon_sym_OneToOne,
  [anon_sym_ManyToMany] = anon_sym_ManyToMany,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_application] = anon_sym_application,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_entity_declaration] = sym_entity_declaration,
  [sym_entity_body] = sym_entity_body,
  [sym_field_declaration] = sym_field_declaration,
  [sym_field_type] = sym_field_type,
  [sym_validation] = sym_validation,
  [sym_min_validation] = sym_min_validation,
  [sym_max_validation] = sym_max_validation,
  [sym_pattern_validation] = sym_pattern_validation,
  [sym_enum_declaration] = sym_enum_declaration,
  [sym_relationship_declaration] = sym_relationship_declaration,
  [sym_relationship_type] = sym_relationship_type,
  [sym_relationship_mapping] = sym_relationship_mapping,
  [sym_relationship_side] = sym_relationship_side,
  [sym_application_declaration] = sym_application_declaration,
  [sym_application_option] = sym_application_option,
  [sym_block_value] = sym_block_value,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_entity_body_repeat1] = aux_sym_entity_body_repeat1,
  [aux_sym_field_declaration_repeat1] = aux_sym_field_declaration_repeat1,
  [aux_sym_enum_declaration_repeat1] = aux_sym_enum_declaration_repeat1,
  [aux_sym_relationship_declaration_repeat1] = aux_sym_relationship_declaration_repeat1,
  [aux_sym_application_declaration_repeat1] = aux_sym_application_declaration_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_entity] = {
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
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BigDecimal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LocalDate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZonedDateTime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Instant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UUID] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Blob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AnyBlob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ImageBlob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TextBlob] = {
    .visible = true,
    .named = false,
  },
  [sym_required_validation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_min] = {
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
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relationship] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OneToMany] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ManyToOne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OneToOne] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ManyToMany] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_application] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
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
  [sym_number] = {
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
  [sym_identifier] = {
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
  [sym_entity_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_body] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_field_type] = {
    .visible = true,
    .named = true,
  },
  [sym_validation] = {
    .visible = true,
    .named = true,
  },
  [sym_min_validation] = {
    .visible = true,
    .named = true,
  },
  [sym_max_validation] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_validation] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_type] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_mapping] = {
    .visible = true,
    .named = true,
  },
  [sym_relationship_side] = {
    .visible = true,
    .named = true,
  },
  [sym_application_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_application_option] = {
    .visible = true,
    .named = true,
  },
  [sym_block_value] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
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
  [aux_sym_entity_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relationship_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_application_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
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
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 62,
  [63] = 35,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 42,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 40,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 68,
  [91] = 87,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(170);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '\'') ADVANCE(233);
      if (lookahead == '(') ADVANCE(213);
      if (lookahead == ')') ADVANCE(214);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'B') ADVANCE(76);
      if (lookahead == 'D') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(99);
      if (lookahead == 'L') ADVANCE(120);
      if (lookahead == 'M') ADVANCE(34);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == 'S') ADVANCE(147);
      if (lookahead == 'T') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(23);
      if (lookahead == 'Z') ADVANCE(131);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '\'') ADVANCE(233);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 't') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(214);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(171);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'm') ADVANCE(255);
      if (lookahead == 'p') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == '}') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(314);
      if (lookahead == 'B') ADVANCE(296);
      if (lookahead == 'D') ADVANCE(322);
      if (lookahead == 'F') ADVANCE(305);
      if (lookahead == 'I') ADVANCE(311);
      if (lookahead == 'L') ADVANCE(323);
      if (lookahead == 'S') ADVANCE(343);
      if (lookahead == 'T') ADVANCE(275);
      if (lookahead == 'U') ADVANCE(253);
      if (lookahead == 'Z') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('C' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 10:
      if (lookahead == 'B') ADVANCE(92);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(94);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(95);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(199);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(117);
      END_STATE();
    case 19:
      if (lookahead == 'M') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(118);
      END_STATE();
    case 20:
      if (lookahead == 'T') ADVANCE(123);
      END_STATE();
    case 21:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 22:
      if (lookahead == 'T') ADVANCE(133);
      END_STATE();
    case 23:
      if (lookahead == 'U') ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(203);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(207);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(205);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'q') ADVANCE(160);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(219);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 134:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 162:
      if (lookahead == 'x') ADVANCE(215);
      END_STATE();
    case 163:
      if (lookahead == 'x') ADVANCE(156);
      END_STATE();
    case 164:
      if (lookahead == 'y') ADVANCE(10);
      END_STATE();
    case 165:
      if (lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(221);
      END_STATE();
    case 167:
      if (lookahead == 'y') ADVANCE(224);
      END_STATE();
    case 168:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_Integer);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_Integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_Long);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_Long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BigDecimal);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BigDecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_Float);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_Float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_Double);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_Double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_Boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LocalDate);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LocalDate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ZonedDateTime);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ZonedDateTime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_Instant);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_Instant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_Duration);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_Duration);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_UUID);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_UUID);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_Blob);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_Blob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_AnyBlob);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_AnyBlob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_ImageBlob);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ImageBlob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_TextBlob);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_TextBlob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_required_validation);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_required_validation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_pattern);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_relationship);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_OneToMany);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_ManyToOne);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_OneToOne);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_ManyToMany);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_application);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(171);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(229);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(171);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(234);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == 'u') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(357);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_Integer] = ACTIONS(1),
    [anon_sym_Long] = ACTIONS(1),
    [anon_sym_BigDecimal] = ACTIONS(1),
    [anon_sym_Float] = ACTIONS(1),
    [anon_sym_Double] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_LocalDate] = ACTIONS(1),
    [anon_sym_ZonedDateTime] = ACTIONS(1),
    [anon_sym_Instant] = ACTIONS(1),
    [anon_sym_Duration] = ACTIONS(1),
    [anon_sym_UUID] = ACTIONS(1),
    [anon_sym_Blob] = ACTIONS(1),
    [anon_sym_AnyBlob] = ACTIONS(1),
    [anon_sym_ImageBlob] = ACTIONS(1),
    [anon_sym_TextBlob] = ACTIONS(1),
    [sym_required_validation] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_pattern] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_relationship] = ACTIONS(1),
    [anon_sym_OneToMany] = ACTIONS(1),
    [anon_sym_ManyToOne] = ACTIONS(1),
    [anon_sym_OneToOne] = ACTIONS(1),
    [anon_sym_ManyToMany] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_application] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(84),
    [sym__definition] = STATE(6),
    [sym_entity_declaration] = STATE(6),
    [sym_enum_declaration] = STATE(6),
    [sym_relationship_declaration] = STATE(6),
    [sym_application_declaration] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_entity] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(9),
    [anon_sym_relationship] = ACTIONS(11),
    [anon_sym_application] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    STATE(4), 1,
      sym_field_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(15), 17,
      anon_sym_String,
      anon_sym_Integer,
      anon_sym_Long,
      anon_sym_BigDecimal,
      anon_sym_Float,
      anon_sym_Double,
      anon_sym_Boolean,
      anon_sym_LocalDate,
      anon_sym_ZonedDateTime,
      anon_sym_Instant,
      anon_sym_Duration,
      anon_sym_UUID,
      anon_sym_Blob,
      anon_sym_AnyBlob,
      anon_sym_ImageBlob,
      anon_sym_TextBlob,
      sym_identifier,
  [27] = 10,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      sym_required_validation,
    ACTIONS(23), 1,
      anon_sym_min,
    ACTIONS(25), 1,
      anon_sym_max,
    ACTIONS(27), 1,
      anon_sym_pattern,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 2,
      sym_validation,
      aux_sym_field_declaration_repeat1,
    STATE(14), 3,
      sym_min_validation,
      sym_max_validation,
      sym_pattern_validation,
  [62] = 10,
    ACTIONS(21), 1,
      sym_required_validation,
    ACTIONS(23), 1,
      anon_sym_min,
    ACTIONS(25), 1,
      anon_sym_max,
    ACTIONS(27), 1,
      anon_sym_pattern,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(3), 2,
      sym_validation,
      aux_sym_field_declaration_repeat1,
    STATE(14), 3,
      sym_min_validation,
      sym_max_validation,
      sym_pattern_validation,
  [97] = 9,
    ACTIONS(39), 1,
      sym_required_validation,
    ACTIONS(42), 1,
      anon_sym_min,
    ACTIONS(45), 1,
      anon_sym_max,
    ACTIONS(48), 1,
      anon_sym_pattern,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    STATE(5), 2,
      sym_validation,
      aux_sym_field_declaration_repeat1,
    STATE(14), 3,
      sym_min_validation,
      sym_max_validation,
      sym_pattern_validation,
  [130] = 7,
    ACTIONS(7), 1,
      anon_sym_entity,
    ACTIONS(9), 1,
      anon_sym_enum,
    ACTIONS(11), 1,
      anon_sym_relationship,
    ACTIONS(13), 1,
      anon_sym_application,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 6,
      sym__definition,
      sym_entity_declaration,
      sym_enum_declaration,
      sym_relationship_declaration,
      sym_application_declaration,
      aux_sym_source_file_repeat1,
  [158] = 7,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_entity,
    ACTIONS(60), 1,
      anon_sym_enum,
    ACTIONS(63), 1,
      anon_sym_relationship,
    ACTIONS(66), 1,
      anon_sym_application,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 6,
      sym__definition,
      sym_entity_declaration,
      sym_enum_declaration,
      sym_relationship_declaration,
      sym_application_declaration,
      aux_sym_source_file_repeat1,
  [186] = 8,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      sym_number,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(50), 1,
      sym_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(75), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_string,
      sym_boolean,
  [214] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(81), 5,
      sym_required_validation,
      anon_sym_min,
      anon_sym_max,
      anon_sym_pattern,
      sym_identifier,
  [230] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(85), 5,
      sym_required_validation,
      anon_sym_min,
      anon_sym_max,
      anon_sym_pattern,
      sym_identifier,
  [246] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(87), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(89), 5,
      sym_required_validation,
      anon_sym_min,
      anon_sym_max,
      anon_sym_pattern,
      sym_identifier,
  [262] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(91), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(93), 5,
      sym_required_validation,
      anon_sym_min,
      anon_sym_max,
      anon_sym_pattern,
      sym_identifier,
  [278] = 4,
    ACTIONS(97), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_entity_body,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_relationship,
      anon_sym_application,
  [296] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(99), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(101), 5,
      sym_required_validation,
      anon_sym_min,
      anon_sym_max,
      anon_sym_pattern,
      sym_identifier,
  [312] = 5,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(71), 1,
      sym_relationship_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(24), 2,
      sym_relationship_mapping,
      aux_sym_relationship_declaration_repeat1,
  [330] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_relationship,
      anon_sym_application,
  [342] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_relationship,
      anon_sym_application,
  [354] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_relationship,
      anon_sym_application,
  [366] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_relationship,
      anon_sym_application,
  [378] = 3,
    STATE(72), 1,
      sym_relationship_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(115), 4,
      anon_sym_OneToMany,
      anon_sym_ManyToOne,
      anon_sym_OneToOne,
      anon_sym_ManyToMany,
  [392] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_relationship,
      anon_sym_application,
  [404] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_relationship,
      anon_sym_application,
  [416] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_relationship,
      anon_sym_application,
  [428] = 5,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(71), 1,
      sym_relationship_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(24), 2,
      sym_relationship_mapping,
      aux_sym_relationship_declaration_repeat1,
  [446] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      anon_sym_entity,
      anon_sym_enum,
      anon_sym_relationship,
      anon_sym_application,
  [458] = 4,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(32), 2,
      sym_application_option,
      aux_sym_application_declaration_repeat1,
  [473] = 4,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(34), 2,
      sym_application_option,
      aux_sym_application_declaration_repeat1,
  [488] = 4,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(26), 2,
      sym_application_option,
      aux_sym_application_declaration_repeat1,
  [503] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [514] = 4,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 2,
      sym_field_declaration,
      aux_sym_entity_body_repeat1,
  [529] = 4,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(36), 2,
      sym_field_declaration,
      aux_sym_entity_body_repeat1,
  [544] = 4,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(32), 2,
      sym_application_option,
      aux_sym_application_declaration_repeat1,
  [559] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [570] = 4,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(32), 2,
      sym_application_option,
      aux_sym_application_declaration_repeat1,
  [585] = 3,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [598] = 4,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(36), 2,
      sym_field_declaration,
      aux_sym_entity_body_repeat1,
  [613] = 4,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(71), 1,
      sym_relationship_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(15), 2,
      sym_relationship_mapping,
      aux_sym_relationship_declaration_repeat1,
  [628] = 4,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      aux_sym_string_token1,
    STATE(52), 1,
      aux_sym_string_repeat1,
    ACTIONS(164), 2,
      sym_line_comment,
      sym_block_comment,
  [642] = 4,
    ACTIONS(170), 1,
      anon_sym_SQUOTE,
    ACTIONS(172), 1,
      aux_sym_string_token2,
    STATE(39), 1,
      aux_sym_string_repeat2,
    ACTIONS(164), 2,
      sym_line_comment,
      sym_block_comment,
  [656] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [666] = 4,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [680] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [690] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [702] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [712] = 4,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      aux_sym_string_token1,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(164), 2,
      sym_line_comment,
      sym_block_comment,
  [726] = 4,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    STATE(81), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [740] = 4,
    ACTIONS(166), 1,
      anon_sym_SQUOTE,
    ACTIONS(194), 1,
      aux_sym_string_token2,
    STATE(51), 1,
      aux_sym_string_repeat2,
    ACTIONS(164), 2,
      sym_line_comment,
      sym_block_comment,
  [754] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(196), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [764] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(198), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [774] = 3,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(200), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [786] = 4,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      aux_sym_string_token2,
    STATE(39), 1,
      aux_sym_string_repeat2,
    ACTIONS(164), 2,
      sym_line_comment,
      sym_block_comment,
  [800] = 4,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      aux_sym_string_token1,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(164), 2,
      sym_line_comment,
      sym_block_comment,
  [814] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(210), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [824] = 3,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(212), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [836] = 4,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [850] = 4,
    ACTIONS(221), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 1,
      anon_sym_EQ,
    STATE(43), 1,
      sym_block_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [864] = 4,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_enum_declaration_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [878] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(227), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [887] = 3,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      sym_required_validation,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [898] = 3,
    ACTIONS(233), 1,
      sym_identifier,
    STATE(54), 1,
      sym_relationship_side,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [909] = 3,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 1,
      sym_required_validation,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [920] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(239), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [929] = 3,
    ACTIONS(157), 1,
      anon_sym_to,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [940] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(216), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [949] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [958] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(200), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [967] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(243), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [976] = 2,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [984] = 2,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [992] = 2,
    ACTIONS(249), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1000] = 2,
    ACTIONS(251), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1008] = 2,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1016] = 2,
    ACTIONS(181), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1024] = 2,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1032] = 2,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1040] = 2,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1048] = 2,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1056] = 2,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1064] = 2,
    ACTIONS(265), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1072] = 2,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1080] = 2,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1088] = 2,
    ACTIONS(175), 1,
      anon_sym_to,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1096] = 2,
    ACTIONS(271), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1104] = 2,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1112] = 2,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1120] = 2,
    ACTIONS(277), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1128] = 2,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1136] = 2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1144] = 2,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1152] = 2,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [1160] = 2,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 158,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 230,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 262,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 296,
  [SMALL_STATE(15)] = 312,
  [SMALL_STATE(16)] = 330,
  [SMALL_STATE(17)] = 342,
  [SMALL_STATE(18)] = 354,
  [SMALL_STATE(19)] = 366,
  [SMALL_STATE(20)] = 378,
  [SMALL_STATE(21)] = 392,
  [SMALL_STATE(22)] = 404,
  [SMALL_STATE(23)] = 416,
  [SMALL_STATE(24)] = 428,
  [SMALL_STATE(25)] = 446,
  [SMALL_STATE(26)] = 458,
  [SMALL_STATE(27)] = 473,
  [SMALL_STATE(28)] = 488,
  [SMALL_STATE(29)] = 503,
  [SMALL_STATE(30)] = 514,
  [SMALL_STATE(31)] = 529,
  [SMALL_STATE(32)] = 544,
  [SMALL_STATE(33)] = 559,
  [SMALL_STATE(34)] = 570,
  [SMALL_STATE(35)] = 585,
  [SMALL_STATE(36)] = 598,
  [SMALL_STATE(37)] = 613,
  [SMALL_STATE(38)] = 628,
  [SMALL_STATE(39)] = 642,
  [SMALL_STATE(40)] = 656,
  [SMALL_STATE(41)] = 666,
  [SMALL_STATE(42)] = 680,
  [SMALL_STATE(43)] = 690,
  [SMALL_STATE(44)] = 702,
  [SMALL_STATE(45)] = 712,
  [SMALL_STATE(46)] = 726,
  [SMALL_STATE(47)] = 740,
  [SMALL_STATE(48)] = 754,
  [SMALL_STATE(49)] = 764,
  [SMALL_STATE(50)] = 774,
  [SMALL_STATE(51)] = 786,
  [SMALL_STATE(52)] = 800,
  [SMALL_STATE(53)] = 814,
  [SMALL_STATE(54)] = 824,
  [SMALL_STATE(55)] = 836,
  [SMALL_STATE(56)] = 850,
  [SMALL_STATE(57)] = 864,
  [SMALL_STATE(58)] = 878,
  [SMALL_STATE(59)] = 887,
  [SMALL_STATE(60)] = 898,
  [SMALL_STATE(61)] = 909,
  [SMALL_STATE(62)] = 920,
  [SMALL_STATE(63)] = 929,
  [SMALL_STATE(64)] = 940,
  [SMALL_STATE(65)] = 949,
  [SMALL_STATE(66)] = 958,
  [SMALL_STATE(67)] = 967,
  [SMALL_STATE(68)] = 976,
  [SMALL_STATE(69)] = 984,
  [SMALL_STATE(70)] = 992,
  [SMALL_STATE(71)] = 1000,
  [SMALL_STATE(72)] = 1008,
  [SMALL_STATE(73)] = 1016,
  [SMALL_STATE(74)] = 1024,
  [SMALL_STATE(75)] = 1032,
  [SMALL_STATE(76)] = 1040,
  [SMALL_STATE(77)] = 1048,
  [SMALL_STATE(78)] = 1056,
  [SMALL_STATE(79)] = 1064,
  [SMALL_STATE(80)] = 1072,
  [SMALL_STATE(81)] = 1080,
  [SMALL_STATE(82)] = 1088,
  [SMALL_STATE(83)] = 1096,
  [SMALL_STATE(84)] = 1104,
  [SMALL_STATE(85)] = 1112,
  [SMALL_STATE(86)] = 1120,
  [SMALL_STATE(87)] = 1128,
  [SMALL_STATE(88)] = 1136,
  [SMALL_STATE(89)] = 1144,
  [SMALL_STATE(90)] = 1152,
  [SMALL_STATE(91)] = 1160,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_declaration, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_declaration_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_repeat1, 2), SHIFT_REPEAT(14),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_repeat1, 2), SHIFT_REPEAT(78),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_repeat1, 2), SHIFT_REPEAT(89),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_declaration_repeat1, 2), SHIFT_REPEAT(74),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_declaration_repeat1, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_validation, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_validation, 4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_type, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_type, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_validation, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_max_validation, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min_validation, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_min_validation, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_declaration, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_validation, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_validation, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application_declaration, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application_declaration, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_declaration, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relationship_declaration_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relationship_declaration_repeat1, 2), SHIFT_REPEAT(63),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_declaration, 5),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_application_declaration_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_application_declaration_repeat1, 2), SHIFT_REPEAT(56),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_side, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(2),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(39),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_side, 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_side, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application_option, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(45),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application_option, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_value, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_mapping, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(88),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_mapping, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application_option, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relationship_type, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [273] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jdl(void) {
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
