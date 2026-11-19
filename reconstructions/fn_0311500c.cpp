#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fdb0;
extern "C" RuntimeTag data_104925e8;
extern "C" const RuntimeVTable data_10281c94;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10281c84;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10281c74;

typedef Token<&data_1048fdb0, &data_104925e8, &data_10281c94> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10281c84> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10281c74> Type2;

extern "C" bool fn_0311500c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
