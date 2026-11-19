#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486e78;
extern "C" RuntimeTag data_10486e7c;
extern "C" const RuntimeVTable data_1000c580;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000c570;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000c560;

typedef Token<&data_10486e78, &data_10486e7c, &data_1000c580> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1000c570> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1000c560> Type2;

extern "C" bool fn_020747b4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
