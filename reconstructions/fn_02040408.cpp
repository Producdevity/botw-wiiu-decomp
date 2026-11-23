#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486bbc;
extern "C" RuntimeTag data_10486bec;
extern "C" const RuntimeVTable data_10007f04;
extern "C" unsigned data_10486b60;
extern "C" RuntimeTag data_10486b9c;
extern "C" const RuntimeVTable data_10007ef4;
extern "C" unsigned data_104868a4;
extern "C" RuntimeTag data_10486b30;
extern "C" const RuntimeVTable data_10007ed4;

typedef Token<&data_10486bbc, &data_10486bec, &data_10007f04> Type0;
typedef Token<&data_10486b60, &data_10486b9c, &data_10007ef4> Type1;
typedef Token<&data_104868a4, &data_10486b30, &data_10007ed4> Type2;

extern "C" bool fn_02040408(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
