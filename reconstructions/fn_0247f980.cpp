#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104868d4;
extern "C" RuntimeTag data_1048b0b8;
extern "C" const RuntimeVTable data_100c0fd4;
extern "C" unsigned data_104868d0;
extern "C" RuntimeTag data_104868cc;
extern "C" const RuntimeVTable data_100c0fc4;
extern "C" unsigned data_104862fc;
extern "C" RuntimeTag data_104868c8;
extern "C" const RuntimeVTable data_100c0fb4;

typedef Token<&data_104868d4, &data_1048b0b8, &data_100c0fd4> Type0;
typedef Token<&data_104868d0, &data_104868cc, &data_100c0fc4> Type1;
typedef Token<&data_104862fc, &data_104868c8, &data_100c0fb4> Type2;

extern "C" bool fn_0247f980(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
