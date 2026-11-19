#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fbd8;
extern "C" RuntimeTag data_10493fd0;
extern "C" const RuntimeVTable data_102d0e48;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102d0e38;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d0e28;

typedef Token<&data_1048fbd8, &data_10493fd0, &data_102d0e48> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102d0e38> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d0e28> Type2;

extern "C" bool fn_034fd5e0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
