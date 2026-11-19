#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104874a8;
extern "C" RuntimeTag data_104874ac;
extern "C" const RuntimeVTable data_10017d78;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10017d68;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10017d58;

typedef Token<&data_104874a8, &data_104874ac, &data_10017d78> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10017d68> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10017d58> Type2;

extern "C" bool fn_020c7c3c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
