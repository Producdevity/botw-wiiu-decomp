#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104898c8;
extern "C" RuntimeTag data_104898c4;
extern "C" const RuntimeVTable data_100770f4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007706c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007705c;

typedef Token<&data_104898c8, &data_104898c4, &data_100770f4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1007706c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1007705c> Type2;

extern "C" bool fn_022cfcd0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
