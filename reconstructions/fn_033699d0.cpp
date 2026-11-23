#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104934e0;
extern "C" RuntimeTag data_104934e4;
extern "C" const RuntimeVTable data_102b56a8;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102b5698;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102b5688;

typedef Token<&data_104934e0, &data_104934e4, &data_102b56a8> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102b5698> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102b5688> Type2;

extern "C" bool fn_033699d0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
