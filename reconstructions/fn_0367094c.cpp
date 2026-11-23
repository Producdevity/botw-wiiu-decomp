#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104867a0;
extern "C" RuntimeTag data_10495c9c;
extern "C" const RuntimeVTable data_103024b4;
extern "C" unsigned data_10486550;
extern "C" RuntimeTag data_104927ec;
extern "C" const RuntimeVTable data_103024a4;
extern "C" unsigned data_10486548;
extern "C" RuntimeTag data_104927e4;
extern "C" const RuntimeVTable data_10302494;

typedef Token<&data_104867a0, &data_10495c9c, &data_103024b4> Type0;
typedef Token<&data_10486550, &data_104927ec, &data_103024a4> Type1;
typedef Token<&data_10486548, &data_104927e4, &data_10302494> Type2;

extern "C" bool fn_0367094c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
