#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486de8;
extern "C" RuntimeTag data_104871e0;
extern "C" const RuntimeVTable data_10012f7c;
extern "C" unsigned data_10485e9c;
extern "C" RuntimeTag data_10486518;
extern "C" const RuntimeVTable data_10012ec4;
extern "C" unsigned data_10485e98;
extern "C" RuntimeTag data_1048652c;
extern "C" const RuntimeVTable data_10012dcc;

typedef Token<&data_10486de8, &data_104871e0, &data_10012f7c> Type0;
typedef Token<&data_10485e9c, &data_10486518, &data_10012ec4> Type1;
typedef Token<&data_10485e98, &data_1048652c, &data_10012dcc> Type2;

extern "C" bool fn_020aebc0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
