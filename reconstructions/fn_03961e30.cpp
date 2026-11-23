#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104873f4;
extern "C" RuntimeTag data_1049733c;
extern "C" const RuntimeVTable data_10343704;
extern "C" unsigned data_104873e4;
extern "C" RuntimeTag data_10495dc4;
extern "C" const RuntimeVTable data_103436f4;
extern "C" unsigned data_10486300;
extern "C" RuntimeTag data_10495dac;
extern "C" const RuntimeVTable data_103436e4;

typedef Token<&data_104873f4, &data_1049733c, &data_10343704> Type0;
typedef Token<&data_104873e4, &data_10495dc4, &data_103436f4> Type1;
typedef Token<&data_10486300, &data_10495dac, &data_103436e4> Type2;

extern "C" bool fn_03961e30(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
