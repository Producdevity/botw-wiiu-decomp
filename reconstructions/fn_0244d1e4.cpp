#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ae8c;
extern "C" RuntimeTag data_1048ae90;
extern "C" const RuntimeVTable data_100b8ab0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b8aa0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b8a90;

typedef Token<&data_1048ae8c, &data_1048ae90, &data_100b8ab0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100b8aa0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100b8a90> Type2;

extern "C" bool fn_0244d1e4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
