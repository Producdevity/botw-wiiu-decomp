#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488f88;
extern "C" RuntimeTag data_10488f8c;
extern "C" const RuntimeVTable data_1005f648;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1005f638;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1005f628;

typedef Token<&data_10488f88, &data_10488f8c, &data_1005f648> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1005f638> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1005f628> Type2;

extern "C" bool fn_0223ef1c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
