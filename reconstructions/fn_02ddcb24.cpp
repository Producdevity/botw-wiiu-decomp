#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490e54;
extern "C" RuntimeTag data_10490e58;
extern "C" const RuntimeVTable data_101ec9e8;
extern "C" unsigned data_10490e64;
extern "C" RuntimeTag data_10490e68;
extern "C" const RuntimeVTable data_101ec9c8;
extern "C" unsigned data_10490e5c;
extern "C" RuntimeTag data_10490e60;
extern "C" const RuntimeVTable data_101ec8e8;

typedef Token<&data_10490e54, &data_10490e58, &data_101ec9e8> Type0;
typedef Token<&data_10490e64, &data_10490e68, &data_101ec9c8> Type1;
typedef Token<&data_10490e5c, &data_10490e60, &data_101ec8e8> Type2;

extern "C" bool fn_02ddcb24(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
