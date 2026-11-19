#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104887f4;
extern "C" RuntimeTag data_104887f8;
extern "C" const RuntimeVTable data_1004b298;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004b288;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004b278;

typedef Token<&data_104887f4, &data_104887f8, &data_1004b298> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004b288> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004b278> Type2;

extern "C" bool fn_021e40d8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
