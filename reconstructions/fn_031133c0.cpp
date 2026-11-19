#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd00;
extern "C" RuntimeTag data_104925d4;
extern "C" const RuntimeVTable data_102813f0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102813e0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102813d0;

typedef Token<&data_1048fd00, &data_104925d4, &data_102813f0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102813e0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102813d0> Type2;

extern "C" bool fn_031133c0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
