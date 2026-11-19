#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486f1c;
extern "C" RuntimeTag data_10486f20;
extern "C" const RuntimeVTable data_10045e20;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10045de8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10045dd8;

typedef Token<&data_10486f1c, &data_10486f20, &data_10045e20> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10045de8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10045dd8> Type2;

extern "C" bool fn_021d0344(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
