#ifndef HTML_ELEM_SUMMARY_H
#define HTML_ELEM_SUMMARY_H

#include "internal.h"

// <summary> element
class html_summary_elem : public html_internal_elem {
public:
        html_summary_elem();
        ~html_summary_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_SUMMARY_H
