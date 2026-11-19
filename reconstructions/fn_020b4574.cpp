#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487280;
extern "C" RuntimeTag data_1048727c;
extern "C" const RuntimeVTable data_10014e80;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10014e70;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10014e60;

typedef Token<&data_10487280, &data_1048727c, &data_10014e80> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10014e70> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10014e60> Type2;

extern "C" bool fn_020b4574(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
