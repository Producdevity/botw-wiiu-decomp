#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bed4;
extern "C" RuntimeTag data_1048bed8;
extern "C" const RuntimeVTable data_10124fb0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10124fa0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10124f90;

typedef Token<&data_1048bed4, &data_1048bed8, &data_10124fb0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10124fa0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10124f90> Type2;

extern "C" bool fn_02757f20(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
