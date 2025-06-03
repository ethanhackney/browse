#include "../include/caption.h"

html_caption_elem::html_caption_elem(void)
{
}

html_caption_elem::~html_caption_elem(void)
{
}

void html_caption_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_caption_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
