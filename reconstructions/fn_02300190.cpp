#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104870a8;
extern "C" RuntimeTag data_104870a4;
extern "C" const RuntimeVTable data_1007de10;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007de00;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007ddf0;

typedef Token<&data_104870a8, &data_104870a4, &data_1007de10> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1007de00> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1007ddf0> Type2;

extern "C" bool fn_02300190(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
