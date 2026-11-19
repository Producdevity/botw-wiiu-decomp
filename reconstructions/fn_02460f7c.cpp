#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048afa0;
extern "C" RuntimeTag data_1048afa4;
extern "C" const RuntimeVTable data_100bbd5c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100bbd4c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100bbd3c;

typedef Token<&data_1048afa0, &data_1048afa4, &data_100bbd5c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100bbd4c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100bbd3c> Type2;

extern "C" bool fn_02460f7c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
