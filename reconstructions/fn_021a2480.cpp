#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488340;
extern "C" RuntimeTag data_10488344;
extern "C" const RuntimeVTable data_1003d698;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003d688;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003d678;

typedef Token<&data_10488340, &data_10488344, &data_1003d698> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003d688> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003d678> Type2;

extern "C" bool fn_021a2480(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
