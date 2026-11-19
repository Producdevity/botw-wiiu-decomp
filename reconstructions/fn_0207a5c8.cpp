#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486f18;
extern "C" RuntimeTag data_10486f14;
extern "C" const RuntimeVTable data_1000d81c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000d80c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000d7fc;

typedef Token<&data_10486f18, &data_10486f14, &data_1000d81c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1000d80c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1000d7fc> Type2;

extern "C" bool fn_0207a5c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
