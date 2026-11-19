#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487eb8;
extern "C" RuntimeTag data_10487ebc;
extern "C" const RuntimeVTable data_10036178;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10036168;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10036158;

typedef Token<&data_10487eb8, &data_10487ebc, &data_10036178> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10036168> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10036158> Type2;

extern "C" bool fn_021778b8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
