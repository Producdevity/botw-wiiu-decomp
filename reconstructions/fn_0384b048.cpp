#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486380;
extern "C" RuntimeTag data_10496648;
extern "C" const RuntimeVTable data_10325ef8;
extern "C" unsigned data_1048637c;
extern "C" RuntimeTag data_10493bbc;
extern "C" const RuntimeVTable data_10325ed8;
extern "C" unsigned data_10485e28;
extern "C" RuntimeTag data_10486b20;
extern "C" const RuntimeVTable data_10325ce8;

typedef Token<&data_10486380, &data_10496648, &data_10325ef8> Type0;
typedef Token<&data_1048637c, &data_10493bbc, &data_10325ed8> Type1;
typedef Token<&data_10485e28, &data_10486b20, &data_10325ce8> Type2;

extern "C" bool fn_0384b048(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
