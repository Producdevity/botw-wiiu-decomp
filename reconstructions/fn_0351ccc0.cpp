#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c90c;
extern "C" RuntimeTag data_1049424c;
extern "C" const RuntimeVTable data_102d5edc;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102d5ecc;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102d5eac;

typedef Token<&data_1048c90c, &data_1049424c, &data_102d5edc> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102d5ecc> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102d5eac> Type2;

extern "C" bool fn_0351ccc0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
