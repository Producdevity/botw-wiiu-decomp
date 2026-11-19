#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a910;
extern "C" RuntimeTag data_1048a914;
extern "C" const RuntimeVTable data_100a8460;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100a8450;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100a8440;

typedef Token<&data_1048a910, &data_1048a914, &data_100a8460> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100a8450> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100a8440> Type2;

extern "C" bool fn_023f3a7c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
