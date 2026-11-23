#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490bb4;
extern "C" RuntimeTag data_104974e8;
extern "C" const RuntimeVTable data_10372e94;
extern "C" unsigned data_10490bac;
extern "C" RuntimeTag data_10493bcc;
extern "C" const RuntimeVTable data_10372e74;
extern "C" unsigned data_10490ba4;
extern "C" RuntimeTag data_10493bd8;
extern "C" const RuntimeVTable data_10372cf4;

typedef Token<&data_10490bb4, &data_104974e8, &data_10372e94> Type0;
typedef Token<&data_10490bac, &data_10493bcc, &data_10372e74> Type1;
typedef Token<&data_10490ba4, &data_10493bd8, &data_10372cf4> Type2;

extern "C" bool fn_03b31090(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
