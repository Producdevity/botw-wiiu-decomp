#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488864;
extern "C" RuntimeTag data_10488868;
extern "C" const RuntimeVTable data_1004c8cc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004c8bc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004c8ac;

typedef Token<&data_10488864, &data_10488868, &data_1004c8cc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004c8bc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004c8ac> Type2;

extern "C" bool fn_021e9884(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
