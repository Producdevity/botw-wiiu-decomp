#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488c60;
extern "C" RuntimeTag data_10488c64;
extern "C" const RuntimeVTable data_100564a8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10056498;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10056488;

typedef Token<&data_10488c60, &data_10488c64, &data_100564a8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10056498> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10056488> Type2;

extern "C" bool fn_02214cec(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
