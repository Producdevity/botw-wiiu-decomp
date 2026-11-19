#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104889bc;
extern "C" RuntimeTag data_104889b8;
extern "C" const RuntimeVTable data_1004f938;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004f928;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004f918;

typedef Token<&data_104889bc, &data_104889b8, &data_1004f938> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004f928> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004f918> Type2;

extern "C" bool fn_021f8a50(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
