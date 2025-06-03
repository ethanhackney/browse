#ifndef HTML_ELEM_RT_H
#define HTML_ELEM_RT_H

#include "internal.h"

// <rt> element
class html_rt_elem : public html_internal_elem {
public:
        html_rt_elem();
        ~html_rt_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_RT_H
