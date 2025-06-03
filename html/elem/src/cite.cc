#include "../include/cite.h"

html_cite_elem::html_cite_elem(void)
{
}

html_cite_elem::~html_cite_elem(void)
{
}

void html_cite_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_cite_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
