#ifndef HTML_ELEM_CVISITOR_H
#define HTML_ELEM_CVISITOR_H

class html_html_elem;     // <html>
class html_text_elem;     // text element
class html_internal_elem; // internal element

// abstract const html element visitor
class html_elem_cvisitor {
public:
        virtual ~html_elem_cvisitor() {}

        /**
         * visit <html> element:
         *
         * args:
         *  @elem: <html> element
         *
         * ret:
         *  none
         */
        virtual void visit(const html_html_elem &elem) = 0;

        /**
         * visit text element:
         *
         * args:
         *  @elem: text element
         *
         * ret:
         *  none
         */
        virtual void visit(const html_text_elem &elem) = 0;
};

#endif // HTML_ELEM_CVISITOR_H
