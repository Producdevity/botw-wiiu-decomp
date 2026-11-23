#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490b38;
extern "C" RuntimeTag data_10490d14;
extern "C" const RuntimeVTable data_102bcd98;
extern "C" unsigned data_10490b2c;
extern "C" RuntimeTag data_10490b64;
extern "C" const RuntimeVTable data_102bcd58;
extern "C" unsigned data_10489478;
extern "C" RuntimeTag data_10490b60;
extern "C" const RuntimeVTable data_102bcd48;

typedef Token<&data_10490b38, &data_10490d14, &data_102bcd98> Type0;
typedef Token<&data_10490b2c, &data_10490b64, &data_102bcd58> Type1;
typedef Token<&data_10489478, &data_10490b60, &data_102bcd48> Type2;

extern "C" bool fn_033d41d0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
