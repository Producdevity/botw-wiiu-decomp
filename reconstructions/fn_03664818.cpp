#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048af3c;
extern "C" RuntimeTag data_10495c84;
extern "C" const RuntimeVTable data_10301ba4;
extern "C" unsigned data_10486550;
extern "C" RuntimeTag data_104927ec;
extern "C" const RuntimeVTable data_10301b94;
extern "C" unsigned data_10486548;
extern "C" RuntimeTag data_104927e4;
extern "C" const RuntimeVTable data_10301b84;

typedef Token<&data_1048af3c, &data_10495c84, &data_10301ba4> Type0;
typedef Token<&data_10486550, &data_104927ec, &data_10301b94> Type1;
typedef Token<&data_10486548, &data_104927e4, &data_10301b84> Type2;

extern "C" bool fn_03664818(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
