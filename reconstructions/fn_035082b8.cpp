#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104900f0;
extern "C" RuntimeTag data_10494080;
extern "C" const RuntimeVTable data_102d2c90;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102d2c80;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d2c70;

typedef Token<&data_104900f0, &data_10494080, &data_102d2c90> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102d2c80> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d2c70> Type2;

extern "C" bool fn_035082b8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
