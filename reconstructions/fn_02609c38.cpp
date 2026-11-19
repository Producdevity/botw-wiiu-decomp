#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bf3c;
extern "C" RuntimeTag data_1048bf40;
extern "C" const RuntimeVTable data_100f5c7c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100f5c6c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100f5c5c;

typedef Token<&data_1048bf3c, &data_1048bf40, &data_100f5c7c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100f5c6c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100f5c5c> Type2;

extern "C" bool fn_02609c38(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
