#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488558;
extern "C" RuntimeTag data_1048855c;
extern "C" const RuntimeVTable data_10043280;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10043270;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10043260;

typedef Token<&data_10488558, &data_1048855c, &data_10043280> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10043270> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10043260> Type2;

extern "C" bool fn_021c1f04(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
