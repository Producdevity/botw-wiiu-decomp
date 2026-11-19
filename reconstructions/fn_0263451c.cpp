#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c0c0;
extern "C" RuntimeTag data_1048c0bc;
extern "C" const RuntimeVTable data_100fbcec;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100fbcdc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100fbccc;

typedef Token<&data_1048c0c0, &data_1048c0bc, &data_100fbcec> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100fbcdc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100fbccc> Type2;

extern "C" bool fn_0263451c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
