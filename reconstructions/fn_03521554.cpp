#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10494198;
extern "C" RuntimeTag data_104941ec;
extern "C" const RuntimeVTable data_102d6d4c;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102d6d3c;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102d6cb4;

typedef Token<&data_10494198, &data_104941ec, &data_102d6d4c> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102d6d3c> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102d6cb4> Type2;

extern "C" bool fn_03521554(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
