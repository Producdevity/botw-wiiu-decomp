#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488f24;
extern "C" RuntimeTag data_10488f28;
extern "C" const RuntimeVTable data_1005e2b4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1005e2a4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1005e294;

typedef Token<&data_10488f24, &data_10488f28, &data_1005e2b4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1005e2a4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1005e294> Type2;

extern "C" bool fn_022382b4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
