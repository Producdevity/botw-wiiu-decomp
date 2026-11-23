#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048688c;
extern "C" RuntimeTag data_104868f0;
extern "C" const RuntimeVTable data_102ab6c0;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102ab6b0;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102ab5d0;

typedef Token<&data_1048688c, &data_104868f0, &data_102ab6c0> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102ab6b0> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102ab5d0> Type2;

extern "C" bool fn_032f152c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
