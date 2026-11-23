#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10494158;
extern "C" RuntimeTag data_104968a8;
extern "C" const RuntimeVTable data_10334c70;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_10334c60;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_10334c40;

typedef Token<&data_10494158, &data_104968a8, &data_10334c70> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_10334c60> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_10334c40> Type2;

extern "C" bool fn_038eb610(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
