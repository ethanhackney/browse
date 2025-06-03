#include "../include/noscript.h"

html_noscript_elem::html_noscript_elem(void)
{
}

html_noscript_elem::~html_noscript_elem(void)
{
}

void html_noscript_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_noscript_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
