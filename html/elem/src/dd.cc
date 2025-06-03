#include "../include/dd.h"

html_dd_elem::html_dd_elem(void)
{
}

html_dd_elem::~html_dd_elem(void)
{
}

void html_dd_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_dd_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
