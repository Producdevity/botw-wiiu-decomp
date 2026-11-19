#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487920;
extern "C" RuntimeTag data_1048791c;
extern "C" const RuntimeVTable data_1005cfd4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1005cfc4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1005cfb4;

typedef Token<&data_10487920, &data_1048791c, &data_1005cfd4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1005cfc4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1005cfb4> Type2;

extern "C" bool fn_0223184c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
