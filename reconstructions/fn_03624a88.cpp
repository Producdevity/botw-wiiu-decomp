#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104928ec;
extern "C" RuntimeTag data_10495c2c;
extern "C" const RuntimeVTable data_102fcd14;
extern "C" unsigned data_10486540;
extern "C" RuntimeTag data_10492318;
extern "C" const RuntimeVTable data_102fcd04;
extern "C" unsigned data_10485d40;
extern "C" RuntimeTag data_10492348;
extern "C" const RuntimeVTable data_102fcce4;

typedef Token<&data_104928ec, &data_10495c2c, &data_102fcd14> Type0;
typedef Token<&data_10486540, &data_10492318, &data_102fcd04> Type1;
typedef Token<&data_10485d40, &data_10492348, &data_102fcce4> Type2;

extern "C" bool fn_03624a88(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
