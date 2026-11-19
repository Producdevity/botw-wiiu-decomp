#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048719c;
extern "C" RuntimeTag data_104871a0;
extern "C" const RuntimeVTable data_10012210;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10012200;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100121f0;

typedef Token<&data_1048719c, &data_104871a0, &data_10012210> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10012200> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100121f0> Type2;

extern "C" bool fn_0209253c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
