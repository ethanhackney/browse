#include "../include/legend.h"

html_legend_elem::html_legend_elem(void)
{
}

html_legend_elem::~html_legend_elem(void)
{
}

void html_legend_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_legend_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
