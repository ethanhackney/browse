#include "../include/noframes.h"

html_noframes_elem::html_noframes_elem(void)
{
}

html_noframes_elem::~html_noframes_elem(void)
{
}

void html_noframes_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_noframes_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
