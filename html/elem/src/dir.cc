#include "../include/dir.h"

html_dir_elem::html_dir_elem(void)
{
}

html_dir_elem::~html_dir_elem(void)
{
}

void html_dir_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_dir_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
