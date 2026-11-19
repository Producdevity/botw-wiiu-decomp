#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104875b0;
extern "C" RuntimeTag data_104875b4;
extern "C" const RuntimeVTable data_1001a288;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001a278;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001a268;

typedef Token<&data_104875b0, &data_104875b4, &data_1001a288> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1001a278> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1001a268> Type2;

extern "C" bool fn_020d4d2c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
