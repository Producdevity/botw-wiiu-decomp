#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486b10;
extern "C" RuntimeTag data_10486b0c;
extern "C" const RuntimeVTable data_102b71a0;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102b7190;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102b70a0;

typedef Token<&data_10486b10, &data_10486b0c, &data_102b71a0> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102b7190> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102b70a0> Type2;

extern "C" bool fn_0338c4f4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
