#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10493ce8;
extern "C" RuntimeTag data_10493ce4;
extern "C" const RuntimeVTable data_10333274;
extern "C" unsigned data_10485eec;
extern "C" RuntimeTag data_104868ec;
extern "C" const RuntimeVTable data_10333264;
extern "C" unsigned data_10485ee8;
extern "C" RuntimeTag data_10486a8c;
extern "C" const RuntimeVTable data_10333254;

typedef Token<&data_10493ce8, &data_10493ce4, &data_10333274> Type0;
typedef Token<&data_10485eec, &data_104868ec, &data_10333264> Type1;
typedef Token<&data_10485ee8, &data_10486a8c, &data_10333254> Type2;

extern "C" bool fn_038d9878(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
