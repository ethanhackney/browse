#ifndef HTML_TEXT_ELEM_H
#define HTML_TEXT_ELEM_H

#include "elem.h"

// text element
class html_text_elem : public html_elem {
public:
        html_text_elem();
        ~html_text_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
};

#endif // #ifndef HTML_TEXT_ELEM_H
