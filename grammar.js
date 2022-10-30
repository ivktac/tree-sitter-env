module.exports = grammar({
  name: "env",

  extras: ($) => [
    /\s/,
    $.comment,
    /[ \t]+\n*/, // Ignore empty lines
  ],

  rules: {
    source_file: ($) => repeat(seq(choice($.env_variable, $.comment), "\n")),

    env_variable: ($) =>
      seq(
        field("name", $.env_key),
        token.immediate("="),
        optional(field("value", choice($.quoted_string, $.unquoted_string)))
      ),

    env_key: ($) =>
      alias(/[a-zA-Z]([a-zA-Z0-9_]*[a-zA-Z0-9])?/, $.unquoted_string),

    quoted_string: ($) =>
      choice(
        seq(
          '"',
          repeat(
            choice(
              token.immediate(/[^"\n\\\$]+/),
              $.escape_sequence,
              $._expansion
            )
          ),
          '"'
        ),
        seq(
          "'",
          repeat(
            choice(
              token.immediate(/[^"\n\\\$]+/),
              $.escape_sequence,
              $._expansion
            )
          ),
          "'"
        )
      ),

    unquoted_string: ($) =>
      repeat1(
        choice(
          token.immediate(/[^\s\n\"\\\$]+/),
          token.immediate("\\ "),
          $._expansion
        )
      ),

    escape_sequence: ($) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xuU]/,
            /\d{2,3}/,
            /x[0-9a-fA-F]{2,}/,
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/
          )
        )
      ),

    _expansion: ($) => alias($._impl_expansion, $.expansion),

    _impl_expansion: ($) => seq(token.immediate("$"), $._expansion_body),

    _expansion_body: ($) =>
      choice(
        $.variable,
        seq(
          token.immediate("{"),
          alias(token.immediate(/[^\}]+/), $.variable),
          token.immediate("}")
        )
      ),

    variable: ($) => token.immediate(/[a-zA-Z][a-zA-Z0-9_]*/),

    comment: ($) => token(seq("#", /.*/)),
  },
});
