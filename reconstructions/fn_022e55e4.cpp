#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048994c;
extern "C" RuntimeTag data_10489950;
extern "C" const RuntimeVTable data_10079874;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10079864;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10079854;

typedef Token<&data_1048994c, &data_10489950, &data_10079874> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10079864> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10079854> Type2;

extern "C" bool fn_022e55e4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
