#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487608;
extern "C" RuntimeTag data_10487604;
extern "C" const RuntimeVTable data_1001b374;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001b364;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001b354;

typedef Token<&data_10487608, &data_10487604, &data_1001b374> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1001b364> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1001b354> Type2;

extern "C" bool fn_020dbdbc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
