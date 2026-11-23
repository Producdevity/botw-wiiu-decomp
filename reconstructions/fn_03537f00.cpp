#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10492d7c;
extern "C" RuntimeTag data_10494230;
extern "C" const RuntimeVTable data_102da770;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102da760;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102da740;

typedef Token<&data_10492d7c, &data_10494230, &data_102da770> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102da760> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102da740> Type2;

extern "C" bool fn_03537f00(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
