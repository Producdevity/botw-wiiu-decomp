#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486f84;
extern "C" RuntimeTag data_10486f88;
extern "C" const RuntimeVTable data_1000e008;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000dff8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000dfe8;

typedef Token<&data_10486f84, &data_10486f88, &data_1000e008> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1000dff8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1000dfe8> Type2;

extern "C" bool fn_0207bee4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
