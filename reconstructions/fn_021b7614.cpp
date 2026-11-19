#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048848c;
extern "C" RuntimeTag data_10488490;
extern "C" const RuntimeVTable data_10041154;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10041144;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10041134;

typedef Token<&data_1048848c, &data_10488490, &data_10041154> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10041144> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10041134> Type2;

extern "C" bool fn_021b7614(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
