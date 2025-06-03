#include "../include/dialog.h"

html_dialog_elem::html_dialog_elem(void)
{
}

html_dialog_elem::~html_dialog_elem(void)
{
}

void html_dialog_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_dialog_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
