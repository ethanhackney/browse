#include "../include/video.h"

html_video_elem::html_video_elem(void)
{
}

html_video_elem::~html_video_elem(void)
{
}

void html_video_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_video_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
