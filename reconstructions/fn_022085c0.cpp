#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488b04;
extern "C" RuntimeTag data_10488b00;
extern "C" const RuntimeVTable data_10053248;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10053238;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10053228;

typedef Token<&data_10488b04, &data_10488b00, &data_10053248> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10053238> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10053228> Type2;

extern "C" bool fn_022085c0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
