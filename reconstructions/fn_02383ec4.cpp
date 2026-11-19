#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a2c8;
extern "C" RuntimeTag data_1048a2cc;
extern "C" const RuntimeVTable data_10094840;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10094830;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10094820;

typedef Token<&data_1048a2c8, &data_1048a2cc, &data_10094840> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10094830> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10094820> Type2;

extern "C" bool fn_02383ec4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
