#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487400;
extern "C" RuntimeTag data_10496678;
extern "C" const RuntimeVTable data_10328e28;
extern "C" unsigned data_104873f8;
extern "C" RuntimeTag data_10495dd4;
extern "C" const RuntimeVTable data_10328e18;
extern "C" unsigned data_10486300;
extern "C" RuntimeTag data_10495dac;
extern "C" const RuntimeVTable data_10328e08;

typedef Token<&data_10487400, &data_10496678, &data_10328e28> Type0;
typedef Token<&data_104873f8, &data_10495dd4, &data_10328e18> Type1;
typedef Token<&data_10486300, &data_10495dac, &data_10328e08> Type2;

extern "C" bool fn_03868f38(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
