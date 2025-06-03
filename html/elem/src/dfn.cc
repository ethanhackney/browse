#include "../include/dfn.h"

html_dfn_elem::html_dfn_elem(void)
{
}

html_dfn_elem::~html_dfn_elem(void)
{
}

void html_dfn_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_dfn_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
