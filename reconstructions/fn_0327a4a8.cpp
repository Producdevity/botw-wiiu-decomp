#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490254;
extern "C" RuntimeTag data_10492964;
extern "C" const RuntimeVTable data_1029da10;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1029d998;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029d988;

typedef Token<&data_10490254, &data_10492964, &data_1029da10> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1029d998> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1029d988> Type2;

extern "C" bool fn_0327a4a8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
