#ifndef HTML_ELEM_INTERNAL_H
#define HTML_ELEM_INTERNAL_H

#include "elem.h"
#include <vector>
#include <unordered_map>
#include <string>

// html internal element
class html_internal_elem : public html_elem {
private:
        std::vector<std::shared_ptr<html_elem>> _kids;    // child elements
        std::unordered_map<int,std::string>     _attrmap; // attributes map
        std::vector<int>                        _attr;    // attributes
public:
        html_internal_elem();
        ~html_internal_elem();
        std::size_t child_len(void) const;
        std::shared_ptr<html_elem> get_child(size_t i);
        const std::shared_ptr<html_elem> get_cchild(std::size_t i) const;
        void append_child(std::shared_ptr<html_elem> elem);
        std::size_t attr_len(void) const;
        const std::string &attr_get_by_idx(std::size_t i) const;
        const std::string &attr_get_by_type(int type) const;
        void attr_add(int type, const std::string &val);
        int attr_get(std::size_t i) const;
        void rm_child(size_t i);
};

#endif // HTML_ELEM_INTERNAL_H
