#include "../include/header.h"

html_header_elem::html_header_elem(void)
{
}

html_header_elem::~html_header_elem(void)
{
}

void html_header_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_header_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
