#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bfdc;
extern "C" RuntimeTag data_1048bfe0;
extern "C" const RuntimeVTable data_100f81c8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100f81b8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100f81a8;

typedef Token<&data_1048bfdc, &data_1048bfe0, &data_100f81c8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100f81b8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100f81a8> Type2;

extern "C" bool fn_0261cda0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
