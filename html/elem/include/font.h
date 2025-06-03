#ifndef HTML_ELEM_FONT_H
#define HTML_ELEM_FONT_H

#include "internal.h"

// <font> element
class html_font_elem : public html_internal_elem {
public:
        html_font_elem();
        ~html_font_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_FONT_H
