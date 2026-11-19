#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104881fc;
extern "C" RuntimeTag data_10488200;
extern "C" const RuntimeVTable data_1003a3b8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003a3a8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003a398;

typedef Token<&data_104881fc, &data_10488200, &data_1003a3b8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003a3a8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003a398> Type2;

extern "C" bool fn_0218d728(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
