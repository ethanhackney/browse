#ifndef HTML_ELEM_TBODY_H
#define HTML_ELEM_TBODY_H

#include "internal.h"

// <tbody> element
class html_tbody_elem : public html_internal_elem {
public:
        html_tbody_elem();
        ~html_tbody_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_TBODY_H
