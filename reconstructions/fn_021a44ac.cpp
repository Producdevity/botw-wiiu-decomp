#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488380;
extern "C" RuntimeTag data_10488384;
extern "C" const RuntimeVTable data_1003dfa8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003df98;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003df88;

typedef Token<&data_10488380, &data_10488384, &data_1003dfa8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003df98> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003df88> Type2;

extern "C" bool fn_021a44ac(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
