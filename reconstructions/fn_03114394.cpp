#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd0c;
extern "C" RuntimeTag data_104925dc;
extern "C" const RuntimeVTable data_102818e0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102818d0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102818c0;

typedef Token<&data_1048fd0c, &data_104925dc, &data_102818e0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102818d0> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102818c0> Type2;

extern "C" bool fn_03114394(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
