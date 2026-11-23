#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104964a4;
extern "C" RuntimeTag data_10496c48;
extern "C" const RuntimeVTable data_1033fd38;
extern "C" unsigned data_1048f524;
extern "C" RuntimeTag data_10492364;
extern "C" const RuntimeVTable data_1033fd28;
extern "C" unsigned data_10485f10;
extern "C" RuntimeTag data_10491608;
extern "C" const RuntimeVTable data_1033fcf8;

typedef Token<&data_104964a4, &data_10496c48, &data_1033fd38> Type0;
typedef Token<&data_1048f524, &data_10492364, &data_1033fd28> Type1;
typedef Token<&data_10485f10, &data_10491608, &data_1033fcf8> Type2;

extern "C" bool fn_0394b3c0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
