#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10494170;
extern "C" RuntimeTag data_104941dc;
extern "C" const RuntimeVTable data_102d6560;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102d6550;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102d6530;

typedef Token<&data_10494170, &data_104941dc, &data_102d6560> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102d6550> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102d6530> Type2;

extern "C" bool fn_0351f094(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
