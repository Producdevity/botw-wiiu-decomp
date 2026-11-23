#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10494d80;
extern "C" RuntimeTag data_10494d84;
extern "C" const RuntimeVTable data_102e77ec;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102e77dc;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102e77cc;

typedef Token<&data_10494d80, &data_10494d84, &data_102e77ec> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102e77dc> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102e77cc> Type2;

extern "C" bool fn_03596f20(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
