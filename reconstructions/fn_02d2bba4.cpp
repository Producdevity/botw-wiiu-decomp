#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1049022c;
extern "C" RuntimeTag data_10491274;
extern "C" const RuntimeVTable data_101e1b5c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101e1b4c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101e1b3c;

typedef Token<&data_1049022c, &data_10491274, &data_101e1b5c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101e1b4c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101e1b3c> Type2;

extern "C" bool fn_02d2bba4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
