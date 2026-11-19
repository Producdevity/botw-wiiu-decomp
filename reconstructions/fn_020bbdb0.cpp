#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104872d0;
extern "C" RuntimeTag data_104872cc;
extern "C" const RuntimeVTable data_10015ab0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10015aa0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10015a90;

typedef Token<&data_104872d0, &data_104872cc, &data_10015ab0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10015aa0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10015a90> Type2;

extern "C" bool fn_020bbdb0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
