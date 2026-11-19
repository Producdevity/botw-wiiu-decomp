#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488ab0;
extern "C" RuntimeTag data_10488aac;
extern "C" const RuntimeVTable data_10052400;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100523f0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100523e0;

typedef Token<&data_10488ab0, &data_10488aac, &data_10052400> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100523f0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100523e0> Type2;

extern "C" bool fn_022046a0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
