#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490114;
extern "C" RuntimeTag data_104925f4;
extern "C" const RuntimeVTable data_102828a0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10282890;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10282880;

typedef Token<&data_10490114, &data_104925f4, &data_102828a0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10282890> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10282880> Type2;

extern "C" bool fn_0311a3c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
