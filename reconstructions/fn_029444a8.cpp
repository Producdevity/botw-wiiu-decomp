#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e0e4;
extern "C" RuntimeTag data_1048e0e0;
extern "C" const RuntimeVTable data_1016c2f0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1016c2e0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1016c2d0;

typedef Token<&data_1048e0e4, &data_1048e0e0, &data_1016c2f0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1016c2e0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1016c2d0> Type2;

extern "C" bool fn_029444a8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
