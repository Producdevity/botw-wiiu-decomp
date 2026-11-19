#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048dad0;
extern "C" RuntimeTag data_1048dad4;
extern "C" const RuntimeVTable data_10154ea8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10154e98;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10154e88;

typedef Token<&data_1048dad0, &data_1048dad4, &data_10154ea8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10154e98> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10154e88> Type2;

extern "C" bool fn_028ac888(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
