#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048726c;
extern "C" RuntimeTag data_10487270;
extern "C" const RuntimeVTable data_10014b64;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10014b54;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10014b44;

typedef Token<&data_1048726c, &data_10487270, &data_10014b64> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10014b54> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10014b44> Type2;

extern "C" bool fn_020b2584(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
