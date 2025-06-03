#include "../include/tr.h"

html_tr_elem::html_tr_elem(void)
{
}

html_tr_elem::~html_tr_elem(void)
{
}

void html_tr_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_tr_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
