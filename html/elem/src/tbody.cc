#include "../include/tbody.h"

html_tbody_elem::html_tbody_elem(void)
{
}

html_tbody_elem::~html_tbody_elem(void)
{
}

void html_tbody_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_tbody_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
