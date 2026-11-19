#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489fe4;
extern "C" RuntimeTag data_10489fe8;
extern "C" const RuntimeVTable data_1008bd24;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008bd14;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008bd04;

typedef Token<&data_10489fe4, &data_10489fe8, &data_1008bd24> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1008bd14> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1008bd04> Type2;

extern "C" bool fn_0234b9bc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
