#ifndef HTML_TEXT_ELEM_H
#define HTML_TEXT_ELEM_H

#include "elem.h"

// text element
class html_text_elem : public html_elem {
private:
        int _c {0}; // character
public:
        /**
         * html_text_elem constructor:
         *
         * args:
         *  @text: character
         */
        html_text_elem(int text);

        ~html_text_elem();
        void visit(html_elem_visitor &v);
        void visit(html_elem_cvisitor &v) const;
        std::size_t child_len(void) const;
        html_elem *get_child(std::size_t i) const;
        const html_elem *get_cchild(std::size_t i) const;
        void append_child(std::unique_ptr<html_elem> elem);
        void rm_child(std::size_t i);
        std::size_t attr_len(void) const;
        const std::string &attr_get_by_idx(std::size_t i) const;
        const std::string &attr_get_by_type(int type) const;
        int attr_get(std::size_t i) const;
        void attr_add(int type, const std::string &val);
        int c(void) const;
};

#endif // #ifndef HTML_TEXT_ELEM_H
