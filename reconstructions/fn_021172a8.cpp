#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104879e0;
extern "C" RuntimeTag data_104879dc;
extern "C" const RuntimeVTable data_100255a0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10025590;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10025580;

typedef Token<&data_104879e0, &data_104879dc, &data_100255a0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10025590> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10025580> Type2;

extern "C" bool fn_021172a8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
