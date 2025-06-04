// AUTO-GENERATED

#include "../include/a.h"
#include "../include/abbr.h"
#include "../include/acronym.h"
#include "../include/address.h"
#include "../include/applet.h"
#include "../include/area.h"
#include "../include/aside.h"
#include "../include/audio.h"
#include "../include/b.h"
#include "../include/base.h"
#include "../include/basefont.h"
#include "../include/bdi.h"
#include "../include/bdo.h"
#include "../include/big.h"
#include "../include/blockquote.h"
#include "../include/body.h"
#include "../include/br.h"
#include "../include/button.h"
#include "../include/canvas.h"
#include "../include/caption.h"
#include "../include/center.h"
#include "../include/cite.h"
#include "../include/code.h"
#include "../include/col.h"
#include "../include/colgroup.h"
#include "../include/data.h"
#include "../include/datalist.h"
#include "../include/dd.h"
#include "../include/del.h"
#include "../include/details.h"
#include "../include/dfn.h"
#include "../include/dialog.h"
#include "../include/dir.h"
#include "../include/div.h"
#include "../include/dl.h"
#include "../include/dt.h"
#include "../include/em.h"
#include "../include/embed.h"
#include "../include/fieldset.h"
#include "../include/figcaption.h"
#include "../include/figure.h"
#include "../include/font.h"
#include "../include/footer.h"
#include "../include/form.h"
#include "../include/frame.h"
#include "../include/frameset.h"
#include "../include/h1.h"
#include "../include/h2.h"
#include "../include/h3.h"
#include "../include/h4.h"
#include "../include/h5.h"
#include "../include/h6.h"
#include "../include/head.h"
#include "../include/header.h"
#include "../include/hgroup.h"
#include "../include/hr.h"
#include "../include/html.h"
#include "../include/i.h"
#include "../include/iframe.h"
#include "../include/image.h"
#include "../include/img.h"
#include "../include/input.h"
#include "../include/ins.h"
#include "../include/kbd.h"
#include "../include/label.h"
#include "../include/legend.h"
#include "../include/li.h"
#include "../include/link.h"
#include "../include/main.h"
#include "../include/map.h"
#include "../include/mark.h"
#include "../include/marquee.h"
#include "../include/menu.h"
#include "../include/meta.h"
#include "../include/meter.h"
#include "../include/nav.h"
#include "../include/noframes.h"
#include "../include/noscript.h"
#include "../include/object.h"
#include "../include/ol.h"
#include "../include/optgroup.h"
#include "../include/option.h"
#include "../include/output.h"
#include "../include/p.h"
#include "../include/param.h"
#include "../include/picture.h"
#include "../include/pre.h"
#include "../include/progress.h"
#include "../include/q.h"
#include "../include/rp.h"
#include "../include/rt.h"
#include "../include/ruby.h"
#include "../include/s.h"
#include "../include/samp.h"
#include "../include/script.h"
#include "../include/search.h"
#include "../include/section.h"
#include "../include/select.h"
#include "../include/small.h"
#include "../include/source.h"
#include "../include/span.h"
#include "../include/strike.h"
#include "../include/strong.h"
#include "../include/style.h"
#include "../include/sub.h"
#include "../include/summary.h"
#include "../include/sup.h"
#include "../include/svg.h"
#include "../include/table.h"
#include "../include/tbody.h"
#include "../include/td.h"
#include "../include/template.h"
#include "../include/textarea.h"
#include "../include/tfoot.h"
#include "../include/th.h"
#include "../include/thead.h"
#include "../include/time.h"
#include "../include/title.h"
#include "../include/tr.h"
#include "../include/track.h"
#include "../include/tt.h"
#include "../include/u.h"
#include "../include/ul.h"
#include "../include/var.h"
#include "../include/video.h"
#include "../include/wbr.h"
#include "../include/dump.h"
#include "../../html.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

/**
 * print indentation:
 *
 * args:
 *  @os: output stream
 *  @n:  number of spaces
 *
 * ret:
 *  none
 */
static void indent(std::ostream &os, int n);

/**
 * indent and then print string:
 *
 * args:
 *  @os: output stream
 *  @s:  string to print
 *
 * ret:
 *  none
 */
static void indent_print(std::ostream &os, int n, const std::string &s);

/**
 * print html_elem type:
 *
 * args:
 *  @os:   output stream
 *  @n:    indent
 *  @type: type
 *
 * ret:
 *  none
 */
static void type(std::ostream &os, int n, const std::string &type);

