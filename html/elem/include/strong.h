#ifndef HTML_ELEM_STRONG_H
#define HTML_ELEM_STRONG_H

#include "internal.h"

// <strong> element
class html_strong_elem : public html_internal_elem {
public:
        html_strong_elem();
        ~html_strong_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_STRONG_H
