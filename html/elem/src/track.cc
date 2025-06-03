#include "../include/track.h"

html_track_elem::html_track_elem(void)
{
}

html_track_elem::~html_track_elem(void)
{
}

void html_track_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_track_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
