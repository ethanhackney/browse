#ifndef HTML_ELEM_PICTURE_H
#define HTML_ELEM_PICTURE_H

#include "internal.h"

// <picture> element
class html_picture_elem : public html_internal_elem {
public:
        html_picture_elem();
        ~html_picture_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_PICTURE_H
