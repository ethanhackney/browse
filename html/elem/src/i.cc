#include "../include/i.h"

html_i_elem::html_i_elem(void)
{
}

html_i_elem::~html_i_elem(void)
{
}

void html_i_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_i_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
