#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486d40;
extern "C" RuntimeTag data_10486d44;
extern "C" const RuntimeVTable data_1000a4e8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000a4d8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000a4c8;

typedef Token<&data_10486d40, &data_10486d44, &data_1000a4e8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1000a4d8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1000a4c8> Type2;

extern "C" bool fn_02066544(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
