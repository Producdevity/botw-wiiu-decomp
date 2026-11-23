#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104867d8;
extern "C" RuntimeTag data_104928e0;
extern "C" const RuntimeVTable data_102fced8;
extern "C" unsigned data_104865a4;
extern "C" RuntimeTag data_10492314;
extern "C" const RuntimeVTable data_102fcec8;
extern "C" unsigned data_10485d40;
extern "C" RuntimeTag data_10492348;
extern "C" const RuntimeVTable data_102fcea8;

typedef Token<&data_104867d8, &data_104928e0, &data_102fced8> Type0;
typedef Token<&data_104865a4, &data_10492314, &data_102fcec8> Type1;
typedef Token<&data_10485d40, &data_10492348, &data_102fcea8> Type2;

extern "C" bool fn_036257d4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
