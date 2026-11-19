#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104883c4;
extern "C" RuntimeTag data_104883c8;
extern "C" const RuntimeVTable data_1003eaac;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003ea9c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003ea8c;

typedef Token<&data_104883c4, &data_104883c8, &data_1003eaac> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003ea9c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003ea8c> Type2;

extern "C" bool fn_021a8494(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
