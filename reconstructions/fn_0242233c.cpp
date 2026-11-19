#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487038;
extern "C" RuntimeTag data_10487034;
extern "C" const RuntimeVTable data_100b0910;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b0900;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b08f0;

typedef Token<&data_10487038, &data_10487034, &data_100b0910> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100b0900> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100b08f0> Type2;

extern "C" bool fn_0242233c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
