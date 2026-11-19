#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488138;
extern "C" RuntimeTag data_1048813c;
extern "C" const RuntimeVTable data_10037fd4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10037fc4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10037fb4;

typedef Token<&data_10488138, &data_1048813c, &data_10037fd4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10037fc4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10037fb4> Type2;

extern "C" bool fn_02180f00(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
