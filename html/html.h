/* AUTO-GENERATED */
#ifndef HTML_TT_H
#define HTML_TT_H

#include <stdbool.h>

/* html token types */
enum {
        HTML_TT_TAG_START = 1, /* start of tags */
	HTML_TT_TAG_OPEN_START, /* start of open tags */
	HTML_TT_TAG_DOCTYPE, /* <!DOCTYPE> */
	HTML_TT_TAG_A_OPEN, /* <a> */
	HTML_TT_TAG_ABBR_OPEN, /* <abbr> */
	HTML_TT_TAG_ACRONYM_OPEN, /* <acronym> */
	HTML_TT_TAG_ADDRESS_OPEN, /* <address> */
	HTML_TT_TAG_APPLET_OPEN, /* <applet> */
	HTML_TT_TAG_AREA_OPEN, /* <area> */
	HTML_TT_TAG_ASIDE_OPEN, /* <aside> */
	HTML_TT_TAG_AUDIO_OPEN, /* <audio> */
	HTML_TT_TAG_B_OPEN, /* <b> */
	HTML_TT_TAG_BASE_OPEN, /* <base> */
	HTML_TT_TAG_BASEFONT_OPEN, /* <basefont> */
	HTML_TT_TAG_BDI_OPEN, /* <bdi> */
	HTML_TT_TAG_BDO_OPEN, /* <bdo> */
	HTML_TT_TAG_BIG_OPEN, /* <big> */
	HTML_TT_TAG_BLOCKQUOTE_OPEN, /* <blockquote> */
	HTML_TT_TAG_BODY_OPEN, /* <body> */
	HTML_TT_TAG_BR_OPEN, /* <br> */
	HTML_TT_TAG_BUTTON_OPEN, /* <button> */
	HTML_TT_TAG_CANVAS_OPEN, /* <canvas> */
	HTML_TT_TAG_CAPTION_OPEN, /* <caption> */
	HTML_TT_TAG_CENTER_OPEN, /* <center> */
	HTML_TT_TAG_CITE_OPEN, /* <cite> */
	HTML_TT_TAG_CODE_OPEN, /* <code> */
	HTML_TT_TAG_COL_OPEN, /* <col> */
	HTML_TT_TAG_COLGROUP_OPEN, /* <colgroup> */
	HTML_TT_TAG_DATA_OPEN, /* <data> */
	HTML_TT_TAG_DATALIST_OPEN, /* <datalist> */
	HTML_TT_TAG_DD_OPEN, /* <dd> */
	HTML_TT_TAG_DEL_OPEN, /* <del> */
	HTML_TT_TAG_DETAILS_OPEN, /* <details> */
	HTML_TT_TAG_DFN_OPEN, /* <dfn> */
	HTML_TT_TAG_DIALOG_OPEN, /* <dialog> */
	HTML_TT_TAG_DIR_OPEN, /* <dir> */
	HTML_TT_TAG_DIV_OPEN, /* <div> */
	HTML_TT_TAG_DL_OPEN, /* <dl> */
	HTML_TT_TAG_DT_OPEN, /* <dt> */
	HTML_TT_TAG_EM_OPEN, /* <em> */
	HTML_TT_TAG_EMBED_OPEN, /* <embed> */
	HTML_TT_TAG_FIELDSET_OPEN, /* <fieldset> */
	HTML_TT_TAG_FIGCAPTION_OPEN, /* <figcaption> */
	HTML_TT_TAG_FIGURE_OPEN, /* <figure> */
	HTML_TT_TAG_FONT_OPEN, /* <font> */
	HTML_TT_TAG_FOOTER_OPEN, /* <footer> */
	HTML_TT_TAG_FORM_OPEN, /* <form> */
	HTML_TT_TAG_FRAME_OPEN, /* <frame> */
	HTML_TT_TAG_FRAMESET_OPEN, /* <frameset> */
	HTML_TT_TAG_H1_OPEN, /* <h1> */
	HTML_TT_TAG_H2_OPEN, /* <h2> */
	HTML_TT_TAG_H3_OPEN, /* <h3> */
	HTML_TT_TAG_H4_OPEN, /* <h4> */
	HTML_TT_TAG_H5_OPEN, /* <h5> */
	HTML_TT_TAG_H6_OPEN, /* <h6> */
	HTML_TT_TAG_HEAD_OPEN, /* <head> */
	HTML_TT_TAG_HEADER_OPEN, /* <header> */
	HTML_TT_TAG_HGROUP_OPEN, /* <hgroup> */
	HTML_TT_TAG_HR_OPEN, /* <hr> */
	HTML_TT_TAG_HTML_OPEN, /* <html> */
	HTML_TT_TAG_I_OPEN, /* <i> */
	HTML_TT_TAG_IFRAME_OPEN, /* <iframe> */
	HTML_TT_TAG_IMG_OPEN, /* <img> */
	HTML_TT_TAG_INPUT_OPEN, /* <input> */
	HTML_TT_TAG_INS_OPEN, /* <ins> */
	HTML_TT_TAG_KBD_OPEN, /* <kbd> */
	HTML_TT_TAG_LABEL_OPEN, /* <label> */
	HTML_TT_TAG_LEGEND_OPEN, /* <legend> */
	HTML_TT_TAG_LI_OPEN, /* <li> */
	HTML_TT_TAG_LINK_OPEN, /* <link> */
	HTML_TT_TAG_MAIN_OPEN, /* <main> */
	HTML_TT_TAG_MAP_OPEN, /* <map> */
	HTML_TT_TAG_MARK_OPEN, /* <mark> */
	HTML_TT_TAG_MENU_OPEN, /* <menu> */
	HTML_TT_TAG_META_OPEN, /* <meta> */
	HTML_TT_TAG_METER_OPEN, /* <meter> */
	HTML_TT_TAG_NAV_OPEN, /* <nav> */
	HTML_TT_TAG_NOFRAMES_OPEN, /* <noframes> */
	HTML_TT_TAG_NOSCRIPT_OPEN, /* <noscript> */
	HTML_TT_TAG_OBJECT_OPEN, /* <object> */
	HTML_TT_TAG_OL_OPEN, /* <ol> */
	HTML_TT_TAG_OPTGROUP_OPEN, /* <optgroup> */
	HTML_TT_TAG_OPTION_OPEN, /* <option> */
	HTML_TT_TAG_OUTPUT_OPEN, /* <output> */
	HTML_TT_TAG_P_OPEN, /* <p> */
	HTML_TT_TAG_PARAM_OPEN, /* <param> */
	HTML_TT_TAG_PICTURE_OPEN, /* <picture> */
	HTML_TT_TAG_PRE_OPEN, /* <pre> */
	HTML_TT_TAG_PROGRESS_OPEN, /* <progress> */
	HTML_TT_TAG_Q_OPEN, /* <q> */
	HTML_TT_TAG_RP_OPEN, /* <rp> */
	HTML_TT_TAG_RT_OPEN, /* <rt> */
	HTML_TT_TAG_RUBY_OPEN, /* <ruby> */
	HTML_TT_TAG_S_OPEN, /* <s> */
	HTML_TT_TAG_SAMP_OPEN, /* <samp> */
	HTML_TT_TAG_SCRIPT_OPEN, /* <script> */
	HTML_TT_TAG_SEARCH_OPEN, /* <search> */
	HTML_TT_TAG_SECTION_OPEN, /* <section> */
	HTML_TT_TAG_SELECT_OPEN, /* <select> */
	HTML_TT_TAG_SMALL_OPEN, /* <small> */
	HTML_TT_TAG_SOURCE_OPEN, /* <source> */
	HTML_TT_TAG_SPAN_OPEN, /* <span> */
	HTML_TT_TAG_STRIKE_OPEN, /* <strike> */
	HTML_TT_TAG_STRONG_OPEN, /* <strong> */
	HTML_TT_TAG_STYLE_OPEN, /* <style> */
	HTML_TT_TAG_SUB_OPEN, /* <sub> */
	HTML_TT_TAG_SUMMARY_OPEN, /* <summary> */
	HTML_TT_TAG_SUP_OPEN, /* <sup> */
	HTML_TT_TAG_SVG_OPEN, /* <svg> */
	HTML_TT_TAG_TABLE_OPEN, /* <table> */
	HTML_TT_TAG_TBODY_OPEN, /* <tbody> */
	HTML_TT_TAG_TD_OPEN, /* <td> */
	HTML_TT_TAG_TEMPLATE_OPEN, /* <template> */
	HTML_TT_TAG_TEXTAREA_OPEN, /* <textarea> */
	HTML_TT_TAG_TFOOT_OPEN, /* <tfoot> */
	HTML_TT_TAG_TH_OPEN, /* <th> */
	HTML_TT_TAG_THEAD_OPEN, /* <thead> */
	HTML_TT_TAG_TIME_OPEN, /* <time> */
	HTML_TT_TAG_TITLE_OPEN, /* <title> */
	HTML_TT_TAG_TR_OPEN, /* <tr> */
	HTML_TT_TAG_TRACK_OPEN, /* <track> */
	HTML_TT_TAG_TT_OPEN, /* <tt> */
	HTML_TT_TAG_U_OPEN, /* <u> */
	HTML_TT_TAG_UL_OPEN, /* <ul> */
	HTML_TT_TAG_VAR_OPEN, /* <var> */
	HTML_TT_TAG_VIDEO_OPEN, /* <video> */
	HTML_TT_TAG_WBR_OPEN, /* <wbr> */
	HTML_TT_TAG_COMMENT_OPEN, /* <!-- */
	HTML_TT_TAG_OPEN_END, /* end of open tags */
	HTML_TT_TAG_END, /* end of tags */
	HTML_TT_TAG_CLOSE_START, /* start of close tags */
	HTML_TT_TAG_A_CLOSE, /* </a> */
	HTML_TT_TAG_ABBR_CLOSE, /* </abbr> */
	HTML_TT_TAG_ACRONYM_CLOSE, /* </acronym> */
	HTML_TT_TAG_ADDRESS_CLOSE, /* </address> */
	HTML_TT_TAG_APPLET_CLOSE, /* </applet> */
	HTML_TT_TAG_AREA_CLOSE, /* </area> */
	HTML_TT_TAG_ASIDE_CLOSE, /* </aside> */
	HTML_TT_TAG_AUDIO_CLOSE, /* </audio> */
	HTML_TT_TAG_B_CLOSE, /* </b> */
	HTML_TT_TAG_BASE_CLOSE, /* </base> */
	HTML_TT_TAG_BASEFONT_CLOSE, /* </basefont> */
	HTML_TT_TAG_BDI_CLOSE, /* </bdi> */
	HTML_TT_TAG_BDO_CLOSE, /* </bdo> */
	HTML_TT_TAG_BIG_CLOSE, /* </big> */
	HTML_TT_TAG_BLOCKQUOTE_CLOSE, /* </blockquote> */
	HTML_TT_TAG_BODY_CLOSE, /* </body> */
	HTML_TT_TAG_BR_CLOSE, /* </br> */
	HTML_TT_TAG_BUTTON_CLOSE, /* </button> */
	HTML_TT_TAG_CANVAS_CLOSE, /* </canvas> */
	HTML_TT_TAG_CAPTION_CLOSE, /* </caption> */
	HTML_TT_TAG_CENTER_CLOSE, /* </center> */
	HTML_TT_TAG_CITE_CLOSE, /* </cite> */
	HTML_TT_TAG_CODE_CLOSE, /* </code> */
	HTML_TT_TAG_COL_CLOSE, /* </col> */
	HTML_TT_TAG_COLGROUP_CLOSE, /* </colgroup> */
	HTML_TT_TAG_DATA_CLOSE, /* </data> */
	HTML_TT_TAG_DATALIST_CLOSE, /* </datalist> */
	HTML_TT_TAG_DD_CLOSE, /* </dd> */
	HTML_TT_TAG_DEL_CLOSE, /* </del> */
	HTML_TT_TAG_DETAILS_CLOSE, /* </details> */
	HTML_TT_TAG_DFN_CLOSE, /* </dfn> */
	HTML_TT_TAG_DIALOG_CLOSE, /* </dialog> */
	HTML_TT_TAG_DIR_CLOSE, /* </dir> */
	HTML_TT_TAG_DIV_CLOSE, /* </div> */
	HTML_TT_TAG_DL_CLOSE, /* </dl> */
	HTML_TT_TAG_DT_CLOSE, /* </dt> */
	HTML_TT_TAG_EM_CLOSE, /* </em> */
	HTML_TT_TAG_EMBED_CLOSE, /* </embed> */
	HTML_TT_TAG_FIELDSET_CLOSE, /* </fieldset> */
	HTML_TT_TAG_FIGCAPTION_CLOSE, /* </figcaption> */
	HTML_TT_TAG_FIGURE_CLOSE, /* </figure> */
	HTML_TT_TAG_FONT_CLOSE, /* </font> */
	HTML_TT_TAG_FOOTER_CLOSE, /* </footer> */
	HTML_TT_TAG_FORM_CLOSE, /* </form> */
	HTML_TT_TAG_FRAME_CLOSE, /* </frame> */
	HTML_TT_TAG_FRAMESET_CLOSE, /* </frameset> */
	HTML_TT_TAG_H1_CLOSE, /* </h1> */
	HTML_TT_TAG_H2_CLOSE, /* </h2> */
	HTML_TT_TAG_H3_CLOSE, /* </h3> */
	HTML_TT_TAG_H4_CLOSE, /* </h4> */
	HTML_TT_TAG_H5_CLOSE, /* </h5> */
	HTML_TT_TAG_H6_CLOSE, /* </h6> */
	HTML_TT_TAG_HEAD_CLOSE, /* </head> */
	HTML_TT_TAG_HEADER_CLOSE, /* </header> */
	HTML_TT_TAG_HGROUP_CLOSE, /* </hgroup> */
	HTML_TT_TAG_HR_CLOSE, /* </hr> */
	HTML_TT_TAG_HTML_CLOSE, /* </html> */
	HTML_TT_TAG_I_CLOSE, /* </i> */
	HTML_TT_TAG_IFRAME_CLOSE, /* </iframe> */
	HTML_TT_TAG_IMG_CLOSE, /* </img> */
	HTML_TT_TAG_INPUT_CLOSE, /* </input> */
	HTML_TT_TAG_INS_CLOSE, /* </ins> */
	HTML_TT_TAG_KBD_CLOSE, /* </kbd> */
	HTML_TT_TAG_LABEL_CLOSE, /* </label> */
	HTML_TT_TAG_LEGEND_CLOSE, /* </legend> */
	HTML_TT_TAG_LI_CLOSE, /* </li> */
	HTML_TT_TAG_LINK_CLOSE, /* </link> */
	HTML_TT_TAG_MAIN_CLOSE, /* </main> */
	HTML_TT_TAG_MAP_CLOSE, /* </map> */
	HTML_TT_TAG_MARK_CLOSE, /* </mark> */
	HTML_TT_TAG_MENU_CLOSE, /* </menu> */
	HTML_TT_TAG_META_CLOSE, /* </meta> */
	HTML_TT_TAG_METER_CLOSE, /* </meter> */
	HTML_TT_TAG_NAV_CLOSE, /* </nav> */
	HTML_TT_TAG_NOFRAMES_CLOSE, /* </noframes> */
	HTML_TT_TAG_NOSCRIPT_CLOSE, /* </noscript> */
	HTML_TT_TAG_OBJECT_CLOSE, /* </object> */
	HTML_TT_TAG_OL_CLOSE, /* </ol> */
	HTML_TT_TAG_OPTGROUP_CLOSE, /* </optgroup> */
	HTML_TT_TAG_OPTION_CLOSE, /* </option> */
	HTML_TT_TAG_OUTPUT_CLOSE, /* </output> */
	HTML_TT_TAG_P_CLOSE, /* </p> */
	HTML_TT_TAG_PARAM_CLOSE, /* </param> */
	HTML_TT_TAG_PICTURE_CLOSE, /* </picture> */
	HTML_TT_TAG_PRE_CLOSE, /* </pre> */
	HTML_TT_TAG_PROGRESS_CLOSE, /* </progress> */
	HTML_TT_TAG_Q_CLOSE, /* </q> */
	HTML_TT_TAG_RP_CLOSE, /* </rp> */
	HTML_TT_TAG_RT_CLOSE, /* </rt> */
	HTML_TT_TAG_RUBY_CLOSE, /* </ruby> */
	HTML_TT_TAG_S_CLOSE, /* </s> */
	HTML_TT_TAG_SAMP_CLOSE, /* </samp> */
	HTML_TT_TAG_SCRIPT_CLOSE, /* </script> */
	HTML_TT_TAG_SEARCH_CLOSE, /* </search> */
	HTML_TT_TAG_SECTION_CLOSE, /* </section> */
	HTML_TT_TAG_SELECT_CLOSE, /* </select> */
	HTML_TT_TAG_SMALL_CLOSE, /* </small> */
	HTML_TT_TAG_SOURCE_CLOSE, /* </source> */
	HTML_TT_TAG_SPAN_CLOSE, /* </span> */
	HTML_TT_TAG_STRIKE_CLOSE, /* </strike> */
	HTML_TT_TAG_STRONG_CLOSE, /* </strong> */
	HTML_TT_TAG_STYLE_CLOSE, /* </style> */
	HTML_TT_TAG_SUB_CLOSE, /* </sub> */
	HTML_TT_TAG_SUMMARY_CLOSE, /* </summary> */
	HTML_TT_TAG_SUP_CLOSE, /* </sup> */
	HTML_TT_TAG_SVG_CLOSE, /* </svg> */
	HTML_TT_TAG_TABLE_CLOSE, /* </table> */
	HTML_TT_TAG_TBODY_CLOSE, /* </tbody> */
	HTML_TT_TAG_TD_CLOSE, /* </td> */
	HTML_TT_TAG_TEMPLATE_CLOSE, /* </template> */
	HTML_TT_TAG_TEXTAREA_CLOSE, /* </textarea> */
	HTML_TT_TAG_TFOOT_CLOSE, /* </tfoot> */
	HTML_TT_TAG_TH_CLOSE, /* </th> */
	HTML_TT_TAG_THEAD_CLOSE, /* </thead> */
	HTML_TT_TAG_TIME_CLOSE, /* </time> */
	HTML_TT_TAG_TITLE_CLOSE, /* </title> */
	HTML_TT_TAG_TR_CLOSE, /* </tr> */
	HTML_TT_TAG_TRACK_CLOSE, /* </track> */
	HTML_TT_TAG_TT_CLOSE, /* </tt> */
	HTML_TT_TAG_U_CLOSE, /* </u> */
	HTML_TT_TAG_UL_CLOSE, /* </ul> */
	HTML_TT_TAG_VAR_CLOSE, /* </var> */
	HTML_TT_TAG_VIDEO_CLOSE, /* </video> */
	HTML_TT_TAG_WBR_CLOSE, /* </wbr> */
	HTML_TT_TAG_COMMENT_CLOSE, /* --> */
	HTML_TT_TAG_CLOSE_END, /* end of close tags */
	HTML_TT_ATTR_START, /* start of attributes */
	HTML_TT_ATTR_ACCEPT, /* accept */
	HTML_TT_ATTR_ACCEPT_CHARSET, /* accept-charset */
	HTML_TT_ATTR_ACCESSKEY, /* accesskey */
	HTML_TT_ATTR_ACTION, /* action */
	HTML_TT_ATTR_ALLOW, /* allow */
	HTML_TT_ATTR_ALT, /* alt */
	HTML_TT_ATTR_AS, /* as */
	HTML_TT_ATTR_ASYNC, /* async */
	HTML_TT_ATTR_AUTOCAPITALIZE, /* autocapitalize */
	HTML_TT_ATTR_AUTOCOMPLETE, /* autocomplete */
	HTML_TT_ATTR_AUTOPLAY, /* autoplay */
	HTML_TT_ATTR_BACKGROUND, /* background */
	HTML_TT_ATTR_BGCOLOR, /* bgcolor */
	HTML_TT_ATTR_BORDER, /* border */
	HTML_TT_ATTR_CAPTURE, /* capture */
	HTML_TT_ATTR_CHARSET, /* charset */
	HTML_TT_ATTR_CHECKED, /* checked */
	HTML_TT_ATTR_CITE, /* cite */
	HTML_TT_ATTR_CLASS, /* class */
	HTML_TT_ATTR_COLOR, /* color */
	HTML_TT_ATTR_COLS, /* cols */
	HTML_TT_ATTR_COLSPAN, /* colspan */
	HTML_TT_ATTR_CONTENT, /* content */
	HTML_TT_ATTR_CONTENTEDITABLE, /* contenteditable */
	HTML_TT_ATTR_CONTROLS, /* controls */
	HTML_TT_ATTR_COORDS, /* coords */
	HTML_TT_ATTR_CROSSORIGIN, /* crossorigin */
	HTML_TT_ATTR_CSP, /* csp */
	HTML_TT_ATTR_DATA, /* data */
	HTML_TT_ATTR_DATETIME, /* datetime */
	HTML_TT_ATTR_DECODING, /* decoding */
	HTML_TT_ATTR_DEFAULT, /* default */
	HTML_TT_ATTR_DEFER, /* defer */
	HTML_TT_ATTR_DIRNAME, /* dirname */
	HTML_TT_ATTR_DISABLED, /* disabled */
	HTML_TT_ATTR_DOWNLOAD, /* download */
	HTML_TT_ATTR_DRAGGABLE, /* draggable */
	HTML_TT_ATTR_ENCTYPE, /* enctype */
	HTML_TT_ATTR_ENTERKEYHINT, /* enterkeyhint */
	HTML_TT_ATTR_ELEMENTTIMING, /* elementtiming */
	HTML_TT_ATTR_FOR, /* for */
	HTML_TT_ATTR_FORM, /* form */
	HTML_TT_ATTR_FORMACTION, /* formaction */
	HTML_TT_ATTR_FORMENCTYPE, /* formenctype */
	HTML_TT_ATTR_FORMMETHOD, /* formmethod */
	HTML_TT_ATTR_FORMNOVALIDATE, /* formnovalidate */
	HTML_TT_ATTR_FORMTARGET, /* formtarget */
	HTML_TT_ATTR_HEADERS, /* headers */
	HTML_TT_ATTR_HEIGHT, /* height */
	HTML_TT_ATTR_HIDDEN, /* hidden */
	HTML_TT_ATTR_HIGH, /* high */
	HTML_TT_ATTR_HREF, /* href */
	HTML_TT_ATTR_HREFLANG, /* hreflang */
	HTML_TT_ATTR_HTTP_EQUIV, /* http-equiv */
	HTML_TT_ATTR_ID, /* id */
	HTML_TT_ATTR_INTEGRITY, /* integrity */
	HTML_TT_ATTR_INTRINSICSIZE, /* intrinsicsize */
	HTML_TT_ATTR_INPUTMODE, /* inputmode */
	HTML_TT_ATTR_ISMAP, /* ismap */
	HTML_TT_ATTR_ITEMPROP, /* itemprop */
	HTML_TT_ATTR_KIND, /* kind */
	HTML_TT_ATTR_LABEL, /* label */
	HTML_TT_ATTR_LANG, /* lang */
	HTML_TT_ATTR_LANGUAGE, /* language */
	HTML_TT_ATTR_LOADING, /* loading */
	HTML_TT_ATTR_LIST, /* list */
	HTML_TT_ATTR_LOOP, /* loop */
	HTML_TT_ATTR_LOW, /* low */
	HTML_TT_ATTR_MAX, /* max */
	HTML_TT_ATTR_MAXLENGTH, /* maxlength */
	HTML_TT_ATTR_MINLENGTH, /* minlength */
	HTML_TT_ATTR_MEDIA, /* media */
	HTML_TT_ATTR_METHOD, /* method */
	HTML_TT_ATTR_MIN, /* min */
	HTML_TT_ATTR_MULTIPLE, /* multiple */
	HTML_TT_ATTR_MUTED, /* muted */
	HTML_TT_ATTR_NAME, /* name */
	HTML_TT_ATTR_NOVALIDATE, /* novalidate */
	HTML_TT_ATTR_OPEN, /* open */
	HTML_TT_ATTR_OPTIMUM, /* optimum */
	HTML_TT_ATTR_PATTERN, /* pattern */
	HTML_TT_ATTR_PING, /* ping */
	HTML_TT_ATTR_PLACEHOLDER, /* placeholder */
	HTML_TT_ATTR_PLAYSINLINE, /* playsinline */
	HTML_TT_ATTR_POSTER, /* poster */
	HTML_TT_ATTR_PRELOAD, /* preload */
	HTML_TT_ATTR_READONLY, /* readonly */
	HTML_TT_ATTR_REFERRERPOLICY, /* referrerpolicy */
	HTML_TT_ATTR_REL, /* rel */
	HTML_TT_ATTR_REQUIRED, /* required */
	HTML_TT_ATTR_REVERSED, /* reversed */
	HTML_TT_ATTR_ROLE, /* role */
	HTML_TT_ATTR_ROWS, /* rows */
	HTML_TT_ATTR_ROWSPAN, /* rowspan */
	HTML_TT_ATTR_SANDBOX, /* sandbox */
	HTML_TT_ATTR_SCOPE, /* scope */
	HTML_TT_ATTR_SELECTED, /* selected */
	HTML_TT_ATTR_SHAPE, /* shape */
	HTML_TT_ATTR_SIZE, /* size */
	HTML_TT_ATTR_SIZES, /* sizes */
	HTML_TT_ATTR_SLOT, /* slot */
	HTML_TT_ATTR_SPAN, /* span */
	HTML_TT_ATTR_SPELLCHECK, /* spellcheck */
	HTML_TT_ATTR_SRC, /* src */
	HTML_TT_ATTR_SRCDOC, /* srcdoc */
	HTML_TT_ATTR_SRCLANG, /* srclang */
	HTML_TT_ATTR_SRCSET, /* srcset */
	HTML_TT_ATTR_START_ATTR, /* start */
	HTML_TT_ATTR_STEP, /* step */
	HTML_TT_ATTR_STYLE, /* style */
	HTML_TT_ATTR_TABINDEX, /* tabindex */
	HTML_TT_ATTR_TARGET, /* target */
	HTML_TT_ATTR_TITLE, /* title */
	HTML_TT_ATTR_TRANSLATE, /* translate */
	HTML_TT_ATTR_TYPE, /* type */
	HTML_TT_ATTR_USEMAP, /* usemap */
	HTML_TT_ATTR_VALUE, /* value */
	HTML_TT_ATTR_WIDTH, /* width */
	HTML_TT_ATTR_WRAP, /* wrap */
	HTML_TT_ATTR_END, /* end of attributes */
        HTML_TT_TAG_OPEN_DONE, /* done with opening tag? */
        HTML_TT_TEXT, /* regular text */
        HTML_TT_ERR_START, /* start of errors */
        HTML_TT_ERR_TAG_UNTERM, /* unmterminated tag */
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
