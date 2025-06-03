/* AUTO-GENERATED */
#ifndef HTML_TT_H
#define HTML_TT_H

#include <stdbool.h>

/* html token types */
enum {
        HTML_TT_TAG_START = 1, /* start of tags */
        HTML_TT_DOCTYPE, /* <!DOCTYPE */
	HTML_TT_TAG_OPEN_START, /* start of open tags */
	HTML_TT_A_OPEN, /* <a> */
	HTML_TT_ABBR_OPEN, /* <abbr> */
	HTML_TT_ACRONYM_OPEN, /* <acronym> */
	HTML_TT_ADDRESS_OPEN, /* <address> */
	HTML_TT_APPLET_OPEN, /* <applet> */
	HTML_TT_AREA_OPEN, /* <area> */
	HTML_TT_ASIDE_OPEN, /* <aside> */
	HTML_TT_AUDIO_OPEN, /* <audio> */
	HTML_TT_B_OPEN, /* <b> */
	HTML_TT_BASE_OPEN, /* <base> */
	HTML_TT_BASEFONT_OPEN, /* <basefont> */
	HTML_TT_BDI_OPEN, /* <bdi> */
	HTML_TT_BDO_OPEN, /* <bdo> */
	HTML_TT_BIG_OPEN, /* <big> */
	HTML_TT_BLOCKQUOTE_OPEN, /* <blockquote> */
	HTML_TT_BODY_OPEN, /* <body> */
	HTML_TT_BR_OPEN, /* <br> */
	HTML_TT_BUTTON_OPEN, /* <button> */
	HTML_TT_CANVAS_OPEN, /* <canvas> */
	HTML_TT_CAPTION_OPEN, /* <caption> */
	HTML_TT_CENTER_OPEN, /* <center> */
	HTML_TT_CITE_OPEN, /* <cite> */
	HTML_TT_CODE_OPEN, /* <code> */
	HTML_TT_COL_OPEN, /* <col> */
	HTML_TT_COLGROUP_OPEN, /* <colgroup> */
	HTML_TT_DATA_OPEN, /* <data> */
	HTML_TT_DATALIST_OPEN, /* <datalist> */
	HTML_TT_DD_OPEN, /* <dd> */
	HTML_TT_DEL_OPEN, /* <del> */
	HTML_TT_DETAILS_OPEN, /* <details> */
	HTML_TT_DFN_OPEN, /* <dfn> */
	HTML_TT_DIALOG_OPEN, /* <dialog> */
	HTML_TT_DIR_OPEN, /* <dir> */
	HTML_TT_DIV_OPEN, /* <div> */
	HTML_TT_DL_OPEN, /* <dl> */
	HTML_TT_DT_OPEN, /* <dt> */
	HTML_TT_EM_OPEN, /* <em> */
	HTML_TT_EMBED_OPEN, /* <embed> */
	HTML_TT_FIELDSET_OPEN, /* <fieldset> */
	HTML_TT_FIGCAPTION_OPEN, /* <figcaption> */
	HTML_TT_FIGURE_OPEN, /* <figure> */
	HTML_TT_FONT_OPEN, /* <font> */
	HTML_TT_FOOTER_OPEN, /* <footer> */
	HTML_TT_FORM_OPEN, /* <form> */
	HTML_TT_FRAME_OPEN, /* <frame> */
	HTML_TT_FRAMESET_OPEN, /* <frameset> */
	HTML_TT_H1_OPEN, /* <h1> */
	HTML_TT_H2_OPEN, /* <h2> */
	HTML_TT_H3_OPEN, /* <h3> */
	HTML_TT_H4_OPEN, /* <h4> */
	HTML_TT_H5_OPEN, /* <h5> */
	HTML_TT_H6_OPEN, /* <h6> */
	HTML_TT_HEAD_OPEN, /* <head> */
	HTML_TT_HEADER_OPEN, /* <header> */
	HTML_TT_HGROUP_OPEN, /* <hgroup> */
	HTML_TT_HR_OPEN, /* <hr> */
	HTML_TT_HTML_OPEN, /* <html> */
	HTML_TT_I_OPEN, /* <i> */
	HTML_TT_IFRAME_OPEN, /* <iframe> */
	HTML_TT_IMG_OPEN, /* <img> */
	HTML_TT_INPUT_OPEN, /* <input> */
	HTML_TT_INS_OPEN, /* <ins> */
	HTML_TT_KBD_OPEN, /* <kbd> */
	HTML_TT_LABEL_OPEN, /* <label> */
	HTML_TT_LEGEND_OPEN, /* <legend> */
	HTML_TT_LI_OPEN, /* <li> */
	HTML_TT_LINK_OPEN, /* <link> */
	HTML_TT_MAIN_OPEN, /* <main> */
	HTML_TT_MAP_OPEN, /* <map> */
	HTML_TT_MARK_OPEN, /* <mark> */
	HTML_TT_MENU_OPEN, /* <menu> */
	HTML_TT_META_OPEN, /* <meta> */
	HTML_TT_METER_OPEN, /* <meter> */
	HTML_TT_NAV_OPEN, /* <nav> */
	HTML_TT_NOFRAMES_OPEN, /* <noframes> */
	HTML_TT_NOSCRIPT_OPEN, /* <noscript> */
	HTML_TT_OBJECT_OPEN, /* <object> */
	HTML_TT_OL_OPEN, /* <ol> */
	HTML_TT_OPTGROUP_OPEN, /* <optgroup> */
	HTML_TT_OPTION_OPEN, /* <option> */
	HTML_TT_OUTPUT_OPEN, /* <output> */
	HTML_TT_P_OPEN, /* <p> */
	HTML_TT_PARAM_OPEN, /* <param> */
	HTML_TT_PICTURE_OPEN, /* <picture> */
	HTML_TT_PRE_OPEN, /* <pre> */
	HTML_TT_PROGRESS_OPEN, /* <progress> */
	HTML_TT_Q_OPEN, /* <q> */
	HTML_TT_RP_OPEN, /* <rp> */
	HTML_TT_RT_OPEN, /* <rt> */
	HTML_TT_RUBY_OPEN, /* <ruby> */
	HTML_TT_S_OPEN, /* <s> */
	HTML_TT_SAMP_OPEN, /* <samp> */
	HTML_TT_SCRIPT_OPEN, /* <script> */
	HTML_TT_SEARCH_OPEN, /* <search> */
	HTML_TT_SECTION_OPEN, /* <section> */
	HTML_TT_SELECT_OPEN, /* <select> */
	HTML_TT_SMALL_OPEN, /* <small> */
	HTML_TT_SOURCE_OPEN, /* <source> */
	HTML_TT_SPAN_OPEN, /* <span> */
	HTML_TT_STRIKE_OPEN, /* <strike> */
	HTML_TT_STRONG_OPEN, /* <strong> */
	HTML_TT_STYLE_OPEN, /* <style> */
	HTML_TT_SUB_OPEN, /* <sub> */
	HTML_TT_SUMMARY_OPEN, /* <summary> */
	HTML_TT_SUP_OPEN, /* <sup> */
	HTML_TT_SVG_OPEN, /* <svg> */
	HTML_TT_TABLE_OPEN, /* <table> */
	HTML_TT_TBODY_OPEN, /* <tbody> */
	HTML_TT_TD_OPEN, /* <td> */
	HTML_TT_TEMPLATE_OPEN, /* <template> */
	HTML_TT_TEXTAREA_OPEN, /* <textarea> */
	HTML_TT_TFOOT_OPEN, /* <tfoot> */
	HTML_TT_TH_OPEN, /* <th> */
	HTML_TT_THEAD_OPEN, /* <thead> */
	HTML_TT_TIME_OPEN, /* <time> */
	HTML_TT_TITLE_OPEN, /* <title> */
	HTML_TT_TR_OPEN, /* <tr> */
	HTML_TT_TRACK_OPEN, /* <track> */
	HTML_TT_TT_OPEN, /* <tt> */
	HTML_TT_U_OPEN, /* <u> */
	HTML_TT_UL_OPEN, /* <ul> */
	HTML_TT_VAR_OPEN, /* <var> */
	HTML_TT_VIDEO_OPEN, /* <video> */
	HTML_TT_WBR_OPEN, /* <wbr> */
	HTML_TT_COMMENT_OPEN, /* <!-- */
	HTML_TT_TAG_OPEN_END, /* end of open tags */
	HTML_TT_TAG_CLOSE_START, /* start of close tags */
	HTML_TT_A_CLOSE, /* </a> */
	HTML_TT_ABBR_CLOSE, /* </abbr> */
	HTML_TT_ACRONYM_CLOSE, /* </acronym> */
	HTML_TT_ADDRESS_CLOSE, /* </address> */
	HTML_TT_APPLET_CLOSE, /* </applet> */
	HTML_TT_AREA_CLOSE, /* </area> */
	HTML_TT_ASIDE_CLOSE, /* </aside> */
	HTML_TT_AUDIO_CLOSE, /* </audio> */
	HTML_TT_B_CLOSE, /* </b> */
	HTML_TT_BASE_CLOSE, /* </base> */
	HTML_TT_BASEFONT_CLOSE, /* </basefont> */
	HTML_TT_BDI_CLOSE, /* </bdi> */
	HTML_TT_BDO_CLOSE, /* </bdo> */
	HTML_TT_BIG_CLOSE, /* </big> */
	HTML_TT_BLOCKQUOTE_CLOSE, /* </blockquote> */
	HTML_TT_BODY_CLOSE, /* </body> */
	HTML_TT_BR_CLOSE, /* </br> */
	HTML_TT_BUTTON_CLOSE, /* </button> */
	HTML_TT_CANVAS_CLOSE, /* </canvas> */
	HTML_TT_CAPTION_CLOSE, /* </caption> */
	HTML_TT_CENTER_CLOSE, /* </center> */
	HTML_TT_CITE_CLOSE, /* </cite> */
	HTML_TT_CODE_CLOSE, /* </code> */
	HTML_TT_COL_CLOSE, /* </col> */
	HTML_TT_COLGROUP_CLOSE, /* </colgroup> */
	HTML_TT_DATA_CLOSE, /* </data> */
	HTML_TT_DATALIST_CLOSE, /* </datalist> */
	HTML_TT_DD_CLOSE, /* </dd> */
	HTML_TT_DEL_CLOSE, /* </del> */
	HTML_TT_DETAILS_CLOSE, /* </details> */
	HTML_TT_DFN_CLOSE, /* </dfn> */
	HTML_TT_DIALOG_CLOSE, /* </dialog> */
	HTML_TT_DIR_CLOSE, /* </dir> */
	HTML_TT_DIV_CLOSE, /* </div> */
	HTML_TT_DL_CLOSE, /* </dl> */
	HTML_TT_DT_CLOSE, /* </dt> */
	HTML_TT_EM_CLOSE, /* </em> */
	HTML_TT_EMBED_CLOSE, /* </embed> */
	HTML_TT_FIELDSET_CLOSE, /* </fieldset> */
	HTML_TT_FIGCAPTION_CLOSE, /* </figcaption> */
	HTML_TT_FIGURE_CLOSE, /* </figure> */
	HTML_TT_FONT_CLOSE, /* </font> */
	HTML_TT_FOOTER_CLOSE, /* </footer> */
	HTML_TT_FORM_CLOSE, /* </form> */
	HTML_TT_FRAME_CLOSE, /* </frame> */
	HTML_TT_FRAMESET_CLOSE, /* </frameset> */
	HTML_TT_H1_CLOSE, /* </h1> */
	HTML_TT_H2_CLOSE, /* </h2> */
	HTML_TT_H3_CLOSE, /* </h3> */
	HTML_TT_H4_CLOSE, /* </h4> */
	HTML_TT_H5_CLOSE, /* </h5> */
	HTML_TT_H6_CLOSE, /* </h6> */
	HTML_TT_HEAD_CLOSE, /* </head> */
	HTML_TT_HEADER_CLOSE, /* </header> */
	HTML_TT_HGROUP_CLOSE, /* </hgroup> */
	HTML_TT_HR_CLOSE, /* </hr> */
	HTML_TT_HTML_CLOSE, /* </html> */
	HTML_TT_I_CLOSE, /* </i> */
	HTML_TT_IFRAME_CLOSE, /* </iframe> */
	HTML_TT_IMG_CLOSE, /* </img> */
	HTML_TT_INPUT_CLOSE, /* </input> */
	HTML_TT_INS_CLOSE, /* </ins> */
	HTML_TT_KBD_CLOSE, /* </kbd> */
	HTML_TT_LABEL_CLOSE, /* </label> */
	HTML_TT_LEGEND_CLOSE, /* </legend> */
	HTML_TT_LI_CLOSE, /* </li> */
	HTML_TT_LINK_CLOSE, /* </link> */
	HTML_TT_MAIN_CLOSE, /* </main> */
	HTML_TT_MAP_CLOSE, /* </map> */
	HTML_TT_MARK_CLOSE, /* </mark> */
	HTML_TT_MENU_CLOSE, /* </menu> */
	HTML_TT_META_CLOSE, /* </meta> */
	HTML_TT_METER_CLOSE, /* </meter> */
	HTML_TT_NAV_CLOSE, /* </nav> */
	HTML_TT_NOFRAMES_CLOSE, /* </noframes> */
	HTML_TT_NOSCRIPT_CLOSE, /* </noscript> */
	HTML_TT_OBJECT_CLOSE, /* </object> */
	HTML_TT_OL_CLOSE, /* </ol> */
	HTML_TT_OPTGROUP_CLOSE, /* </optgroup> */
	HTML_TT_OPTION_CLOSE, /* </option> */
	HTML_TT_OUTPUT_CLOSE, /* </output> */
	HTML_TT_P_CLOSE, /* </p> */
	HTML_TT_PARAM_CLOSE, /* </param> */
	HTML_TT_PICTURE_CLOSE, /* </picture> */
	HTML_TT_PRE_CLOSE, /* </pre> */
	HTML_TT_PROGRESS_CLOSE, /* </progress> */
	HTML_TT_Q_CLOSE, /* </q> */
	HTML_TT_RP_CLOSE, /* </rp> */
	HTML_TT_RT_CLOSE, /* </rt> */
	HTML_TT_RUBY_CLOSE, /* </ruby> */
	HTML_TT_S_CLOSE, /* </s> */
	HTML_TT_SAMP_CLOSE, /* </samp> */
	HTML_TT_SCRIPT_CLOSE, /* </script> */
	HTML_TT_SEARCH_CLOSE, /* </search> */
	HTML_TT_SECTION_CLOSE, /* </section> */
	HTML_TT_SELECT_CLOSE, /* </select> */
	HTML_TT_SMALL_CLOSE, /* </small> */
	HTML_TT_SOURCE_CLOSE, /* </source> */
	HTML_TT_SPAN_CLOSE, /* </span> */
	HTML_TT_STRIKE_CLOSE, /* </strike> */
	HTML_TT_STRONG_CLOSE, /* </strong> */
	HTML_TT_STYLE_CLOSE, /* </style> */
	HTML_TT_SUB_CLOSE, /* </sub> */
	HTML_TT_SUMMARY_CLOSE, /* </summary> */
	HTML_TT_SUP_CLOSE, /* </sup> */
	HTML_TT_SVG_CLOSE, /* </svg> */
	HTML_TT_TABLE_CLOSE, /* </table> */
	HTML_TT_TBODY_CLOSE, /* </tbody> */
	HTML_TT_TD_CLOSE, /* </td> */
	HTML_TT_TEMPLATE_CLOSE, /* </template> */
	HTML_TT_TEXTAREA_CLOSE, /* </textarea> */
	HTML_TT_TFOOT_CLOSE, /* </tfoot> */
	HTML_TT_TH_CLOSE, /* </th> */
	HTML_TT_THEAD_CLOSE, /* </thead> */
	HTML_TT_TIME_CLOSE, /* </time> */
	HTML_TT_TITLE_CLOSE, /* </title> */
	HTML_TT_TR_CLOSE, /* </tr> */
	HTML_TT_TRACK_CLOSE, /* </track> */
	HTML_TT_TT_CLOSE, /* </tt> */
	HTML_TT_U_CLOSE, /* </u> */
	HTML_TT_UL_CLOSE, /* </ul> */
	HTML_TT_VAR_CLOSE, /* </var> */
	HTML_TT_VIDEO_CLOSE, /* </video> */
	HTML_TT_WBR_CLOSE, /* </wbr> */
	HTML_TT_COMMENT_CLOSE, /* --> */
	HTML_TT_TAG_CLOSE_END, /* end of close tags */
        HTML_TT_TAG_END, /* end of tags */
        HTML_TT_OPEN_DONE, /* done with opening tag? */
        HTML_TT_TEXT, /* regular text */
        HTML_TT_ERR_START, /* start of errors */
        HTML_TT_TAG_UNTERM, /* unmterminated tag */
        HTML_TT_ERR_END, /* end of errors */
        HTML_TT_COUNT, /* type count */
};

/* test if token type is tag */
static inline bool
is_tag(int tt)
{
        return HTML_TT_TAG_START < tt && tt < HTML_TT_TAG_END;
}

/* test if open tag */
static inline bool
is_open_tag(int tt)
{
        return HTML_TT_TAG_OPEN_START < tt && tt < HTML_TT_TAG_OPEN_END;
}

/* test if close tag */
static inline bool
is_close_tag(int tt)
{
        return HTML_TT_TAG_CLOSE_START < tt && tt < HTML_TT_TAG_CLOSE_END;
}

/* test if error token */
static inline bool
is_err(int tt)
{
        return HTML_TT_ERR_START < tt && tt < HTML_TT_ERR_END;
}

#endif /* #ifndef HTML_TT_H */
