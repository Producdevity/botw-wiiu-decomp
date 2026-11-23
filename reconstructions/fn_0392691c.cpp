#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104904a0;
extern "C" RuntimeTag data_10495d44;
extern "C" const RuntimeVTable data_10339700;
extern "C" unsigned data_10490494;
extern "C" RuntimeTag data_10495d40;
extern "C" const RuntimeVTable data_103396f0;
extern "C" unsigned data_10490490;
extern "C" RuntimeTag data_104957dc;
extern "C" const RuntimeVTable data_103396e0;

typedef Token<&data_104904a0, &data_10495d44, &data_10339700> Type0;
typedef Token<&data_10490494, &data_10495d40, &data_103396f0> Type1;
typedef Token<&data_10490490, &data_104957dc, &data_103396e0> Type2;

extern "C" bool fn_0392691c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
