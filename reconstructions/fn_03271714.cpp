#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490158;
extern "C" RuntimeTag data_1049294c;
extern "C" const RuntimeVTable data_1029c6bc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1029c6ac;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029c69c;

typedef Token<&data_10490158, &data_1049294c, &data_1029c6bc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1029c6ac> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1029c69c> Type2;

extern "C" bool fn_03271714(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
