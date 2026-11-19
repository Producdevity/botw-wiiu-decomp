#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c31c;
extern "C" RuntimeTag data_1048c320;
extern "C" const RuntimeVTable data_10105844;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1010580c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101057fc;

typedef Token<&data_1048c31c, &data_1048c320, &data_10105844> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1010580c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101057fc> Type2;

extern "C" bool fn_02671468(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
