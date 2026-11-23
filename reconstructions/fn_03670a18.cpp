#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104867a4;
extern "C" RuntimeTag data_10495ca0;
extern "C" const RuntimeVTable data_103024b4;
extern "C" unsigned data_10486550;
extern "C" RuntimeTag data_104927ec;
extern "C" const RuntimeVTable data_103024a4;
extern "C" unsigned data_10486548;
extern "C" RuntimeTag data_104927e4;
extern "C" const RuntimeVTable data_10302494;

typedef Token<&data_104867a4, &data_10495ca0, &data_103024b4> Type0;
typedef Token<&data_10486550, &data_104927ec, &data_103024a4> Type1;
typedef Token<&data_10486548, &data_104927e4, &data_10302494> Type2;

extern "C" bool fn_03670a18(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
