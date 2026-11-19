#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048844c;
extern "C" RuntimeTag data_10488450;
extern "C" const RuntimeVTable data_100406dc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100406cc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100406bc;

typedef Token<&data_1048844c, &data_10488450, &data_100406dc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100406cc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100406bc> Type2;

extern "C" bool fn_021b482c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
