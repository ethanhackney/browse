#include "../include/blockquote.h"

html_blockquote_elem::html_blockquote_elem(void)
{
}

html_blockquote_elem::~html_blockquote_elem(void)
{
}

void html_blockquote_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_blockquote_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
