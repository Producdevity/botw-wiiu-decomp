#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488b60;
extern "C" RuntimeTag data_10488b64;
extern "C" const RuntimeVTable data_100541c4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100541b4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100541a4;

typedef Token<&data_10488b60, &data_10488b64, &data_100541c4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100541b4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100541a4> Type2;

extern "C" bool fn_0220cf38(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
