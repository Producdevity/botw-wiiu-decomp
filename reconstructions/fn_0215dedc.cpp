#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487ea4;
extern "C" RuntimeTag data_10487ea0;
extern "C" const RuntimeVTable data_10031314;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10031304;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100312f4;

typedef Token<&data_10487ea4, &data_10487ea0, &data_10031314> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10031304> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100312f4> Type2;

extern "C" bool fn_0215dedc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
