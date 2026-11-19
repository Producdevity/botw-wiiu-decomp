#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a7ac;
extern "C" RuntimeTag data_1048a7a8;
extern "C" const RuntimeVTable data_100a427c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100a426c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100a425c;

typedef Token<&data_1048a7ac, &data_1048a7a8, &data_100a427c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100a426c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100a425c> Type2;

extern "C" bool fn_023d9acc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
