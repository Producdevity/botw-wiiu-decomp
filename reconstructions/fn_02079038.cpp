#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486f0c;
extern "C" RuntimeTag data_10486f10;
extern "C" const RuntimeVTable data_1000d6a4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000d694;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000d684;

typedef Token<&data_10486f0c, &data_10486f10, &data_1000d6a4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1000d694> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1000d684> Type2;

extern "C" bool fn_02079038(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
