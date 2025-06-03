#include "../include/search.h"

html_search_elem::html_search_elem(void)
{
}

html_search_elem::~html_search_elem(void)
{
}

void html_search_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_search_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
