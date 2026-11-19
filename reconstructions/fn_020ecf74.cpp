#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486f4c;
extern "C" RuntimeTag data_10486f50;
extern "C" const RuntimeVTable data_1001d7dc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001d7cc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001d7bc;

typedef Token<&data_10486f4c, &data_10486f50, &data_1001d7dc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1001d7cc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1001d7bc> Type2;

extern "C" bool fn_020ecf74(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
