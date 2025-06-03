#ifndef HTML_ELEM_TRACK_H
#define HTML_ELEM_TRACK_H

#include "internal.h"

// <track> element
class html_track_elem : public html_internal_elem {
public:
        html_track_elem();
        ~html_track_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_TRACK_H
