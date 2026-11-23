#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10495d88;
extern "C" RuntimeTag data_10496bec;
extern "C" const RuntimeVTable data_1033790c;
extern "C" unsigned data_10495d74;
extern "C" RuntimeTag data_10496be0;
extern "C" const RuntimeVTable data_103378fc;
extern "C" unsigned data_10490490;
extern "C" RuntimeTag data_104957dc;
extern "C" const RuntimeVTable data_103378ec;

typedef Token<&data_10495d88, &data_10496bec, &data_1033790c> Type0;
typedef Token<&data_10495d74, &data_10496be0, &data_103378fc> Type1;
typedef Token<&data_10490490, &data_104957dc, &data_103378ec> Type2;

extern "C" bool fn_03910ed8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
