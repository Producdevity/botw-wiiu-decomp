#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048a4ac;
extern "C" RuntimeTag data_1048a4b0;
extern "C" const RuntimeVTable data_1009a6ac;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009a69c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1009a68c;

typedef Token<&data_1048a4ac, &data_1048a4b0, &data_1009a6ac> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1009a69c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1009a68c> Type2;

extern "C" bool fn_023a2558(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
