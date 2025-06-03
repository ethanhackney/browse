#include "../include/em.h"

html_em_elem::html_em_elem(void)
{
}

html_em_elem::~html_em_elem(void)
{
}

void html_em_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_em_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
