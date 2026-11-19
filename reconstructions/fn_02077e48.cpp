#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486ef4;
extern "C" RuntimeTag data_10486ef8;
extern "C" const RuntimeVTable data_1000d384;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000d374;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000d364;

typedef Token<&data_10486ef4, &data_10486ef8, &data_1000d384> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1000d374> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1000d364> Type2;

extern "C" bool fn_02077e48(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
