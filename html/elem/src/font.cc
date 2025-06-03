#include "../include/font.h"

html_font_elem::html_font_elem(void)
{
}

html_font_elem::~html_font_elem(void)
{
}

void html_font_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_font_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
