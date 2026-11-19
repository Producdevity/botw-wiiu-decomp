#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048989c;
extern "C" RuntimeTag data_10489898;
extern "C" const RuntimeVTable data_100765ac;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007659c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007658c;

typedef Token<&data_1048989c, &data_10489898, &data_100765ac> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1007659c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1007658c> Type2;

extern "C" bool fn_022cbc14(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
