#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a350;
extern "C" RuntimeTag data_1048a354;
extern "C" const RuntimeVTable data_10096280;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10096270;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10096260;

typedef Token<&data_1048a350, &data_1048a354, &data_10096280> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10096270> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10096260> Type2;

extern "C" bool fn_0238ad90(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
