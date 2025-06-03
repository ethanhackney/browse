#include "../include/canvas.h"

html_canvas_elem::html_canvas_elem(void)
{
}

html_canvas_elem::~html_canvas_elem(void)
{
}

void html_canvas_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_canvas_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
