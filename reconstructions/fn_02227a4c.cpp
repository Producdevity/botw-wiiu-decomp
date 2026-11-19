#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487e58;
extern "C" RuntimeTag data_10487e5c;
extern "C" const RuntimeVTable data_1005b24c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1005b23c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1005b22c;

typedef Token<&data_10487e58, &data_10487e5c, &data_1005b24c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1005b23c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1005b22c> Type2;

extern "C" bool fn_02227a4c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
