#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488180;
extern "C" RuntimeTag data_10488184;
extern "C" const RuntimeVTable data_10038f6c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10038f4c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10038f3c;

typedef Token<&data_10488180, &data_10488184, &data_10038f6c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10038f4c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10038f3c> Type2;

extern "C" bool fn_02185b24(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
