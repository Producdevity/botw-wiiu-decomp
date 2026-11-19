#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c5a0;
extern "C" RuntimeTag data_1048c59c;
extern "C" const RuntimeVTable data_1010ede0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1010edd0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1010edc0;

typedef Token<&data_1048c5a0, &data_1048c59c, &data_1010ede0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1010edd0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1010edc0> Type2;

extern "C" bool fn_026af8bc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
