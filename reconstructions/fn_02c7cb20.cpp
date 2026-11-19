#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048febc;
extern "C" RuntimeTag data_10490f60;
extern "C" const RuntimeVTable data_101cc668;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_101cc658;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101cc648;

typedef Token<&data_1048febc, &data_10490f60, &data_101cc668> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_101cc658> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101cc648> Type2;

extern "C" bool fn_02c7cb20(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
