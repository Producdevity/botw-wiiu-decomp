#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10485f00;
extern "C" RuntimeTag data_10491374;
extern "C" const RuntimeVTable data_1032c5e8;
extern "C" unsigned data_10485ef8;
extern "C" RuntimeTag data_10491370;
extern "C" const RuntimeVTable data_1032c5c8;
extern "C" unsigned data_10485ef4;
extern "C" RuntimeTag data_10491324;
extern "C" const RuntimeVTable data_1032c540;

typedef Token<&data_10485f00, &data_10491374, &data_1032c5e8> Type0;
typedef Token<&data_10485ef8, &data_10491370, &data_1032c5c8> Type1;
typedef Token<&data_10485ef4, &data_10491324, &data_1032c540> Type2;

extern "C" bool fn_03888eb0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
