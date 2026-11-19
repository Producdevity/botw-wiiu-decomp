#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486eac;
extern "C" RuntimeTag data_10486eb0;
extern "C" const RuntimeVTable data_1000cc3c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000cc2c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000cc1c;

typedef Token<&data_10486eac, &data_10486eb0, &data_1000cc3c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1000cc2c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1000cc1c> Type2;

extern "C" bool fn_020763a0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
