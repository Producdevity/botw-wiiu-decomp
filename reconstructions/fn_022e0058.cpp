#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489938;
extern "C" RuntimeTag data_10489934;
extern "C" const RuntimeVTable data_100789ac;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007899c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007898c;

typedef Token<&data_10489938, &data_10489934, &data_100789ac> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1007899c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1007898c> Type2;

extern "C" bool fn_022e0058(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
