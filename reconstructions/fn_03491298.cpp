#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b6d4;
extern "C" RuntimeTag data_1048b6d8;
extern "C" const RuntimeVTable data_102c9dbc;
extern "C" unsigned data_10486598;
extern "C" RuntimeTag data_10486cb0;
extern "C" const RuntimeVTable data_102c9dac;
extern "C" unsigned data_10485e94;
extern "C" RuntimeTag data_10486bf8;
extern "C" const RuntimeVTable data_102c9d9c;

typedef Token<&data_1048b6d4, &data_1048b6d8, &data_102c9dbc> Type0;
typedef Token<&data_10486598, &data_10486cb0, &data_102c9dac> Type1;
typedef Token<&data_10485e94, &data_10486bf8, &data_102c9d9c> Type2;

extern "C" bool fn_03491298(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