html_elem_dump_visitor::html_elem_dump_visitor(void)
        : _os {std::cout}
{
}

html_elem_dump_visitor::html_elem_dump_visitor(int start)
        : _os {std::cout},
        _indent {start}
{
}

html_elem_dump_visitor::html_elem_dump_visitor(std::ostream &os)
        : _os {os}
{
}

html_elem_dump_visitor::html_elem_dump_visitor(int start, std::ostream &os)
        : _os {os},
        _indent {start}
{
        if (_indent < 0)
                _indent = 0;
}

html_elem_dump_visitor::~html_elem_dump_visitor()
{
}

void html_elem_dump_visitor::dump_internal_node(const std::string &t,
                                                const html_internal_elem &elem)
{
        indent_print(_os, _indent, "{\n");

        _indent += 2;
        type(_os, _indent, t);

        indent_print(_os, _indent, "\"attributes\": {\n");
        _indent += 2;
        for (std::size_t i = 0; i < elem.attr_len(); i++) {
                auto attrtype = elem.attr_get(i);
                auto name = std::string{attr_name(attrtype)};
                auto val = elem.attr_get_by_idx(i);

                indent(_os, _indent);

                std::cout << "\"" << name << "\": ";
                if (val == "")
                        std::cout << "true";
                else
                        std::cout << "\"" << val << "\"";

                if (i != elem.attr_len() - 1)
                        std::cout << ",";

                std::cout << "\n";
        }
        _indent -= 2;
        indent_print(_os, _indent, "},\n");

        indent_print(_os, _indent, "\"children\": [\n");
        _indent += 2;
        for (std::size_t i = 0; i < elem.child_len(); i++) {
                elem.get_cchild(i).get()->visit(*this);
                if (i != elem.child_len() - 1)
                        std::cout << ",";
                std::cout << "\n";
        }
        _indent -= 2;
        indent_print(_os, _indent, "]");

        _indent -= 2;
        indent_print(_os, _indent, "\n}");

}

static void indent(std::ostream &os, int n)
{
        os << std::string(n, ' ');
}

static void indent_print(std::ostream &os, int n, const std::string &s)
{
        indent(os, n);
        std::cout << s;
}

static void type(std::ostream &os, int n, const std::string &type)
{
        indent(os, n);
        os << "\"type\": \"" << type << "\",\n";
}

void html_elem_dump_visitor::visit(const html_text_elem &elem)
{
        indent_print(_os, _indent, "{\n");

        type(_os, _indent + 2, "text");

        std::string s {"\"c\": \""};
        switch (elem.c()) {
        case '\n':
                s += "\\n";
                break;
        default:
                s += elem.c();
                break;
        }
        s += "\"\n";

        indent_print(_os, _indent + 2, s);

        indent_print(_os, _indent, "}");
}

void html_elem_dump_visitor::visit(const html_a_elem &elem)
{
        dump_internal_node("a", elem);
}

void html_elem_dump_visitor::visit(const html_abbr_elem &elem)
{
        dump_internal_node("abbr", elem);
}

void html_elem_dump_visitor::visit(const html_acronym_elem &elem)
{
        dump_internal_node("acronym", elem);
}

void html_elem_dump_visitor::visit(const html_address_elem &elem)
{
        dump_internal_node("address", elem);
}

void html_elem_dump_visitor::visit(const html_applet_elem &elem)
{
        dump_internal_node("applet", elem);
}

void html_elem_dump_visitor::visit(const html_area_elem &elem)
{
        dump_internal_node("area", elem);
}

void html_elem_dump_visitor::visit(const html_aside_elem &elem)
{
        dump_internal_node("aside", elem);
}

void html_elem_dump_visitor::visit(const html_audio_elem &elem)
{
        dump_internal_node("audio", elem);
}

void html_elem_dump_visitor::visit(const html_b_elem &elem)
{
        dump_internal_node("b", elem);
}

void html_elem_dump_visitor::visit(const html_base_elem &elem)
{
        dump_internal_node("base", elem);
}

void html_elem_dump_visitor::visit(const html_basefont_elem &elem)
{
        dump_internal_node("basefont", elem);
}

void html_elem_dump_visitor::visit(const html_bdi_elem &elem)
{
        dump_internal_node("bdi", elem);
}

void html_elem_dump_visitor::visit(const html_bdo_elem &elem)
{
        dump_internal_node("bdo", elem);
}

void html_elem_dump_visitor::visit(const html_big_elem &elem)
{
        dump_internal_node("big", elem);
}

void html_elem_dump_visitor::visit(const html_blockquote_elem &elem)
{
        dump_internal_node("blockquote", elem);
}

