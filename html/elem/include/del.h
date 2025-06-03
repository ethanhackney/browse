#ifndef HTML_ELEM_DEL_H
#define HTML_ELEM_DEL_H

#include "internal.h"

// <del> element
class html_del_elem : public html_internal_elem {
public:
        html_del_elem();
        ~html_del_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_DEL_H
