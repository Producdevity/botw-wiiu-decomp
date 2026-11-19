#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b600;
extern "C" RuntimeTag data_1048b604;
extern "C" const RuntimeVTable data_100d3f90;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100d3f80;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100d3f70;

typedef Token<&data_1048b600, &data_1048b604, &data_100d3f90> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100d3f80> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100d3f70> Type2;

extern "C" bool fn_0250ff44(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
