#include "../include/tfoot.h"

html_tfoot_elem::html_tfoot_elem(void)
{
}

html_tfoot_elem::~html_tfoot_elem(void)
{
}

void html_tfoot_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_tfoot_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
