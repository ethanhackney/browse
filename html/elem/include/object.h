#ifndef HTML_ELEM_OBJECT_H
#define HTML_ELEM_OBJECT_H

#include "internal.h"

// <object> element
class html_object_elem : public html_internal_elem {
public:
        html_object_elem();
        ~html_object_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_OBJECT_H
