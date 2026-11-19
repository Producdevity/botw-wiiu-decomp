#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488ddc;
extern "C" RuntimeTag data_10488de0;
extern "C" const RuntimeVTable data_10059a98;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10059a88;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10059a78;

typedef Token<&data_10488ddc, &data_10488de0, &data_10059a98> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10059a88> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10059a78> Type2;

extern "C" bool fn_0222146c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
