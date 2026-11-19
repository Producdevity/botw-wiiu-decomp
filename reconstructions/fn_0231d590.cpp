#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489db0;
extern "C" RuntimeTag data_10489db4;
extern "C" const RuntimeVTable data_10084fdc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10084fcc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10084fbc;

typedef Token<&data_10489db0, &data_10489db4, &data_10084fdc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10084fcc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10084fbc> Type2;

extern "C" bool fn_0231d590(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
