#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487e30;
extern "C" RuntimeTag data_10487e34;
extern "C" const RuntimeVTable data_100302ac;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003029c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003028c;

typedef Token<&data_10487e30, &data_10487e34, &data_100302ac> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003029c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003028c> Type2;

extern "C" bool fn_021582f8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
