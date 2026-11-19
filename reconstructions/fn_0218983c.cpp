#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104881b4;
extern "C" RuntimeTag data_104881b0;
extern "C" const RuntimeVTable data_10039a00;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100399f0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100399e0;

typedef Token<&data_104881b4, &data_104881b0, &data_10039a00> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100399f0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100399e0> Type2;

extern "C" bool fn_0218983c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
