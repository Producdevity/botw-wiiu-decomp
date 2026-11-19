#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a004;
extern "C" RuntimeTag data_1048a008;
extern "C" const RuntimeVTable data_1008c398;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008c388;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008c378;

typedef Token<&data_1048a004, &data_1048a008, &data_1008c398> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1008c388> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1008c378> Type2;

extern "C" bool fn_0234e4dc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
