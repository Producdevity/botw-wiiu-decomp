#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490bb8;
extern "C" RuntimeTag data_10497600;
extern "C" const RuntimeVTable data_10372edc;
extern "C" unsigned data_10490bb0;
extern "C" RuntimeTag data_104974dc;
extern "C" const RuntimeVTable data_10372e84;
extern "C" unsigned data_10490ba8;
extern "C" RuntimeTag data_10493bd0;
extern "C" const RuntimeVTable data_10372cf4;

typedef Token<&data_10490bb8, &data_10497600, &data_10372edc> Type0;
typedef Token<&data_10490bb0, &data_104974dc, &data_10372e84> Type1;
typedef Token<&data_10490ba8, &data_10493bd0, &data_10372cf4> Type2;

extern "C" bool fn_03b3115c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
