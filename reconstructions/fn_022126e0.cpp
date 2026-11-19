#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488c08;
extern "C" RuntimeTag data_10488c0c;
extern "C" const RuntimeVTable data_10055900;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100558f0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100558e0;

typedef Token<&data_10488c08, &data_10488c0c, &data_10055900> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100558f0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100558e0> Type2;

extern "C" bool fn_022126e0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
