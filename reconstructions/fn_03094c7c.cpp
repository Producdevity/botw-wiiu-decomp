#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10485f20;
extern "C" RuntimeTag data_10492358;
extern "C" const RuntimeVTable data_1025f0ec;
extern "C" unsigned data_10485f14;
extern "C" RuntimeTag data_1049234c;
extern "C" const RuntimeVTable data_1025f0cc;
extern "C" unsigned data_10485f10;
extern "C" RuntimeTag data_10491608;
extern "C" const RuntimeVTable data_1025efec;

typedef Token<&data_10485f20, &data_10492358, &data_1025f0ec> Type0;
typedef Token<&data_10485f14, &data_1049234c, &data_1025f0cc> Type1;
typedef Token<&data_10485f10, &data_10491608, &data_1025efec> Type2;

extern "C" bool fn_03094c7c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
