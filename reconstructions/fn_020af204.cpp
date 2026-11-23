#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487240;
extern "C" RuntimeTag data_10487244;
extern "C" const RuntimeVTable data_10013ef0;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_10013ee0;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_10013ed0;

typedef Token<&data_10487240, &data_10487244, &data_10013ef0> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_10013ee0> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_10013ed0> Type2;

extern "C" bool fn_020af204(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
