#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd50;
extern "C" RuntimeTag data_10493ff8;
extern "C" const RuntimeVTable data_102d1670;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102d1660;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d1650;

typedef Token<&data_1048fd50, &data_10493ff8, &data_102d1670> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102d1660> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d1650> Type2;

extern "C" bool fn_035009e0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
