#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488590;
extern "C" RuntimeTag data_10488594;
extern "C" const RuntimeVTable data_10043968;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10043958;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10043948;

typedef Token<&data_10488590, &data_10488594, &data_10043968> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10043958> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10043948> Type2;

extern "C" bool fn_021c473c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
