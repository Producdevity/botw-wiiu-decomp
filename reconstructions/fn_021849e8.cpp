#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488160;
extern "C" RuntimeTag data_10488164;
extern "C" const RuntimeVTable data_10038c04;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10038bf4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10038be4;

typedef Token<&data_10488160, &data_10488164, &data_10038c04> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10038bf4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10038be4> Type2;

extern "C" bool fn_021849e8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
