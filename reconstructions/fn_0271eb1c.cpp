#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c8d4;
extern "C" RuntimeTag data_1048c8d8;
extern "C" const RuntimeVTable data_1011d11c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1011d10c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1011d0fc;

typedef Token<&data_1048c8d4, &data_1048c8d8, &data_1011d11c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1011d10c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1011d0fc> Type2;

extern "C" bool fn_0271eb1c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
