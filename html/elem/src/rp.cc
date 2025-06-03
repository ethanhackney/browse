#include "../include/rp.h"

html_rp_elem::html_rp_elem(void)
{
}

html_rp_elem::~html_rp_elem(void)
{
}

void html_rp_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_rp_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
