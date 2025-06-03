#include "../include/ul.h"

html_ul_elem::html_ul_elem(void)
{
}

html_ul_elem::~html_ul_elem(void)
{
}

void html_ul_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_ul_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
