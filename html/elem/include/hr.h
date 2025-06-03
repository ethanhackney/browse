#ifndef HTML_ELEM_HR_H
#define HTML_ELEM_HR_H

#include "internal.h"

// <hr> element
class html_hr_elem : public html_internal_elem {
public:
        html_hr_elem();
        ~html_hr_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_HR_H
