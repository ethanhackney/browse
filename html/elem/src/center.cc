#include "../include/center.h"

html_center_elem::html_center_elem(void)
{
}

html_center_elem::~html_center_elem(void)
{
}

void html_center_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_center_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
