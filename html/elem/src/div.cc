#include "../include/div.h"

html_div_elem::html_div_elem(void)
{
}

html_div_elem::~html_div_elem(void)
{
}

void html_div_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_div_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
