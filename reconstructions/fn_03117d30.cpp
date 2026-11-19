#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490108;
extern "C" RuntimeTag data_104925f0;
extern "C" const RuntimeVTable data_10282350;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10282340;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10282330;

typedef Token<&data_10490108, &data_104925f0, &data_10282350> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10282340> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10282330> Type2;

extern "C" bool fn_03117d30(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
