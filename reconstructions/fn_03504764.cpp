#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fe14;
extern "C" RuntimeTag data_10494058;
extern "C" const RuntimeVTable data_102d227c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102d226c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d225c;

typedef Token<&data_1048fe14, &data_10494058, &data_102d227c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102d226c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d225c> Type2;

extern "C" bool fn_03504764(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
