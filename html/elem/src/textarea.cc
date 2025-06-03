#include "../include/textarea.h"

html_textarea_elem::html_textarea_elem(void)
{
}

html_textarea_elem::~html_textarea_elem(void)
{
}

void html_textarea_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_textarea_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
