#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490104;
extern "C" RuntimeTag data_10494094;
extern "C" const RuntimeVTable data_102d3360;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102d3350;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d3340;

typedef Token<&data_10490104, &data_10494094, &data_102d3360> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102d3350> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d3340> Type2;

extern "C" bool fn_0350aa00(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
