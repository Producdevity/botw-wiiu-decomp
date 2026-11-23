#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490b44;
extern "C" RuntimeTag data_10490b48;
extern "C" const RuntimeVTable data_101ee7a4;
extern "C" unsigned data_10490b2c;
extern "C" RuntimeTag data_10490b64;
extern "C" const RuntimeVTable data_101ee764;
extern "C" unsigned data_10489478;
extern "C" RuntimeTag data_10490b60;
extern "C" const RuntimeVTable data_101ee754;

typedef Token<&data_10490b44, &data_10490b48, &data_101ee7a4> Type0;
typedef Token<&data_10490b2c, &data_10490b64, &data_101ee764> Type1;
typedef Token<&data_10489478, &data_10490b60, &data_101ee754> Type2;

extern "C" bool fn_02de632c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
