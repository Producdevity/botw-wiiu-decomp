#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487874;
extern "C" RuntimeTag data_10487878;
extern "C" const RuntimeVTable data_100220bc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100220ac;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1002209c;

typedef Token<&data_10487874, &data_10487878, &data_100220bc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100220ac> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1002209c> Type2;

extern "C" bool fn_021071a8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
