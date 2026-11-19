#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048887c;
extern "C" RuntimeTag data_10488880;
extern "C" const RuntimeVTable data_1004ca9c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004ca8c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004ca7c;

typedef Token<&data_1048887c, &data_10488880, &data_1004ca9c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004ca8c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004ca7c> Type2;

extern "C" bool fn_021ea3f4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
