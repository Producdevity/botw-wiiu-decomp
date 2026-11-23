#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490b68;
extern "C" RuntimeTag data_10490b6c;
extern "C" const RuntimeVTable data_103484d0;
extern "C" unsigned data_10490b2c;
extern "C" RuntimeTag data_10490b64;
extern "C" const RuntimeVTable data_10348490;
extern "C" unsigned data_10489478;
extern "C" RuntimeTag data_10490b60;
extern "C" const RuntimeVTable data_10348480;

typedef Token<&data_10490b68, &data_10490b6c, &data_103484d0> Type0;
typedef Token<&data_10490b2c, &data_10490b64, &data_10348490> Type1;
typedef Token<&data_10489478, &data_10490b60, &data_10348480> Type2;

extern "C" bool fn_0397ae00(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
