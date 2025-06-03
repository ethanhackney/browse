#include "../include/frameset.h"

html_frameset_elem::html_frameset_elem(void)
{
}

html_frameset_elem::~html_frameset_elem(void)
{
}

void html_frameset_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_frameset_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
