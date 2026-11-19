#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489eac;
extern "C" RuntimeTag data_10489eb0;
extern "C" const RuntimeVTable data_10087748;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10087738;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10087728;

typedef Token<&data_10489eac, &data_10489eb0, &data_10087748> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10087738> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10087728> Type2;

extern "C" bool fn_02334a74(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
