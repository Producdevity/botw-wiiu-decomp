#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048da58;
extern "C" RuntimeTag data_1048da5c;
extern "C" const RuntimeVTable data_10152e0c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10152dfc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10152dec;

typedef Token<&data_1048da58, &data_1048da5c, &data_10152e0c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10152dfc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10152dec> Type2;

extern "C" bool fn_028a1270(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
