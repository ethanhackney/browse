/* AUTO-GENERATED */

%{
#include "html.h"
#include <stdbool.h>

/* are we in a tag? */
static bool in_open_tag = false;
%}

%option case-insensitive

%%
<<EOF>> {
        if (in_open_tag)
                return HTML_TT_ERR_TAG_UNTERM;

        return 0;
}
"</a>" { return  HTML_TT_TAG_A_CLOSE; }
"</abbr>" { return  HTML_TT_TAG_ABBR_CLOSE; }
"</acronym>" { return  HTML_TT_TAG_ACRONYM_CLOSE; }
"</address>" { return  HTML_TT_TAG_ADDRESS_CLOSE; }
"</applet>" { return  HTML_TT_TAG_APPLET_CLOSE; }
"</area>" { return  HTML_TT_TAG_AREA_CLOSE; }
"</aside>" { return  HTML_TT_TAG_ASIDE_CLOSE; }
"</audio>" { return  HTML_TT_TAG_AUDIO_CLOSE; }
"</b>" { return  HTML_TT_TAG_B_CLOSE; }
"</base>" { return  HTML_TT_TAG_BASE_CLOSE; }
"</basefont>" { return  HTML_TT_TAG_BASEFONT_CLOSE; }
"</bdi>" { return  HTML_TT_TAG_BDI_CLOSE; }
"</bdo>" { return  HTML_TT_TAG_BDO_CLOSE; }
"</big>" { return  HTML_TT_TAG_BIG_CLOSE; }
"</blockquote>" { return  HTML_TT_TAG_BLOCKQUOTE_CLOSE; }
"</body>" { return  HTML_TT_TAG_BODY_CLOSE; }
"</br>" { return  HTML_TT_TAG_BR_CLOSE; }
"</button>" { return  HTML_TT_TAG_BUTTON_CLOSE; }
"</canvas>" { return  HTML_TT_TAG_CANVAS_CLOSE; }
"</caption>" { return  HTML_TT_TAG_CAPTION_CLOSE; }
"</center>" { return  HTML_TT_TAG_CENTER_CLOSE; }
"</cite>" { return  HTML_TT_TAG_CITE_CLOSE; }
"</code>" { return  HTML_TT_TAG_CODE_CLOSE; }
"</col>" { return  HTML_TT_TAG_COL_CLOSE; }
"</colgroup>" { return  HTML_TT_TAG_COLGROUP_CLOSE; }
"</data>" { return  HTML_TT_TAG_DATA_CLOSE; }
"</datalist>" { return  HTML_TT_TAG_DATALIST_CLOSE; }
"</dd>" { return  HTML_TT_TAG_DD_CLOSE; }
"</del>" { return  HTML_TT_TAG_DEL_CLOSE; }
"</details>" { return  HTML_TT_TAG_DETAILS_CLOSE; }
"</dfn>" { return  HTML_TT_TAG_DFN_CLOSE; }
"</dialog>" { return  HTML_TT_TAG_DIALOG_CLOSE; }
"</dir>" { return  HTML_TT_TAG_DIR_CLOSE; }
"</div>" { return  HTML_TT_TAG_DIV_CLOSE; }
"</dl>" { return  HTML_TT_TAG_DL_CLOSE; }
"</dt>" { return  HTML_TT_TAG_DT_CLOSE; }
"</em>" { return  HTML_TT_TAG_EM_CLOSE; }
"</embed>" { return  HTML_TT_TAG_EMBED_CLOSE; }
"</fieldset>" { return  HTML_TT_TAG_FIELDSET_CLOSE; }
"</figcaption>" { return  HTML_TT_TAG_FIGCAPTION_CLOSE; }
"</figure>" { return  HTML_TT_TAG_FIGURE_CLOSE; }
"</font>" { return  HTML_TT_TAG_FONT_CLOSE; }
"</footer>" { return  HTML_TT_TAG_FOOTER_CLOSE; }
"</form>" { return  HTML_TT_TAG_FORM_CLOSE; }
"</frame>" { return  HTML_TT_TAG_FRAME_CLOSE; }
"</frameset>" { return  HTML_TT_TAG_FRAMESET_CLOSE; }
"</h1>" { return  HTML_TT_TAG_H1_CLOSE; }
"</h2>" { return  HTML_TT_TAG_H2_CLOSE; }
"</h3>" { return  HTML_TT_TAG_H3_CLOSE; }
"</h4>" { return  HTML_TT_TAG_H4_CLOSE; }
"</h5>" { return  HTML_TT_TAG_H5_CLOSE; }
"</h6>" { return  HTML_TT_TAG_H6_CLOSE; }
"</head>" { return  HTML_TT_TAG_HEAD_CLOSE; }
"</header>" { return  HTML_TT_TAG_HEADER_CLOSE; }
"</hgroup>" { return  HTML_TT_TAG_HGROUP_CLOSE; }
"</hr>" { return  HTML_TT_TAG_HR_CLOSE; }
"</html>" { return  HTML_TT_TAG_HTML_CLOSE; }
"</i>" { return  HTML_TT_TAG_I_CLOSE; }
"</iframe>" { return  HTML_TT_TAG_IFRAME_CLOSE; }
"</img>" { return  HTML_TT_TAG_IMG_CLOSE; }
"</input>" { return  HTML_TT_TAG_INPUT_CLOSE; }
"</ins>" { return  HTML_TT_TAG_INS_CLOSE; }
"</kbd>" { return  HTML_TT_TAG_KBD_CLOSE; }
"</label>" { return  HTML_TT_TAG_LABEL_CLOSE; }
"</legend>" { return  HTML_TT_TAG_LEGEND_CLOSE; }
"</li>" { return  HTML_TT_TAG_LI_CLOSE; }
"</link>" { return  HTML_TT_TAG_LINK_CLOSE; }
"</main>" { return  HTML_TT_TAG_MAIN_CLOSE; }
"</map>" { return  HTML_TT_TAG_MAP_CLOSE; }
"</mark>" { return  HTML_TT_TAG_MARK_CLOSE; }
"</menu>" { return  HTML_TT_TAG_MENU_CLOSE; }
"</meta>" { return  HTML_TT_TAG_META_CLOSE; }
"</meter>" { return  HTML_TT_TAG_METER_CLOSE; }
"</nav>" { return  HTML_TT_TAG_NAV_CLOSE; }
"</noframes>" { return  HTML_TT_TAG_NOFRAMES_CLOSE; }
"</noscript>" { return  HTML_TT_TAG_NOSCRIPT_CLOSE; }
"</object>" { return  HTML_TT_TAG_OBJECT_CLOSE; }
"</ol>" { return  HTML_TT_TAG_OL_CLOSE; }
"</optgroup>" { return  HTML_TT_TAG_OPTGROUP_CLOSE; }
"</option>" { return  HTML_TT_TAG_OPTION_CLOSE; }
"</output>" { return  HTML_TT_TAG_OUTPUT_CLOSE; }
"</p>" { return  HTML_TT_TAG_P_CLOSE; }
"</param>" { return  HTML_TT_TAG_PARAM_CLOSE; }
"</picture>" { return  HTML_TT_TAG_PICTURE_CLOSE; }
"</pre>" { return  HTML_TT_TAG_PRE_CLOSE; }
"</progress>" { return  HTML_TT_TAG_PROGRESS_CLOSE; }
"</q>" { return  HTML_TT_TAG_Q_CLOSE; }
"</rp>" { return  HTML_TT_TAG_RP_CLOSE; }
"</rt>" { return  HTML_TT_TAG_RT_CLOSE; }
"</ruby>" { return  HTML_TT_TAG_RUBY_CLOSE; }
"</s>" { return  HTML_TT_TAG_S_CLOSE; }
"</samp>" { return  HTML_TT_TAG_SAMP_CLOSE; }
"</script>" { return  HTML_TT_TAG_SCRIPT_CLOSE; }
"</search>" { return  HTML_TT_TAG_SEARCH_CLOSE; }
"</section>" { return  HTML_TT_TAG_SECTION_CLOSE; }
"</select>" { return  HTML_TT_TAG_SELECT_CLOSE; }
"</small>" { return  HTML_TT_TAG_SMALL_CLOSE; }
"</source>" { return  HTML_TT_TAG_SOURCE_CLOSE; }
"</span>" { return  HTML_TT_TAG_SPAN_CLOSE; }
"</strike>" { return  HTML_TT_TAG_STRIKE_CLOSE; }
"</strong>" { return  HTML_TT_TAG_STRONG_CLOSE; }
"</style>" { return  HTML_TT_TAG_STYLE_CLOSE; }
"</sub>" { return  HTML_TT_TAG_SUB_CLOSE; }
"</summary>" { return  HTML_TT_TAG_SUMMARY_CLOSE; }
"</sup>" { return  HTML_TT_TAG_SUP_CLOSE; }
"</svg>" { return  HTML_TT_TAG_SVG_CLOSE; }
"</table>" { return  HTML_TT_TAG_TABLE_CLOSE; }
"</tbody>" { return  HTML_TT_TAG_TBODY_CLOSE; }
"</td>" { return  HTML_TT_TAG_TD_CLOSE; }
"</template>" { return  HTML_TT_TAG_TEMPLATE_CLOSE; }
"</textarea>" { return  HTML_TT_TAG_TEXTAREA_CLOSE; }
"</tfoot>" { return  HTML_TT_TAG_TFOOT_CLOSE; }
"</th>" { return  HTML_TT_TAG_TH_CLOSE; }
"</thead>" { return  HTML_TT_TAG_THEAD_CLOSE; }
"</time>" { return  HTML_TT_TAG_TIME_CLOSE; }
"</title>" { return  HTML_TT_TAG_TITLE_CLOSE; }
"</tr>" { return  HTML_TT_TAG_TR_CLOSE; }
"</track>" { return  HTML_TT_TAG_TRACK_CLOSE; }
"</tt>" { return  HTML_TT_TAG_TT_CLOSE; }
"</u>" { return  HTML_TT_TAG_U_CLOSE; }
"</ul>" { return  HTML_TT_TAG_UL_CLOSE; }
"</var>" { return  HTML_TT_TAG_VAR_CLOSE; }
"</video>" { return  HTML_TT_TAG_VIDEO_CLOSE; }
"</wbr>" { return  HTML_TT_TAG_WBR_CLOSE; }
"<!--" { return HTML_TT_TAG_COMMENT_OPEN; }
"<!DOCTYPE" {
        in_open_tag = true;
        return HTML_TT_TAG_DOCTYPE;
}
"<a" {
        in_open_tag = true;
        return HTML_TT_TAG_A_OPEN;
}
"<abbr" {
        in_open_tag = true;
        return HTML_TT_TAG_ABBR_OPEN;
}
"<acronym" {
        in_open_tag = true;
        return HTML_TT_TAG_ACRONYM_OPEN;
}
"<address" {
        in_open_tag = true;
        return HTML_TT_TAG_ADDRESS_OPEN;
}
"<applet" {
        in_open_tag = true;
        return HTML_TT_TAG_APPLET_OPEN;
}
"<area" {
        in_open_tag = true;
        return HTML_TT_TAG_AREA_OPEN;
}
"<aside" {
        in_open_tag = true;
        return HTML_TT_TAG_ASIDE_OPEN;
}
"<audio" {
        in_open_tag = true;
        return HTML_TT_TAG_AUDIO_OPEN;
}
"<b" {
        in_open_tag = true;
        return HTML_TT_TAG_B_OPEN;
}
"<base" {
        in_open_tag = true;
        return HTML_TT_TAG_BASE_OPEN;
}
"<basefont" {
        in_open_tag = true;
        return HTML_TT_TAG_BASEFONT_OPEN;
}
"<bdi" {
        in_open_tag = true;
        return HTML_TT_TAG_BDI_OPEN;
}
"<bdo" {
        in_open_tag = true;
        return HTML_TT_TAG_BDO_OPEN;
}
"<big" {
        in_open_tag = true;
        return HTML_TT_TAG_BIG_OPEN;
}
"<blockquote" {
        in_open_tag = true;
        return HTML_TT_TAG_BLOCKQUOTE_OPEN;
}
"<body" {
        in_open_tag = true;
        return HTML_TT_TAG_BODY_OPEN;
}
"<br" {
        in_open_tag = true;
        return HTML_TT_TAG_BR_OPEN;
}
"<button" {
        in_open_tag = true;
        return HTML_TT_TAG_BUTTON_OPEN;
}
"<canvas" {
        in_open_tag = true;
        return HTML_TT_TAG_CANVAS_OPEN;
}
"<caption" {
        in_open_tag = true;
        return HTML_TT_TAG_CAPTION_OPEN;
}
"<center" {
        in_open_tag = true;
        return HTML_TT_TAG_CENTER_OPEN;
}
"<cite" {
        in_open_tag = true;
        return HTML_TT_TAG_CITE_OPEN;
}
"<code" {
        in_open_tag = true;
        return HTML_TT_TAG_CODE_OPEN;
}
"<col" {
        in_open_tag = true;
        return HTML_TT_TAG_COL_OPEN;
}
"<colgroup" {
        in_open_tag = true;
        return HTML_TT_TAG_COLGROUP_OPEN;
}
"<data" {
        in_open_tag = true;
        return HTML_TT_TAG_DATA_OPEN;
}
"<datalist" {
        in_open_tag = true;
        return HTML_TT_TAG_DATALIST_OPEN;
}
"<dd" {
        in_open_tag = true;
        return HTML_TT_TAG_DD_OPEN;
}
"<del" {
        in_open_tag = true;
        return HTML_TT_TAG_DEL_OPEN;
}
"<details" {
        in_open_tag = true;
        return HTML_TT_TAG_DETAILS_OPEN;
}
"<dfn" {
        in_open_tag = true;
        return HTML_TT_TAG_DFN_OPEN;
}
"<dialog" {
        in_open_tag = true;
        return HTML_TT_TAG_DIALOG_OPEN;
}
"<dir" {
        in_open_tag = true;
        return HTML_TT_TAG_DIR_OPEN;
}
"<div" {
        in_open_tag = true;
        return HTML_TT_TAG_DIV_OPEN;
}
"<dl" {
        in_open_tag = true;
        return HTML_TT_TAG_DL_OPEN;
}
"<dt" {
        in_open_tag = true;
        return HTML_TT_TAG_DT_OPEN;
}
"<em" {
        in_open_tag = true;
        return HTML_TT_TAG_EM_OPEN;
}
"<embed" {
        in_open_tag = true;
        return HTML_TT_TAG_EMBED_OPEN;
}
"<fieldset" {
        in_open_tag = true;
        return HTML_TT_TAG_FIELDSET_OPEN;
}
"<figcaption" {
        in_open_tag = true;
        return HTML_TT_TAG_FIGCAPTION_OPEN;
}
"<figure" {
        in_open_tag = true;
        return HTML_TT_TAG_FIGURE_OPEN;
}
"<font" {
        in_open_tag = true;
        return HTML_TT_TAG_FONT_OPEN;
}
"<footer" {
        in_open_tag = true;
        return HTML_TT_TAG_FOOTER_OPEN;
}
"<form" {
        in_open_tag = true;
        return HTML_TT_TAG_FORM_OPEN;
}
"<frame" {
        in_open_tag = true;
        return HTML_TT_TAG_FRAME_OPEN;
}
"<frameset" {
        in_open_tag = true;
        return HTML_TT_TAG_FRAMESET_OPEN;
}
"<h1" {
        in_open_tag = true;
        return HTML_TT_TAG_H1_OPEN;
}
"<h2" {
        in_open_tag = true;
        return HTML_TT_TAG_H2_OPEN;
}
"<h3" {
        in_open_tag = true;
        return HTML_TT_TAG_H3_OPEN;
}
"<h4" {
        in_open_tag = true;
        return HTML_TT_TAG_H4_OPEN;
}
"<h5" {
        in_open_tag = true;
        return HTML_TT_TAG_H5_OPEN;
}
"<h6" {
        in_open_tag = true;
        return HTML_TT_TAG_H6_OPEN;
}
"<head" {
        in_open_tag = true;
        return HTML_TT_TAG_HEAD_OPEN;
}
"<header" {
        in_open_tag = true;
        return HTML_TT_TAG_HEADER_OPEN;
}
"<hgroup" {
        in_open_tag = true;
        return HTML_TT_TAG_HGROUP_OPEN;
}
"<hr" {
        in_open_tag = true;
        return HTML_TT_TAG_HR_OPEN;
}
"<html" {
        in_open_tag = true;
        return HTML_TT_TAG_HTML_OPEN;
}
"<i" {
        in_open_tag = true;
        return HTML_TT_TAG_I_OPEN;
}
"<iframe" {
        in_open_tag = true;
        return HTML_TT_TAG_IFRAME_OPEN;
}
"<img" {
        in_open_tag = true;
        return HTML_TT_TAG_IMG_OPEN;
}
"<input" {
        in_open_tag = true;
        return HTML_TT_TAG_INPUT_OPEN;
}
"<ins" {
        in_open_tag = true;
        return HTML_TT_TAG_INS_OPEN;
}
"<kbd" {
        in_open_tag = true;
        return HTML_TT_TAG_KBD_OPEN;
}
"<label" {
        in_open_tag = true;
        return HTML_TT_TAG_LABEL_OPEN;
}
"<legend" {
        in_open_tag = true;
        return HTML_TT_TAG_LEGEND_OPEN;
}
"<li" {
        in_open_tag = true;
        return HTML_TT_TAG_LI_OPEN;
}
"<link" {
        in_open_tag = true;
        return HTML_TT_TAG_LINK_OPEN;
}
"<main" {
        in_open_tag = true;
        return HTML_TT_TAG_MAIN_OPEN;
}
"<map" {
        in_open_tag = true;
        return HTML_TT_TAG_MAP_OPEN;
}
"<mark" {
        in_open_tag = true;
        return HTML_TT_TAG_MARK_OPEN;
}
"<menu" {
        in_open_tag = true;
        return HTML_TT_TAG_MENU_OPEN;
}
"<meta" {
        in_open_tag = true;
        return HTML_TT_TAG_META_OPEN;
}
"<meter" {
        in_open_tag = true;
        return HTML_TT_TAG_METER_OPEN;
}
"<nav" {
        in_open_tag = true;
        return HTML_TT_TAG_NAV_OPEN;
}
"<noframes" {
        in_open_tag = true;
        return HTML_TT_TAG_NOFRAMES_OPEN;
}
"<noscript" {
        in_open_tag = true;
        return HTML_TT_TAG_NOSCRIPT_OPEN;
}
"<object" {
        in_open_tag = true;
        return HTML_TT_TAG_OBJECT_OPEN;
}
"<ol" {
        in_open_tag = true;
        return HTML_TT_TAG_OL_OPEN;
}
"<optgroup" {
        in_open_tag = true;
        return HTML_TT_TAG_OPTGROUP_OPEN;
}
"<option" {
        in_open_tag = true;
        return HTML_TT_TAG_OPTION_OPEN;
}
"<output" {
        in_open_tag = true;
        return HTML_TT_TAG_OUTPUT_OPEN;
}
"<p" {
        in_open_tag = true;
        return HTML_TT_TAG_P_OPEN;
}
"<param" {
        in_open_tag = true;
        return HTML_TT_TAG_PARAM_OPEN;
}
"<picture" {
        in_open_tag = true;
        return HTML_TT_TAG_PICTURE_OPEN;
}
"<pre" {
        in_open_tag = true;
        return HTML_TT_TAG_PRE_OPEN;
}
"<progress" {
        in_open_tag = true;
        return HTML_TT_TAG_PROGRESS_OPEN;
}
"<q" {
        in_open_tag = true;
        return HTML_TT_TAG_Q_OPEN;
}
"<rp" {
        in_open_tag = true;
        return HTML_TT_TAG_RP_OPEN;
}
"<rt" {
        in_open_tag = true;
        return HTML_TT_TAG_RT_OPEN;
}
"<ruby" {
        in_open_tag = true;
        return HTML_TT_TAG_RUBY_OPEN;
}
"<s" {
        in_open_tag = true;
        return HTML_TT_TAG_S_OPEN;
}
"<samp" {
        in_open_tag = true;
        return HTML_TT_TAG_SAMP_OPEN;
}
"<script" {
        in_open_tag = true;
        return HTML_TT_TAG_SCRIPT_OPEN;
}
"<search" {
        in_open_tag = true;
        return HTML_TT_TAG_SEARCH_OPEN;
}
"<section" {
        in_open_tag = true;
        return HTML_TT_TAG_SECTION_OPEN;
}
"<select" {
        in_open_tag = true;
        return HTML_TT_TAG_SELECT_OPEN;
}
"<small" {
        in_open_tag = true;
        return HTML_TT_TAG_SMALL_OPEN;
}
"<source" {
        in_open_tag = true;
        return HTML_TT_TAG_SOURCE_OPEN;
}
"<span" {
        in_open_tag = true;
        return HTML_TT_TAG_SPAN_OPEN;
}
"<strike" {
        in_open_tag = true;
        return HTML_TT_TAG_STRIKE_OPEN;
}
"<strong" {
        in_open_tag = true;
        return HTML_TT_TAG_STRONG_OPEN;
}
"<style" {
        in_open_tag = true;
        return HTML_TT_TAG_STYLE_OPEN;
}
"<sub" {
        in_open_tag = true;
        return HTML_TT_TAG_SUB_OPEN;
}
"<summary" {
        in_open_tag = true;
        return HTML_TT_TAG_SUMMARY_OPEN;
}
"<sup" {
        in_open_tag = true;
        return HTML_TT_TAG_SUP_OPEN;
}
"<svg" {
        in_open_tag = true;
        return HTML_TT_TAG_SVG_OPEN;
}
"<table" {
        in_open_tag = true;
        return HTML_TT_TAG_TABLE_OPEN;
}
"<tbody" {
        in_open_tag = true;
        return HTML_TT_TAG_TBODY_OPEN;
}
"<td" {
        in_open_tag = true;
        return HTML_TT_TAG_TD_OPEN;
}
"<template" {
        in_open_tag = true;
        return HTML_TT_TAG_TEMPLATE_OPEN;
}
"<textarea" {
        in_open_tag = true;
        return HTML_TT_TAG_TEXTAREA_OPEN;
}
"<tfoot" {
        in_open_tag = true;
        return HTML_TT_TAG_TFOOT_OPEN;
}
"<th" {
        in_open_tag = true;
        return HTML_TT_TAG_TH_OPEN;
}
"<thead" {
        in_open_tag = true;
        return HTML_TT_TAG_THEAD_OPEN;
}
"<time" {
        in_open_tag = true;
        return HTML_TT_TAG_TIME_OPEN;
}
"<title" {
        in_open_tag = true;
        return HTML_TT_TAG_TITLE_OPEN;
}
"<tr" {
        in_open_tag = true;
        return HTML_TT_TAG_TR_OPEN;
}
"<track" {
        in_open_tag = true;
        return HTML_TT_TAG_TRACK_OPEN;
}
"<tt" {
        in_open_tag = true;
        return HTML_TT_TAG_TT_OPEN;
}
"<u" {
        in_open_tag = true;
        return HTML_TT_TAG_U_OPEN;
}
"<ul" {
        in_open_tag = true;
        return HTML_TT_TAG_UL_OPEN;
}
"<var" {
        in_open_tag = true;
        return HTML_TT_TAG_VAR_OPEN;
}
"<video" {
        in_open_tag = true;
        return HTML_TT_TAG_VIDEO_OPEN;
}
"<wbr" {
        in_open_tag = true;
        return HTML_TT_TAG_WBR_OPEN;
}
"accept" { return HTML_TT_ATTR_ACCEPT; }
"accept-charset" { return HTML_TT_ATTR_ACCEPT_CHARSET; }
"accesskey" { return HTML_TT_ATTR_ACCESSKEY; }
"action" { return HTML_TT_ATTR_ACTION; }
"allow" { return HTML_TT_ATTR_ALLOW; }
"alt" { return HTML_TT_ATTR_ALT; }
"as" { return HTML_TT_ATTR_AS; }
"async" { return HTML_TT_ATTR_ASYNC; }
"autocapitalize" { return HTML_TT_ATTR_AUTOCAPITALIZE; }
"autocomplete" { return HTML_TT_ATTR_AUTOCOMPLETE; }
"autoplay" { return HTML_TT_ATTR_AUTOPLAY; }
"background" { return HTML_TT_ATTR_BACKGROUND; }
"bgcolor" { return HTML_TT_ATTR_BGCOLOR; }
"border" { return HTML_TT_ATTR_BORDER; }
"capture" { return HTML_TT_ATTR_CAPTURE; }
"charset" { return HTML_TT_ATTR_CHARSET; }
"checked" { return HTML_TT_ATTR_CHECKED; }
"cite" { return HTML_TT_ATTR_CITE; }
"class" { return HTML_TT_ATTR_CLASS; }
"color" { return HTML_TT_ATTR_COLOR; }
"cols" { return HTML_TT_ATTR_COLS; }
"colspan" { return HTML_TT_ATTR_COLSPAN; }
"content" { return HTML_TT_ATTR_CONTENT; }
"contenteditable" { return HTML_TT_ATTR_CONTENTEDITABLE; }
"controls" { return HTML_TT_ATTR_CONTROLS; }
"coords" { return HTML_TT_ATTR_COORDS; }
"crossorigin" { return HTML_TT_ATTR_CROSSORIGIN; }
"csp" { return HTML_TT_ATTR_CSP; }
"data" { return HTML_TT_ATTR_DATA; }
"datetime" { return HTML_TT_ATTR_DATETIME; }
"decoding" { return HTML_TT_ATTR_DECODING; }
"default" { return HTML_TT_ATTR_DEFAULT; }
"defer" { return HTML_TT_ATTR_DEFER; }
"dirname" { return HTML_TT_ATTR_DIRNAME; }
"disabled" { return HTML_TT_ATTR_DISABLED; }
"download" { return HTML_TT_ATTR_DOWNLOAD; }
"draggable" { return HTML_TT_ATTR_DRAGGABLE; }
"enctype" { return HTML_TT_ATTR_ENCTYPE; }
"enterkeyhint" { return HTML_TT_ATTR_ENTERKEYHINT; }
"elementtiming" { return HTML_TT_ATTR_ELEMENTTIMING; }
"for" { return HTML_TT_ATTR_FOR; }
"form" { return HTML_TT_ATTR_FORM; }
"formaction" { return HTML_TT_ATTR_FORMACTION; }
"formenctype" { return HTML_TT_ATTR_FORMENCTYPE; }
"formmethod" { return HTML_TT_ATTR_FORMMETHOD; }
"formnovalidate" { return HTML_TT_ATTR_FORMNOVALIDATE; }
"formtarget" { return HTML_TT_ATTR_FORMTARGET; }
"headers" { return HTML_TT_ATTR_HEADERS; }
"height" { return HTML_TT_ATTR_HEIGHT; }
"hidden" { return HTML_TT_ATTR_HIDDEN; }
"high" { return HTML_TT_ATTR_HIGH; }
"href" { return HTML_TT_ATTR_HREF; }
"hreflang" { return HTML_TT_ATTR_HREFLANG; }
"http-equiv" { return HTML_TT_ATTR_HTTP_EQUIV; }
"id" { return HTML_TT_ATTR_ID; }
"integrity" { return HTML_TT_ATTR_INTEGRITY; }
"intrinsicsize" { return HTML_TT_ATTR_INTRINSICSIZE; }
"inputmode" { return HTML_TT_ATTR_INPUTMODE; }
"ismap" { return HTML_TT_ATTR_ISMAP; }
"itemprop" { return HTML_TT_ATTR_ITEMPROP; }
"kind" { return HTML_TT_ATTR_KIND; }
"label" { return HTML_TT_ATTR_LABEL; }
"lang" { return HTML_TT_ATTR_LANG; }
"language" { return HTML_TT_ATTR_LANGUAGE; }
"loading" { return HTML_TT_ATTR_LOADING; }
"list" { return HTML_TT_ATTR_LIST; }
"loop" { return HTML_TT_ATTR_LOOP; }
"low" { return HTML_TT_ATTR_LOW; }
"max" { return HTML_TT_ATTR_MAX; }
"maxlength" { return HTML_TT_ATTR_MAXLENGTH; }
"minlength" { return HTML_TT_ATTR_MINLENGTH; }
"media" { return HTML_TT_ATTR_MEDIA; }
"method" { return HTML_TT_ATTR_METHOD; }
"min" { return HTML_TT_ATTR_MIN; }
"multiple" { return HTML_TT_ATTR_MULTIPLE; }
"muted" { return HTML_TT_ATTR_MUTED; }
"name" { return HTML_TT_ATTR_NAME; }
"novalidate" { return HTML_TT_ATTR_NOVALIDATE; }
"open" { return HTML_TT_ATTR_OPEN; }
"optimum" { return HTML_TT_ATTR_OPTIMUM; }
"pattern" { return HTML_TT_ATTR_PATTERN; }
"ping" { return HTML_TT_ATTR_PING; }
"placeholder" { return HTML_TT_ATTR_PLACEHOLDER; }
"playsinline" { return HTML_TT_ATTR_PLAYSINLINE; }
"poster" { return HTML_TT_ATTR_POSTER; }
"preload" { return HTML_TT_ATTR_PRELOAD; }
"readonly" { return HTML_TT_ATTR_READONLY; }
"referrerpolicy" { return HTML_TT_ATTR_REFERRERPOLICY; }
"rel" { return HTML_TT_ATTR_REL; }
"required" { return HTML_TT_ATTR_REQUIRED; }
"reversed" { return HTML_TT_ATTR_REVERSED; }
"role" { return HTML_TT_ATTR_ROLE; }
"rows" { return HTML_TT_ATTR_ROWS; }
"rowspan" { return HTML_TT_ATTR_ROWSPAN; }
"sandbox" { return HTML_TT_ATTR_SANDBOX; }
"scope" { return HTML_TT_ATTR_SCOPE; }
"selected" { return HTML_TT_ATTR_SELECTED; }
"shape" { return HTML_TT_ATTR_SHAPE; }
"size" { return HTML_TT_ATTR_SIZE; }
"sizes" { return HTML_TT_ATTR_SIZES; }
"slot" { return HTML_TT_ATTR_SLOT; }
"span" { return HTML_TT_ATTR_SPAN; }
"spellcheck" { return HTML_TT_ATTR_SPELLCHECK; }
"src" { return HTML_TT_ATTR_SRC; }
"srcdoc" { return HTML_TT_ATTR_SRCDOC; }
"srclang" { return HTML_TT_ATTR_SRCLANG; }
"srcset" { return HTML_TT_ATTR_SRCSET; }
"start" { return HTML_TT_ATTR_START_ATTR; }
"step" { return HTML_TT_ATTR_STEP; }
"style" { return HTML_TT_ATTR_STYLE; }
"tabindex" { return HTML_TT_ATTR_TABINDEX; }
"target" { return HTML_TT_ATTR_TARGET; }
"title" { return HTML_TT_ATTR_TITLE; }
"translate" { return HTML_TT_ATTR_TRANSLATE; }
"type" { return HTML_TT_ATTR_TYPE; }
"usemap" { return HTML_TT_ATTR_USEMAP; }
"value" { return HTML_TT_ATTR_VALUE; }
"width" { return HTML_TT_ATTR_WIDTH; }
"wrap" { return HTML_TT_ATTR_WRAP; }
"-->" { return HTML_TT_TAG_COMMENT_CLOSE; }
">" {
        in_open_tag = false;
        return HTML_TT_TAG_OPEN_DONE;
}
.|\n {
        if (!in_open_tag)
                return HTML_TT_TEXT;

        yymore();
}
%%

int yywrap(void)
{
        return 1;
}
