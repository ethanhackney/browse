#ifndef HTML_ELEM_UL_H
#define HTML_ELEM_UL_H

#include "internal.h"

// <ul> element
class html_ul_elem : public html_internal_elem {
public:
        html_ul_elem();
        ~html_ul_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_UL_H
