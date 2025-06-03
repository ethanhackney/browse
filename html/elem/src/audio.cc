#include "../include/audio.h"

html_audio_elem::html_audio_elem(void)
{
}

html_audio_elem::~html_audio_elem(void)
{
}

void html_audio_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_audio_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
