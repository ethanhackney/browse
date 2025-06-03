#ifndef HTML_ELEM_SCRIPT_H
#define HTML_ELEM_SCRIPT_H

#include "internal.h"

// <script> element
class html_script_elem : public html_internal_elem {
public:
        html_script_elem();
        ~html_script_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_SCRIPT_H
