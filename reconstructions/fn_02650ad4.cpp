#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048903c;
extern "C" RuntimeTag data_1048c1c0;
extern "C" const RuntimeVTable data_100fff60;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100ffee8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ffed8;

typedef Token<&data_1048903c, &data_1048c1c0, &data_100fff60> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100ffee8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100ffed8> Type2;

extern "C" bool fn_02650ad4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
