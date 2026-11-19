#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bd70;
extern "C" RuntimeTag data_1048bd6c;
extern "C" const RuntimeVTable data_100ed1cc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100ed1bc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ed1ac;

typedef Token<&data_1048bd70, &data_1048bd6c, &data_100ed1cc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100ed1bc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100ed1ac> Type2;

extern "C" bool fn_025c18e4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
