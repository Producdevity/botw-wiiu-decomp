#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487274;
extern "C" RuntimeTag data_10487278;
extern "C" const RuntimeVTable data_10014ce4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10014cd4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10014cc4;

typedef Token<&data_10487274, &data_10487278, &data_10014ce4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10014cd4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10014cc4> Type2;

extern "C" bool fn_020b3e10(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
