#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104876a4;
extern "C" RuntimeTag data_104876a0;
extern "C" const RuntimeVTable data_1001cb40;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001cb30;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001cb20;

typedef Token<&data_104876a4, &data_104876a0, &data_1001cb40> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1001cb30> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1001cb20> Type2;

extern "C" bool fn_020e81f8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
