#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ae64;
extern "C" RuntimeTag data_1048ae68;
extern "C" const RuntimeVTable data_100b83cc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b83bc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b83ac;

typedef Token<&data_1048ae64, &data_1048ae68, &data_100b83cc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100b83bc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100b83ac> Type2;

extern "C" bool fn_0244b8b8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
