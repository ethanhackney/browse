#ifndef HTML_ELEM_IMAGE_H
#define HTML_ELEM_IMAGE_H

#include "internal.h"

// <image> element
class html_image_elem : public html_internal_elem {
public:
        html_image_elem();
        ~html_image_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_IMAGE_H
