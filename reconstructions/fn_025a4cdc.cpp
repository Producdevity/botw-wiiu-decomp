#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bc98;
extern "C" RuntimeTag data_1048bc9c;
extern "C" const RuntimeVTable data_100ea008;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100e9ff8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100e9fe8;

typedef Token<&data_1048bc98, &data_1048bc9c, &data_100ea008> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100e9ff8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100e9fe8> Type2;

extern "C" bool fn_025a4cdc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
