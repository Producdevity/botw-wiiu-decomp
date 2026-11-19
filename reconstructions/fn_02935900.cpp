#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e040;
extern "C" RuntimeTag data_1048e044;
extern "C" const RuntimeVTable data_1016a5e0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1016a5d0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1016a5c0;

typedef Token<&data_1048e040, &data_1048e044, &data_1016a5e0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1016a5d0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1016a5c0> Type2;

extern "C" bool fn_02935900(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
