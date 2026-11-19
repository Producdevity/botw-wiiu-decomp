#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488934;
extern "C" RuntimeTag data_10488930;
extern "C" const RuntimeVTable data_1004e188;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004e178;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004e168;

typedef Token<&data_10488934, &data_10488930, &data_1004e188> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004e178> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004e168> Type2;

extern "C" bool fn_021f07e0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
