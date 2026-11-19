#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a5fc;
extern "C" RuntimeTag data_1048a600;
extern "C" const RuntimeVTable data_1009e1a0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009e190;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1009e180;

typedef Token<&data_1048a5fc, &data_1048a600, &data_1009e1a0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1009e190> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1009e180> Type2;

extern "C" bool fn_023b3de0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
