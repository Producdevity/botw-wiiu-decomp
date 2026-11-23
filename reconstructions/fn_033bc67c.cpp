#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486348;
extern "C" RuntimeTag data_104864bc;
extern "C" const RuntimeVTable data_102ba8e8;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102ba8c8;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102ba850;

typedef Token<&data_10486348, &data_104864bc, &data_102ba8e8> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102ba8c8> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102ba850> Type2;

extern "C" bool fn_033bc67c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
