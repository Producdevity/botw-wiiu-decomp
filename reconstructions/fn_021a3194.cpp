#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488360;
extern "C" RuntimeTag data_10488364;
extern "C" const RuntimeVTable data_1003da64;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003da54;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003da44;

typedef Token<&data_10488360, &data_10488364, &data_1003da64> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003da54> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003da44> Type2;

extern "C" bool fn_021a3194(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
