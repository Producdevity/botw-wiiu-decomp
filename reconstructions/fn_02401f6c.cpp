#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a9bc;
extern "C" RuntimeTag data_1048a9b8;
extern "C" const RuntimeVTable data_100aa6a4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100aa694;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100aa684;

typedef Token<&data_1048a9bc, &data_1048a9b8, &data_100aa6a4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100aa694> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100aa684> Type2;

extern "C" bool fn_02401f6c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
