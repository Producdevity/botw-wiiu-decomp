#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048759c;
extern "C" RuntimeTag data_10487598;
extern "C" const RuntimeVTable data_10019da8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10019d98;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10019d88;

typedef Token<&data_1048759c, &data_10487598, &data_10019da8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10019d98> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10019d88> Type2;

extern "C" bool fn_020d365c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
