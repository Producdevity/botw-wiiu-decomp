#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a2c0;
extern "C" RuntimeTag data_1048a2c4;
extern "C" const RuntimeVTable data_100946fc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100946ec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100946dc;

typedef Token<&data_1048a2c0, &data_1048a2c4, &data_100946fc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100946ec> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100946dc> Type2;

extern "C" bool fn_02383b58(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
