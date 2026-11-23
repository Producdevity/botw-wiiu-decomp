#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b6e8;
extern "C" RuntimeTag data_10493ca4;
extern "C" const RuntimeVTable data_102ca0e0;
extern "C" unsigned data_10486598;
extern "C" RuntimeTag data_10486cb0;
extern "C" const RuntimeVTable data_102ca0d0;
extern "C" unsigned data_10485e94;
extern "C" RuntimeTag data_10486bf8;
extern "C" const RuntimeVTable data_102ca0c0;

typedef Token<&data_1048b6e8, &data_10493ca4, &data_102ca0e0> Type0;
typedef Token<&data_10486598, &data_10486cb0, &data_102ca0d0> Type1;
typedef Token<&data_10485e94, &data_10486bf8, &data_102ca0c0> Type2;

extern "C" bool fn_03491f8c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
