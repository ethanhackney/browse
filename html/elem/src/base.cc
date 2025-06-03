#include "../include/base.h"

html_base_elem::html_base_elem(void)
{
}

html_base_elem::~html_base_elem(void)
{
}

void html_base_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_base_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
