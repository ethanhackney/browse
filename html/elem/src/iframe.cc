#include "../include/iframe.h"

html_iframe_elem::html_iframe_elem(void)
{
}

html_iframe_elem::~html_iframe_elem(void)
{
}

void html_iframe_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_iframe_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
