#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490128;
extern "C" RuntimeTag data_10492934;
extern "C" const RuntimeVTable data_1029b738;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1029b728;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029b718;

typedef Token<&data_10490128, &data_10492934, &data_1029b738> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1029b728> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1029b718> Type2;

extern "C" bool fn_0326d0e4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
