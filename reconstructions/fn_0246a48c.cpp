#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b02c;
extern "C" RuntimeTag data_1048b028;
extern "C" const RuntimeVTable data_100bd6d0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100bd6c0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100bd6b0;

typedef Token<&data_1048b02c, &data_1048b028, &data_100bd6d0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100bd6c0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100bd6b0> Type2;

extern "C" bool fn_0246a48c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
