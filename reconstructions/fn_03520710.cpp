#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10494184;
extern "C" RuntimeTag data_104941f8;
extern "C" const RuntimeVTable data_102d694c;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102d693c;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102d684c;

typedef Token<&data_10494184, &data_104941f8, &data_102d694c> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102d693c> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102d684c> Type2;

extern "C" bool fn_03520710(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
