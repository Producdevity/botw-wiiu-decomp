#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a2d0;
extern "C" RuntimeTag data_1048a2d4;
extern "C" const RuntimeVTable data_100949ac;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009499c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1009498c;

typedef Token<&data_1048a2d0, &data_1048a2d4, &data_100949ac> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1009499c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1009498c> Type2;

extern "C" bool fn_023841b8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
