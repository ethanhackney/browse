#include "../include/meta.h"

html_meta_elem::html_meta_elem(void)
{
}

html_meta_elem::~html_meta_elem(void)
{
}

void html_meta_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_meta_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
