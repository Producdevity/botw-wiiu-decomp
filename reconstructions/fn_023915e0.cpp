#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a388;
extern "C" RuntimeTag data_1048a38c;
extern "C" const RuntimeVTable data_10096f28;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10096f18;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10096f08;

typedef Token<&data_1048a388, &data_1048a38c, &data_10096f28> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10096f18> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10096f08> Type2;

extern "C" bool fn_023915e0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
