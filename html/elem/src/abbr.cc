#include "../include/abbr.h"

html_abbr_elem::html_abbr_elem(void)
{
}

html_abbr_elem::~html_abbr_elem(void)
{
}

void html_abbr_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_abbr_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
