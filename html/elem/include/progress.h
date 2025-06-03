#ifndef HTML_ELEM_PROGRESS_H
#define HTML_ELEM_PROGRESS_H

#include "internal.h"

// <progress> element
class html_progress_elem : public html_internal_elem {
public:
        html_progress_elem();
        ~html_progress_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_PROGRESS_H
