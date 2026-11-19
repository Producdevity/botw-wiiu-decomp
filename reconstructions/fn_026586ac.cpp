#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c228;
extern "C" RuntimeTag data_1048c22c;
extern "C" const RuntimeVTable data_1010178c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1010177c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1010176c;

typedef Token<&data_1048c228, &data_1048c22c, &data_1010178c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1010177c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1010176c> Type2;

extern "C" bool fn_026586ac(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
