#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd58;
extern "C" RuntimeTag data_1049400c;
extern "C" const RuntimeVTable data_102d1948;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102d1938;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d1928;

typedef Token<&data_1048fd58, &data_1049400c, &data_102d1948> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102d1938> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d1928> Type2;

extern "C" bool fn_0350175c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
