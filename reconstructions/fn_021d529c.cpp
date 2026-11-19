#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488664;
extern "C" RuntimeTag data_10488668;
extern "C" const RuntimeVTable data_10047040;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10047030;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10047020;

typedef Token<&data_10488664, &data_10488668, &data_10047040> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10047030> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10047020> Type2;

extern "C" bool fn_021d529c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
