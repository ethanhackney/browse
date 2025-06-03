#include "../include/u.h"

html_u_elem::html_u_elem(void)
{
}

html_u_elem::~html_u_elem(void)
{
}

void html_u_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_u_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
