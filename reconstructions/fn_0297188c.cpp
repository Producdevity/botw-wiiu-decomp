#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e24c;
extern "C" RuntimeTag data_1048e250;
extern "C" const RuntimeVTable data_101711d0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101711c0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101711b0;

typedef Token<&data_1048e24c, &data_1048e250, &data_101711d0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101711c0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101711b0> Type2;

extern "C" bool fn_0297188c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
