#ifndef HTML_ELEM_META_H
#define HTML_ELEM_META_H

#include "internal.h"

// <meta> element
class html_meta_elem : public html_internal_elem {
public:
        html_meta_elem();
        ~html_meta_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_META_H
