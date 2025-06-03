#include "../include/bdo.h"

html_bdo_elem::html_bdo_elem(void)
{
}

html_bdo_elem::~html_bdo_elem(void)
{
}

void html_bdo_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_bdo_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
