#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487aa8;
extern "C" RuntimeTag data_10487adc;
extern "C" const RuntimeVTable data_10028258;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100281f8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100281e8;

typedef Token<&data_10487aa8, &data_10487adc, &data_10028258> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100281f8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100281e8> Type2;

extern "C" bool fn_0212e378(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
