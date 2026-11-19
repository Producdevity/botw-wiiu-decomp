#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a4ec;
extern "C" RuntimeTag data_1048a4f0;
extern "C" const RuntimeVTable data_1009b478;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009b468;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1009b458;

typedef Token<&data_1048a4ec, &data_1048a4f0, &data_1009b478> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1009b468> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1009b458> Type2;

extern "C" bool fn_023a6484(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
