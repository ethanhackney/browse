#ifndef HTML_ELEM_MARQUEE_H
#define HTML_ELEM_MARQUEE_H

#include "internal.h"

// <marquee> element
class html_marquee_elem : public html_internal_elem {
public:
        html_marquee_elem();
        ~html_marquee_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_MARQUEE_H
