#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d2e0;
extern "C" RuntimeTag data_1048d2e4;
extern "C" const RuntimeVTable data_1013c0ac;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1013c09c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1013c08c;

typedef Token<&data_1048d2e0, &data_1048d2e4, &data_1013c0ac> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1013c09c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1013c08c> Type2;

extern "C" bool fn_0280f4a0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
