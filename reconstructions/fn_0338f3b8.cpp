#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490134;
extern "C" RuntimeTag data_10493a0c;
extern "C" const RuntimeVTable data_102b8344;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102b8334;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102b8324;

typedef Token<&data_10490134, &data_10493a0c, &data_102b8344> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102b8334> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102b8324> Type2;

extern "C" bool fn_0338f3b8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
