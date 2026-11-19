#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ac68;
extern "C" RuntimeTag data_1048ac64;
extern "C" const RuntimeVTable data_100b1cac;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b1c9c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b1c8c;

typedef Token<&data_1048ac68, &data_1048ac64, &data_100b1cac> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100b1c9c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100b1c8c> Type2;

extern "C" bool fn_02428138(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
