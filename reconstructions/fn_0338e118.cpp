#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd3c;
extern "C" RuntimeTag data_10493a04;
extern "C" const RuntimeVTable data_102b80bc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102b80ac;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102b809c;

typedef Token<&data_1048fd3c, &data_10493a04, &data_102b80bc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102b80ac> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102b809c> Type2;

extern "C" bool fn_0338e118(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
