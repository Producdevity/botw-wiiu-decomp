#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c8ac;
extern "C" RuntimeTag data_1048c8b0;
extern "C" const RuntimeVTable data_1011c764;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1011c754;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1011c744;

typedef Token<&data_1048c8ac, &data_1048c8b0, &data_1011c764> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1011c754> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1011c744> Type2;

extern "C" bool fn_0271a600(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
