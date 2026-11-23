#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104941b4;
extern "C" RuntimeTag data_10494220;
extern "C" const RuntimeVTable data_102e19c8;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102e19b8;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102e1998;

typedef Token<&data_104941b4, &data_10494220, &data_102e19c8> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102e19b8> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102e1998> Type2;

extern "C" bool fn_03558404(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
