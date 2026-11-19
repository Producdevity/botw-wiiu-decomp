#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048be68;
extern "C" RuntimeTag data_1048be64;
extern "C" const RuntimeVTable data_100f2c30;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100f2c20;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100f2c10;

typedef Token<&data_1048be68, &data_1048be64, &data_100f2c30> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100f2c20> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100f2c10> Type2;

extern "C" bool fn_025f7ad4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
