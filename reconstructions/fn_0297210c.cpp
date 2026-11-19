#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e25c;
extern "C" RuntimeTag data_1048e260;
extern "C" const RuntimeVTable data_101714cc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101714bc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101714ac;

typedef Token<&data_1048e25c, &data_1048e260, &data_101714cc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101714bc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101714ac> Type2;

extern "C" bool fn_0297210c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
