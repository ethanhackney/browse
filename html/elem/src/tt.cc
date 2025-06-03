#include "../include/tt.h"

html_tt_elem::html_tt_elem(void)
{
}

html_tt_elem::~html_tt_elem(void)
{
}

void html_tt_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_tt_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
