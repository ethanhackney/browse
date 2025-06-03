#include "../include/strike.h"

html_strike_elem::html_strike_elem(void)
{
}

html_strike_elem::~html_strike_elem(void)
{
}

void html_strike_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_strike_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
