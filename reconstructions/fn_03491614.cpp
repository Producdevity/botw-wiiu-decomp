#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486ce0;
extern "C" RuntimeTag data_10486cdc;
extern "C" const RuntimeVTable data_102c9e88;
extern "C" unsigned data_10486598;
extern "C" RuntimeTag data_10486cb0;
extern "C" const RuntimeVTable data_102c9e78;
extern "C" unsigned data_10485e94;
extern "C" RuntimeTag data_10486bf8;
extern "C" const RuntimeVTable data_102c9e68;

typedef Token<&data_10486ce0, &data_10486cdc, &data_102c9e88> Type0;
typedef Token<&data_10486598, &data_10486cb0, &data_102c9e78> Type1;
typedef Token<&data_10485e94, &data_10486bf8, &data_102c9e68> Type2;

extern "C" bool fn_03491614(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
