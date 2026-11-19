#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486d60;
extern "C" RuntimeTag data_10486d64;
extern "C" const RuntimeVTable data_1000aee0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000aed0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000aec0;

typedef Token<&data_10486d60, &data_10486d64, &data_1000aee0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1000aed0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1000aec0> Type2;

extern "C" bool fn_0206b2f0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
