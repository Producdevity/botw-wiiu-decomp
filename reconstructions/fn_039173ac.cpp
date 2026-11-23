#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104927f8;
extern "C" RuntimeTag data_10496bfc;
extern "C" const RuntimeVTable data_10338dc4;
extern "C" unsigned data_10486550;
extern "C" RuntimeTag data_104927ec;
extern "C" const RuntimeVTable data_10338db4;
extern "C" unsigned data_10486548;
extern "C" RuntimeTag data_104927e4;
extern "C" const RuntimeVTable data_10338da4;

typedef Token<&data_104927f8, &data_10496bfc, &data_10338dc4> Type0;
typedef Token<&data_10486550, &data_104927ec, &data_10338db4> Type1;
typedef Token<&data_10486548, &data_104927e4, &data_10338da4> Type2;

extern "C" bool fn_039173ac(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
