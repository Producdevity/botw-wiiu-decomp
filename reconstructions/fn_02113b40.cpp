#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104879a0;
extern "C" RuntimeTag data_104879a4;
extern "C" const RuntimeVTable data_10024cd0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10024cc0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10024cb0;

typedef Token<&data_104879a0, &data_104879a4, &data_10024cd0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10024cc0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10024cb0> Type2;

extern "C" bool fn_02113b40(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
