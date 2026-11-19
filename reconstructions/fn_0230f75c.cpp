#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489ca8;
extern "C" RuntimeTag data_10489cac;
extern "C" const RuntimeVTable data_1008218c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008217c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008216c;

typedef Token<&data_10489ca8, &data_10489cac, &data_1008218c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1008217c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1008216c> Type2;

extern "C" bool fn_0230f75c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
