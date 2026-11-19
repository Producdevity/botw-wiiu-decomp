#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104882ec;
extern "C" RuntimeTag data_104882f0;
extern "C" const RuntimeVTable data_1003c364;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003c324;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003c314;

typedef Token<&data_104882ec, &data_104882f0, &data_1003c364> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003c324> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003c314> Type2;

extern "C" bool fn_0219c6ec(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
