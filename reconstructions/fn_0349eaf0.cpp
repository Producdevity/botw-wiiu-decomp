#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c688;
extern "C" RuntimeTag data_1048c684;
extern "C" const RuntimeVTable data_102caef4;
extern "C" unsigned data_10486598;
extern "C" RuntimeTag data_10486cb0;
extern "C" const RuntimeVTable data_102caee4;
extern "C" unsigned data_10485e94;
extern "C" RuntimeTag data_10486bf8;
extern "C" const RuntimeVTable data_102caed4;

typedef Token<&data_1048c688, &data_1048c684, &data_102caef4> Type0;
typedef Token<&data_10486598, &data_10486cb0, &data_102caee4> Type1;
typedef Token<&data_10485e94, &data_10486bf8, &data_102caed4> Type2;

extern "C" bool fn_0349eaf0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
