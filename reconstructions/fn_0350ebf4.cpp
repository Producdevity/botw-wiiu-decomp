#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1049012c;
extern "C" RuntimeTag data_104940dc;
extern "C" const RuntimeVTable data_102d3ef0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102d3ee0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d3ed0;

typedef Token<&data_1049012c, &data_104940dc, &data_102d3ef0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102d3ee0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d3ed0> Type2;

extern "C" bool fn_0350ebf4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
