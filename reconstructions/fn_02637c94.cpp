#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c114;
extern "C" RuntimeTag data_1048c118;
extern "C" const RuntimeVTable data_100fc91c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100fc90c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100fc8fc;

typedef Token<&data_1048c114, &data_1048c118, &data_100fc91c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100fc90c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100fc8fc> Type2;

extern "C" bool fn_02637c94(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
