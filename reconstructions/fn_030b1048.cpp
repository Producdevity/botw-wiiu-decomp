#include "botw/ghs_varargs.h"

extern "C" int fn_030b0fd4(int, int, const char *, GhsArgumentList *);

namespace {
struct String {
    int first;
    unsigned char padding_4[4];
    int second;
};
}

extern "C" int fn_030b1048(void *string, const char *format, GhsArgumentList *arguments) {
    String *s = static_cast<String *>(string);
    return fn_030b0fd4(s->first, s->second, format, arguments);
}
