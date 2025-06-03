#include "../include/a.h"

html_a_elem::html_a_elem(void)
{
}

html_a_elem::~html_a_elem(void)
{
}

void html_a_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_a_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
