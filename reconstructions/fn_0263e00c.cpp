#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c13c;
extern "C" RuntimeTag data_1048c140;
extern "C" const RuntimeVTable data_100fd6f4;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100fd6e4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100fd6d4;

typedef Token<&data_1048c13c, &data_1048c140, &data_100fd6f4> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100fd6e4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100fd6d4> Type2;

extern "C" bool fn_0263e00c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
