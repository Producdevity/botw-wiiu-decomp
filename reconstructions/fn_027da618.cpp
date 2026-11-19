#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cf24;
extern "C" RuntimeTag data_1048cf20;
extern "C" const RuntimeVTable data_10134100;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101340f0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101340e0;

typedef Token<&data_1048cf24, &data_1048cf20, &data_10134100> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101340f0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101340e0> Type2;

extern "C" bool fn_027da618(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
