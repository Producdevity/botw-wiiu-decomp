#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a6c0;
extern "C" RuntimeTag data_1048a6bc;
extern "C" const RuntimeVTable data_100a04dc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100a04cc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100a04bc;

typedef Token<&data_1048a6c0, &data_1048a6bc, &data_100a04dc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100a04cc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100a04bc> Type2;

extern "C" bool fn_023be9c0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
