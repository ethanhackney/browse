#include "../include/big.h"

html_big_elem::html_big_elem(void)
{
}

html_big_elem::~html_big_elem(void)
{
}

void html_big_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_big_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
