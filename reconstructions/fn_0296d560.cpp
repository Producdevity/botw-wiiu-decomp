#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e214;
extern "C" RuntimeTag data_1048e218;
extern "C" const RuntimeVTable data_1017070c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101706fc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101706ec;

typedef Token<&data_1048e214, &data_1048e218, &data_1017070c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101706fc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101706ec> Type2;

extern "C" bool fn_0296d560(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
