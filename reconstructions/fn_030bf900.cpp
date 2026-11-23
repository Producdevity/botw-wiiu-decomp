#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10485d4c;
extern "C" RuntimeTag data_104924d0;
extern "C" const RuntimeVTable data_1027b258;
extern "C" unsigned data_10485d48;
extern "C" RuntimeTag data_10490d34;
extern "C" const RuntimeVTable data_1027b248;
extern "C" unsigned data_10485d44;
extern "C" RuntimeTag data_10490d30;
extern "C" const RuntimeVTable data_1027b238;

typedef Token<&data_10485d4c, &data_104924d0, &data_1027b258> Type0;
typedef Token<&data_10485d48, &data_10490d34, &data_1027b248> Type1;
typedef Token<&data_10485d44, &data_10490d30, &data_1027b238> Type2;

extern "C" bool fn_030bf900(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
