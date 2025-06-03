#ifndef HTML_ELEM_DATA_H
#define HTML_ELEM_DATA_H

#include "internal.h"

// <data> element
class html_data_elem : public html_internal_elem {
public:
        html_data_elem();
        ~html_data_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_DATA_H
