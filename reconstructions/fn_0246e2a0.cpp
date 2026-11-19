#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b058;
extern "C" RuntimeTag data_1048b05c;
extern "C" const RuntimeVTable data_100be3a4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100be364;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100be354;

typedef Token<&data_1048b058, &data_1048b05c, &data_100be3a4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100be364> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100be354> Type2;

extern "C" bool fn_0246e2a0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
