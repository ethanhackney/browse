#include "../include/h1.h"

html_h1_elem::html_h1_elem(void)
{
}

html_h1_elem::~html_h1_elem(void)
{
}

void html_h1_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_h1_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
