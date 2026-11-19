#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e294;
extern "C" RuntimeTag data_1048e298;
extern "C" const RuntimeVTable data_101720cc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101720bc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101720ac;

typedef Token<&data_1048e294, &data_1048e298, &data_101720cc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101720bc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101720ac> Type2;

extern "C" bool fn_02974df4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
