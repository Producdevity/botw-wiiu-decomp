#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ca7c;
extern "C" RuntimeTag data_1048ca78;
extern "C" const RuntimeVTable data_101202f0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101202a8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10120298;

typedef Token<&data_1048ca7c, &data_1048ca78, &data_101202f0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101202a8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10120298> Type2;

extern "C" bool fn_0273457c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
