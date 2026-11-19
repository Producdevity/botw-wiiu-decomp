#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490210;
extern "C" RuntimeTag data_104911b8;
extern "C" const RuntimeVTable data_101dfb3c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101dfb2c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101dfb1c;

typedef Token<&data_10490210, &data_104911b8, &data_101dfb3c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101dfb2c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101dfb1c> Type2;

extern "C" bool fn_02d0a064(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
