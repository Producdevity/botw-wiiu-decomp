#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10494100;
extern "C" RuntimeTag data_104941e0;
extern "C" const RuntimeVTable data_102d86a4;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102d8694;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102d853c;

typedef Token<&data_10494100, &data_104941e0, &data_102d86a4> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102d8694> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102d853c> Type2;

extern "C" bool fn_0352db94(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
