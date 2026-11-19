#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104888e4;
extern "C" RuntimeTag data_104888e8;
extern "C" const RuntimeVTable data_10051a90;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10051a70;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10051a60;

typedef Token<&data_104888e4, &data_104888e8, &data_10051a90> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10051a70> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10051a60> Type2;

extern "C" bool fn_0220249c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
