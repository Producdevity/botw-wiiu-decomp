#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10492968;
extern "C" RuntimeTag data_1049296c;
extern "C" const RuntimeVTable data_1029e2e0;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_1029e2d0;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_1029e258;

typedef Token<&data_10492968, &data_1049296c, &data_1029e2e0> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_1029e2d0> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_1029e258> Type2;

extern "C" bool fn_0327ed84(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
