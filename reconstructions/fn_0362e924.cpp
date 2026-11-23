#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048655c;
extern "C" RuntimeTag data_10495c4c;
extern "C" const RuntimeVTable data_102fd4fc;
extern "C" unsigned data_10486550;
extern "C" RuntimeTag data_104927ec;
extern "C" const RuntimeVTable data_102fd4ec;
extern "C" unsigned data_10486548;
extern "C" RuntimeTag data_104927e4;
extern "C" const RuntimeVTable data_102fd43c;

typedef Token<&data_1048655c, &data_10495c4c, &data_102fd4fc> Type0;
typedef Token<&data_10486550, &data_104927ec, &data_102fd4ec> Type1;
typedef Token<&data_10486548, &data_104927e4, &data_102fd43c> Type2;

extern "C" bool fn_0362e924(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
