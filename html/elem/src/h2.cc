#include "../include/h2.h"

html_h2_elem::html_h2_elem(void)
{
}

html_h2_elem::~html_h2_elem(void)
{
}

void html_h2_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_h2_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
