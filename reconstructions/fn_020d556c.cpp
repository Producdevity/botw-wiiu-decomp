#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104875c8;
extern "C" RuntimeTag data_104875cc;
extern "C" const RuntimeVTable data_1001a5f4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001a5e4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001a5d4;

typedef Token<&data_104875c8, &data_104875cc, &data_1001a5f4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1001a5e4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1001a5d4> Type2;

extern "C" bool fn_020d556c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
