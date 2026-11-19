#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fdf8;
extern "C" RuntimeTag data_10492d0c;
extern "C" const RuntimeVTable data_102a945c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a944c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a943c;

typedef Token<&data_1048fdf8, &data_10492d0c, &data_102a945c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102a944c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102a943c> Type2;

extern "C" bool fn_032d349c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
