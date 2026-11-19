#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490140;
extern "C" RuntimeTag data_104925f8;
extern "C" const RuntimeVTable data_102829e4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102829d4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102829c4;

typedef Token<&data_10490140, &data_104925f8, &data_102829e4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102829d4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102829c4> Type2;

extern "C" bool fn_0311ad3c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
