#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104863b0;
extern "C" RuntimeTag data_10490d48;
extern "C" const RuntimeVTable data_1025fd00;
extern "C" unsigned data_10486398;
extern "C" RuntimeTag data_10490d44;
extern "C" const RuntimeVTable data_1025fcf0;
extern "C" unsigned data_10486394;
extern "C" RuntimeTag data_10490d40;
extern "C" const RuntimeVTable data_1025fcc0;

typedef Token<&data_104863b0, &data_10490d48, &data_1025fd00> Type0;
typedef Token<&data_10486398, &data_10490d44, &data_1025fcf0> Type1;
typedef Token<&data_10486394, &data_10490d40, &data_1025fcc0> Type2;

extern "C" bool fn_0309d1c0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
