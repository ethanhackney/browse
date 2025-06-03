#include "../include/select.h"

html_select_elem::html_select_elem(void)
{
}

html_select_elem::~html_select_elem(void)
{
}

void html_select_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_select_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
