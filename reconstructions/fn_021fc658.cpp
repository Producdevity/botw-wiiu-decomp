#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488a10;
extern "C" RuntimeTag data_10488a14;
extern "C" const RuntimeVTable data_100506cc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100506bc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100506ac;

typedef Token<&data_10488a10, &data_10488a14, &data_100506cc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100506bc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100506ac> Type2;

extern "C" bool fn_021fc658(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
