#include "../include/sub.h"

html_sub_elem::html_sub_elem(void)
{
}

html_sub_elem::~html_sub_elem(void)
{
}

void html_sub_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_sub_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
