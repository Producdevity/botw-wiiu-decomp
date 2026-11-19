#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048830c;
extern "C" RuntimeTag data_10488310;
extern "C" const RuntimeVTable data_1003cd2c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003cd1c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003cd0c;

typedef Token<&data_1048830c, &data_10488310, &data_1003cd2c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003cd1c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003cd0c> Type2;

extern "C" bool fn_0219f5b4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
