#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b3a0;
extern "C" RuntimeTag data_1048b3a4;
extern "C" const RuntimeVTable data_100cc6fc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100cc6ec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100cc6dc;

typedef Token<&data_1048b3a0, &data_1048b3a4, &data_100cc6fc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100cc6ec> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100cc6dc> Type2;

extern "C" bool fn_024e5130(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
