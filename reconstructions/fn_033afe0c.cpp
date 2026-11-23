#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048823c;
extern "C" RuntimeTag data_10488240;
extern "C" const RuntimeVTable data_102ba324;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102ba314;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102ba29c;

typedef Token<&data_1048823c, &data_10488240, &data_102ba324> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102ba314> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102ba29c> Type2;

extern "C" bool fn_033afe0c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
