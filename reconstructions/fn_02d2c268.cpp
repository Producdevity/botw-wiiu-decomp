#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490230;
extern "C" RuntimeTag data_10491278;
extern "C" const RuntimeVTable data_101e1ca4;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101e1c94;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101e1c84;

typedef Token<&data_10490230, &data_10491278, &data_101e1ca4> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101e1c94> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101e1c84> Type2;

extern "C" bool fn_02d2c268(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
