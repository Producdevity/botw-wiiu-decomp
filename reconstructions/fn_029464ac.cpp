#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e0f8;
extern "C" RuntimeTag data_1048e0fc;
extern "C" const RuntimeVTable data_1016c8c0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1016c8b0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1016c8a0;

typedef Token<&data_1048e0f8, &data_1048e0fc, &data_1016c8c0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1016c8b0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1016c8a0> Type2;

extern "C" bool fn_029464ac(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
