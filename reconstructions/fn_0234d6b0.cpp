#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489ffc;
extern "C" RuntimeTag data_1048a000;
extern "C" const RuntimeVTable data_1008c254;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008c244;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008c234;

typedef Token<&data_10489ffc, &data_1048a000, &data_1008c254> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1008c244> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1008c234> Type2;

extern "C" bool fn_0234d6b0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
