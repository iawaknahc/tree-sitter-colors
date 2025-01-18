/**
 * @file Colors grammar for tree-sitter
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/**
 * @param literal {string}
 * @returns {RegExp}
 */
function css_keyword(literal) {
  return new RegExp(literal, "i");
}

function rgb_legacy_percentage($, functionName) {
  return seq(
    css_keyword(functionName),
    "(",
    field("r", $.css_percentage),
    ",",
    field("g", $.css_percentage),
    ",",
    field("b", $.css_percentage),
    optional(seq(",", field("alpha", $.css_alpha_value))),
    ")",
  );
}

function rgb_legacy_number($, functionName) {
  return seq(
    css_keyword(functionName),
    "(",
    field("r", $.css_number),
    ",",
    field("g", $.css_number),
    ",",
    field("b", $.css_number),
    optional(seq(",", field("alpha", $.css_alpha_value))),
    ")",
  );
}

function rgb_modern($, functionName) {
  return seq(
    css_keyword(functionName),
    "(",
    field("r", choice($.css_number, $.css_percentage, $.css_keyword_none)),
    field("g", choice($.css_number, $.css_percentage, $.css_keyword_none)),
    field("b", choice($.css_number, $.css_percentage, $.css_keyword_none)),
    optional(
      seq("/", field("alpha", choice($.css_alpha_value, $.css_keyword_none))),
    ),
    ")",
  );
}

function hsl_legacy($, functionName) {
  return seq(
    css_keyword(functionName),
    "(",
    field("h", $.css_hue),
    ",",
    field("s", $.css_percentage),
    ",",
    field("l", $.css_percentage),
    optional(seq(",", field("alpha", $.css_alpha_value))),
    ")",
  );
}

function h_modern($, functionName, fieldA, fieldB) {
  return seq(
    css_keyword(functionName),
    "(",
    field("h", choice($.css_hue, $.css_keyword_none)),
    field(fieldA, choice($.css_percentage, $.css_number, $.css_keyword_none)),
    field(fieldB, choice($.css_percentage, $.css_number, $.css_keyword_none)),
    optional(
      seq("/", field("alpha", choice($.css_alpha_value, $.css_keyword_none))),
    ),
    ")",
  );
}

function lab($, functionName) {
  return seq(
    css_keyword(functionName),
    "(",
    field("L", choice($.css_percentage, $.css_number, $.css_keyword_none)),
    field("a", choice($.css_percentage, $.css_number, $.css_keyword_none)),
    field("b", choice($.css_percentage, $.css_number, $.css_keyword_none)),
    optional(
      seq("/", field("alpha", choice($.css_alpha_value, $.css_keyword_none))),
    ),
    ")",
  );
}

function lch($, functionName) {
  return seq(
    css_keyword(functionName),
    "(",
    field("L", choice($.css_percentage, $.css_number, $.css_keyword_none)),
    field("C", choice($.css_percentage, $.css_number, $.css_keyword_none)),
    field("h", choice($.css_hue, $.css_keyword_none)),
    optional(
      seq("/", field("alpha", choice($.css_alpha_value, $.css_keyword_none))),
    ),
    ")",
  );
}

const regexp_number = /[-+]?(?:\d+\.\d+|\d+|\.\d+)(?:[eE][-+]?\d+)?/;

/**
 * @param a {RegExp}
 * @param b {RegExp}
 * @param [flags] {"i"}
 * @returns {RegExp}
 */
function concat_regexp(a, b, flags) {
  return new RegExp("(?:" + a.source + ")" + "(?:" + b.source + ")", flags);
}

