#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488e38;
extern "C" RuntimeTag data_10488e3c;
extern "C" const RuntimeVTable data_1005a748;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1005a738;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1005a728;

typedef Token<&data_10488e38, &data_10488e3c, &data_1005a748> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1005a738> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1005a728> Type2;

extern "C" bool fn_02225334(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
