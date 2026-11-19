#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487c30;
extern "C" RuntimeTag data_10487c34;
extern "C" const RuntimeVTable data_1002b278;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1002b268;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1002b258;

typedef Token<&data_10487c30, &data_10487c34, &data_1002b278> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1002b268> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1002b258> Type2;

extern "C" bool fn_0213ed08(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
