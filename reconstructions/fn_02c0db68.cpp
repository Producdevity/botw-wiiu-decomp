#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486c40;
extern "C" RuntimeTag data_1048e520;
extern "C" const RuntimeVTable data_101bf648;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_101bf638;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_101bf528;

typedef Token<&data_10486c40, &data_1048e520, &data_101bf648> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_101bf638> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_101bf528> Type2;

extern "C" bool fn_02c0db68(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
