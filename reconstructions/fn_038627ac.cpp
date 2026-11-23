#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104873e8;
extern "C" RuntimeTag data_10495dc8;
extern "C" const RuntimeVTable data_103282e0;
extern "C" unsigned data_104873e4;
extern "C" RuntimeTag data_10495dc4;
extern "C" const RuntimeVTable data_103282d0;
extern "C" unsigned data_10486300;
extern "C" RuntimeTag data_10495dac;
extern "C" const RuntimeVTable data_103282c0;

typedef Token<&data_104873e8, &data_10495dc8, &data_103282e0> Type0;
typedef Token<&data_104873e4, &data_10495dc4, &data_103282d0> Type1;
typedef Token<&data_10486300, &data_10495dac, &data_103282c0> Type2;

extern "C" bool fn_038627ac(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
