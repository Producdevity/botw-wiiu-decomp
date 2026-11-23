#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10485ce0;
extern "C" RuntimeTag data_10485ce4;
extern "C" const RuntimeVTable data_101a8fc0;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_101a8f60;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_101a8e70;

typedef Token<&data_10485ce0, &data_10485ce4, &data_101a8fc0> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_101a8f60> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_101a8e70> Type2;

extern "C" bool fn_02af85a4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
