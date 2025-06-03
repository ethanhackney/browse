#include "../include/h3.h"

html_h3_elem::html_h3_elem(void)
{
}

html_h3_elem::~html_h3_elem(void)
{
}

void html_h3_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_h3_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
