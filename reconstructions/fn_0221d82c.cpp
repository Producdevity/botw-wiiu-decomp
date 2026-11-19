#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488d9c;
extern "C" RuntimeTag data_10488da0;
extern "C" const RuntimeVTable data_10058da8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10058d98;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10058d88;

typedef Token<&data_10488d9c, &data_10488da0, &data_10058da8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10058d98> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10058d88> Type2;

extern "C" bool fn_0221d82c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
