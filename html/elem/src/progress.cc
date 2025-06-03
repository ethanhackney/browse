#include "../include/progress.h"

html_progress_elem::html_progress_elem(void)
{
}

html_progress_elem::~html_progress_elem(void)
{
}

void html_progress_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_progress_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
