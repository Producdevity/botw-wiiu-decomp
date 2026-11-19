#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487a44;
extern "C" RuntimeTag data_10487a40;
extern "C" const RuntimeVTable data_10026330;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10026320;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10026310;

typedef Token<&data_10487a44, &data_10487a40, &data_10026330> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10026320> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10026310> Type2;

extern "C" bool fn_0211b96c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
