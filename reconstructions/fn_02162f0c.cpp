#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487f10;
extern "C" RuntimeTag data_10487f14;
extern "C" const RuntimeVTable data_10032970;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10032960;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10032950;

typedef Token<&data_10487f10, &data_10487f14, &data_10032970> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10032960> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10032950> Type2;

extern "C" bool fn_02162f0c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
