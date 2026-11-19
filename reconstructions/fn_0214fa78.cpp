#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487d80;
extern "C" RuntimeTag data_10487d84;
extern "C" const RuntimeVTable data_1002e6fc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1002e6bc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1002e6ac;

typedef Token<&data_10487d80, &data_10487d84, &data_1002e6fc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1002e6bc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1002e6ac> Type2;

extern "C" bool fn_0214fa78(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
