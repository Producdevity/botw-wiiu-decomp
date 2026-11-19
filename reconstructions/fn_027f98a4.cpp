#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b1a4;
extern "C" RuntimeTag data_1048b1a8;
extern "C" const RuntimeVTable data_10138c40;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10138c30;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10138c20;

typedef Token<&data_1048b1a4, &data_1048b1a8, &data_10138c40> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10138c30> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10138c20> Type2;

extern "C" bool fn_027f98a4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
