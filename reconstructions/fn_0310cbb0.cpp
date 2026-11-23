#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10492540;
extern "C" RuntimeTag data_10492544;
extern "C" const RuntimeVTable data_1027f7c8;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_1027f7b8;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_1027f7a8;

typedef Token<&data_10492540, &data_10492544, &data_1027f7c8> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_1027f7b8> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_1027f7a8> Type2;

extern "C" bool fn_0310cbb0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
