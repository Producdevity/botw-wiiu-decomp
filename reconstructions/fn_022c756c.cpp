#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489844;
extern "C" RuntimeTag data_10489840;
extern "C" const RuntimeVTable data_100758e4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100758d4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100758c4;

typedef Token<&data_10489844, &data_10489840, &data_100758e4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100758d4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100758c4> Type2;

extern "C" bool fn_022c756c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
