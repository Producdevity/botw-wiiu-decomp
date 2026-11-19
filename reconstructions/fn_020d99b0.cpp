#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104875e0;
extern "C" RuntimeTag data_104875dc;
extern "C" const RuntimeVTable data_1001a8e0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001a898;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001a888;

typedef Token<&data_104875e0, &data_104875dc, &data_1001a8e0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1001a898> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1001a888> Type2;

extern "C" bool fn_020d99b0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
