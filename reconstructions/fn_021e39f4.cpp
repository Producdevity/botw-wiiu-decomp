#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104887dc;
extern "C" RuntimeTag data_104887e0;
extern "C" const RuntimeVTable data_1004afdc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004afcc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004afbc;

typedef Token<&data_104887dc, &data_104887e0, &data_1004afdc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004afcc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004afbc> Type2;

extern "C" bool fn_021e39f4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
