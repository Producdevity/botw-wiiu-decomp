#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490b50;
extern "C" RuntimeTag data_10490b4c;
extern "C" const RuntimeVTable data_10213c88;
extern "C" unsigned data_10490b2c;
extern "C" RuntimeTag data_10490b64;
extern "C" const RuntimeVTable data_10213c48;
extern "C" unsigned data_10489478;
extern "C" RuntimeTag data_10490b60;
extern "C" const RuntimeVTable data_10213c38;

typedef Token<&data_10490b50, &data_10490b4c, &data_10213c88> Type0;
typedef Token<&data_10490b2c, &data_10490b64, &data_10213c48> Type1;
typedef Token<&data_10489478, &data_10490b60, &data_10213c38> Type2;

extern "C" bool fn_02e37bb0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
