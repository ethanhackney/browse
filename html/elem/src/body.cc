#include "../include/body.h"

html_body_elem::html_body_elem(void)
{
}

html_body_elem::~html_body_elem(void)
{
}

void html_body_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_body_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
