#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1049023c;
extern "C" RuntimeTag data_10491284;
extern "C" const RuntimeVTable data_101e2660;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101e2650;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101e2640;

typedef Token<&data_1049023c, &data_10491284, &data_101e2660> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101e2650> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101e2640> Type2;

extern "C" bool fn_02d317e4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
