#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c804;
extern "C" RuntimeTag data_1048c808;
extern "C" const RuntimeVTable data_1011883c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1011882c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1011881c;

typedef Token<&data_1048c804, &data_1048c808, &data_1011883c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1011882c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1011881c> Type2;

extern "C" bool fn_026ee1c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
