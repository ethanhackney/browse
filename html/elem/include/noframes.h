#ifndef HTML_ELEM_NOFRAMES_H
#define HTML_ELEM_NOFRAMES_H

#include "internal.h"

// <noframes> element
class html_noframes_elem : public html_internal_elem {
public:
        html_noframes_elem();
        ~html_noframes_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_NOFRAMES_H
