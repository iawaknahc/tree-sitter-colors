/**
 * @file Colors grammar for tree-sitter
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

function rgb_legacy_percentage($, functionName) {
  return seq(
    functionName,
    "(",
    field("r", $.css_percentage),
    ",",
    field("g", $.css_percentage),
    ",",
    field("b", $.css_percentage),
    optional(seq(",", field("a", $.css_alpha_value))),
    ")",
  );
}

function rgb_legacy_number($, functionName) {
  return seq(
    functionName,
    "(",
    field("r", $.css_number),
    ",",
    field("g", $.css_number),
    ",",
    field("b", $.css_number),
    optional(seq(",", field("a", $.css_alpha_value))),
    ")",
  );
}

function rgb_modern($, functionName) {
  return seq(
    functionName,
    "(",
    field("r", choice($.css_number, $.css_percentage, $.css_keyword_none)),
    field("g", choice($.css_number, $.css_percentage, $.css_keyword_none)),
    field("b", choice($.css_number, $.css_percentage, $.css_keyword_none)),
    optional(
      seq("/", field("a", choice($.css_alpha_value, $.css_keyword_none))),
    ),
    ")",
  );
}

function hsl_legacy($, functionName) {
  return seq(
    functionName,
    "(",
    field("h", $.css_hue),
    ",",
    field("s", $.css_percentage),
    ",",
    field("l", $.css_percentage),
    optional(seq(",", field("a", $.css_alpha_value))),
    ")",
  );
}

function hsl_modern($, functionName) {
  return seq(
    functionName,
    "(",
    field("h", choice($.css_hue, $.css_keyword_none)),
    field("s", choice($.css_percentage, $.css_number, $.css_keyword_none)),
    field("l", choice($.css_percentage, $.css_number, $.css_keyword_none)),
    optional(
      seq("/", field("a", choice($.css_alpha_value, $.css_keyword_none))),
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
    css_function_hsl_modern: ($) => hsl_modern($, "hsl"),

    css_function_hsla: ($) =>
      choice($.css_function_hsla_legacy, $.css_function_hsla_modern),
    css_function_hsla_legacy: ($) => hsl_legacy($, "hsla"),
    css_function_hsla_modern: ($) => hsl_modern($, "hsla"),

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
        /aliceblue/i,
        /antiquewhite/i,
        /aqua/i,
        /aquamarine/i,
        /azure/i,
        /beige/i,
        /bisque/i,
        /black/i,
        /blanchedalmond/i,
        /blue/i,
        /blueviolet/i,
        /brown/i,
        /burlywood/i,
        /cadetblue/i,
        /chartreuse/i,
        /chocolate/i,
        /coral/i,
        /cornflowerblue/i,
        /cornsilk/i,
        /crimson/i,
        /cyan/i,
        /darkblue/i,
        /darkcyan/i,
        /darkgoldenrod/i,
        /darkgray/i,
        /darkgreen/i,
        /darkgrey/i,
        /darkkhaki/i,
        /darkmagenta/i,
        /darkolivegreen/i,
        /darkorange/i,
        /darkorchid/i,
        /darkred/i,
        /darksalmon/i,
        /darkseagreen/i,
        /darkslateblue/i,
        /darkslategray/i,
        /darkslategrey/i,
        /darkturquoise/i,
        /darkviolet/i,
        /deeppink/i,
        /deepskyblue/i,
        /dimgray/i,
        /dimgrey/i,
        /dodgerblue/i,
        /firebrick/i,
        /floralwhite/i,
        /forestgreen/i,
        /fuchsia/i,
        /gainsboro/i,
        /ghostwhite/i,
        /gold/i,
        /goldenrod/i,
        /gray/i,
        /green/i,
        /greenyellow/i,
        /grey/i,
        /honeydew/i,
        /hotpink/i,
        /indianred/i,
        /indigo/i,
        /ivory/i,
        /khaki/i,
        /lavender/i,
        /lavenderblush/i,
        /lawngreen/i,
        /lemonchiffon/i,
        /lightblue/i,
        /lightcoral/i,
        /lightcyan/i,
        /lightgoldenrodyellow/i,
        /lightgray/i,
        /lightgreen/i,
        /lightgrey/i,
        /lightpink/i,
        /lightsalmon/i,
        /lightseagreen/i,
        /lightskyblue/i,
        /lightslategray/i,
        /lightslategrey/i,
        /lightsteelblue/i,
        /lightyellow/i,
        /lime/i,
        /limegreen/i,
        /linen/i,
        /magenta/i,
        /maroon/i,
        /mediumaquamarine/i,
        /mediumblue/i,
        /mediumorchid/i,
        /mediumpurple/i,
        /mediumseagreen/i,
        /mediumslateblue/i,
        /mediumspringgreen/i,
        /mediumturquoise/i,
        /mediumvioletred/i,
        /midnightblue/i,
        /mintcream/i,
        /mistyrose/i,
        /moccasin/i,
        /navajowhite/i,
        /navy/i,
        /oldlace/i,
        /olive/i,
        /olivedrab/i,
        /orange/i,
        /orangered/i,
        /orchid/i,
        /palegoldenrod/i,
        /palegreen/i,
        /paleturquoise/i,
        /palevioletred/i,
        /papayawhip/i,
        /peachpuff/i,
        /peru/i,
        /pink/i,
        /plum/i,
        /powderblue/i,
        /purple/i,
        /rebeccapurple/i,
        /red/i,
        /rosybrown/i,
        /royalblue/i,
        /saddlebrown/i,
        /salmon/i,
        /sandybrown/i,
        /seagreen/i,
        /seashell/i,
        /sienna/i,
        /silver/i,
        /skyblue/i,
        /slateblue/i,
        /slategray/i,
        /slategrey/i,
        /snow/i,
        /springgreen/i,
        /steelblue/i,
        /tan/i,
        /teal/i,
        /thistle/i,
        /tomato/i,
        /turquoise/i,
        /violet/i,
        /wheat/i,
        /white/i,
        /whitesmoke/i,
        /yellow/i,
        /yellowgreen/i,
      ),
    css_keyword_transparent: (_) => /transparent/i,
    css_keyword_none: (_) => /none/i,
  },
});
