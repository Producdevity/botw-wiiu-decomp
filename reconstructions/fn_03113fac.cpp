#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd04;
extern "C" RuntimeTag data_104925d8;
extern "C" const RuntimeVTable data_10281548;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10281538;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10281528;

typedef Token<&data_1048fd04, &data_104925d8, &data_10281548> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10281538> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10281528> Type2;

extern "C" bool fn_03113fac(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
