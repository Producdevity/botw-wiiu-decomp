#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b848;
extern "C" RuntimeTag data_1048b84c;
extern "C" const RuntimeVTable data_100db3ac;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100db39c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100db38c;

typedef Token<&data_1048b848, &data_1048b84c, &data_100db3ac> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100db39c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100db38c> Type2;

extern "C" bool fn_02545e90(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
