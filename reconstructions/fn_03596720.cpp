#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486df4;
extern "C" RuntimeTag data_1049409c;
extern "C" const RuntimeVTable data_102e729c;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102e728c;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102e727c;

typedef Token<&data_10486df4, &data_1049409c, &data_102e729c> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102e728c> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102e727c> Type2;

extern "C" bool fn_03596720(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
