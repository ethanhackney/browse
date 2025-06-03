#include "../include/summary.h"

html_summary_elem::html_summary_elem(void)
{
}

html_summary_elem::~html_summary_elem(void)
{
}

void html_summary_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_summary_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
