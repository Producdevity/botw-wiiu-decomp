#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489598;
extern "C" RuntimeTag data_1048959c;
extern "C" const RuntimeVTable data_1006f8e0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1006f8d0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1006f8c0;

typedef Token<&data_10489598, &data_1048959c, &data_1006f8e0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1006f8d0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1006f8c0> Type2;

extern "C" bool fn_0229dd8c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
