#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b248;
extern "C" RuntimeTag data_1048b244;
extern "C" const RuntimeVTable data_1014610c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101460fc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101460ec;

typedef Token<&data_1048b248, &data_1048b244, &data_1014610c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101460fc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101460ec> Type2;

extern "C" bool fn_02851014(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
