#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c0b4;
extern "C" RuntimeTag data_1048c0b8;
extern "C" const RuntimeVTable data_100fba84;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100fba74;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100fba64;

typedef Token<&data_1048c0b4, &data_1048c0b8, &data_100fba84> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100fba74> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100fba64> Type2;

extern "C" bool fn_026329a4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
