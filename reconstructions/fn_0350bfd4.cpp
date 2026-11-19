#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1049011c;
extern "C" RuntimeTag data_104940a0;
extern "C" const RuntimeVTable data_102d36d0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102d36c0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d36b0;

typedef Token<&data_1049011c, &data_104940a0, &data_102d36d0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102d36c0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d36b0> Type2;

extern "C" bool fn_0350bfd4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
