#include "../include/br.h"

html_br_elem::html_br_elem(void)
{
}

html_br_elem::~html_br_elem(void)
{
}

void html_br_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_br_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
