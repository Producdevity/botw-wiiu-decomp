#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b210;
extern "C" RuntimeTag data_1048b20c;
extern "C" const RuntimeVTable data_100c8a10;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100c8a00;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100c89f0;

typedef Token<&data_1048b210, &data_1048b20c, &data_100c8a10> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100c8a00> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100c89f0> Type2;

extern "C" bool fn_024caf4c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
