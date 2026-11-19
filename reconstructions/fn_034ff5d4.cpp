#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd34;
extern "C" RuntimeTag data_10493fe8;
extern "C" const RuntimeVTable data_102d1250;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102d1230;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d1220;

typedef Token<&data_1048fd34, &data_10493fe8, &data_102d1250> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102d1230> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d1220> Type2;

extern "C" bool fn_034ff5d4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
