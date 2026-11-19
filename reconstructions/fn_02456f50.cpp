#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048aef4;
extern "C" RuntimeTag data_1048aef8;
extern "C" const RuntimeVTable data_100b9f84;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b9f74;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b9f64;

typedef Token<&data_1048aef4, &data_1048aef8, &data_100b9f84> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100b9f74> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100b9f64> Type2;

extern "C" bool fn_02456f50(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
