#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d2e8;
extern "C" RuntimeTag data_1048d2ec;
extern "C" const RuntimeVTable data_1013c29c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1013c28c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1013c27c;

typedef Token<&data_1048d2e8, &data_1048d2ec, &data_1013c29c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1013c28c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1013c27c> Type2;

extern "C" bool fn_0280f994(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
