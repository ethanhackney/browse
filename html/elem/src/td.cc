#include "../include/td.h"

html_td_elem::html_td_elem(void)
{
}

html_td_elem::~html_td_elem(void)
{
}

void html_td_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_td_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
