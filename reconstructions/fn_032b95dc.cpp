#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd98;
extern "C" RuntimeTag data_10492ca4;
extern "C" const RuntimeVTable data_102a62a8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a6298;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a6288;

typedef Token<&data_1048fd98, &data_10492ca4, &data_102a62a8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102a6298> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102a6288> Type2;

extern "C" bool fn_032b95dc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
