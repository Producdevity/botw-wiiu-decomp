#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104941cc;
extern "C" RuntimeTag data_104941d0;
extern "C" const RuntimeVTable data_102db10c;
extern "C" unsigned data_10485eec;
extern "C" RuntimeTag data_104868ec;
extern "C" const RuntimeVTable data_102db084;
extern "C" unsigned data_10485ee8;
extern "C" RuntimeTag data_10486a8c;
extern "C" const RuntimeVTable data_102db074;

typedef Token<&data_104941cc, &data_104941d0, &data_102db10c> Type0;
typedef Token<&data_10485eec, &data_104868ec, &data_102db084> Type1;
typedef Token<&data_10485ee8, &data_10486a8c, &data_102db074> Type2;

extern "C" bool fn_0353b378(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
