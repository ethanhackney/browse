#include "../include/hgroup.h"

html_hgroup_elem::html_hgroup_elem(void)
{
}

html_hgroup_elem::~html_hgroup_elem(void)
{
}

void html_hgroup_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_hgroup_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
