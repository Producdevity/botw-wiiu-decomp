#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104928cc;
extern "C" RuntimeTag data_104928d0;
extern "C" const RuntimeVTable data_10295298;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_10295248;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_10295238;

typedef Token<&data_104928cc, &data_104928d0, &data_10295298> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_10295248> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_10295238> Type2;

extern "C" bool fn_031f5e30(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
