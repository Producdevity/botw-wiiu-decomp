#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486d80;
extern "C" RuntimeTag data_10486d84;
extern "C" const RuntimeVTable data_1001e568;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001e558;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001e548;

typedef Token<&data_10486d80, &data_10486d84, &data_1001e568> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1001e558> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1001e548> Type2;

extern "C" bool fn_020f24a8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
