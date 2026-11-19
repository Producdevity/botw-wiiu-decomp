#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488f4c;
extern "C" RuntimeTag data_10488f50;
extern "C" const RuntimeVTable data_1005e9ec;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1005e9dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1005e9cc;

typedef Token<&data_10488f4c, &data_10488f50, &data_1005e9ec> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1005e9dc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1005e9cc> Type2;

extern "C" bool fn_0223b4dc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
