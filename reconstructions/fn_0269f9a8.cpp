#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c4f4;
extern "C" RuntimeTag data_1048c4f8;
extern "C" const RuntimeVTable data_1010c33c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1010c32c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1010c31c;

typedef Token<&data_1048c4f4, &data_1048c4f8, &data_1010c33c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1010c32c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1010c31c> Type2;

extern "C" bool fn_0269f9a8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
