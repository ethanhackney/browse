#ifndef HTML_ELEM_Q_H
#define HTML_ELEM_Q_H

#include "internal.h"

// <q> element
class html_q_elem : public html_internal_elem {
public:
        html_q_elem();
        ~html_q_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_Q_H
