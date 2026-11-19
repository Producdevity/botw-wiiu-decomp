#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486d68;
extern "C" RuntimeTag data_10486d6c;
extern "C" const RuntimeVTable data_1001d40c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001d3fc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001d3ec;

typedef Token<&data_10486d68, &data_10486d6c, &data_1001d40c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1001d3fc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1001d3ec> Type2;

extern "C" bool fn_020eb3e0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
