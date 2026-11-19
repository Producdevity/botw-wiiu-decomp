#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a744;
extern "C" RuntimeTag data_1048a748;
extern "C" const RuntimeVTable data_100a2a3c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100a2a2c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100a2a1c;

typedef Token<&data_1048a744, &data_1048a748, &data_100a2a3c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100a2a2c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100a2a1c> Type2;

extern "C" bool fn_023cea0c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
