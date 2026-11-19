#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104889a8;
extern "C" RuntimeTag data_104889ac;
extern "C" const RuntimeVTable data_1004f644;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004f634;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004f624;

typedef Token<&data_104889a8, &data_104889ac, &data_1004f644> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004f634> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004f624> Type2;

extern "C" bool fn_021f7f3c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
