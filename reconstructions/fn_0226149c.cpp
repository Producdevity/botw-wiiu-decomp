#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489178;
extern "C" RuntimeTag data_1048917c;
extern "C" const RuntimeVTable data_10065590;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10065580;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10065570;

typedef Token<&data_10489178, &data_1048917c, &data_10065590> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10065580> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10065570> Type2;

extern "C" bool fn_0226149c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
