#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490100;
extern "C" RuntimeTag data_10494090;
extern "C" const RuntimeVTable data_102d321c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102d320c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d31fc;

typedef Token<&data_10490100, &data_10494090, &data_102d321c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102d320c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d31fc> Type2;

extern "C" bool fn_0350a3d8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
