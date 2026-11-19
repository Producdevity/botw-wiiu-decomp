#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048aa64;
extern "C" RuntimeTag data_1048aa68;
extern "C" const RuntimeVTable data_100ac1a8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100ac198;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ac188;

typedef Token<&data_1048aa64, &data_1048aa68, &data_100ac1a8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100ac198> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100ac188> Type2;

extern "C" bool fn_0240c5b4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
