#ifndef HTML_ELEM_BIG_H
#define HTML_ELEM_BIG_H

#include "internal.h"

// <big> element
class html_big_elem : public html_internal_elem {
public:
        html_big_elem();
        ~html_big_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_BIG_H
