#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ee1c;
extern "C" RuntimeTag data_10494250;
extern "C" const RuntimeVTable data_102d9d90;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102d9d80;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102d9d60;

typedef Token<&data_1048ee1c, &data_10494250, &data_102d9d90> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102d9d80> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102d9d60> Type2;

extern "C" bool fn_03535034(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
