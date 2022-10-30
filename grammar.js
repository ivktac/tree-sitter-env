module.exports = grammar({
  name: "env",

  extras: ($) => [
    /\s/,
    $.comment,
    /[ \t]+\n*/, // Ignore empty lines
  ],

  rules: {
    document: ($) => seq(/[\n]*/, repeat(seq($.variable, /[\n]+/))),

    variable: ($) =>
      seq(
        field("name", $.variable_name),
        "=",
        optional(field("value", $.variable_value))
      ),

    variable_name: ($) => /[^#=\s\[\]]+/,
    variable_value: ($) => /[^#\n]+/,

    comment: ($) => token(seq("#", /.*/)),
  },
});
