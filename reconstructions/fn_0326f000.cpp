#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1049013c;
extern "C" RuntimeTag data_1049293c;
extern "C" const RuntimeVTable data_1029bdc0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1029bdb0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029bda0;

typedef Token<&data_1049013c, &data_1049293c, &data_1029bdc0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1029bdb0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1029bda0> Type2;

extern "C" bool fn_0326f000(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
