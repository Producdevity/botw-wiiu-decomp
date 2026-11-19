#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490248;
extern "C" RuntimeTag data_104940e4;
extern "C" const RuntimeVTable data_102d4208;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_102d41f8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102d41e8;

typedef Token<&data_10490248, &data_104940e4, &data_102d4208> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_102d41f8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102d41e8> Type2;

extern "C" bool fn_0350f924(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
