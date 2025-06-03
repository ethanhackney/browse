#ifndef HTML_ELEM_CAPTION_H
#define HTML_ELEM_CAPTION_H

#include "internal.h"

// <caption> element
class html_caption_elem : public html_internal_elem {
public:
        html_caption_elem();
        ~html_caption_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_CAPTION_H
