#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d320;
extern "C" RuntimeTag data_1048d324;
extern "C" const RuntimeVTable data_1013cf70;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1013cf60;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1013cf50;

typedef Token<&data_1048d320, &data_1048d324, &data_1013cf70> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1013cf60> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1013cf50> Type2;

extern "C" bool fn_02814e88(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
