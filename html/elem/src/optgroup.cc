#include "../include/optgroup.h"

html_optgroup_elem::html_optgroup_elem(void)
{
}

html_optgroup_elem::~html_optgroup_elem(void)
{
}

void html_optgroup_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_optgroup_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
