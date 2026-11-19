#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488990;
extern "C" RuntimeTag data_10488994;
extern "C" const RuntimeVTable data_1004f170;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004f160;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004f150;

typedef Token<&data_10488990, &data_10488994, &data_1004f170> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004f160> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004f150> Type2;

extern "C" bool fn_021f6800(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
