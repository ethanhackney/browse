#include "../include/span.h"

html_span_elem::html_span_elem(void)
{
}

html_span_elem::~html_span_elem(void)
{
}

void html_span_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_span_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
