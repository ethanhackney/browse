#ifndef HTML_ELEM_FRAMESET_H
#define HTML_ELEM_FRAMESET_H

#include "internal.h"

// <frameset> element
class html_frameset_elem : public html_internal_elem {
public:
        html_frameset_elem();
        ~html_frameset_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_FRAMESET_H
