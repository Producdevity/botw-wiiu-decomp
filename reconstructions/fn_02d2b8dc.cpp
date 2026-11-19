#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490228;
extern "C" RuntimeTag data_1049126c;
extern "C" const RuntimeVTable data_101e12d8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101e12c8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101e12b8;

typedef Token<&data_10490228, &data_1049126c, &data_101e12d8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101e12c8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101e12b8> Type2;

extern "C" bool fn_02d2b8dc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
