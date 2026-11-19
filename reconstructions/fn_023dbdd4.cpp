#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a7cc;
extern "C" RuntimeTag data_1048a7c8;
extern "C" const RuntimeVTable data_100a4870;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100a4860;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100a4850;

typedef Token<&data_1048a7cc, &data_1048a7c8, &data_100a4870> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100a4860> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100a4850> Type2;

extern "C" bool fn_023dbdd4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
