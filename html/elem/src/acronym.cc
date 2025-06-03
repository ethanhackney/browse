#include "../include/acronym.h"

html_acronym_elem::html_acronym_elem(void)
{
}

html_acronym_elem::~html_acronym_elem(void)
{
}

void html_acronym_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_acronym_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
