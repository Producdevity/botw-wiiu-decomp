#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488a34;
extern "C" RuntimeTag data_10488a38;
extern "C" const RuntimeVTable data_10050c20;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10050c10;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10050c00;

typedef Token<&data_10488a34, &data_10488a38, &data_10050c20> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10050c10> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10050c00> Type2;

extern "C" bool fn_021fd8c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
