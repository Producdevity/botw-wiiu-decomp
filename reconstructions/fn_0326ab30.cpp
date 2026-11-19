#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fe30;
extern "C" RuntimeTag data_10492928;
extern "C" const RuntimeVTable data_1029b108;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1029b0f8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029b0e8;

typedef Token<&data_1048fe30, &data_10492928, &data_1029b108> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1029b0f8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1029b0e8> Type2;

extern "C" bool fn_0326ab30(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
