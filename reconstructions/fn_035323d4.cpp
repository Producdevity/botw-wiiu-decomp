#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d4d4;
extern "C" RuntimeTag data_10494254;
extern "C" const RuntimeVTable data_102d9354;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102d9344;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102d92bc;

typedef Token<&data_1048d4d4, &data_10494254, &data_102d9354> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102d9344> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102d92bc> Type2;

extern "C" bool fn_035323d4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
