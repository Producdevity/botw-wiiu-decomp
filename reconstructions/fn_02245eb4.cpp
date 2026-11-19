#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488fac;
extern "C" RuntimeTag data_10488fa8;
extern "C" const RuntimeVTable data_1005ffb8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1005ffa8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1005ff98;

typedef Token<&data_10488fac, &data_10488fa8, &data_1005ffb8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1005ffa8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1005ff98> Type2;

extern "C" bool fn_02245eb4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
