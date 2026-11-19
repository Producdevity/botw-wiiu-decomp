#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104891f8;
extern "C" RuntimeTag data_104891f4;
extern "C" const RuntimeVTable data_10066708;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100666f8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100666e8;

typedef Token<&data_104891f8, &data_104891f4, &data_10066708> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100666f8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100666e8> Type2;

extern "C" bool fn_022683fc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
