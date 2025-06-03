#include "../include/b.h"

html_b_elem::html_b_elem(void)
{
}

html_b_elem::~html_b_elem(void)
{
}

void html_b_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_b_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
