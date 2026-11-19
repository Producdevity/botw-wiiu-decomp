#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b2d8;
extern "C" RuntimeTag data_1048b2d4;
extern "C" const RuntimeVTable data_100ca3fc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100ca3ec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ca3dc;

typedef Token<&data_1048b2d8, &data_1048b2d4, &data_100ca3fc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100ca3ec> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100ca3dc> Type2;

extern "C" bool fn_024d7188(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
