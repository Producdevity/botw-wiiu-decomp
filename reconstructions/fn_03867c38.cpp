#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104873fc;
extern "C" RuntimeTag data_10495dd8;
extern "C" const RuntimeVTable data_10328c90;
extern "C" unsigned data_104873f8;
extern "C" RuntimeTag data_10495dd4;
extern "C" const RuntimeVTable data_10328c80;
extern "C" unsigned data_10486300;
extern "C" RuntimeTag data_10495dac;
extern "C" const RuntimeVTable data_10328c70;

typedef Token<&data_104873fc, &data_10495dd8, &data_10328c90> Type0;
typedef Token<&data_104873f8, &data_10495dd4, &data_10328c80> Type1;
typedef Token<&data_10486300, &data_10495dac, &data_10328c70> Type2;

extern "C" bool fn_03867c38(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
