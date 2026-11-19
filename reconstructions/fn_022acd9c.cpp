#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104896c0;
extern "C" RuntimeTag data_104896c4;
extern "C" const RuntimeVTable data_10072760;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10072750;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10072740;

typedef Token<&data_104896c0, &data_104896c4, &data_10072760> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10072750> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10072740> Type2;

extern "C" bool fn_022acd9c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
