#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490130;
extern "C" RuntimeTag data_10493a08;
extern "C" const RuntimeVTable data_102b81f8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102b81e8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102b81d8;

typedef Token<&data_10490130, &data_10493a08, &data_102b81f8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102b81e8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102b81d8> Type2;

extern "C" bool fn_0338e780(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
