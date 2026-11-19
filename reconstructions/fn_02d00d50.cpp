#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104901e8;
extern "C" RuntimeTag data_10491190;
extern "C" const RuntimeVTable data_101de6ac;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101de69c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101de68c;

typedef Token<&data_104901e8, &data_10491190, &data_101de6ac> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101de69c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101de68c> Type2;

extern "C" bool fn_02d00d50(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
