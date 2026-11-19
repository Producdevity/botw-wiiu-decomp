#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd54;
extern "C" RuntimeTag data_10494000;
extern "C" const RuntimeVTable data_102d1808;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102d17f8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d17e8;

typedef Token<&data_1048fd54, &data_10494000, &data_102d1808> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102d17f8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d17e8> Type2;

extern "C" bool fn_03500fc8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
