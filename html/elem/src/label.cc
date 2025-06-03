#include "../include/label.h"

html_label_elem::html_label_elem(void)
{
}

html_label_elem::~html_label_elem(void)
{
}

void html_label_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_label_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
