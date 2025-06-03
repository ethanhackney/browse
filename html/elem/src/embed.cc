#include "../include/embed.h"

html_embed_elem::html_embed_elem(void)
{
}

html_embed_elem::~html_embed_elem(void)
{
}

void html_embed_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_embed_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
