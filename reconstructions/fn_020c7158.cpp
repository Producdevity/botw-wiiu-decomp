#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104873c4;
extern "C" RuntimeTag data_104873c8;
extern "C" const RuntimeVTable data_10017b4c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10017b3c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10017b2c;

typedef Token<&data_104873c4, &data_104873c8, &data_10017b4c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10017b3c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10017b2c> Type2;

extern "C" bool fn_020c7158(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
