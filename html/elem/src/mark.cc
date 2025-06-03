#include "../include/mark.h"

html_mark_elem::html_mark_elem(void)
{
}

html_mark_elem::~html_mark_elem(void)
{
}

void html_mark_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_mark_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
