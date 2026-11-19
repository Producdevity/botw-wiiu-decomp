#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487c14;
extern "C" RuntimeTag data_10487c18;
extern "C" const RuntimeVTable data_1002aed0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1002aec0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1002aeb0;

typedef Token<&data_10487c14, &data_10487c18, &data_1002aed0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1002aec0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1002aeb0> Type2;

extern "C" bool fn_0213e86c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
