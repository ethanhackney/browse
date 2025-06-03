#ifndef HTML_ELEM_TIME_H
#define HTML_ELEM_TIME_H

#include "internal.h"

// <time> element
class html_time_elem : public html_internal_elem {
public:
        html_time_elem();
        ~html_time_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_TIME_H
