#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487b60;
extern "C" RuntimeTag data_10487b64;
extern "C" const RuntimeVTable data_100293e0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100293c0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100293b0;

typedef Token<&data_10487b60, &data_10487b64, &data_100293e0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100293c0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100293b0> Type2;

extern "C" bool fn_02133c50(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
