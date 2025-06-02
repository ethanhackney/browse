#include <lib/include/lex.h>

/**
 * test string against each pattern:
 *
 * args:
 *  @pat: pattern list
 *  @s:   string to test
 *
 * ret:
 *  @success: token type for pattern
 *  @failure: LEX_TT_INV
 */
static int match(const lex::pattern_list &pat, const std::string &s)
{
        for (const auto &p: pat) {
                if (regexec(&p.re, s.c_str(), 0, nullptr, 0) == 0)
                        return p.tok;
        }
        return lex::LEX_TT_INV;
}

namespace lex {

lex::lex(std::istream &is, const pattern_list &pat, const reject_list& rej)
        : _pat {pat},
        _is {is},
        _lex {""},
        _tok {LEX_TT_INV}
{
        for (const auto &p : _pat) {
                if (LEX_TT_INV <= p.tok && p.tok <= LEX_TT_EOF)
                        throw bad_type{p.tok};
        }

        for (const auto &r : rej)
                _rej.set(r);

        next();
}

void lex::next(void)
{
        _lex = "";

        for (char c; _is >> c; ) {
                auto rej = _rej.test((std::size_t)c);

                if (rej && _lex.empty())
                        continue;

                if (!rej)
                        _lex += c;

                _tok = match(_pat, _lex);
                if (_tok != LEX_TT_INV) {
                        std::cout << _tok << ": " << _lex << std::endl;
                        return;
                }

                if (rej)
                        break;
        }

        if (!_lex.empty())
                _tok = LEX_TT_ERR_LEX;
        else if (_is.eof())
                _tok = LEX_TT_EOF;
        else
                _tok = LEX_TT_ERR_IO;
}


int lex::tok(void) const
{
        return _tok;
}

const std::string &lex::lexeme(void) const
{
        return _lex;
}

} // namespace lex
