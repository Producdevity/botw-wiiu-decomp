#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c250;
extern "C" RuntimeTag data_1048c254;
extern "C" const RuntimeVTable data_10101fa0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10101f90;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10101f80;

typedef Token<&data_1048c250, &data_1048c254, &data_10101fa0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10101f90> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10101f80> Type2;

extern "C" bool fn_0265a53c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
