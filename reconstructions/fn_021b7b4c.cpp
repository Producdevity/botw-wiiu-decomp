#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048849c;
extern "C" RuntimeTag data_104884a0;
extern "C" const RuntimeVTable data_100413c8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100413b8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100413a8;

typedef Token<&data_1048849c, &data_104884a0, &data_100413c8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100413b8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100413a8> Type2;

extern "C" bool fn_021b7b4c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
