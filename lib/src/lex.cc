#include <lib/include/lex.h>

namespace lex {

lex::lex(std::istream &is, const pattern_list &pat)
        : _pat {pat},
        _is {is},
        _cur {"", LEX_TT_INV}
{
        next();
}

void lex::next(void)
{
}

} // namespace lex
