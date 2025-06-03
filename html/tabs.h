#ifndef HTML_TABS_H
#define HTML_TABS_H

#include <stdbool.h>

/**
 * test if attribute is okay for tag:
 *
 * args:
 *  @tag:  tag token type
 *  @attr: attribute token type
 *
 * ret:
 *  @true:  if ok
 *  @false: if not
 */
bool attr_ok(int tag, int attr);

/**
 * get end tag token type from open tag type:
 *
 * args:
 *  @open: open tag token type
 *
 * ret:
 *  @success: end tag token type
 *  @failure: does not
 */
int tag_end(int open);

#endif /* #ifndef HTML_TABS_H */