void html_elem_dump_visitor::visit(const html_body_elem &elem)
{
        dump_internal_node("body", elem);
}

void html_elem_dump_visitor::visit(const html_br_elem &elem)
{
        dump_internal_node("br", elem);
}

void html_elem_dump_visitor::visit(const html_button_elem &elem)
{
        dump_internal_node("button", elem);
}

void html_elem_dump_visitor::visit(const html_canvas_elem &elem)
{
        dump_internal_node("canvas", elem);
}

void html_elem_dump_visitor::visit(const html_caption_elem &elem)
{
        dump_internal_node("caption", elem);
}

void html_elem_dump_visitor::visit(const html_center_elem &elem)
{
        dump_internal_node("center", elem);
}

void html_elem_dump_visitor::visit(const html_cite_elem &elem)
{
        dump_internal_node("cite", elem);
}

void html_elem_dump_visitor::visit(const html_code_elem &elem)
{
        dump_internal_node("code", elem);
}

void html_elem_dump_visitor::visit(const html_col_elem &elem)
{
        dump_internal_node("col", elem);
}

void html_elem_dump_visitor::visit(const html_colgroup_elem &elem)
{
        dump_internal_node("colgroup", elem);
}

void html_elem_dump_visitor::visit(const html_data_elem &elem)
{
        dump_internal_node("data", elem);
}

void html_elem_dump_visitor::visit(const html_datalist_elem &elem)
{
        dump_internal_node("datalist", elem);
}

void html_elem_dump_visitor::visit(const html_dd_elem &elem)
{
        dump_internal_node("dd", elem);
}

void html_elem_dump_visitor::visit(const html_del_elem &elem)
{
        dump_internal_node("del", elem);
}

void html_elem_dump_visitor::visit(const html_details_elem &elem)
{
        dump_internal_node("details", elem);
}

void html_elem_dump_visitor::visit(const html_dfn_elem &elem)
{
        dump_internal_node("dfn", elem);
}

void html_elem_dump_visitor::visit(const html_dialog_elem &elem)
{
        dump_internal_node("dialog", elem);
}

void html_elem_dump_visitor::visit(const html_dir_elem &elem)
{
        dump_internal_node("dir", elem);
}

void html_elem_dump_visitor::visit(const html_div_elem &elem)
{
        dump_internal_node("div", elem);
}

void html_elem_dump_visitor::visit(const html_dl_elem &elem)
{
        dump_internal_node("dl", elem);
}

void html_elem_dump_visitor::visit(const html_dt_elem &elem)
{
        dump_internal_node("dt", elem);
}

void html_elem_dump_visitor::visit(const html_em_elem &elem)
{
        dump_internal_node("em", elem);
}

void html_elem_dump_visitor::visit(const html_embed_elem &elem)
{
        dump_internal_node("embed", elem);
}

void html_elem_dump_visitor::visit(const html_fieldset_elem &elem)
{
        dump_internal_node("fieldset", elem);
}

void html_elem_dump_visitor::visit(const html_figcaption_elem &elem)
{
        dump_internal_node("figcaption", elem);
}

void html_elem_dump_visitor::visit(const html_figure_elem &elem)
{
        dump_internal_node("figure", elem);
}

void html_elem_dump_visitor::visit(const html_font_elem &elem)
{
        dump_internal_node("font", elem);
}

void html_elem_dump_visitor::visit(const html_footer_elem &elem)
{
        dump_internal_node("footer", elem);
}

void html_elem_dump_visitor::visit(const html_form_elem &elem)
{
        dump_internal_node("form", elem);
}

void html_elem_dump_visitor::visit(const html_frame_elem &elem)
{
        dump_internal_node("frame", elem);
}

void html_elem_dump_visitor::visit(const html_frameset_elem &elem)
{
        dump_internal_node("frameset", elem);
}

void html_elem_dump_visitor::visit(const html_h1_elem &elem)
{
        dump_internal_node("h1", elem);
}

void html_elem_dump_visitor::visit(const html_h2_elem &elem)
{
        dump_internal_node("h2", elem);
}

void html_elem_dump_visitor::visit(const html_h3_elem &elem)
{
        dump_internal_node("h3", elem);
}

void html_elem_dump_visitor::visit(const html_h4_elem &elem)
{
        dump_internal_node("h4", elem);
}

void html_elem_dump_visitor::visit(const html_h5_elem &elem)
{
        dump_internal_node("h5", elem);
}

