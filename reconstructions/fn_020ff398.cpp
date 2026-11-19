#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048783c;
extern "C" RuntimeTag data_10487840;
extern "C" const RuntimeVTable data_10020bd0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10020bc0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10020bb0;

typedef Token<&data_1048783c, &data_10487840, &data_10020bd0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10020bc0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10020bb0> Type2;

extern "C" bool fn_020ff398(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
