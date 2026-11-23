#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490bd8;
extern "C" RuntimeTag data_10490d20;
extern "C" const RuntimeVTable data_1031cac0;
extern "C" unsigned data_10486208;
extern "C" RuntimeTag data_10490b24;
extern "C" const RuntimeVTable data_1031caa0;
extern "C" unsigned data_104861f8;
extern "C" RuntimeTag data_10490b20;
extern "C" const RuntimeVTable data_1031ca70;

typedef Token<&data_10490bd8, &data_10490d20, &data_1031cac0> Type0;
typedef Token<&data_10486208, &data_10490b24, &data_1031caa0> Type1;
typedef Token<&data_104861f8, &data_10490b20, &data_1031ca70> Type2;

extern "C" bool fn_037d1f5c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
