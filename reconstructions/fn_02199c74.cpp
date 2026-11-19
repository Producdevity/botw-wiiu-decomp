#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104882dc;
extern "C" RuntimeTag data_104882e0;
extern "C" const RuntimeVTable data_1003c06c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003c05c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003c04c;

typedef Token<&data_104882dc, &data_104882e0, &data_1003c06c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003c05c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003c04c> Type2;

extern "C" bool fn_02199c74(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
