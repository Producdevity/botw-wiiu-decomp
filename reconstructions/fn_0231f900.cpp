#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489de0;
extern "C" RuntimeTag data_10489de4;
extern "C" const RuntimeVTable data_10085720;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10085710;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10085700;

typedef Token<&data_10489de0, &data_10489de4, &data_10085720> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10085710> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10085700> Type2;

extern "C" bool fn_0231f900(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
