#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104889e0;
extern "C" RuntimeTag data_104889e4;
extern "C" const RuntimeVTable data_1004fe28;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004fe18;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004fe08;

typedef Token<&data_104889e0, &data_104889e4, &data_1004fe28> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004fe18> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004fe08> Type2;

extern "C" bool fn_021fa494(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
