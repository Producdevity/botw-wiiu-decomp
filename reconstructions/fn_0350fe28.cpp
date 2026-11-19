#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490250;
extern "C" RuntimeTag data_104940e8;
extern "C" const RuntimeVTable data_102d43b0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_102d43a0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d4390;

typedef Token<&data_10490250, &data_104940e8, &data_102d43b0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_102d43a0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d4390> Type2;

extern "C" bool fn_0350fe28(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
