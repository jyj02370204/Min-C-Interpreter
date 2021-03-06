#include "Token.h"

#define T(name, string, precedence) #name,
const char* const Token::names_[NUM_TOKENS] = { TOKEN_LIST(T, T) };
#undef T


#define T(name, string, precedence) string,
const char* const Token::strings_[NUM_TOKENS] = { TOKEN_LIST(T, T) };
#undef T

constexpr uint8_t length(const char* str) {
	return str ? static_cast<uint8_t>(strlen(str)) : 0;
}
#define T(name, string, precedence) length(string),
const uint8_t Token::string_lengths_[NUM_TOKENS] = { TOKEN_LIST(T, T) };
#undef T

#define T(name, string, precedence) precedence,
const int8_t Token::precedences_[NUM_TOKENS] = { TOKEN_LIST(T, T) };
#undef T


#define KT(a, b, c) 'T',
#define KK(a, b, c) 'K',
const char Token::token_types_[] = { TOKEN_LIST(KT, KK) };
#undef KT
#undef KK