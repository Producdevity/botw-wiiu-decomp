#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104901ec;
extern "C" RuntimeTag data_10491194;
extern "C" const RuntimeVTable data_101de824;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101de814;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101de804;

typedef Token<&data_104901ec, &data_10491194, &data_101de824> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101de814> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101de804> Type2;

extern "C" bool fn_02d013ec(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
