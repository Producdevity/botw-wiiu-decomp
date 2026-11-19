#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488f98;
extern "C" RuntimeTag data_10488f9c;
extern "C" const RuntimeVTable data_1005fa04;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1005f9e4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1005f96c;

typedef Token<&data_10488f98, &data_10488f9c, &data_1005fa04> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1005f9e4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1005f96c> Type2;

extern "C" bool fn_02242cd0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
