#include "../include/frame.h"

html_frame_elem::html_frame_elem(void)
{
}

html_frame_elem::~html_frame_elem(void)
{
}

void html_frame_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_frame_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
