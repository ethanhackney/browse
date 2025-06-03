#include "../include/thead.h"

html_thead_elem::html_thead_elem(void)
{
}

html_thead_elem::~html_thead_elem(void)
{
}

void html_thead_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_thead_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
