#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c644;
extern "C" RuntimeTag data_1048c648;
extern "C" const RuntimeVTable data_10111e3c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10111e2c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10111e1c;

typedef Token<&data_1048c644, &data_1048c648, &data_10111e3c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10111e2c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10111e1c> Type2;

extern "C" bool fn_026c7bf0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
