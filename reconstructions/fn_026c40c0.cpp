#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c5fc;
extern "C" RuntimeTag data_1048c600;
extern "C" const RuntimeVTable data_10111090;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10111080;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10111070;

typedef Token<&data_1048c5fc, &data_1048c600, &data_10111090> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10111080> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10111070> Type2;

extern "C" bool fn_026c40c0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
