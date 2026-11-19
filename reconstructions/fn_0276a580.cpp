#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ccbc;
extern "C" RuntimeTag data_1048ccc0;
extern "C" const RuntimeVTable data_101290e8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101290d8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101290c8;

typedef Token<&data_1048ccbc, &data_1048ccc0, &data_101290e8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101290d8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101290c8> Type2;

extern "C" bool fn_0276a580(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
