#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104870e4;
extern "C" RuntimeTag data_104870e0;
extern "C" const RuntimeVTable data_10010908;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100108f8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100108e8;

typedef Token<&data_104870e4, &data_104870e0, &data_10010908> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100108f8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100108e8> Type2;

extern "C" bool fn_02089a64(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
