#include "elem/include/text.h"
#include "elem/include/html.h"
#include "elem/include/dump.h"
#include "html.h"
#include "elem/include/factory.h"
#include <iostream>
#include <exception>
#include <unordered_map>
#include <memory>

extern "C" {
extern char *yytext;
extern int yyleng;
int yylex(void);
}

static const std::unordered_map<int,int> enders {
        { HTML_TT_A_OPEN, HTML_TT_A_CLOSE },
        { HTML_TT_ABBR_OPEN, HTML_TT_ABBR_CLOSE },
        { HTML_TT_ACRONYM_OPEN, HTML_TT_ACRONYM_CLOSE },
        { HTML_TT_ADDRESS_OPEN, HTML_TT_ADDRESS_CLOSE },
        { HTML_TT_APPLET_OPEN, HTML_TT_APPLET_CLOSE },
        { HTML_TT_AREA_OPEN, HTML_TT_AREA_CLOSE },
        { HTML_TT_ASIDE_OPEN, HTML_TT_ASIDE_CLOSE },
        { HTML_TT_AUDIO_OPEN, HTML_TT_AUDIO_CLOSE },
        { HTML_TT_B_OPEN, HTML_TT_B_CLOSE },
        { HTML_TT_BASE_OPEN, HTML_TT_BASE_CLOSE },
        { HTML_TT_BASEFONT_OPEN, HTML_TT_BASEFONT_CLOSE },
        { HTML_TT_BDI_OPEN, HTML_TT_BDI_CLOSE },
        { HTML_TT_BDO_OPEN, HTML_TT_BDO_CLOSE },
        { HTML_TT_BIG_OPEN, HTML_TT_BIG_CLOSE },
        { HTML_TT_BLOCKQUOTE_OPEN, HTML_TT_BLOCKQUOTE_CLOSE },
        { HTML_TT_BODY_OPEN, HTML_TT_BODY_CLOSE },
        { HTML_TT_BR_OPEN, HTML_TT_BR_CLOSE },
        { HTML_TT_BUTTON_OPEN, HTML_TT_BUTTON_CLOSE },
        { HTML_TT_CANVAS_OPEN, HTML_TT_CANVAS_CLOSE },
        { HTML_TT_CAPTION_OPEN, HTML_TT_CAPTION_CLOSE },
        { HTML_TT_CENTER_OPEN, HTML_TT_CENTER_CLOSE },
        { HTML_TT_CITE_OPEN, HTML_TT_CITE_CLOSE },
        { HTML_TT_CODE_OPEN, HTML_TT_CODE_CLOSE },
        { HTML_TT_COL_OPEN, HTML_TT_COL_CLOSE },
        { HTML_TT_COLGROUP_OPEN, HTML_TT_COLGROUP_CLOSE },
        { HTML_TT_DATA_OPEN, HTML_TT_DATA_CLOSE },
        { HTML_TT_DATALIST_OPEN, HTML_TT_DATALIST_CLOSE },
        { HTML_TT_DD_OPEN, HTML_TT_DD_CLOSE },
        { HTML_TT_DEL_OPEN, HTML_TT_DEL_CLOSE },
        { HTML_TT_DETAILS_OPEN, HTML_TT_DETAILS_CLOSE },
        { HTML_TT_DFN_OPEN, HTML_TT_DFN_CLOSE },
        { HTML_TT_DIALOG_OPEN, HTML_TT_DIALOG_CLOSE },
        { HTML_TT_DIR_OPEN, HTML_TT_DIR_CLOSE },
        { HTML_TT_DIV_OPEN, HTML_TT_DIV_CLOSE },
        { HTML_TT_DL_OPEN, HTML_TT_DL_CLOSE },
        { HTML_TT_DT_OPEN, HTML_TT_DT_CLOSE },
        { HTML_TT_EM_OPEN, HTML_TT_EM_CLOSE },
        { HTML_TT_EMBED_OPEN, HTML_TT_EMBED_CLOSE },
        { HTML_TT_FIELDSET_OPEN, HTML_TT_FIELDSET_CLOSE },
        { HTML_TT_FIGCAPTION_OPEN, HTML_TT_FIGCAPTION_CLOSE },
        { HTML_TT_FIGURE_OPEN, HTML_TT_FIGURE_CLOSE },
        { HTML_TT_FONT_OPEN, HTML_TT_FONT_CLOSE },
        { HTML_TT_FOOTER_OPEN, HTML_TT_FOOTER_CLOSE },
        { HTML_TT_FORM_OPEN, HTML_TT_FORM_CLOSE },
        { HTML_TT_FRAME_OPEN, HTML_TT_FRAME_CLOSE },
        { HTML_TT_FRAMESET_OPEN, HTML_TT_FRAMESET_CLOSE },
        { HTML_TT_H1_OPEN, HTML_TT_H1_CLOSE },
        { HTML_TT_H2_OPEN, HTML_TT_H2_CLOSE },
        { HTML_TT_H3_OPEN, HTML_TT_H3_CLOSE },
        { HTML_TT_H4_OPEN, HTML_TT_H4_CLOSE },
        { HTML_TT_H5_OPEN, HTML_TT_H5_CLOSE },
        { HTML_TT_H6_OPEN, HTML_TT_H6_CLOSE },
        { HTML_TT_HEAD_OPEN, HTML_TT_HEAD_CLOSE },
        { HTML_TT_HEADER_OPEN, HTML_TT_HEADER_CLOSE },
        { HTML_TT_HGROUP_OPEN, HTML_TT_HGROUP_CLOSE },
        { HTML_TT_HR_OPEN, HTML_TT_HR_CLOSE },
        { HTML_TT_HTML_OPEN, HTML_TT_HTML_CLOSE },
        { HTML_TT_I_OPEN, HTML_TT_I_CLOSE },
        { HTML_TT_IFRAME_OPEN, HTML_TT_IFRAME_CLOSE },
        { HTML_TT_IMG_OPEN, HTML_TT_IMG_CLOSE },
        { HTML_TT_INPUT_OPEN, HTML_TT_INPUT_CLOSE },
        { HTML_TT_INS_OPEN, HTML_TT_INS_CLOSE },
        { HTML_TT_KBD_OPEN, HTML_TT_KBD_CLOSE },
        { HTML_TT_LABEL_OPEN, HTML_TT_LABEL_CLOSE },
        { HTML_TT_LEGEND_OPEN, HTML_TT_LEGEND_CLOSE },
        { HTML_TT_LI_OPEN, HTML_TT_LI_CLOSE },
        { HTML_TT_LINK_OPEN, HTML_TT_LINK_CLOSE },
        { HTML_TT_MAIN_OPEN, HTML_TT_MAIN_CLOSE },
        { HTML_TT_MAP_OPEN, HTML_TT_MAP_CLOSE },
        { HTML_TT_MARK_OPEN, HTML_TT_MARK_CLOSE },
        { HTML_TT_MENU_OPEN, HTML_TT_MENU_CLOSE },
        { HTML_TT_META_OPEN, HTML_TT_META_CLOSE },
        { HTML_TT_METER_OPEN, HTML_TT_METER_CLOSE },
        { HTML_TT_NAV_OPEN, HTML_TT_NAV_CLOSE },
        { HTML_TT_NOFRAMES_OPEN, HTML_TT_NOFRAMES_CLOSE },
        { HTML_TT_NOSCRIPT_OPEN, HTML_TT_NOSCRIPT_CLOSE },
        { HTML_TT_OBJECT_OPEN, HTML_TT_OBJECT_CLOSE },
        { HTML_TT_OL_OPEN, HTML_TT_OL_CLOSE },
        { HTML_TT_OPTGROUP_OPEN, HTML_TT_OPTGROUP_CLOSE },
        { HTML_TT_OPTION_OPEN, HTML_TT_OPTION_CLOSE },
        { HTML_TT_OUTPUT_OPEN, HTML_TT_OUTPUT_CLOSE },
        { HTML_TT_P_OPEN, HTML_TT_P_CLOSE },
        { HTML_TT_PARAM_OPEN, HTML_TT_PARAM_CLOSE },
        { HTML_TT_PICTURE_OPEN, HTML_TT_PICTURE_CLOSE },
        { HTML_TT_PRE_OPEN, HTML_TT_PRE_CLOSE },
        { HTML_TT_PROGRESS_OPEN, HTML_TT_PROGRESS_CLOSE },
        { HTML_TT_Q_OPEN, HTML_TT_Q_CLOSE },
        { HTML_TT_RP_OPEN, HTML_TT_RP_CLOSE },
        { HTML_TT_RT_OPEN, HTML_TT_RT_CLOSE },
        { HTML_TT_RUBY_OPEN, HTML_TT_RUBY_CLOSE },
        { HTML_TT_S_OPEN, HTML_TT_S_CLOSE },
        { HTML_TT_SAMP_OPEN, HTML_TT_SAMP_CLOSE },
        { HTML_TT_SCRIPT_OPEN, HTML_TT_SCRIPT_CLOSE },
        { HTML_TT_SEARCH_OPEN, HTML_TT_SEARCH_CLOSE },
        { HTML_TT_SECTION_OPEN, HTML_TT_SECTION_CLOSE },
        { HTML_TT_SELECT_OPEN, HTML_TT_SELECT_CLOSE },
        { HTML_TT_SMALL_OPEN, HTML_TT_SMALL_CLOSE },
        { HTML_TT_SOURCE_OPEN, HTML_TT_SOURCE_CLOSE },
        { HTML_TT_SPAN_OPEN, HTML_TT_SPAN_CLOSE },
        { HTML_TT_STRIKE_OPEN, HTML_TT_STRIKE_CLOSE },
        { HTML_TT_STRONG_OPEN, HTML_TT_STRONG_CLOSE },
        { HTML_TT_STYLE_OPEN, HTML_TT_STYLE_CLOSE },
        { HTML_TT_SUB_OPEN, HTML_TT_SUB_CLOSE },
        { HTML_TT_SUMMARY_OPEN, HTML_TT_SUMMARY_CLOSE },
        { HTML_TT_SUP_OPEN, HTML_TT_SUP_CLOSE },
        { HTML_TT_SVG_OPEN, HTML_TT_SVG_CLOSE },
        { HTML_TT_TABLE_OPEN, HTML_TT_TABLE_CLOSE },
        { HTML_TT_TBODY_OPEN, HTML_TT_TBODY_CLOSE },
        { HTML_TT_TD_OPEN, HTML_TT_TD_CLOSE },
        { HTML_TT_TEMPLATE_OPEN, HTML_TT_TEMPLATE_CLOSE },
        { HTML_TT_TEXTAREA_OPEN, HTML_TT_TEXTAREA_CLOSE },
        { HTML_TT_TFOOT_OPEN, HTML_TT_TFOOT_CLOSE },
        { HTML_TT_TH_OPEN, HTML_TT_TH_CLOSE },
        { HTML_TT_THEAD_OPEN, HTML_TT_THEAD_CLOSE },
        { HTML_TT_TIME_OPEN, HTML_TT_TIME_CLOSE },
        { HTML_TT_TITLE_OPEN, HTML_TT_TITLE_CLOSE },
        { HTML_TT_TR_OPEN, HTML_TT_TR_CLOSE },
        { HTML_TT_TRACK_OPEN, HTML_TT_TRACK_CLOSE },
        { HTML_TT_TT_OPEN, HTML_TT_TT_CLOSE },
        { HTML_TT_U_OPEN, HTML_TT_U_CLOSE },
        { HTML_TT_UL_OPEN, HTML_TT_UL_CLOSE },
        { HTML_TT_VAR_OPEN, HTML_TT_VAR_CLOSE },
        { HTML_TT_VIDEO_OPEN, HTML_TT_VIDEO_CLOSE },
        { HTML_TT_WBR_OPEN, HTML_TT_WBR_CLOSE },
        { HTML_TT_COMMENT_OPEN, HTML_TT_COMMENT_CLOSE },
};

int main(void)
{
        html_elem_factory f;
        auto tt = 0;

        while ((tt = yylex()) && !is_err(tt)) {
                if (tt != HTML_TT_HTML_OPEN)
                        continue;

                try {
                        auto hp = f.html();

                        while ((tt = yylex()) != HTML_TT_OPEN_DONE)
                                ;

                        while ((tt = yylex()) == HTML_TT_TEXT)
                                hp.get()->append_child(f.text(*yytext));

                        html_elem_dump_visitor dump {};
                        dump.visit(*hp.get());
                        std::cout << "\n";
                } catch (const std::exception &e) {
                        std::cout << e.what() << std::endl;
                }

        }
}
