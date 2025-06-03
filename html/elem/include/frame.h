#ifndef HTML_ELEM_FRAME_H
#define HTML_ELEM_FRAME_H

#include "internal.h"

// <frame> element
class html_frame_elem : public html_internal_elem {
public:
        html_frame_elem();
        ~html_frame_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_FRAME_H
