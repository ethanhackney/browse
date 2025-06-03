#ifndef HTML_ELEM_H5_H
#define HTML_ELEM_H5_H

#include "internal.h"

// <h5> element
class html_h5_elem : public html_internal_elem {
public:
        html_h5_elem();
        ~html_h5_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_H5_H
