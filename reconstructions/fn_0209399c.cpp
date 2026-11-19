#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104871c0;
extern "C" RuntimeTag data_104871c4;
extern "C" const RuntimeVTable data_100126dc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100126cc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100126bc;

typedef Token<&data_104871c0, &data_104871c4, &data_100126dc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100126cc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100126bc> Type2;

extern "C" bool fn_0209399c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
