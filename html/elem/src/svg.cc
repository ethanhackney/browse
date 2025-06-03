#include "../include/svg.h"

html_svg_elem::html_svg_elem(void)
{
}

html_svg_elem::~html_svg_elem(void)
{
}

void html_svg_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_svg_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
