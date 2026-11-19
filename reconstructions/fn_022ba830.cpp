#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104897cc;
extern "C" RuntimeTag data_104897d0;
extern "C" const RuntimeVTable data_10073868;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10073858;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10073848;

typedef Token<&data_104897cc, &data_104897d0, &data_10073868> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10073858> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10073848> Type2;

extern "C" bool fn_022ba830(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
