/* AUTO-GENERATED */
#ifndef HTML_TT_H
#define HTML_TT_H

#include <stdbool.h>

/* html token types */
enum {
        HTML_TT_TAG_START = 1, /* start of tags */
	HTML_TT_TAG_OPEN_START, /* start of open tags */
	HTML_TT_BODY_OPEN, /* <body> */
	HTML_TT_HTML_OPEN, /* <html> */
	HTML_TT_H1_OPEN, /* <h1> */
	HTML_TT_P_OPEN, /* <p> */
	HTML_TT_COMMENT_OPEN, /* <!-- */
	HTML_TT_TAG_OPEN_END, /* end of open tags */
	HTML_TT_TAG_CLOSE_START, /* start of close tags */
	HTML_TT_BODY_CLOSE, /* </body> */
	HTML_TT_HTML_CLOSE, /* </html> */
	HTML_TT_H1_CLOSE, /* </h1> */
	HTML_TT_P_CLOSE, /* </p> */
	HTML_TT_COMMENT_CLOSE, /* --> */
	HTML_TT_TAG_CLOSE_END, /* end of close tags */
        HTML_TT_TAG_END, /* end of tags */
        HTML_TT_TEXT, /* regular text */
        HTML_TT_COUNT, /* type count */
};

/* test if token type is tag */
static inline bool
istag(int tt)
{
        return HTML_TT_TAG_START < tt && tt < HTML_TT_TAG_END;
}

/* test if open tag */
static inline bool
isopentag(int tt)
{
        return HTML_TT_TAG_OPEN_START < tt && tt < HTML_TT_TAG_OPEN_END;
}

/* test if close tag */
static inline bool
isclosetag(int tt)
{
        return HTML_TT_TAG_CLOSE_START < tt && tt < HTML_TT_TAG_CLOSE_END;
}

#endif /* #ifndef HTML_TT_H */
