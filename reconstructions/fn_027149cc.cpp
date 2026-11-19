#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c874;
extern "C" RuntimeTag data_1048c878;
extern "C" const RuntimeVTable data_1011b7e0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1011b7d0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1011b7c0;

typedef Token<&data_1048c874, &data_1048c878, &data_1011b7e0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1011b7d0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1011b7c0> Type2;

extern "C" bool fn_027149cc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
