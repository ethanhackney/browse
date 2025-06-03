#ifndef HTML_ELEM_VISITOR_H
#define HTML_ELEM_VISITOR_H

class html_html_elem;     // <html>
class html_text_elem;     // text element
class html_internal_elem; // internal element

// abstract html element visitor
class html_elem_visitor {
public:
        virtual ~html_elem_visitor() {}

        /**
         * visit <html> element:
         *
         * args:
         *  @elem: <html> element
         *
         * ret:
         *  none
         */
        virtual void visit(html_html_elem &elem) = 0;

        /**
         * visit text element:
         *
         * args:
         *  @elem: text element
         *
         * ret:
         *  none
         */
        virtual void visit(html_text_elem &elem) = 0;
};

#endif // HTML_ELEM_VISITOR_H
