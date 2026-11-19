#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bb58;
extern "C" RuntimeTag data_1048bb5c;
extern "C" const RuntimeVTable data_100e5774;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100e5764;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100e5754;

typedef Token<&data_1048bb58, &data_1048bb5c, &data_100e5774> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100e5764> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100e5754> Type2;

extern "C" bool fn_02586254(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
