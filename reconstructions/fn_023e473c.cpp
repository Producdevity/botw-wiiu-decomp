#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a80c;
extern "C" RuntimeTag data_1048a808;
extern "C" const RuntimeVTable data_100a5ca0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100a5c90;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100a5c80;

typedef Token<&data_1048a80c, &data_1048a808, &data_100a5ca0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100a5c90> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100a5c80> Type2;

extern "C" bool fn_023e473c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