module.exports = grammar({
  name: "colors",

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.css_hex_color,
          $.css_named_color,
          $.css_keyword_transparent,
          $.css_function_rgb,
          $.css_function_rgba,
          $.css_function_hsl,
          $.css_function_hsla,
          $.css_function_hwb,
          $.css_function_lab,
          $.css_function_oklab,
          $.css_function_lch,
          $.css_function_oklch,
        ),
      ),

    _css_number: (_) => regexp_number,
    css_number: ($) => $._css_number,
    _css_percentage: (_) => concat_regexp(regexp_number, /%/),
    css_percentage: ($) => $._css_percentage,
    css_alpha_value: ($) => choice($._css_number, $._css_percentage),
    _css_angle: (_) => concat_regexp(regexp_number, /deg|grad|rad|turn/, "i"),
    css_angle: ($) => $._css_angle,
    css_hue: ($) => choice($._css_number, $._css_angle),

    css_function_rgb: ($) =>
      choice($.css_function_rgb_legacy, $.css_function_rgb_modern),
    css_function_rgba: ($) =>
      choice($.css_function_rgba_legacy, $.css_function_rgba_modern),
    css_function_rgb_legacy: ($) =>
      choice(rgb_legacy_percentage($, "rgb"), rgb_legacy_number($, "rgb")),
    css_function_rgba_legacy: ($) =>
      choice(rgb_legacy_percentage($, "rgba"), rgb_legacy_number($, "rgba")),
    css_function_rgb_modern: ($) => rgb_modern($, "rgb"),
    css_function_rgba_modern: ($) => rgb_modern($, "rgba"),

    css_function_hsl: ($) =>
      choice($.css_function_hsl_legacy, $.css_function_hsl_modern),
    css_function_hsl_legacy: ($) => hsl_legacy($, "hsl"),
    css_function_hsl_modern: ($) => h_modern($, "hsl", "s", "l"),

    css_function_hsla: ($) =>
      choice($.css_function_hsla_legacy, $.css_function_hsla_modern),
    css_function_hsla_legacy: ($) => hsl_legacy($, "hsla"),
    css_function_hsla_modern: ($) => h_modern($, "hsla", "s", "l"),

    css_function_hwb: ($) => h_modern($, "hwb", "w", "b"),

    css_function_lab: ($) => lab($, "lab"),
    css_function_oklab: ($) => lab($, "oklab"),

    css_function_lch: ($) => lch($, "lch"),
    css_function_oklch: ($) => lch($, "oklch"),

    css_hex_color: ($) =>
      choice(
        $.css_hex_color_6_digits,
        $.css_hex_color_8_digits,
        $.css_hex_color_3_digits,
        $.css_hex_color_4_digits,
      ),
    css_hex_color_6_digits: (_) => /#[0-9a-f]{6}/i,
    css_hex_color_8_digits: (_) => /#[0-9a-f]{8}/i,
    css_hex_color_3_digits: (_) => /#[0-9a-f]{3}/i,
    css_hex_color_4_digits: (_) => /#[0-9a-f]{4}/i,

    css_named_color: (_) =>
      choice(
        css_keyword("aliceblue"),
        css_keyword("antiquewhite"),
        css_keyword("aqua"),
        css_keyword("aquamarine"),
        css_keyword("azure"),
        css_keyword("beige"),
        css_keyword("bisque"),
        css_keyword("black"),
        css_keyword("blanchedalmond"),
        css_keyword("blue"),
        css_keyword("blueviolet"),
        css_keyword("brown"),
        css_keyword("burlywood"),
        css_keyword("cadetblue"),
        css_keyword("chartreuse"),
        css_keyword("chocolate"),
        css_keyword("coral"),
        css_keyword("cornflowerblue"),
        css_keyword("cornsilk"),
        css_keyword("crimson"),
        css_keyword("cyan"),
        css_keyword("darkblue"),
        css_keyword("darkcyan"),
        css_keyword("darkgoldenrod"),
        css_keyword("darkgray"),
        css_keyword("darkgreen"),
        css_keyword("darkgrey"),
        css_keyword("darkkhaki"),
        css_keyword("darkmagenta"),
        css_keyword("darkolivegreen"),
        css_keyword("darkorange"),
        css_keyword("darkorchid"),
        css_keyword("darkred"),
        css_keyword("darksalmon"),
        css_keyword("darkseagreen"),
        css_keyword("darkslateblue"),
        css_keyword("darkslategray"),
        css_keyword("darkslategrey"),
        css_keyword("darkturquoise"),
        css_keyword("darkviolet"),
        css_keyword("deeppink"),
        css_keyword("deepskyblue"),
        css_keyword("dimgray"),
        css_keyword("dimgrey"),
        css_keyword("dodgerblue"),
        css_keyword("firebrick"),
        css_keyword("floralwhite"),
        css_keyword("forestgreen"),
        css_keyword("fuchsia"),
        css_keyword("gainsboro"),
        css_keyword("ghostwhite"),
        css_keyword("gold"),
        css_keyword("goldenrod"),
        css_keyword("gray"),
        css_keyword("green"),
        css_keyword("greenyellow"),
        css_keyword("grey"),
        css_keyword("honeydew"),
        css_keyword("hotpink"),
        css_keyword("indianred"),
        css_keyword("indigo"),
        css_keyword("ivory"),
        css_keyword("khaki"),
        css_keyword("lavender"),
        css_keyword("lavenderblush"),
        css_keyword("lawngreen"),
        css_keyword("lemonchiffon"),
        css_keyword("lightblue"),
        css_keyword("lightcoral"),
        css_keyword("lightcyan"),
        css_keyword("lightgoldenrodyellow"),
        css_keyword("lightgray"),
        css_keyword("lightgreen"),
        css_keyword("lightgrey"),
        css_keyword("lightpink"),
        css_keyword("lightsalmon"),
        css_keyword("lightseagreen"),
        css_keyword("lightskyblue"),
        css_keyword("lightslategray"),
        css_keyword("lightslategrey"),
        css_keyword("lightsteelblue"),
        css_keyword("lightyellow"),
        css_keyword("lime"),
        css_keyword("limegreen"),
        css_keyword("linen"),
        css_keyword("magenta"),
        css_keyword("maroon"),
        css_keyword("mediumaquamarine"),
        css_keyword("mediumblue"),
        css_keyword("mediumorchid"),
        css_keyword("mediumpurple"),
        css_keyword("mediumseagreen"),
        css_keyword("mediumslateblue"),
        css_keyword("mediumspringgreen"),
        css_keyword("mediumturquoise"),
        css_keyword("mediumvioletred"),
        css_keyword("midnightblue"),
        css_keyword("mintcream"),
        css_keyword("mistyrose"),
        css_keyword("moccasin"),
        css_keyword("navajowhite"),
        css_keyword("navy"),
        css_keyword("oldlace"),
        css_keyword("olive"),
        css_keyword("olivedrab"),
        css_keyword("orange"),
        css_keyword("orangered"),
        css_keyword("orchid"),
        css_keyword("palegoldenrod"),
        css_keyword("palegreen"),
        css_keyword("paleturquoise"),
        css_keyword("palevioletred"),
        css_keyword("papayawhip"),
        css_keyword("peachpuff"),
        css_keyword("peru"),
        css_keyword("pink"),
        css_keyword("plum"),
        css_keyword("powderblue"),
        css_keyword("purple"),
        css_keyword("rebeccapurple"),
        css_keyword("red"),
        css_keyword("rosybrown"),
        css_keyword("royalblue"),
        css_keyword("saddlebrown"),
        css_keyword("salmon"),
        css_keyword("sandybrown"),
        css_keyword("seagreen"),
        css_keyword("seashell"),
        css_keyword("sienna"),
        css_keyword("silver"),
        css_keyword("skyblue"),
        css_keyword("slateblue"),
        css_keyword("slategray"),
        css_keyword("slategrey"),
        css_keyword("snow"),
        css_keyword("springgreen"),
        css_keyword("steelblue"),
        css_keyword("tan"),
        css_keyword("teal"),
        css_keyword("thistle"),
        css_keyword("tomato"),
        css_keyword("turquoise"),
        css_keyword("violet"),
        css_keyword("wheat"),
        css_keyword("white"),
        css_keyword("whitesmoke"),
        css_keyword("yellow"),
        css_keyword("yellowgreen"),
      ),
    css_keyword_transparent: (_) => css_keyword("transparent"),
    css_keyword_none: (_) => css_keyword("none"),
  },
});
