#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486f9c;
extern "C" RuntimeTag data_10486f98;
extern "C" const RuntimeVTable data_1000e184;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000e174;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000e164;

typedef Token<&data_10486f9c, &data_10486f98, &data_1000e184> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1000e174> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1000e164> Type2;

extern "C" bool fn_0207d668(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
