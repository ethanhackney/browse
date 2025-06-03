#include "../include/q.h"

html_q_elem::html_q_elem(void)
{
}

html_q_elem::~html_q_elem(void)
{
}

void html_q_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_q_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
