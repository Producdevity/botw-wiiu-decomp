#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487318;
extern "C" RuntimeTag data_10487314;
extern "C" const RuntimeVTable data_10015f80;
extern "C" unsigned data_10485e9c;
extern "C" RuntimeTag data_10486518;
extern "C" const RuntimeVTable data_10015f60;
extern "C" unsigned data_10485e98;
extern "C" RuntimeTag data_1048652c;
extern "C" const RuntimeVTable data_10015f40;

typedef Token<&data_10487318, &data_10487314, &data_10015f80> Type0;
typedef Token<&data_10485e9c, &data_10486518, &data_10015f60> Type1;
typedef Token<&data_10485e98, &data_1048652c, &data_10015f40> Type2;

extern "C" bool fn_020bd454(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
