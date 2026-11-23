#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104913c0;
extern "C" RuntimeTag data_104915ac;
extern "C" const RuntimeVTable data_101ed7c4;
extern "C" unsigned data_10490e64;
extern "C" RuntimeTag data_10490e68;
extern "C" const RuntimeVTable data_101ed7b4;
extern "C" unsigned data_10490e5c;
extern "C" RuntimeTag data_10490e60;
extern "C" const RuntimeVTable data_101ed7a4;

typedef Token<&data_104913c0, &data_104915ac, &data_101ed7c4> Type0;
typedef Token<&data_10490e64, &data_10490e68, &data_101ed7b4> Type1;
typedef Token<&data_10490e5c, &data_10490e60, &data_101ed7a4> Type2;

extern "C" bool fn_02ddf110(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
