#ifndef HTML_ELEM_INTERNAL_H
#define HTML_ELEM_INTERNAL_H

#include "elem.h"
#include <vector>

// html internal element
class html_internal_elem : public html_elem {
private:
        std::vector<std::shared_ptr<html_elem>> _kids;
public:
        html_internal_elem();
        ~html_internal_elem();
        std::size_t child_len(void) const;
        std::shared_ptr<html_elem> get_child(size_t i);
        const std::shared_ptr<html_elem> get_cchild(std::size_t i) const;
        void append_child(std::shared_ptr<html_elem> elem);
        void rm_child(size_t i);
};

#endif // HTML_ELEM_INTERNAL_H
