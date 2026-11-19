#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104872e8;
extern "C" RuntimeTag data_104872ec;
extern "C" const RuntimeVTable data_10015874;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001580c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100157fc;

typedef Token<&data_104872e8, &data_104872ec, &data_10015874> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1001580c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100157fc> Type2;

extern "C" bool fn_020ba380(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
