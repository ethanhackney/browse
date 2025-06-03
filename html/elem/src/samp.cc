#include "../include/samp.h"

html_samp_elem::html_samp_elem(void)
{
}

html_samp_elem::~html_samp_elem(void)
{
}

void html_samp_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_samp_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
