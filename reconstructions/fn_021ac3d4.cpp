#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104883ec;
extern "C" RuntimeTag data_104883f0;
extern "C" const RuntimeVTable data_1003f314;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003f304;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003f2f4;

typedef Token<&data_104883ec, &data_104883f0, &data_1003f314> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003f304> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003f2f4> Type2;

extern "C" bool fn_021ac3d4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
