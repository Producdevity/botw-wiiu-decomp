#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1049406c;
extern "C" RuntimeTag data_10494204;
extern "C" const RuntimeVTable data_102e0c70;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102e0c60;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102e0bd8;

typedef Token<&data_1049406c, &data_10494204, &data_102e0c70> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102e0c60> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102e0bd8> Type2;

extern "C" bool fn_0355153c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
