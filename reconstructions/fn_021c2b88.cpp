#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488570;
extern "C" RuntimeTag data_10488574;
extern "C" const RuntimeVTable data_10043564;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10043554;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10043544;

typedef Token<&data_10488570, &data_10488574, &data_10043564> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10043554> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10043544> Type2;

extern "C" bool fn_021c2b88(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
