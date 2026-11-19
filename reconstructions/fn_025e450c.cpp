#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048be10;
extern "C" RuntimeTag data_1048be0c;
extern "C" const RuntimeVTable data_100f0d20;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100f0d10;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100f0d00;

typedef Token<&data_1048be10, &data_1048be0c, &data_100f0d20> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100f0d10> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100f0d00> Type2;

extern "C" bool fn_025e450c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
