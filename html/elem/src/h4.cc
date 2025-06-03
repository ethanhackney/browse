#include "../include/h4.h"

html_h4_elem::html_h4_elem(void)
{
}

html_h4_elem::~html_h4_elem(void)
{
}

void html_h4_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_h4_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
