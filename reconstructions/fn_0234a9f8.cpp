#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489fdc;
extern "C" RuntimeTag data_10489fe0;
extern "C" const RuntimeVTable data_1008bb58;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008bb48;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008bb38;

typedef Token<&data_10489fdc, &data_10489fe0, &data_1008bb58> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1008bb48> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1008bb38> Type2;

extern "C" bool fn_0234a9f8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
