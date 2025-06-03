#include "../include/h6.h"

html_h6_elem::html_h6_elem(void)
{
}

html_h6_elem::~html_h6_elem(void)
{
}

void html_h6_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_h6_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
