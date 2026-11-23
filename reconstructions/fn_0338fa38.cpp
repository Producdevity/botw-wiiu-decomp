#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10493a10;
extern "C" RuntimeTag data_10493a14;
extern "C" const RuntimeVTable data_102b84dc;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102b84cc;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102b84bc;

typedef Token<&data_10493a10, &data_10493a14, &data_102b84dc> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102b84cc> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102b84bc> Type2;

extern "C" bool fn_0338fa38(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
