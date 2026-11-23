#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10495d80;
extern "C" RuntimeTag data_10496be4;
extern "C" const RuntimeVTable data_1033790c;
extern "C" unsigned data_10495d74;
extern "C" RuntimeTag data_10496be0;
extern "C" const RuntimeVTable data_103378fc;
extern "C" unsigned data_10490490;
extern "C" RuntimeTag data_104957dc;
extern "C" const RuntimeVTable data_103378ec;

typedef Token<&data_10495d80, &data_10496be4, &data_1033790c> Type0;
typedef Token<&data_10495d74, &data_10496be0, &data_103378fc> Type1;
typedef Token<&data_10490490, &data_104957dc, &data_103378ec> Type2;

extern "C" bool fn_03910c60(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
