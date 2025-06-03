// AUTO-GENERATED

#ifndef HTML_ELEM_DUMP_VISITOR_H
#define HTML_ELEM_DUMP_VISITOR_H

#include "cvisitor.h"
#include "internal.h"
#include "text.h"
#include <string>
#include <iostream>

// dump visitor
class html_elem_dump_visitor : public html_elem_cvisitor {
private:
        std::ostream &_os;         // output stream
        int           _indent {0}; // indentation

        /**
         * dump internal node:
         *
         * args:
         *   @t:    element type
         *   @elem: element
         **/
        void dump_internal_node(const std::string& t,
                                const html_internal_elem &elem);
public:
        // default (_indent = 0 and _os = std::cout)
        html_elem_dump_visitor(void);
        // with starting indentation
        html_elem_dump_visitor(int start);
        // with output stream
        html_elem_dump_visitor(std::ostream &os);
        // with starting indentation and output stream
        html_elem_dump_visitor(int start, std::ostream &os);
        ~html_elem_dump_visitor();

	void visit(const html_a_elem &elem);
	void visit(const html_abbr_elem &elem);
	void visit(const html_acronym_elem &elem);
	void visit(const html_address_elem &elem);
	void visit(const html_applet_elem &elem);
	void visit(const html_area_elem &elem);
	void visit(const html_aside_elem &elem);
	void visit(const html_audio_elem &elem);
	void visit(const html_b_elem &elem);
	void visit(const html_base_elem &elem);
	void visit(const html_basefont_elem &elem);
	void visit(const html_bdi_elem &elem);
	void visit(const html_bdo_elem &elem);
	void visit(const html_big_elem &elem);
	void visit(const html_blockquote_elem &elem);
	void visit(const html_body_elem &elem);
	void visit(const html_br_elem &elem);
	void visit(const html_button_elem &elem);
	void visit(const html_canvas_elem &elem);
	void visit(const html_caption_elem &elem);
	void visit(const html_center_elem &elem);
	void visit(const html_cite_elem &elem);
	void visit(const html_code_elem &elem);
	void visit(const html_col_elem &elem);
	void visit(const html_colgroup_elem &elem);
	void visit(const html_data_elem &elem);
	void visit(const html_datalist_elem &elem);
	void visit(const html_dd_elem &elem);
	void visit(const html_del_elem &elem);
	void visit(const html_details_elem &elem);
	void visit(const html_dfn_elem &elem);
	void visit(const html_dialog_elem &elem);
	void visit(const html_dir_elem &elem);
	void visit(const html_div_elem &elem);
	void visit(const html_dl_elem &elem);
	void visit(const html_dt_elem &elem);
	void visit(const html_em_elem &elem);
	void visit(const html_embed_elem &elem);
	void visit(const html_fieldset_elem &elem);
	void visit(const html_figcaption_elem &elem);
	void visit(const html_figure_elem &elem);
	void visit(const html_font_elem &elem);
	void visit(const html_footer_elem &elem);
	void visit(const html_form_elem &elem);
	void visit(const html_frame_elem &elem);
	void visit(const html_frameset_elem &elem);
	void visit(const html_h1_elem &elem);
	void visit(const html_h2_elem &elem);
	void visit(const html_h3_elem &elem);
	void visit(const html_h4_elem &elem);
	void visit(const html_h5_elem &elem);
	void visit(const html_h6_elem &elem);
	void visit(const html_head_elem &elem);
	void visit(const html_header_elem &elem);
	void visit(const html_hgroup_elem &elem);
	void visit(const html_hr_elem &elem);
	void visit(const html_html_elem &elem);
	void visit(const html_i_elem &elem);
	void visit(const html_iframe_elem &elem);
	void visit(const html_image_elem &elem);
	void visit(const html_img_elem &elem);
	void visit(const html_input_elem &elem);
	void visit(const html_ins_elem &elem);
	void visit(const html_kbd_elem &elem);
	void visit(const html_label_elem &elem);
	void visit(const html_legend_elem &elem);
	void visit(const html_li_elem &elem);
	void visit(const html_link_elem &elem);
	void visit(const html_main_elem &elem);
	void visit(const html_map_elem &elem);
	void visit(const html_mark_elem &elem);
	void visit(const html_marquee_elem &elem);
	void visit(const html_menu_elem &elem);
	void visit(const html_meta_elem &elem);
	void visit(const html_meter_elem &elem);
	void visit(const html_nav_elem &elem);
	void visit(const html_noframes_elem &elem);
	void visit(const html_noscript_elem &elem);
	void visit(const html_object_elem &elem);
	void visit(const html_ol_elem &elem);
	void visit(const html_optgroup_elem &elem);
	void visit(const html_option_elem &elem);
	void visit(const html_output_elem &elem);
	void visit(const html_p_elem &elem);
	void visit(const html_param_elem &elem);
	void visit(const html_picture_elem &elem);
	void visit(const html_pre_elem &elem);
	void visit(const html_progress_elem &elem);
	void visit(const html_q_elem &elem);
	void visit(const html_rp_elem &elem);
	void visit(const html_rt_elem &elem);
	void visit(const html_ruby_elem &elem);
	void visit(const html_s_elem &elem);
	void visit(const html_samp_elem &elem);
	void visit(const html_script_elem &elem);
	void visit(const html_search_elem &elem);
	void visit(const html_section_elem &elem);
	void visit(const html_select_elem &elem);
	void visit(const html_small_elem &elem);
	void visit(const html_source_elem &elem);
	void visit(const html_span_elem &elem);
	void visit(const html_strike_elem &elem);
	void visit(const html_strong_elem &elem);
	void visit(const html_style_elem &elem);
	void visit(const html_sub_elem &elem);
	void visit(const html_summary_elem &elem);
	void visit(const html_sup_elem &elem);
	void visit(const html_svg_elem &elem);
	void visit(const html_table_elem &elem);
	void visit(const html_tbody_elem &elem);
	void visit(const html_td_elem &elem);
	void visit(const html_template_elem &elem);
	void visit(const html_textarea_elem &elem);
	void visit(const html_tfoot_elem &elem);
	void visit(const html_th_elem &elem);
	void visit(const html_thead_elem &elem);
	void visit(const html_time_elem &elem);
	void visit(const html_title_elem &elem);
	void visit(const html_tr_elem &elem);
	void visit(const html_track_elem &elem);
	void visit(const html_tt_elem &elem);
	void visit(const html_u_elem &elem);
	void visit(const html_ul_elem &elem);
	void visit(const html_var_elem &elem);
	void visit(const html_video_elem &elem);
	void visit(const html_wbr_elem &elem);
        void visit(const html_text_elem &elem);
};

#endif // #ifndef HTML_ELEM_DUMP_VISITOR_H
