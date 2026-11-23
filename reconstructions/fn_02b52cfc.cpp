#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104872e0;
extern "C" RuntimeTag data_104872e4;
extern "C" const RuntimeVTable data_101af250;
extern "C" unsigned data_10485e9c;
extern "C" RuntimeTag data_10486518;
extern "C" const RuntimeVTable data_101af240;
extern "C" unsigned data_10485e98;
extern "C" RuntimeTag data_1048652c;
extern "C" const RuntimeVTable data_101af230;

typedef Token<&data_104872e0, &data_104872e4, &data_101af250> Type0;
typedef Token<&data_10485e9c, &data_10486518, &data_101af240> Type1;
typedef Token<&data_10485e98, &data_1048652c, &data_101af230> Type2;

extern "C" bool fn_02b52cfc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
