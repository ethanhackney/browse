#include "../include/colgroup.h"

html_colgroup_elem::html_colgroup_elem(void)
{
}

html_colgroup_elem::~html_colgroup_elem(void)
{
}

void html_colgroup_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_colgroup_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
