#include "../include/head.h"

html_head_elem::html_head_elem(void)
{
}

html_head_elem::~html_head_elem(void)
{
}

void html_head_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_head_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
