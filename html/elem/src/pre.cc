#include "../include/pre.h"

html_pre_elem::html_pre_elem(void)
{
}

html_pre_elem::~html_pre_elem(void)
{
}

void html_pre_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_pre_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
