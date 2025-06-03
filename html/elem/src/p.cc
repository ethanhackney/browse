#include "../include/p.h"

html_p_elem::html_p_elem(void)
{
}

html_p_elem::~html_p_elem(void)
{
}

void html_p_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_p_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
