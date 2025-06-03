#include "../include/ol.h"

html_ol_elem::html_ol_elem(void)
{
}

html_ol_elem::~html_ol_elem(void)
{
}

void html_ol_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_ol_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
