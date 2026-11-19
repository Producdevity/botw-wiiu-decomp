#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487fc8;
extern "C" RuntimeTag data_10487fc4;
extern "C" const RuntimeVTable data_10034510;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10034500;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100344f0;

typedef Token<&data_10487fc8, &data_10487fc4, &data_10034510> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10034500> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100344f0> Type2;

extern "C" bool fn_0216e5a4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
