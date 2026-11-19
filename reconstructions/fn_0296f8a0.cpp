#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e234;
extern "C" RuntimeTag data_1048e238;
extern "C" const RuntimeVTable data_10170c70;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10170c60;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10170c50;

typedef Token<&data_1048e234, &data_1048e238, &data_10170c70> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10170c60> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10170c50> Type2;

extern "C" bool fn_0296f8a0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
