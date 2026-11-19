#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a2e8;
extern "C" RuntimeTag data_1048a2ec;
extern "C" const RuntimeVTable data_10095018;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10095008;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10094ff8;

typedef Token<&data_1048a2e8, &data_1048a2ec, &data_10095018> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10095008> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10094ff8> Type2;

extern "C" bool fn_023860b8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
