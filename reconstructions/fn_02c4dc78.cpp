#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490d64;
extern "C" RuntimeTag data_10490d68;
extern "C" const RuntimeVTable data_101c5a1c;
extern "C" unsigned data_10486200;
extern "C" RuntimeTag data_10490d3c;
extern "C" const RuntimeVTable data_101c5984;
extern "C" unsigned data_104861f8;
extern "C" RuntimeTag data_10490b20;
extern "C" const RuntimeVTable data_101c5944;

typedef Token<&data_10490d64, &data_10490d68, &data_101c5a1c> Type0;
typedef Token<&data_10486200, &data_10490d3c, &data_101c5984> Type1;
typedef Token<&data_104861f8, &data_10490b20, &data_101c5944> Type2;

extern "C" bool fn_02c4dc78(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
