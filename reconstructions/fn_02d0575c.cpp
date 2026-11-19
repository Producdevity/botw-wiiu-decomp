#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490200;
extern "C" RuntimeTag data_104911a8;
extern "C" const RuntimeVTable data_101df340;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101df330;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101df320;

typedef Token<&data_10490200, &data_104911a8, &data_101df340> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101df330> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101df320> Type2;

extern "C" bool fn_02d0575c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
