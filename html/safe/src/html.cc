#include "../include/html.h"

html_html_elem::html_html_elem(void)
{
}

html_html_elem::~html_html_elem(void)
{
}

void html_html_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_html_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
