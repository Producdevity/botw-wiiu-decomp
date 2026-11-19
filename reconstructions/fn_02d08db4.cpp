#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1049020c;
extern "C" RuntimeTag data_104911b4;
extern "C" const RuntimeVTable data_101df838;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101df828;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101df818;

typedef Token<&data_1049020c, &data_104911b4, &data_101df838> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101df828> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101df818> Type2;

extern "C" bool fn_02d08db4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
