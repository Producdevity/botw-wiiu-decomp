#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b448;
extern "C" RuntimeTag data_1048b44c;
extern "C" const RuntimeVTable data_100ce6a4;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100ce694;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ce684;

typedef Token<&data_1048b448, &data_1048b44c, &data_100ce6a4> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100ce694> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100ce684> Type2;

extern "C" bool fn_024f2394(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
