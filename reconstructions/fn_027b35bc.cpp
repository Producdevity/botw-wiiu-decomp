#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ce80;
extern "C" RuntimeTag data_1048ce84;
extern "C" const RuntimeVTable data_101300b0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101300a0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10130090;

typedef Token<&data_1048ce80, &data_1048ce84, &data_101300b0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101300a0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10130090> Type2;

extern "C" bool fn_027b35bc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
