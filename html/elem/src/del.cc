#include "../include/del.h"

html_del_elem::html_del_elem(void)
{
}

html_del_elem::~html_del_elem(void)
{
}

void html_del_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_del_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
