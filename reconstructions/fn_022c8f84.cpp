#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489870;
extern "C" RuntimeTag data_10489874;
extern "C" const RuntimeVTable data_10076108;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100760f8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100760e8;

typedef Token<&data_10489870, &data_10489874, &data_10076108> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100760f8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100760e8> Type2;

extern "C" bool fn_022c8f84(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
