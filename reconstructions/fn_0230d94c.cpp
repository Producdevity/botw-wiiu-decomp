#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489c78;
extern "C" RuntimeTag data_10489c7c;
extern "C" const RuntimeVTable data_10081a84;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10081a74;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10081a64;

typedef Token<&data_10489c78, &data_10489c7c, &data_10081a84> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10081a74> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10081a64> Type2;

extern "C" bool fn_0230d94c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
