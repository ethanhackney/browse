#ifndef HTML_ELEM_CANVAS_H
#define HTML_ELEM_CANVAS_H

#include "internal.h"

// <canvas> element
class html_canvas_elem : public html_internal_elem {
public:
        html_canvas_elem();
        ~html_canvas_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_CANVAS_H
