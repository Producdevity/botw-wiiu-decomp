#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b590;
extern "C" RuntimeTag data_1048b594;
extern "C" const RuntimeVTable data_10153314;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10153304;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101532f4;

typedef Token<&data_1048b590, &data_1048b594, &data_10153314> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10153304> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101532f4> Type2;

extern "C" bool fn_028a29b4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
