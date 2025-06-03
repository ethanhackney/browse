#include "../include/aside.h"

html_aside_elem::html_aside_elem(void)
{
}

html_aside_elem::~html_aside_elem(void)
{
}

void html_aside_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_aside_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
