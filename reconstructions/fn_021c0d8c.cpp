#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488548;
extern "C" RuntimeTag data_1048854c;
extern "C" const RuntimeVTable data_10042fc0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10042fb0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10042fa0;

typedef Token<&data_10488548, &data_1048854c, &data_10042fc0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10042fb0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10042fa0> Type2;

extern "C" bool fn_021c0d8c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
