#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cb30;
extern "C" RuntimeTag data_1048cb2c;
extern "C" const RuntimeVTable data_10123318;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10123308;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101232f8;

typedef Token<&data_1048cb30, &data_1048cb2c, &data_10123318> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10123308> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101232f8> Type2;

extern "C" bool fn_0274a2d8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
