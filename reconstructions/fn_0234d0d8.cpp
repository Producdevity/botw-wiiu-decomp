#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489ff4;
extern "C" RuntimeTag data_10489ff8;
extern "C" const RuntimeVTable data_1008c110;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008c100;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008c0f0;

typedef Token<&data_10489ff4, &data_10489ff8, &data_1008c110> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1008c100> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1008c0f0> Type2;

extern "C" bool fn_0234d0d8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
