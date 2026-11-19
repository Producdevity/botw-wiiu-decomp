#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488430;
extern "C" RuntimeTag data_10488434;
extern "C" const RuntimeVTable data_1004019c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004018c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004017c;

typedef Token<&data_10488430, &data_10488434, &data_1004019c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004018c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004017c> Type2;

extern "C" bool fn_021b1e68(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
