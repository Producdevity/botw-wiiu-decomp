#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fdf4;
extern "C" RuntimeTag data_10492d08;
extern "C" const RuntimeVTable data_102a90a0;
extern "C" unsigned data_10487140;
extern "C" RuntimeTag data_10489444;
extern "C" const RuntimeVTable data_102a9080;
extern "C" unsigned data_1048713c;
extern "C" RuntimeTag data_10489440;
extern "C" const RuntimeVTable data_102a8fe0;

typedef Token<&data_1048fdf4, &data_10492d08, &data_102a90a0> Type0;
typedef Token<&data_10487140, &data_10489444, &data_102a9080> Type1;
typedef Token<&data_1048713c, &data_10489440, &data_102a8fe0> Type2;

extern "C" bool fn_032d1550(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
