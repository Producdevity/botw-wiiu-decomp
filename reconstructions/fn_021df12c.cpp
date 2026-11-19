#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048876c;
extern "C" RuntimeTag data_10488770;
extern "C" const RuntimeVTable data_10049e90;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10049e80;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10049e70;

typedef Token<&data_1048876c, &data_10488770, &data_10049e90> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10049e80> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10049e70> Type2;

extern "C" bool fn_021df12c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
