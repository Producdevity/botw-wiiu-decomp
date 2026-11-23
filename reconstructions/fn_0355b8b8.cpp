#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10493fe0;
extern "C" RuntimeTag data_10493fe4;
extern "C" const RuntimeVTable data_102e23d0;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102e23c0;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102e23b0;

typedef Token<&data_10493fe0, &data_10493fe4, &data_102e23d0> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102e23c0> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102e23b0> Type2;

extern "C" bool fn_0355b8b8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
