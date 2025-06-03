#ifndef HTML_ELEM_METER_H
#define HTML_ELEM_METER_H

#include "internal.h"

// <meter> element
class html_meter_elem : public html_internal_elem {
public:
        html_meter_elem();
        ~html_meter_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_METER_H
