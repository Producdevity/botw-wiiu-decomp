#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488968;
extern "C" RuntimeTag data_1048896c;
extern "C" const RuntimeVTable data_1004eb88;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004eb78;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004eb68;

typedef Token<&data_10488968, &data_1048896c, &data_1004eb88> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004eb78> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004eb68> Type2;

extern "C" bool fn_021f528c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
