#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487404;
extern "C" RuntimeTag data_1049667c;
extern "C" const RuntimeVTable data_10344324;
extern "C" unsigned data_104873f8;
extern "C" RuntimeTag data_10495dd4;
extern "C" const RuntimeVTable data_10344314;
extern "C" unsigned data_10486300;
extern "C" RuntimeTag data_10495dac;
extern "C" const RuntimeVTable data_10344304;

typedef Token<&data_10487404, &data_1049667c, &data_10344324> Type0;
typedef Token<&data_104873f8, &data_10495dd4, &data_10344314> Type1;
typedef Token<&data_10486300, &data_10495dac, &data_10344304> Type2;

extern "C" bool fn_03965ab0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
