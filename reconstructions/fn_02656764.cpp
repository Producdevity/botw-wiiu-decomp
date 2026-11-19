#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c204;
extern "C" RuntimeTag data_1048c200;
extern "C" const RuntimeVTable data_10100f8c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10100f7c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10100f6c;

typedef Token<&data_1048c204, &data_1048c200, &data_10100f8c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10100f7c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10100f6c> Type2;

extern "C" bool fn_02656764(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
