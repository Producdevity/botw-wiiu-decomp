#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a2f8;
extern "C" RuntimeTag data_1048a2fc;
extern "C" const RuntimeVTable data_100954d0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100954c0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100954b0;

typedef Token<&data_1048a2f8, &data_1048a2fc, &data_100954d0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100954c0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100954b0> Type2;

extern "C" bool fn_02386da0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
