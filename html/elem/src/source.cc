#include "../include/source.h"

html_source_elem::html_source_elem(void)
{
}

html_source_elem::~html_source_elem(void)
{
}

void html_source_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_source_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
