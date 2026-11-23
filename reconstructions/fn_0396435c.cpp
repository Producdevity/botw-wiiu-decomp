#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487448;
extern "C" RuntimeTag data_10496658;
extern "C" const RuntimeVTable data_1034386c;
extern "C" unsigned data_104873f8;
extern "C" RuntimeTag data_10495dd4;
extern "C" const RuntimeVTable data_1034385c;
extern "C" unsigned data_10486300;
extern "C" RuntimeTag data_10495dac;
extern "C" const RuntimeVTable data_1034384c;

typedef Token<&data_10487448, &data_10496658, &data_1034386c> Type0;
typedef Token<&data_104873f8, &data_10495dd4, &data_1034385c> Type1;
typedef Token<&data_10486300, &data_10495dac, &data_1034384c> Type2;

extern "C" bool fn_0396435c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
