#include "../include/style.h"

html_style_elem::html_style_elem(void)
{
}

html_style_elem::~html_style_elem(void)
{
}

void html_style_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_style_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
