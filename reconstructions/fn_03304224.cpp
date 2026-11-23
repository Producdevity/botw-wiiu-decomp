#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104868a0;
extern "C" RuntimeTag data_1048689c;
extern "C" const RuntimeVTable data_102acbf4;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102acbd4;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102acbc4;

typedef Token<&data_104868a0, &data_1048689c, &data_102acbf4> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102acbd4> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102acbc4> Type2;

extern "C" bool fn_03304224(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
