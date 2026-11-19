#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048863c;
extern "C" RuntimeTag data_10488640;
extern "C" const RuntimeVTable data_10046a0c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100469fc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100469ec;

typedef Token<&data_1048863c, &data_10488640, &data_10046a0c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100469fc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100469ec> Type2;

extern "C" bool fn_021d39a8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
