/* AUTO-GENERATED */

%{
#include "html.h"
#include <stdbool.h>

static bool in_open_tag = false;
%}

%%
<<EOF>> {
        if (in_open_tag)
                return HTML_TT_TAG_UNTERM;

        return 0;
}
"</a>" { return  HTML_TT_A_CLOSE; }
"</abbr>" { return  HTML_TT_ABBR_CLOSE; }
"</acronym>" { return  HTML_TT_ACRONYM_CLOSE; }
"</address>" { return  HTML_TT_ADDRESS_CLOSE; }
"</applet>" { return  HTML_TT_APPLET_CLOSE; }
"</area>" { return  HTML_TT_AREA_CLOSE; }
"</aside>" { return  HTML_TT_ASIDE_CLOSE; }
"</audio>" { return  HTML_TT_AUDIO_CLOSE; }
"</b>" { return  HTML_TT_B_CLOSE; }
"</base>" { return  HTML_TT_BASE_CLOSE; }
"</basefont>" { return  HTML_TT_BASEFONT_CLOSE; }
"</bdi>" { return  HTML_TT_BDI_CLOSE; }
"</bdo>" { return  HTML_TT_BDO_CLOSE; }
"</big>" { return  HTML_TT_BIG_CLOSE; }
"</blockquote>" { return  HTML_TT_BLOCKQUOTE_CLOSE; }
"</body>" { return  HTML_TT_BODY_CLOSE; }
"</br>" { return  HTML_TT_BR_CLOSE; }
"</button>" { return  HTML_TT_BUTTON_CLOSE; }
"</canvas>" { return  HTML_TT_CANVAS_CLOSE; }
"</caption>" { return  HTML_TT_CAPTION_CLOSE; }
"</center>" { return  HTML_TT_CENTER_CLOSE; }
"</cite>" { return  HTML_TT_CITE_CLOSE; }
"</code>" { return  HTML_TT_CODE_CLOSE; }
"</col>" { return  HTML_TT_COL_CLOSE; }
"</colgroup>" { return  HTML_TT_COLGROUP_CLOSE; }
"</data>" { return  HTML_TT_DATA_CLOSE; }
"</datalist>" { return  HTML_TT_DATALIST_CLOSE; }
"</dd>" { return  HTML_TT_DD_CLOSE; }
"</del>" { return  HTML_TT_DEL_CLOSE; }
"</details>" { return  HTML_TT_DETAILS_CLOSE; }
"</dfn>" { return  HTML_TT_DFN_CLOSE; }
"</dialog>" { return  HTML_TT_DIALOG_CLOSE; }
"</dir>" { return  HTML_TT_DIR_CLOSE; }
"</div>" { return  HTML_TT_DIV_CLOSE; }
"</dl>" { return  HTML_TT_DL_CLOSE; }
"</dt>" { return  HTML_TT_DT_CLOSE; }
"</em>" { return  HTML_TT_EM_CLOSE; }
"</embed>" { return  HTML_TT_EMBED_CLOSE; }
"</fieldset>" { return  HTML_TT_FIELDSET_CLOSE; }
"</figcaption>" { return  HTML_TT_FIGCAPTION_CLOSE; }
"</figure>" { return  HTML_TT_FIGURE_CLOSE; }
"</font>" { return  HTML_TT_FONT_CLOSE; }
"</footer>" { return  HTML_TT_FOOTER_CLOSE; }
"</form>" { return  HTML_TT_FORM_CLOSE; }
"</frame>" { return  HTML_TT_FRAME_CLOSE; }
"</frameset>" { return  HTML_TT_FRAMESET_CLOSE; }
"</h1>" { return  HTML_TT_H1_CLOSE; }
"</h2>" { return  HTML_TT_H2_CLOSE; }
"</h3>" { return  HTML_TT_H3_CLOSE; }
"</h4>" { return  HTML_TT_H4_CLOSE; }
"</h5>" { return  HTML_TT_H5_CLOSE; }
"</h6>" { return  HTML_TT_H6_CLOSE; }
"</head>" { return  HTML_TT_HEAD_CLOSE; }
"</header>" { return  HTML_TT_HEADER_CLOSE; }
"</hgroup>" { return  HTML_TT_HGROUP_CLOSE; }
"</hr>" { return  HTML_TT_HR_CLOSE; }
"</html>" { return  HTML_TT_HTML_CLOSE; }
"</i>" { return  HTML_TT_I_CLOSE; }
"</iframe>" { return  HTML_TT_IFRAME_CLOSE; }
"</img>" { return  HTML_TT_IMG_CLOSE; }
"</input>" { return  HTML_TT_INPUT_CLOSE; }
"</ins>" { return  HTML_TT_INS_CLOSE; }
"</kbd>" { return  HTML_TT_KBD_CLOSE; }
"</label>" { return  HTML_TT_LABEL_CLOSE; }
"</legend>" { return  HTML_TT_LEGEND_CLOSE; }
"</li>" { return  HTML_TT_LI_CLOSE; }
"</link>" { return  HTML_TT_LINK_CLOSE; }
"</main>" { return  HTML_TT_MAIN_CLOSE; }
"</map>" { return  HTML_TT_MAP_CLOSE; }
"</mark>" { return  HTML_TT_MARK_CLOSE; }
"</menu>" { return  HTML_TT_MENU_CLOSE; }
"</meta>" { return  HTML_TT_META_CLOSE; }
"</meter>" { return  HTML_TT_METER_CLOSE; }
"</nav>" { return  HTML_TT_NAV_CLOSE; }
"</noframes>" { return  HTML_TT_NOFRAMES_CLOSE; }
"</noscript>" { return  HTML_TT_NOSCRIPT_CLOSE; }
"</object>" { return  HTML_TT_OBJECT_CLOSE; }
"</ol>" { return  HTML_TT_OL_CLOSE; }
"</optgroup>" { return  HTML_TT_OPTGROUP_CLOSE; }
"</option>" { return  HTML_TT_OPTION_CLOSE; }
"</output>" { return  HTML_TT_OUTPUT_CLOSE; }
"</p>" { return  HTML_TT_P_CLOSE; }
"</param>" { return  HTML_TT_PARAM_CLOSE; }
"</picture>" { return  HTML_TT_PICTURE_CLOSE; }
"</pre>" { return  HTML_TT_PRE_CLOSE; }
"</progress>" { return  HTML_TT_PROGRESS_CLOSE; }
"</q>" { return  HTML_TT_Q_CLOSE; }
"</rp>" { return  HTML_TT_RP_CLOSE; }
"</rt>" { return  HTML_TT_RT_CLOSE; }
"</ruby>" { return  HTML_TT_RUBY_CLOSE; }
"</s>" { return  HTML_TT_S_CLOSE; }
"</samp>" { return  HTML_TT_SAMP_CLOSE; }
"</script>" { return  HTML_TT_SCRIPT_CLOSE; }
"</search>" { return  HTML_TT_SEARCH_CLOSE; }
"</section>" { return  HTML_TT_SECTION_CLOSE; }
"</select>" { return  HTML_TT_SELECT_CLOSE; }
"</small>" { return  HTML_TT_SMALL_CLOSE; }
"</source>" { return  HTML_TT_SOURCE_CLOSE; }
"</span>" { return  HTML_TT_SPAN_CLOSE; }
"</strike>" { return  HTML_TT_STRIKE_CLOSE; }
"</strong>" { return  HTML_TT_STRONG_CLOSE; }
"</style>" { return  HTML_TT_STYLE_CLOSE; }
"</sub>" { return  HTML_TT_SUB_CLOSE; }
"</summary>" { return  HTML_TT_SUMMARY_CLOSE; }
"</sup>" { return  HTML_TT_SUP_CLOSE; }
"</svg>" { return  HTML_TT_SVG_CLOSE; }
"</table>" { return  HTML_TT_TABLE_CLOSE; }
"</tbody>" { return  HTML_TT_TBODY_CLOSE; }
"</td>" { return  HTML_TT_TD_CLOSE; }
"</template>" { return  HTML_TT_TEMPLATE_CLOSE; }
"</textarea>" { return  HTML_TT_TEXTAREA_CLOSE; }
"</tfoot>" { return  HTML_TT_TFOOT_CLOSE; }
"</th>" { return  HTML_TT_TH_CLOSE; }
"</thead>" { return  HTML_TT_THEAD_CLOSE; }
"</time>" { return  HTML_TT_TIME_CLOSE; }
"</title>" { return  HTML_TT_TITLE_CLOSE; }
"</tr>" { return  HTML_TT_TR_CLOSE; }
"</track>" { return  HTML_TT_TRACK_CLOSE; }
"</tt>" { return  HTML_TT_TT_CLOSE; }
"</u>" { return  HTML_TT_U_CLOSE; }
"</ul>" { return  HTML_TT_UL_CLOSE; }
"</var>" { return  HTML_TT_VAR_CLOSE; }
"</video>" { return  HTML_TT_VIDEO_CLOSE; }
"</wbr>" { return  HTML_TT_WBR_CLOSE; }
"<!--" { return HTML_TT_COMMENT_OPEN; }
"<a" {
        in_open_tag = true;
        return HTML_TT_A_OPEN;
}
"<abbr" {
        in_open_tag = true;
        return HTML_TT_ABBR_OPEN;
}
"<acronym" {
        in_open_tag = true;
        return HTML_TT_ACRONYM_OPEN;
}
"<address" {
        in_open_tag = true;
        return HTML_TT_ADDRESS_OPEN;
}
"<applet" {
        in_open_tag = true;
        return HTML_TT_APPLET_OPEN;
}
"<area" {
        in_open_tag = true;
        return HTML_TT_AREA_OPEN;
}
"<aside" {
        in_open_tag = true;
        return HTML_TT_ASIDE_OPEN;
}
"<audio" {
        in_open_tag = true;
        return HTML_TT_AUDIO_OPEN;
}
"<b" {
        in_open_tag = true;
        return HTML_TT_B_OPEN;
}
"<base" {
        in_open_tag = true;
        return HTML_TT_BASE_OPEN;
}
"<basefont" {
        in_open_tag = true;
        return HTML_TT_BASEFONT_OPEN;
}
"<bdi" {
        in_open_tag = true;
        return HTML_TT_BDI_OPEN;
}
"<bdo" {
        in_open_tag = true;
        return HTML_TT_BDO_OPEN;
}
"<big" {
        in_open_tag = true;
        return HTML_TT_BIG_OPEN;
}
"<blockquote" {
        in_open_tag = true;
        return HTML_TT_BLOCKQUOTE_OPEN;
}
"<body" {
        in_open_tag = true;
        return HTML_TT_BODY_OPEN;
}
"<br" {
        in_open_tag = true;
        return HTML_TT_BR_OPEN;
}
"<button" {
        in_open_tag = true;
        return HTML_TT_BUTTON_OPEN;
}
"<canvas" {
        in_open_tag = true;
        return HTML_TT_CANVAS_OPEN;
}
"<caption" {
        in_open_tag = true;
        return HTML_TT_CAPTION_OPEN;
}
"<center" {
        in_open_tag = true;
        return HTML_TT_CENTER_OPEN;
}
"<cite" {
        in_open_tag = true;
        return HTML_TT_CITE_OPEN;
}
"<code" {
        in_open_tag = true;
        return HTML_TT_CODE_OPEN;
}
"<col" {
        in_open_tag = true;
        return HTML_TT_COL_OPEN;
}
"<colgroup" {
        in_open_tag = true;
        return HTML_TT_COLGROUP_OPEN;
}
"<data" {
        in_open_tag = true;
        return HTML_TT_DATA_OPEN;
}
"<datalist" {
        in_open_tag = true;
        return HTML_TT_DATALIST_OPEN;
}
"<dd" {
        in_open_tag = true;
        return HTML_TT_DD_OPEN;
}
"<del" {
        in_open_tag = true;
        return HTML_TT_DEL_OPEN;
}
"<details" {
        in_open_tag = true;
        return HTML_TT_DETAILS_OPEN;
}
"<dfn" {
        in_open_tag = true;
        return HTML_TT_DFN_OPEN;
}
"<dialog" {
        in_open_tag = true;
        return HTML_TT_DIALOG_OPEN;
}
"<dir" {
        in_open_tag = true;
        return HTML_TT_DIR_OPEN;
}
"<div" {
        in_open_tag = true;
        return HTML_TT_DIV_OPEN;
}
"<dl" {
        in_open_tag = true;
        return HTML_TT_DL_OPEN;
}
"<dt" {
        in_open_tag = true;
        return HTML_TT_DT_OPEN;
}
"<em" {
        in_open_tag = true;
        return HTML_TT_EM_OPEN;
}
"<embed" {
        in_open_tag = true;
        return HTML_TT_EMBED_OPEN;
}
"<fieldset" {
        in_open_tag = true;
        return HTML_TT_FIELDSET_OPEN;
}
"<figcaption" {
        in_open_tag = true;
        return HTML_TT_FIGCAPTION_OPEN;
}
"<figure" {
        in_open_tag = true;
        return HTML_TT_FIGURE_OPEN;
}
"<font" {
        in_open_tag = true;
        return HTML_TT_FONT_OPEN;
}
"<footer" {
        in_open_tag = true;
        return HTML_TT_FOOTER_OPEN;
}
"<form" {
        in_open_tag = true;
        return HTML_TT_FORM_OPEN;
}
"<frame" {
        in_open_tag = true;
        return HTML_TT_FRAME_OPEN;
}
"<frameset" {
        in_open_tag = true;
        return HTML_TT_FRAMESET_OPEN;
}
"<h1" {
        in_open_tag = true;
        return HTML_TT_H1_OPEN;
}
"<h2" {
        in_open_tag = true;
        return HTML_TT_H2_OPEN;
}
"<h3" {
        in_open_tag = true;
        return HTML_TT_H3_OPEN;
}
"<h4" {
        in_open_tag = true;
        return HTML_TT_H4_OPEN;
}
"<h5" {
        in_open_tag = true;
        return HTML_TT_H5_OPEN;
}
"<h6" {
        in_open_tag = true;
        return HTML_TT_H6_OPEN;
}
"<head" {
        in_open_tag = true;
        return HTML_TT_HEAD_OPEN;
}
"<header" {
        in_open_tag = true;
        return HTML_TT_HEADER_OPEN;
}
"<hgroup" {
        in_open_tag = true;
        return HTML_TT_HGROUP_OPEN;
}
"<hr" {
        in_open_tag = true;
        return HTML_TT_HR_OPEN;
}
"<html" {
        in_open_tag = true;
        return HTML_TT_HTML_OPEN;
}
"<i" {
        in_open_tag = true;
        return HTML_TT_I_OPEN;
}
"<iframe" {
        in_open_tag = true;
        return HTML_TT_IFRAME_OPEN;
}
"<img" {
        in_open_tag = true;
        return HTML_TT_IMG_OPEN;
}
"<input" {
        in_open_tag = true;
        return HTML_TT_INPUT_OPEN;
}
"<ins" {
        in_open_tag = true;
        return HTML_TT_INS_OPEN;
}
"<kbd" {
        in_open_tag = true;
        return HTML_TT_KBD_OPEN;
}
"<label" {
        in_open_tag = true;
        return HTML_TT_LABEL_OPEN;
}
"<legend" {
        in_open_tag = true;
        return HTML_TT_LEGEND_OPEN;
}
"<li" {
        in_open_tag = true;
        return HTML_TT_LI_OPEN;
}
"<link" {
        in_open_tag = true;
        return HTML_TT_LINK_OPEN;
}
"<main" {
        in_open_tag = true;
        return HTML_TT_MAIN_OPEN;
}
"<map" {
        in_open_tag = true;
        return HTML_TT_MAP_OPEN;
}
"<mark" {
        in_open_tag = true;
        return HTML_TT_MARK_OPEN;
}
"<menu" {
        in_open_tag = true;
        return HTML_TT_MENU_OPEN;
}
"<meta" {
        in_open_tag = true;
        return HTML_TT_META_OPEN;
}
"<meter" {
        in_open_tag = true;
        return HTML_TT_METER_OPEN;
}
"<nav" {
        in_open_tag = true;
        return HTML_TT_NAV_OPEN;
}
"<noframes" {
        in_open_tag = true;
        return HTML_TT_NOFRAMES_OPEN;
}
"<noscript" {
        in_open_tag = true;
        return HTML_TT_NOSCRIPT_OPEN;
}
"<object" {
        in_open_tag = true;
        return HTML_TT_OBJECT_OPEN;
}
"<ol" {
        in_open_tag = true;
        return HTML_TT_OL_OPEN;
}
"<optgroup" {
        in_open_tag = true;
        return HTML_TT_OPTGROUP_OPEN;
}
"<option" {
        in_open_tag = true;
        return HTML_TT_OPTION_OPEN;
}
"<output" {
        in_open_tag = true;
        return HTML_TT_OUTPUT_OPEN;
}
"<p" {
        in_open_tag = true;
        return HTML_TT_P_OPEN;
}
"<param" {
        in_open_tag = true;
        return HTML_TT_PARAM_OPEN;
}
"<picture" {
        in_open_tag = true;
        return HTML_TT_PICTURE_OPEN;
}
"<pre" {
        in_open_tag = true;
        return HTML_TT_PRE_OPEN;
}
"<progress" {
        in_open_tag = true;
        return HTML_TT_PROGRESS_OPEN;
}
"<q" {
        in_open_tag = true;
        return HTML_TT_Q_OPEN;
}
"<rp" {
        in_open_tag = true;
        return HTML_TT_RP_OPEN;
}
"<rt" {
        in_open_tag = true;
        return HTML_TT_RT_OPEN;
}
"<ruby" {
        in_open_tag = true;
        return HTML_TT_RUBY_OPEN;
}
"<s" {
        in_open_tag = true;
        return HTML_TT_S_OPEN;
}
"<samp" {
        in_open_tag = true;
        return HTML_TT_SAMP_OPEN;
}
"<script" {
        in_open_tag = true;
        return HTML_TT_SCRIPT_OPEN;
}
"<search" {
        in_open_tag = true;
        return HTML_TT_SEARCH_OPEN;
}
"<section" {
        in_open_tag = true;
        return HTML_TT_SECTION_OPEN;
}
"<select" {
        in_open_tag = true;
        return HTML_TT_SELECT_OPEN;
}
"<small" {
        in_open_tag = true;
        return HTML_TT_SMALL_OPEN;
}
"<source" {
        in_open_tag = true;
        return HTML_TT_SOURCE_OPEN;
}
"<span" {
        in_open_tag = true;
        return HTML_TT_SPAN_OPEN;
}
"<strike" {
        in_open_tag = true;
        return HTML_TT_STRIKE_OPEN;
}
"<strong" {
        in_open_tag = true;
        return HTML_TT_STRONG_OPEN;
}
"<style" {
        in_open_tag = true;
        return HTML_TT_STYLE_OPEN;
}
"<sub" {
        in_open_tag = true;
        return HTML_TT_SUB_OPEN;
}
"<summary" {
        in_open_tag = true;
        return HTML_TT_SUMMARY_OPEN;
}
"<sup" {
        in_open_tag = true;
        return HTML_TT_SUP_OPEN;
}
"<svg" {
        in_open_tag = true;
        return HTML_TT_SVG_OPEN;
}
"<table" {
        in_open_tag = true;
        return HTML_TT_TABLE_OPEN;
}
"<tbody" {
        in_open_tag = true;
        return HTML_TT_TBODY_OPEN;
}
"<td" {
        in_open_tag = true;
        return HTML_TT_TD_OPEN;
}
"<template" {
        in_open_tag = true;
        return HTML_TT_TEMPLATE_OPEN;
}
"<textarea" {
        in_open_tag = true;
        return HTML_TT_TEXTAREA_OPEN;
}
"<tfoot" {
        in_open_tag = true;
        return HTML_TT_TFOOT_OPEN;
}
"<th" {
        in_open_tag = true;
        return HTML_TT_TH_OPEN;
}
"<thead" {
        in_open_tag = true;
        return HTML_TT_THEAD_OPEN;
}
"<time" {
        in_open_tag = true;
        return HTML_TT_TIME_OPEN;
}
"<title" {
        in_open_tag = true;
        return HTML_TT_TITLE_OPEN;
}
"<tr" {
        in_open_tag = true;
        return HTML_TT_TR_OPEN;
}
"<track" {
        in_open_tag = true;
        return HTML_TT_TRACK_OPEN;
}
"<tt" {
        in_open_tag = true;
        return HTML_TT_TT_OPEN;
}
"<u" {
        in_open_tag = true;
        return HTML_TT_U_OPEN;
}
"<ul" {
        in_open_tag = true;
        return HTML_TT_UL_OPEN;
}
"<var" {
        in_open_tag = true;
        return HTML_TT_VAR_OPEN;
}
"<video" {
        in_open_tag = true;
        return HTML_TT_VIDEO_OPEN;
}
"<wbr" {
        in_open_tag = true;
        return HTML_TT_WBR_OPEN;
}
"-->" { return HTML_TT_COMMENT_CLOSE; }
">" {
        in_open_tag = false;
        return HTML_TT_OPEN_DONE;
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
