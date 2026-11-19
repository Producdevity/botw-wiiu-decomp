#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048de70;
extern "C" RuntimeTag data_1048de6c;
extern "C" const RuntimeVTable data_101658bc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101658ac;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1016589c;

typedef Token<&data_1048de70, &data_1048de6c, &data_101658bc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101658ac> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1016589c> Type2;

extern "C" bool fn_0291ef84(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
