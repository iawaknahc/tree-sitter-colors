/**
 * @file Colors grammar for tree-sitter
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "colors",

  rules: {
    source_file: ($) => repeat(choice($.css_hex_color, $.css_named_color)),
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
  },
});
