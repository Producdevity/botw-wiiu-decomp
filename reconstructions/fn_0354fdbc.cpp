#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104941c0;
extern "C" RuntimeTag data_10494b18;
extern "C" const RuntimeVTable data_102e088c;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102e087c;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102e07f4;

typedef Token<&data_104941c0, &data_10494b18, &data_102e088c> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102e087c> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102e07f4> Type2;

extern "C" bool fn_0354fdbc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
