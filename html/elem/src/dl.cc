#include "../include/dl.h"

html_dl_elem::html_dl_elem(void)
{
}

html_dl_elem::~html_dl_elem(void)
{
}

void html_dl_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_dl_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
