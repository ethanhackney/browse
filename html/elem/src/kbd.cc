#include "../include/kbd.h"

html_kbd_elem::html_kbd_elem(void)
{
}

html_kbd_elem::~html_kbd_elem(void)
{
}

void html_kbd_elem::visit(html_elem_visitor &v)
{
        v.visit(*this);
}

void html_kbd_elem::visit(html_elem_cvisitor &v) const
{
        v.visit(*this);
}
