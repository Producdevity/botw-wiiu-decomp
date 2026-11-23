#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048625c;
extern "C" RuntimeTag data_10490298;
extern "C" const RuntimeVTable data_101a88c0;
extern "C" unsigned data_10486250;
extern "C" RuntimeTag data_10490294;
extern "C" const RuntimeVTable data_101a87c0;
extern "C" unsigned data_10486240;
extern "C" RuntimeTag data_1048b124;
extern "C" const RuntimeVTable data_101a8790;

typedef Token<&data_1048625c, &data_10490298, &data_101a88c0> Type0;
typedef Token<&data_10486250, &data_10490294, &data_101a87c0> Type1;
typedef Token<&data_10486240, &data_1048b124, &data_101a8790> Type2;

extern "C" bool fn_02af074c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
