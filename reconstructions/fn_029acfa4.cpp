#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e3e0;
extern "C" RuntimeTag data_1048e3e4;
extern "C" const RuntimeVTable data_101784cc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101784bc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101784ac;

typedef Token<&data_1048e3e0, &data_1048e3e4, &data_101784cc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101784bc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101784ac> Type2;

extern "C" bool fn_029acfa4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
