#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490110;
extern "C" RuntimeTag data_10492cb8;
extern "C" const RuntimeVTable data_102a691c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a690c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a68fc;

typedef Token<&data_10490110, &data_10492cb8, &data_102a691c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102a690c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102a68fc> Type2;

extern "C" bool fn_032bba18(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
