#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e2c8;
extern "C" RuntimeTag data_1048e2cc;
extern "C" const RuntimeVTable data_10172e14;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10172e04;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10172df4;

typedef Token<&data_1048e2c8, &data_1048e2cc, &data_10172e14> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10172e04> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10172df4> Type2;

extern "C" bool fn_0297b9c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
