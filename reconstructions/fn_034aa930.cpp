#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048659c;
extern "C" RuntimeTag data_10487208;
extern "C" const RuntimeVTable data_102cb608;
extern "C" unsigned data_10486598;
extern "C" RuntimeTag data_10486cb0;
extern "C" const RuntimeVTable data_102cb5f8;
extern "C" unsigned data_10485e94;
extern "C" RuntimeTag data_10486bf8;
extern "C" const RuntimeVTable data_102cb5e8;

typedef Token<&data_1048659c, &data_10487208, &data_102cb608> Type0;
typedef Token<&data_10486598, &data_10486cb0, &data_102cb5f8> Type1;
typedef Token<&data_10485e94, &data_10486bf8, &data_102cb5e8> Type2;

extern "C" bool fn_034aa930(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
