#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c1a0;
extern "C" RuntimeTag data_1048c1a4;
extern "C" const RuntimeVTable data_100ff8ec;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100ff8dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ff8cc;

typedef Token<&data_1048c1a0, &data_1048c1a4, &data_100ff8ec> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100ff8dc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100ff8cc> Type2;

extern "C" bool fn_0264cba0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