void html_elem_dump_visitor::visit(const html_h6_elem &elem)
{
        dump_internal_node("h6", elem);
}

void html_elem_dump_visitor::visit(const html_head_elem &elem)
{
        dump_internal_node("head", elem);
}

void html_elem_dump_visitor::visit(const html_header_elem &elem)
{
        dump_internal_node("header", elem);
}

void html_elem_dump_visitor::visit(const html_hgroup_elem &elem)
{
        dump_internal_node("hgroup", elem);
}

void html_elem_dump_visitor::visit(const html_hr_elem &elem)
{
        dump_internal_node("hr", elem);
}

void html_elem_dump_visitor::visit(const html_html_elem &elem)
{
        dump_internal_node("html", elem);
}

void html_elem_dump_visitor::visit(const html_i_elem &elem)
{
        dump_internal_node("i", elem);
}

void html_elem_dump_visitor::visit(const html_iframe_elem &elem)
{
        dump_internal_node("iframe", elem);
}

void html_elem_dump_visitor::visit(const html_image_elem &elem)
{
        dump_internal_node("image", elem);
}

void html_elem_dump_visitor::visit(const html_img_elem &elem)
{
        dump_internal_node("img", elem);
}

void html_elem_dump_visitor::visit(const html_input_elem &elem)
{
        dump_internal_node("input", elem);
}

void html_elem_dump_visitor::visit(const html_ins_elem &elem)
{
        dump_internal_node("ins", elem);
}

void html_elem_dump_visitor::visit(const html_kbd_elem &elem)
{
        dump_internal_node("kbd", elem);
}

void html_elem_dump_visitor::visit(const html_label_elem &elem)
{
        dump_internal_node("label", elem);
}

void html_elem_dump_visitor::visit(const html_legend_elem &elem)
{
        dump_internal_node("legend", elem);
}

void html_elem_dump_visitor::visit(const html_li_elem &elem)
{
        dump_internal_node("li", elem);
}

void html_elem_dump_visitor::visit(const html_link_elem &elem)
{
        dump_internal_node("link", elem);
}

void html_elem_dump_visitor::visit(const html_main_elem &elem)
{
        dump_internal_node("main", elem);
}

void html_elem_dump_visitor::visit(const html_map_elem &elem)
{
        dump_internal_node("map", elem);
}

void html_elem_dump_visitor::visit(const html_mark_elem &elem)
{
        dump_internal_node("mark", elem);
}

void html_elem_dump_visitor::visit(const html_marquee_elem &elem)
{
        dump_internal_node("marquee", elem);
}

void html_elem_dump_visitor::visit(const html_menu_elem &elem)
{
        dump_internal_node("menu", elem);
}

void html_elem_dump_visitor::visit(const html_meta_elem &elem)
{
        dump_internal_node("meta", elem);
}

void html_elem_dump_visitor::visit(const html_meter_elem &elem)
{
        dump_internal_node("meter", elem);
}

void html_elem_dump_visitor::visit(const html_nav_elem &elem)
{
        dump_internal_node("nav", elem);
}

void html_elem_dump_visitor::visit(const html_noframes_elem &elem)
{
        dump_internal_node("noframes", elem);
}

void html_elem_dump_visitor::visit(const html_noscript_elem &elem)
{
        dump_internal_node("noscript", elem);
}

void html_elem_dump_visitor::visit(const html_object_elem &elem)
{
        dump_internal_node("object", elem);
}

void html_elem_dump_visitor::visit(const html_ol_elem &elem)
{
        dump_internal_node("ol", elem);
}

void html_elem_dump_visitor::visit(const html_optgroup_elem &elem)
{
        dump_internal_node("optgroup", elem);
}

void html_elem_dump_visitor::visit(const html_option_elem &elem)
{
        dump_internal_node("option", elem);
}

void html_elem_dump_visitor::visit(const html_output_elem &elem)
{
        dump_internal_node("output", elem);
}

void html_elem_dump_visitor::visit(const html_p_elem &elem)
{
        dump_internal_node("p", elem);
}

void html_elem_dump_visitor::visit(const html_param_elem &elem)
{
        dump_internal_node("param", elem);
}

void html_elem_dump_visitor::visit(const html_picture_elem &elem)
{
        dump_internal_node("picture", elem);
}

void html_elem_dump_visitor::visit(const html_pre_elem &elem)
{
        dump_internal_node("pre", elem);
}

void html_elem_dump_visitor::visit(const html_progress_elem &elem)
{
        dump_internal_node("progress", elem);
}

void html_elem_dump_visitor::visit(const html_q_elem &elem)
{
        dump_internal_node("q", elem);
}

