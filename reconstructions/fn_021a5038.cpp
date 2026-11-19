#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048838c;
extern "C" RuntimeTag data_10488390;
extern "C" const RuntimeVTable data_1003e0ec;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003e0dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003e0cc;

typedef Token<&data_1048838c, &data_10488390, &data_1003e0ec> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003e0dc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003e0cc> Type2;

extern "C" bool fn_021a5038(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
