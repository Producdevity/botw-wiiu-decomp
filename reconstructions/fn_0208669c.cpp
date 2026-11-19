#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048708c;
extern "C" RuntimeTag data_10487090;
extern "C" const RuntimeVTable data_1000fcf8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000fce8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000fcd8;

typedef Token<&data_1048708c, &data_10487090, &data_1000fcf8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1000fce8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1000fcd8> Type2;

extern "C" bool fn_0208669c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
