#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ae14;
extern "C" RuntimeTag data_1048ae18;
extern "C" const RuntimeVTable data_100b7810;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b7800;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b77f0;

typedef Token<&data_1048ae14, &data_1048ae18, &data_100b7810> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100b7800> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100b77f0> Type2;

extern "C" bool fn_0244946c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
