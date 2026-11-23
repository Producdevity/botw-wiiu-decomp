#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10492944;
extern "C" RuntimeTag data_10492948;
extern "C" const RuntimeVTable data_1029c1a0;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_1029c190;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_1029c180;

typedef Token<&data_10492944, &data_10492948, &data_1029c1a0> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_1029c190> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_1029c180> Type2;

extern "C" bool fn_03271110(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
