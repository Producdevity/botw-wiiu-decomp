#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104892e0;
extern "C" RuntimeTag data_104892e4;
extern "C" const RuntimeVTable data_100aff68;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100aff58;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100aff48;

typedef Token<&data_104892e0, &data_104892e4, &data_100aff68> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100aff58> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100aff48> Type2;

extern "C" bool fn_0241f6f8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
