#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ffe8;
extern "C" RuntimeTag data_10491088;
extern "C" const RuntimeVTable data_101d6708;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_101d66f8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101d66e8;

typedef Token<&data_1048ffe8, &data_10491088, &data_101d6708> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_101d66f8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101d66e8> Type2;

extern "C" bool fn_02cc86d0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
