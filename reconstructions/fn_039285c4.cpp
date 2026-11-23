#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490498;
extern "C" RuntimeTag data_10495d48;
extern "C" const RuntimeVTable data_103398d8;
extern "C" unsigned data_10490494;
extern "C" RuntimeTag data_10495d40;
extern "C" const RuntimeVTable data_103398c8;
extern "C" unsigned data_10490490;
extern "C" RuntimeTag data_104957dc;
extern "C" const RuntimeVTable data_103398b8;

typedef Token<&data_10490498, &data_10495d48, &data_103398d8> Type0;
typedef Token<&data_10490494, &data_10495d40, &data_103398c8> Type1;
typedef Token<&data_10490490, &data_104957dc, &data_103398b8> Type2;

extern "C" bool fn_039285c4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
