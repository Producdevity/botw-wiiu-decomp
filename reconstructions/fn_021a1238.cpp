#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488328;
extern "C" RuntimeTag data_1048832c;
extern "C" const RuntimeVTable data_1003d264;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003d1ec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003d1dc;

typedef Token<&data_10488328, &data_1048832c, &data_1003d264> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003d1ec> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003d1dc> Type2;

extern "C" bool fn_021a1238(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
