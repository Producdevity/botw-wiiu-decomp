#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487348;
extern "C" RuntimeTag data_10487344;
extern "C" const RuntimeVTable data_102c9cf4;
extern "C" unsigned data_10486598;
extern "C" RuntimeTag data_10486cb0;
extern "C" const RuntimeVTable data_102c9ce4;
extern "C" unsigned data_10485e94;
extern "C" RuntimeTag data_10486bf8;
extern "C" const RuntimeVTable data_102c9cd4;

typedef Token<&data_10487348, &data_10487344, &data_102c9cf4> Type0;
typedef Token<&data_10486598, &data_10486cb0, &data_102c9ce4> Type1;
typedef Token<&data_10485e94, &data_10486bf8, &data_102c9cd4> Type2;

extern "C" bool fn_03490f98(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
