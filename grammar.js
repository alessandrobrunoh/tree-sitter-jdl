module.exports = grammar({
  name: 'jdl',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.entity_declaration,
      $.relationship_declaration,
      $.application_declaration,
      $.enum_declaration
    ),

    // Comments are handled in extras
    line_comment: $ => token(seq('//', /.*/)),

    block_comment: $ => token(seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/'
    )),

    // Entity declaration
    entity_declaration: $ => seq(
      'entity',
      $.identifier,
      optional($.entity_body)
    ),

    entity_body: $ => seq(
      '{',
      repeat($.field_declaration),
      '}'
    ),

    field_declaration: $ => seq(
      $.identifier,
      $.field_type,
      repeat($.validation),
      optional(',')
    ),

    field_type: $ => choice(
      'String',
      'Integer',
      'Long',
      'BigDecimal',
      'Float',
      'Double',
      'Boolean',
      'LocalDate',
      'ZonedDateTime',
      'Instant',
      'Duration',
      'UUID',
      'Blob',
      'AnyBlob',
      'ImageBlob',
      'TextBlob',
      $.identifier // for custom types/enums
    ),

    validation: $ => choice(
      $.required_validation,
      $.min_validation,
      $.max_validation,
      $.pattern_validation
    ),

    required_validation: $ => 'required',
    min_validation: $ => seq('min', '(', $.number, ')'),
    max_validation: $ => seq('max', '(', $.number, ')'),
    pattern_validation: $ => seq('pattern', '(', $.regex, ')'),

    regex: $ => seq('/', /[^\/]+/, '/'),

    // Enum declaration
    enum_declaration: $ => seq(
      'enum',
      $.identifier,
      '{',
      sep1($.identifier, ','),
      '}'
    ),

    // Relationship declaration
    relationship_declaration: $ => seq(
      'relationship',
      $.relationship_type,
      '{',
      repeat1($.relationship_mapping),
      '}'
    ),

    relationship_type: $ => choice(
      'OneToMany',
      'ManyToOne',
      'OneToOne',
      'ManyToMany'
    ),

    relationship_mapping: $ => seq(
      $.relationship_side,
      'to',
      $.relationship_side,
      optional(',')
    ),

    relationship_side: $ => seq(
      $.identifier,
      optional(seq('{', $.identifier, optional($.required_validation), '}'))
    ),

    // Application declaration
    application_declaration: $ => seq(
      'application',
      '{',
      repeat($.application_option),
      '}'
    ),

    application_option: $ => seq(
      $.identifier,
      choice(
        seq('=', $.value),
        $.block_value
      ),
      optional(',')
    ),

    block_value: $ => seq(
      '{',
      repeat($.application_option),
      '}'
    ),

    // Basic types
    value: $ => choice(
      $.string,
      $.number,
      $.boolean,
      $.identifier
    ),

    string: $ => choice(
      seq('"', repeat(/[^"\\]|\\.?/), '"'),
      seq("'", repeat(/[^'\\]|\\.?/), "'")
    ),

    number: $ => /\d+(\.\d+)?/,
    boolean: $ => choice('true', 'false'),
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // Whitespace
    _whitespace: $ => /\s+/
  },

  extras: $ => [
    /\s/,
    $.line_comment,
    $.block_comment
  ]
});

// Helper function for comma-separated lists
function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
