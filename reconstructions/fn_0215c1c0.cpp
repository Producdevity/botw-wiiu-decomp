#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487e8c;
extern "C" RuntimeTag data_10487e90;
extern "C" const RuntimeVTable data_10030e48;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10030e38;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10030e28;

typedef Token<&data_10487e8c, &data_10487e90, &data_10030e48> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10030e38> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10030e28> Type2;

extern "C" bool fn_0215c1c0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
