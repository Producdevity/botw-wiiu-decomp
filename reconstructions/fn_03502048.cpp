#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd5c;
extern "C" RuntimeTag data_10494010;
extern "C" const RuntimeVTable data_102d1a98;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102d1a88;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d1a78;

typedef Token<&data_1048fd5c, &data_10494010, &data_102d1a98> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102d1a88> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d1a78> Type2;

extern "C" bool fn_03502048(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
