#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104875ec;
extern "C" RuntimeTag data_104875f0;
extern "C" const RuntimeVTable data_1001af50;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001af40;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001af30;

typedef Token<&data_104875ec, &data_104875f0, &data_1001af50> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1001af40> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1001af30> Type2;

extern "C" bool fn_020da2b4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
