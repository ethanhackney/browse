#include "../include/time.h"

html_time_elem::html_time_elem(void)
{
}

html_time_elem::~html_time_elem(void)
{
}

void html_time_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_time_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
