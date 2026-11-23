#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486894;
extern "C" RuntimeTag data_10486890;
extern "C" const RuntimeVTable data_102ad1bc;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_102ad1ac;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_102ad19c;

typedef Token<&data_10486894, &data_10486890, &data_102ad1bc> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_102ad1ac> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_102ad19c> Type2;

extern "C" bool fn_03304e78(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
