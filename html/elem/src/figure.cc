#include "../include/figure.h"

html_figure_elem::html_figure_elem(void)
{
}

html_figure_elem::~html_figure_elem(void)
{
}

void html_figure_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_figure_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
