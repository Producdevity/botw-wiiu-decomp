#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048af44;
extern "C" RuntimeTag data_1048af40;
extern "C" const RuntimeVTable data_100bacbc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100bacac;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100bac9c;

typedef Token<&data_1048af44, &data_1048af40, &data_100bacbc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100bacac> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100bac9c> Type2;

extern "C" bool fn_0245c84c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
