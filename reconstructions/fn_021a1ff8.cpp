#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488338;
extern "C" RuntimeTag data_1048833c;
extern "C" const RuntimeVTable data_1003d554;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003d544;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003d534;

typedef Token<&data_10488338, &data_1048833c, &data_1003d554> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003d544> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003d534> Type2;

extern "C" bool fn_021a1ff8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
