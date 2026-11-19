#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488c40;
extern "C" RuntimeTag data_10488c44;
extern "C" const RuntimeVTable data_100561a8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10056198;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10056188;

typedef Token<&data_10488c40, &data_10488c44, &data_100561a8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10056198> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10056188> Type2;

extern "C" bool fn_02214510(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
