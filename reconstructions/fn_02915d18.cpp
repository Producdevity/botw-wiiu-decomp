#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ddbc;
extern "C" RuntimeTag data_1048ddc0;
extern "C" const RuntimeVTable data_10163a58;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10163a48;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10163a38;

typedef Token<&data_1048ddbc, &data_1048ddc0, &data_10163a58> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10163a48> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10163a38> Type2;

extern "C" bool fn_02915d18(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
