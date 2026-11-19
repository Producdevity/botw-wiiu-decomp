#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bc60;
extern "C" RuntimeTag data_1048bc64;
extern "C" const RuntimeVTable data_100e908c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100e907c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100e906c;

typedef Token<&data_1048bc60, &data_1048bc64, &data_100e908c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100e907c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100e906c> Type2;

extern "C" bool fn_0259d4cc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