void html_elem_dump_visitor::visit(const html_rp_elem &elem)
{
        dump_internal_node("rp", elem);
}

void html_elem_dump_visitor::visit(const html_rt_elem &elem)
{
        dump_internal_node("rt", elem);
}

void html_elem_dump_visitor::visit(const html_ruby_elem &elem)
{
        dump_internal_node("ruby", elem);
}

void html_elem_dump_visitor::visit(const html_s_elem &elem)
{
        dump_internal_node("s", elem);
}

void html_elem_dump_visitor::visit(const html_samp_elem &elem)
{
        dump_internal_node("samp", elem);
}

void html_elem_dump_visitor::visit(const html_script_elem &elem)
{
        dump_internal_node("script", elem);
}

void html_elem_dump_visitor::visit(const html_search_elem &elem)
{
        dump_internal_node("search", elem);
}

void html_elem_dump_visitor::visit(const html_section_elem &elem)
{
        dump_internal_node("section", elem);
}

void html_elem_dump_visitor::visit(const html_select_elem &elem)
{
        dump_internal_node("select", elem);
}

void html_elem_dump_visitor::visit(const html_small_elem &elem)
{
        dump_internal_node("small", elem);
}

void html_elem_dump_visitor::visit(const html_source_elem &elem)
{
        dump_internal_node("source", elem);
}

void html_elem_dump_visitor::visit(const html_span_elem &elem)
{
        dump_internal_node("span", elem);
}

void html_elem_dump_visitor::visit(const html_strike_elem &elem)
{
        dump_internal_node("strike", elem);
}

void html_elem_dump_visitor::visit(const html_strong_elem &elem)
{
        dump_internal_node("strong", elem);
}

void html_elem_dump_visitor::visit(const html_style_elem &elem)
{
        dump_internal_node("style", elem);
}

void html_elem_dump_visitor::visit(const html_sub_elem &elem)
{
        dump_internal_node("sub", elem);
}

void html_elem_dump_visitor::visit(const html_summary_elem &elem)
{
        dump_internal_node("summary", elem);
}

void html_elem_dump_visitor::visit(const html_sup_elem &elem)
{
        dump_internal_node("sup", elem);
}

void html_elem_dump_visitor::visit(const html_svg_elem &elem)
{
        dump_internal_node("svg", elem);
}

void html_elem_dump_visitor::visit(const html_table_elem &elem)
{
        dump_internal_node("table", elem);
}

void html_elem_dump_visitor::visit(const html_tbody_elem &elem)
{
        dump_internal_node("tbody", elem);
}

void html_elem_dump_visitor::visit(const html_td_elem &elem)
{
        dump_internal_node("td", elem);
}

void html_elem_dump_visitor::visit(const html_template_elem &elem)
{
        dump_internal_node("template", elem);
}

void html_elem_dump_visitor::visit(const html_textarea_elem &elem)
{
        dump_internal_node("textarea", elem);
}

void html_elem_dump_visitor::visit(const html_tfoot_elem &elem)
{
        dump_internal_node("tfoot", elem);
}

void html_elem_dump_visitor::visit(const html_th_elem &elem)
{
        dump_internal_node("th", elem);
}

void html_elem_dump_visitor::visit(const html_thead_elem &elem)
{
        dump_internal_node("thead", elem);
}

void html_elem_dump_visitor::visit(const html_time_elem &elem)
{
        dump_internal_node("time", elem);
}

void html_elem_dump_visitor::visit(const html_title_elem &elem)
{
        dump_internal_node("title", elem);
}

void html_elem_dump_visitor::visit(const html_tr_elem &elem)
{
        dump_internal_node("tr", elem);
}

void html_elem_dump_visitor::visit(const html_track_elem &elem)
{
        dump_internal_node("track", elem);
}

void html_elem_dump_visitor::visit(const html_tt_elem &elem)
{
        dump_internal_node("tt", elem);
}

void html_elem_dump_visitor::visit(const html_u_elem &elem)
{
        dump_internal_node("u", elem);
}

void html_elem_dump_visitor::visit(const html_ul_elem &elem)
{
        dump_internal_node("ul", elem);
}

void html_elem_dump_visitor::visit(const html_var_elem &elem)
{
        dump_internal_node("var", elem);
}

void html_elem_dump_visitor::visit(const html_video_elem &elem)
{
        dump_internal_node("video", elem);
}

void html_elem_dump_visitor::visit(const html_wbr_elem &elem)
{
        dump_internal_node("wbr", elem);
}
