#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd44;
extern "C" RuntimeTag data_10492920;
extern "C" const RuntimeVTable data_1029ad10;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1029ad00;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029acf0;

typedef Token<&data_1048fd44, &data_10492920, &data_1029ad10> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1029ad00> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1029acf0> Type2;

extern "C" bool fn_03269bc0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
