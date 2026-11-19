#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104883a4;
extern "C" RuntimeTag data_104883a8;
extern "C" const RuntimeVTable data_1003e6d0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003e6c0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003e6b0;

typedef Token<&data_104883a4, &data_104883a8, &data_1003e6d0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003e6c0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003e6b0> Type2;

extern "C" bool fn_021a723c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
