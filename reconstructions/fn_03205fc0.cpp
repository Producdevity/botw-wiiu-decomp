#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10485f00;
extern "C" RuntimeTag data_10491374;
extern "C" const RuntimeVTable data_10296a28;
extern "C" unsigned data_10485ef8;
extern "C" RuntimeTag data_10491370;
extern "C" const RuntimeVTable data_10296848;
extern "C" unsigned data_10485ef4;
extern "C" RuntimeTag data_10491324;
extern "C" const RuntimeVTable data_10296768;

typedef Token<&data_10485f00, &data_10491374, &data_10296a28> Type0;
typedef Token<&data_10485ef8, &data_10491370, &data_10296848> Type1;
typedef Token<&data_10485ef4, &data_10491324, &data_10296768> Type2;

extern "C" bool fn_03205fc0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
