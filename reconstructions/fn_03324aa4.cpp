#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10492e2c;
extern "C" RuntimeTag data_10492e30;
extern "C" const RuntimeVTable data_102b0600;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102b05f0;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102b05e0;

typedef Token<&data_10492e2c, &data_10492e30, &data_102b0600> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102b05f0> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102b05e0> Type2;

extern "C" bool fn_03324aa4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
