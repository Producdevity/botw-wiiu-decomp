#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048dc2c;
extern "C" RuntimeTag data_1048dc28;
extern "C" const RuntimeVTable data_1015d110;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1015d100;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1015d0f0;

typedef Token<&data_1048dc2c, &data_1048dc28, &data_1015d110> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1015d100> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1015d0f0> Type2;

extern "C" bool fn_028efb0c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
