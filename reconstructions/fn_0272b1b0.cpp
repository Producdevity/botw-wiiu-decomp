#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c928;
extern "C" RuntimeTag data_1048c92c;
extern "C" const RuntimeVTable data_1011e8fc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1011e8ec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1011e8dc;

typedef Token<&data_1048c928, &data_1048c92c, &data_1011e8fc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1011e8ec> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1011e8dc> Type2;

extern "C" bool fn_0272b1b0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
