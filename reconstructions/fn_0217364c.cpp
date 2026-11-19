#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486ee4;
extern "C" RuntimeTag data_10486ee8;
extern "C" const RuntimeVTable data_10035844;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10035834;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10035824;

typedef Token<&data_10486ee4, &data_10486ee8, &data_10035844> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10035834> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10035824> Type2;

extern "C" bool fn_0217364c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
