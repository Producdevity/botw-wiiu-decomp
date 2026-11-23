#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486d5c;
extern "C" RuntimeTag data_10490d24;
extern "C" const RuntimeVTable data_1028bf9c;
extern "C" unsigned data_10485d48;
extern "C" RuntimeTag data_10490d34;
extern "C" const RuntimeVTable data_1028bf8c;
extern "C" unsigned data_10485d44;
extern "C" RuntimeTag data_10490d30;
extern "C" const RuntimeVTable data_1028bf5c;

typedef Token<&data_10486d5c, &data_10490d24, &data_1028bf9c> Type0;
typedef Token<&data_10485d48, &data_10490d34, &data_1028bf8c> Type1;
typedef Token<&data_10485d44, &data_10490d30, &data_1028bf5c> Type2;

extern "C" bool fn_031903a8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
