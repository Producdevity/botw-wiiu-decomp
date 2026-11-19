#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487540;
extern "C" RuntimeTag data_10487544;
extern "C" const RuntimeVTable data_1001953c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001952c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001951c;

typedef Token<&data_10487540, &data_10487544, &data_1001953c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1001952c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1001951c> Type2;

extern "C" bool fn_020cfebc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
