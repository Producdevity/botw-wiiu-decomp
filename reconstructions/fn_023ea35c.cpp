#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a84c;
extern "C" RuntimeTag data_1048a848;
extern "C" const RuntimeVTable data_100a6d88;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100a6d78;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100a6d68;

typedef Token<&data_1048a84c, &data_1048a848, &data_100a6d88> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100a6d78> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100a6d68> Type2;

extern "C" bool fn_023ea35c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
