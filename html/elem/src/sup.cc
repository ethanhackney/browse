#include "../include/sup.h"

html_sup_elem::html_sup_elem(void)
{
}

html_sup_elem::~html_sup_elem(void)
{
}

void html_sup_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_sup_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
