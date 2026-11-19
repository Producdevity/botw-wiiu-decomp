#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489b10;
extern "C" RuntimeTag data_10489b0c;
extern "C" const RuntimeVTable data_1007d710;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007d700;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007d6f0;

typedef Token<&data_10489b10, &data_10489b0c, &data_1007d710> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1007d700> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1007d6f0> Type2;

extern "C" bool fn_022fda68(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
