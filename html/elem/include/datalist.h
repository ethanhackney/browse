#ifndef HTML_ELEM_DATALIST_H
#define HTML_ELEM_DATALIST_H

#include "internal.h"

// <datalist> element
class html_datalist_elem : public html_internal_elem {
public:
        html_datalist_elem();
        ~html_datalist_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_DATALIST_H
