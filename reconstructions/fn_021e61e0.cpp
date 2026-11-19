#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488824;
extern "C" RuntimeTag data_10488828;
extern "C" const RuntimeVTable data_1004bb64;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004bb54;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004bb44;

typedef Token<&data_10488824, &data_10488828, &data_1004bb64> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004bb54> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004bb44> Type2;

extern "C" bool fn_021e61e0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
