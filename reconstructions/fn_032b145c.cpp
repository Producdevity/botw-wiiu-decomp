#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd4c;
extern "C" RuntimeTag data_10492c64;
extern "C" const RuntimeVTable data_102a48f0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a48e0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a48d0;

typedef Token<&data_1048fd4c, &data_10492c64, &data_102a48f0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102a48e0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102a48d0> Type2;

extern "C" bool fn_032b145c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
