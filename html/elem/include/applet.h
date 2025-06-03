#ifndef HTML_ELEM_APPLET_H
#define HTML_ELEM_APPLET_H

#include "internal.h"

// <applet> element
class html_applet_elem : public html_internal_elem {
public:
        html_applet_elem();
        ~html_applet_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // HTML_ELEM_APPLET_H
