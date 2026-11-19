#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ffdc;
extern "C" RuntimeTag data_1049107c;
extern "C" const RuntimeVTable data_101d61a0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_101d6190;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101d6180;

typedef Token<&data_1048ffdc, &data_1049107c, &data_101d61a0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_101d6190> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101d6180> Type2;

extern "C" bool fn_02cc15f8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
