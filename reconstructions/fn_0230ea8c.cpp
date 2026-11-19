#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489c98;
extern "C" RuntimeTag data_10489c9c;
extern "C" const RuntimeVTable data_10081ef0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10081ee0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10081ed0;

typedef Token<&data_10489c98, &data_10489c9c, &data_10081ef0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10081ee0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10081ed0> Type2;

extern "C" bool fn_0230ea8c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
