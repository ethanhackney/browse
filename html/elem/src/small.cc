#include "../include/small.h"

html_small_elem::html_small_elem(void)
{
}

html_small_elem::~html_small_elem(void)
{
}

void html_small_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_small_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
