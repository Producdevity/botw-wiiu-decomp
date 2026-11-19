#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487804;
extern "C" RuntimeTag data_10487808;
extern "C" const RuntimeVTable data_1001fd00;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001fcf0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001fce0;

typedef Token<&data_10487804, &data_10487808, &data_1001fd00> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1001fcf0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1001fce0> Type2;

extern "C" bool fn_020fa800(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
