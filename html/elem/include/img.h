#ifndef HTML_ELEM_IMG_H
#define HTML_ELEM_IMG_H

#include "internal.h"

// <img> element
class html_img_elem : public html_internal_elem {
public:
        html_img_elem();
        ~html_img_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_IMG_H
