#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486e14;
extern "C" RuntimeTag data_10486e18;
extern "C" const RuntimeVTable data_10011ef0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10011ee0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10011ed0;

typedef Token<&data_10486e14, &data_10486e18, &data_10011ef0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10011ee0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10011ed0> Type2;

extern "C" bool fn_02091fb8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
